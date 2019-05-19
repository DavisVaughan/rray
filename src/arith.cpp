#include <rray.h>
#include <dispatch.h>

// -----------------------------------------------------------------------------

template <typename T>
Rcpp::RObject rray__add_impl(const xt::rarray<T>& x,
                             const xt::rarray<T>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<T> res = x_view + y_view;

  return Rcpp::as<Rcpp::RObject>(res);
}

// Logicals return integers
Rcpp::RObject rray__add_impl(const xt::rarray<rlogical>& x,
                             const xt::rarray<rlogical>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<int> res = x_view + y_view;

  return Rcpp::as<Rcpp::RObject>(res);
}

// [[Rcpp::export(rng = false)]]
Rcpp::RObject rray__add(Rcpp::RObject x, Rcpp::RObject y) {
  DISPATCH_BINARY(rray__add_impl, x, y);
}

// -----------------------------------------------------------------------------

template <typename T>
Rcpp::RObject rray__subtract_impl(const xt::rarray<T>& x,
                                  const xt::rarray<T>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<T> res = x_view - y_view;

  return Rcpp::as<Rcpp::RObject>(res);
}

// Logicals return integers
Rcpp::RObject rray__subtract_impl(const xt::rarray<rlogical>& x,
                                  const xt::rarray<rlogical>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<int> res = x_view - y_view;

  return Rcpp::as<Rcpp::RObject>(res);
}

// [[Rcpp::export(rng = false)]]
Rcpp::RObject rray__subtract(Rcpp::RObject x, Rcpp::RObject y) {
  DISPATCH_BINARY(rray__subtract_impl, x, y);
}

// -----------------------------------------------------------------------------

// Should always take and return a numeric result

xt::rarray<double> rray__divide_impl(const xt::rarray<double>& x,
                                     const xt::rarray<double>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  return x_view / y_view;
}

// [[Rcpp::export(rng = false)]]
Rcpp::RObject rray__divide(Rcpp::RObject x, Rcpp::RObject y) {
  DISPATCH_BINARY(rray__divide_impl, x, y);
}

// -----------------------------------------------------------------------------

template <typename T>
Rcpp::RObject rray__multiply_impl(const xt::rarray<T>& x,
                                  const xt::rarray<T>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<T> res = x_view * y_view;

  return Rcpp::as<Rcpp::RObject>(res);
}

// Logicals return integers
Rcpp::RObject rray__multiply_impl(const xt::rarray<rlogical>& x,
                                  const xt::rarray<rlogical>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<int> res = x_view * y_view;

  return Rcpp::as<Rcpp::RObject>(res);
}

// [[Rcpp::export(rng = false)]]
Rcpp::RObject rray__multiply(Rcpp::RObject x, Rcpp::RObject y) {
  DISPATCH_BINARY(rray__multiply_impl, x, y);
}

// -----------------------------------------------------------------------------

// TODO somehow use the faster template version? pow<N>(x)

template <typename T>
Rcpp::RObject rray__pow_impl(const xt::rarray<T>& x,
                             const xt::rarray<T>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<T> res = xt::pow(x_view, y_view);

  return Rcpp::as<Rcpp::RObject>(res);
}

// Logicals return integers
Rcpp::RObject rray__pow_impl(const xt::rarray<rlogical>& x,
                             const xt::rarray<rlogical>& y) {

  Rcpp::IntegerVector dim = rray__dim2(rray__dim(SEXP(x)), rray__dim(SEXP(y)));
  const int& dims = dim.size();
  auto x_view = rray__increase_dims_view(x, dims);
  auto y_view = rray__increase_dims_view(y, dims);

  xt::rarray<int> res = xt::pow(x_view, y_view);

  return Rcpp::as<Rcpp::RObject>(res);
}

// [[Rcpp::export(rng = false)]]
Rcpp::RObject rray__pow(Rcpp::RObject x, Rcpp::RObject y) {
  DISPATCH_BINARY(rray__pow_impl, x, y);
}

// -----------------------------------------------------------------------------

// Not implementing `rray__modulus()` as it ONLY works with integers
// and crashes when dividing by 0. It is essentially a less stable
// `rray_fmod()` which always returns a double, and can handle the
// dividing by 0 case.

// -----------------------------------------------------------------------------

template <typename T>
Rcpp::RObject rray__identity_impl(const xt::rarray<T>& x) {
  xt::rarray<T> res = xt::operator+(x);
  return Rcpp::as<Rcpp::RObject>(res);
}

// Logicals as integers
Rcpp::RObject rray__identity_impl(const xt::rarray<rlogical>& x) {
  xt::rarray<int> res = xt::operator+(x);
  return Rcpp::as<Rcpp::RObject>(res);
}

// [[Rcpp::export(rng = false)]]
Rcpp::RObject rray__identity(Rcpp::RObject x) {
  DISPATCH_UNARY(rray__identity_impl, x);
}

// -----------------------------------------------------------------------------

template <typename T>
Rcpp::RObject rray__opposite_impl(const xt::rarray<T>& x) {
  xt::rarray<T> res = xt::operator-(x);
  return Rcpp::as<Rcpp::RObject>(res);
}

// Logicals as integers
Rcpp::RObject rray__opposite_impl(const xt::rarray<rlogical>& x) {
  xt::rarray<int> res = xt::operator-(x);
  return Rcpp::as<Rcpp::RObject>(res);
}

// [[Rcpp::export(rng = false)]]
Rcpp::RObject rray__opposite(Rcpp::RObject x) {
  DISPATCH_UNARY(rray__opposite_impl, x);
}

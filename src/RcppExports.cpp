// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/rray.h"
#include <Rcpp.h>

using namespace Rcpp;

// rray__broadcast
Rcpp::RObject rray__broadcast(Rcpp::RObject x, Rcpp::IntegerVector dim);
RcppExport SEXP _rray_rray__broadcast(SEXP xSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(rray__broadcast(x, dim));
    return rcpp_result_gen;
END_RCPP
}
// rray_ones_cpp
SEXP rray_ones_cpp(const std::vector<std::size_t>& shape);
RcppExport SEXP _rray_rray_ones_cpp(SEXP shapeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::size_t>& >::type shape(shapeSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_ones_cpp(shape));
    return rcpp_result_gen;
END_RCPP
}
// rray_zeros_cpp
SEXP rray_zeros_cpp(const std::vector<std::size_t>& shape);
RcppExport SEXP _rray_rray_zeros_cpp(SEXP shapeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::size_t>& >::type shape(shapeSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_zeros_cpp(shape));
    return rcpp_result_gen;
END_RCPP
}
// rray_eye_cpp
SEXP rray_eye_cpp(const std::vector<std::size_t> shape, int k);
RcppExport SEXP _rray_rray_eye_cpp(SEXP shapeSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::size_t> >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_eye_cpp(shape, k));
    return rcpp_result_gen;
END_RCPP
}
// rray_eye_square_cpp
SEXP rray_eye_square_cpp(std::size_t n, int k);
RcppExport SEXP _rray_rray_eye_square_cpp(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_eye_square_cpp(n, k));
    return rcpp_result_gen;
END_RCPP
}
// rray__dim
Rcpp::IntegerVector rray__dim(const Rcpp::RObject& x);
RcppExport SEXP _rray_rray__dim(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rray__dim(x));
    return rcpp_result_gen;
END_RCPP
}
// rray__dims
int rray__dims(const Rcpp::RObject& x);
RcppExport SEXP _rray_rray__dims(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rray__dims(x));
    return rcpp_result_gen;
END_RCPP
}
// rray__increase_dims
Rcpp::IntegerVector rray__increase_dims(const Rcpp::IntegerVector& dim, const int& dims);
RcppExport SEXP _rray_rray__increase_dims(SEXP dimSEXP, SEXP dimsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< const int& >::type dims(dimsSEXP);
    rcpp_result_gen = Rcpp::wrap(rray__increase_dims(dim, dims));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_binary_cpp
SEXP rray_op_binary_cpp(const std::string& op, SEXP x, SEXP y);
RcppExport SEXP _rray_rray_op_binary_cpp(SEXP opSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_binary_cpp(op, x, y));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_trinary_cpp
SEXP rray_op_trinary_cpp(const std::string& op, SEXP x, SEXP y, SEXP z);
RcppExport SEXP _rray_rray_op_trinary_cpp(SEXP opSEXP, SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_trinary_cpp(op, x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_one_cpp
SEXP rray_op_unary_one_cpp(std::string op, SEXP x, SEXP arg);
RcppExport SEXP _rray_rray_op_unary_one_cpp(SEXP opSEXP, SEXP xSEXP, SEXP argSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg(argSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_one_cpp(op, x, arg));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_three_cpp
SEXP rray_op_unary_three_cpp(std::string op, SEXP x, SEXP arg1, SEXP arg2, SEXP arg3);
RcppExport SEXP _rray_rray_op_unary_three_cpp(SEXP opSEXP, SEXP xSEXP, SEXP arg1SEXP, SEXP arg2SEXP, SEXP arg3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg1(arg1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg2(arg2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg3(arg3SEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_three_cpp(op, x, arg1, arg2, arg3));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_two_cpp
SEXP rray_op_unary_two_cpp(std::string op, SEXP x, SEXP arg1, SEXP arg2);
RcppExport SEXP _rray_rray_op_unary_two_cpp(SEXP opSEXP, SEXP xSEXP, SEXP arg1SEXP, SEXP arg2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg1(arg1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type arg2(arg2SEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_two_cpp(op, x, arg1, arg2));
    return rcpp_result_gen;
END_RCPP
}
// rray_op_unary_cpp
SEXP rray_op_unary_cpp(std::string op, SEXP x);
RcppExport SEXP _rray_rray_op_unary_cpp(SEXP opSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_op_unary_cpp(op, x));
    return rcpp_result_gen;
END_RCPP
}
// rray__sort
Rcpp::RObject rray__sort(Rcpp::RObject x, Rcpp::RObject axis);
RcppExport SEXP _rray_rray__sort(SEXP xSEXP, SEXP axisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type axis(axisSEXP);
    rcpp_result_gen = Rcpp::wrap(rray__sort(x, axis));
    return rcpp_result_gen;
END_RCPP
}
// rray__argmax
Rcpp::RObject rray__argmax(Rcpp::RObject x, Rcpp::RObject axis);
RcppExport SEXP _rray_rray__argmax(SEXP xSEXP, SEXP axisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type axis(axisSEXP);
    rcpp_result_gen = Rcpp::wrap(rray__argmax(x, axis));
    return rcpp_result_gen;
END_RCPP
}
// rray__argmin
Rcpp::RObject rray__argmin(Rcpp::RObject x, Rcpp::RObject axis);
RcppExport SEXP _rray_rray__argmin(SEXP xSEXP, SEXP axisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type axis(axisSEXP);
    rcpp_result_gen = Rcpp::wrap(rray__argmin(x, axis));
    return rcpp_result_gen;
END_RCPP
}
// rray_reducer_cpp
SEXP rray_reducer_cpp(std::string op, SEXP x, SEXP axes);
RcppExport SEXP _rray_rray_reducer_cpp(SEXP opSEXP, SEXP xSEXP, SEXP axesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type axes(axesSEXP);
    rcpp_result_gen = Rcpp::wrap(rray_reducer_cpp(op, x, axes));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rray_rray__broadcast", (DL_FUNC) &_rray_rray__broadcast, 2},
    {"_rray_rray_ones_cpp", (DL_FUNC) &_rray_rray_ones_cpp, 1},
    {"_rray_rray_zeros_cpp", (DL_FUNC) &_rray_rray_zeros_cpp, 1},
    {"_rray_rray_eye_cpp", (DL_FUNC) &_rray_rray_eye_cpp, 2},
    {"_rray_rray_eye_square_cpp", (DL_FUNC) &_rray_rray_eye_square_cpp, 2},
    {"_rray_rray__dim", (DL_FUNC) &_rray_rray__dim, 1},
    {"_rray_rray__dims", (DL_FUNC) &_rray_rray__dims, 1},
    {"_rray_rray__increase_dims", (DL_FUNC) &_rray_rray__increase_dims, 2},
    {"_rray_rray_op_binary_cpp", (DL_FUNC) &_rray_rray_op_binary_cpp, 3},
    {"_rray_rray_op_trinary_cpp", (DL_FUNC) &_rray_rray_op_trinary_cpp, 4},
    {"_rray_rray_op_unary_one_cpp", (DL_FUNC) &_rray_rray_op_unary_one_cpp, 3},
    {"_rray_rray_op_unary_three_cpp", (DL_FUNC) &_rray_rray_op_unary_three_cpp, 5},
    {"_rray_rray_op_unary_two_cpp", (DL_FUNC) &_rray_rray_op_unary_two_cpp, 4},
    {"_rray_rray_op_unary_cpp", (DL_FUNC) &_rray_rray_op_unary_cpp, 2},
    {"_rray_rray__sort", (DL_FUNC) &_rray_rray__sort, 2},
    {"_rray_rray__argmax", (DL_FUNC) &_rray_rray__argmax, 2},
    {"_rray_rray__argmin", (DL_FUNC) &_rray_rray__argmin, 2},
    {"_rray_rray_reducer_cpp", (DL_FUNC) &_rray_rray_reducer_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rray(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

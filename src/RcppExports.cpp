// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// testfft
void testfft(Rcpp::NumericVector x);
RcppExport SEXP _orderedPvalue_testfft(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    testfft(x);
    return R_NilValue;
END_RCPP
}
// test
void test();
RcppExport SEXP _orderedPvalue_test() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    test();
    return R_NilValue;
END_RCPP
}
// testConv
void testConv(Rcpp::NumericVector x, Rcpp::NumericVector y);
RcppExport SEXP _orderedPvalue_testConv(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    testConv(x, y);
    return R_NilValue;
END_RCPP
}
// compute_prob
double compute_prob(R_xlen_t m, SEXP R_g_value, SEXP R_h_value, R_xlen_t n_t, SEXP R_diff_t);
RcppExport SEXP _orderedPvalue_compute_prob(SEXP mSEXP, SEXP R_g_valueSEXP, SEXP R_h_valueSEXP, SEXP n_tSEXP, SEXP R_diff_tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< R_xlen_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_g_value(R_g_valueSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_h_value(R_h_valueSEXP);
    Rcpp::traits::input_parameter< R_xlen_t >::type n_t(n_tSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_diff_t(R_diff_tSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_prob(m, R_g_value, R_h_value, n_t, R_diff_t));
    return rcpp_result_gen;
END_RCPP
}
// compute_prob_fft
double compute_prob_fft(R_xlen_t m, SEXP R_g_value, SEXP R_h_value, R_xlen_t n_t, SEXP R_diff_t);
RcppExport SEXP _orderedPvalue_compute_prob_fft(SEXP mSEXP, SEXP R_g_valueSEXP, SEXP R_h_valueSEXP, SEXP n_tSEXP, SEXP R_diff_tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< R_xlen_t >::type m(mSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_g_value(R_g_valueSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_h_value(R_h_valueSEXP);
    Rcpp::traits::input_parameter< R_xlen_t >::type n_t(n_tSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_diff_t(R_diff_tSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_prob_fft(m, R_g_value, R_h_value, n_t, R_diff_t));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_orderedPvalue_testfft", (DL_FUNC) &_orderedPvalue_testfft, 1},
    {"_orderedPvalue_test", (DL_FUNC) &_orderedPvalue_test, 0},
    {"_orderedPvalue_testConv", (DL_FUNC) &_orderedPvalue_testConv, 2},
    {"_orderedPvalue_compute_prob", (DL_FUNC) &_orderedPvalue_compute_prob, 5},
    {"_orderedPvalue_compute_prob_fft", (DL_FUNC) &_orderedPvalue_compute_prob_fft, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_orderedPvalue(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

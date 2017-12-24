// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "gprofiler_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// callback1_cpp
void callback1_cpp();
RcppExport SEXP _gprofiler_callback1_cpp() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    callback1_cpp();
    return R_NilValue;
END_RCPP
}
// callback2_cpp
void callback2_cpp();
RcppExport SEXP _gprofiler_callback2_cpp() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    callback2_cpp();
    return R_NilValue;
END_RCPP
}
// callback3_cpp
void callback3_cpp();
RcppExport SEXP _gprofiler_callback3_cpp() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    callback3_cpp();
    return R_NilValue;
END_RCPP
}
// init_profiler_impl
List init_profiler_impl();
RcppExport SEXP _gprofiler_init_profiler_impl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(init_profiler_impl());
    return rcpp_result_gen;
END_RCPP
}
// start_profiler_impl
void start_profiler_impl(List ldc, std::string path);
RcppExport SEXP _gprofiler_start_profiler_impl(SEXP ldcSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ldc(ldcSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    start_profiler_impl(ldc, path);
    return R_NilValue;
END_RCPP
}
// stop_profiler_impl
void stop_profiler_impl(List ldc);
RcppExport SEXP _gprofiler_stop_profiler_impl(SEXP ldcSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ldc(ldcSEXP);
    stop_profiler_impl(ldc);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gprofiler_callback1_cpp", (DL_FUNC) &_gprofiler_callback1_cpp, 0},
    {"_gprofiler_callback2_cpp", (DL_FUNC) &_gprofiler_callback2_cpp, 0},
    {"_gprofiler_callback3_cpp", (DL_FUNC) &_gprofiler_callback3_cpp, 0},
    {"_gprofiler_init_profiler_impl", (DL_FUNC) &_gprofiler_init_profiler_impl, 0},
    {"_gprofiler_start_profiler_impl", (DL_FUNC) &_gprofiler_start_profiler_impl, 2},
    {"_gprofiler_stop_profiler_impl", (DL_FUNC) &_gprofiler_stop_profiler_impl, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_gprofiler(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

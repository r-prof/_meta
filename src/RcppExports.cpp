// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// start_profiler_impl
void start_profiler_impl(CharacterVector path);
RcppExport SEXP gprofiler_start_profiler_impl(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    start_profiler_impl(path);
    return R_NilValue;
END_RCPP
}
// stop_profiler_impl
void stop_profiler_impl();
RcppExport SEXP gprofiler_stop_profiler_impl() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    stop_profiler_impl();
    return R_NilValue;
END_RCPP
}

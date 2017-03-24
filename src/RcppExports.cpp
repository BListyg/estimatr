// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lm_robust_helper
List lm_robust_helper(const arma::vec& y, const arma::mat& X, const String type);
RcppExport SEXP estimatorpack_lm_robust_helper(SEXP ySEXP, SEXP XSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const String >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(lm_robust_helper(y, X, type));
    return rcpp_result_gen;
END_RCPP
}

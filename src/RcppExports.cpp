// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ht_var
double ht_var(const double& p1p2, const double& p1, const double& p2, const double& y1, const double& y2);
RcppExport SEXP _estimatr_ht_var(SEXP p1p2SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP y1SEXP, SEXP y2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type p1p2(p1p2SEXP);
    Rcpp::traits::input_parameter< const double& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const double& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< const double& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const double& >::type y2(y2SEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var(p1p2, p1, p2, y1, y2));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_total
double ht_var_total(const arma::vec& y, const arma::mat& p);
RcppExport SEXP _estimatr_ht_var_total(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_total(y, p));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_total2
double ht_var_total2(const arma::vec& y, const arma::mat& p);
RcppExport SEXP _estimatr_ht_var_total2(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_total2(y, p));
    return rcpp_result_gen;
END_RCPP
}
// ht_covar_partial
double ht_covar_partial(const arma::vec& y1, const arma::vec& y0, const arma::mat& p10, const arma::vec& p1, const arma::vec& p0);
RcppExport SEXP _estimatr_ht_covar_partial(SEXP y1SEXP, SEXP y0SEXP, SEXP p10SEXP, SEXP p1SEXP, SEXP p0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type p10(p10SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p0(p0SEXP);
    rcpp_result_gen = Rcpp::wrap(ht_covar_partial(y1, y0, p10, p1, p0));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_partial
double ht_var_partial(const arma::vec& y, const arma::mat& p);
RcppExport SEXP _estimatr_ht_var_partial(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_partial(y, p));
    return rcpp_result_gen;
END_RCPP
}
// ht_covar_total
double ht_covar_total(const arma::vec& y0, const arma::vec& y1, const arma::mat& p00, const arma::mat& p11, const arma::mat& pj);
RcppExport SEXP _estimatr_ht_covar_total(SEXP y0SEXP, SEXP y1SEXP, SEXP p00SEXP, SEXP p11SEXP, SEXP pjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type p00(p00SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type p11(p11SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pj(pjSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_covar_total(y0, y1, p00, p11, pj));
    return rcpp_result_gen;
END_RCPP
}
// joint_incl_pr
double joint_incl_pr(const double& pi, const double& pj, const double& nleft, const double& ntotal);
RcppExport SEXP _estimatr_joint_incl_pr(SEXP piSEXP, SEXP pjSEXP, SEXP nleftSEXP, SEXP ntotalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const double& >::type pj(pjSEXP);
    Rcpp::traits::input_parameter< const double& >::type nleft(nleftSEXP);
    Rcpp::traits::input_parameter< const double& >::type ntotal(ntotalSEXP);
    rcpp_result_gen = Rcpp::wrap(joint_incl_pr(pi, pj, nleft, ntotal));
    return rcpp_result_gen;
END_RCPP
}
// gen_pr_matrix_complete
arma::mat gen_pr_matrix_complete(const arma::vec& prs);
RcppExport SEXP _estimatr_gen_pr_matrix_complete(SEXP prsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type prs(prsSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_pr_matrix_complete(prs));
    return rcpp_result_gen;
END_RCPP
}
// ht_var_total_clusters
double ht_var_total_clusters(const arma::vec& y, const arma::vec& ps, const arma::vec& cluster);
RcppExport SEXP _estimatr_ht_var_total_clusters(SEXP ySEXP, SEXP psSEXP, SEXP clusterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ps(psSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cluster(clusterSEXP);
    rcpp_result_gen = Rcpp::wrap(ht_var_total_clusters(y, ps, cluster));
    return rcpp_result_gen;
END_RCPP
}
// mult_diag2
arma::mat mult_diag2(const arma::mat& x, const arma::vec& d);
RcppExport SEXP _estimatr_mult_diag2(SEXP xSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(mult_diag2(x, d));
    return rcpp_result_gen;
END_RCPP
}
// mat_sqrt_inv
arma::mat mat_sqrt_inv(const arma::mat& X, const bool& tol);
RcppExport SEXP _estimatr_mat_sqrt_inv(SEXP XSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool& >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(mat_sqrt_inv(X, tol));
    return rcpp_result_gen;
END_RCPP
}
// lm_robust_helper
List lm_robust_helper(const arma::vec& y, arma::mat& X, const Rcpp::Nullable<Rcpp::NumericMatrix>& Xunweighted, const Rcpp::Nullable<Rcpp::NumericVector>& weight, const double& weight_mean, const Rcpp::Nullable<Rcpp::NumericVector>& cluster, const bool& ci, const String type, const std::vector<bool>& which_covs);
RcppExport SEXP _estimatr_lm_robust_helper(SEXP ySEXP, SEXP XSEXP, SEXP XunweightedSEXP, SEXP weightSEXP, SEXP weight_meanSEXP, SEXP clusterSEXP, SEXP ciSEXP, SEXP typeSEXP, SEXP which_covsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Xunweighted(XunweightedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector>& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const double& >::type weight_mean(weight_meanSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector>& >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ci(ciSEXP);
    Rcpp::traits::input_parameter< const String >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type which_covs(which_covsSEXP);
    rcpp_result_gen = Rcpp::wrap(lm_robust_helper(y, X, Xunweighted, weight, weight_mean, cluster, ci, type, which_covs));
    return rcpp_result_gen;
END_RCPP
}
// AtA
Eigen::MatrixXd AtA(const Eigen::MatrixXd& A);
RcppExport SEXP _estimatr_AtA(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(AtA(A));
    return rcpp_result_gen;
END_RCPP
}
// mult_diag
Eigen::MatrixXd mult_diag(const Eigen::MatrixXd& x, const Eigen::ArrayXd& d);
RcppExport SEXP _estimatr_mult_diag(SEXP xSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::ArrayXd& >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(mult_diag(x, d));
    return rcpp_result_gen;
END_RCPP
}
// extract_vec
Eigen::VectorXd extract_vec(const Eigen::VectorXd& full, const Eigen::VectorXi& ind);
RcppExport SEXP _estimatr_extract_vec(SEXP fullSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type full(fullSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type ind(indSEXP);
    rcpp_result_gen = Rcpp::wrap(extract_vec(full, ind));
    return rcpp_result_gen;
END_RCPP
}
// extract_mat_rows
Eigen::MatrixXd extract_mat_rows(const Eigen::MatrixXd& full, const Eigen::VectorXi& ind);
RcppExport SEXP _estimatr_extract_mat_rows(SEXP fullSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type full(fullSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type ind(indSEXP);
    rcpp_result_gen = Rcpp::wrap(extract_mat_rows(full, ind));
    return rcpp_result_gen;
END_RCPP
}
// lm_ei_test
List lm_ei_test(Eigen::Map<Eigen::MatrixXd>& Xfull, const Eigen::Map<Eigen::VectorXd>& y, const Rcpp::Nullable<Rcpp::NumericMatrix>& Xunweighted, const Rcpp::Nullable<Rcpp::NumericVector>& weight, const double& weight_mean, const Rcpp::Nullable<Rcpp::IntegerVector>& cluster, const unsigned& J, const bool& ci, const String type, const std::vector<bool>& which_covs, const bool& chol, const bool& trychol);
RcppExport SEXP _estimatr_lm_ei_test(SEXP XfullSEXP, SEXP ySEXP, SEXP XunweightedSEXP, SEXP weightSEXP, SEXP weight_meanSEXP, SEXP clusterSEXP, SEXP JSEXP, SEXP ciSEXP, SEXP typeSEXP, SEXP which_covsSEXP, SEXP cholSEXP, SEXP trycholSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd>& >::type Xfull(XfullSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Xunweighted(XunweightedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector>& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const double& >::type weight_mean(weight_meanSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type cluster(clusterSEXP);
    Rcpp::traits::input_parameter< const unsigned& >::type J(JSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ci(ciSEXP);
    Rcpp::traits::input_parameter< const String >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type which_covs(which_covsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type chol(cholSEXP);
    Rcpp::traits::input_parameter< const bool& >::type trychol(trycholSEXP);
    rcpp_result_gen = Rcpp::wrap(lm_ei_test(Xfull, y, Xunweighted, weight, weight_mean, cluster, J, ci, type, which_covs, chol, trychol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_estimatr_ht_var", (DL_FUNC) &_estimatr_ht_var, 5},
    {"_estimatr_ht_var_total", (DL_FUNC) &_estimatr_ht_var_total, 2},
    {"_estimatr_ht_var_total2", (DL_FUNC) &_estimatr_ht_var_total2, 2},
    {"_estimatr_ht_covar_partial", (DL_FUNC) &_estimatr_ht_covar_partial, 5},
    {"_estimatr_ht_var_partial", (DL_FUNC) &_estimatr_ht_var_partial, 2},
    {"_estimatr_ht_covar_total", (DL_FUNC) &_estimatr_ht_covar_total, 5},
    {"_estimatr_joint_incl_pr", (DL_FUNC) &_estimatr_joint_incl_pr, 4},
    {"_estimatr_gen_pr_matrix_complete", (DL_FUNC) &_estimatr_gen_pr_matrix_complete, 1},
    {"_estimatr_ht_var_total_clusters", (DL_FUNC) &_estimatr_ht_var_total_clusters, 3},
    {"_estimatr_mult_diag2", (DL_FUNC) &_estimatr_mult_diag2, 2},
    {"_estimatr_mat_sqrt_inv", (DL_FUNC) &_estimatr_mat_sqrt_inv, 2},
    {"_estimatr_lm_robust_helper", (DL_FUNC) &_estimatr_lm_robust_helper, 9},
    {"_estimatr_AtA", (DL_FUNC) &_estimatr_AtA, 1},
    {"_estimatr_mult_diag", (DL_FUNC) &_estimatr_mult_diag, 2},
    {"_estimatr_extract_vec", (DL_FUNC) &_estimatr_extract_vec, 2},
    {"_estimatr_extract_mat_rows", (DL_FUNC) &_estimatr_extract_mat_rows, 2},
    {"_estimatr_lm_ei_test", (DL_FUNC) &_estimatr_lm_ei_test, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_estimatr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

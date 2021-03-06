// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// func_dc
List func_dc(NumericMatrix z);
RcppExport SEXP factorcpt_func_dc(SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    __result = Rcpp::wrap(func_dc(z));
    return __result;
END_RCPP
}
// func_dc_by
List func_dc_by(NumericMatrix z, double dmby, double dtby);
RcppExport SEXP factorcpt_func_dc_by(SEXP zSEXP, SEXP dmbySEXP, SEXP dtbySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type dmby(dmbySEXP);
    Rcpp::traits::input_parameter< double >::type dtby(dtbySEXP);
    __result = Rcpp::wrap(func_dc_by(z, dmby, dtby));
    return __result;
END_RCPP
}
// func_coef
NumericMatrix func_coef(NumericMatrix z, int scale);
RcppExport SEXP factorcpt_func_coef(SEXP zSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type scale(scaleSEXP);
    __result = Rcpp::wrap(func_coef(z, scale));
    return __result;
END_RCPP
}
// func_input
NumericMatrix func_input(NumericMatrix coef, NumericMatrix sgn);
RcppExport SEXP factorcpt_func_input(SEXP coefSEXP, SEXP sgnSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sgn(sgnSEXP);
    __result = Rcpp::wrap(func_input(coef, sgn));
    return __result;
END_RCPP
}
// func_input_on
NumericMatrix func_input_on(NumericMatrix coef);
RcppExport SEXP factorcpt_func_input_on(SEXP coefSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type coef(coefSEXP);
    __result = Rcpp::wrap(func_input_on(coef));
    return __result;
END_RCPP
}

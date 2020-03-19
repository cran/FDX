#include <Rcpp.h>
using namespace Rcpp;

#include <PoissonBinomial.h>
using namespace PoissonBinomial;

NumericVector poibinom_int(NumericVector probs, int method, int max_q);

//NumericVector dpbinom(IntegerVector obs, NumericVector probs, int method);

NumericVector ppbinom(IntegerVector obs, NumericVector probs, int method = 1, bool lower_tail = true);

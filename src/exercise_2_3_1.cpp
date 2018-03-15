#include <Rcpp.h>
using namespace Rcpp;

//' Run example 2.3.1
//'
//' @param MAXTIME integer
//' @param PRNTTIME integer
//' @export
// [[Rcpp::export]]
DataFrame exercise_2_3_1(int MAXTIME = 100, int PRNTTIME = 10) {
  int ttt, event, n, cntr;
  int seed;
  double alpha, beta;
  n = 10;

  Rcpp::IntegerVector time(MAXTIME / PRNTTIME), pop(MAXTIME / PRNTTIME);

  cntr = 0;
  alpha = beta = 0.1;

  seed = 1456739853;
  srand48(seed);

  for(ttt=0;ttt<MAXTIME;ttt++){
    event = 0;
    if(drand48()<alpha) event = 1;
    if(drand48()<beta) event = event - 1;
    n+= event;
    if(n<0) n = 0;

    if(ttt%PRNTTIME==0){
      time[cntr] = ttt;
      pop[cntr] = n;
      cntr++;
    }
  }

  DataFrame df = Rcpp::DataFrame::create(
    Rcpp::Named("time") = time,
    Rcpp::Named("pop") = pop );

  return df;
}

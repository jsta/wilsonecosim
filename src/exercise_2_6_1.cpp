#include <Rcpp.h>
using namespace Rcpp;

//' Run example 2.6.1
//'
//' @param NUMRUNS double
//' @param MAXTIME double
//' @param PRNTTIME int
//' @export
//'
// [[Rcpp::export]]
int exercise_2_6_1(double MAXTIME = 100, int PRNTTIME = 10, double NUMRUNS = 1){
  int ttt, event, n, n_original, nrun;
  int seed;
  double alpha, beta, ave50;
  FILE *f = fopen("data.txt", "w");

  alpha = beta = 0.1;
  n_original = 10;
  ave50 = 0;

  seed = 1456739853;
  srand48(seed);
  printf("%s \n", "time pop");

  for(nrun=0;nrun<NUMRUNS;nrun++)
  {
    n = n_original;

    for(ttt=0;ttt<MAXTIME;ttt++)
    {
      event = 0;
      if(drand48()<alpha) event = 1;
      if(drand48()<beta) event = event - 1;
      n+= event;
      if(n<0) n = 0;

      if(ttt == 50) ave50 += n;

      if(ttt%PRNTTIME==0)
        fprintf(f, " %3d %-4d %1d\n", ttt, n, nrun);
    }
  }

  /* printf("%f", ave50 / NUMRUNS); */
  fclose(f);

  return 0;
}

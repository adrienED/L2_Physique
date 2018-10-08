/* double toto( double (*f)(double), double x){
   return(f(x));} comment passer une fonction comme argument à une fonction */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
  double k; double chi; double beta;double Ninv; int N;
  scan f ("%lf",&K);
  double chifin=180.0-(720./acos(-1.0L))*asin(sqrt(1.0/(1.0+K)));
  FILE *data=fopen("data.out","r");
  int n;
  for(n=1;n<=4;n++){
    fscanf(data,"%d %lf",&N,&chi);
    Ninv=1.0/(double)N; printf(%g\t%g\n",pow(Ninv,beta),chi);
}
fclose(data);
} 


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Deltat, F0;
double F(int n){
 return(F0*cos(n*Deltat));
}

void euler(double *x, double *v int n){
double xtemp,vtemp;
xtemp =(*x)+Deltat*(*v);
vtemp =(*v)+Deltat*F(n);
(*x)=temp;(*v)=vtemp; 



main() {

double Eth;
for(n=1;n<=N;n++){
euler(&x,&v,E);
E=0.5*sqr(v)-F(n)*x, Eth=...;
printf("%g\t%g\t%g\t%g\n",n*Deltat,x,v,E,fabs(E-Eth));

}
} 

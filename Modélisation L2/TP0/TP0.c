#include <stdio.h>
#include <stdlib.h>

main(){
  int N, n, yratio=0;
  scanf("%d",&N);
  for(n=1;n<=N;n++){
    yratio=n*(2*(n%2)-1)-(n%2);
    printf("%d\t%d\n",n,yratio);
  }
}

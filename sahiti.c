#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

int main()

{

double **V1,**u,**omat,**P,**Q,**S,**R,**o1,**o2,**n,**m,**d1,**c,**d;
int F=0;
V1=loadtxt("./data/V1.dat",2,2);
u=loadtxt("./data/u.dat",2,1);
omat=loadtxt("./data/omat.dat",2,2);

P= loadtxt("./data/pp.dat",2,1);
Q= loadtxt("./data/qq.dat",2,1);
//printf("%f",Q[0][0]);
S=loadtxt("./data/sss.dat",2,1);

o1 = transpose(V1,2,2);
o2= matmul(o1,P, 2,2,1);
//n[0][0]=o1[0][0]+o2[0][0];
//n[1][0]=o1[1][0]+o2[1][0];
//m = matmul(omat,n, 2,2,1);
//printf("%f",m[1][0]);



printf("P is = [%f,%f]\n",P[0][0],P[1][0]);
printf("Q is =[%f,%f]\n",Q[0][0],Q[1][0]);
printf("S is =[%f,%f]\n",S[0][0],S[1][0]);


d1=linalg_sub(Q,S,2,1);
printf("%f",d1[0][0]);


c=loadtxt("./data/cc.dat",2,1);
d=matmul(d1,transpose(c,2,1), 2,2,1);
//printf("%f",d);

printf("Distance of SQ is= %f",d);












return 0;






}

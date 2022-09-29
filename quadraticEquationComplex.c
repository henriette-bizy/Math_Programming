#include <stdio.h>
#include <math.h>


int main(){
  double x,y,z, delta , root1, root2,imaginaryPart, realPart;   
  printf("Input coefficients x, y, z:   ");
  scanf("%lf %lf %lf", &x, &y,&z );
 
delta = (y*y) - (4*y*z);
if(delta >0){
 
 root1 = ((-y) + (sqrt(delta))) /2*z;
 root1 = ((-y) - (sqrt(delta))) /2*z;
 printf("root1: %.2lf  , root2: %.2lf", root1, root2);
}
else if(delta <0){
realPart = (-y)/(2*x);
imaginaryPart = (sqrt(-delta))/(2*x);
printf("root1 : %.2lf+%.2lfi , root2: %.2lf+%.2lfi ", realPart, imaginaryPart, realPart, imaginaryPart);
}
else{
    root1 = (-y)/(2*x);
    printf("root1: %.2lf , root2: %.2lf", root1, root1);
}
    return 0;
}
#include<stdio.h>
int main(){

  float x=2;
  int i;
  for(i=0;i<1000;i++)
  {
     printf("%f=>%.1f\n",x,x);
     x+=0.010;
  }
  return 0;
}

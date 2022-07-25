//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal(int );
int main(){
    int x;
    printf("Enter the nubmer:");
    scanf("%d",&x);
    octal(x);
  return 0;
}
void octal(int n){
  if(n>=1){
  octal(n/8);
  printf("%d",n%8);
  }
}
//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary(int );
int main(){
    int x;
    printf("Enter the nubmer:");
    scanf("%d",&x);
    binary(x);
  return 0;
}
void binary(int n){
  if(n>=1){
  binary(n/2);
  printf("%d",n%2);
  }
}
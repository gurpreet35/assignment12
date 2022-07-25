//Write a recursive function to print first N natural numbers
#include<stdio.h>
void natural_num(int );
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    natural_num(x);
    return 0;
}
void natural_num(int n){

  if(n>=1){
    natural_num(n-1);
    printf("%d ",n);
  }
}

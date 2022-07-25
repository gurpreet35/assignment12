//Write a recursive function to print reverse of a given number
#include<stdio.h>
void reverse(int );
int main(){
    int x;
    printf("Enter the nubmer:");
    scanf("%d",&x);
    reverse(x);
  return 0;
}
void reverse(int n){
  if(n>=1){
  printf("%d",n%10);
  reverse(n/10);
  }
}
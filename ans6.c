//  Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void natural_num(int );
int main(){
    int x,m=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    natural_num(x);
    return 0;
}
void natural_num(int n){
  if(n>=1){
    printf("%d ",2*n);
    natural_num(n-1);
  }

}

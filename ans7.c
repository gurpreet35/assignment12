//rite a recursive function to print squares of first N natural numbers
#include<stdio.h>
void square(int );
int main(){
    int x,m=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    square(x);
    return 0;
}
void square(int n){
  if(n>=1){
    square(n-1);
    printf("%d ",n*n);
  }

}

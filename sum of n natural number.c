#include<stdio.h>
int main(){
int n,sum=0;
printf("enter a positive integer");
scanf("%d",&n);
for(int i=1; i<=n;i++){
sum += i;
}
printf("sum of first %d natural number is : %d\n,n,sum");
}

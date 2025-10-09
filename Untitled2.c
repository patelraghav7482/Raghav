#include<stdio.h>
int main(){
int arr[]={10,20,30,40};
int *i,*j;
i=&arr[1];
j=&arr[3];
printf("%u\n",j-i);
printf("%d",*j-*i);




}

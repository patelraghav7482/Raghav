#include<stdio.h>
int main(){
int numbers[10],i;
int largest, smallest;
printf("enter 10 numbers:\n");
for(i=0;i<10;i++){
    scanf("%d",&numbers[i]);}
    largest=smallest=numbers[i];

for(i=1;i,10;i++){
    if(numbers[1]> largest){
        largest=numbers[i];}

     if(numbers[i]<smallest)  {
        smallest=numbers[i];
     }


}

printf("largest number =%d\n,largest");
printf("smallest number = %d\n",smallest);



}


#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(;n>0;n/=10) sum+=n%10;
    printf("%d",sum);
    return 0;
}
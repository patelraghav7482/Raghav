
#include<stdio.h>
int main(){
int a[2][2];
int i,j,b[2][2],c[2][2];
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
       printf("enter a value");
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
printf("a%d%d=%d\n",i,j,a[i][j]);
    }

}
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
       printf("enter a value");
        scanf("%d",&b[i][j]);
    }

}
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
printf("b%d%d=%d\n",i,j,b[i][j]);
    }


}



for(i=0;i<2;i++){
    for(j=0;j<2;j++){
c[i][j]=a[i][j]+b[i][j];
    }

}
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
printf("c%d%d=%d\n",i,j,c[i][j]);
    }



}

}

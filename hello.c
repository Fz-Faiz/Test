#include<stdio.h>
void main(){
   for(int i =1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
    for(int j=1;j<10-2*i;j++){
        printf(" ");
    }
    for(int j=i;j>0;j--){
        printf("%d",j);
    }
    printf("\n");
   }
}
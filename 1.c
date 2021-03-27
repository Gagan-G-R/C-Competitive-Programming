#include<stdio.h>
#include<stdlib.h>
void getarray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter the a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void disparray(int *a ,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void getarr(int *a,int n){
    int * b =(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        b[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            b[i]*=a[j];
        }
    }
    disparray(b,n);
}
void main(){
    int n ;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int * a = (int *)malloc(sizeof(int)*n);
    getarray(a,n);
    disparray(a,n);
    printf("\n");
    getarr(a,n);
}
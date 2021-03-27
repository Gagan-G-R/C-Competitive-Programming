#include<stdio.h>
#include<stdlib.h>
void getarray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void ls(int *a,int n,int ele){
    for(int i=0;i<n;i++){
        if(a[i]==ele){
            printf("The ele=%d is found in the position=%d",ele,i);
            return;
        }
    }
    printf("The element is not found at all");
}
void main(){
    int n;
    printf("Enter the size of the list");
    scanf("%d",&n);
    int *a =(int *)malloc(sizeof(int)*n);
    getarray(a,n);
    printf("Enter the element to be found");
    int ele;
    scanf("%d",&ele);
    ls(a,n,ele);
}
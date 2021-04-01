#include<stdio.h>
#include<stdlib.h>
void getarray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void bs(int *a,int n,int ele){
    int start=0;
    int end=n-1;
    int mid;
    while(start<end){
        mid=(start+end)/2;
        if(a[mid]==ele){
            printf("The element=%d is found in the position=%d",ele,mid);
            return;
        }
        else if(a[mid]>ele){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    printf("The element=%d is not found in the list",ele);
}
void main(){
    printf("Enter the size of the list");
    int n;
    scanoof("%d",&n);
    int *a = (int *)malloc(sizeof(int)*n);
    getarray(a,n);
    printf("Enter the ele to be found");
    int ele;
    scanf("%d",&ele);
    bs(a,n,ele);
}
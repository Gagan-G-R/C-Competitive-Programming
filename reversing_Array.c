#include<stdio.h>
void disp(int *a,int n){
    for(int i=0;i<n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}
void main(){
    int n;
    int a[100];
    int temp;
    printf("enter the lenght of the array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element %d : ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    disp(a,n);

}

#include<stdio.h>
struct pair {
    int min;
    int max;
};
void getArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
struct pair getMaxMin(int *a,int n){
    struct pair MinMax;
    if(n==1){
        MinMax.max=a[0];
        MinMax.min=a[1];
    }
    if(n>1){
        if(a[0]>a[1]){
            MinMax.max=a[0];
            MinMax.min=a[1];
        }
        else{
            MinMax.min =a[0];
            MinMax.max=a[1];
        }
    }
    for(int i=2;i<n;i++){
        if(a[i]>MinMax.max){
            MinMax.max=a[i];
        }
        if(a[i]<MinMax.min){
            MinMax.min=a[i];
        }
    }
    return MinMax;
}
void main(){
    int a[100],n;
    printf("Enter the len of the array");
    scanf("%d",&n);
    getArray(a,n);
    struct pair MinMax= getMaxMin(a,n);
    printf("The Max is : %d",MinMax.max);
    printf("The Min is : %d",MinMax.min);
}
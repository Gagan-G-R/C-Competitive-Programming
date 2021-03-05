#include<stdio.h>
void getArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter the a[%d] : ",i);
        scanf("%d",&a[i]);
    }
}
int getSum(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
void main(){
    int a[100],n;
    printf("Enter the length of the array");
    scanf("%d",&n);
    getArray(a,n);
    int sum =getSum(a,n);
    printf("The sum of all the elements of the array is : %d",sum);

}
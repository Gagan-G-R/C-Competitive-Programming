#include<stdio.h>
#include<math.h>
void getArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter the %dth ele:",i);
        scanf("%d",&a[i]);
    }
}
int findSum(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=pow(a[i],2);
    }
    return sum;
}
void main(){
    int a[100],n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    getArray(a,n);
    int sum = findSum(a,n);
    printf("THe sum of the squares of the ele are : %d",sum);
}
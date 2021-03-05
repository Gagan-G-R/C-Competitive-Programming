#include<stdio.h>
#include<math.h>
void getArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Get the %dth elemnt:",i);
        scanf("%d",&a[i]);
    }
}
int calSum(int *a,int n){
    int flag=0;
    int sum = pow(a[n-1],2);
    for(int i=n-2;i>=0;i--){
        if(flag==0){
            sum+=pow(a[i],2);
            flag=1;
        }
        else{
            sum-=pow(a[i],2);
            flag=0;
        }
    }
    return (sum);
}
void main(){
    int a[100],n;
    printf("Enter the lenght of the array");
    scanf("%d",&n);
    getArray(a,n);
    int sum = calSum(a,n);
    printf("The sum of the series : %d",sum);
}
#include<stdio.h>
struct node {
    int ele;
    int hz;
};
void getElement(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void getHz(int *a,int n,struct node *AA){
    int length=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<length;j++){
            if(a[j]==strd)
        }
    }
}
void main(){
    printf("Enter the size of the array");
    int a[100],n;
    scanf("%d",&n);
    struct node * AA = (struct node*)malloc(n*sizeof(struct node));
    getElement(a,n);
    getHz(a,n,AA);

}
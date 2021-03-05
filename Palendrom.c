#include<stdio.h>
#include<string.h>
int checkPalendrom(char *a){
    int len =strlen(a);
    //int len=sizeof(a)-1/(sizeof(a[1])-sizeof(a[0]))-2;
    //printf("The length of the string : %d",len);
    int start=0,end=len-1;
    while(start<end){
        //printf("%c compare %c\n",a[start],a[end]);
        if(a[start]!=a[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
void main(){
    char a[100];
    printf("Enter the string : ");
    scanf("%s",a);
    if(checkPalendrom(a)){
        printf("The given string is Palendrom");
    }
    else{
        printf("The given string is not Palendrom");
    }
}
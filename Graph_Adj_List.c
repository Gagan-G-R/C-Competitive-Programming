#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};


void insert(struct node **a,int i,int j){
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=j;

    if(a[i]==NULL){
        a[i]=temp;
    }
    else{
        while(a[i]->next!=NULL){
            
        }
    }
    a[i]->next=temp;

}

void creategraph(struct node **a,int n){
    int i=0,j=0;

    for(int i=0;i<n;i++){
        a[i]=NULL;
    }


    while(1){
        printf("Enter i->j");
        scanf("%d->%d",&i,&j);
        if(i==-1 || j==-1){
            return ;
        }
        insert(a,i,j);
    }
}

void main(){
  printf("Enter the no of vertex:");
  int n;
  scanf("%d",&n);

  struct node * a[100];

  creategraph(a,n);
  printgraph(a,n);  
}
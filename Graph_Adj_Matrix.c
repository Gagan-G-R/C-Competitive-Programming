#include<stdio.h>

int a[100][100];
int n;
int visit[100];

void createGraph();
void printGraph();
void indegree(int);
void outdegree(int);
void DFS(int);
void BFS(int);


int q[100];
int f,r;
void qinsert(int);
int qdelete();
int qempty();


void main(){
    printf("Enter the num of vretices:");
    scanf("%d",&n);
    createGraph();
    printGraph();

    printf("Enter the vertices to find the INDEGREE:");
    int v = 0;
    scanf("%d",&v);
    indegree(v);

    v=0;
    printf("Enter the vertices to find the OUTDEGREE:");
    scanf("%d",&v);
    outdegree(v);

    v=0;
    for(int i=0;i<n;i++){
        visit[i]==0;
    }
    printf("Enter the starting vertices of the DFS:");
    scanf("%d",&v);
    DFS(v);
    printf("Traversal done\n");


    v=0;
    for(int i=0;i<n;i++){
        visit[i]==0;
    }
    printf("Enter the starting vertices of the BFS:");
    scanf("%d",&v);
    BFS(v);
    printf("Traversal done\n");

}

void createGraph(){
    int i,j;
    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            a[i][j]=0;
        }
    }
    i=0;j=0;
    while(1){
        printf("Enter the from n to vertices:");
        scanf("%d %d",&i,&j);
        if(i==-9 && j==-9){
            return;
        }
        else{
            a[i][j]=1;
        }
    }
}


void printGraph(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}


void indegree(int v){
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i][v]==1){
            count ++;
        }
    }
    printf("The INdegree is : %d\n",count);
}



void outdegree(int v){
    int count =0;
    for(int i=0;i<n;i++){
        if(a[v][i]==1){
            count ++;
        }
    }
    printf("The OUTdegree is : %d\n",count);
}


void DFS(int v){
    visit[v]=1;
    printf("%d\t",v);
    for(int i=0;i<n;i++){
        if(a[v][i]==1 && visit[i]!=1){
            DFS(i);
        }
    }
}



void BFS(int v){
    visit[v]=1;
    printf("%d\t",v);
    qinsert(v);

    while(!qempty()){
        v = qdelete();
        for(int i=0;i<n;i++){
            if(a[v][i]==1 && visit[i]!=1){
                visit[i]=1;
                printf("%d\t",i);
                qinsert(i);
            }
        }
    }
}

void qinsert(int n){
    if(f==-1){
        f=r=0;
        q[r]=n;
    }
    else{
        r++;
        q[r]=n;
    }
}


int qdelete(){
    int temp = q[f];
    if(f==r){
        f=r=-1;
    }
    else{
        f++;
    }
    return temp;
}

int qempty(){
    if(f==-1 && r==-1){
        return 1;
    }
    else{
        return 0;
    }
}
#include<stdio.h>
const int N=3;
void print(int arr[][N],int m){
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<N;j++)
        printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    int arr[][3]={{1,2,3},{2,3,4},{2,3,4}};
    print(arr,3);
}
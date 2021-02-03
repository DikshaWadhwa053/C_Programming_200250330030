#include<stdio.h>
#define M 2
#define N 3

int print(int arr[M][N]){
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
}
int main(){
    int arr[][3]={{1,2,3},{4,5,6}};
    print(arr);
    return 0;
}


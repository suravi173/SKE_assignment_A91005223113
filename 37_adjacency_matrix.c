#include <stdio.h>
#define V 3
int main(){
    int g[V][V]={{0,1,0},{1,0,1},{0,1,0}};
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++) printf("%d ",g[i][j]);
        printf("\n");
    }
    return 0;
}
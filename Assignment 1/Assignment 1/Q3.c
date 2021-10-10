#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int k = m*n;
    int a[k];
    int b[m][n];
    for(int i=0; i < k ; i++ ){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0; j < n ; j++){
            b[i][j]=a[i*n+j];
        }
    }
    for(int i = 0; i<m; i++) {
    for(int j = 0; j<n; j++)
      printf("%d ", b[i][j]);
    printf("\n");
  }
  return 0;
}
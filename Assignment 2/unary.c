#include<stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int op;
  scanf("%d",&op);
  switch (op)
  {
  case 1:
    for(int i = 0;i<a+b;i++){
      printf("I");
    
    }
    printf("\n");
    break;
  case 2 :
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; i < b; j++)
    {
      printf("I");
    
  }
  }
  printf("\n");
  break;
  
  default:
  printf("Invalid Operation\n");
    break;
  
}
}
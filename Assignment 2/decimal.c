#include<stdio.h>

int main(){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int add = a + b;
    long long int multiply= a * b;
    int op;
    scanf("%d",&op);
    switch (op)
    {
    case 1:
       
       printf("addition result : %lld",add);
        break;
      case 2:
       
       printf("addition result : %lld",multiply);
        break;
    default:
    printf("Invalid");
        break;
    }
}
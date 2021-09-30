#include <stdio.h>

#define MAX 5000

void add(char f1[], char f2[], char f[])
{
  int carry = 0;
  for (int i = MAX - 1; i >= 0; i--)
  {
    int res = (f1[i] - '0') + (f2[i] - '0') + carry;
    f[i] = (res % 10) + '0';
    carry = res / 10;
  }
}


int main()
{
char f1[MAX];
char f2[MAX];
char f[MAX];

  for (int i = 0; i < MAX; i++)
  {
    f1[i] = f2[i] = f[i] = '0';
  }
  f2[MAX - 1] = '1';

  int n;
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      add(f1, f2, f);
     for (int i = MAX - 1; i >= 0; i--){
         f1[i]=f2[i];
         f2[i]=f[i];
     }
    }

    int flag = 0;
  for (int i = 0; i < MAX; i++)
  {
    if (f[i] != '0')
      flag = 1;

    if(flag){
      printf("%c", f[i]);
    }
  }
  printf("\n");
      
  }
  return 0;
}
#include<stdio.h>
#define NUM 10
int floatingnumber(char a[]){
int flag = 0;
for(int i=0;i<NUM;i++){
if(a[i]=='.' && a[i+1]!=0)
    flag =1;


}
return flag;


}
int main(){
    char a[NUM]={0};
    printf("Number to be checked : ");
    scanf("%s",a);
    if(floatingnumber(a)){
        printf("it is a  valid floating number");
    }
    else
    printf("it is invalid floating number");

}
    
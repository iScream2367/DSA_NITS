#include<stdio.h>
#define NUM 100
int domain(char a[],int atIndex){
    int flag = 1;
for(int i =atIndex+1;i < NUM;i++){
    if((a[0]=='-'||a[NUM]=='-'|| a[i]=='@'))
        flag = 0;
;}
return flag;
}
int localbody(char a[],int atIndex){
    for(int i = 0;i<atIndex;i++){
        if(a[0]=='"'&&a[atIndex-1]=='"')
        return 1;
        if(a[i]=='@'|| a[i]=='.'|| a[i]==' ')
        return 0;
        else 
        return 1;

    }
}
int validEmail(char a[]){
    int atIndex = -1;
    int pointIndex = -1;
    for(int i =0;i<NUM;i++){
        if (a[i]=='@'){
        atIndex = i;
    }
    if(a[i]=='.'&& a[i+1]=='.'){
     if(i<atIndex )
     return localbody(a,atIndex);
     else
     return 0;
    }
    }
    if(atIndex=-1)
    return 0;
    
    else
    return (domain(a,atIndex) && localbody(a,atIndex));
    
}

int main(){
    char email[NUM]={0};
    printf("enter Email :");
    scanf("%s",email);
    printf("email is %s",((validEmail(email))?"valid":"invalid"));
}
#include<stdio.h>
int main(){
    int n1,n2,max;
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    while(max%n1!=0||max%n2!=0){
        max++;
    }
    printf("%d",max);
    return 0;
}
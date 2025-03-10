#include<stdio.h>
int main(){
    int num,count=0;
    
    scanf("%d",&num);
    int c=1;
    
    if(num==0){
        printf("%d",c);
        return 1;
    }
    
    while(num!=0){
        int a=num%10;
        count++;
        num/=10;
    }
    printf("%d",count);
    return 0;
}
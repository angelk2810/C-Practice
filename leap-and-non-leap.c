#include<stdio.h>
int main(){
    int year,count=0;
    scanf("%d",&year);
    
    if((year%400==0)||(year%4==0&&year%100!=0)){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    
    for(int i=year+1; i<=year+10; i++){
        if((i%400==0)||(i%4==0&&i%100!=0)){
            count++;
        }
    }
    
    printf("\nLeap year:%d",count);
    int c=10-count;
    printf("\nNon-leap years:%d",c);
    return 0;
}
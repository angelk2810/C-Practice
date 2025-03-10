#include<stdio.h>
int main(){
    int num,count=0,a;
    scanf("%d",&num);
    
    for(int i=num; num!=1; i++){
        if(num%2==0){
            a=num/2;
        }
        else if(num%2!=0){
            a=num*3+1;
        }
      num=a;
      count++;
    }
    printf("%d",count);
    return 0;
}
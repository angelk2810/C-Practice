#include<stdio.h>
int main(){
    int num;
    float b=1.0, sum=0;
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        float a=1.0/b;
        sum=sum+a;
        b=b*2;
    }
    printf("%.2f",sum);
    return 0;
}
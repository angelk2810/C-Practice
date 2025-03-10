#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    
    for(int i=num; i<num+3; i++){
        int a=i*i*i;
        printf("\n%d",a);
    }
    return 0;
}
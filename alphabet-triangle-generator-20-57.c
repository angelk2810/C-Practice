#include<stdio.h>
int main(){
    int num;
    int a=65;
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int=1; j<=i; j++){
            printf("%c",a);
        }
        printf("\n");
        a++;
    }
    return 0;
}
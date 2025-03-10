#include<stdio.h>
int main(){
    int n,sum=0; add=0;
    
    scanf("%d"&n);
    
    for(int i=1; n1=0; i++){
        int a=num%10;
        if(a%2==0){
            sum=sum+a;;
        }
        else if(a%2!=0){
            add=add+a;
        }
        num=num/10;
    }
    printf("%d",add);
    printf("%d",sum);
    return 0;
}
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    
    int c=n-2;
    
    for(int i=2; i<=n; i++){
        int a=n%i;
        if(a!=0){
            sum++;
        }
    }
    
    if(c==sum){
        printf("Prime number");
    }
    else if(c!=sum){
        printf("Composite number");
    }
    
    return 0;
}
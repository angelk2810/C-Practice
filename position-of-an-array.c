#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int k;
    scanf("%d",&k);
    
    
    for(int i=0; i<n; i++){
        if(a[i]==k){
            printf("%d ",i+1);
        }
    }
    
    return 0;
}
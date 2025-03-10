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
           for(int j=i; j<n-1; j++){
               a[j]=a[j+1];
           }
           
           break;
        }
    }
    
    
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }
}
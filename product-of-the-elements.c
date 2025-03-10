#include<stdio.h>
int main(){
    int n,p=1;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
        p=p*a[i];
    }
    printf("%d",p);
}
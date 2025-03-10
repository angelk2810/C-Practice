#include<stdio.h>
int main(){
    int n;
    float sum=0;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    printf("%.1f",sum/n);
    return 0;
}
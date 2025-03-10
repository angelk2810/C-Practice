#include <stdio.h>

int main() {
    
    int n; 
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int k;
    scanf("%d",&k);
    
    int count=0;
    int sum=0;
    
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            sum=a[i]+a[j];
            if(sum==k){
                printf("%d %d",i,j);
                count=1;
                break;
            }
        }
        if(count)
            break;
    }
    
    if(count==0){
        printf("Not found");
    }
    return 0;
}
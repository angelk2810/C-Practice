#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    
    int even=0, odd=0;
    
     printf("\n[");
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            if(even==1){
                printf(",");
            }
            printf("%d",a[i]);
        even=1;
        }
    }
     printf("]");
    
     printf("\n[");
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            if(odd==1){
                printf(",");
            }
            printf("%d",a[i]);
            odd=1;
        }
        
    }
    printf("]");
    
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int count;
    
    for(int i=0; i<n; i++){
        count=0;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        
        if(count==0){
         printf("%d ",a[i]);  
      }   
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int temp[n];
    
    for(int i=0; i<n; i++){
       int count=0;
        for(int j=0;j<n; j++){
            if(a[i]>a[j]){
                count++;
            }
        }
        temp[i]=count;
    }
    
    
    for(int i=0; i<n; i++){
        printf("%d",temp[i]);
    }
}
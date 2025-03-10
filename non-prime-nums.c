#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
        count=0;
        for(int j=2; j<a[i]; j++){
            if(a[i]%j==0){
                count++;
            }
        }
        if(count!=0){
            printf("%d ",a[i]);
        }
    }
}
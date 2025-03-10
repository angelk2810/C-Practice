#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int rank[n];
    int temp;
    
    for(int i=0; i<n; i++){
        temp=1;
        for(int j=0; j<n; j++){
            if(a[i]>a[j]){
                temp++;
            }
        }
        rank[i]=temp;
    }
    
    
    for(int i=0; i<n; i++){
        printf("%d",rank[i]);
    }
    
    return 0;
}
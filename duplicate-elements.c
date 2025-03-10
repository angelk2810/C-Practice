#include<stdio.h>
int main(){
    
    int n,a[100],c=0;
    
    scanf("%d",&n);
    
    for(int i=0; i<n ;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                c++;
                break;
            }
        }
    }
    
    printf("%d",c);
    
    return 0;
}

































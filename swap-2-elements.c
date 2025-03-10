#include<stdio.h>
int main(){
    int n,k1,k2;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&k1);
    scanf("%d",&k2);
    
    if(k1>=0 &&k1<n && k2>=0 &&k2<n){
        int temp=a[k1];
        a[k1]=a[k2];
        a[k2]=temp;
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }
    }
    
    return 0;

}
#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    
    int a[n];
    int f[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    
    for(int i=0; i<n; i++){
        count=1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
                f[j]=0;
            }
        }
        
        if(f[i]!=0)
        f[i]=count;
    }
    
    for(int i=0; i<n; i++){
        if(f[i]!=0){
            printf("%d %d\n",a[i],f[i]);
        }
    }
}
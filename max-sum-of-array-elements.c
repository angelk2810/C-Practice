#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n;j++){
            int sum=0;
            for(int k=i; k<n; k++){
                sum=sum+a[i];
                if(max<sum)
                max=sum;
            }
        }
    }
    
    printf("%d",max);
    
    return 0;
}

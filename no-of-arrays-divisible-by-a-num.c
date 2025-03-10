#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    int k;
    scanf("%d",&k);
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]%k==0){
            count++;
        }
    }
    
    
printf("%d ",count);

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    int max=a[n-1];
    int min=a[0];
    
    int difference= max-min;
    printf("%d %d",max,min);
    printf("\n%d",difference);

    return 0;
}

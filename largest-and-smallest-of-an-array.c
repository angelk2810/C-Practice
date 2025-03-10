#include<stdio.h>
int main(){
    
    int height[50],n,i,sum=0;
    float avg;
    
    scanf("%d",&n);
    
    
    for(i=0; i<n; i++){
        scanf("%d",&height[i]);
        sum=sum+height[i];
    }

    
    printf("Sum:%d\n",sum);
    
    avg=(float)sum/n;
    printf("Avg: %.2f\n",avg);
    
    return 0;
}
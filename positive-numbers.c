//Given an Array print only the Positive numbers 
//Sample Input: [1,3,-4,-5,2,3] Sample Output: [1,3,2,3]


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++){
        if(a[i]>0){
            printf("%d",a[i]);
        }
    }
    return 0;
}
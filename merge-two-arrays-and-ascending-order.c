#include<stdio.h>
int main(){
    int n1,n2,n3,temp;
    scanf("%d %d",&n1,&n2);
    n3=n1+n2;
    
    int a1[n1], a2[n2], a3[n3];
    
    for(int i=0; i<n1; i++ ){
        scanf("%d",&a1[i]);
    }
    
    for(int i=0; i<n2; i++){
        scanf("%d",&a2[i]);
    }
    
    for(int i=0; i<n1; i++){
        a3[i]=a1[i];
    }
    
    for(int i=0, j=n1;i<n2 && j<n3; i++, j++){
        a3[j]=a2[i];
    }
    
    for(int i=0; i<n3; i++){
        for(int j=i+1; j<n3; j++){
            if(a3[i]>a3[j]){
                temp=a3[i];
                a3[i]=a3[j];
                a3[j]=temp;
            }
        }
    }
    
    for(int i=0; i<n3; i++){
        printf("%d ",a3[i]);
    }
    
    return 0;
    
}
    
    
    
    
    
    
    
    
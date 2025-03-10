#include<stdio.h>
int main(){
    int num,sum=0,count=0,i;
    scanf("%d",&num);
    
    for(int j=num; count<1; j++){
        sum=0;
        i=j;
        
        while(i!=0){
            int a=i%10;
            sum=sum*10+a;
            i=i/10;
        }
        
        if(j==sum){
            printf("%d\n",j);
            count++;
        }
    }
    return 0;
}
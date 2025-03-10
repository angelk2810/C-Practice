/*array Input range 2-10 if exceeds print "Invalid".
print two elements which is the sum of two element closest to 0(zero). 
Input: [-1,-10,8,2] output: [-1,2]. 
Explanation -1+2=-1 is the closest to 0 than other combinations.*/


#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int main() {
    int n,num1,num2;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]>10){
            printf("Invalid\n");
            break;
        }
    }
    
    

    int minsum=arr[0]+arr[1];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) <abs(minsum)) {
                minsum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("[%d, %d]\n", num1, num2);

    return 0;
}
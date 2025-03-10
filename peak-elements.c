#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  int a[n];
  
  for(int i=0; i<n; i++){
      scanf("%d",&a[i]);
  }
  
  if(n==1){
      printf("%d ",a[0]);
  }
  if(a[0]>=a[1]){
      printf("%d ",a[0]);
  }
  if(a[n-1]>=a[n-2]){
      printf("%d ",a[n-1]);
  }
  
  for(int i=1; i<n-1; i++){
      if(a[i]>=a[i+1]&&a[i]>=a[i-1]){
          printf("%d ",a[i]);
      }
  }

    return 0;
}

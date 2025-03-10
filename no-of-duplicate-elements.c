#include<stdio.h>
int main() {
	int r,total=0,count;

	scanf("%d",&r);

	int arr[r];
	for(int i=0; i<r; i++) {
		scanf("%d",&arr[i]);
	}

	if(r==1) {
		printf("Invalid");
		return 0;
	}


	for(int i=0; i<r; i++) {
		count =0;
		for(int j=i+1; j<r; j++) {
			if(arr[i]==arr[j]) {
				count++;
			}
		}
		if(count>0) {
			total+=count;
		}
	}
	printf("%d", total);
}
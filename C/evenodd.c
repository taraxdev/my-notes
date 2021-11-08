#include <stdio.h>
 int main(){
	int n,i,j,k;
	printf("Enter the array size: ");
	scanf("%d", &n);
	int arr[n], even[n], odd[n];
	printf("Enter the array element \n");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
		if(arr[i]%2==0){
			even[j] = arr[i];
			j++;
		}else{
			odd[k] = arr[i];
			k++;
		}
	}

	printf("Even array element are \n");
	for(i=0;i<j;i++){
		printf("%d \n", even[i]);
	}

	printf("Odd array element are \n");
	for(i=0;i<k;i++){
		printf("%d \n", odd[i]);
	}
}
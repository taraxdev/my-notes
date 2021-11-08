#include <stdio.h>
int main(){

	int num;
	printf("Please enter the Array size: \n");
	scanf("%d",&num);

	int arr[num];
	int max,min;

	printf("Please enter the value: \n");
	for(int i=0;i<num;i++){
		scanf("%d", &arr[i]);
	}

	// Initialize maximum element
	max=arr[0];
	// Initialize minimum element
	min=arr[0];

	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}

	for(int i=0;i<sizeof(arr[5]);i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}

	printf("the maximum number is: %d \n",max );
	printf("the minimum number is: %d ",min );

}
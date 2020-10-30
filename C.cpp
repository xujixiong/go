#include<stdio.h>
#include<stdlib.h>

int insertSort(int a[], int len){
	for(int i = 1; i < len; i++){
		int j,temp = a[i];
		for(j = i-1; j >=0; j--){
			if(temp < a[j]){
				a[j+1] = a[j];
			}else{
				break;
			}
		}
		a[j+1] = temp;
	}
}


int quickSort(int a[],int low,int high){
	if(low < high){
		int l = low, h =high,mid;
		int temp = a[low];
		while(low < high){
			while(low<high && a[high]>=temp)
				high--;
			a[low] = a[high];
			while(low<high && a[low] <= temp)
				low++;
			a[high] = a[low];
		}
		a[low] = temp;
		mid = low;
		quickSort(a,l,mid-1);
		quickSort(a,mid+1,h);
	}	
}

int main(){
	int a[10] = {3,5,7,9,2,4,8,2,0,22};
	insertSort(a,10);
	for(int i = 0; i < 10; i++){
		printf("%d ",a[i]);
	} 
	return 0;
} 

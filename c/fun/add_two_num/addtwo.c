#include "addtwo.h"


int main(int argc, char const *argv[])
{
	printf("running\n");

	int arr[] = {2, 7, 11, 15};
	printArr(arr, 4);
	int target = 9;

	print();
	
	add_two(arr, target);
	int *parr = add_two(arr, target);
	printArr(parr, 2);
	free(parr);
		
	return 0;
}

void print(){
	printf("ok\n");
}


int* add_two(int* arr, int target){

	int i,j,len;

	int *ret = malloc(2*sizeof(int));
	len = sizeof(arr)/sizeof(int);

	for(i =0;i < len;++i){
		for(j = i+1;j<len;j++){
			if(target == (arr[i]+arr[j])){
				ret[0] = arr[i];
				ret[1] = arr[1];
				return ret;
			}
		}
	}

	return ret;
}


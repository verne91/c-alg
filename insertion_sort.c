#include <stdio.h>

//Insertion Sort ---- Non-descending order
void insertion_sort(int A[],int a_len){
	int i, j;
	int key;
	for (j = 1; j < a_len; j++){
		key = A[j];
		i = j-1;
		while(i>0 && A[i]>key){
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = key;
	}
}

int main(void)
{
	int aarray[8] = {1,3,5,3,89,5,44,2};
	int a_len = sizeof(aarray)/sizeof(aarray[0]);
	insertion_sort(aarray,a_len);
	int i;
	for (i = 0; i < 8; i++)
		printf("%d\n", aarray[i]);
	return 0;
}
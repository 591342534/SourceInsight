#include <stdio.h>

struct profit {
	int profit_value;
	int left_index;
	int right_index;
}

struct profit find_max_crossing_subarray(int *array)
{
	int sum=0;
	int left_sum=0;
	int right_sum=0;
	struct profit max_profit;
	int len=(sizeof(array))/(sizeof(array[0]));
	print("array length=%d", len);
	int mid=len/2;
	int i=0;
	for( ; i<mid; i++){
		sum=sum+array[i];
		if(sum > left_sum){
			left_sum=sum;
			max_profit.left_index=i;
			}
		}
	
	sum=0;
	for( ; i<high; i++){
		sum=sum+array[i];
		if(sum > right_sum){
			right_sum=sum;
			max_profit.right_index=i;
			}
		}
	max_profit.profit_value=right_sum+left_sum;
	return max_profit;
}

void find_max_subarray(int array[], int low, int high , struct profit)
{
	if(low == high){
		
		
		
}

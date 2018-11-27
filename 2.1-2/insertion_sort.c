#include "stdio.h"


void InsertionSortDescendingOrder(char *pdata,unsigned length_byte){
	int i,j;
	int key;
	if(length_byte<2){
	}
	else{
		for(i=2;i<length_byte;i++){
			key = pdata[i];
			for(j=i;j>0;j--){
				if(key>pdata[j-1]){
					pdata[j]=pdata[j-1];
				}
				else{
					break;
				}
			}
			pdata[j] = key;
		}
	}
}

int main(void)
{
	char a[10] ={5,1,68,42,4,6,5,55,46,87};
	InsertionSortDescendingOrder(a, sizeof(a));
	for(int i=0;i<sizeof(a);i++){		
		printf("%d  ",a[i]);
	}
	return 0;
}

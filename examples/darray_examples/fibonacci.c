#define HH_DARRAY_IMPLEMENTATION
#include "../../include/hh_darray.h"
#include <stdio.h>

hh_darray_t array;

int main(){
	hh_darray_init(&array, sizeof(int));

	int a = 0;
	int b = 1;
	int c = 1;
	for(int i = 0; i < 10000; i++){
		hh_darray_append(&array, &a);
		c = a + b;
		a = b;
		b = c;
	}

	for(int i = 30; i < 40; i++){
		int val;
		hh_darray_get(&array, i, &val);
		printf("%dnth fibonacci: %d\n", i, val);
	}
	
	size_t fill = hh_darray_get_fill(&array);
	size_t size = hh_darray_get_size(&array);
	printf("Current fill/size: %d/%d\n", (int)fill, (int)size);

	hh_darray_deinit(&array);
	return 0;
}

#include "main.h"

int main(void)
{
	int age[] = {1, 2, 3, 4, 5, 6};

	for (int i = 0; i < 6; i++){
		printf("%d = %p\n", *(age + i), age + i);
	}



	retun (0);
}

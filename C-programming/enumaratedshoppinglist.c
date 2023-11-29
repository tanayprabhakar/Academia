#include<stdio.h>

enum Shopping{veg, grains, toys, cosmetics, medicine, biscuits, breads, fruits};

int main()
{
	enum Shopping item;
    item = medicine;
	printf("%d", item);
	return 0;
}

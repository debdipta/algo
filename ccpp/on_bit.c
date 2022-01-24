#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint_t;

void print_help()
{
	printf("Argc: ./<prohram> <number>\n");
}

void get_on_bits(uint_t num)
{
	unsigned int count = 0;
	while ( num > 0)	{
		count = count + (num & 1);
		num = num >> 1;
		printf("num = %d count=%d\n", num, count);
	}
}

int get_on_bits_rec(uint_t num)	
{
	static int count = 0;
	if (!num)
		return count;
	count++;
	return get_on_bits_rec( num & (num-1) );
}

int main(int argc, char* argv[])
{
	uint_t num; 
	if (argc > 1)	{
		num = (uint_t)atoi(argv[1]);
		get_on_bits(num);
		printf("Number of ON bits:%d\n",get_on_bits_rec(num));
	} else	{
		print_help();
		exit(0);
	}
	return 0;
}
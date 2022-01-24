#include <stdio.h>

/*
If it is little endian, the x in the memory will be something like:
    higher memory
    ----->
    +----+----+----+----+
    |0x01|0x00|0x00|0x00|
    +----+----+----+----+
    A
    |
   &x

If it is big endian, it will be:

    +----+----+----+----+
    |0x00|0x00|0x00|0x01|
    +----+----+----+----+
    A
    |
   &x
*/

int main(int argc, char* argv[])
{
	unsigned int ii = 1;
	if (((char*) &ii)[0])	{
		printf("Little Endian\n");
	} else	{
		printf("Big Endian\n");
	}
	return 0;
}
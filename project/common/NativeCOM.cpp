#include "Utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

namespace nativecom
{	
	int sum(int aInputValue, int bInputValue)
	{	
		return aInputValue + bInputValue;	
	}

	char* byteString()
	{
		char *s = (char *) malloc(sizeof(char) * 256);
		sprintf(s, "%s", "This is a byte string value.");
		return s;
	}

	const char* byteArray()
	{
		const char b[3] = { 'A', 'B', 'C'};
		return b;
	}

	unsigned int* byteImageArray()
	{
		unsigned int *buffer;
		
		FILE *f = fopen("file.bmp", "rb");
		buffer = new unsigned int[132*65];
		fseek(f, 54, SEEK_SET);
		fread(buffer, 132*65*4, 1, f);
		fclose(f);
		
		return buffer;
	}
}

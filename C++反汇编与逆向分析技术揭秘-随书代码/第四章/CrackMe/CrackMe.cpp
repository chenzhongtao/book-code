// CrackMe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int main(int argc, char* argv[])
{
	char *pInt = NULL;
	char szPassWord[14] = {
		(char)0x77, (char)0x76, (char)0xCA, 
		(char)0xF3, (char)0xA8, (char)0x0C, 
		(char)0x01, (char)0x01, (char)0xFE, 
		(char)0xDB, (char)0x01, (char)0xE0, 
		(char)0xFB, (char)0x00};


	argv[1][0] |= argc - 1;
	argv[1][1] ^= argc - 1;
	argv[1][2] *= (argc - 1) * 6;
	argv[1][3] = argv[1][2] / 4;
	argv[1][4]  = argv[1][4] << 3;
	argv[1][5]  = argv[1][5] >> 2;
	argv[1][6] &= (argc - 1) & 7;
	argv[1][7] %= 2 ;
	argv[1][8] = ~(argc - 1);
	pInt = &argv[1][9];
	*pInt = (*pInt++ + argv[1][0]) - argv[1][2];
	*pInt = argv[1][6] / argv[1][7];
	*pInt = (*(++pInt) - argv[1][1]) + argv[1][3];
	*(short*)pInt = argv[1][4] * argv[1][5];

	
	if (strcmp(argv[1], szPassWord) == 0)
	{
		printf("%s \r\n", "√‹¬Î’˝»∑£°");
	}
	else
	{
		printf("%s \r\n", "√‹¬Î¥ÌŒÛ£°");
	}

	return 0;
}


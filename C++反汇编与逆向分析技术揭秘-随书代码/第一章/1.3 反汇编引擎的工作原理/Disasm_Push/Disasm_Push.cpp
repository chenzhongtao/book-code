// Disasm_Push.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include "Decode2Asm.h"

void main()
{
	// ������ַ�����Ϊ����ָ�����
	unsigned char szAsmData[] = {
		0x6A, 0x00,					// PUSH 00
		0x68,0x00,0x30,0x40,0x00,	// PUSH 00403000
		0x50,						// PUSH EAX
		0x51,						// PUSH ECX
		0x52,						// PUSH EDX
		0x53						// PUSH EBX
	};

	char szCode[256] = {0};			// ��Ż��ָ����Ϣ
	unsigned int nIndex = 0;		// ÿ������ָ��ȣ����ڵ�ַƫ��
	unsigned int nLen = 0;			// ���������ܳ���
	unsigned char *pCode = szAsmData;		

	nLen = sizeof(szAsmData);
	while (nLen)
	{
		if (nLen < nIndex)
		{
			break;
		}
		int nAddr = 0 ;
		// �޸�pCodeƫ��
		pCode +=  nIndex;
		// ����������
		Decode2Asm(pCode, szCode, &nIndex, 0);
		// ��ʾ���ָ��
		puts(szCode);
		memset(szCode, 0, sizeof(szCode));
	}

}


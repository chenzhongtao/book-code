// VC80Fun.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void AsmStack(int argc)
{
	__asm push eax
		if (argc > 0)
		{		// �˴���ȻΪ���棬�������Ǳ������������޷��ٶ�������
			__asm pop eax
		}
		int nVar = 0;
		scanf("%d", &nVar);
		printf("AsmStack %\r\n", nVar);
}
int _tmain(int argc, _TCHAR* argv[]){
	// �˳����в���argc��ȻΪ1
	AsmStack(argc);
	return 0;
}


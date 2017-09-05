// Excepction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

class CExcepctionBase		
{
public:
	CExcepctionBase()
	{
		printf("CExcepctionBase() \r\n");
	}
	~CExcepctionBase()
	{
		printf("~CExcepctionBase()\r\n");
	}
};

class CExcepction : public CExcepctionBase
{
public:
	CExcepction(int nErrID)
	{
		m_nErrorId = nErrID;
		printf("CExcepction(int nErrID)\r\n");
	}

	CExcepction(CExcepction& Excepction)
	{
		printf("CExcepction(CExcepction& Excepction)\r\n");
		m_nErrorId = Excepction.m_nErrorId;
	}
	// ��ȡ������
	int GetErrorId()
	{
		return m_nErrorId;
	}

private:
	int m_nErrorId ;
};

// �׳��쳣����
void ExcepctionObj()
{
	int nThrowErrorCode = 119;
	printf("��������Դ����� :\n");
	scanf("%d", &nThrowErrorCode);
	try
	{
		if (nThrowErrorCode == 110)
		{
			CExcepction myStru(110);
			throw &myStru;
		}
		else if (nThrowErrorCode == 119)
		{
			CExcepction myStru(119);
			throw myStru;
		}
		else if (nThrowErrorCode == 120)
		{
			CExcepction * pMyStru = new CExcepction(120);
			throw pMyStru;
		}
		else
		{
			throw CExcepction(nThrowErrorCode);
		}
	}
	catch(CExcepction e)
	{
		printf("catch(CExcepction &e)\n");
		printf("ErrorId: %d\n", e.GetErrorId());
	}
	catch(CExcepction *p)
	{
		printf("catch(CExcepction *e)\n");
		printf("ErrorId: %d\n", p->GetErrorId());
	}
}

// �쳣����RTTI��ʾ����
// class CMyException{
// public:
// 	char szShow[32];
// };
// void main(){
// 	try{
// 		CMyException MyException;
// 		strcpy(MyException.szShow, "err...");
// 		throw &MyException;
// 	}
// 	catch (CMyException* e){
// 		printf("%s \r\n",e->szShow);
// 	}
// }


 
int main(){
//     try
//     {
//         throw 1;
//     }
//     catch ( int e )
//     {
//         printf("catch int\r\n");
//     }
//     catch ( float e)
//     {
//         printf("catch float\r\n");
//     }
// 
// 	// �쳣�������
 	ExcepctionObj();

	return 0;
}





// object.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>


class CNumber{

public:
	CNumber()
	{
		m_nNumber = 1;
	}
	~CNumber()
	{
		printf("~CNumber\r\n");
	}

	int m_nNumber;
};

class CCpyClass{
public:
	int m_nInt;
	short m_sShort;
	char m_cChar;
};

class CMyString{
public:
	CMyString(){
		m_pString = NULL;
	}
	CMyString(CMyString& obj){
		// ע�����ڿ�����������������ָ�룬��Ȼ����ǳ��������û�п���ָ����ָ���
		// �ѿռ��е�����������������Ȼ����ɴ���
		// this->m_pString = obj.m_pString;
		int nLen = strlen(obj.m_pString);
		this->m_pString = new char[nLen + sizeof(char)];
		strcpy(this->m_pString, obj.m_pString);
	}
	~CMyString(){
		if (m_pString != NULL)
		{
			delete [] m_pString;
			m_pString = NULL;
		}
	}
	void SetString(char * pString){
		int nLen = strlen(pString);
		if (m_pString != NULL)
		{
			delete [] m_pString;
			m_pString = NULL;
		}
		m_pString = new char[nLen + sizeof(char)];
		strcpy(m_pString, pString);
		
	}
	char * m_pString;
};

void Show(CMyString MyString){
	printf(MyString.m_pString);
}

// ���ض���
CMyString GetMyString()
{
	CMyString MyString;
	MyString.SetString("World");
	return MyString;
}

// ����Ϊָ�����͵ĺ���
CMyString * GetMyString(CMyString * pMyString)
{
	CMyString MyString;
	MyString.SetString("World");
	pMyString = &MyString;
	return &MyString;
}

// ȫ�ֶ�����
CMyString g_MyStringOne;
CMyString g_MyStringTwo;


// ��Ĭ�Ϲ��캯������
class CInit
{
public:
	void SetNumber(int nNumber)
	{
		m_nNumber = nNumber;
	}
	int GetNumber()
	{
		return m_nNumber;
	}
private:
	int m_nNumber;
};


int main(int argc, char* argv[])
{
	// �ֲ���������ù��캯��
//	CNumber Number;
	// ����Ѷ���
// 	CNumber * pNumber = NULL;
// 	pNumber = new CNumber[4];
// 	pNumber->m_nNumber = 2;
// 	printf("%d \r\n", pNumber->m_nNumber);
// 
// 	if (pNumber != NULL)
// 	{
// 		delete pNumber;
// 		pNumber = NULL;
// 	}


	// �ͷŶ���Ѷ���
	CNumber * pArray = new CNumber[2];
	if (pArray != NULL)
	{
		delete [] pArray;
		pArray = NULL;
	}


	

	// ǳ����˵��
// 	CNumber one;
// 	CNumber two(one);

	// �������캯����ʹ��
// 	CMyString MyString;
// 	MyString.SetString("Hello");
// 	Show(MyString);

	// ����ֵΪ�������͵Ŀ�������ʹ��
//	CMyString MyString = GetMyString();
	CMyString * pMyString = NULL;
	pMyString = GetMyString(pMyString);


	// ��Ĭ�Ϲ��캯������
// 	CInit Init;
// 	Init.SetNumber(5);
// 	printf("%d", Init.GetNumber());
	
}


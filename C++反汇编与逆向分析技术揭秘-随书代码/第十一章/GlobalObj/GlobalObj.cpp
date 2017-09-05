// GlobalObj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd )

class CGlobal
{
public:
	CGlobal()				// ���캯��1
	{
		printf("CGlobal \r\n");
	}	
	CGlobal(int nInt)		// ���캯��2
	{
		printf("CGlobal(int nInt) %d\r\n", nInt);
	}
	CGlobal(char *pChar)	// ���캯��3
	{
		printf("CGlobal(char *pChar) %s\r\n", pChar);
	}
	virtual ~CGlobal()		// ������
	{
		printf("~CGlobal() \r\n");
	}
	
	void Show()
	{
		printf("�����׵�ַ��0x%08x", *this);
	}
};

CGlobal g_Global_void;
CGlobal g_Global_int(10);
CGlobal g_Global_lpchar("hello C++");

int main(int argc, char* argv[])
{
	g_Global_void.Show();
	g_Global_int.Show();
	g_Global_lpchar.Show();
	
	return 0;
}


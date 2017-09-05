// ClassRelation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ���ڳ�ʼ���б�ʹ�õ���
class CInit
{
public:
	CInit(int nNumber){
		m_nNumber = nNumber;
	}
	int m_nNumber;
};

class CBase
{
public:
	CBase()
	{
		printf("CBase\r\n");
	}
	~CBase()
	{
		printf("~CBase\r\n");
	}
	void SetNumber(int nNumber)
	{
		m_nBase = nNumber;
	}
	int GetNumber()
	{
		return m_nBase;
	}
public:
	int	m_nBase;
};

class CDervie : public CBase
{
public:	
	void ShowNumber(int nNumber)
	{
		SetNumber(nNumber);
		m_nDervie = nNumber + 1;
		printf("%d\r\n", GetNumber());
		printf("%d\r\n", m_nDervie);
	}
	void SetNumber(int nNumber){		// ���Ǹ����Ա����
		m_nBase = nNumber;
	}
// 	CDervie()
// 		:m_Init(1)
// 	{
// 		printf("�����б�ʹ��\r\n");
// 	}

public:
	int m_nDervie;
	int m_nBase;						// ���Ǹ������ݳ�Ա
//	CInit m_Init;						// ��ʼ���б�ʹ����
};


// ��̬
class CPerson
{
public:
	CPerson(){
		ShowSpeak();
	}
	virtual ~CPerson(){
		ShowSpeak();
	}
	virtual void ShowSpeak(){
		printf("Speak No\r\n");
	}
};

// �й��ˣ��̳�������
class CChinese : public CPerson
{
public:
	CChinese(){}
	virtual ~CChinese(){}
	virtual void ShowSpeak()
	{
		printf("Speak Chinese\r\n");
	}
};

// �����ˣ��̳�������
class CAmerican : public CPerson
{
public:
	CAmerican(){}
	virtual ~CAmerican(){}
	virtual void ShowSpeak()
	{
		printf("Speak American\r\n");
	}
};


// �¹��ˣ��̳�������
class CGerman : public CPerson
{
public:
	CGerman(){}
	virtual ~CGerman(){}
	virtual void ShowSpeak()
	{
		printf("Speak German\r\n");
	}
};

void ShowSpeak(CPerson * pPerson)
{
	pPerson->ShowSpeak();
}

/*
// ���ؼ̳�
// ����ɳ����
class CSofa{		
public:
	CSofa(){
		m_nColor = 2;
	}
	virtual ~CSofa(){					// ɳ��������������
		printf("virtual ~CSofa()\r\n");
	}
	virtual int GetColor(){				// ��ȡɳ����ɫ 
		return m_nColor;
	}
	virtual int SitDown(){				// ɳ������������Ϣ 
		return printf("Sit down and rest your legs\r\n");
	}
protected:
	int m_nColor;						// ɳ�����Ա���� 
};

// ���崲��
class CBed {		
public:
		  CBed(){
			  m_nLength = 4;
			  m_nWidth = 5;
		  }
		  virtual ~CBed(){						// �������������� 
			  printf("virtual ~CBed()\r\n");
		  }
		  virtual int GetArea(){					// ��ȡ����� 
			  return m_nLength * m_nWidth;
		  }
		  virtual int Sleep(){						// ����������˯�� 
			  return printf("go to sleep\r\n");
		  }
protected:
		  int m_nLength;						// �����Ա����
		  int m_nWidth;
};

// ����ɳ�������壬������CSofa��CBed��
class CSofaBed :  public CSofa,  public CBed{
public:
	CSofaBed(){
		m_nHeight = 6;
	}
	virtual ~CSofaBed(){					// ɳ����������������
		printf("virtual ~CSofaBed()\r\n");
	}
	virtual int SitDown(){					// ɳ������������Ϣ 
		return printf("Sit down on the sofa bed\r\n");
	}
	virtual int Sleep(){						// ����������˯�� 
		return printf("go to sleep on the sofa bed\r\n");
	}
	virtual int GetHeight(){
		return m_nHeight;
	}
protected:
	int m_nHeight;							// ɳ�����Ա����
};
*/




// ��������
class CVirtualBase{
public:
//	virtual ~CVirtualBase(){}
	virtual void Show() = 0;
//	virtual void Show1() = 0;
};

class CVirtualChild : public CVirtualBase{
public:
	virtual void Show()
	{
		printf("��������\r\n");
	}
// 	virtual void Show1()
// 	{
// 		printf("��������\r\n");
// 	}
};


/*

// ���νṹ����
// ����Ҿ��࣬��ͬ����A
class CFurniture{			
public:
	CFurniture(){
		m_nPrice = 0;
	}
	virtual ~CFurniture(){				// �Ҿ�������������
		printf("virtual ~CFurniture()\r\n");
	}
	virtual int GetPrice(){				// ��ȡ�Ҿ߼۸�
		return m_nPrice;
	};
protected:
	int m_nPrice;						// �Ҿ����Ա����
};

// ����ɳ���࣬�̳���CFurniture����ͬ����B
class CSofa : virtual public CFurniture{		
public:
	CSofa(){
		m_nPrice = 1;
		m_nColor = 2;
	}
	virtual ~CSofa(){					// ɳ��������������
		printf("virtual ~CSofa()\r\n");
	}
	virtual int GetColor(){				// ��ȡɳ����ɫ 
		return m_nColor;
	}
	virtual int SitDown(){				// ɳ������������Ϣ 
		return printf("Sit down and rest your legs\r\n");
	}
protected:
	int m_nColor;						// ɳ�����Ա���� 
};

// ���崲�࣬�̳���CFurniture����ͬ����C
class CBed : virtual public CFurniture{		
public:
		  CBed(){
			  m_nPrice = 3;
			  m_nLength = 4;
			  m_nWidth = 5;
		  }
		  virtual ~CBed(){						// �������������� 
			  printf("virtual ~CBed()\r\n");
		  }
		  virtual int GetArea(){					// ��ȡ����� 
			  return m_nLength * m_nWidth;
		  }
		  virtual int Sleep(){						// ����������˯�� 
			  return printf("go to sleep\r\n");
		  }
protected:
		  int m_nLength;						// �����Ա����
		  int m_nWidth;
};

// ����ɳ�������壬������CSofa��CBed�࣬��ͬ����D
class CSofaBed :  public CSofa,  public CBed{
public:
	CSofaBed(){
		m_nHeight = 6;
	}
	virtual ~CSofaBed(){					// ɳ����������������
		printf("virtual ~CSofaBed()\r\n");
	}
	virtual int SitDown(){					// ɳ������������Ϣ 
		return printf("Sit down on the sofa bed\r\n");
	}
	virtual int Sleep(){						// ����������˯�� 
		return printf("go to sleep on the sofa bed\r\n");
	}
	virtual int GetHeight(){
		return m_nHeight;
	}
protected:
	int m_nHeight;							// ɳ�����Ա����
};
*/
 

void main(int argc, char* argv[])
{

// 	CDervie Dervie;
// 	Dervie.SetNumber(argc);
// 	printf("%d\r\n", Dervie.m_nBase);
// 	printf("%d\r\n", Dervie.CBase::m_nBase);


//	CDervie Dervie;		// ��ʼ������


// 	CChinese Chinese;
// 	CAmerican American;
// 	CGerman German;
// 
// 	ShowSpeak(&Chinese);
// 	ShowSpeak(&American);
// 	ShowSpeak(&German);

	// ʹ�ø���ָ�뱣������Ѷ����׵�ַ
// 	CPerson * pPerson = new CChinese;
// 	if (pPerson != NULL)
// 	{
// 		delete pPerson;
// 		pPerson = NULL;
// 	}

	// ���ؼ̳�
// 	CSofaBed SofaBed;
// 	CSofa *pSofa = &SofaBed;
// 	CBed *pBed = &SofaBed;
	

 	// ��������
	CVirtualChild VirtualChild;
	VirtualChild.Show();

	// ���νṹ
// 	CSofaBed SofaBed;
// 	CFurniture * pFurniture = &SofaBed;
// 	CSofa * pSofa = &SofaBed;
// 	CBed * pBed = &SofaBed;	
}



// CommonDLL.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "CommonDLL.h"


// ���ǵ���������һ��ʾ��
COMMONDLL_API int nCommonDLL=0;

// ���ǵ���������һ��ʾ����
COMMONDLL_API int fnCommonDLL(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� CommonDLL.h
CCommonDLL::CCommonDLL()
{
	return;
}

int CCommonDLL::Sum( const int nNum1, const int nNum2 ) const
{
	return nNum1 + nNum2;
}

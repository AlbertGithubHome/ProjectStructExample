// MainFunc.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "FuncCommon.h"
#include "CommonDLL.h"

// ��ʽ����dll
//#pragma comment(lib,"..\\Lib\\Debug\\CommonDLL.lib")

int _tmain(int argc, _TCHAR* argv[])
{

	ZArithmetic zA;

	printf("the min num is %d\n", zA.Min(2,5));

	CCommonDLL cC;

	printf("the sum of 2 and 5 is %d\n", cC.Sum(2,5));
	printf("the sum of 2 and 5 is %d\n", fnCommonDLL());
	printf("the sum of 2 and 5 is %d\n", nCommonDLL);
	printf("the sum of 4 and 5 is %d\n", cC.Sum(4,5));

	getchar();
	return 0;
}


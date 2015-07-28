// CommonDLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "CommonDLL.h"


// 这是导出变量的一个示例
COMMONDLL_API int nCommonDLL=0;

// 这是导出函数的一个示例。
COMMONDLL_API int fnCommonDLL(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 CommonDLL.h
CCommonDLL::CCommonDLL()
{
	return;
}

int CCommonDLL::Sum( const int nNum1, const int nNum2 ) const
{
	return nNum1 + nNum2;
}

#include "FuncCommon.h"

ZArithmetic::ZArithmetic()
{

}

ZArithmetic::~ZArithmetic()
{

}

int ZArithmetic::Min( const int nNum1, const int nNum2 ) const
{
	return (nNum1 < nNum2) ? nNum1 : nNum2;
}

// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� COMMONDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// COMMONDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef COMMONDLL_EXPORTS
#define COMMONDLL_API __declspec(dllexport)
#else
#define COMMONDLL_API __declspec(dllimport)
#endif

// �����Ǵ� CommonDLL.dll ������
class COMMONDLL_API CCommonDLL {
public:
	CCommonDLL(void);
	
	int Sum(const int nNum1, const int nNum2) const;
};

extern COMMONDLL_API int nCommonDLL;

COMMONDLL_API int fnCommonDLL(void);

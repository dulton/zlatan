// libGBPlatformDownSingle.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "libGBPlatformDownSingle.h"

#ifdef WIN32
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// ClibGBPlatformDownSingleApp

BEGIN_MESSAGE_MAP(ClibGBPlatformDownSingleApp, CWinApp)
END_MESSAGE_MAP()


// ClibGBPlatformDownSingleApp ����

ClibGBPlatformDownSingleApp::ClibGBPlatformDownSingleApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� ClibGBPlatformDownSingleApp ����

ClibGBPlatformDownSingleApp theApp;


// ClibGBPlatformDownSingleApp ��ʼ��

BOOL ClibGBPlatformDownSingleApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
#endif
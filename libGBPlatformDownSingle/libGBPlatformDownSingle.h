// libGBPlatformDownSingle.h : libGBPlatformDownSingle DLL ����ͷ�ļ�
//

#pragma once

#ifdef WIN32
#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// ClibGBPlatformDownSingleApp
// �йش���ʵ�ֵ���Ϣ������� libGBPlatformDownSingle.cpp
//

class ClibGBPlatformDownSingleApp : public CWinApp
{
public:
	ClibGBPlatformDownSingleApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
#endif
// libsip_plugin.h : libsip_plugin DLL ����ͷ�ļ�
//

#pragma once

#ifdef WIN32
#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Clibsip_pluginApp
// �йش���ʵ�ֵ���Ϣ������� libsip_plugin.cpp
//

class Clibsip_pluginApp : public CWinApp
{
public:
	Clibsip_pluginApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
#endif
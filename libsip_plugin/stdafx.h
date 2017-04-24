// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifdef WIN32

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE ��
#include <afxodlgs.h>       // MFC OLE �Ի�����
#include <afxdisp.h>        // MFC �Զ�����
#endif // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>                      // MFC ODBC ���ݿ���
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>                     // MFC DAO ���ݿ���
#endif // _AFX_NO_DAO_SUPPORT

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>                     // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT


#pragma comment(lib,"libSQLData.lib")
#pragma comment(lib,"KBASE.lib")
#pragma comment(lib,"NETEC.lib")
#pragma comment(lib,"KNET.lib")
#pragma comment(lib,"libstream_transcode.lib")
#pragma comment(lib,"libstream_transfer.lib")
#pragma comment(lib,"libGB28181.lib")

#ifdef _VOD_ENABLE
#pragma comment(lib,"VOD_TX.lib")
#endif

#else

#include "linux_include.h"


#endif

#include "KBASE.h"
#include "Fun.h"
#include "IPluginDB.h"
#include "IMonDefine.h"
#include "libStreamTransfer.h"
#include "libStreamTranscode.h"
#include "NETEC/NETEC_Node.h"
#include "NETEC/XUtil.h"
#include "VIDEC/VIDEC_Header.h"
#include "AUDEC/AUDEC_CodecID.h"
#include "MonToolDef.h"
#include "MonAlarmDefine.h"

#ifdef _VOD_ENABLE
#include "VMSP/VMSPDefine.h"
#include "VODTX.h"
#include "VODType.h"
#include "VODPublic.h"
#endif
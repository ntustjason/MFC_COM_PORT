
#include "stdafx.h"
#include "CommMFC.h"
#include "CommMFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCommMFCApp

BEGIN_MESSAGE_MAP(CCommMFCApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()



CCommMFCApp::CCommMFCApp()
{
	
}



CCommMFCApp theApp;


// CCommMFCApp 

BOOL CCommMFCApp::InitInstance()
{
	
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	
	SetRegistryKey(_T(""));

	CCommMFCDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		
	}
	else if (nResponse == IDCANCEL)
	{
		
	}

	return FALSE;
}

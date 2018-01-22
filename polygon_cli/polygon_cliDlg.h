
// polygon_cliDlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "CPolyCtl.h"


// Cpolygon_cliDlg dialog
class Cpolygon_cliDlg : public CDialogEx
{
// Construction
public:
	Cpolygon_cliDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_POLYGON_CLI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	CPolyCtl m_polyCtl;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_stPicture;
};

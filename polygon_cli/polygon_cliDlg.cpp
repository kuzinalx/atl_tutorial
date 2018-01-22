
// polygon_cliDlg.cpp : implementation file
//

#include "stdafx.h"
#include "polygon_cli.h"
#include "polygon_cliDlg.h"
#include "afxdialogex.h"
//#include "CPolyCtl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cpolygon_cliDlg dialog



Cpolygon_cliDlg::Cpolygon_cliDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cpolygon_cliDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cpolygon_cliDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PICTURE, m_stPicture);
}

BEGIN_MESSAGE_MAP(Cpolygon_cliDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// Cpolygon_cliDlg message handlers

BOOL Cpolygon_cliDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

	COleException *e = new COleException;
	//CPolyCtl polyCtl;

	if (!m_polyCtl.CreateDispatch(__uuidof(PolyCtl), e))
		throw e;

	short nSides = m_polyCtl.get_Sides();
	CString str;
	str.Format( _T("Old side count: %i\n"), nSides );
	m_polyCtl.put_Sides( 8 );
	str.AppendFormat( _T( "New side count: %i" ), m_polyCtl.get_Sides() );
	str.AppendFormat( _T( "HDC: %i, LONG: %i" ), sizeof(HDC), sizeof(LONG) );
	GetDlgItem( IDC_STATIC_POLYGON )->SetWindowTextW( str );

	/*{
		CClientDC dc( GetDlgItem( IDC_PICTURE ) );
		CRect r( 0, 0, 100, 100 );
		m_polyCtl.DrawPoly( ( wireHDC )dc.GetSafeHdc(), &r );
	};*/
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void Cpolygon_cliDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void Cpolygon_cliDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
		
		{
		CClientDC dc( GetDlgItem( IDC_PICTURE ) );
		//CRect r( 0, 0, 100, 100 );
		RECTL r = { 0, 0, 200, 200 };
		//RECT r = { 0, 0, 100, 100 };
		//m_polyCtl.DrawPoly( ( wireHDC )dc.GetSafeHdc(), &r );
		m_polyCtl.DrawPoly2( ( LONG )dc.GetSafeHdc(), ( LONG* )&r );
		//dc.Ellipse( &r );
		};
		/*if ( m_polyCtl )
		{
			CPaintDC dc();
			CRect r( 0, 0, 100, 100 );
		};*/
			//m_polyCtl.DrawPoly( ( wireHDC )dc.GetSafeHdc(), &r );
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR Cpolygon_cliDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


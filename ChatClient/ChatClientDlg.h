
// ChatClientDlg.h : 头文件
//

#pragma once
#include"ClientSocket.h"
#include "afxcmn.h"
#include "afxwin.h"


// CChatClientDlg 对话框
class CChatClientDlg : public CDialogEx
{
// 构造
public:
	CChatClientDlg(CWnd* pParent = NULL);	// 标准构造函数
	CClientSocket m_ClientSocket;
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATCLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CIPAddressCtrl ServerIP;
	int Sport;
	CString m_sWords;
	CListBox m_ListWords;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};

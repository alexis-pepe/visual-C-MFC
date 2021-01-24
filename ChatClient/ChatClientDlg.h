
// ChatClientDlg.h : ͷ�ļ�
//

#pragma once
#include"ClientSocket.h"
#include "afxcmn.h"
#include "afxwin.h"


// CChatClientDlg �Ի���
class CChatClientDlg : public CDialogEx
{
// ����
public:
	CChatClientDlg(CWnd* pParent = NULL);	// ��׼���캯��
	CClientSocket m_ClientSocket;
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATCLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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

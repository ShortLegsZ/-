#pragma once


// CDesign 对话框

class CDesign : public CDialogEx
{
	DECLARE_DYNAMIC(CDesign)

public:
	CDesign(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDesign();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

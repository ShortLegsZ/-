// CDesign.cpp: 实现文件
//

#include "pch.h"
#include "FileDesign.h"
#include "CDesign.h"
#include "afxdialogex.h"


// CDesign 对话框

IMPLEMENT_DYNAMIC(CDesign, CDialogEx)

CDesign::CDesign(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CDesign::~CDesign()
{
}

void CDesign::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDesign, CDialogEx)
END_MESSAGE_MAP()


// CDesign 消息处理程序

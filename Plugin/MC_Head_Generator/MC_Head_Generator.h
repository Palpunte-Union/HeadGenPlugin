// MC_Head_Generator.h : MC_Head_Generator DLL のメイン ヘッダー ファイル
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMCHeadGeneratorApp
// このクラスの実装に関しては MC_Head_Generator.cpp をご覧ください
//

class CMCHeadGeneratorApp : public CWinApp
{
public:
	CMCHeadGeneratorApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

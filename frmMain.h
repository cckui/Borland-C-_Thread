//---------------------------------------------------------------------------

#ifndef frmMainH
#define frmMainH

#include "TGaugeThread.h"
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "iAngularGauge.hpp"
#include "iComponent.hpp"
#include "iCustomComponent.hpp"
#include "iGaugeComponent.hpp"
#include "iPositionComponent.hpp"
#include "iScaleComponent.hpp"
#include "iVCLComponent.hpp"
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TiAngularGauge *iAngularGauge1;
	TBitBtn *btnThreadStart;
	TBitBtn *btnThreadPause;
	TBitBtn *btnclose;
	TBitBtn *BitBtn1;
	TBitBtn *Stop;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall btnThreadStartClick(TObject *Sender);
	void __fastcall btnThreadPauseClick(TObject *Sender);
	void __fastcall btncloseClick(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
	TGaugeThread* TestThread ;

	void __fastcall OperateShow(void);
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif

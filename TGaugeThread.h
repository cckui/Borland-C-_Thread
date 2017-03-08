//---------------------------------------------------------------------------

#ifndef TGaugeThreadH
#define TGaugeThreadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TGaugeThread : public TThread
{
private:
	bool bFDirection ;
	bool bFThreadStop ;
	void __fastcall UpdateCaption();

protected:
	void __fastcall Execute();
public:
	int FPosition ;
	__fastcall TGaugeThread(bool CreateSuspended);
	void __fastcall ThreadControlFlagSet(bool bThreadStop);
};
//---------------------------------------------------------------------------
#endif

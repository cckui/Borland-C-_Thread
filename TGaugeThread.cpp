//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "TGaugeThread.h"
//#include "frmMain.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
	  void __fastcall TGaugeThread::UpdateCaption()
	  {
		//MainForm->iAngularGauge1->Position = FPosition ;
	  }
//---------------------------------------------------------------------------

__fastcall TGaugeThread::TGaugeThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{
	bFDirection = true ;
	bFThreadStop = false ;
}
//---------------------------------------------------------------------------
void __fastcall TGaugeThread::Execute()
{
	NameThreadForDebugging(System::String(L"GaugeThread"));
	//---- Place thread code here ----
/*	while(true){
		if(bFThreadStop)
			break;
		else{
			FPosition = MainForm->iAngularGauge1->Position ;
			if(bFDirection)
				FPosition++ ;
			else
				FPosition-- ;
			if(FPosition >= MainForm->iAngularGauge1->PositionMax)
				bFDirection = false ;
			if(FPosition <= MainForm->iAngularGauge1->PositionMin)
				bFDirection = true ;

			Sleep(100);
			Synchronize(UpdateCaption);
		}

	} */
}
//---------------------------------------------------------------------------
void __fastcall TGaugeThread::ThreadControlFlagSet(bool bThreadStop)
{
	bThreadStop = bFThreadStop ;
}
//---------------------------------------------------------------------------

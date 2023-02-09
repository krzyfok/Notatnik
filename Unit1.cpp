//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString nazwapliku="";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Otwrz2Click(TObject *Sender)
{
        if (OpenDialog1->Execute())
        {
          try
          {

                 tekst->Lines->LoadFromFile(OpenDialog1->FileName);
                 nazwapliku =    OpenDialog1->FileName;
          }

          catch(...)
          {
           ShowMessage("B³¹d otwarcia pliku");
           }
        }


}
//---------------------------------------------------------------------------



void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
              if (SaveDialog1->Execute())
        {
          try
          {

                 tekst->Lines->SaveToFile(SaveDialog1->FileName);
                  nazwapliku =    SaveDialog1->FileName;
          }

          catch(...)
          {
           ShowMessage("B³¹d zapisu pliku");
           }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
      if (nazwapliku!="")
      {
         tekst->Lines->SaveToFile(nazwapliku);
      }
      else
      {
       Form1->Zapiszjako1Click(MainMenu1)  ;
      }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Otwrz1Click(TObject *Sender)
{
    if(Application->MessageBox("Czy napewno uwtorzyæ nowy plik?","PotwierdŸ",MB_YESNOCANCEL | MB_ICONQUESTION)==IDYES)
    {
       tekst->Lines->Clear();
       nazwapliku = "";
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::tekstKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
      if(Shift.Contains(ssCtrl))
      {
        if((Key=='s') || (Key == 'S'))
        {
                Form1-> Zapisz1Click(MainMenu1);
        }
        if((Key=='n') || (Key == 'N'))
        {
                Form1-> Otwrz1Click(MainMenu1);
        }
      }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{    const int wynik = Application->MessageBox("Czy chcesz zapisaæ program?","PotwierdŸ",MB_YESNOCANCEL | MB_ICONQUESTION);
        switch (wynik)
        {
        case IDYES:

        Form1-> Zapisz1Click(MainMenu1);
          Application->Terminate();
                break;
        case IDNO:
              Application->Terminate();
              break;
       }
    }

//---------------------------------------------------------------------------


void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
      const int wynik = Application->MessageBox("Czy chcesz zapisaæ program?","PotwierdŸ",MB_YESNOCANCEL | MB_ICONQUESTION);
        switch (wynik)
        {
        case IDYES:
              Form1-> Zapisz1Click(MainMenu1);
                break;
        case IDCANCEL:
              Action=caNone;
              break;
        }
    }
//---------------------------------------------------------------------------

void __fastcall TForm1::Wytnij1Click(TObject *Sender)
{
        tekst -> CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kopiuj1Click(TObject *Sender)
{
        tekst -> CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wklej1Click(TObject *Sender)
{
     tekst->PasteFromClipboard();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Zawijaniewierszy1Click(TObject *Sender)
{
        if(Zawijaniewierszy1->Checked==true)
        {
            Zawijaniewierszy1->Checked=false;
            tekst->WordWrap=false;
            tekst->ScrollBars =ssBoth;
        }
        else
        {
                Zawijaniewierszy1->Checked=true;
                tekst->WordWrap=true;
                tekst->ScrollBars=ssVertical;
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
        if(FontDialog1->Execute())
        {
          tekst->Font->Name = FontDialog1->Font->Name;
          tekst->Font->Color=FontDialog1->Font->Color;
          tekst->Font->Size=FontDialog1->Font->Size;
          tekst->Font->Style=FontDialog1->Font->Style;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Autor1Click(TObject *Sender)
{
    Form2-> ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::GitHuB1Click(TObject *Sender)
{
     ShellExecute(NULL, "open", "https://github.com/krzyfok ", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
                                                                                

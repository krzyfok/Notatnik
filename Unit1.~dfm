object Form1: TForm1
  Left = 1311
  Top = 287
  Width = 884
  Height = 457
  Caption = 'Notatnik'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tekst: TMemo
    Left = 0
    Top = 0
    Width = 868
    Height = 398
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = tekstKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 592
    Top = 40
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Otwrz1: TMenuItem
        Caption = 'Nowy'
        OnClick = Otwrz1Click
      end
      object Otwrz2: TMenuItem
        Caption = 'Otw'#243'rz'
        OnClick = Otwrz2Click
      end
      object Zapisz1: TMenuItem
        Caption = 'Zapisz'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapisz jako'
        OnClick = Zapiszjako1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object Wytnij1: TMenuItem
        Caption = 'Wytnij'
        OnClick = Wytnij1Click
      end
      object Kopiuj1: TMenuItem
        Caption = 'Kopiuj'
        OnClick = Kopiuj1Click
      end
      object Wklej1: TMenuItem
        Caption = 'Wklej'
        OnClick = Wklej1Click
      end
    end
    object Wyswietl1: TMenuItem
      Caption = '&Format'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Zawijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = 'Czcionka'
        OnClick = Czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc'
      object Informacje1: TMenuItem
        Caption = 'Informacje'
        object Autor1: TMenuItem
          Caption = 'Autor'
          OnClick = Autor1Click
        end
        object GitHuB1: TMenuItem
          Caption = 'Git Hub'
          OnClick = GitHuB1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe(txt)|*.txt|Wszytskie pliki|*.*'
    Left = 632
    Top = 40
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik Tekstowy(txt)|*.txt|Dowolony plik|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 680
    Top = 40
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 720
    Top = 40
  end
end

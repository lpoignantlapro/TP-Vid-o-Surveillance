object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 617
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Zoom: TLabel
    Left = 320
    Top = 232
    Width = 26
    Height = 13
    Caption = 'Zoom'
  end
  object Deplacement: TLabel
    Left = 304
    Top = 32
    Width = 42
    Height = 13
    Alignment = taCenter
    Caption = 'CAMERA'
  end
  object Droite: TButton
    Left = 369
    Top = 127
    Width = 75
    Height = 25
    Caption = '-->'
    TabOrder = 0
    OnClick = DroiteClick
  end
  object Gauche: TButton
    Left = 207
    Top = 127
    Width = 75
    Height = 25
    Caption = '<--'
    TabOrder = 1
    OnClick = GaucheClick
  end
  object Bas: TButton
    Left = 288
    Top = 158
    Width = 75
    Height = 25
    Caption = 'Bas'
    TabOrder = 2
    OnClick = BasClick
  end
  object Haut: TButton
    Left = 288
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Haut'
    TabOrder = 3
    OnClick = HautClick
  end
  object ON: TButton
    Left = 223
    Top = 27
    Width = 75
    Height = 25
    Caption = 'ON'
    TabOrder = 4
    OnClick = ONClick
  end
  object OFF: TButton
    Left = 352
    Top = 27
    Width = 75
    Height = 25
    Caption = 'OFF'
    TabOrder = 5
    OnClick = OFFClick
  end
  object Stop: TButton
    Left = 288
    Top = 127
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 6
    OnClick = StopClick
  end
  object ZoomPlus: TButton
    Left = 192
    Top = 251
    Width = 75
    Height = 25
    Caption = '+'
    TabOrder = 7
    OnClick = ZoomPlusClick
  end
  object ZoomStop: TButton
    Left = 288
    Top = 251
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 8
    OnClick = ZoomStopClick
  end
  object ZoomMoins: TButton
    Left = 384
    Top = 251
    Width = 75
    Height = 25
    Caption = '-'
    TabOrder = 9
    OnClick = ZoomMoinsClick
  end
  object BoutonAutomatique: TCheckBox
    Left = 512
    Top = 16
    Width = 97
    Height = 17
    Caption = 'AUTOMATIQUE'
    TabOrder = 10
    OnClick = BoutonAutomatiqueClick
  end
end

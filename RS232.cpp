//---------------------------------------------------------------------------

#pragma hdrstop
#include "RS232.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
// fonction de connexion au port com en RS232
bool RS232::Open()
{
	// connexion au port COM
	com = CreateFile("COM1",
					GENERIC_WRITE|GENERIC_READ,
					0,
					NULL,
					OPEN_EXISTING,
					FILE_FLAG_NO_BUFFERING, //FILE_FLAG_OVERLAPPED,
					NULL);
	// si �a echoue
	if(com == INVALID_HANDLE_VALUE)
	{
		return false;
	}
	// si �a reussi initialise les param�tres
	else
	{
		DCB serie;
		// configuration de l�objet
		GetCommState(com, &serie);
		serie.BaudRate = 9600;
		serie.ByteSize = 8;
		serie.Parity = NOPARITY;
		serie.StopBits = ONESTOPBIT;
		SetCommState(com, &serie);
	}

    return true;
}
// Ferme la connexion au port COM
void RS232::Close()
{
	if(com != INVALID_HANDLE_VALUE)
	{
        CloseHandle(com);
    }
}
// Foncion d'envoie de la trame
// buf : message � envoyer
// len : taille du message
void RS232::Write(char * buf, int len)
{
	unsigned long nbBytesSend;
	WriteFile(com, buf, len, &nbBytesSend, NULL);
}


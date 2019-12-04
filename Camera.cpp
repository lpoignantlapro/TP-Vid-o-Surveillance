//---------------------------------------------------------------------------

#pragma hdrstop
#include "RS232.h"
#include "Camera.h"
#include "Unit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
// envoie d'une trame pour activer la camera
Camera::Camera(RS232 * port)
{
	this->port = port;
	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x00;
	texte[4] = 0x02;
	texte[5] =  0xFF;

	this->port->Write(texte, 6);
}
// envoie d'une trame pour desactiver la camera
Camera::~Camera()
{
	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x00;
	texte[4] = 0x03;
	texte[5] =  0xFF;
	port->Write(texte, 6);
}
// envoie d'une trame pour dezoomer la camera
void Camera::ZoomMoins()
{

	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x07;
	texte[4] = 0x03;
	texte[5] = 0xFF;
	port->Write(texte, 6);
}
// envoie d'une trame pour stoper le zoom/dezoomer la camera
void Camera::ZoomStop()
{
	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x07;
	texte[4] = 0x00;
	texte[5] = 0xFF;
	port->Write(texte, 6);
}
// envoie d'une trame pour zoomer la camera
void Camera::ZoomPlus()
{

	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x07;
	texte[4] = 0x02;
	texte[5] = 0xFF;
	port->Write(texte, 6);
}
// envoie d'une trame pour oriente la camera à gauche
void Camera::Gauche()
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x01;
	texte[7] = 0x03;
	texte[8] = 0xFF;
	port->Write(texte, 9);
}
// envoie d'une trame pour oriente la camera à droite
void Camera::Droite()
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x02;
	texte[7] = 0x03;
	texte[8] = 0xFF;
	port->Write(texte, 9);
}
// envoie d'une trame pour oriente la camera en bas
void Camera::Bas()
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x03;
	texte[7] = 0x02;
	texte[8] = 0xFF;
	port->Write(texte, 9);
}
// envoie d'une trame pour oriente la camera en haut
void Camera::Haut()
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x03;
	texte[7] = 0x01;
	texte[8] = 0xFF;
	port->Write(texte, 9);
}
// envoie d'une trame pour effectuer 3 balayages d'affilé


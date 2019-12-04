//---------------------------------------------------------------------------

#ifndef CameraH
#define CameraH

#include "Unit.h"
//---------------------------------------------------------------------------

class RS232;
class Camera
{

  private :
	int Position;
	RS232 * port;

  public :

	 Camera(RS232 * port);
	 ~Camera();
	 void ZoomMoins();
	 void ZoomStop();
	 void ZoomPlus();
	 void Gauche();
	 void Droite();
	 void Bas();
	 void Haut();


};
#endif

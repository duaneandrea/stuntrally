#ifndef _CARINPUT_H
#define _CARINPUT_H

enum WHEEL_POSITION
{
	FRONT_LEFT,	FRONT_RIGHT,
	REAR_LEFT,	REAR_RIGHT,
	WHEEL_POSITION_SIZE
};

namespace SURFACE  {
enum CARSURFACETYPE
{
	NONE,
 	ASPHALT,
  	GRASS,
	GRAVEL,
	CONCRETE,
	SAND,
	COBBLES
};  }

namespace CARINPUT  {
enum CARINPUT
{
	//actual car inputs that the car uses
	THROTTLE, 	BRAKE, BOOST, FLIP,
  	HANDBRAKE, 	CLUTCH,
  	STEER_LEFT,	STEER_RIGHT,
 	SHIFT_UP, 	SHIFT_DOWN,  START_ENGINE,
 	ABS_TOGGLE, TCS_TOGGLE,
    /*NEUTRAL, FIRST_GEAR, SECOND_GEAR, THIRD_GEAR,
    FOURTH_GEAR, FIFTH_GEAR, SIXTH_GEAR, REVERSE,
	REAR_VIEW,*/
	ALL
};  }

const int Ncrashsounds = 12;

#endif

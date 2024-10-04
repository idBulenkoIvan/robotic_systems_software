
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	if(Enable ==1)
	{
		count+=10;
		if (count >=400 && count <=2000) speed = 40;
		else {
			speed = 5;
		}
		if(count >= 2000){
			count = 0;	
		}
	}
	else speed = 0;
	
	fb_controller.e = speed-fb_motor.w;
	fb_controller2.e = speed-fb_motor3.w;
	
	fb_motor2.u = speed*fb_motor2.ke;
	fb_motor.u = fb_controller.u*fb_motor.ke;
	fb_motor3.u = fb_controller2.u*fb_motor3.ke;
	
	FB_Regulator(&fb_controller);
	FB_Regulator(&fb_controller2);
	FB_Motor(&fb_motor);
	FB_Motor(&fb_motor2);
	FB_Motor(&fb_motor3);
}

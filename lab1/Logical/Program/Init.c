
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	Enable = 1;
	count = 0;
	speed = 0;
	
	fb_motor.dt = 0.01;
	fb_motor.ke = 0.24;
	fb_motor.Tm = 0.1;
	
	fb_motor2.dt = 0.01;
	fb_motor2.ke = 0.24;
	fb_motor2.Tm = 0.1;
	
	fb_motor3.dt = 0.01;
	fb_motor3.ke = 0.24;
	fb_motor3.Tm = 0.1;
	
	fb_controller.dt = 0.01;
	fb_controller.k_p = 5;
	fb_controller.k_i = 6;
	
	fb_controller2.dt = 0.01;
	fb_controller2.k_p = 0.24*3;
	fb_controller2.k_i = 7.2;
	
	fb_controller.max_abs_value = 24;
}

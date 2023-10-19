#include "mode.h"
#include "Plane.h"

void ModeMFLY::update()
{
    plane.nav_roll_cd = 0;
    plane.nav_pitch_cd = 0;
}

void ModeMFLY::run()
{
    plane.stabilize_roll();
    plane.stabilize_pitch();
    stabilize_stick_mixing_direct();
    plane.stabilize_yaw();
}


#include <stdlib.h>
#include <math.h>

#include <AP_HAL.h>
extern const AP_HAL::HAL& hal;

#include <AP_Math.h>

#include "TEST_AI.h"


void
TEST_AI::update_one_hz_count()
{
    one_hz_count++;
}

void
TEST_AI::update_ten_hz_count()
{
    ten_hz_count++;
}
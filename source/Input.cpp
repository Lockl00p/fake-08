#include "input.h"

void Input::SetState(uint8_t kdown, uint8_t kheld){
    _currentKDown = kdown;
    _currentKHeld = kheld;
}

bool Input::btn(uint8_t i){
    return BITMASK(i) & _currentKHeld;
}

bool Input::btnp(uint8_t i){
    return BITMASK(i) & _currentKDown;
}

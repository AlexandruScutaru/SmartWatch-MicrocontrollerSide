#pragma once

#include "Display.h"
#include "Input.h"
#include "Timer.h"
#include "ScreenStateMachine.h"

#include <cstdint>


class App {
public:
    App();
    ~App();

    void run();

private:
    void loop();
    void update(double delta);
    void draw();

    //app loop varaibles
    uint32_t mPrevTicks = 0U;
    uint32_t mNewTicks = 0U;
    uint32_t mFrameTicks = 0U;
    double delta = 0.0;

    Display mDisplay;
    Input mInput;
    Timer mTimer;
    ScreenStateMachine mScreenStateMachine;
};
#include "IdleState.h"
#include "MainScreenState.h"
#include "Display.h"

IdleState::IdleState(ScreenStateMachine* stateMachine) 
    : IScreenState()
{
    mStateMachine = stateMachine;
}

void IdleState::handle(Input::Action action) {
    switch (action)
    {
    case Input::Action::SINGLE_TAP:
        mStateMachine->changeState(std::shared_ptr<IScreenState>(new MainScreenState(mStateMachine)));
        break;
    default:
        break;
    }
}

void IdleState::update(double dt) {

}

void IdleState::draw(Display& display) {
    display().clearDisplay();
    display().setCursor(0, 10);
    display().print("Idle state");
    display().display();
}
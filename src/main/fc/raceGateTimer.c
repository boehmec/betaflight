
#include "raceGateTimer.h"

raceGateTimerData_t raceGateTimerData;

void init(void) {
    raceGateTimerData.totalLaps = 0;
}

void onGatePassed(void) {
    raceGateTimerData.totalLaps++;
    raceGateTimerData.bestLapTime = 0;
    raceGateTimerData.currentLapTime = 0;
    raceGateTimerData.timerRunning = false;
}
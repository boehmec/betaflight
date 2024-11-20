
#include "raceGateTimer.h"

raceGateTimerData_t raceGateTimerData;

void initRaceGateTimer(void) {
    raceGateTimerData.totalLaps = 0;
    raceGateTimerData.currentLapTime = millis();
    raceGateTimerData.timerRunning = true; //todo remove
}

void onGatePassed(uint32_t lapTime) {
    raceGateTimerData.totalLaps++;
    if(raceGateTimerData.bestLapTime > lapTime){
        raceGateTimerData.bestLapTime = lapTime;
    }
    raceGateTimerData.lastLapTime = lapTime;
    raceGateTimerData.currentLapTime = millis();
    raceGateTimerData.timerRunning = true;
}

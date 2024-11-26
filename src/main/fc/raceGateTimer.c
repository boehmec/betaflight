
#include "raceGateTimer.h"

raceGateTimerData_t raceGateTimerData;

void initRaceGateTimer(void) {
    raceGateTimerData.totalLaps = 0;
    raceGateTimerData.timerRunning = false;
    raceGateTimerData.bestLapTime = INT16_MAX;
    raceGateTimerData.currentLapTime = 0;
}

void onGatePassed(uint32_t lapTime) {
    raceGateTimerData.totalLaps++;
    //update best lap - might not be accurate for whole session
    if(lapTime < raceGateTimerData.bestLapTime){
        raceGateTimerData.bestLapTime = lapTime;
    }
    raceGateTimerData.lastLapTime = lapTime;
    raceGateTimerData.currentLapTime = millis();
    raceGateTimerData.timerRunning = true;
}

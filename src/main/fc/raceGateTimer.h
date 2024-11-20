#pragma once

#include "drivers/time.h"

typedef struct raceGateTimerData_s {
    uint32_t currentLapTime; //start time of new lap
    uint32_t bestLapTime;
    uint32_t lastLapTime;
    uint16_t totalLaps;
    bool timerRunning;
} raceGateTimerData_t;

extern raceGateTimerData_t raceGateTimerData;

void initRaceGateTimer(void);
void onGatePassed(uint32_t lapTime);
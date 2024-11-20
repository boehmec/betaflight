#pragma once

#include "drivers/time.h"

typedef struct raceGateTimerData_s {
    uint32_t currentLapTime;
    uint32_t bestLapTime;
    uint16_t totalLaps;
    bool timerRunning;
} raceGateTimerData_t;

extern raceGateTimerData_t raceGateTimerData;

void init(void);
void onGatePassed(void);
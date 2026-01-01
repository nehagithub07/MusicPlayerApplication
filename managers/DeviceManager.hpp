#pragma once
#include<bits/stdc++.h>
#include "../device/IAudioOutputDevice.hpp"
#include "../enums/DeviceType.hpp"
#include "../factories/DeviceFactory.hpp"
using namespace std;

class DeviceManager {
    private:
    static DeviceManager* instace;
    IAudioOutputDevice* currentOutputDevice;
    DeviceManager() {
        currentOutputDevice = nullptr;
    }
    
};

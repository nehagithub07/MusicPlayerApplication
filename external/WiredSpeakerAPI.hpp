#pragma once
#include<bits/stdc++.h>
using namespace std;
class WiredSpeakerAPI {
    public:
    void playSoundViaBluetooth(const string& data) {
        cout << "[WiredSpeaker] Playing: " << data << "\n";
    }
};
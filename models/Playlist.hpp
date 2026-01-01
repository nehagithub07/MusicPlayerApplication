#pragma once
#include "../models/Song.hpp"
#include<bits/stdc++.h>
using namespace std;

class PlayList {
private:
    string playListName;
    vector<Song*>songList;
public:
    PlayList(string name) {
        playListName = name;
    }
    string getPlayListName() {
        return playListName;
    }
    const vector<Song*>getSongs() {
        return songList;
    }
    int getSize() {
        return (int)songList.size();
    }
    void addSongToPlaylist(Song* song) {
        if(song == nullptr) {
            throw runtime_error("Connot add null song to playlist.");
        }
        songList.push_back(song);
    }
};
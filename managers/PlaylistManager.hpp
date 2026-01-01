#pragma once
#include "../models/Playlist.hpp"
#include<bits/stdc++.h>
using namespace std;

class PlaylistManager {
    private:
    map<string, Playlist*> playlists;
    static PlaylistManager* instance;
    PlaylistManager() {}
    public:
    static PlaylistManager* getInstance() {
        if(!instance) {
            instance = new PlaylistManager();
        }
        return instance;
    }
    void createPlaylist(const string& name) {
        if(playlists.count(name)) {
            throw runtime_error("Playlist \"" + name + "\" already exists.");
        }
    }
    void addSongPlaylist(const string& playlistName, Song* song) {
        if(!playlists.count(playlistName)) {
            throw runtime_error("Playlist \"" + playlistName + "\" not found.");
        }
        playlists[playlistName]->addSongToPlaylist(song);
    }
    Playlist* getPlaylist(const string& name) {
        if(!playlists.count(name)) {
            throw runtime_error("Playlist \"" + name + "\" not found."); 
        }
        return playlists[name];
    }
};
PlaylistManager* PlaylistManager::instance = nullptr;


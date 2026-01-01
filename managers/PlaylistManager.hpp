#pragma once
#include <bits/stdc++.h>
#include "../models/Playlist.hpp"

using namespace std;

class PlaylistManager {
    private:
    map<string, PlayList*> playlists;
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
    PlayList* getPlaylist(const string& name) {
        if(!playlists.count(name)) {
            throw runtime_error("Playlist \"" + name + "\" not found."); 
        }
        return playlists[name];
    }
};
PlaylistManager* PlaylistManager::instance = nullptr;


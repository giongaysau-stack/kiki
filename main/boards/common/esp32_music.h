#pragma once

#include <string>

/**
 * @brief Simple music player interface for HTTP audio streaming
 */
class MusicPlayer {
public:
    virtual ~MusicPlayer() = default;
    virtual void Play(const std::string& url) = 0;
    virtual void Stop() = 0;
    virtual bool IsPlaying() const = 0;
};

/**
 * @brief ESP32 HTTP audio streaming music player
 */
class Esp32Music : public MusicPlayer {
public:
    Esp32Music() = default;
    ~Esp32Music() = default;
    
    void Play(const std::string& url) override {
        // TODO: Implement HTTP audio streaming
    }
    
    void Stop() override {
        // TODO: Implement stop
    }
    
    bool IsPlaying() const override {
        return false;
    }
};


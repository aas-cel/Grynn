#include "AutoSave.hpp"
#include <thread>
#include <atomic>
#include <fstream>
#include <iostream>

AutoSave::AutoSave() : interval(180), running(false) {}
AutoSave::~AutoSave() { stop(); }

void AutoSave::setInterval(std::chrono::seconds i) { interval = i; }

void AutoSave::start(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes) {
    running = true;
    std::thread([this, path, &notes]() {
        while (running) {
            std::ofstream ofs(path, std::ios::binary);
            for (const auto& note : notes) {
                ofs << note->getType() << "\t" << note->getPosition()[0] << "\t" << note->getPosition()[1] << "\n";
            }
            std::this_thread::sleep_for(interval);
        }
    }).detach();
}

void AutoSave::stop() { running = false; }

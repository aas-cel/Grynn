#pragma once
#include <string>
#include <vector>
#include <memory>
#include <chrono>
#include "notes/Note.hpp"

class AutoSave {
public:
    AutoSave();
    ~AutoSave();
    void setInterval(std::chrono::seconds interval);
    void start(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
    void stop();
private:
    std::chrono::seconds interval;
    bool running;
};

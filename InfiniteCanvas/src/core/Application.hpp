#pragma once
#include <memory>

class Application {
public:
    Application();
    ~Application();
    int run(int argc, char** argv);
private:
    struct Impl;
    std::unique_ptr<Impl> impl;
};

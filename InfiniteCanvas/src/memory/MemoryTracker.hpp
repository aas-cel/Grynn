#pragma once
#include <cstddef>
#include <atomic>

class MemoryTracker {
public:
    static void add(size_t bytes);
    static void remove(size_t bytes);
    static size_t usage();
private:
    static std::atomic<size_t> memUsage;
};

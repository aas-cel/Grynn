#include "MemoryTracker.hpp"
std::atomic<size_t> MemoryTracker::memUsage{0};
void MemoryTracker::add(size_t bytes) { memUsage += bytes; }
void MemoryTracker::remove(size_t bytes) { memUsage -= bytes; }
size_t MemoryTracker::usage() { return memUsage.load(); }

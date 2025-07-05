#pragma once
#include <cstddef>
#include <vector>

class MemoryPool {
public:
    MemoryPool(size_t objectSize, size_t blockSize = 1024);
    ~MemoryPool();
    void* allocate();
    void deallocate(void* ptr);
private:
    size_t objectSize;
    size_t blockSize;
    std::vector<void*> freeList;
    std::vector<void*> blocks;
    void allocateBlock();
};

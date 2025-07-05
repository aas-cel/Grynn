#include "MemoryPool.hpp"
#include <cstdlib>

MemoryPool::MemoryPool(size_t objectSize, size_t blockSize)
    : objectSize(objectSize), blockSize(blockSize) {
    allocateBlock();
}
MemoryPool::~MemoryPool() {
    for (auto block : blocks) std::free(block);
}
void* MemoryPool::allocate() {
    if (freeList.empty()) allocateBlock();
    void* ptr = freeList.back();
    freeList.pop_back();
    return ptr;
}
void MemoryPool::deallocate(void* ptr) {
    freeList.push_back(ptr);
}
void MemoryPool::allocateBlock() {
    void* block = std::malloc(objectSize * blockSize);
    blocks.push_back(block);
    for (size_t i = 0; i < blockSize; ++i) {
        freeList.push_back(static_cast<char*>(block) + i * objectSize);
    }
}

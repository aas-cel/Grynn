#pragma once
#include <vector>
#include <memory>

template<typename T>
class ObjectPool {
public:
    ObjectPool(size_t blockSize = 1024) : blockSize(blockSize) {}
    ~ObjectPool() { for (auto ptr : pool) delete ptr; }
    T* acquire() {
        if (pool.empty()) return new T();
        T* obj = pool.back(); pool.pop_back(); return obj;
    }
    void release(T* obj) { pool.push_back(obj); }
private:
    size_t blockSize;
    std::vector<T*> pool;
};

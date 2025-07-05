#include <cassert>
#include "../../src/memory/MemoryPool.hpp"

void test_memory_pool() {
    MemoryPool pool(sizeof(int), 8);
    int* a = static_cast<int*>(pool.allocate());
    *a = 42;
    pool.deallocate(a);
}

int main() {
    test_memory_pool();
    return 0;
}

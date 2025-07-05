#include "CacheManager.hpp"

CacheManager::CacheManager() {}
CacheManager::~CacheManager() {}
void CacheManager::set(const std::string& key, std::shared_ptr<void> value) { cache[key] = value; }
std::shared_ptr<void> CacheManager::get(const std::string& key) const {
    auto it = cache.find(key);
    if (it != cache.end()) return it->second;
    return nullptr;
}
void CacheManager::clear() { cache.clear(); }

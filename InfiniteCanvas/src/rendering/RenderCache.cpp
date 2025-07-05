#include "RenderCache.hpp"

RenderCache::RenderCache() {}
RenderCache::~RenderCache() {}

void RenderCache::set(const std::string& key, std::shared_ptr<void> value) {
    cache[key] = value;
}
std::shared_ptr<void> RenderCache::get(const std::string& key) const {
    auto it = cache.find(key);
    if (it != cache.end()) return it->second;
    return nullptr;
}
void RenderCache::clear() {
    cache.clear();
}

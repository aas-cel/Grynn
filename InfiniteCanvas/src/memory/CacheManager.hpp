#pragma once
#include <unordered_map>
#include <string>
#include <memory>

class CacheManager {
public:
    CacheManager();
    ~CacheManager();
    void set(const std::string& key, std::shared_ptr<void> value);
    std::shared_ptr<void> get(const std::string& key) const;
    void clear();
private:
    std::unordered_map<std::string, std::shared_ptr<void>> cache;
};

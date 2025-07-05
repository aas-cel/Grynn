#pragma once
#include <memory>
#include <unordered_map>
#include <typeindex>

class ServiceLocator {
public:
    template<typename T>
    static void provide(std::shared_ptr<T> service) {
        services()[std::type_index(typeid(T))] = service;
    }
    template<typename T>
    static std::shared_ptr<T> get() {
        auto it = services().find(std::type_index(typeid(T)));
        if (it != services().end()) {
            return std::static_pointer_cast<T>(it->second);
        }
        return nullptr;
    }
private:
    static std::unordered_map<std::type_index, std::shared_ptr<void>>& services() {
        static std::unordered_map<std::type_index, std::shared_ptr<void>> s;
        return s;
    }
};

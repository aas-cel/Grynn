#pragma once
#include <string>

class SearchQuery {
public:
    SearchQuery(const std::string& q);
    const std::string& get() const;
private:
    std::string query;
};

#include "SearchQuery.hpp"

SearchQuery::SearchQuery(const std::string& q) : query(q) {}
const std::string& SearchQuery::get() const { return query; }

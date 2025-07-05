#include "SearchResults.hpp"

void SearchResults::setResults(const std::vector<std::shared_ptr<Note>>& notes) {
    results = notes;
}
const std::vector<std::shared_ptr<Note>>& SearchResults::getResults() const {
    return results;
}

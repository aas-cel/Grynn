#include "SearchEngine.hpp"
#include <algorithm>

SearchEngine::SearchEngine() {}
SearchEngine::~SearchEngine() {}

std::vector<std::shared_ptr<Note>> SearchEngine::search(const std::vector<std::shared_ptr<Note>>& notes, const std::string& query) const {
    std::vector<std::shared_ptr<Note>> result;
    for (const auto& note : notes) {
        if (note->getType() == "TextNote") {
            auto text = static_cast<const TextNote*>(note.get())->getText();
            if (text.find(query) != std::string::npos) {
                result.push_back(note);
            }
        }
    }
    return result;
}

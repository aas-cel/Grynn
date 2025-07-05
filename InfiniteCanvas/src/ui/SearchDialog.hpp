#pragma once
#include <StyleCPP/Dialog.hpp>
#include <string>
#include "../search/SearchEngine.hpp"
#include "../notes/Note.hpp"

class SearchDialog : public StyleCPP::Dialog {
public:
    SearchDialog(const std::vector<std::shared_ptr<Note>>& notes, StyleCPP::Widget* parent = nullptr);
    ~SearchDialog() override;
private:
    SearchEngine searchEngine;
    const std::vector<std::shared_ptr<Note>>& notes;
};

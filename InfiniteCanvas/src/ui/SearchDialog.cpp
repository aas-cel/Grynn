#include "SearchDialog.hpp"
#include <StyleCPP/LineEdit.hpp>
#include <StyleCPP/ListWidget.hpp>
#include <StyleCPP/PushButton.hpp>
#include <StyleCPP/Label.hpp>

SearchDialog::SearchDialog(const std::vector<std::shared_ptr<Note>>& notes, StyleCPP::Widget* parent)
    : StyleCPP::Dialog(parent), notes(notes) {
    setTitle("Search Notes");
    auto* layout = new StyleCPP::VBoxLayout(this);
    auto* input = new StyleCPP::LineEdit(this);
    auto* list = new StyleCPP::ListWidget(this);
    auto* searchBtn = new StyleCPP::PushButton("Search", this);
    layout->addWidget(new StyleCPP::Label("Enter search term:", this));
    layout->addWidget(input);
    layout->addWidget(searchBtn);
    layout->addWidget(list);
    setLayout(layout);
    searchBtn->onClicked([this, input, list]() {
        auto results = searchEngine.search(notes, input->text());
        list->clear();
        for (const auto& note : results) {
            if (note->getType() == "TextNote") {
                list->addItem(static_cast<const TextNote*>(note.get())->getText());
            }
        }
    });
}

SearchDialog::~SearchDialog() = default;

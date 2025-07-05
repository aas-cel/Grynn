#include "PreferencesDialog.hpp"

PreferencesDialog::PreferencesDialog(StyleCPP::Widget* parent)
    : StyleCPP::Dialog(parent) {
    setTitle("Preferences");
    auto* layout = new StyleCPP::VBoxLayout(this);
    auto* themeLabel = new StyleCPP::Label("Theme:", this);
    auto* themeCombo = new StyleCPP::ComboBox(this);
    themeCombo->addItem("Default");
    themeCombo->addItem("Dark");
    themeCombo->addItem("Light");
    themeCombo->addItem("Custom");
    layout->addWidget(themeLabel);
    layout->addWidget(themeCombo);
    setLayout(layout);
}

PreferencesDialog::~PreferencesDialog() = default;

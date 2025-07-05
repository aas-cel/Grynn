#pragma once
#include <StyleCPP/Dialog.hpp>
#include <StyleCPP/ComboBox.hpp>
#include <StyleCPP/PushButton.hpp>
#include <StyleCPP/Label.hpp>

class PreferencesDialog : public StyleCPP::Dialog {
public:
    PreferencesDialog(StyleCPP::Widget* parent = nullptr);
    ~PreferencesDialog() override;
};

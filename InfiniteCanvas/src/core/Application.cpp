#include "Application.hpp"
#include "ui/MainWindow.hpp"
#include <StyleCPP/Application.hpp>
#include <StyleCPP/Theme.hpp>
#include <StyleCPP/StyleSheet.hpp>

struct Application::Impl {
    std::unique_ptr<StyleCPP::Application> styleApp;
    std::unique_ptr<MainWindow> mainWindow;
};

Application::Application() : impl(std::make_unique<Impl>()) {}
Application::~Application() = default;

int Application::run(int argc, char** argv) {
    impl->styleApp = std::make_unique<StyleCPP::Application>(argc, argv);
    StyleCPP::StyleSheet::loadFromFile("../resources/styles/default.style");
    impl->mainWindow = std::make_unique<MainWindow>();
    impl->mainWindow->show();
    return impl->styleApp->exec();
}

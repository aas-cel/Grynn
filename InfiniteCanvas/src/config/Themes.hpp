#pragma once
#include <string>
#include <vector>

namespace Themes {
    inline std::vector<std::string> available() {
        return {"default", "dark", "light", "custom"};
    }
}

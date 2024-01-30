#include <fstream>
#include <nlohmann/json.hpp>

// Main

int main (int, char **) {
    std::ifstream stream("./data.json");
    auto model = nlohmann::json::parse(stream);
    return 0;
}

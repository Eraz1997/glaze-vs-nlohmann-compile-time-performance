#include <glaze/glaze.hpp>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

// Models

struct Model {
    int id;
    std::string name;
    std::vector<std::string> friendNames;
};

// Main

int main (int, char **) {
    std::ifstream stream("./data.json");
    std::string buffer((std::istreambuf_iterator<char>(stream)), std::istreambuf_iterator<char>());
    auto model = glz::read_json<Model>(buffer);
    return 0;
}

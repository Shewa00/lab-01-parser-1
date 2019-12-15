#pragma once

#include <any>
#include <iostream>
#include <utility> // for pair<>
#include <fstream>
#include <cctype>
#include <string>
#include <map>
#include <vector>
#include <iterator>

class Json {
    std::map<std::string, std::any> obj;
    std::vector<std::any> arr;

public:
    Json();

    explicit Json(const std::vector<std::any>& v);

    explicit Json(const std::string& s);

    [[nodiscard]] bool is_array() const;

    [[nodiscard]] bool is_object() const;

    std::any& operator[](const std::string& key);

    std::any& operator[](size_t index);

    static Json parse(const std::string& s);

    static Json parseFile(const std::string& path_to_file);
};

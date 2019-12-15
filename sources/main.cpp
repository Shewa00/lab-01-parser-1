// Copyright 2019 ARAOvsepyan
#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include "../include/lib.hpp"

int main()
{
    std::string way = {"D:/lab-01-parser/original_inf.txt"};
    nlohmann::json json;
    std::ifstream{way} >> json;

    nlohmann::json outJson;
    for (size_t i = 0; i < json[0].size(); i++) {
        outJson.push_back(
                nlohmann::json{
                        {"ticker", json[0][i]},
                        {"id", json[1][i]},
                        {"description", json[2][i]},
                });
    }

    newFile(way, outJson);

    return 0;
}

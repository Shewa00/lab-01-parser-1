// Copyright 2019 ARAOvsepyan
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

void newFile(std::string name, nlohmann::json json){
    name = name + "_reload.txt";
    std::ofstream out(name);
    out << json << std::endl;
    out.close();
}

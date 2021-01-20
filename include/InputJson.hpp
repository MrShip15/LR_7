// Copyright 2020 MrShip15 mr.shi15@gmail.ru


#ifndef INCLUDE_SERVER_INPUTJSON_HPP
#define  INCLUDE_SERVER_INPUTJSON_HPP

#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class Input_Json {
public:
    explicit Input_Json(const std::string &filename);

    json GetJson() const;

    void Upload();

private:
    std::string Filename;
    json J;
};

#endif // INCLUDE_SERVER_INPUTJSON_HPP

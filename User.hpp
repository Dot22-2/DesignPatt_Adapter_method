#pragma once
#include <string>

class User {
public:
    virtual ~User() = default;
    virtual std::string getInfo() const = 0;
};

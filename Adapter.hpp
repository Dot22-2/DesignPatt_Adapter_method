#pragma once
#include "User.hpp"
#include "AdminUser.hpp"
#include "GuestUser.hpp"

enum class UserType { Admin, Guest };

class Adapter : public User {
private:
    UserType type;
    AdminUser* admin;
    GuestUser* guest;

public:
    Adapter(UserType t);
    ~Adapter();
    std::string getInfo() const override;
};

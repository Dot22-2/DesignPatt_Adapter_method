#include "Adapter.hpp"

Adapter::Adapter(UserType t) : type(t), admin(nullptr), guest(nullptr) {
    if (type == UserType::Admin)
        admin = new AdminUser();
    else
        guest = new GuestUser();
}

Adapter::~Adapter() {
    delete admin;
    delete guest;
}

std::string Adapter::getInfo() const {
    if (type == UserType::Admin)
        return admin->getAdminData();
    else
        return guest->getGuestData();
}

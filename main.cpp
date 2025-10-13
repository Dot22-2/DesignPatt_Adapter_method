#include "Adapter.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<User*> users;
    users.push_back(new Adapter(UserType::Admin));
    users.push_back(new Adapter(UserType::Guest));

    for (const auto& user : users) {
        std::cout << user->getInfo() << "\n";
        delete user;
    }

    return 0;
}

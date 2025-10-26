# C++ Adapter Method

This repository demonstrates a clean implementation of the **Adapter** design pattern in C++ for a console-based application.

---

## Project Structure

- `IUser.hpp` – Target interface expected by the client  
- `GuestUser.hpp / GuestUser.cpp` – Adaptee class with incompatible interface  
- `AdminUser.hpp / AdminUser.cpp` – Another adaptee with distinct behavior  
- `Adapter.hpp / Adapter.cpp` – Adapter class that bridges IUser with Guest/Admin logic  
- `main.cpp` – Entry point showcasing unified access to different user types via adapter  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
std::vector<User*> users;
users.push_back(new Adapter(UserType::Admin));
users.push_back(new Adapter(UserType::Guest));

for (const auto& user : users) {
    std::cout << user->getInfo() << "\n";
}

// Output:
// [AdminUser] Access: full, Role: administrator
// [GuestUser] Access: limited, Role: guest

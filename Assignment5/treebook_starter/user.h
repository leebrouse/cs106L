#include <set>
#include <string>

class User {
public:
    // TODO: write special member functions, including default constructor!

    User();
    User(std::string name);

    // getter functions
    std::string getName() const;
    std::set<User>& getFriends();
    const std::set<User>& getFriends() const;

    // setter functions
    void setName(std::string name);
    void addFriend(const User& friendUser);
    
    // TODO: add the < operator overload here!
    bool operator<(const User& other) const;
private:
    std::string name;
    std::set<User> friends;

};
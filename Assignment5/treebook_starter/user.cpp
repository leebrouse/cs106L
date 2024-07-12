#include "user.h"
#include <set>
#include <iostream>
#include <string>


User::User(std::string name) {
// TODO: Implement the additional constructor here!
    this->name=name;
}

std::string User::getName() const {
    return name;
}

std::set<User>& User::getFriends() {
    return friends;
}

// A const version is needed to allow read-only access to the friends set!
const std::set<User>& User::getFriends() const {
    return friends;
}

void User::setName(std::string name) {
    this->name = name;
}

void User::addFriend(const User& friendUser) {
    friends.insert(friendUser);
}

// TODO: Implement the < operator overload here!
 bool User::operator<(const User& other) const {
    return name < other.name;
}
#include "UserInputClass.h"

[[maybe_unused]] bool UserInputClass::getWaitingKey() const {
    return this->waitingKey;
}

[[maybe_unused]] std::vector<char> UserInputClass::getKeys() {
    return this->keys;
}

[[maybe_unused]] char UserInputClass::getKey() const {
    return this->key;
}

[[maybe_unused]] void UserInputClass::setWaitingKey(bool v) {
    this->waitingKey = v;
}

[[maybe_unused]] void UserInputClass::addKeyToVec(char k) {
    this->keys.push_back(k);
}

void UserInputClass::addKeyToVec() {
    this->keys.push_back(this->key);
}

void UserInputClass::setKey(char k) {
    this->key = k;
}

std::string UserInputClass::toString_key() const {
    return std::string(1, this->key);
}

[[maybe_unused]] std::string UserInputClass::toString_waitingKey() const {
    if (this->waitingKey) return "true";
    return "false";
}

std::string UserInputClass::toString_keys() {
    std::stringstream result_STR;
    for (auto it = this->keys.begin(); it != this->keys.end(); it++)    {
        if (it != this->keys.begin()) {
            result_STR << " ";
        }
        result_STR << std::string(1, *it) << ",";
    }
    return result_STR.str();
}

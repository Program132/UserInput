#ifndef USERINPUT_USERINPUTCLASS_H
#define USERINPUT_USERINPUTCLASS_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>


class UserInputClass {
private:
    bool waitingKey = false;
    std::vector<char> keys; // ['A', 'B'...]
    char key; // 'A'...

public:
    [[maybe_unused]] bool getWaitingKey() const;

    [[maybe_unused]] std::vector<char> getKeys();

    [[maybe_unused]] char getKey() const;

    [[maybe_unused]] void setWaitingKey(bool v);
    void addKeyToVec();

    [[maybe_unused]] void addKeyToVec(char k);
    void setKey(char k);

    std::string toString_key() const;

    [[maybe_unused]] std::string toString_waitingKey() const;
    std::string toString_keys();
};


#endif

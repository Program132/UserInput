#include <iostream>
#include <windows.h>

#include "src/UserInputClass.h"

int main() {
    HWND hwnd = GetConsoleWindow();
    UserInputClass userInput;
    ShowWindow(hwnd, SW_HIDE);
    int i = 0;
    userInput.setWaitingKey(true);
    while (userInput.getWaitingKey()) {
        char possibleKey;
        std::cin >> possibleKey;

        userInput.setKey(possibleKey);
        userInput.addKeyToVec();
        i++;
        if (i > 9) {
            userInput.setWaitingKey(false);
        }
    }

    ShowWindow(hwnd, SW_SHOW);

    std::cout << userInput.toString_keys() << std::endl;
    return 0;
}
/* -*-c++-*- 
 *
 *    file: log.cpp
 *  author: ShpakovDmitry
 *    date: 2023-6-21
 * licence: CC0
 * summary: Simple logging library.
 *
 */

#include <ctime>
#include <iostream>
#include "log"

namespace Logger {

LOG::LOG(MessageType type) {
    operator << (getDate() + " " + messageTypeToString(type) + " ");
}

LOG::~LOG() {
    if (started) {
        std::cout << std::endl;
    }
    started = false;
}

std::string LOG::getDate() {
    const size_t MAX_DATETIME_LEN = 25;
    char tmp[MAX_DATETIME_LEN];
    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);
    std::strftime(tmp, MAX_DATETIME_LEN, "%H:%M:%S", now);
    std::string s(tmp);
    return s;
}

std::string LOG::messageTypeToString(MessageType type) {
    std::string typeStr;
    switch (type) {
        case INFO:
            typeStr = "INFO";
            break;
        case WARN:
            typeStr = "WARN";
            break;
        case SUCC:
            typeStr = "SUCC";
            break;
        case FAIL:
            typeStr = "FAIL";
            break;
        default:
            // intentionally left blank
            break;
    }

    return typeStr;
}

} // namespace Logger


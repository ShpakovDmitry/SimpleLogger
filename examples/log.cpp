/* -*-c++-*- 
 *
 *    file: log.cpp
 *  author: ShpakovDmitry
 *    date: 2023-6-22
 * licence: CC0
 * summary: Simple logging library usage example.
 *
 */

#include "../logger"

using namespace Logger;

int main(int argc, char *argv[]) {
    LOG(INFO) << "informational message";
    LOG(WARN) << "warning message";
    LOG(SUCC) << "success message";
    LOG(FAIL) << "failure message";

    constexpr float PI = 3.1415926f;
    LOG(INFO) << "The value of PI = " << PI;


    return 0;
}


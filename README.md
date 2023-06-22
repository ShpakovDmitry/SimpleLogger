## Simple logging library.

### Installation

Simply copy SimpleLogger directory into projects directory.

### Usage

```cpp
// your main.cpp file

#include "SimpleLogger/logger"

int main(int argc, char *argv[]) {
    LOG(INFO) << "informational message";
    LOG(WARN) << "warning message";
    LOG(SUCC) << "success message";
    LOG(FAIL) << "failure message";

    constexpr float PI = 3.1415926f;
    LOG(INFO) << "The value of PI = " << PI;

    return 0;
}
```

The output generated is:
```bash
10:42:10 INFO informational message
10:42:10 WARN warning message
10:42:10 SUCC success message
10:42:10 FAIL failure message
10:42:10 INFO The value of PI = 3.14159
```

#include <iostream>

void reset_read_stream(std::istream &s) {
    s.clear();
    s.seekg(0);
}

void reset_write_stream(std::ostream &s) {
    s.clear();
    s.seekp(0);
}
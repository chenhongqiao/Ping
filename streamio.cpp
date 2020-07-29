#include <string>
#include <iostream>

std::string read_paragraph(std::istream &in) {
    std::string t;
    std::string p;
    while (getline(in, t)) {
        p += t;
        p += '\n';
    }
    return p;
}

std::string read_string(std::istream &in) {
    std::string s;
    in >> s;
    return s;
}

int read_int(std::istream &in) {
    int t;
    in >> t;
    return t;
}
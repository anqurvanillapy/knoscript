#pragma once

#include "commons.h"

namespace kno {

class parser {
public:
    parser() = default;
    ~parser() = default;

    // No copy and move.
    parser(const parser&) = delete;
    parser& operator=(const parser&) = delete;
    parser(parser&&) = delete;
    parser& operator=(parser&&) = delete;

    void parse();
};

} /* namespace kno */

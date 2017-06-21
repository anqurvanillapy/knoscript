#pragma once

#include "tokentypes.h"

namespace kno {

class node {
public:
    explicit node(const token_type& t, unsigned p)
        : ty_{t}, start_{p} { /* nop */ }
    ~node() = default;

    // Default copy and move.
    node(const node&) = default;
    node& operator=(const node&) = default;
    node(node&&) = default;
    node& operator=(node&&) = default;
private:
    token_type ty_;
    unsigned start_;
    unsigned end_{0};
};

} /* namespace kno */

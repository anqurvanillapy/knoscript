#pragma once

#include "commons.h"

namespace kno {

class tokenizer {
public:
    tokenizer() = default;
    ~tokenizer() = default;

    // No copy and move.
    tokenizer(const tokenizer&) = delete;
    tokenizer& operator=(const tokenizer&) = delete;
    tokenizer(tokenizer&&) = delete;
    tokenizer& operator=(tokenizer&&) = delete;
};

} /* namespace kno */

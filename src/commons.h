#pragma once

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <fstream>

namespace kno {

enum class token_flag : uint32_t {
    UNINIT, // placeholder for unintialized tokens
    KWD         = 1 << 0,
    BEFOREEXPR  = 1 << 1,
    STARTEXPR   = 1 << 2,
    LOOP        = 1 << 3,
    ASSIGN      = 1 << 4,
    PREFIX      = 1 << 5,
    POSTFIX     = 1 << 6,
    BINOP       = 1 << 7,
};

} /* namespace kno */

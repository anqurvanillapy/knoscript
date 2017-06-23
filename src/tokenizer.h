#pragma once

#include "commons.h"
#include "tokentypes.h"

namespace kno {

class token {
public:
    explicit token(token_type& ty)
        : ty_{ty} { /* nop */ };
    ~token() = default;

    token(const token&) = default;
    token& operator=(const token&) = default;
    token(token&&) = default;
    token& operator=(token&&) = default;
private:
    token_type ty_;
    // TODO: Token value.
    unsigned start_{0};
    unsigned end_{0};
};


class tokenizer {
public:
    tokenizer() = default;
    ~tokenizer() = default;

    // No copy and move.
    tokenizer(const tokenizer&) = delete;
    tokenizer& operator=(const tokenizer&) = delete;
    tokenizer(tokenizer&&) = delete;
    tokenizer& operator=(tokenizer&&) = delete;

    friend class parser;

    token*
    next_token()
    {
        skip_space();
        start_ = pos_;
        // TODO: How to cope with token_type, for its presence of a class,
        // instead of a type?
    }

    void
    read_token()
    {
    }

    void
    skip_space()
    {
        // TODO
    }

    // Called at the end of every token.
    void
    finish_token(token_type& ty)
    {
    }
private:
    unsigned pos_{0};

    // Current token start and end.
    unsigned start_{0};
    unsigned end_{0};
};

} /* namespace kno */

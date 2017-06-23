#pragma once

#include "commons.h"
#include "tokenizer.h"

namespace kno {

class parser : tokenizer {
public:
    explicit parser(std::ifstream& src)
        : src_{std::move(src)}, srclen_{src.tellg()} { /* nop */ };
    ~parser() = default;

    // No copy and move.
    parser(const parser&) = delete;
    parser& operator=(const parser&) = delete;
    parser(parser&&) = delete;
    parser& operator=(parser&&) = delete;

    void parse();
private:
    // std::ifstream::pos_type should be able to contain 64 bit for filesize,
    // and negative part for errors, hence 16 bytes.
    std::ifstream src_;
    long long srclen_;

    using tokenizer::pos_;
    using tokenizer::start_;
    using tokenizer::end_;
};

} /* namespace kno */

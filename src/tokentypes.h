#pragma once

#include "commons.h"

namespace kno {

class token_type {
public:
    token_type(const std::string& l, int f=0x0)
        : label_(l), flag_(f) { /* nop */ }
    ~token_type() = default;

    // Default copy and move.
    token_type(const token_type&) = default;
    token_type& operator=(const token_type&) = default;
    token_type(token_type&&) = default;
    token_type& operator=(token_type&&) = default;
private:
    std::string label_;
    int flag_;
};


std::unordered_map<std::string, token_type> TYPES{
    { "name", token_type("name") },
    { "eof", token_type("eof") },


    // Primitives.
    { "i8", token_type("i8") },
    { "i16", token_type("i16") },
    { "i32", token_type("i32") },
    { "i64", token_type("i64") },

    { "u8", token_type("u8") },
    { "u16", token_type("u16") },
    { "u32", token_type("u32") },
    { "u64", token_type("u64") },

    { "f32", token_type("f32") },
    { "f64", token_type("f64") },

    { "string", token_type("string") },


    // Punctuations.
    { "lbracket", token_type("[") },
    { "rbracket", token_type("]") },
    { "lbrace", token_type("{") },
    { "rbrace", token_type("}") },
    { "lparen", token_type("(") },
    { "rparen", token_type(")") },
    { "comma", token_type(",") },
    { "semi", token_type(";") },
    { "colon", token_type(":") },
    { "dot", token_type(".") },
    { "qmark", token_type("?") },
    { "arrow", token_type("=>") },
    { "tmpl", token_type("template_literals")},
    { "invalid_tmpl", token_type("invalid_template_literals")},
    { "ellipsis", token_type("...")},
    { "backquote", token_type("`")},
    { "lbrace$", token_type("${")},


    // TODO:
    // Operators.

    // Keywords.
};

} /* namespcae kno */

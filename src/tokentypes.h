#pragma once

#include "commons.h"

namespace kno {

class token_type {
public:
    token_type(const std::string& l, token_flag f=token_flag::UNINIT, int p=0)
        : label_(l), flag_(f), prec_(p) { /* nop */ }
    ~token_type() = default;

    // Default copy and move.
    token_type(const token_type&) = default;
    token_type& operator=(const token_type&) = default;
    token_type(token_type&&) = default;
    token_type& operator=(token_type&&) = default;
private:
    std::string label_;
    token_flag flag_;
    int prec_;  // precedence of binary operators
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
    { "invalidtmpl", token_type("invalid_template_literals")},
    { "ellipsis", token_type("...")},
    { "backquote", token_type("`")},
    { "ldollarbrace", token_type("${")},


    // Operators.
    { "defaultparam", token_type("param=")},
    { "assign", token_type("=")},
    { "incdec", token_type("++/--")},
    { "prefix", token_type("prefix")},
    { "logicalOR", token_type("||")},
    { "logicalAND", token_type("&&")},
    { "bitwiseOR", token_type("|")},
    { "bitwiseXOR", token_type("^")},
    { "bitwiseAND", token_type("&")},
    { "eq", token_type("==/!=")},
    { "relational", token_type("</>")},
    { "bitshift", token_type("<</>>")},
    { "plusminus", token_type("+/-")},
    { "modulo", token_type("%")},
    { "mul", token_type("*")},
    { "div", token_type("/")},
    { "power", token_type("**")},


    // Keywords.
    { "break", token_type("break")},
    { "case", token_type("case")},
    { "catch", token_type("catch")},
    { "continue", token_type("continue")},
    { "default", token_type("default")},
    { "do", token_type("do")},
    { "else", token_type("else")},
    { "finally", token_type("finally")},
    { "for", token_type("for")},
    { "function", token_type("function")},
    { "if", token_type("if")},
    { "return", token_type("return")},
    { "switch", token_type("switch")},
    { "throw", token_type("throw")},
    { "try", token_type("try")},
    { "var", token_type("var")},
    { "const", token_type("const")},
    { "while", token_type("while")},
    { "new", token_type("new")},
    { "this", token_type("this")},
    { "super", token_type("super")},
    { "class", token_type("class")},
    { "extends", token_type("extands")},
    { "export", token_type("export")},
    { "import", token_type("import")},
    { "null", token_type("null")},
    { "true", token_type("true")},
    { "false", token_type("false")},
    { "in", token_type("in")},
    { "instanceof", token_type("instanceof")},
    { "typeof", token_type("typeof")},
    { "delete", token_type("delete")},
};


/// First lookup this set for reserves.
std::unordered_set<std::string> KEYWORDS{
    "break",
    "case",
    "catch",
    "continue",
    "default",
    "do",
    "else",
    "finally",
    "for",
    "function",
    "if",
    "return",
    "switch",
    "throw",
    "try",
    "var",
    "const",
    "while",
    "new",
    "this",
    "super",
    "class",
    "extends",
    "export",
    "import",
    "null",
    "true",
    "false",
    "in",
    "instanceof",
    "typeof",
    "delete",
};

} /* namespcae kno */

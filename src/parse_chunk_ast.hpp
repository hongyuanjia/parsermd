#ifndef PARSE_CHUNK_AST_HPP
#define PARSE_CHUNK_AST_HPP

//#define BOOST_SPIRIT_X3_DEBUG
#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/ast/position_tagged.hpp>
#include <boost/fusion/include/adapt_struct.hpp>

#include "parse_option_ast.hpp"

namespace client { namespace ast {
  namespace x3 = boost::spirit::x3;

  struct details : x3::position_tagged {
    std::string name;
    std::vector<option> options;
  };

  struct chunk : x3::position_tagged{
    std::string indent;
    std::string engine;
    details d;
    std::vector<std::string> code;
  };
} }

BOOST_FUSION_ADAPT_STRUCT(
  client::ast::details,
  name, options
)

BOOST_FUSION_ADAPT_STRUCT(
  client::ast::chunk,
  indent, engine, d, code
)
#endif
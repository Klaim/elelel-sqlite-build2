#pragma once

#include <iosfwd>
#include <string>

#include <elelel-sqlite/export.hxx>

namespace elelel_sqlite
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  ELELEL_SQLITE_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}

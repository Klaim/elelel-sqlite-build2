#include <cassert>
#include <sstream>
#include <stdexcept>

#include <elelel-sqlite/version.hxx>
#include <elelel-sqlite/elelel-sqlite.hxx>

int main ()
{
  using namespace std;
  using namespace elelel_sqlite;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}

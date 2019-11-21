#include <elelel-sqlite/elelel-sqlite.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace elelel_sqlite
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}

#include "Util.hpp"

namespace sir{
namespace PSystem{


        std::string Util::to_string(int _val)
        {
            stringstream ss;
            ss << _val;
            string str = ss.str();
            return str;
        }

}
}


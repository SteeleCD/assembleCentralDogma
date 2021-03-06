//==================================
// define class functions

//================================
// include guard
#ifndef __ASSEMBLY_h_INCLUDED__  // if myclass.h has not been included
#define __ASSEMBLY_H_INCLUDED__  // #define this so the compiler knows it has been included

//================================
// forward declared dependencies

//=================================
// included dependencies
#include <vector>
#include <string>


class Assembly
    {
    public:
        std::vector<std::string> getData();
        std::string assembleData(std::vector<std::string> data);
    };

#endif  // __MYCLASS_H_INCLUDED__

    

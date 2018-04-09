#pragma once

#include <string>

namespace Assimp {

class Uri {
public:
    Uri( const std::wstring uri );
    ~Uri();
    bool Empty() const;
    const std::wstring &GetAbsolutePath() const;

private:
    std::wstring mResource;
};

} // Namespace Assimp

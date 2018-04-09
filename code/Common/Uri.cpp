#include <assimp/Uri.h>

namespace Assimp {

Uri::Uri( const std::wstring uri )
:mResource( uri ) {
    // empty
}

Uri::~Uri() {
    // empty
}

bool Uri::Empty() const {
    return mResource.empty();
}

const std::wstring &Uri::GetAbsolutePath() const {
    return mResource;
}

} // Namespace Assimp

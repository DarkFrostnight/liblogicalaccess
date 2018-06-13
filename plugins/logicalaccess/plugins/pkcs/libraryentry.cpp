#include <logicalaccess/iks/IslogKeyServer.hpp>
#include <logicalaccess/lla_fwd.hpp>
#include "logicalaccess/logicalaccess_api.hpp"

extern "C" {

LIBLOGICALACCESS_API char *getLibraryName()
{
    return (char *)"PKCSCrypto";
}

LIBLOGICALACCESS_API void
getPKCSCrypto(logicalaccess::RemoteCryptoPtr &remoteCrypto)
{
    //remoteCrypto = std::make_shared<logicalaccess::iks::RemoteCryptoIKSProvider>(cfg);
}
}

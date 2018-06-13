#pragma once

#include <logicalaccess/cards/keystorage.hpp>
#include <logicalaccess/iks/IslogKeyServer.hpp>

namespace logicalaccess
{
    /**
     * A storage to represent a key store in a PKCS token.
     */
    class LIBLOGICALACCESS_API PKCSKeyStorage : public KeyStorage {
    public:
        KeyStorageType getType() const override {
            return KST_PKCS;
        }

        std::string getDefaultXmlNodeName() const override {
            return "PKCSStorage";
        }

    private:
        /**
         * The CKA_ID attribute value that represent
         * the ID of the key on the PKCS token.
         */
        std::string pkcs_object_id_;
    };
}

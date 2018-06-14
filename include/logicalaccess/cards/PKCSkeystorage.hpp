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

        const ByteVector &get_key_id() const {
            return pkcs_object_id_;
        }

        size_t get_slot_id() const {
            return slot_id_;
        }

        const std::string &pkcs_session_password() const {
            return pkcs_session_password_;
        }

    private:
        /**
         * The CKA_ID attribute value that represent
         * the ID of the key on the PKCS token.
         */
        ByteVector pkcs_object_id_;

        // Password to log into the PKCS session.
        // This feel like a weird place to store that...
        std::string pkcs_session_password_;

        /*
         * PKCS Token slot id.
         */
        size_t slot_id_;
    };
}

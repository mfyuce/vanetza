#include <vanetza/security/hashed_id.hpp>
#include <boost/functional/hash.hpp>
#include <algorithm>
#include <cassert>

namespace vanetza
{
namespace security
{

HashedId3 truncate(const HashedId8& in)
{
    HashedId3 out;
    assert(out.size() <= in.size());
    std::copy_n(in.rbegin(), out.size(), out.rbegin());
    return out;
}

HashedId8 create_hashed_id8(const Sha256Digest& digest)
{
    HashedId8 hashed;
    std::copy(digest.end() - 8, digest.end(), hashed.data());
    return hashed;
}

HashedId8 create_hashed_id8(const Sha384Digest& digest)
{
    HashedId8 hashed;
    std::copy(digest.end() - 8, digest.end(), hashed.data());
    return hashed;
}

} // namespace security
} // namespace vanetza

namespace std
{

size_t hash<vanetza::security::HashedId8>::operator()(const vanetza::security::HashedId8& hid8) const
{
    size_t seed = 0;
    for (uint8_t octet : hid8) {
        boost::hash_combine(seed, octet);
    }
    return seed;
}

} // namespace std
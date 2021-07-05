//
// Created by bastian on 24.06.21.
//

#ifndef ARTERY_MISBEHAVIOR_REPORT_HPP
#define ARTERY_MISBEHAVIOR_REPORT_HPP

#include <vanetza/asn1/asn1c_conversion.hpp>
#include <vanetza/asn1/asn1c_wrapper.hpp>
#include <vanetza/asn1/md/MisbehaviorReport.h>

namespace vanetza
{
    namespace asn1
    {

        class MisbehaviorReport : public asn1c_per_wrapper<MisbehaviorReport_t>
        {
        public:
            using wrapper = asn1c_per_wrapper<MisbehaviorReport_t>;
            MisbehaviorReport() : wrapper(asn_DEF_MisbehaviorReport) {}
        };

    } // namespace asn1
} // namespace vanetza

#endif //ARTERY_MISBEHAVIOR_REPORT_HPP

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTr103460MisbehaviorReportMessage"
 * 	found in "asn1/TR103460v211-MisbehaviorReport.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "SenderSensorContainer.h"

asn_TYPE_member_t asn_MBR_SenderSensorContainer_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_SenderSensorChoice,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SenderSensorContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SenderSensorContainer_specs_1 = {
	sizeof(struct SenderSensorContainer),
	offsetof(struct SenderSensorContainer, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_SenderSensorContainer = {
	"SenderSensorContainer",
	"SenderSensorContainer",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SenderSensorContainer_tags_1,
	sizeof(asn_DEF_SenderSensorContainer_tags_1)
		/sizeof(asn_DEF_SenderSensorContainer_tags_1[0]), /* 1 */
	asn_DEF_SenderSensorContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_SenderSensorContainer_tags_1)
		/sizeof(asn_DEF_SenderSensorContainer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_SenderSensorContainer_1,
	1,	/* Single element */
	&asn_SPC_SenderSensorContainer_specs_1	/* Additional specs */
};


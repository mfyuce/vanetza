/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTr103460MisbehaviorReportMessage"
 * 	found in "asn1/TR103460v211-MisbehaviorReport.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ReportMetadataContainer_H_
#define	_ReportMetadataContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"
#include "TimestampIts.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RelatedReportContainer;

/* ReportMetadataContainer */
typedef struct ReportMetadataContainer {
	IA5String_t	 reportID;
	TimestampIts_t	 generationTime;
	struct RelatedReportContainer	*relatedReportContainer;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportMetadataContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportMetadataContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportMetadataContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportMetadataContainer_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RelatedReportContainer.h"

#endif	/* _ReportMetadataContainer_H_ */
#include "asn_internal.h"

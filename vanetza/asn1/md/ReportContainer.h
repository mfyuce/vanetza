/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTr103460MisbehaviorReportMessage"
 * 	found in "asn1/TR103460v211-MisbehaviorReport.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ReportContainer_H_
#define	_ReportContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ReportedMessageContainer.h"
#include "MisbehaviorTypeContainer.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EvidenceContainer;

/* ReportContainer */
typedef struct ReportContainer {
	ReportedMessageContainer_t	 reportedMessageContainer;
	MisbehaviorTypeContainer_t	 misbehaviorTypeContainer;
	struct EvidenceContainer	*evidenceContainer;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportContainer_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EvidenceContainer.h"

#endif	/* _ReportContainer_H_ */
#include "asn_internal.h"
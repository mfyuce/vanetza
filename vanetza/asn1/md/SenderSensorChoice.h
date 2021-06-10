/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTr103460MisbehaviorReportMessage"
 * 	found in "asn1/TR103460v211-MisbehaviorReport.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_SenderSensorChoice_H_
#define	_SenderSensorChoice_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SensorInformationContainer.h"
#include "PerceivedObjectContainer.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SenderSensorChoice_PR {
	SenderSensorChoice_PR_NOTHING,	/* No components present */
	SenderSensorChoice_PR_sensorInformationContainer,
	SenderSensorChoice_PR_perceivedObjectContainer
} SenderSensorChoice_PR;

/* SenderSensorChoice */
typedef struct SenderSensorChoice {
	SenderSensorChoice_PR present;
	union SenderSensorChoice_u {
		SensorInformationContainer_t	 sensorInformationContainer;
		PerceivedObjectContainer_t	 perceivedObjectContainer;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SenderSensorChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SenderSensorChoice;
extern asn_CHOICE_specifics_t asn_SPC_SenderSensorChoice_specs_1;
extern asn_TYPE_member_t asn_MBR_SenderSensorChoice_1[2];
extern asn_per_constraints_t asn_PER_type_SenderSensorChoice_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SenderSensorChoice_H_ */
#include "asn_internal.h"

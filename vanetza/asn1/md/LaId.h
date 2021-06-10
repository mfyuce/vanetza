/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes_MD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_LaId_H_
#define	_LaId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LaId */
typedef OCTET_STRING_t	 LaId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaId;
asn_struct_free_f LaId_free;
asn_struct_print_f LaId_print;
asn_constr_check_f LaId_constraint;
ber_type_decoder_f LaId_decode_ber;
der_type_encoder_f LaId_encode_der;
xer_type_decoder_f LaId_decode_xer;
xer_type_encoder_f LaId_encode_xer;
oer_type_decoder_f LaId_decode_oer;
oer_type_encoder_f LaId_encode_oer;
per_type_decoder_f LaId_decode_uper;
per_type_encoder_f LaId_encode_uper;
per_type_decoder_f LaId_decode_aper;
per_type_encoder_f LaId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaId_H_ */
#include "asn_internal.h"

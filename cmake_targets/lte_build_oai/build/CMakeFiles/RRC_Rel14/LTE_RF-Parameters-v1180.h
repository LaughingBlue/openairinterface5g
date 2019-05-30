/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RF_Parameters_v1180_H_
#define	_LTE_RF_Parameters_v1180_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_FreqBandIndicator-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RF_Parameters_v1180__freqBandRetrieval_r11 {
	LTE_RF_Parameters_v1180__freqBandRetrieval_r11_supported	= 0
} e_LTE_RF_Parameters_v1180__freqBandRetrieval_r11;

/* Forward declarations */
struct LTE_SupportedBandCombinationAdd_r11;

/* LTE_RF-Parameters-v1180 */
typedef struct LTE_RF_Parameters_v1180 {
	long	*freqBandRetrieval_r11;	/* OPTIONAL */
	struct LTE_RF_Parameters_v1180__requestedBands_r11 {
		A_SEQUENCE_OF(LTE_FreqBandIndicator_r11_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *requestedBands_r11;
	struct LTE_SupportedBandCombinationAdd_r11	*supportedBandCombinationAdd_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RF_Parameters_v1180_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_freqBandRetrieval_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v1180;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v1180_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v1180_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SupportedBandCombinationAdd-r11.h"

#endif	/* _LTE_RF_Parameters_v1180_H_ */
#include <asn_internal.h>
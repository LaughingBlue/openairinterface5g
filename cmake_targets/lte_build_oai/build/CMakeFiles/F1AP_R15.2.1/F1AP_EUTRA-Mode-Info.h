/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_EUTRA_Mode_Info_H_
#define	_F1AP_EUTRA_Mode_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_EUTRA_Mode_Info_PR {
	F1AP_EUTRA_Mode_Info_PR_NOTHING,	/* No components present */
	F1AP_EUTRA_Mode_Info_PR_eUTRAFDD,
	F1AP_EUTRA_Mode_Info_PR_eUTRATDD
	/* Extensions may appear below */
	
} F1AP_EUTRA_Mode_Info_PR;

/* Forward declarations */
struct F1AP_EUTRA_FDD_Info;
struct F1AP_EUTRA_TDD_Info;

/* F1AP_EUTRA-Mode-Info */
typedef struct F1AP_EUTRA_Mode_Info {
	F1AP_EUTRA_Mode_Info_PR present;
	union F1AP_EUTRA_Mode_Info_u {
		struct F1AP_EUTRA_FDD_Info	*eUTRAFDD;
		struct F1AP_EUTRA_TDD_Info	*eUTRATDD;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_EUTRA_Mode_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_EUTRA_Mode_Info;
extern asn_CHOICE_specifics_t asn_SPC_F1AP_EUTRA_Mode_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_EUTRA_Mode_Info_1[2];
extern asn_per_constraints_t asn_PER_type_F1AP_EUTRA_Mode_Info_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_EUTRA_Mode_Info_H_ */
#include <asn_internal.h>
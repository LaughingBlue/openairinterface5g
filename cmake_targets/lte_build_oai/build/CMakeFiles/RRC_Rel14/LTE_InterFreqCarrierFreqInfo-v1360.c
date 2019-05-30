/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_InterFreqCarrierFreqInfo-v1360.h"

asn_TYPE_member_t asn_MBR_LTE_InterFreqCarrierFreqInfo_v1360_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_InterFreqCarrierFreqInfo_v1360, cellSelectionInfoCE1_v1360),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellSelectionInfoCE1_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE1-v1360"
		},
};
static const int asn_MAP_LTE_InterFreqCarrierFreqInfo_v1360_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_InterFreqCarrierFreqInfo_v1360_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellSelectionInfoCE1-v1360 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqCarrierFreqInfo_v1360_specs_1 = {
	sizeof(struct LTE_InterFreqCarrierFreqInfo_v1360),
	offsetof(struct LTE_InterFreqCarrierFreqInfo_v1360, _asn_ctx),
	asn_MAP_LTE_InterFreqCarrierFreqInfo_v1360_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_InterFreqCarrierFreqInfo_v1360_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360 = {
	"InterFreqCarrierFreqInfo-v1360",
	"InterFreqCarrierFreqInfo-v1360",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360_tags_1,
	sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360_tags_1)
		/sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360_tags_1[0]), /* 1 */
	asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360_tags_1)
		/sizeof(asn_DEF_LTE_InterFreqCarrierFreqInfo_v1360_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_InterFreqCarrierFreqInfo_v1360_1,
	1,	/* Elements count */
	&asn_SPC_LTE_InterFreqCarrierFreqInfo_v1360_specs_1	/* Additional specs */
};

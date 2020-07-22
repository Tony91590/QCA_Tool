/*
 * Copyright (c) 2018-2020 Qualcomm Innovation Center, Inc.
 *
 * All Rights Reserved.
 * Confidential and Proprietary - Qualcomm Innovation Center, Inc.
 */

/*
 * enum values for vendor sub commands.
 * These are shared between application and driver.
 */

#ifndef CFG80211_EXTERNAL_H_
#define CFG80211_EXTERNAL_H_
enum qca_nl80211_vendor_subcmds_internal {
    QCA_NL80211_VENDOR_SUBCMD_WIFI_PARAMS = 200,
    QCA_NL80211_VENDOR_SUBCMD_GET_PARAMS = 201,
    QCA_NL80211_VENDOR_SUBCMD_NAWDS_PARAMS = 203,
    QCA_NL80211_VENDOR_SUBCMD_HMWDS_PARAMS = 204,
    QCA_NL80211_VENDOR_SUBCMD_ALD_PARAMS = 205,
    QCA_NL80211_VENDOR_SUBCMD_ATF = 206,
    QCA_NL80211_VENDOR_SUBCMD_WNM = 207,
    QCA_NL80211_VENDOR_SUBCMD_HMMC = 208,
    QCA_NL80211_VENDOR_SUBCMD_SET_MAXRATE = 209,
    QCA_NL80211_VENDOR_SUBCMD_VENDORIE = 210,
    QCA_NL80211_VENDOR_SUBCMD_NAC = 211,
    QCA_NL80211_VENDOR_SUBCMD_LIST_SCAN = 212,
    QCA_NL80211_VENDOR_SUBCMD_LIST_CAP = 213,
    QCA_NL80211_VENDOR_SUBCMD_LIST_STA = 214,
    QCA_NL80211_VENDOR_SUBCMD_ACTIVECHANLIST = 215,
    QCA_NL80211_VENDOR_SUBCMD_LIST_CHAN = 216,
    QCA_NL80211_VENDOR_SUBCMD_LIST_CHAN160 = 217,
    QCA_NL80211_VENDOR_SUBCMD_DBGREQ     = 218,
    QCA_NL80211_VENDOR_SUBCMD_PHYSTATS = 219,
    QCA_NL80211_VENDOR_SUBCMD_ATHSTATS = 220,
    QCA_NL80211_VENDOR_SUBCMD_PHYSTATSCUR = 221,
    QCA_NL80211_VENDOR_SUBCMD_EXTENDEDSTATS = 222,
    QCA_NL80211_VENDOR_SUBCMD_80211STATS = 223,
    QCA_NL80211_VENDOR_SUBCMD_STA_STATS = 224,
    QCA_NL80211_VENDOR_SUBCMD_CLONEPARAMS = 225,

    QCA_NL80211_VENDORSUBCMD_ADDMAC = 226,
    QCA_NL80211_VENDORSUBCMD_DELMAC = 227,
    QCA_NL80211_VENDORSUBCMD_KICKMAC = 228,
    QCA_NL80211_VENDORSUBCMD_CHAN_SWITCH = 229,
    QCA_NL80211_VENDORSUBCMD_WIRELESS_MODE = 230,
    QCA_NL80211_VENDORSUBCMD_AC_PARAMS = 231,
    QCA_NL80211_VENDORSUBCMD_RC_PARAMS_SETRTPARAMS = 232,
    QCA_NL80211_VENDORSUBCMD_SETFILTER = 233,
    QCA_NL80211_VENDORSUBCMD_MAC_COMMANDS = 234,
    QCA_NL80211_VENDORSUBCMD_WMM_PARAMS = 235,
    QCA_NL80211_VENDORSUBCMD_COUNTRY_CONFIG = 236,
    QCA_NL80211_VENDORSUBCMD_HWADDR_CONFIG = 237,
    QCA_NL80211_VENDORSUBCMD_AGGR_BURST_CONFIG = 238,
    QCA_NL80211_VENDORSUBCMD_ATF_SCHED_DURATION_CONFIG = 239,
    QCA_NL80211_VENDORSUBCMD_TXRX_PEER_STATS = 240,
    QCA_NL80211_VENDORSUBCMD_CHANNEL_CONFIG = 241,
    QCA_NL80211_VENDORSUBCMD_SSID_CONFIG = 242,
    QCA_NL80211_VENDOR_SUBCMD_PHYERR = 243,
    QCA_NL80211_VENDORSUBCMD_MGMT_RSSI_THR = 244,
    QCA_NL80211_VENDORSUBCMD_GET_SSID = 245,
    QCA_NL80211_VENDOR_SUBCMD_GET_ACLMAC = 246,
    QCA_NL80211_VENDORSUBCMD_DP_FW_PEER_STATS = 247,
    QCA_NL80211_VENDORSUBCMD_SEND_MGMT = 248,
    QCA_NL80211_VENDORSUBCMD_CHECK_11H = 249,
    QCA_NL80211_VENDOR_SUBCMD_HTTSTATS = 250,
#if ATH_ACL_SOFTBLOCKING
    QCA_NL80211_VENDORSUBCMD_ADDMAC_SEC = 252,
    QCA_NL80211_VENDORSUBCMD_DELMAC_SEC = 253,
    QCA_NL80211_VENDORSUBCMD_GET_ACLMAC_SEC = 254,
#endif
    QCA_NL80211_VENDOR_SUBCMD_NAC_RSSI = 255,
    QCA_NL80211_VENDOR_SUBCMD_SET_SU_SOUNDING_INT = 256,
    QCA_NL80211_VENDOR_SUBCMD_SET_MU_SOUNDING_INT = 257,
    QCA_NL80211_VENDOR_SUBCMD_ENABLE_SOUNDING_INT = 258,
    QCA_NL80211_VENDOR_SUBCMD_SCHED_MU_ENABLE = 259,
    QCA_NL80211_VENDOR_SUBCMD_SCHED_OFDMA_ENABLE = 260,
    QCA_NL80211_VENDOR_SUBCMD_HE_BSS_COLOR = 261,
    QCA_NL80211_VENDOR_SUBCMD_FWD_MGMT_FRAME = 262,
    QCA_NL80211_VENDOR_SUBCMD_MU_EDCA_PARAMS = 263,
#if ATH_ACS_DEBUG_SUPPORT
    QCA_NL80211_VENDOR_SUBCMD_ACSDBGTOOL_ADD_BCN = 264,
    QCA_NL80211_VENDOR_SUBCMD_ACSDBGTOOL_ADD_CHAN = 265,
#endif
#if WLAN_DFS_CHAN_HIDDEN_SSID
    QCA_NL80211_VENDORSUBCMD_CONF_BSSID = 266,
    QCA_NL80211_VENDORSUBCMD_GET_CONF_BSSID = 267,
#endif /* WLAN_DFS_CHAN_HIDDEN_SSID */
    QCA_NL80211_VENDORSUBCMD_BSSID = 268,
    QCA_NL80211_VENDORSUBCMD_SET_PEER_NEXTHOP = 269,
    QCA_NL80211_VENDORSUBCMD_RC_PARAMS_SETRATEMASK = 270,
    QCA_NL80211_VENDORSUBCMD_SET_BLOCK_MGT = 271,
    QCA_NL80211_VENDORSUBCMD_CLR_BLOCK_MGT = 272,
    QCA_NL80211_VENDORSUBCMD_GET_BLOCK_MGT = 273,
    QCA_NL80211_VENDOR_SUBCMD_SET_BA_TIMEOUT = 274,
    QCA_NL80211_VENDOR_SUBCMD_GET_BA_TIMEOUT = 275,
    QCA_NL80211_VENDOR_SUBCMD_ADDIE = 276,
    QCA_NL80211_VENDORSUBCMD_SET_VLAN_TYPE = 277,
#if WLAN_CFR_ENABLE
    QCA_NL80211_VENDOR_SUBCMD_CFR_CONFIG = 278,
#endif
    QCA_NL80211_VENDORSUBCMD_DEFAULT_PCP_TID_MAP = 279,
    QCA_NL80211_VENDORSUBCMD_DEFAULT_TIDMAP_PRTY = 280,
    QCA_NL80211_VENDORSUBCMD_PCP_TID_MAP = 281,
    QCA_NL80211_VENDORSUBCMD_TIDMAP_PRTY = 282,
    QCA_NL80211_VENDORSUBCMD_TIDMAP_TBL_ID = 283,
#if UMAC_SUPPORT_ACFG
    QCA_NL80211_VENDOR_SUBCMD_ACFG = 284,
#endif
#if SM_ENG_HIST_ENABLE
    QCA_NL80211_VENDOR_SUBCMD_SM_HISTORY = 285,
#endif
    QCA_NL80211_VENDOR_SUBCMD_GET_PRI20_BLOCKCHANLIST = 286,
#ifdef WLAN_SUPPORT_RX_PROTOCOL_TYPE_TAG
    QCA_NL80211_VENDOR_SUBCMD_RX_PKT_PROTOCOL_TAG = 288,
#ifdef WLAN_SUPPORT_RX_TAG_STATISTICS
    QCA_NL80211_VENDOR_SUBCMD_RX_PKT_PROTOCOL_TAG_STATS = 289,
#endif /* WLAN_SUPPORT_RX_TAG_STATISTICS */
#endif /* WLAN_SUPPORT_RX_PROTOCOL_TYPE_TAG */
#if UNIFIED_SMARTANTENNA
    QCA_NL80211_VENDOR_SUBCMD_SA_PARAMS = 290,
#endif
    QCA_NL80211_VENDOR_SUBCMD_SET_BTCOEX_DUTY_CYCLE = 291,
    QCA_NL80211_VENDOR_SUBCMD_GET_CHAN_RF_CHARACTERIZATION_INFO = 292,
    QCA_NL80211_VENDOR_SUBCMD_HE_SR_CONFIG = 293,
    QCA_NL80211_VENDOR_SUBCMD_GET_QLD_ENTRY = 294,
    QCA_NL80211_VENDOR_SUBCMD_NAV_OVERRIDE_CONFIG = 295,
#if OBSS_PD
    QCA_NL80211_VENDOR_SUBCMD_HE_SRG_BITMAP = 296,
#endif /* OBSS PD */
    QCA_NL80211_VENDOR_SUBCMD_VLAN = 297,
    QCA_NL80211_VENDOR_SUBCMD_KEY_VLAN_SET_KEY = 298,
#ifdef WLAN_SUPPORT_RX_FLOW_TAG
    QCA_NL80211_VENDOR_SUBCMD_RX_FLOW_TAG_OP = 299,
#endif /* WLAN_SUPPORT_RX_FLOW_TAG */
#if defined(WLAN_TX_PKT_CAPTURE_ENH) || defined(WLAN_RX_PKT_CAPTURE_ENH)
    QCA_NL80211_VENDOR_SUBCMD_SET_PEER_PKT_CAPTURE_PARAMS = 300,
#endif /* WLAN_TX_PKT_CAPTURE_ENH || WLAN_RX_PKT_CAPTURE_ENH */
    QCA_NL80211_VENDORSUBCMD_CHAN_WIDTHSWITCH = 301,
    QCA_NL80211_VENDOR_SUBCMD_FWD_RRM_RPT = 302,
    QCA_NL80211_VENDORSUBCMD_LIST_SUPPORTED_BANDS = 303,
    QCA_NL80211_VENDOR_SUBCMD_FWD_BTM_RPT = 304,
    /* Set/Get Mu edca dynamic/Manual selection */
    QCA_NL80211_VENDOR_SUBCMD_MUEDCA_MODE = 305,
    /* Enable/disable non-HT duplicate Beacon/FILS/Broadcast Prb Resp frames */
    QCA_NL80211_VENDOR_SUBCMD_NON_HT_DUP_EN = 306,
    /* Get Regulatory Opclass params for SON */
    QCA_NL80211_VENDOR_SUBCMD_SON_REG_PARAMS = 307,
    QCA_NL80211_VENDOR_SUBCMD_SET_AP = 308,
    QCA_NL80211_VENDOR_SUBCMD_VAP_VENDOR_PARAM = 309,
    /* Self Spatial reuse configuration */
    QCA_NL80211_VENDOR_SUBCMD_SR_SELF_CONFIG = 310,
};

enum qca_nl_son_reg_params
{
    QCA_NL80211_SON_REG_PARAMS_NUM_OPCLASS = 0,
    QCA_NL80211_SON_REG_PARAMS_CURR_CHAN_NUM= 1,
    QCA_NL80211_SON_REG_PARAMS_CURR_OPCLASS_TXPOWER = 2,
    QCA_NL80211_SON_REG_PARAMS_OP_CLASS_LIST = 3,
};

#if QLD
/* Flags to indication of start and end
   of data while sending vendor command */
enum qca_nl_vendor_subcmd_get_qld_entry_flags {
    QLD_DATA_START_FLAG,
    QLD_DATA_END_FLAG,
};
#endif
/**
 * enum qca_wlan_vlan_setkey_attr - Parameters for VLAN key set
 */
enum qca_wlan_vlan_setkey_attr {
       QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_INVALID = 0,
       QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_MAC_ADDR,
       QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_VLAN_ID,
       QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_KEYIX,
       QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_KEYDATA,
       QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_LAST,
       QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_PARAM_MAX =
               QCA_WLAN_VENDOR_ATTR_VLAN_SETKEY_LAST - 1,
};

/**
 * enum qca_wlan_set_vlan_attr - Parameters to set VLAN ID for STA
 */
enum qca_wlan_set_vlan_attr {
       QCA_WLAN_VENDOR_ATTR_VLAN_INVALID = 0,
       QCA_WLAN_VENDOR_ATTR_VLAN_MAC_ADDR,
       QCA_WLAN_VENDOR_ATTR_STA_VLAN,
       QCA_WLAN_VENDOR_ATTR_VLAN_LAST,
       QCA_WLAN_VENDOR_ATTR_VLAN_PARAM_MAX =
               QCA_WLAN_VENDOR_ATTR_VLAN_LAST - 1,

};
#endif
#ifndef __S2_REVOXSTRITZL2_H__
#define __S2_REVOXSTRITZL2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_RevoxStritzl2_TRIGGER_DIG_INPUT 0
#define __S2_RevoxStritzl2_M51_MAIN_VOL_UP_DIG_INPUT 1
#define __S2_RevoxStritzl2_M51_MAIN_VOL_DN_DIG_INPUT 2
#define __S2_RevoxStritzl2_M51_ESSZIMMER_VOL_UP_DIG_INPUT 3
#define __S2_RevoxStritzl2_M51_ESSZIMMER_VOL_DN_DIG_INPUT 4
#define __S2_RevoxStritzl2_M51_KUCHL_VOL_UP_DIG_INPUT 5
#define __S2_RevoxStritzl2_M51_KUCHL_VOL_DN_DIG_INPUT 6
#define __S2_RevoxStritzl2_M51_TER_S_VOL_UP_DIG_INPUT 7
#define __S2_RevoxStritzl2_M51_TER_S_VOL_DN_DIG_INPUT 8
#define __S2_RevoxStritzl2_M51_TER_N_VOL_UP_DIG_INPUT 9
#define __S2_RevoxStritzl2_M51_TER_N_VOL_DN_DIG_INPUT 10
#define __S2_RevoxStritzl2_M51_TER_W_VOL_UP_DIG_INPUT 11
#define __S2_RevoxStritzl2_M51_TER_W_VOL_DN_DIG_INPUT 12
#define __S2_RevoxStritzl2_M51_ATEL_VOL_UP_DIG_INPUT 13
#define __S2_RevoxStritzl2_M51_ATEL_VOL_DN_DIG_INPUT 14
#define __S2_RevoxStritzl2_M51_GARAGE_VOL_UP_DIG_INPUT 15
#define __S2_RevoxStritzl2_M51_GARAGE_VOL_DN_DIG_INPUT 16
#define __S2_RevoxStritzl2_M51_WEIN_KE_VOL_UP_DIG_INPUT 17
#define __S2_RevoxStritzl2_M51_WEIN_KE_VOL_DN_DIG_INPUT 18
#define __S2_RevoxStritzl2_M51_BAD_VOL_UP_DIG_INPUT 19
#define __S2_RevoxStritzl2_M51_BAD_VOL_DN_DIG_INPUT 20
#define __S2_RevoxStritzl2_M51_ANKL_VOL_UP_DIG_INPUT 21
#define __S2_RevoxStritzl2_M51_ANKL_VOL_DN_DIG_INPUT 22
#define __S2_RevoxStritzl2_M51_SCHLAF_VOL_UP_DIG_INPUT 23
#define __S2_RevoxStritzl2_M51_SCHLAF_VOL_DN_DIG_INPUT 24
#define __S2_RevoxStritzl2_M51_FOY_OG_VOL_UP_DIG_INPUT 25
#define __S2_RevoxStritzl2_M51_FOY_OG_VOL_DN_DIG_INPUT 26
#define __S2_RevoxStritzl2_M51_FOY_EG_VOL_UP_DIG_INPUT 27
#define __S2_RevoxStritzl2_M51_FOY_EG_VOL_DN_DIG_INPUT 28
#define __S2_RevoxStritzl2_M51_SCHWIMM_VOL_UP_DIG_INPUT 29
#define __S2_RevoxStritzl2_M51_SCHWIMM_VOL_DN_DIG_INPUT 30
#define __S2_RevoxStritzl2_M51_SAUNA_VOL_UP_DIG_INPUT 31
#define __S2_RevoxStritzl2_M51_SAUNA_VOL_DN_DIG_INPUT 32
#define __S2_RevoxStritzl2_M51_BUERO_2_VOL_UP_DIG_INPUT 33
#define __S2_RevoxStritzl2_M51_BUERO_2_VOL_DN_DIG_INPUT 34
#define __S2_RevoxStritzl2_M51_HWR_VOL_UP_DIG_INPUT 35
#define __S2_RevoxStritzl2_M51_HWR_VOL_DN_DIG_INPUT 36


/*
* ANALOG_INPUT
*/
#define __S2_RevoxStritzl2_REV_INPUT_ANALOG_INPUT 0
#define __S2_RevoxStritzl2_REV_OUTPUT_ANALOG_INPUT 1


#define __S2_RevoxStritzl2_M51_MULTI_RX_BUFFER_INPUT 2
#define __S2_RevoxStritzl2_M51_MULTI_RX_BUFFER_MAX_LEN 1024
CREATE_STRING_STRUCT( S2_RevoxStritzl2, __M51_MULTI_RX, __S2_RevoxStritzl2_M51_MULTI_RX_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_RevoxStritzl2_VOLUME_INT_ANALOG_OUTPUT 45

#define __S2_RevoxStritzl2_M51_MULTI_TX_STRING_OUTPUT 0
#define __S2_RevoxStritzl2_M51_MULTI_DEBUG_STRING_OUTPUT 1
#define __S2_RevoxStritzl2_M51_ZONE_OUT_STRING_OUTPUT 2
#define __S2_RevoxStritzl2_CENTER_01_STRING_OUTPUT 3
#define __S2_RevoxStritzl2_CENTER_02_STRING_OUTPUT 4
#define __S2_RevoxStritzl2_CENTER_03_STRING_OUTPUT 5
#define __S2_RevoxStritzl2_CENTER_04_STRING_OUTPUT 6
#define __S2_RevoxStritzl2_CENTER_05_STRING_OUTPUT 7
#define __S2_RevoxStritzl2_CENTER_06_STRING_OUTPUT 8
#define __S2_RevoxStritzl2_CENTER_07_STRING_OUTPUT 9
#define __S2_RevoxStritzl2_CENTER_08_STRING_OUTPUT 10
#define __S2_RevoxStritzl2_CENTER_09_STRING_OUTPUT 11
#define __S2_RevoxStritzl2_CENTER_11_STRING_OUTPUT 12
#define __S2_RevoxStritzl2_CENTER_12_STRING_OUTPUT 13
#define __S2_RevoxStritzl2_CENTER_13_STRING_OUTPUT 14
#define __S2_RevoxStritzl2_CENTER_14_STRING_OUTPUT 15
#define __S2_RevoxStritzl2_CENTER_15_STRING_OUTPUT 16
#define __S2_RevoxStritzl2_CENTER_16_STRING_OUTPUT 17
#define __S2_RevoxStritzl2_CENTER_17_STRING_OUTPUT 18
#define __S2_RevoxStritzl2_CENTER_18_STRING_OUTPUT 19
#define __S2_RevoxStritzl2_CENTER_21_STRING_OUTPUT 20
#define __S2_RevoxStritzl2_CENTER_22_STRING_OUTPUT 21
#define __S2_RevoxStritzl2_CENTER_23_STRING_OUTPUT 22
#define __S2_RevoxStritzl2_CENTER_24_STRING_OUTPUT 23
#define __S2_RevoxStritzl2_CENTER_31_STRING_OUTPUT 24
#define __S2_RevoxStritzl2_CENTER_32_STRING_OUTPUT 25
#define __S2_RevoxStritzl2_CENTER_41_STRING_OUTPUT 26
#define __S2_RevoxStritzl2_CENTER_42_STRING_OUTPUT 27
#define __S2_RevoxStritzl2_CENTER_43_STRING_OUTPUT 28
#define __S2_RevoxStritzl2_CENTER_44_STRING_OUTPUT 29
#define __S2_RevoxStritzl2_CENTER_45_STRING_OUTPUT 30
#define __S2_RevoxStritzl2_CENTER_46_STRING_OUTPUT 31
#define __S2_RevoxStritzl2_CENTER_47_STRING_OUTPUT 32
#define __S2_RevoxStritzl2_CENTER_51_STRING_OUTPUT 33
#define __S2_RevoxStritzl2_CENTER_52_STRING_OUTPUT 34
#define __S2_RevoxStritzl2_CENTER_53_STRING_OUTPUT 35
#define __S2_RevoxStritzl2_CENTER_54_STRING_OUTPUT 36
#define __S2_RevoxStritzl2_CENTER_55_STRING_OUTPUT 37
#define __S2_RevoxStritzl2_CENTER_56_STRING_OUTPUT 38
#define __S2_RevoxStritzl2_TITLE_L_STRING_OUTPUT 39
#define __S2_RevoxStritzl2_TITLE_C_STRING_OUTPUT 40
#define __S2_RevoxStritzl2_TITLE_R_STRING_OUTPUT 41
#define __S2_RevoxStritzl2_BOTTOM_L_STRING_OUTPUT 42
#define __S2_RevoxStritzl2_BOTTOM_R_STRING_OUTPUT 43
#define __S2_RevoxStritzl2_VOLUME_TXT_STRING_OUTPUT 44
#define __S2_RevoxStritzl2_BIG_NUM_STRING_OUTPUT 46
#define __S2_RevoxStritzl2_ZONE_0_SOURCE_STRING_OUTPUT 47
#define __S2_RevoxStritzl2_ZONE_1_SOURCE_STRING_OUTPUT 48
#define __S2_RevoxStritzl2_ZONE_2_SOURCE_STRING_OUTPUT 49
#define __S2_RevoxStritzl2_ZONE_3_SOURCE_STRING_OUTPUT 50
#define __S2_RevoxStritzl2_ZONE_4_SOURCE_STRING_OUTPUT 51
#define __S2_RevoxStritzl2_M51_SENDER_STRING_OUTPUT 52
#define __S2_RevoxStritzl2_ZONE_0_NAME_STRING_OUTPUT 53
#define __S2_RevoxStritzl2_ZONE_0_FREQ_STRING_OUTPUT 54
#define __S2_RevoxStritzl2_ZONE_0_TIME_STRING_OUTPUT 55
#define __S2_RevoxStritzl2_ZONE_0_NUMMER_STRING_OUTPUT 56
#define __S2_RevoxStritzl2_ZONE_1_NAME_STRING_OUTPUT 57
#define __S2_RevoxStritzl2_ZONE_1_FREQ_STRING_OUTPUT 58
#define __S2_RevoxStritzl2_ZONE_1_TIME_STRING_OUTPUT 59
#define __S2_RevoxStritzl2_ZONE_1_NUMMER_STRING_OUTPUT 60
#define __S2_RevoxStritzl2_ZONE_2_NAME_STRING_OUTPUT 61
#define __S2_RevoxStritzl2_ZONE_2_FREQ_STRING_OUTPUT 62
#define __S2_RevoxStritzl2_ZONE_2_TIME_STRING_OUTPUT 63
#define __S2_RevoxStritzl2_ZONE_2_NUMMER_STRING_OUTPUT 64
#define __S2_RevoxStritzl2_ZONE_3_NAME_STRING_OUTPUT 65
#define __S2_RevoxStritzl2_ZONE_3_FREQ_STRING_OUTPUT 66
#define __S2_RevoxStritzl2_ZONE_3_TIME_STRING_OUTPUT 67
#define __S2_RevoxStritzl2_ZONE_3_NUMMER_STRING_OUTPUT 68
#define __S2_RevoxStritzl2_ZONE_4_NAME_STRING_OUTPUT 69
#define __S2_RevoxStritzl2_ZONE_4_FREQ_STRING_OUTPUT 70
#define __S2_RevoxStritzl2_ZONE_4_TIME_STRING_OUTPUT 71
#define __S2_RevoxStritzl2_ZONE_4_NUMMER_STRING_OUTPUT 72


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_RevoxStritzl2_CENTER_TMP_ARRAY_NUM_ELEMS 56
#define __S2_RevoxStritzl2_CENTER_TMP_ARRAY_NUM_CHARS 32
CREATE_STRING_ARRAY( S2_RevoxStritzl2, __CENTER_TMP, __S2_RevoxStritzl2_CENTER_TMP_ARRAY_NUM_ELEMS, __S2_RevoxStritzl2_CENTER_TMP_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_RevoxStritzl2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_RevoxStritzl2, __M51_MULTI_RX );
};

START_NVRAM_VAR_STRUCT( S2_RevoxStritzl2 )
{
   DECLARE_STRING_ARRAY( S2_RevoxStritzl2, __CENTER_TMP );
   unsigned short __M51_ZONE_ID;
   unsigned short __M51_ROOM_ID;
   unsigned short __FLAG;
};



#endif //__S2_REVOXSTRITZL2_H__


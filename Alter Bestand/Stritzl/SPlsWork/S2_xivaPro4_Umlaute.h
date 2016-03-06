#ifndef __S2_XIVAPRO4_UMLAUTE_H__
#define __S2_XIVAPRO4_UMLAUTE_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_xivaPro4_Umlaute_CLOSEDATABASES_DIG_INPUT 0
#define __S2_xivaPro4_Umlaute_XIVACHANGED_DIG_INPUT 1
#define __S2_xivaPro4_Umlaute_GENERATEGENREPLAYLISTS_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_xivaPro4_Umlaute_TRACKSPERSCREEN_ANALOG_INPUT 0
#define __S2_xivaPro4_Umlaute_MAXCHARACTERS_ANALOG_INPUT 1

#define __S2_xivaPro4_Umlaute_FROMZONES$_STRING_INPUT 2
#define __S2_xivaPro4_Umlaute_FROMZONES$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __FROMZONES$, __S2_xivaPro4_Umlaute_FROMZONES$_STRING_MAX_LEN );

#define __S2_xivaPro4_Umlaute_XIVA_RX$_BUFFER_INPUT 3
#define __S2_xivaPro4_Umlaute_XIVA_RX$_BUFFER_MAX_LEN 4000
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __XIVA_RX$, __S2_xivaPro4_Umlaute_XIVA_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_xivaPro4_Umlaute_GENREPLAYLISTBUSY_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_xivaPro4_Umlaute_STATUS1_ANALOG_OUTPUT 0
#define __S2_xivaPro4_Umlaute_STATUS2_ANALOG_OUTPUT 1
#define __S2_xivaPro4_Umlaute_STATUS3_ANALOG_OUTPUT 2
#define __S2_xivaPro4_Umlaute_STATUS4_ANALOG_OUTPUT 3
#define __S2_xivaPro4_Umlaute_STATUS5_ANALOG_OUTPUT 4
#define __S2_xivaPro4_Umlaute_STATUS6_ANALOG_OUTPUT 5
#define __S2_xivaPro4_Umlaute_STATUS7_ANALOG_OUTPUT 6
#define __S2_xivaPro4_Umlaute_STATUS8_ANALOG_OUTPUT 7
#define __S2_xivaPro4_Umlaute_STATUS9_ANALOG_OUTPUT 8
#define __S2_xivaPro4_Umlaute_STATUS10_ANALOG_OUTPUT 9
#define __S2_xivaPro4_Umlaute_STATUS11_ANALOG_OUTPUT 10
#define __S2_xivaPro4_Umlaute_STATUS12_ANALOG_OUTPUT 11
#define __S2_xivaPro4_Umlaute_STATUS13_ANALOG_OUTPUT 12
#define __S2_xivaPro4_Umlaute_STATUS14_ANALOG_OUTPUT 13
#define __S2_xivaPro4_Umlaute_STATUS15_ANALOG_OUTPUT 14
#define __S2_xivaPro4_Umlaute_STATUS16_ANALOG_OUTPUT 15

#define __S2_xivaPro4_Umlaute_GENREMARKER$_STRING_OUTPUT 16
#define __S2_xivaPro4_Umlaute_GENRECOUNT$_STRING_OUTPUT 17
#define __S2_xivaPro4_Umlaute_GENREMEDIAMARKER$_STRING_OUTPUT 18
#define __S2_xivaPro4_Umlaute_GENREMEDIACOUNT$_STRING_OUTPUT 19
#define __S2_xivaPro4_Umlaute_ARTISTMARKER$_STRING_OUTPUT 20
#define __S2_xivaPro4_Umlaute_ARTISTCOUNT$_STRING_OUTPUT 21
#define __S2_xivaPro4_Umlaute_ARTISTMEDIAMARKER$_STRING_OUTPUT 22
#define __S2_xivaPro4_Umlaute_ARTISTMEDIACOUNT$_STRING_OUTPUT 23
#define __S2_xivaPro4_Umlaute_MEDIAMARKER$_STRING_OUTPUT 24
#define __S2_xivaPro4_Umlaute_MEDIACOUNT$_STRING_OUTPUT 25
#define __S2_xivaPro4_Umlaute_PLAYLISTMARKER$_STRING_OUTPUT 26
#define __S2_xivaPro4_Umlaute_PLAYLISTCOUNT$_STRING_OUTPUT 27
#define __S2_xivaPro4_Umlaute_GENERATEPLAYLISTSTATUS$_STRING_OUTPUT 28
#define __S2_xivaPro4_Umlaute_XIVA_TX$_STRING_OUTPUT 29

#define __S2_xivaPro4_Umlaute_ZONEINFORMATION$_STRING_OUTPUT 30
#define __S2_xivaPro4_Umlaute_ZONEINFORMATION$_ARRAY_LENGTH 18

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
CREATE_INTARRAY1D( S2_xivaPro4_Umlaute, __STATUSINT, 17 );;


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
#define __S2_xivaPro4_Umlaute_TEMPSTRING$_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPSTRING$, __S2_xivaPro4_Umlaute_TEMPSTRING$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_STATE$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __STATE$, __S2_xivaPro4_Umlaute_STATE$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_TEMPDISCID$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPDISCID$, __S2_xivaPro4_Umlaute_TEMPDISCID$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_GENREMARKERINT$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __GENREMARKERINT$, __S2_xivaPro4_Umlaute_GENREMARKERINT$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_ARTISTMARKERINT$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __ARTISTMARKERINT$, __S2_xivaPro4_Umlaute_ARTISTMARKERINT$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_MEDIAMARKERINT$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __MEDIAMARKERINT$, __S2_xivaPro4_Umlaute_MEDIAMARKERINT$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_PLAYLISTMARKERINT$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __PLAYLISTMARKERINT$, __S2_xivaPro4_Umlaute_PLAYLISTMARKERINT$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_TEMP$_STRING_MAX_LEN 80
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMP$, __S2_xivaPro4_Umlaute_TEMP$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_TEMPTRACKID$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPTRACKID$, __S2_xivaPro4_Umlaute_TEMPTRACKID$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_DATABASERETURNED$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __DATABASERETURNED$, __S2_xivaPro4_Umlaute_DATABASERETURNED$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_MARKERRETURNED$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __MARKERRETURNED$, __S2_xivaPro4_Umlaute_MARKERRETURNED$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_COUNTRETURNED$_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __COUNTRETURNED$, __S2_xivaPro4_Umlaute_COUNTRETURNED$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_BROWSEID$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSEID$, __S2_xivaPro4_Umlaute_BROWSEID$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_BROWSENAME$_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSENAME$, __S2_xivaPro4_Umlaute_BROWSENAME$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_BROWSEARTIST$_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSEARTIST$, __S2_xivaPro4_Umlaute_BROWSEARTIST$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_BROWSEGENRE$_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSEGENRE$, __S2_xivaPro4_Umlaute_BROWSEGENRE$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_ARTISTMEDIAMARKERINT$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __ARTISTMEDIAMARKERINT$, __S2_xivaPro4_Umlaute_ARTISTMEDIAMARKERINT$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_GENREMEDIAMARKERINT$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __GENREMEDIAMARKERINT$, __S2_xivaPro4_Umlaute_GENREMEDIAMARKERINT$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_CACHECLOSED$_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __CACHECLOSED$, __S2_xivaPro4_Umlaute_CACHECLOSED$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_FREESPACE$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __FREESPACE$, __S2_xivaPro4_Umlaute_FREESPACE$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_TEMPNAME$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPNAME$, __S2_xivaPro4_Umlaute_TEMPNAME$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_TEMPTAG$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPTAG$, __S2_xivaPro4_Umlaute_TEMPTAG$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_NAME$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __NAME$, __S2_xivaPro4_Umlaute_NAME$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_FLAG$_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __FLAG$, __S2_xivaPro4_Umlaute_FLAG$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_ALLHDDMARKER$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_xivaPro4_Umlaute, __ALLHDDMARKER$, __S2_xivaPro4_Umlaute_ALLHDDMARKER$_STRING_MAX_LEN );
#define __S2_xivaPro4_Umlaute_DISCID$_ARRAY_NUM_ELEMS 17
#define __S2_xivaPro4_Umlaute_DISCID$_ARRAY_NUM_CHARS 12
CREATE_STRING_ARRAY( S2_xivaPro4_Umlaute, __DISCID$, __S2_xivaPro4_Umlaute_DISCID$_ARRAY_NUM_ELEMS, __S2_xivaPro4_Umlaute_DISCID$_ARRAY_NUM_CHARS );
#define __S2_xivaPro4_Umlaute_TRACKID$_ARRAY_NUM_ELEMS 17
#define __S2_xivaPro4_Umlaute_TRACKID$_ARRAY_NUM_CHARS 12
CREATE_STRING_ARRAY( S2_xivaPro4_Umlaute, __TRACKID$, __S2_xivaPro4_Umlaute_TRACKID$_ARRAY_NUM_ELEMS, __S2_xivaPro4_Umlaute_TRACKID$_ARRAY_NUM_CHARS );
#define __S2_xivaPro4_Umlaute_GENREMARKERS$_ARRAY_NUM_ELEMS 50
#define __S2_xivaPro4_Umlaute_GENREMARKERS$_ARRAY_NUM_CHARS 12
CREATE_STRING_ARRAY( S2_xivaPro4_Umlaute, __GENREMARKERS$, __S2_xivaPro4_Umlaute_GENREMARKERS$_ARRAY_NUM_ELEMS, __S2_xivaPro4_Umlaute_GENREMARKERS$_ARRAY_NUM_CHARS );
#define __S2_xivaPro4_Umlaute_GENRENAMES$_ARRAY_NUM_ELEMS 50
#define __S2_xivaPro4_Umlaute_GENRENAMES$_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_xivaPro4_Umlaute, __GENRENAMES$, __S2_xivaPro4_Umlaute_GENRENAMES$_ARRAY_NUM_ELEMS, __S2_xivaPro4_Umlaute_GENRENAMES$_ARRAY_NUM_CHARS );
#define __S2_xivaPro4_Umlaute_ARTISTNAMES$_ARRAY_NUM_ELEMS 17
#define __S2_xivaPro4_Umlaute_ARTISTNAMES$_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_xivaPro4_Umlaute, __ARTISTNAMES$, __S2_xivaPro4_Umlaute_ARTISTNAMES$_ARRAY_NUM_ELEMS, __S2_xivaPro4_Umlaute_ARTISTNAMES$_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_xivaPro4_Umlaute )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ZONEINFORMATION$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __FROMZONES$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __XIVA_RX$ );
};

START_NVRAM_VAR_STRUCT( S2_xivaPro4_Umlaute )
{
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __STATE$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPDISCID$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __GENREMARKERINT$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __ARTISTMARKERINT$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __MEDIAMARKERINT$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __PLAYLISTMARKERINT$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMP$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPTRACKID$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __DATABASERETURNED$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __MARKERRETURNED$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __COUNTRETURNED$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSEID$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSENAME$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSEARTIST$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __BROWSEGENRE$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __ARTISTMEDIAMARKERINT$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __GENREMEDIAMARKERINT$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __CACHECLOSED$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __FREESPACE$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPNAME$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __TEMPTAG$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __NAME$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __FLAG$ );
   DECLARE_STRING_STRUCT( S2_xivaPro4_Umlaute, __ALLHDDMARKER$ );
   DECLARE_STRING_ARRAY( S2_xivaPro4_Umlaute, __DISCID$ );
   DECLARE_STRING_ARRAY( S2_xivaPro4_Umlaute, __TRACKID$ );
   DECLARE_STRING_ARRAY( S2_xivaPro4_Umlaute, __GENREMARKERS$ );
   DECLARE_STRING_ARRAY( S2_xivaPro4_Umlaute, __GENRENAMES$ );
   DECLARE_STRING_ARRAY( S2_xivaPro4_Umlaute, __ARTISTNAMES$ );
   unsigned short __RXOK;
   unsigned short __TEMPCHAR;
   unsigned short __ZONE;
   unsigned short __MARKER1;
   unsigned short __MARKER2;
   unsigned short __MARKER3;
   unsigned short __MARKER4;
   unsigned short __MARKER5;
   unsigned short __MARKER6;
   unsigned short __REMAINDER;
   unsigned short __LENGTH;
   unsigned short __I;
   unsigned short __STATUS;
   unsigned short __RESPONSE;
   unsigned short __LASTTRACK;
   unsigned short __FIRSTTRACK;
   unsigned short __FLAG;
   unsigned short __WHOLE;
   unsigned short __FRAC;
   unsigned short __BPS;
   unsigned short __COUNTER;
   unsigned short __MEDIACLOSEDFLAG;
   unsigned short __ARTISTCLOSEDFLAG;
   unsigned short __GENRECLOSEDFLAG;
   unsigned short __PLAYLISTCLOSEDFLAG;
   unsigned short __GENRECOUNTINT;
   unsigned short __GENRECOUNTER;
   unsigned short __FOUND;
   unsigned short __COUNT;
   unsigned short __TEMPZONE;
   DECLARE_INTARRAY( S2_xivaPro4_Umlaute, __STATUSINT );
};



#endif //__S2_XIVAPRO4_UMLAUTE_H__


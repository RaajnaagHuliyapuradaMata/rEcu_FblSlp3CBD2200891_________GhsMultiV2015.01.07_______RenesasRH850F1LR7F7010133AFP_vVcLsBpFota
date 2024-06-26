

#ifndef VSECPRIM_TYPES_H
#define VSECPRIM_TYPES_H

#include "ESLib_Helper.hpp"
#include "ESLib_t.hpp"

#define VSECPRIM_DIGEST_SHA1                                         (ESL_HA_SHA1)
#define VSECPRIM_DIGEST_SHA2_224                                     (ESL_HA_SHA2_224)
#define VSECPRIM_DIGEST_SHA2_256                                     (ESL_HA_SHA2_256)
#define VSECPRIM_DIGEST_SHA2_384                                     (ESL_HA_SHA2_384)
#define VSECPRIM_DIGEST_SHA2_512                                     (ESL_HA_SHA2_512)
#define VSECPRIM_DIGEST_SHA2_512_224                                 (ESL_HA_SHA2_512_224)
#define VSECPRIM_DIGEST_SHA2_512_256                                 (ESL_HA_SHA2_512_256)
#define VSECPRIM_DIGEST_SHA3_224                                     (ESL_HA_SHA3_224)
#define VSECPRIM_DIGEST_SHA3_256                                     (ESL_HA_SHA3_256)
#define VSECPRIM_DIGEST_SHA3_384                                     (ESL_HA_SHA3_384)
#define VSECPRIM_DIGEST_SHA3_512                                     (ESL_HA_SHA3_512)
#define VSECPRIM_DIGEST_SHAKE_128                                    (ESL_HA_SHAKE_128)
#define VSECPRIM_DIGEST_SHAKE_256                                    (ESL_HA_SHAKE_256)
#define VSECPRIM_DIGEST_RIPEMD160                                    (ESL_HA_RMD160)
#define VSECPRIM_DIGEST_MD5                                          (ESL_HA_MD5)

#define VSECPRIM_NUMBER_OF_HASH_FUNCTIONS                            (15u)
#define VSECPRIM_MAX_DIGEST_LENGTH                                   (ESL_SIZEOF_SHA512_DIGEST)

#define VSECPRIM_PROVIDED_BUFFER_LENGTH_MATCHES_DESIRED_OUTPUT_LENGTH (0x01u)
#define VSECPRIM_PROVIDED_BUFFER_LENGTH_MATCHES_OR_EXCEEDS_DESIRED_OUTPUT_LENGTH (0x02u)
#define VSECPRIM_OUTPUT_TRUNCATION_ALLOWED                           (0x04u)

#define VSECPRIM_UPDATE_NOT_YET_CALLED                               (0x00u)
#define VSECPRIM_UPDATE_CALLED                                       (0x01u)

#define VSECPRIM_SIZEOF_WS_HASH                                      (sizeof(vSecPrimType_WorkSpaceHash) - sizeof(eslt_WorkSpaceHeader))

#define vSecPrimMin(x, y)                                            (((x)<(y))? (x):(y))

typedef eslt_Size16                                                   vSecPrimType_OutputBufferFlag;
typedef eslt_HashAlgorithm                                            vSecPrimType_HashAlgorithm;
typedef eslt_Byte                                                     vSecPrimType_CallUpdateFlag;

typedef union
{
  eslt_WorkSpaceSHA1 wsSHA1;

#if(VSECPRIM_SHA2_256_ENABLED == STD_ON)
  eslt_WorkSpaceSHA224 wsSHA2_224;
  eslt_WorkSpaceSHA256 wsSHA2_256;
#endif

#if(VSECPRIM_SHA2_512_ENABLED == STD_ON)
  eslt_WorkSpaceSHA384 wsSHA2_384;
  eslt_WorkSpaceSHA512 wsSHA2_512;
  eslt_WorkSpaceSHA512_224 wsSHA2_512_224;
  eslt_WorkSpaceSHA512_256 wsSHA2_512_256;
#endif

#if(VSECPRIM_SHA3_ENABLED == STD_ON)
  eslt_WorkSpaceSHA3 wsSHA3;
  eslt_WorkSpaceSHAKE wsSHAKE;
#endif

#if(VSECPRIM_RIPEMD160_ENABLED == STD_ON)
  eslt_WorkSpaceRIPEMD160 wsRIPEMD160;
#endif

#if(VSECPRIM_MD5_ENABLED == STD_ON)
  eslt_WorkSpaceMD5 wsMD5;
#endif

}vSecPrimType_WorkSpaceUnionHash;

typedef struct{
  eslt_WorkSpaceHeader header;
  vSecPrimType_WorkSpaceUnionHash wsHash;

  vSecPrimType_OutputBufferFlag outputLengthFlag;
  eslt_Byte tempHash[VSECPRIM_MAX_DIGEST_LENGTH];
  vSecPrimType_HashAlgorithm hashID;
  vSecPrimType_CallUpdateFlag updateCalled;

}vSecPrimType_WorkSpaceHash;

#endif


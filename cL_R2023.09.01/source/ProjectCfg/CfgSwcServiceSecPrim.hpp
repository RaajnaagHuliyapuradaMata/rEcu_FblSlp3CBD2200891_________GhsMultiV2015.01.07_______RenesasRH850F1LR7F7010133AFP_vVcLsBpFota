

#if !defined (VSECPRIM_CFG_H)
#define VSECPRIM_CFG_H

#include "Std_Types.hpp"

#ifndef VSECPRIM_USE_DUMMY_STATEMENT
#define VSECPRIM_USE_DUMMY_STATEMENT STD_ON
#endif
#ifndef VSECPRIM_DUMMY_STATEMENT
#define VSECPRIM_DUMMY_STATEMENT(v) (v)=(v)
#endif
#ifndef VSECPRIM_DUMMY_STATEMENT_CONST
#define VSECPRIM_DUMMY_STATEMENT_CONST(v) (void)(v)
#endif
#ifndef VSECPRIM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define VSECPRIM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF
#endif
#ifndef VSECPRIM_ATOMIC_VARIABLE_ACCESS
#define VSECPRIM_ATOMIC_VARIABLE_ACCESS 8u
#endif
#ifndef VSECPRIM_PROCESSOR_RH850_1013
#define VSECPRIM_PROCESSOR_RH850_1013
#endif
#ifndef VSECPRIM_COMP_GREENHILLS
#define VSECPRIM_COMP_GREENHILLS
#endif
#ifndef VSECPRIM_GEN_GENERATOR_MSR
#define VSECPRIM_GEN_GENERATOR_MSR
#endif
#ifndef VSECPRIM_CPUTYPE_BITORDER_LSB2MSB
#define VSECPRIM_CPUTYPE_BITORDER_LSB2MSB
#endif
#ifndef VSECPRIM_CONFIGURATION_VARIANT_PRECOMPILE
#define VSECPRIM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef VSECPRIM_CONFIGURATION_VARIANT_LINKTIME
#define VSECPRIM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef VSECPRIM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define VSECPRIM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef VSECPRIM_CONFIGURATION_VARIANT
#define VSECPRIM_CONFIGURATION_VARIANT VSECPRIM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef VSECPRIM_POSTBUILD_VARIANT_SUPPORT
#define VSECPRIM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif

#define VSECPRIM_SHA1_ENABLED                                                                       STD_OFF
#define VSECPRIM_RIPEMD160_ENABLED                                                                  STD_OFF
#define VSECPRIM_SHA2_256_ENABLED                                                                   STD_OFF
#define VSECPRIM_SHA2_512_ENABLED                                                                   STD_ON
#define VSECPRIM_SHA3_ENABLED                                                                       STD_OFF
#define VSECPRIM_MD5_ENABLED                                                                        STD_OFF
#define VSECPRIM_FIPS186_ENABLED                                                                    STD_OFF
#define VSECPRIM_CTR_DRBG_ENABLED                                                                   STD_OFF
#define VSECPRIM_HASH_DRBG_ENABLED                                                                  STD_OFF
#define VSECPRIM_AES128_ENABLED                                                                     STD_ON
#define VSECPRIM_AES192_ENABLED                                                                     STD_OFF
#define VSECPRIM_AES256_ENABLED                                                                     STD_OFF
#define VSECPRIM_GCM_ENABLED                                                                        STD_OFF
#define VSECPRIM_AES_CCM_ENABLED                                                                    STD_OFF
#define VSECPRIM_DES_ENABLED                                                                        STD_OFF
#define VSECPRIM_RC2_ENABLED                                                                        STD_OFF
#define VSECPRIM_TDES_ENABLED                                                                       STD_OFF
#define VSECPRIM_CHA_CHA20_ENABLED                                                                  STD_OFF
#define VSECPRIM_AEAD_CHA_CHA20_POLY1305_ENABLED                                                    STD_OFF
#define VSECPRIM_SIP_HASH_ENABLED                                                                   STD_OFF
#define VSECPRIM_CMAC_ENABLED                                                                       STD_OFF
#define VSECPRIM_HMAC_SHA1_ENABLED                                                                  STD_ON
#define VSECPRIM_HMAC_RMD160_ENABLED                                                                STD_OFF
#define VSECPRIM_HMAC_SHA2_256_ENABLED                                                              STD_OFF
#define VSECPRIM_GMAC_ENABLED                                                                       STD_OFF
#define VSECPRIM_POLY1305_ENABLED                                                                   STD_OFF
#define VSECPRIM_HMAC_SHA2_384_ENABLED                                                              STD_OFF
#define VSECPRIM_RSA_PSS_RIPEMD160_ENABLED                                                          STD_OFF
#define VSECPRIM_RSA_PSS_SHA1_ENABLED                                                               STD_ON
#define VSECPRIM_RSA_PSS_SHA2_256_ENABLED                                                           STD_ON
#define VSECPRIM_RSA_V15_RIPEMD160_ENABLED                                                          STD_OFF
#define VSECPRIM_RSA_V15_SHA1_ENABLED                                                               STD_ON
#define VSECPRIM_RSA_V15_SHA2_256_ENABLED                                                           STD_ON
#define VSECPRIM_ECDSA_25519_ENABLED                                                                STD_OFF
#define VSECPRIM_ECDSA_GENERIC_ENABLED                                                              STD_OFF
#define VSECPRIM_ECDH_25519_ENABLED                                                                 STD_OFF
#define VSECPRIM_ECDH_GENERIC_ENABLED                                                               STD_OFF
#define VSECPRIM_ECBD_GENERIC_ENABLED                                                               STD_OFF
#define VSECPRIM_SPAKE2_P_ENABLED                                                                   STD_OFF
#define VSECPRIM_PKCS5_ENABLED                                                                      STD_OFF
#define VSECPRIM_ANSI_X963_ENABLED                                                                  STD_OFF
#define VSECPRIM_ANSI_X963_SHA256_ENABLED                                                           STD_OFF
#define VSECPRIM_PKCS5_HMAC_SHA256_ENABLED                                                          STD_OFF
#define VSECPRIM_ANSI_X963_SHA512_ENABLED                                                           STD_OFF
#define VSECPRIM_HKDF_HMAC_SHA256_ENABLED                                                           STD_OFF
#define VSECPRIM_HKDF_SHA2_256_ONESTEP_ENABLED                                                      STD_OFF
#define VSECPRIM_RSA_OAEP_SHA1_ENABLED                                                              STD_OFF
#define VSECPRIM_RSA_OAEP_SHA2_256_ENABLED                                                          STD_OFF
#define VSECPRIM_RSA_V15_ENABLED                                                                    STD_OFF
#define VSECPRIM_ECCENABLED                                                                         STD_OFF
#define VSECPRIM_CLEAR_WORKSPACE_ENABLED                                                            STD_OFF
#define VSECPRIM_SUPPORT_UINT64                                                                     STD_ON
#define VSECPRIM_USE_VSTD_LIB                                                                       STD_ON
#define VSECPRIM_DRBG_RESEED_INTERVAL                                                               4294967295u
#define VSECPRIM_SPAKE2_P_MAX_AADSIZE                                                               16u
#define VSECPRIM_SPAKE2_P_PREAMBLE_OKMLENGTH                                                        64u

#define VSECPRIM_SPEED_UP_LEVEL_0                                                                   0x00u
#define VSECPRIM_SPEED_UP_LEVEL_1                                                                   0x01u
#define VSECPRIM_SPEED_UP_LEVEL_2                                                                   0x02u
#define VSECPRIM_SPEED_UP_LEVEL_3                                                                   0x03u
#define VSECPRIM_RSA_MAX_KEY_SIZE_1024                                                              0x00u
#define VSECPRIM_RSA_MAX_KEY_SIZE_1536                                                              0x01u
#define VSECPRIM_RSA_MAX_KEY_SIZE_2048                                                              0x02u
#define VSECPRIM_RSA_MAX_KEY_SIZE_3072                                                              0x03u
#define VSECPRIM_RSA_MAX_KEY_SIZE_4096                                                              0x04u
#define VSECPRIM_RSA_MAX_KEY_SIZE_512                                                               0x05u
#define VSECPRIM_ECP_MAX_KEY_SIZE_160                                                               0x00u
#define VSECPRIM_ECP_MAX_KEY_SIZE_192                                                               0x01u
#define VSECPRIM_ECP_MAX_KEY_SIZE_224                                                               0x02u
#define VSECPRIM_ECP_MAX_KEY_SIZE_256                                                               0x03u
#define VSECPRIM_ECP_MAX_KEY_SIZE_320                                                               0x04u
#define VSECPRIM_ECP_MAX_KEY_SIZE_384                                                               0x05u
#define VSECPRIM_ECP_MAX_KEY_SIZE_512                                                               0x06u
#define VSECPRIM_ECP_MAX_KEY_SIZE_521                                                               0x07u
#define VSECPRIM_WD_LEVEL_0                                                                         0x00u
#define VSECPRIM_WD_LEVEL_1                                                                         0x01u
#define VSECPRIM_WD_LEVEL_2                                                                         0x02u
#define VSECPRIM_WD_LEVEL_3                                                                         0x03u
#define VSECPRIM_SIZE_UINT16                                                                        0x00u
#define VSECPRIM_SIZE_UINT32                                                                        0x01u
#define VSECPRIM_SECURITY_STRENGTH_112                                                              0x00u
#define VSECPRIM_SECURITY_STRENGTH_128                                                              0x01u

#define VSECPRIM_ACT25519UTIL_ENABLED                                                               STD_OFF
#define VSECPRIM_ACTAEAD7539_ENABLED                                                                STD_OFF
#define VSECPRIM_ACTAES_ENABLED                                                                     STD_ON
#define VSECPRIM_ACTBIGNUM_ENABLED                                                                  STD_ON
#define VSECPRIM_ACTBNADD_ENABLED                                                                   STD_ON
#define VSECPRIM_ACTBNDIV2_ENABLED                                                                  STD_OFF
#define VSECPRIM_ACTBNFIELDINVERSION_ENABLED                                                        STD_OFF
#define VSECPRIM_ACTBNMODADD_ENABLED                                                                STD_OFF
#define VSECPRIM_ACTBNMODDIV2_ENABLED                                                               STD_OFF
#define VSECPRIM_ACTBNMODEXP_ENABLED                                                                STD_ON
#define VSECPRIM_ACTBNMODRANDOMIZE_ENABLED                                                          STD_OFF
#define VSECPRIM_ACTBNMODSUB_ENABLED                                                                STD_ON
#define VSECPRIM_ACTBNMONTMUL_ENABLED                                                               STD_ON
#define VSECPRIM_ACTBNMULT_ENABLED                                                                  STD_ON
#define VSECPRIM_ACTBNODDINVMODBASE_ENABLED                                                         STD_ON
#define VSECPRIM_ACTBNREDUCE_ENABLED                                                                STD_ON
#define VSECPRIM_ACTBNSUB_ENABLED                                                                   STD_ON
#define VSECPRIM_ACTCCM_ENABLED                                                                     STD_OFF
#define VSECPRIM_ACTCHACHA20_ENABLED                                                                STD_OFF
#define VSECPRIM_ACTCMACAES_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTCTRDRBG_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTDES_ENABLED                                                                     STD_OFF
#define VSECPRIM_ACTECBD_GENERIC_ENABLED                                                            STD_OFF
#define VSECPRIM_ACTECDH_ENABLED                                                                    STD_OFF
#define VSECPRIM_ACTECDSA_ENABLED                                                                   STD_OFF
#define VSECPRIM_ACTECKEY_ENABLED                                                                   STD_OFF
#define VSECPRIM_ACTECLENGTHINFO_ENABLED                                                            STD_OFF
#define VSECPRIM_ACTECPOINT_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTECTOOLS_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTED25519_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTED25519CORE_ENABLED                                                             STD_OFF
#define VSECPRIM_ACTEXTERNRANDOM_ENABLED                                                            STD_OFF
#define VSECPRIM_ACTFIPS186_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTGCM_ENABLED                                                                     STD_OFF
#define VSECPRIM_ACTGHASH_ENABLED                                                                   STD_OFF
#define VSECPRIM_ACTHASHDRBG_ENABLED                                                                STD_OFF
#define VSECPRIM_ACTHASHMAC_ENABLED                                                                 STD_ON
#define VSECPRIM_ACTHASHMACRMD160_ENABLED                                                           STD_OFF
#define VSECPRIM_ACTHASHMACSHA256_ENABLED                                                           STD_OFF
#define VSECPRIM_ACTHASHMACSHA384_ENABLED                                                           STD_OFF
#define VSECPRIM_ACTHKDFHASHONESTEP_ENABLED                                                         STD_OFF
#define VSECPRIM_ACTHKDFHMACSHA256_ENABLED                                                          STD_OFF
#define VSECPRIM_ACTIAES_ENABLED                                                                    STD_ON
#define VSECPRIM_ACTIECDH_ENABLED                                                                   STD_OFF
#define VSECPRIM_ACTIECDSA_ENABLED                                                                  STD_OFF
#define VSECPRIM_ACTIECKEY_ENABLED                                                                  STD_OFF
#define VSECPRIM_ACTIRSAEXP_ENABLED                                                                 STD_ON
#define VSECPRIM_ACTIRSAPRIVATE_ENABLED                                                             STD_ON
#define VSECPRIM_ACTIRSAPRIVATECRT_ENABLED                                                          STD_ON
#define VSECPRIM_ACTIRSAPUBLIC_ENABLED                                                              STD_ON
#define VSECPRIM_ACTKDF2HMACSHA1_ENABLED                                                            STD_OFF
#define VSECPRIM_ACTKDF2HMACSHA256_ENABLED                                                          STD_OFF
#define VSECPRIM_ACTKDFX963_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTKDFX963SHA256_ENABLED                                                           STD_OFF
#define VSECPRIM_ACTKDFX963SHA512_ENABLED                                                           STD_OFF
#define VSECPRIM_ACTKECCAK_ENABLED                                                                  STD_OFF
#define VSECPRIM_ACTMD5_ENABLED                                                                     STD_OFF
#define VSECPRIM_ACTPADDING_ENABLED                                                                 STD_ON
#define VSECPRIM_ACTPOLY1305_ENABLED                                                                STD_OFF
#define VSECPRIM_ACTRC2_ENABLED                                                                     STD_OFF
#define VSECPRIM_ACTRMD160_ENABLED                                                                  STD_OFF
#define VSECPRIM_ACTSHA_ENABLED                                                                     STD_ON
#define VSECPRIM_ACTSHA2_32_ENABLED                                                                 STD_ON
#define VSECPRIM_ACTSHA2_64_ENABLED                                                                 STD_ON
#define VSECPRIM_ACTSHA3_ENABLED                                                                    STD_OFF
#define VSECPRIM_ACTSIPHASH_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTSPAKE2P_ENABLED                                                                 STD_OFF
#define VSECPRIM_ACTTDES_ENABLED                                                                    STD_OFF
#define VSECPRIM_ACTUTILITIES_ENABLED                                                               STD_ON
#define VSECPRIM_ACTX25519_ENABLED                                                                  STD_OFF
#define VSECPRIM_ACTX25519CORE_ENABLED                                                              STD_OFF
#define VSECPRIM_ESLGETLENGTHECP_ENABLED                                                            STD_OFF
#define VSECPRIM_HASH_ENABLED                                                                       STD_ON

#define VSECPRIM_ANSI_X963ENABLEDOFKEYDERIVATION                                                    STD_ON
#define VSECPRIM_ANSI_X963_SHA256ENABLEDOFKEYDERIVATION                                             STD_ON
#define VSECPRIM_ANSI_X963_SHA512ENABLEDOFKEYDERIVATION                                             STD_ON
#define VSECPRIM_AEADCHACHA20POLY1305ENABLEDOFCIPHER                                                STD_ON
#define VSECPRIM_AES128ENABLEDOFCIPHER                                                              STD_ON
#define VSECPRIM_AES192ENABLEDOFCIPHER                                                              STD_ON
#define VSECPRIM_AES256ENABLEDOFCIPHER                                                              STD_ON
#define VSECPRIM_AESCCMENABLEDOFCIPHER                                                              STD_ON
#define VSECPRIM_AESSPEEDUPOFOPTIMIZATION                                                           STD_ON
#define VSECPRIM_CTRDRBGAES128SECURITYSTRENGTHOFGENERAL                                             STD_ON
#define VSECPRIM_CHACHA20ENABLEDOFCIPHER                                                            STD_ON
#define VSECPRIM_CHACHA20SPEEDUPOFOPTIMIZATION                                                      STD_ON
#define VSECPRIM_CLEARWORKSPACEENABLEDOFGENERAL                                                     STD_ON
#define VSECPRIM_CMACENABLEDOFMAC                                                                   STD_ON
#define VSECPRIM_CTRDRBGENABLEDOFRANDOMNUMBERGENERATION                                             STD_ON
#define VSECPRIM_DESENABLEDOFCIPHER                                                                 STD_ON
#define VSECPRIM_DRBGRESEEDINTERVALOFGENERAL                                                        STD_ON
#define VSECPRIM_ECBD_GENERICENABLEDOFKEYEXCHANGE                                                   STD_ON
#define VSECPRIM_ECCENABLEDOFKEYGENERATION                                                          STD_ON
#define VSECPRIM_ECDH_25519ENABLEDOFKEYEXCHANGE                                                     STD_ON
#define VSECPRIM_ECDH_GENERICENABLEDOFKEYEXCHANGE                                                   STD_ON
#define VSECPRIM_ECDSA_25519ENABLEDOFSIGNATURE                                                      STD_ON
#define VSECPRIM_ECDSA_GENERICENABLEDOFSIGNATURE                                                    STD_ON
#define VSECPRIM_ECPMAXKEYSIZEOFGENERAL                                                             STD_ON
#define VSECPRIM_EXPECTEDCOMPATIBILITYVERSION                                                       STD_OFF
#define VSECPRIM_FIPS186ENABLEDOFRANDOMNUMBERGENERATION                                             STD_ON
#define VSECPRIM_FINALMAGICNUMBER                                                                   STD_OFF
#define VSECPRIM_GMACENABLEDOFMAC                                                                   STD_ON
#define VSECPRIM_GCMENABLEDOFCIPHER                                                                 STD_ON
#define VSECPRIM_GENERATORCOMPATIBILITYVERSION                                                      STD_OFF
#define VSECPRIM_HKDF_HMAC_SHA256ENABLEDOFKEYDERIVATION                                             STD_ON
#define VSECPRIM_HKDF_SHA2_256_ONESTEPENABLEDOFKEYDERIVATION                                        STD_ON
#define VSECPRIM_HMACRMD160ENABLEDOFMAC                                                             STD_ON
#define VSECPRIM_HMACSHA1ENABLEDOFMAC                                                               STD_ON
#define VSECPRIM_HMACSHA2_256ENABLEDOFMAC                                                           STD_ON
#define VSECPRIM_HMACSHA2_384ENABLEDOFMAC                                                           STD_ON
#define VSECPRIM_HASHDRBGENABLEDOFRANDOMNUMBERGENERATION                                            STD_ON
#define VSECPRIM_INITDATAHASHCODE                                                                   STD_OFF
#define VSECPRIM_MD5ENABLEDOFHASH                                                                   STD_ON
#define VSECPRIM_PKCS5ENABLEDOFKEYDERIVATION                                                        STD_ON
#define VSECPRIM_PKCS5HMACSHA256ENABLEDOFKEYDERIVATION                                              STD_ON
#define VSECPRIM_POLY1305ENABLEDOFMAC                                                               STD_ON
#define VSECPRIM_RC2ENABLEDOFCIPHER                                                                 STD_ON
#define VSECPRIM_RIPEMD160ENABLEDOFHASH                                                             STD_ON
#define VSECPRIM_RSAMAXKEYSIZEOFGENERAL                                                             STD_ON
#define VSECPRIM_RSA_OAEP_SHA1ENABLEDOFCIPHER                                                       STD_ON
#define VSECPRIM_RSA_OAEP_SHA2_256ENABLEDOFCIPHER                                                   STD_ON
#define VSECPRIM_RSA_PSS_RIPEMD160ENABLEDOFSIGNATURE                                                STD_ON
#define VSECPRIM_RSA_PSS_SHA1ENABLEDOFSIGNATURE                                                     STD_ON
#define VSECPRIM_RSA_PSS_SHA2_256ENABLEDOFSIGNATURE                                                 STD_ON
#define VSECPRIM_RSA_V15ENABLEDOFCIPHER                                                             STD_ON
#define VSECPRIM_RSA_V15_RIPEMD160ENABLEDOFSIGNATURE                                                STD_ON
#define VSECPRIM_RSA_V15_SHA1ENABLEDOFSIGNATURE                                                     STD_ON
#define VSECPRIM_RSA_V15_SHA2_256ENABLEDOFSIGNATURE                                                 STD_ON
#define VSECPRIM_SHA1ENABLEDOFHASH                                                                  STD_ON
#define VSECPRIM_SHA2_256ENABLEDOFHASH                                                              STD_ON
#define VSECPRIM_SHA2_512ENABLEDOFHASH                                                              STD_ON
#define VSECPRIM_SHA3ENABLEDOFHASH                                                                  STD_ON
#define VSECPRIM_SPAKE2PENABLEDOFKEYEXCHANGE                                                        STD_ON
#define VSECPRIM_SPAKE2PMAXAADSIZEOFGENERAL                                                         STD_ON
#define VSECPRIM_SPAKE2PPREAMBLEOKMLENGTHOFGENERAL                                                  STD_ON
#define VSECPRIM_SHA1SPEEDUPOFOPTIMIZATION                                                          STD_ON
#define VSECPRIM_SHA256SPEEDUPOFOPTIMIZATION                                                        STD_ON
#define VSECPRIM_SHA512SPEEDUPOFOPTIMIZATION                                                        STD_ON
#define VSECPRIM_SIPHASHENABLEDOFMAC                                                                STD_ON
#define VSECPRIM_SIZEOFESLTLENGTHOFGENERAL                                                          STD_ON
#define VSECPRIM_SUPPORTUINT64OFGENERAL                                                             STD_ON
#define VSECPRIM_TDESENABLEDOFCIPHER                                                                STD_ON
#define VSECPRIM_USEVSTDLIBOFGENERAL                                                                STD_ON
#define VSECPRIM_USERCONFIGFILEOFGENERAL                                                            STD_ON
#define VSECPRIM_WATCHDOGLEVELOFGENERAL                                                             STD_ON
#define VSECPRIM_PCCONFIG                                                                           STD_ON
#define VSECPRIM_ANSI_X963ENABLEDOFKEYDERIVATIONOFPCCONFIG                                          STD_ON
#define VSECPRIM_ANSI_X963_SHA256ENABLEDOFKEYDERIVATIONOFPCCONFIG                                   STD_ON
#define VSECPRIM_ANSI_X963_SHA512ENABLEDOFKEYDERIVATIONOFPCCONFIG                                   STD_ON
#define VSECPRIM_AEADCHACHA20POLY1305ENABLEDOFCIPHEROFPCCONFIG                                      STD_ON
#define VSECPRIM_AES128ENABLEDOFCIPHEROFPCCONFIG                                                    STD_ON
#define VSECPRIM_AES192ENABLEDOFCIPHEROFPCCONFIG                                                    STD_ON
#define VSECPRIM_AES256ENABLEDOFCIPHEROFPCCONFIG                                                    STD_ON
#define VSECPRIM_AESCCMENABLEDOFCIPHEROFPCCONFIG                                                    STD_ON
#define VSECPRIM_AESSPEEDUPOFOPTIMIZATIONOFPCCONFIG                                                 STD_ON
#define VSECPRIM_CTRDRBGAES128SECURITYSTRENGTHOFGENERALOFPCCONFIG                                   STD_ON
#define VSECPRIM_CHACHA20ENABLEDOFCIPHEROFPCCONFIG                                                  STD_ON
#define VSECPRIM_CHACHA20SPEEDUPOFOPTIMIZATIONOFPCCONFIG                                            STD_ON
#define VSECPRIM_CLEARWORKSPACEENABLEDOFGENERALOFPCCONFIG                                           STD_ON
#define VSECPRIM_CMACENABLEDOFMACOFPCCONFIG                                                         STD_ON
#define VSECPRIM_CTRDRBGENABLEDOFRANDOMNUMBERGENERATIONOFPCCONFIG                                   STD_ON
#define VSECPRIM_DESENABLEDOFCIPHEROFPCCONFIG                                                       STD_ON
#define VSECPRIM_DRBGRESEEDINTERVALOFGENERALOFPCCONFIG                                              STD_ON
#define VSECPRIM_ECBD_GENERICENABLEDOFKEYEXCHANGEOFPCCONFIG                                         STD_ON
#define VSECPRIM_ECCENABLEDOFKEYGENERATIONOFPCCONFIG                                                STD_ON
#define VSECPRIM_ECDH_25519ENABLEDOFKEYEXCHANGEOFPCCONFIG                                           STD_ON
#define VSECPRIM_ECDH_GENERICENABLEDOFKEYEXCHANGEOFPCCONFIG                                         STD_ON
#define VSECPRIM_ECDSA_25519ENABLEDOFSIGNATUREOFPCCONFIG                                            STD_ON
#define VSECPRIM_ECDSA_GENERICENABLEDOFSIGNATUREOFPCCONFIG                                          STD_ON
#define VSECPRIM_ECPMAXKEYSIZEOFGENERALOFPCCONFIG                                                   STD_ON
#define VSECPRIM_EXPECTEDCOMPATIBILITYVERSIONOFPCCONFIG                                             STD_OFF
#define VSECPRIM_FIPS186ENABLEDOFRANDOMNUMBERGENERATIONOFPCCONFIG                                   STD_ON
#define VSECPRIM_FINALMAGICNUMBEROFPCCONFIG                                                         STD_OFF
#define VSECPRIM_GMACENABLEDOFMACOFPCCONFIG                                                         STD_ON
#define VSECPRIM_GCMENABLEDOFCIPHEROFPCCONFIG                                                       STD_ON
#define VSECPRIM_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                                            STD_OFF
#define VSECPRIM_HKDF_HMAC_SHA256ENABLEDOFKEYDERIVATIONOFPCCONFIG                                   STD_ON
#define VSECPRIM_HKDF_SHA2_256_ONESTEPENABLEDOFKEYDERIVATIONOFPCCONFIG                              STD_ON
#define VSECPRIM_HMACRMD160ENABLEDOFMACOFPCCONFIG                                                   STD_ON
#define VSECPRIM_HMACSHA1ENABLEDOFMACOFPCCONFIG                                                     STD_ON
#define VSECPRIM_HMACSHA2_256ENABLEDOFMACOFPCCONFIG                                                 STD_ON
#define VSECPRIM_HMACSHA2_384ENABLEDOFMACOFPCCONFIG                                                 STD_ON
#define VSECPRIM_HASHDRBGENABLEDOFRANDOMNUMBERGENERATIONOFPCCONFIG                                  STD_ON
#define VSECPRIM_INITDATAHASHCODEOFPCCONFIG                                                         STD_OFF
#define VSECPRIM_MD5ENABLEDOFHASHOFPCCONFIG                                                         STD_ON
#define VSECPRIM_PKCS5ENABLEDOFKEYDERIVATIONOFPCCONFIG                                              STD_ON
#define VSECPRIM_PKCS5HMACSHA256ENABLEDOFKEYDERIVATIONOFPCCONFIG                                    STD_ON
#define VSECPRIM_POLY1305ENABLEDOFMACOFPCCONFIG                                                     STD_ON
#define VSECPRIM_RC2ENABLEDOFCIPHEROFPCCONFIG                                                       STD_ON
#define VSECPRIM_RIPEMD160ENABLEDOFHASHOFPCCONFIG                                                   STD_ON
#define VSECPRIM_RSAMAXKEYSIZEOFGENERALOFPCCONFIG                                                   STD_ON
#define VSECPRIM_RSA_OAEP_SHA1ENABLEDOFCIPHEROFPCCONFIG                                             STD_ON
#define VSECPRIM_RSA_OAEP_SHA2_256ENABLEDOFCIPHEROFPCCONFIG                                         STD_ON
#define VSECPRIM_RSA_PSS_RIPEMD160ENABLEDOFSIGNATUREOFPCCONFIG                                      STD_ON
#define VSECPRIM_RSA_PSS_SHA1ENABLEDOFSIGNATUREOFPCCONFIG                                           STD_ON
#define VSECPRIM_RSA_PSS_SHA2_256ENABLEDOFSIGNATUREOFPCCONFIG                                       STD_ON
#define VSECPRIM_RSA_V15ENABLEDOFCIPHEROFPCCONFIG                                                   STD_ON
#define VSECPRIM_RSA_V15_RIPEMD160ENABLEDOFSIGNATUREOFPCCONFIG                                      STD_ON
#define VSECPRIM_RSA_V15_SHA1ENABLEDOFSIGNATUREOFPCCONFIG                                           STD_ON
#define VSECPRIM_RSA_V15_SHA2_256ENABLEDOFSIGNATUREOFPCCONFIG                                       STD_ON
#define VSECPRIM_SHA1ENABLEDOFHASHOFPCCONFIG                                                        STD_ON
#define VSECPRIM_SHA2_256ENABLEDOFHASHOFPCCONFIG                                                    STD_ON
#define VSECPRIM_SHA2_512ENABLEDOFHASHOFPCCONFIG                                                    STD_ON
#define VSECPRIM_SHA3ENABLEDOFHASHOFPCCONFIG                                                        STD_ON
#define VSECPRIM_SPAKE2PENABLEDOFKEYEXCHANGEOFPCCONFIG                                              STD_ON
#define VSECPRIM_SPAKE2PMAXAADSIZEOFGENERALOFPCCONFIG                                               STD_ON
#define VSECPRIM_SPAKE2PPREAMBLEOKMLENGTHOFGENERALOFPCCONFIG                                        STD_ON
#define VSECPRIM_SHA1SPEEDUPOFOPTIMIZATIONOFPCCONFIG                                                STD_ON
#define VSECPRIM_SHA256SPEEDUPOFOPTIMIZATIONOFPCCONFIG                                              STD_ON
#define VSECPRIM_SHA512SPEEDUPOFOPTIMIZATIONOFPCCONFIG                                              STD_ON
#define VSECPRIM_SIPHASHENABLEDOFMACOFPCCONFIG                                                      STD_ON
#define VSECPRIM_SIZEOFESLTLENGTHOFGENERALOFPCCONFIG                                                STD_ON
#define VSECPRIM_SUPPORTUINT64OFGENERALOFPCCONFIG                                                   STD_ON
#define VSECPRIM_TDESENABLEDOFCIPHEROFPCCONFIG                                                      STD_ON
#define VSECPRIM_USEVSTDLIBOFGENERALOFPCCONFIG                                                      STD_ON
#define VSECPRIM_USERCONFIGFILEOFGENERALOFPCCONFIG                                                  STD_ON
#define VSECPRIM_WATCHDOGLEVELOFGENERALOFPCCONFIG                                                   STD_ON

#define VSECPRIM_NO_EXPECTEDCOMPATIBILITYVERSION                                                    65535u

#define VSECPRIM_ISDEF_EXPECTEDCOMPATIBILITYVERSIONOFPCCONFIG                                       STD_OFF
#define VSECPRIM_ISDEF_FINALMAGICNUMBEROFPCCONFIG                                                   STD_OFF
#define VSECPRIM_ISDEF_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                                      STD_OFF
#define VSECPRIM_ISDEF_INITDATAHASHCODEOFPCCONFIG                                                   STD_OFF

#define VSECPRIM_EQ2_EXPECTEDCOMPATIBILITYVERSIONOFPCCONFIG
#define VSECPRIM_EQ2_FINALMAGICNUMBEROFPCCONFIG
#define VSECPRIM_EQ2_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG
#define VSECPRIM_EQ2_INITDATAHASHCODEOFPCCONFIG

#define vSecPrim_Config_Ptr                                                                         NULL_PTR

#define vSecPrim_Config                                                                             NULL_PTR

#define VSECPRIM_CHECK_INIT_POINTER                                                                 STD_OFF
#define VSECPRIM_FINAL_MAGIC_NUMBER                                                                 0xFF1Eu
#define VSECPRIM_INDIVIDUAL_POSTBUILD                                                               STD_OFF
#define VSECPRIM_INIT_DATA                                                                          VSECPRIM_CONST
#define VSECPRIM_INIT_DATA_HASH_CODE                                                                116981988
#define VSECPRIM_USE_ECUM_BSW_ERROR_HOOK                                                            STD_OFF
#define VSECPRIM_USE_INIT_POINTER                                                                   STD_OFF

#define VSECPRIM_PBCONFIG                                                                           STD_OFF
#define VSECPRIM_LTCONFIGIDXOFPBCONFIG                                                              STD_OFF
#define VSECPRIM_PCCONFIGIDXOFPBCONFIG                                                              STD_OFF

#define VSECPRIM_ISDEF_LTCONFIGIDXOFPBCONFIG                                                        STD_OFF
#define VSECPRIM_ISDEF_PCCONFIGIDXOFPBCONFIG                                                        STD_OFF

#define VSECPRIM_EQ2_LTCONFIGIDXOFPBCONFIG
#define VSECPRIM_EQ2_PCCONFIGIDXOFPBCONFIG

#define vSecPrim_GetExpectedCompatibilityVersionOfPCConfig()
#define vSecPrim_GetFinalMagicNumberOfPCConfig()
#define vSecPrim_GetGeneratorCompatibilityVersionOfPCConfig()
#define vSecPrim_GetInitDataHashCodeOfPCConfig()

#define vSecPrim_IsANSI_X963EnabledOfKeyDerivationOfPCConfig()                                      (((FALSE)) != FALSE)
#define vSecPrim_IsANSI_X963_SHA256EnabledOfKeyDerivationOfPCConfig()                               (((FALSE)) != FALSE)
#define vSecPrim_IsANSI_X963_SHA512EnabledOfKeyDerivationOfPCConfig()                               (((FALSE)) != FALSE)
#define vSecPrim_IsAeadChaCha20Poly1305EnabledOfCipherOfPCConfig()                                  (((FALSE)) != FALSE)
#define vSecPrim_IsAes128EnabledOfCipherOfPCConfig()                                                (((TRUE)) != FALSE)
#define vSecPrim_IsAes192EnabledOfCipherOfPCConfig()                                                (((FALSE)) != FALSE)
#define vSecPrim_IsAes256EnabledOfCipherOfPCConfig()                                                (((FALSE)) != FALSE)
#define vSecPrim_IsAesCcmEnabledOfCipherOfPCConfig()                                                (((FALSE)) != FALSE)
#define vSecPrim_GetAesSpeedUpOfOptimizationOfPCConfig()                                            VSECPRIM_SPEED_UP_LEVEL_3
#define vSecPrim_GetCTRDRBGAES128SecurityStrengthOfGeneralOfPCConfig()                              VSECPRIM_SECURITY_STRENGTH_128
#define vSecPrim_IsChaCha20EnabledOfCipherOfPCConfig()                                              (((FALSE)) != FALSE)
#define vSecPrim_GetChaCha20SpeedUpOfOptimizationOfPCConfig()                                       VSECPRIM_SPEED_UP_LEVEL_1
#define vSecPrim_IsClearWorkspaceEnabledOfGeneralOfPCConfig()                                       (((FALSE)) != FALSE)
#define vSecPrim_IsCmacEnabledOfMacOfPCConfig()                                                     (((FALSE)) != FALSE)
#define vSecPrim_IsCtrDrbgEnabledOfRandomNumberGenerationOfPCConfig()                               (((FALSE)) != FALSE)
#define vSecPrim_IsDesEnabledOfCipherOfPCConfig()                                                   (((FALSE)) != FALSE)
#define vSecPrim_GetDrbgReseedIntervalOfGeneralOfPCConfig()                                         4294967295u
#define vSecPrim_IsECBD_GenericEnabledOfKeyExchangeOfPCConfig()                                     (((FALSE)) != FALSE)
#define vSecPrim_IsECCEnabledOfKeyGenerationOfPCConfig()                                            (((FALSE)) != FALSE)
#define vSecPrim_IsECDH_25519EnabledOfKeyExchangeOfPCConfig()                                       (((FALSE)) != FALSE)
#define vSecPrim_IsECDH_GenericEnabledOfKeyExchangeOfPCConfig()                                     (((FALSE)) != FALSE)
#define vSecPrim_IsECDSA_25519EnabledOfSignatureOfPCConfig()                                        (((FALSE)) != FALSE)
#define vSecPrim_IsECDSA_GenericEnabledOfSignatureOfPCConfig()                                      (((FALSE)) != FALSE)
#define vSecPrim_GetECPMaxKeySizeOfGeneralOfPCConfig()                                              VSECPRIM_ECP_MAX_KEY_SIZE_256
#define vSecPrim_IsFIPS186EnabledOfRandomNumberGenerationOfPCConfig()                               (((FALSE)) != FALSE)
#define vSecPrim_IsGMacEnabledOfMacOfPCConfig()                                                     (((FALSE)) != FALSE)
#define vSecPrim_IsGcmEnabledOfCipherOfPCConfig()                                                   (((FALSE)) != FALSE)
#define vSecPrim_IsHKDF_HMAC_SHA256EnabledOfKeyDerivationOfPCConfig()                               (((FALSE)) != FALSE)
#define vSecPrim_IsHKDF_SHA2_256_OnestepEnabledOfKeyDerivationOfPCConfig()                          (((FALSE)) != FALSE)
#define vSecPrim_IsHMacRMD160EnabledOfMacOfPCConfig()                                               (((FALSE)) != FALSE)
#define vSecPrim_IsHMacSHA1EnabledOfMacOfPCConfig()                                                 (((TRUE)) != FALSE)
#define vSecPrim_IsHMacSHA2_256EnabledOfMacOfPCConfig()                                             (((FALSE)) != FALSE)
#define vSecPrim_IsHMacSHA2_384EnabledOfMacOfPCConfig()                                             (((FALSE)) != FALSE)
#define vSecPrim_IsHashDrbgEnabledOfRandomNumberGenerationOfPCConfig()                              (((FALSE)) != FALSE)
#define vSecPrim_IsMD5EnabledOfHashOfPCConfig()                                                     (((FALSE)) != FALSE)
#define vSecPrim_IsPKCS5EnabledOfKeyDerivationOfPCConfig()                                          (((FALSE)) != FALSE)
#define vSecPrim_IsPKCS5HMacSHA256EnabledOfKeyDerivationOfPCConfig()                                (((FALSE)) != FALSE)
#define vSecPrim_IsPoly1305EnabledOfMacOfPCConfig()                                                 (((FALSE)) != FALSE)
#define vSecPrim_IsRC2EnabledOfCipherOfPCConfig()                                                   (((FALSE)) != FALSE)
#define vSecPrim_IsRIPEMD160EnabledOfHashOfPCConfig()                                               (((FALSE)) != FALSE)
#define vSecPrim_GetRSAMaxKeySizeOfGeneralOfPCConfig()                                              VSECPRIM_RSA_MAX_KEY_SIZE_2048
#define vSecPrim_IsRSA_OAEP_SHA1EnabledOfCipherOfPCConfig()                                         (((FALSE)) != FALSE)
#define vSecPrim_IsRSA_OAEP_SHA2_256EnabledOfCipherOfPCConfig()                                     (((FALSE)) != FALSE)
#define vSecPrim_IsRSA_PSS_RIPEMD160EnabledOfSignatureOfPCConfig()                                  (((FALSE)) != FALSE)
#define vSecPrim_IsRSA_PSS_SHA1EnabledOfSignatureOfPCConfig()                                       (((TRUE)) != FALSE)
#define vSecPrim_IsRSA_PSS_SHA2_256EnabledOfSignatureOfPCConfig()                                   (((TRUE)) != FALSE)
#define vSecPrim_IsRSA_V15EnabledOfCipherOfPCConfig()                                               (((FALSE)) != FALSE)
#define vSecPrim_IsRSA_V15_RIPEMD160EnabledOfSignatureOfPCConfig()                                  (((FALSE)) != FALSE)
#define vSecPrim_IsRSA_V15_SHA1EnabledOfSignatureOfPCConfig()                                       (((TRUE)) != FALSE)
#define vSecPrim_IsRSA_V15_SHA2_256EnabledOfSignatureOfPCConfig()                                   (((TRUE)) != FALSE)
#define vSecPrim_IsSHA1EnabledOfHashOfPCConfig()                                                    (((FALSE)) != FALSE)
#define vSecPrim_IsSHA2_256EnabledOfHashOfPCConfig()                                                (((FALSE)) != FALSE)
#define vSecPrim_IsSHA2_512EnabledOfHashOfPCConfig()                                                (((TRUE)) != FALSE)
#define vSecPrim_IsSHA3EnabledOfHashOfPCConfig()                                                    (((FALSE)) != FALSE)
#define vSecPrim_IsSPAKE2pEnabledOfKeyExchangeOfPCConfig()                                          (((FALSE)) != FALSE)
#define vSecPrim_GetSPAKE2pMaxAADSizeOfGeneralOfPCConfig()                                          16u
#define vSecPrim_GetSPAKE2pPreambleOKMLengthOfGeneralOfPCConfig()                                   64u
#define vSecPrim_GetSha1SpeedUpOfOptimizationOfPCConfig()                                           VSECPRIM_SPEED_UP_LEVEL_1
#define vSecPrim_GetSha256SpeedUpOfOptimizationOfPCConfig()                                         VSECPRIM_SPEED_UP_LEVEL_0
#define vSecPrim_GetSha512SpeedUpOfOptimizationOfPCConfig()                                         VSECPRIM_SPEED_UP_LEVEL_0
#define vSecPrim_IsSipHashEnabledOfMacOfPCConfig()                                                  (((FALSE)) != FALSE)
#define vSecPrim_GetSizeOfEsltLengthOfGeneralOfPCConfig()                                           VSECPRIM_SIZE_UINT32
#define vSecPrim_IsSupportUInt64OfGeneralOfPCConfig()                                               (((TRUE)) != FALSE)
#define vSecPrim_IsTDesEnabledOfCipherOfPCConfig()                                                  (((FALSE)) != FALSE)
#define vSecPrim_IsUseVstdLibOfGeneralOfPCConfig()                                                  (((TRUE)) != FALSE)
#define vSecPrim_GetUserConfigFileOfGeneralOfPCConfig()                                             $(DpaProjectFolder)\Config\vSecPrim_Usr.cfg
#define vSecPrim_GetWatchdogLevelOfGeneralOfPCConfig()                                              VSECPRIM_WD_LEVEL_2

#define vSecPrim_IsANSI_X963EnabledOfKeyDerivation()                                                vSecPrim_IsANSI_X963EnabledOfKeyDerivationOfPCConfig()
#define vSecPrim_IsANSI_X963_SHA256EnabledOfKeyDerivation()                                         vSecPrim_IsANSI_X963_SHA256EnabledOfKeyDerivationOfPCConfig()
#define vSecPrim_IsANSI_X963_SHA512EnabledOfKeyDerivation()                                         vSecPrim_IsANSI_X963_SHA512EnabledOfKeyDerivationOfPCConfig()
#define vSecPrim_IsAeadChaCha20Poly1305EnabledOfCipher()                                            vSecPrim_IsAeadChaCha20Poly1305EnabledOfCipherOfPCConfig()
#define vSecPrim_IsAes128EnabledOfCipher()                                                          vSecPrim_IsAes128EnabledOfCipherOfPCConfig()
#define vSecPrim_IsAes192EnabledOfCipher()                                                          vSecPrim_IsAes192EnabledOfCipherOfPCConfig()
#define vSecPrim_IsAes256EnabledOfCipher()                                                          vSecPrim_IsAes256EnabledOfCipherOfPCConfig()
#define vSecPrim_IsAesCcmEnabledOfCipher()                                                          vSecPrim_IsAesCcmEnabledOfCipherOfPCConfig()
#define vSecPrim_GetAesSpeedUpOfOptimization()                                                      vSecPrim_GetAesSpeedUpOfOptimizationOfPCConfig()
#define vSecPrim_GetCTRDRBGAES128SecurityStrengthOfGeneral()                                        vSecPrim_GetCTRDRBGAES128SecurityStrengthOfGeneralOfPCConfig()
#define vSecPrim_IsChaCha20EnabledOfCipher()                                                        vSecPrim_IsChaCha20EnabledOfCipherOfPCConfig()
#define vSecPrim_GetChaCha20SpeedUpOfOptimization()                                                 vSecPrim_GetChaCha20SpeedUpOfOptimizationOfPCConfig()
#define vSecPrim_IsClearWorkspaceEnabledOfGeneral()                                                 vSecPrim_IsClearWorkspaceEnabledOfGeneralOfPCConfig()
#define vSecPrim_IsCmacEnabledOfMac()                                                               vSecPrim_IsCmacEnabledOfMacOfPCConfig()
#define vSecPrim_IsCtrDrbgEnabledOfRandomNumberGeneration()                                         vSecPrim_IsCtrDrbgEnabledOfRandomNumberGenerationOfPCConfig()
#define vSecPrim_IsDesEnabledOfCipher()                                                             vSecPrim_IsDesEnabledOfCipherOfPCConfig()
#define vSecPrim_GetDrbgReseedIntervalOfGeneral()                                                   vSecPrim_GetDrbgReseedIntervalOfGeneralOfPCConfig()
#define vSecPrim_IsECBD_GenericEnabledOfKeyExchange()                                               vSecPrim_IsECBD_GenericEnabledOfKeyExchangeOfPCConfig()
#define vSecPrim_IsECCEnabledOfKeyGeneration()                                                      vSecPrim_IsECCEnabledOfKeyGenerationOfPCConfig()
#define vSecPrim_IsECDH_25519EnabledOfKeyExchange()                                                 vSecPrim_IsECDH_25519EnabledOfKeyExchangeOfPCConfig()
#define vSecPrim_IsECDH_GenericEnabledOfKeyExchange()                                               vSecPrim_IsECDH_GenericEnabledOfKeyExchangeOfPCConfig()
#define vSecPrim_IsECDSA_25519EnabledOfSignature()                                                  vSecPrim_IsECDSA_25519EnabledOfSignatureOfPCConfig()
#define vSecPrim_IsECDSA_GenericEnabledOfSignature()                                                vSecPrim_IsECDSA_GenericEnabledOfSignatureOfPCConfig()
#define vSecPrim_GetECPMaxKeySizeOfGeneral()                                                        vSecPrim_GetECPMaxKeySizeOfGeneralOfPCConfig()
#define vSecPrim_GetExpectedCompatibilityVersion()
#define vSecPrim_IsFIPS186EnabledOfRandomNumberGeneration()                                         vSecPrim_IsFIPS186EnabledOfRandomNumberGenerationOfPCConfig()
#define vSecPrim_GetFinalMagicNumber()
#define vSecPrim_IsGMacEnabledOfMac()                                                               vSecPrim_IsGMacEnabledOfMacOfPCConfig()
#define vSecPrim_IsGcmEnabledOfCipher()                                                             vSecPrim_IsGcmEnabledOfCipherOfPCConfig()
#define vSecPrim_GetGeneratorCompatibilityVersion()
#define vSecPrim_IsHKDF_HMAC_SHA256EnabledOfKeyDerivation()                                         vSecPrim_IsHKDF_HMAC_SHA256EnabledOfKeyDerivationOfPCConfig()
#define vSecPrim_IsHKDF_SHA2_256_OnestepEnabledOfKeyDerivation()                                    vSecPrim_IsHKDF_SHA2_256_OnestepEnabledOfKeyDerivationOfPCConfig()
#define vSecPrim_IsHMacRMD160EnabledOfMac()                                                         vSecPrim_IsHMacRMD160EnabledOfMacOfPCConfig()
#define vSecPrim_IsHMacSHA1EnabledOfMac()                                                           vSecPrim_IsHMacSHA1EnabledOfMacOfPCConfig()
#define vSecPrim_IsHMacSHA2_256EnabledOfMac()                                                       vSecPrim_IsHMacSHA2_256EnabledOfMacOfPCConfig()
#define vSecPrim_IsHMacSHA2_384EnabledOfMac()                                                       vSecPrim_IsHMacSHA2_384EnabledOfMacOfPCConfig()
#define vSecPrim_IsHashDrbgEnabledOfRandomNumberGeneration()                                        vSecPrim_IsHashDrbgEnabledOfRandomNumberGenerationOfPCConfig()
#define vSecPrim_GetInitDataHashCode()
#define vSecPrim_IsMD5EnabledOfHash()                                                               vSecPrim_IsMD5EnabledOfHashOfPCConfig()
#define vSecPrim_IsPKCS5EnabledOfKeyDerivation()                                                    vSecPrim_IsPKCS5EnabledOfKeyDerivationOfPCConfig()
#define vSecPrim_IsPKCS5HMacSHA256EnabledOfKeyDerivation()                                          vSecPrim_IsPKCS5HMacSHA256EnabledOfKeyDerivationOfPCConfig()
#define vSecPrim_IsPoly1305EnabledOfMac()                                                           vSecPrim_IsPoly1305EnabledOfMacOfPCConfig()
#define vSecPrim_IsRC2EnabledOfCipher()                                                             vSecPrim_IsRC2EnabledOfCipherOfPCConfig()
#define vSecPrim_IsRIPEMD160EnabledOfHash()                                                         vSecPrim_IsRIPEMD160EnabledOfHashOfPCConfig()
#define vSecPrim_GetRSAMaxKeySizeOfGeneral()                                                        vSecPrim_GetRSAMaxKeySizeOfGeneralOfPCConfig()
#define vSecPrim_IsRSA_OAEP_SHA1EnabledOfCipher()                                                   vSecPrim_IsRSA_OAEP_SHA1EnabledOfCipherOfPCConfig()
#define vSecPrim_IsRSA_OAEP_SHA2_256EnabledOfCipher()                                               vSecPrim_IsRSA_OAEP_SHA2_256EnabledOfCipherOfPCConfig()
#define vSecPrim_IsRSA_PSS_RIPEMD160EnabledOfSignature()                                            vSecPrim_IsRSA_PSS_RIPEMD160EnabledOfSignatureOfPCConfig()
#define vSecPrim_IsRSA_PSS_SHA1EnabledOfSignature()                                                 vSecPrim_IsRSA_PSS_SHA1EnabledOfSignatureOfPCConfig()
#define vSecPrim_IsRSA_PSS_SHA2_256EnabledOfSignature()                                             vSecPrim_IsRSA_PSS_SHA2_256EnabledOfSignatureOfPCConfig()
#define vSecPrim_IsRSA_V15EnabledOfCipher()                                                         vSecPrim_IsRSA_V15EnabledOfCipherOfPCConfig()
#define vSecPrim_IsRSA_V15_RIPEMD160EnabledOfSignature()                                            vSecPrim_IsRSA_V15_RIPEMD160EnabledOfSignatureOfPCConfig()
#define vSecPrim_IsRSA_V15_SHA1EnabledOfSignature()                                                 vSecPrim_IsRSA_V15_SHA1EnabledOfSignatureOfPCConfig()
#define vSecPrim_IsRSA_V15_SHA2_256EnabledOfSignature()                                             vSecPrim_IsRSA_V15_SHA2_256EnabledOfSignatureOfPCConfig()
#define vSecPrim_IsSHA1EnabledOfHash()                                                              vSecPrim_IsSHA1EnabledOfHashOfPCConfig()
#define vSecPrim_IsSHA2_256EnabledOfHash()                                                          vSecPrim_IsSHA2_256EnabledOfHashOfPCConfig()
#define vSecPrim_IsSHA2_512EnabledOfHash()                                                          vSecPrim_IsSHA2_512EnabledOfHashOfPCConfig()
#define vSecPrim_IsSHA3EnabledOfHash()                                                              vSecPrim_IsSHA3EnabledOfHashOfPCConfig()
#define vSecPrim_IsSPAKE2pEnabledOfKeyExchange()                                                    vSecPrim_IsSPAKE2pEnabledOfKeyExchangeOfPCConfig()
#define vSecPrim_GetSPAKE2pMaxAADSizeOfGeneral()                                                    vSecPrim_GetSPAKE2pMaxAADSizeOfGeneralOfPCConfig()
#define vSecPrim_GetSPAKE2pPreambleOKMLengthOfGeneral()                                             vSecPrim_GetSPAKE2pPreambleOKMLengthOfGeneralOfPCConfig()
#define vSecPrim_GetSha1SpeedUpOfOptimization()                                                     vSecPrim_GetSha1SpeedUpOfOptimizationOfPCConfig()
#define vSecPrim_GetSha256SpeedUpOfOptimization()                                                   vSecPrim_GetSha256SpeedUpOfOptimizationOfPCConfig()
#define vSecPrim_GetSha512SpeedUpOfOptimization()                                                   vSecPrim_GetSha512SpeedUpOfOptimizationOfPCConfig()
#define vSecPrim_IsSipHashEnabledOfMac()                                                            vSecPrim_IsSipHashEnabledOfMacOfPCConfig()
#define vSecPrim_GetSizeOfEsltLengthOfGeneral()                                                     vSecPrim_GetSizeOfEsltLengthOfGeneralOfPCConfig()
#define vSecPrim_IsSupportUInt64OfGeneral()                                                         vSecPrim_IsSupportUInt64OfGeneralOfPCConfig()
#define vSecPrim_IsTDesEnabledOfCipher()                                                            vSecPrim_IsTDesEnabledOfCipherOfPCConfig()
#define vSecPrim_IsUseVstdLibOfGeneral()                                                            vSecPrim_IsUseVstdLibOfGeneralOfPCConfig()
#define vSecPrim_GetUserConfigFileOfGeneral()                                                       vSecPrim_GetUserConfigFileOfGeneralOfPCConfig()
#define vSecPrim_GetWatchdogLevelOfGeneral()                                                        vSecPrim_GetWatchdogLevelOfGeneralOfPCConfig()

#define vSecPrim_HasANSI_X963EnabledOfKeyDerivation()                                               (TRUE != FALSE)
#define vSecPrim_HasANSI_X963_SHA256EnabledOfKeyDerivation()                                        (TRUE != FALSE)
#define vSecPrim_HasANSI_X963_SHA512EnabledOfKeyDerivation()                                        (TRUE != FALSE)
#define vSecPrim_HasAeadChaCha20Poly1305EnabledOfCipher()                                           (TRUE != FALSE)
#define vSecPrim_HasAes128EnabledOfCipher()                                                         (TRUE != FALSE)
#define vSecPrim_HasAes192EnabledOfCipher()                                                         (TRUE != FALSE)
#define vSecPrim_HasAes256EnabledOfCipher()                                                         (TRUE != FALSE)
#define vSecPrim_HasAesCcmEnabledOfCipher()                                                         (TRUE != FALSE)
#define vSecPrim_HasAesSpeedUpOfOptimization()                                                      (TRUE != FALSE)
#define vSecPrim_HasCTRDRBGAES128SecurityStrengthOfGeneral()                                        (TRUE != FALSE)
#define vSecPrim_HasChaCha20EnabledOfCipher()                                                       (TRUE != FALSE)
#define vSecPrim_HasChaCha20SpeedUpOfOptimization()                                                 (TRUE != FALSE)
#define vSecPrim_HasClearWorkspaceEnabledOfGeneral()                                                (TRUE != FALSE)
#define vSecPrim_HasCmacEnabledOfMac()                                                              (TRUE != FALSE)
#define vSecPrim_HasCtrDrbgEnabledOfRandomNumberGeneration()                                        (TRUE != FALSE)
#define vSecPrim_HasDesEnabledOfCipher()                                                            (TRUE != FALSE)
#define vSecPrim_HasDrbgReseedIntervalOfGeneral()                                                   (TRUE != FALSE)
#define vSecPrim_HasECBD_GenericEnabledOfKeyExchange()                                              (TRUE != FALSE)
#define vSecPrim_HasECCEnabledOfKeyGeneration()                                                     (TRUE != FALSE)
#define vSecPrim_HasECDH_25519EnabledOfKeyExchange()                                                (TRUE != FALSE)
#define vSecPrim_HasECDH_GenericEnabledOfKeyExchange()                                              (TRUE != FALSE)
#define vSecPrim_HasECDSA_25519EnabledOfSignature()                                                 (TRUE != FALSE)
#define vSecPrim_HasECDSA_GenericEnabledOfSignature()                                               (TRUE != FALSE)
#define vSecPrim_HasECPMaxKeySizeOfGeneral()                                                        (TRUE != FALSE)
#define vSecPrim_HasExpectedCompatibilityVersion()
#define vSecPrim_HasFIPS186EnabledOfRandomNumberGeneration()                                        (TRUE != FALSE)
#define vSecPrim_HasFinalMagicNumber()
#define vSecPrim_HasGMacEnabledOfMac()                                                              (TRUE != FALSE)
#define vSecPrim_HasGcmEnabledOfCipher()                                                            (TRUE != FALSE)
#define vSecPrim_HasGeneratorCompatibilityVersion()
#define vSecPrim_HasHKDF_HMAC_SHA256EnabledOfKeyDerivation()                                        (TRUE != FALSE)
#define vSecPrim_HasHKDF_SHA2_256_OnestepEnabledOfKeyDerivation()                                   (TRUE != FALSE)
#define vSecPrim_HasHMacRMD160EnabledOfMac()                                                        (TRUE != FALSE)
#define vSecPrim_HasHMacSHA1EnabledOfMac()                                                          (TRUE != FALSE)
#define vSecPrim_HasHMacSHA2_256EnabledOfMac()                                                      (TRUE != FALSE)
#define vSecPrim_HasHMacSHA2_384EnabledOfMac()                                                      (TRUE != FALSE)
#define vSecPrim_HasHashDrbgEnabledOfRandomNumberGeneration()                                       (TRUE != FALSE)
#define vSecPrim_HasInitDataHashCode()
#define vSecPrim_HasMD5EnabledOfHash()                                                              (TRUE != FALSE)
#define vSecPrim_HasPKCS5EnabledOfKeyDerivation()                                                   (TRUE != FALSE)
#define vSecPrim_HasPKCS5HMacSHA256EnabledOfKeyDerivation()                                         (TRUE != FALSE)
#define vSecPrim_HasPoly1305EnabledOfMac()                                                          (TRUE != FALSE)
#define vSecPrim_HasRC2EnabledOfCipher()                                                            (TRUE != FALSE)
#define vSecPrim_HasRIPEMD160EnabledOfHash()                                                        (TRUE != FALSE)
#define vSecPrim_HasRSAMaxKeySizeOfGeneral()                                                        (TRUE != FALSE)
#define vSecPrim_HasRSA_OAEP_SHA1EnabledOfCipher()                                                  (TRUE != FALSE)
#define vSecPrim_HasRSA_OAEP_SHA2_256EnabledOfCipher()                                              (TRUE != FALSE)
#define vSecPrim_HasRSA_PSS_RIPEMD160EnabledOfSignature()                                           (TRUE != FALSE)
#define vSecPrim_HasRSA_PSS_SHA1EnabledOfSignature()                                                (TRUE != FALSE)
#define vSecPrim_HasRSA_PSS_SHA2_256EnabledOfSignature()                                            (TRUE != FALSE)
#define vSecPrim_HasRSA_V15EnabledOfCipher()                                                        (TRUE != FALSE)
#define vSecPrim_HasRSA_V15_RIPEMD160EnabledOfSignature()                                           (TRUE != FALSE)
#define vSecPrim_HasRSA_V15_SHA1EnabledOfSignature()                                                (TRUE != FALSE)
#define vSecPrim_HasRSA_V15_SHA2_256EnabledOfSignature()                                            (TRUE != FALSE)
#define vSecPrim_HasSHA1EnabledOfHash()                                                             (TRUE != FALSE)
#define vSecPrim_HasSHA2_256EnabledOfHash()                                                         (TRUE != FALSE)
#define vSecPrim_HasSHA2_512EnabledOfHash()                                                         (TRUE != FALSE)
#define vSecPrim_HasSHA3EnabledOfHash()                                                             (TRUE != FALSE)
#define vSecPrim_HasSPAKE2pEnabledOfKeyExchange()                                                   (TRUE != FALSE)
#define vSecPrim_HasSPAKE2pMaxAADSizeOfGeneral()                                                    (TRUE != FALSE)
#define vSecPrim_HasSPAKE2pPreambleOKMLengthOfGeneral()                                             (TRUE != FALSE)
#define vSecPrim_HasSha1SpeedUpOfOptimization()                                                     (TRUE != FALSE)
#define vSecPrim_HasSha256SpeedUpOfOptimization()                                                   (TRUE != FALSE)
#define vSecPrim_HasSha512SpeedUpOfOptimization()                                                   (TRUE != FALSE)
#define vSecPrim_HasSipHashEnabledOfMac()                                                           (TRUE != FALSE)
#define vSecPrim_HasSizeOfEsltLengthOfGeneral()                                                     (TRUE != FALSE)
#define vSecPrim_HasSupportUInt64OfGeneral()                                                        (TRUE != FALSE)
#define vSecPrim_HasTDesEnabledOfCipher()                                                           (TRUE != FALSE)
#define vSecPrim_HasUseVstdLibOfGeneral()                                                           (TRUE != FALSE)
#define vSecPrim_HasUserConfigFileOfGeneral()                                                       (TRUE != FALSE)
#define vSecPrim_HasWatchdogLevelOfGeneral()                                                        (TRUE != FALSE)
#define vSecPrim_HasPCConfig()                                                                      (TRUE != FALSE)
#define vSecPrim_HasANSI_X963EnabledOfKeyDerivationOfPCConfig()                                     (TRUE != FALSE)
#define vSecPrim_HasANSI_X963_SHA256EnabledOfKeyDerivationOfPCConfig()                              (TRUE != FALSE)
#define vSecPrim_HasANSI_X963_SHA512EnabledOfKeyDerivationOfPCConfig()                              (TRUE != FALSE)
#define vSecPrim_HasAeadChaCha20Poly1305EnabledOfCipherOfPCConfig()                                 (TRUE != FALSE)
#define vSecPrim_HasAes128EnabledOfCipherOfPCConfig()                                               (TRUE != FALSE)
#define vSecPrim_HasAes192EnabledOfCipherOfPCConfig()                                               (TRUE != FALSE)
#define vSecPrim_HasAes256EnabledOfCipherOfPCConfig()                                               (TRUE != FALSE)
#define vSecPrim_HasAesCcmEnabledOfCipherOfPCConfig()                                               (TRUE != FALSE)
#define vSecPrim_HasAesSpeedUpOfOptimizationOfPCConfig()                                            (TRUE != FALSE)
#define vSecPrim_HasCTRDRBGAES128SecurityStrengthOfGeneralOfPCConfig()                              (TRUE != FALSE)
#define vSecPrim_HasChaCha20EnabledOfCipherOfPCConfig()                                             (TRUE != FALSE)
#define vSecPrim_HasChaCha20SpeedUpOfOptimizationOfPCConfig()                                       (TRUE != FALSE)
#define vSecPrim_HasClearWorkspaceEnabledOfGeneralOfPCConfig()                                      (TRUE != FALSE)
#define vSecPrim_HasCmacEnabledOfMacOfPCConfig()                                                    (TRUE != FALSE)
#define vSecPrim_HasCtrDrbgEnabledOfRandomNumberGenerationOfPCConfig()                              (TRUE != FALSE)
#define vSecPrim_HasDesEnabledOfCipherOfPCConfig()                                                  (TRUE != FALSE)
#define vSecPrim_HasDrbgReseedIntervalOfGeneralOfPCConfig()                                         (TRUE != FALSE)
#define vSecPrim_HasECBD_GenericEnabledOfKeyExchangeOfPCConfig()                                    (TRUE != FALSE)
#define vSecPrim_HasECCEnabledOfKeyGenerationOfPCConfig()                                           (TRUE != FALSE)
#define vSecPrim_HasECDH_25519EnabledOfKeyExchangeOfPCConfig()                                      (TRUE != FALSE)
#define vSecPrim_HasECDH_GenericEnabledOfKeyExchangeOfPCConfig()                                    (TRUE != FALSE)
#define vSecPrim_HasECDSA_25519EnabledOfSignatureOfPCConfig()                                       (TRUE != FALSE)
#define vSecPrim_HasECDSA_GenericEnabledOfSignatureOfPCConfig()                                     (TRUE != FALSE)
#define vSecPrim_HasECPMaxKeySizeOfGeneralOfPCConfig()                                              (TRUE != FALSE)
#define vSecPrim_HasExpectedCompatibilityVersionOfPCConfig()
#define vSecPrim_HasFIPS186EnabledOfRandomNumberGenerationOfPCConfig()                              (TRUE != FALSE)
#define vSecPrim_HasFinalMagicNumberOfPCConfig()
#define vSecPrim_HasGMacEnabledOfMacOfPCConfig()                                                    (TRUE != FALSE)
#define vSecPrim_HasGcmEnabledOfCipherOfPCConfig()                                                  (TRUE != FALSE)
#define vSecPrim_HasGeneratorCompatibilityVersionOfPCConfig()
#define vSecPrim_HasHKDF_HMAC_SHA256EnabledOfKeyDerivationOfPCConfig()                              (TRUE != FALSE)
#define vSecPrim_HasHKDF_SHA2_256_OnestepEnabledOfKeyDerivationOfPCConfig()                         (TRUE != FALSE)
#define vSecPrim_HasHMacRMD160EnabledOfMacOfPCConfig()                                              (TRUE != FALSE)
#define vSecPrim_HasHMacSHA1EnabledOfMacOfPCConfig()                                                (TRUE != FALSE)
#define vSecPrim_HasHMacSHA2_256EnabledOfMacOfPCConfig()                                            (TRUE != FALSE)
#define vSecPrim_HasHMacSHA2_384EnabledOfMacOfPCConfig()                                            (TRUE != FALSE)
#define vSecPrim_HasHashDrbgEnabledOfRandomNumberGenerationOfPCConfig()                             (TRUE != FALSE)
#define vSecPrim_HasInitDataHashCodeOfPCConfig()
#define vSecPrim_HasMD5EnabledOfHashOfPCConfig()                                                    (TRUE != FALSE)
#define vSecPrim_HasPKCS5EnabledOfKeyDerivationOfPCConfig()                                         (TRUE != FALSE)
#define vSecPrim_HasPKCS5HMacSHA256EnabledOfKeyDerivationOfPCConfig()                               (TRUE != FALSE)
#define vSecPrim_HasPoly1305EnabledOfMacOfPCConfig()                                                (TRUE != FALSE)
#define vSecPrim_HasRC2EnabledOfCipherOfPCConfig()                                                  (TRUE != FALSE)
#define vSecPrim_HasRIPEMD160EnabledOfHashOfPCConfig()                                              (TRUE != FALSE)
#define vSecPrim_HasRSAMaxKeySizeOfGeneralOfPCConfig()                                              (TRUE != FALSE)
#define vSecPrim_HasRSA_OAEP_SHA1EnabledOfCipherOfPCConfig()                                        (TRUE != FALSE)
#define vSecPrim_HasRSA_OAEP_SHA2_256EnabledOfCipherOfPCConfig()                                    (TRUE != FALSE)
#define vSecPrim_HasRSA_PSS_RIPEMD160EnabledOfSignatureOfPCConfig()                                 (TRUE != FALSE)
#define vSecPrim_HasRSA_PSS_SHA1EnabledOfSignatureOfPCConfig()                                      (TRUE != FALSE)
#define vSecPrim_HasRSA_PSS_SHA2_256EnabledOfSignatureOfPCConfig()                                  (TRUE != FALSE)
#define vSecPrim_HasRSA_V15EnabledOfCipherOfPCConfig()                                              (TRUE != FALSE)
#define vSecPrim_HasRSA_V15_RIPEMD160EnabledOfSignatureOfPCConfig()                                 (TRUE != FALSE)
#define vSecPrim_HasRSA_V15_SHA1EnabledOfSignatureOfPCConfig()                                      (TRUE != FALSE)
#define vSecPrim_HasRSA_V15_SHA2_256EnabledOfSignatureOfPCConfig()                                  (TRUE != FALSE)
#define vSecPrim_HasSHA1EnabledOfHashOfPCConfig()                                                   (TRUE != FALSE)
#define vSecPrim_HasSHA2_256EnabledOfHashOfPCConfig()                                               (TRUE != FALSE)
#define vSecPrim_HasSHA2_512EnabledOfHashOfPCConfig()                                               (TRUE != FALSE)
#define vSecPrim_HasSHA3EnabledOfHashOfPCConfig()                                                   (TRUE != FALSE)
#define vSecPrim_HasSPAKE2pEnabledOfKeyExchangeOfPCConfig()                                         (TRUE != FALSE)
#define vSecPrim_HasSPAKE2pMaxAADSizeOfGeneralOfPCConfig()                                          (TRUE != FALSE)
#define vSecPrim_HasSPAKE2pPreambleOKMLengthOfGeneralOfPCConfig()                                   (TRUE != FALSE)
#define vSecPrim_HasSha1SpeedUpOfOptimizationOfPCConfig()                                           (TRUE != FALSE)
#define vSecPrim_HasSha256SpeedUpOfOptimizationOfPCConfig()                                         (TRUE != FALSE)
#define vSecPrim_HasSha512SpeedUpOfOptimizationOfPCConfig()                                         (TRUE != FALSE)
#define vSecPrim_HasSipHashEnabledOfMacOfPCConfig()                                                 (TRUE != FALSE)
#define vSecPrim_HasSizeOfEsltLengthOfGeneralOfPCConfig()                                           (TRUE != FALSE)
#define vSecPrim_HasSupportUInt64OfGeneralOfPCConfig()                                              (TRUE != FALSE)
#define vSecPrim_HasTDesEnabledOfCipherOfPCConfig()                                                 (TRUE != FALSE)
#define vSecPrim_HasUseVstdLibOfGeneralOfPCConfig()                                                 (TRUE != FALSE)
#define vSecPrim_HasUserConfigFileOfGeneralOfPCConfig()                                             (TRUE != FALSE)
#define vSecPrim_HasWatchdogLevelOfGeneralOfPCConfig()                                              (TRUE != FALSE)

#define vSecPrim_GetLTConfigIdxOfPBConfig()
#define vSecPrim_GetPCConfigIdxOfPBConfig()

#define vSecPrim_HasPBConfig()
#define vSecPrim_HasLTConfigIdxOfPBConfig()
#define vSecPrim_HasPCConfigIdxOfPBConfig()

#ifndef actLOW_BYTE

#define actLOW_BYTE(x)                                               (x)
#endif

typedef boolean vSecPrim_ANSI_X963EnabledOfKeyDerivationType;

typedef boolean vSecPrim_ANSI_X963_SHA256EnabledOfKeyDerivationType;

typedef boolean vSecPrim_ANSI_X963_SHA512EnabledOfKeyDerivationType;

typedef boolean vSecPrim_AeadChaCha20Poly1305EnabledOfCipherType;

typedef boolean vSecPrim_Aes128EnabledOfCipherType;

typedef boolean vSecPrim_Aes192EnabledOfCipherType;

typedef boolean vSecPrim_Aes256EnabledOfCipherType;

typedef boolean vSecPrim_AesCcmEnabledOfCipherType;

typedef uint8 vSecPrim_AesSpeedUpOfOptimizationType;

typedef uint8 vSecPrim_CTRDRBGAES128SecurityStrengthOfGeneralType;

typedef boolean vSecPrim_ChaCha20EnabledOfCipherType;

typedef uint8 vSecPrim_ChaCha20SpeedUpOfOptimizationType;

typedef boolean vSecPrim_ClearWorkspaceEnabledOfGeneralType;

typedef boolean vSecPrim_CmacEnabledOfMacType;

typedef boolean vSecPrim_CtrDrbgEnabledOfRandomNumberGenerationType;

typedef boolean vSecPrim_DesEnabledOfCipherType;

typedef uint32 vSecPrim_DrbgReseedIntervalOfGeneralType;

typedef boolean vSecPrim_ECBD_GenericEnabledOfKeyExchangeType;

typedef boolean vSecPrim_ECCEnabledOfKeyGenerationType;

typedef boolean vSecPrim_ECDH_25519EnabledOfKeyExchangeType;

typedef boolean vSecPrim_ECDH_GenericEnabledOfKeyExchangeType;

typedef boolean vSecPrim_ECDSA_25519EnabledOfSignatureType;

typedef boolean vSecPrim_ECDSA_GenericEnabledOfSignatureType;

typedef uint8 vSecPrim_ECPMaxKeySizeOfGeneralType;

typedef boolean vSecPrim_FIPS186EnabledOfRandomNumberGenerationType;

typedef boolean vSecPrim_GMacEnabledOfMacType;

typedef boolean vSecPrim_GcmEnabledOfCipherType;

typedef boolean vSecPrim_HKDF_HMAC_SHA256EnabledOfKeyDerivationType;

typedef boolean vSecPrim_HKDF_SHA2_256_OnestepEnabledOfKeyDerivationType;

typedef boolean vSecPrim_HMacRMD160EnabledOfMacType;

typedef boolean vSecPrim_HMacSHA1EnabledOfMacType;

typedef boolean vSecPrim_HMacSHA2_256EnabledOfMacType;

typedef boolean vSecPrim_HMacSHA2_384EnabledOfMacType;

typedef boolean vSecPrim_HashDrbgEnabledOfRandomNumberGenerationType;

typedef boolean vSecPrim_MD5EnabledOfHashType;

typedef boolean vSecPrim_PKCS5EnabledOfKeyDerivationType;

typedef boolean vSecPrim_PKCS5HMacSHA256EnabledOfKeyDerivationType;

typedef boolean vSecPrim_Poly1305EnabledOfMacType;

typedef boolean vSecPrim_RC2EnabledOfCipherType;

typedef boolean vSecPrim_RIPEMD160EnabledOfHashType;

typedef uint8 vSecPrim_RSAMaxKeySizeOfGeneralType;

typedef boolean vSecPrim_RSA_OAEP_SHA1EnabledOfCipherType;

typedef boolean vSecPrim_RSA_OAEP_SHA2_256EnabledOfCipherType;

typedef boolean vSecPrim_RSA_PSS_RIPEMD160EnabledOfSignatureType;

typedef boolean vSecPrim_RSA_PSS_SHA1EnabledOfSignatureType;

typedef boolean vSecPrim_RSA_PSS_SHA2_256EnabledOfSignatureType;

typedef boolean vSecPrim_RSA_V15EnabledOfCipherType;

typedef boolean vSecPrim_RSA_V15_RIPEMD160EnabledOfSignatureType;

typedef boolean vSecPrim_RSA_V15_SHA1EnabledOfSignatureType;

typedef boolean vSecPrim_RSA_V15_SHA2_256EnabledOfSignatureType;

typedef boolean vSecPrim_SHA1EnabledOfHashType;

typedef boolean vSecPrim_SHA2_256EnabledOfHashType;

typedef boolean vSecPrim_SHA2_512EnabledOfHashType;

typedef boolean vSecPrim_SHA3EnabledOfHashType;

typedef boolean vSecPrim_SPAKE2pEnabledOfKeyExchangeType;

typedef uint8 vSecPrim_SPAKE2pMaxAADSizeOfGeneralType;

typedef uint8 vSecPrim_SPAKE2pPreambleOKMLengthOfGeneralType;

typedef uint8 vSecPrim_Sha1SpeedUpOfOptimizationType;

typedef uint8 vSecPrim_Sha256SpeedUpOfOptimizationType;

typedef uint8 vSecPrim_Sha512SpeedUpOfOptimizationType;

typedef boolean vSecPrim_SipHashEnabledOfMacType;

typedef uint8 vSecPrim_SizeOfEsltLengthOfGeneralType;

typedef boolean vSecPrim_SupportUInt64OfGeneralType;

typedef boolean vSecPrim_TDesEnabledOfCipherType;

typedef boolean vSecPrim_UseVstdLibOfGeneralType;

typedef uint32 vSecPrim_UserConfigFileOfGeneralType;

typedef uint8 vSecPrim_WatchdogLevelOfGeneralType;

typedef P2CONST(vSecPrim_AesSpeedUpOfOptimizationType, TYPEDEF, VSECPRIM_CONST) vSecPrim_AesSpeedUpOfOptimizationOfPCConfigPtrType;

typedef P2CONST(vSecPrim_CTRDRBGAES128SecurityStrengthOfGeneralType, TYPEDEF, VSECPRIM_CONST) vSecPrim_CTRDRBGAES128SecurityStrengthOfGeneralOfPCConfigPtrType;

typedef P2CONST(vSecPrim_ChaCha20SpeedUpOfOptimizationType, TYPEDEF, VSECPRIM_CONST) vSecPrim_ChaCha20SpeedUpOfOptimizationOfPCConfigPtrType;

typedef P2CONST(vSecPrim_ECPMaxKeySizeOfGeneralType, TYPEDEF, VSECPRIM_CONST) vSecPrim_ECPMaxKeySizeOfGeneralOfPCConfigPtrType;

typedef P2CONST(vSecPrim_RSAMaxKeySizeOfGeneralType, TYPEDEF, VSECPRIM_CONST) vSecPrim_RSAMaxKeySizeOfGeneralOfPCConfigPtrType;

typedef P2CONST(vSecPrim_Sha1SpeedUpOfOptimizationType, TYPEDEF, VSECPRIM_CONST) vSecPrim_Sha1SpeedUpOfOptimizationOfPCConfigPtrType;

typedef P2CONST(vSecPrim_Sha256SpeedUpOfOptimizationType, TYPEDEF, VSECPRIM_CONST) vSecPrim_Sha256SpeedUpOfOptimizationOfPCConfigPtrType;

typedef P2CONST(vSecPrim_Sha512SpeedUpOfOptimizationType, TYPEDEF, VSECPRIM_CONST) vSecPrim_Sha512SpeedUpOfOptimizationOfPCConfigPtrType;

typedef P2CONST(vSecPrim_SizeOfEsltLengthOfGeneralType, TYPEDEF, VSECPRIM_CONST) vSecPrim_SizeOfEsltLengthOfGeneralOfPCConfigPtrType;

typedef P2CONST(vSecPrim_UserConfigFileOfGeneralType, TYPEDEF, VSECPRIM_CONST) vSecPrim_UserConfigFileOfGeneralOfPCConfigPtrType;

typedef P2CONST(vSecPrim_WatchdogLevelOfGeneralType, TYPEDEF, VSECPRIM_CONST) vSecPrim_WatchdogLevelOfGeneralOfPCConfigPtrType;

typedef struct svSecPrim_PCConfigType{
  uint8 vSecPrim_PCConfigNeverUsed;
}vSecPrim_PCConfigType;

typedef vSecPrim_PCConfigType vSecPrim_ConfigType;

#if !defined (VSECPRIM_NOUNIT_CSLUNIT)

#endif

#define VSECPRIM_FUNC_NULL_PTR                FblLookForWatchdogVoid

#include "fbl_inc.hpp"
#include "actPlatformTypes.hpp"
#include "CfgSwcServiceSecPrim.hpp"

#endif


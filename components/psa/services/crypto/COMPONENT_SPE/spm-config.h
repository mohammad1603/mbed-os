/**
 * \file spm-config.h
 * \brief Configuration file defines the flags found in the dependency list 
 * of the PSA Crypto tests.
 
 * This file will be used by the python script as "MBEDTLS_USER_CONFIG_FILE"
 * for the mbedtls library in mbed-os in order to be able to run all the tests
 * of PSA Crypto tets.
 */

#ifndef PS_CRYPTO_SPM_CONFIG
#define PS_CRYPTO_SPM_CONFIG


#ifndef MBEDTLS_PSA_CRYPTO_C
#define MBEDTLS_PSA_CRYPTO_C
#endif

// #ifndef MBEDTLS_PSA_CRYPTO_SPM
// #define MBEDTLS_PSA_CRYPTO_SPM
// #endif

#ifndef MBEDTLS_DES_C
#define MBEDTLS_DES_C
#endif

#ifndef MBEDTLS_GENPRIME
#define MBEDTLS_GENPRIME
#endif

#ifndef MBEDTLS_CIPHER_MODE_CBC
#define MBEDTLS_CIPHER_MODE_CBC
#endif

#ifndef MBEDTLS_ECP_DP_BP512R1_ENABLED
#define MBEDTLS_ECP_DP_BP512R1_ENABLED
#endif

#ifndef MBEDTLS_ECP_DP_BP384R1_ENABLED
#define MBEDTLS_ECP_DP_BP384R1_ENABLED
#endif

#ifndef MBEDTLS_CIPHER_MODE_CTR
#define MBEDTLS_CIPHER_MODE_CTR
#endif

#ifndef MBEDTLS_PKCS1_V21
#define MBEDTLS_PKCS1_V21
#endif

#ifndef MBEDTLS_PK_PARSE_C
#define MBEDTLS_PK_PARSE_C
#endif

#ifndef MBEDTLS_MD_C
#define MBEDTLS_MD_C
#endif

#ifndef MBEDTLS_SHA1_C
#define MBEDTLS_SHA1_C
#endif

#ifndef MBEDTLS_CIPHER_MODE_CTR
#define MBEDTLS_CIPHER_MODE_CTR
#endif

#ifndef MBEDTLS_ARC4_C
#define MBEDTLS_ARC4_C
#endif

#endif /* PS_CRYPTO_SPM_CONFIG */

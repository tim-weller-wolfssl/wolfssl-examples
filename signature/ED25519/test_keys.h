/* certs_test.h */

#ifndef WOLFSSL_CERTS_TEST_H
#define WOLFSSL_CERTS_TEST_H

#ifdef USE_CERT_BUFFERS_ED

/* ./ed_pub_test_key.der, (32/64)-bit */
static const unsigned char ed_pub_key_der_32[] =
{
	0x99, 0xB8, 0x8B, 0x6D, 0x14, 0x0D, 0xD9, 0xD4, 0x83, 0xA3, 
	0x7C, 0x82, 0x48, 0xE8, 0x01, 0xEC, 0x2E, 0xD2, 0x64, 0xD9, 
	0x2F, 0xEF, 0x8D, 0xE7, 0x43, 0xB4, 0xC8, 0x0D, 0x63, 0x38, 
	0xF1, 0x8F
};
static const int sizeof_ed_pub_key_der_32 = sizeof(ed_pub_key_der_32);

/* ./ed_priv_test_key.der, (32/64)-bit */
static const unsigned char ed_priv_key_der_64[] =
{
	0x4D, 0x32, 0xF1, 0xF9, 0xD5, 0xFD, 0xDB, 0xB6, 0x01, 0xAB, 
	0xD1, 0x1F, 0xEB, 0x10, 0xCB, 0xA3, 0x5F, 0x92, 0x7F, 0x50, 
	0x4B, 0xCD, 0x71, 0x83, 0xDF, 0x42, 0xBE, 0xF7, 0xAE, 0x78, 
	0x90, 0x5E, 0x99, 0xB8, 0x8B, 0x6D, 0x14, 0x0D, 0xD9, 0xD4, 
	0x83, 0xA3, 0x7C, 0x82, 0x48, 0xE8, 0x01, 0xEC, 0x2E, 0xD2, 
	0x64, 0xD9, 0x2F, 0xEF, 0x8D, 0xE7, 0x43, 0xB4, 0xC8, 0x0D, 
	0x63, 0x38, 0xF1, 0x8F
};
static const int sizeof_ed_priv_key_der_64 = sizeof(ed_priv_key_der_64);

#endif /* USE_CERT_BUFFERS_ED */

#endif /* WOLFSSL_CERTS_TEST_H */


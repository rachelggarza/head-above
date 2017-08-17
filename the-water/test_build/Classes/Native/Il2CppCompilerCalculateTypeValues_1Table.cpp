#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Hashtable
struct Hashtable_t495704637;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3128486386;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3742608460;
// Mono.Security.ASN1
struct ASN1_t794248276;
// System.Collections.IEnumerator
struct IEnumerator_t580101646;
// System.Byte[]
struct ByteU5BU5D_t3211447327;
// System.Collections.ArrayList
struct ArrayList_t1155359356;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t214893434;
// System.IntPtr[]
struct IntPtrU5BU5D_t1869361681;
// System.Collections.IDictionary
struct IDictionary_t1585172076;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2354607141;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3633337011;
// Mono.Security.X509.X509Stores
struct X509Stores_t4122901616;
// Mono.Security.X509.X509Store
struct X509Store_t3332514910;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t471155258;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t122983661;
// System.Security.Cryptography.RSA
struct RSA_t765183856;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t668688375;
// System.IO.TextReader
struct TextReader_t1914077602;
// System.Collections.Stack
struct Stack_t3827704391;
// System.Text.StringBuilder
struct StringBuilder_t1948519031;
// System.Char[]
struct CharU5BU5D_t3680385359;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t2804421211;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3128442365;
// System.Security.Cryptography.CspParameters
struct CspParameters_t2845097780;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1901406455;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t2568162817;
// System.Globalization.TextInfo
struct TextInfo_t900078414;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t3966590323;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t3119464888;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t2416891939;
// System.Byte
struct Byte_t534264762;
// Mono.Globalization.Unicode.TailoringInfo[]
struct TailoringInfoU5BU5D_t2494201537;
// System.UInt32[]
struct UInt32U5BU5D_t3268503027;
// Mono.Math.BigInteger
struct BigInteger_t2833572241;
// Mono.Globalization.Unicode.CodePointIndexer/TableRange[]
struct TableRangeU5BU5D_t2537401623;
// System.IO.FileStream
struct FileStream_t2808603896;
// System.Security.SecurityElement
struct SecurityElement_t1747637791;
// System.Void
struct Void_t669509276;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3788393282;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1498806477;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3763405038;
// System.String[]
struct StringU5BU5D_t421393138;
// System.Int32[]
struct Int32U5BU5D_t617919100;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1520280087;
// System.Security.Cryptography.DSA
struct DSA_t2517477956;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t682619128;
// System.EventArgs
struct EventArgs_t1682362798;
// System.IAsyncResult
struct IAsyncResult_t1592075193;
// System.AsyncCallback
struct AsyncCallback_t2650920735;
// Mono.Security.X509.X509Chain
struct X509Chain_t2237044077;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef KEYHANDLER_T1067155208_H
#define KEYHANDLER_T1067155208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.KeyHandler
struct  KeyHandler_t1067155208  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.KeyHandler::Dir
	String_t* ___Dir_2;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::values
	Hashtable_t495704637 * ___values_3;
	// System.String Microsoft.Win32.KeyHandler::file
	String_t* ___file_4;
	// System.Boolean Microsoft.Win32.KeyHandler::dirty
	bool ___dirty_5;

public:
	inline static int32_t get_offset_of_Dir_2() { return static_cast<int32_t>(offsetof(KeyHandler_t1067155208, ___Dir_2)); }
	inline String_t* get_Dir_2() const { return ___Dir_2; }
	inline String_t** get_address_of_Dir_2() { return &___Dir_2; }
	inline void set_Dir_2(String_t* value)
	{
		___Dir_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dir_2), value);
	}

	inline static int32_t get_offset_of_values_3() { return static_cast<int32_t>(offsetof(KeyHandler_t1067155208, ___values_3)); }
	inline Hashtable_t495704637 * get_values_3() const { return ___values_3; }
	inline Hashtable_t495704637 ** get_address_of_values_3() { return &___values_3; }
	inline void set_values_3(Hashtable_t495704637 * value)
	{
		___values_3 = value;
		Il2CppCodeGenWriteBarrier((&___values_3), value);
	}

	inline static int32_t get_offset_of_file_4() { return static_cast<int32_t>(offsetof(KeyHandler_t1067155208, ___file_4)); }
	inline String_t* get_file_4() const { return ___file_4; }
	inline String_t** get_address_of_file_4() { return &___file_4; }
	inline void set_file_4(String_t* value)
	{
		___file_4 = value;
		Il2CppCodeGenWriteBarrier((&___file_4), value);
	}

	inline static int32_t get_offset_of_dirty_5() { return static_cast<int32_t>(offsetof(KeyHandler_t1067155208, ___dirty_5)); }
	inline bool get_dirty_5() const { return ___dirty_5; }
	inline bool* get_address_of_dirty_5() { return &___dirty_5; }
	inline void set_dirty_5(bool value)
	{
		___dirty_5 = value;
	}
};

struct KeyHandler_t1067155208_StaticFields
{
public:
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::key_to_handler
	Hashtable_t495704637 * ___key_to_handler_0;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::dir_to_handler
	Hashtable_t495704637 * ___dir_to_handler_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Microsoft.Win32.KeyHandler::<>f__switch$map1
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map1_6;

public:
	inline static int32_t get_offset_of_key_to_handler_0() { return static_cast<int32_t>(offsetof(KeyHandler_t1067155208_StaticFields, ___key_to_handler_0)); }
	inline Hashtable_t495704637 * get_key_to_handler_0() const { return ___key_to_handler_0; }
	inline Hashtable_t495704637 ** get_address_of_key_to_handler_0() { return &___key_to_handler_0; }
	inline void set_key_to_handler_0(Hashtable_t495704637 * value)
	{
		___key_to_handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_to_handler_0), value);
	}

	inline static int32_t get_offset_of_dir_to_handler_1() { return static_cast<int32_t>(offsetof(KeyHandler_t1067155208_StaticFields, ___dir_to_handler_1)); }
	inline Hashtable_t495704637 * get_dir_to_handler_1() const { return ___dir_to_handler_1; }
	inline Hashtable_t495704637 ** get_address_of_dir_to_handler_1() { return &___dir_to_handler_1; }
	inline void set_dir_to_handler_1(Hashtable_t495704637 * value)
	{
		___dir_to_handler_1 = value;
		Il2CppCodeGenWriteBarrier((&___dir_to_handler_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_6() { return static_cast<int32_t>(offsetof(KeyHandler_t1067155208_StaticFields, ___U3CU3Ef__switchU24map1_6)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map1_6() const { return ___U3CU3Ef__switchU24map1_6; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map1_6() { return &___U3CU3Ef__switchU24map1_6; }
	inline void set_U3CU3Ef__switchU24map1_6(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYHANDLER_T1067155208_H
#ifndef X509STORE_T3332514910_H
#define X509STORE_T3332514910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t3332514910  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t3742608460 * ____certificates_1;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_2;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t3332514910, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t3332514910, ____certificates_1)); }
	inline X509CertificateCollection_t3742608460 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t3742608460 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t3742608460 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crl_2() { return static_cast<int32_t>(offsetof(X509Store_t3332514910, ____crl_2)); }
	inline bool get__crl_2() const { return ____crl_2; }
	inline bool* get_address_of__crl_2() { return &____crl_2; }
	inline void set__crl_2(bool value)
	{
		____crl_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T3332514910_H
#ifndef X509EXTENSION_T2466191591_H
#define X509EXTENSION_T2466191591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t2466191591  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t794248276 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t2466191591, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t2466191591, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t2466191591, ___extnValue_2)); }
	inline ASN1_t794248276 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t794248276 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t794248276 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T2466191591_H
#ifndef X509CERTIFICATEENUMERATOR_T3716631709_H
#define X509CERTIFICATEENUMERATOR_T3716631709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3716631709  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3716631709, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3716631709_H
#ifndef X501_T3820828930_H
#define X501_T3820828930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t3820828930  : public RuntimeObject
{
public:

public:
};

struct X501_t3820828930_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t3211447327* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t3211447327* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t3211447327* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t3211447327* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t3211447327* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t3211447327* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t3211447327* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t3211447327* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t3211447327* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t3211447327* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t3211447327* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t3211447327* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t3211447327* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t3211447327* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t3211447327* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t3211447327* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t3211447327* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t3211447327* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t3211447327* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t3211447327* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t3211447327* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t3211447327* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t3211447327** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t3211447327* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t3211447327* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t3211447327* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t3211447327* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t3211447327** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t3211447327* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t3211447327* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t3211447327** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t3211447327* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t3211447327* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t3211447327** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t3211447327* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t3211447327* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t3211447327** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t3211447327* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t3211447327* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t3211447327** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t3211447327* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t3211447327* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t3211447327** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t3211447327* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t3211447327* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t3211447327** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t3211447327* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t3211447327* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t3211447327** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t3211447327* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t3211447327* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t3211447327** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t3211447327* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t3820828930_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t3211447327* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t3211447327** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t3211447327* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T3820828930_H
#ifndef DERIVEBYTES_T2262949376_H
#define DERIVEBYTES_T2262949376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t2262949376  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t3211447327* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t3211447327* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t2262949376, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t2262949376, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t2262949376, ____password_5)); }
	inline ByteU5BU5D_t3211447327* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t3211447327** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t3211447327* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t2262949376, ____salt_6)); }
	inline ByteU5BU5D_t3211447327* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t3211447327** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t3211447327* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t2262949376_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t3211447327* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t3211447327* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t3211447327* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t2262949376_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t3211447327* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t3211447327* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t2262949376_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t3211447327* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t3211447327* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t2262949376_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t3211447327* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t3211447327* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2262949376_H
#ifndef PKCS12_T2230622237_H
#define PKCS12_T2230622237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t2230622237  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t3211447327* ____password_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t1155359356 * ____keyBags_2;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t1155359356 * ____secretBags_3;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t3742608460 * ____certs_4;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_6;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_7;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_8;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t1155359356 * ____safeBags_9;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t214893434 * ____rng_10;

public:
	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____password_1)); }
	inline ByteU5BU5D_t3211447327* get__password_1() const { return ____password_1; }
	inline ByteU5BU5D_t3211447327** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(ByteU5BU5D_t3211447327* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier((&____password_1), value);
	}

	inline static int32_t get_offset_of__keyBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____keyBags_2)); }
	inline ArrayList_t1155359356 * get__keyBags_2() const { return ____keyBags_2; }
	inline ArrayList_t1155359356 ** get_address_of__keyBags_2() { return &____keyBags_2; }
	inline void set__keyBags_2(ArrayList_t1155359356 * value)
	{
		____keyBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_2), value);
	}

	inline static int32_t get_offset_of__secretBags_3() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____secretBags_3)); }
	inline ArrayList_t1155359356 * get__secretBags_3() const { return ____secretBags_3; }
	inline ArrayList_t1155359356 ** get_address_of__secretBags_3() { return &____secretBags_3; }
	inline void set__secretBags_3(ArrayList_t1155359356 * value)
	{
		____secretBags_3 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_3), value);
	}

	inline static int32_t get_offset_of__certs_4() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____certs_4)); }
	inline X509CertificateCollection_t3742608460 * get__certs_4() const { return ____certs_4; }
	inline X509CertificateCollection_t3742608460 ** get_address_of__certs_4() { return &____certs_4; }
	inline void set__certs_4(X509CertificateCollection_t3742608460 * value)
	{
		____certs_4 = value;
		Il2CppCodeGenWriteBarrier((&____certs_4), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____keyBagsChanged_5)); }
	inline bool get__keyBagsChanged_5() const { return ____keyBagsChanged_5; }
	inline bool* get_address_of__keyBagsChanged_5() { return &____keyBagsChanged_5; }
	inline void set__keyBagsChanged_5(bool value)
	{
		____keyBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____secretBagsChanged_6)); }
	inline bool get__secretBagsChanged_6() const { return ____secretBagsChanged_6; }
	inline bool* get_address_of__secretBagsChanged_6() { return &____secretBagsChanged_6; }
	inline void set__secretBagsChanged_6(bool value)
	{
		____secretBagsChanged_6 = value;
	}

	inline static int32_t get_offset_of__certsChanged_7() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____certsChanged_7)); }
	inline bool get__certsChanged_7() const { return ____certsChanged_7; }
	inline bool* get_address_of__certsChanged_7() { return &____certsChanged_7; }
	inline void set__certsChanged_7(bool value)
	{
		____certsChanged_7 = value;
	}

	inline static int32_t get_offset_of__iterations_8() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____iterations_8)); }
	inline int32_t get__iterations_8() const { return ____iterations_8; }
	inline int32_t* get_address_of__iterations_8() { return &____iterations_8; }
	inline void set__iterations_8(int32_t value)
	{
		____iterations_8 = value;
	}

	inline static int32_t get_offset_of__safeBags_9() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____safeBags_9)); }
	inline ArrayList_t1155359356 * get__safeBags_9() const { return ____safeBags_9; }
	inline ArrayList_t1155359356 ** get_address_of__safeBags_9() { return &____safeBags_9; }
	inline void set__safeBags_9(ArrayList_t1155359356 * value)
	{
		____safeBags_9 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_9), value);
	}

	inline static int32_t get_offset_of__rng_10() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237, ____rng_10)); }
	inline RandomNumberGenerator_t214893434 * get__rng_10() const { return ____rng_10; }
	inline RandomNumberGenerator_t214893434 ** get_address_of__rng_10() { return &____rng_10; }
	inline void set__rng_10(RandomNumberGenerator_t214893434 * value)
	{
		____rng_10 = value;
		Il2CppCodeGenWriteBarrier((&____rng_10), value);
	}
};

struct PKCS12_t2230622237_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_0;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map8_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map9_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24mapA_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24mapB_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapF
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24mapF_16;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_0() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237_StaticFields, ___recommendedIterationCount_0)); }
	inline int32_t get_recommendedIterationCount_0() const { return ___recommendedIterationCount_0; }
	inline int32_t* get_address_of_recommendedIterationCount_0() { return &___recommendedIterationCount_0; }
	inline void set_recommendedIterationCount_0(int32_t value)
	{
		___recommendedIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_password_max_length_11() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237_StaticFields, ___password_max_length_11)); }
	inline int32_t get_password_max_length_11() const { return ___password_max_length_11; }
	inline int32_t* get_address_of_password_max_length_11() { return &___password_max_length_11; }
	inline void set_password_max_length_11(int32_t value)
	{
		___password_max_length_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_12() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237_StaticFields, ___U3CU3Ef__switchU24map8_12)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map8_12() const { return ___U3CU3Ef__switchU24map8_12; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map8_12() { return &___U3CU3Ef__switchU24map8_12; }
	inline void set_U3CU3Ef__switchU24map8_12(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map8_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_13() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237_StaticFields, ___U3CU3Ef__switchU24map9_13)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map9_13() const { return ___U3CU3Ef__switchU24map9_13; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map9_13() { return &___U3CU3Ef__switchU24map9_13; }
	inline void set_U3CU3Ef__switchU24map9_13(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map9_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_14() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237_StaticFields, ___U3CU3Ef__switchU24mapA_14)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24mapA_14() const { return ___U3CU3Ef__switchU24mapA_14; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24mapA_14() { return &___U3CU3Ef__switchU24mapA_14; }
	inline void set_U3CU3Ef__switchU24mapA_14(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24mapA_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_15() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237_StaticFields, ___U3CU3Ef__switchU24mapB_15)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24mapB_15() const { return ___U3CU3Ef__switchU24mapB_15; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24mapB_15() { return &___U3CU3Ef__switchU24mapB_15; }
	inline void set_U3CU3Ef__switchU24mapB_15(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24mapB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_16() { return static_cast<int32_t>(offsetof(PKCS12_t2230622237_StaticFields, ___U3CU3Ef__switchU24mapF_16)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24mapF_16() const { return ___U3CU3Ef__switchU24mapF_16; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24mapF_16() { return &___U3CU3Ef__switchU24mapF_16; }
	inline void set_U3CU3Ef__switchU24mapF_16(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24mapF_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T2230622237_H
#ifndef EXCEPTION_T3285723142_H
#define EXCEPTION_T3285723142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3285723142  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1869361681* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3285723142 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1869361681* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1869361681** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1869361681* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___inner_exception_1)); }
	inline Exception_t3285723142 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3285723142 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3285723142 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3285723142, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3285723142_H
#ifndef SYMMETRICTRANSFORM_T1629006107_H
#define SYMMETRICTRANSFORM_T1629006107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t1629006107  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t2354607141 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3211447327* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3211447327* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3211447327* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3211447327* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t214893434 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___algo_0)); }
	inline SymmetricAlgorithm_t2354607141 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t2354607141 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t2354607141 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___temp_3)); }
	inline ByteU5BU5D_t3211447327* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3211447327** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3211447327* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___temp2_4)); }
	inline ByteU5BU5D_t3211447327* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3211447327* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___workBuff_5)); }
	inline ByteU5BU5D_t3211447327* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3211447327** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3211447327* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___workout_6)); }
	inline ByteU5BU5D_t3211447327* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3211447327** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3211447327* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1629006107, ____rng_11)); }
	inline RandomNumberGenerator_t214893434 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t214893434 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t214893434 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T1629006107_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T4066124073_H
#define ENCRYPTEDPRIVATEKEYINFO_T4066124073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t4066124073  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t3211447327* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t3211447327* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t4066124073, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t4066124073, ____salt_1)); }
	inline ByteU5BU5D_t3211447327* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t3211447327** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t3211447327* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t4066124073, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t4066124073, ____data_3)); }
	inline ByteU5BU5D_t3211447327* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t3211447327** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t3211447327* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T4066124073_H
#ifndef PRIVATEKEYINFO_T3908730992_H
#define PRIVATEKEYINFO_T3908730992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t3908730992  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t3211447327* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t1155359356 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t3908730992, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t3908730992, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t3908730992, ____key_2)); }
	inline ByteU5BU5D_t3211447327* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t3211447327** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t3211447327* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t3908730992, ____list_3)); }
	inline ArrayList_t1155359356 * get__list_3() const { return ____list_3; }
	inline ArrayList_t1155359356 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t1155359356 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T3908730992_H
#ifndef PKCS8_T2064271432_H
#define PKCS8_T2064271432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t2064271432  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T2064271432_H
#ifndef PKCS1_T2578701016_H
#define PKCS1_T2578701016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t2578701016  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t2578701016_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t3211447327* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t3211447327* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t3211447327* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t3211447327* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t2578701016_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t3211447327* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t3211447327* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t2578701016_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t3211447327* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t3211447327* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t2578701016_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t3211447327* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t3211447327* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t2578701016_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t3211447327* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t3211447327** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t3211447327* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T2578701016_H
#ifndef MACALGORITHM_T829004313_H
#define MACALGORITHM_T829004313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MACAlgorithm
struct  MACAlgorithm_t829004313  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.MACAlgorithm::algo
	SymmetricAlgorithm_t2354607141 * ___algo_0;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.MACAlgorithm::enc
	RuntimeObject* ___enc_1;
	// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::block
	ByteU5BU5D_t3211447327* ___block_2;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockSize
	int32_t ___blockSize_3;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockCount
	int32_t ___blockCount_4;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(MACAlgorithm_t829004313, ___algo_0)); }
	inline SymmetricAlgorithm_t2354607141 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t2354607141 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t2354607141 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_enc_1() { return static_cast<int32_t>(offsetof(MACAlgorithm_t829004313, ___enc_1)); }
	inline RuntimeObject* get_enc_1() const { return ___enc_1; }
	inline RuntimeObject** get_address_of_enc_1() { return &___enc_1; }
	inline void set_enc_1(RuntimeObject* value)
	{
		___enc_1 = value;
		Il2CppCodeGenWriteBarrier((&___enc_1), value);
	}

	inline static int32_t get_offset_of_block_2() { return static_cast<int32_t>(offsetof(MACAlgorithm_t829004313, ___block_2)); }
	inline ByteU5BU5D_t3211447327* get_block_2() const { return ___block_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_block_2() { return &___block_2; }
	inline void set_block_2(ByteU5BU5D_t3211447327* value)
	{
		___block_2 = value;
		Il2CppCodeGenWriteBarrier((&___block_2), value);
	}

	inline static int32_t get_offset_of_blockSize_3() { return static_cast<int32_t>(offsetof(MACAlgorithm_t829004313, ___blockSize_3)); }
	inline int32_t get_blockSize_3() const { return ___blockSize_3; }
	inline int32_t* get_address_of_blockSize_3() { return &___blockSize_3; }
	inline void set_blockSize_3(int32_t value)
	{
		___blockSize_3 = value;
	}

	inline static int32_t get_offset_of_blockCount_4() { return static_cast<int32_t>(offsetof(MACAlgorithm_t829004313, ___blockCount_4)); }
	inline int32_t get_blockCount_4() const { return ___blockCount_4; }
	inline int32_t* get_address_of_blockCount_4() { return &___blockCount_4; }
	inline void set_blockCount_4(int32_t value)
	{
		___blockCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACALGORITHM_T829004313_H
#ifndef X509STOREMANAGER_T789173376_H
#define X509STOREMANAGER_T789173376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t789173376  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t789173376_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t4122901616 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t4122901616 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t789173376_StaticFields, ____userStore_0)); }
	inline X509Stores_t4122901616 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t4122901616 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t4122901616 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t789173376_StaticFields, ____machineStore_1)); }
	inline X509Stores_t4122901616 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t4122901616 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t4122901616 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T789173376_H
#ifndef X509STORES_T4122901616_H
#define X509STORES_T4122901616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t4122901616  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t3332514910 * ____trusted_1;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t4122901616, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__trusted_1() { return static_cast<int32_t>(offsetof(X509Stores_t4122901616, ____trusted_1)); }
	inline X509Store_t3332514910 * get__trusted_1() const { return ____trusted_1; }
	inline X509Store_t3332514910 ** get_address_of__trusted_1() { return &____trusted_1; }
	inline void set__trusted_1(X509Store_t3332514910 * value)
	{
		____trusted_1 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T4122901616_H
#ifndef ASN1_T794248276_H
#define ASN1_T794248276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t794248276  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t3211447327* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t1155359356 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t794248276, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t794248276, ___m_aValue_1)); }
	inline ByteU5BU5D_t3211447327* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t3211447327* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t794248276, ___elist_2)); }
	inline ArrayList_t1155359356 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t1155359356 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t1155359356 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T794248276_H
#ifndef ASN1CONVERT_T2129500005_H
#define ASN1CONVERT_T2129500005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2129500005  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2129500005_H
#ifndef BITCONVERTERLE_T2289320504_H
#define BITCONVERTERLE_T2289320504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2289320504  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2289320504_H
#ifndef PKCS7_T1624441634_H
#define PKCS7_T1624441634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t1624441634  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T1624441634_H
#ifndef CONTENTINFO_T471155258_H
#define CONTENTINFO_T471155258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t471155258  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t794248276 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t471155258, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t471155258, ___content_1)); }
	inline ASN1_t794248276 * get_content_1() const { return ___content_1; }
	inline ASN1_t794248276 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t794248276 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T471155258_H
#ifndef ENCRYPTEDDATA_T821126457_H
#define ENCRYPTEDDATA_T821126457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t821126457  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t471155258 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t471155258 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t3211447327* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t821126457, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t821126457, ____content_1)); }
	inline ContentInfo_t471155258 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t471155258 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t471155258 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t821126457, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t471155258 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t471155258 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t471155258 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t821126457, ____encrypted_3)); }
	inline ByteU5BU5D_t3211447327* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t3211447327** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t3211447327* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T821126457_H
#ifndef SIGNEDDATA_T2258442609_H
#define SIGNEDDATA_T2258442609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/SignedData
struct  SignedData_t2258442609  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignedData::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignedData::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::contentInfo
	ContentInfo_t471155258 * ___contentInfo_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::certs
	X509CertificateCollection_t3742608460 * ___certs_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignedData::crls
	ArrayList_t1155359356 * ___crls_4;
	// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::signerInfo
	SignerInfo_t122983661 * ___signerInfo_5;
	// System.Boolean Mono.Security.PKCS7/SignedData::mda
	bool ___mda_6;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignedData_t2258442609, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignedData_t2258442609, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_1), value);
	}

	inline static int32_t get_offset_of_contentInfo_2() { return static_cast<int32_t>(offsetof(SignedData_t2258442609, ___contentInfo_2)); }
	inline ContentInfo_t471155258 * get_contentInfo_2() const { return ___contentInfo_2; }
	inline ContentInfo_t471155258 ** get_address_of_contentInfo_2() { return &___contentInfo_2; }
	inline void set_contentInfo_2(ContentInfo_t471155258 * value)
	{
		___contentInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentInfo_2), value);
	}

	inline static int32_t get_offset_of_certs_3() { return static_cast<int32_t>(offsetof(SignedData_t2258442609, ___certs_3)); }
	inline X509CertificateCollection_t3742608460 * get_certs_3() const { return ___certs_3; }
	inline X509CertificateCollection_t3742608460 ** get_address_of_certs_3() { return &___certs_3; }
	inline void set_certs_3(X509CertificateCollection_t3742608460 * value)
	{
		___certs_3 = value;
		Il2CppCodeGenWriteBarrier((&___certs_3), value);
	}

	inline static int32_t get_offset_of_crls_4() { return static_cast<int32_t>(offsetof(SignedData_t2258442609, ___crls_4)); }
	inline ArrayList_t1155359356 * get_crls_4() const { return ___crls_4; }
	inline ArrayList_t1155359356 ** get_address_of_crls_4() { return &___crls_4; }
	inline void set_crls_4(ArrayList_t1155359356 * value)
	{
		___crls_4 = value;
		Il2CppCodeGenWriteBarrier((&___crls_4), value);
	}

	inline static int32_t get_offset_of_signerInfo_5() { return static_cast<int32_t>(offsetof(SignedData_t2258442609, ___signerInfo_5)); }
	inline SignerInfo_t122983661 * get_signerInfo_5() const { return ___signerInfo_5; }
	inline SignerInfo_t122983661 ** get_address_of_signerInfo_5() { return &___signerInfo_5; }
	inline void set_signerInfo_5(SignerInfo_t122983661 * value)
	{
		___signerInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___signerInfo_5), value);
	}

	inline static int32_t get_offset_of_mda_6() { return static_cast<int32_t>(offsetof(SignedData_t2258442609, ___mda_6)); }
	inline bool get_mda_6() const { return ___mda_6; }
	inline bool* get_address_of_mda_6() { return &___mda_6; }
	inline void set_mda_6(bool value)
	{
		___mda_6 = value;
	}
};

struct SignedData_t2258442609_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.PKCS7/SignedData::<>f__switch$map16
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map16_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_7() { return static_cast<int32_t>(offsetof(SignedData_t2258442609_StaticFields, ___U3CU3Ef__switchU24map16_7)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map16_7() const { return ___U3CU3Ef__switchU24map16_7; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map16_7() { return &___U3CU3Ef__switchU24map16_7; }
	inline void set_U3CU3Ef__switchU24map16_7(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map16_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNEDDATA_T2258442609_H
#ifndef SIGNERINFO_T122983661_H
#define SIGNERINFO_T122983661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/SignerInfo
struct  SignerInfo_t122983661  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignerInfo::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignerInfo::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::authenticatedAttributes
	ArrayList_t1155359356 * ___authenticatedAttributes_2;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::unauthenticatedAttributes
	ArrayList_t1155359356 * ___unauthenticatedAttributes_3;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::signature
	ByteU5BU5D_t3211447327* ___signature_4;
	// System.String Mono.Security.PKCS7/SignerInfo::issuer
	String_t* ___issuer_5;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::serial
	ByteU5BU5D_t3211447327* ___serial_6;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::ski
	ByteU5BU5D_t3211447327* ___ski_7;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_1), value);
	}

	inline static int32_t get_offset_of_authenticatedAttributes_2() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___authenticatedAttributes_2)); }
	inline ArrayList_t1155359356 * get_authenticatedAttributes_2() const { return ___authenticatedAttributes_2; }
	inline ArrayList_t1155359356 ** get_address_of_authenticatedAttributes_2() { return &___authenticatedAttributes_2; }
	inline void set_authenticatedAttributes_2(ArrayList_t1155359356 * value)
	{
		___authenticatedAttributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___authenticatedAttributes_2), value);
	}

	inline static int32_t get_offset_of_unauthenticatedAttributes_3() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___unauthenticatedAttributes_3)); }
	inline ArrayList_t1155359356 * get_unauthenticatedAttributes_3() const { return ___unauthenticatedAttributes_3; }
	inline ArrayList_t1155359356 ** get_address_of_unauthenticatedAttributes_3() { return &___unauthenticatedAttributes_3; }
	inline void set_unauthenticatedAttributes_3(ArrayList_t1155359356 * value)
	{
		___unauthenticatedAttributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___unauthenticatedAttributes_3), value);
	}

	inline static int32_t get_offset_of_signature_4() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___signature_4)); }
	inline ByteU5BU5D_t3211447327* get_signature_4() const { return ___signature_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_signature_4() { return &___signature_4; }
	inline void set_signature_4(ByteU5BU5D_t3211447327* value)
	{
		___signature_4 = value;
		Il2CppCodeGenWriteBarrier((&___signature_4), value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_5), value);
	}

	inline static int32_t get_offset_of_serial_6() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___serial_6)); }
	inline ByteU5BU5D_t3211447327* get_serial_6() const { return ___serial_6; }
	inline ByteU5BU5D_t3211447327** get_address_of_serial_6() { return &___serial_6; }
	inline void set_serial_6(ByteU5BU5D_t3211447327* value)
	{
		___serial_6 = value;
		Il2CppCodeGenWriteBarrier((&___serial_6), value);
	}

	inline static int32_t get_offset_of_ski_7() { return static_cast<int32_t>(offsetof(SignerInfo_t122983661, ___ski_7)); }
	inline ByteU5BU5D_t3211447327* get_ski_7() const { return ___ski_7; }
	inline ByteU5BU5D_t3211447327** get_address_of_ski_7() { return &___ski_7; }
	inline void set_ski_7(ByteU5BU5D_t3211447327* value)
	{
		___ski_7 = value;
		Il2CppCodeGenWriteBarrier((&___ski_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNERINFO_T122983661_H
#ifndef STRONGNAME_T1555735751_H
#define STRONGNAME_T1555735751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName
struct  StrongName_t1555735751  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t765183856 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t3211447327* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t3211447327* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(StrongName_t1555735751, ___rsa_0)); }
	inline RSA_t765183856 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t765183856 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t765183856 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_publicKey_1() { return static_cast<int32_t>(offsetof(StrongName_t1555735751, ___publicKey_1)); }
	inline ByteU5BU5D_t3211447327* get_publicKey_1() const { return ___publicKey_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_publicKey_1() { return &___publicKey_1; }
	inline void set_publicKey_1(ByteU5BU5D_t3211447327* value)
	{
		___publicKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_1), value);
	}

	inline static int32_t get_offset_of_keyToken_2() { return static_cast<int32_t>(offsetof(StrongName_t1555735751, ___keyToken_2)); }
	inline ByteU5BU5D_t3211447327* get_keyToken_2() const { return ___keyToken_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_keyToken_2() { return &___keyToken_2; }
	inline void set_keyToken_2(ByteU5BU5D_t3211447327* value)
	{
		___keyToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_2), value);
	}

	inline static int32_t get_offset_of_tokenAlgorithm_3() { return static_cast<int32_t>(offsetof(StrongName_t1555735751, ___tokenAlgorithm_3)); }
	inline String_t* get_tokenAlgorithm_3() const { return ___tokenAlgorithm_3; }
	inline String_t** get_address_of_tokenAlgorithm_3() { return &___tokenAlgorithm_3; }
	inline void set_tokenAlgorithm_3(String_t* value)
	{
		___tokenAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&___tokenAlgorithm_3), value);
	}
};

struct StrongName_t1555735751_StaticFields
{
public:
	// System.Object Mono.Security.StrongName::lockObject
	RuntimeObject * ___lockObject_4;
	// System.Boolean Mono.Security.StrongName::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_lockObject_4() { return static_cast<int32_t>(offsetof(StrongName_t1555735751_StaticFields, ___lockObject_4)); }
	inline RuntimeObject * get_lockObject_4() const { return ___lockObject_4; }
	inline RuntimeObject ** get_address_of_lockObject_4() { return &___lockObject_4; }
	inline void set_lockObject_4(RuntimeObject * value)
	{
		___lockObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_4), value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(StrongName_t1555735751_StaticFields, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T1555735751_H
#ifndef SMALLXMLPARSER_T2801581108_H
#define SMALLXMLPARSER_T2801581108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser
struct  SmallXmlParser_t2801581108  : public RuntimeObject
{
public:
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	RuntimeObject* ___handler_0;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t1914077602 * ___reader_1;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t3827704391 * ___elementNames_2;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t3827704391 * ___xmlSpaces_3;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace_4;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t1948519031 * ___buffer_5;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t3680385359* ___nameBuffer_6;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace_7;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t2804421211 * ___attributes_8;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line_9;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column_10;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn_11;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___reader_1)); }
	inline TextReader_t1914077602 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t1914077602 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t1914077602 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}

	inline static int32_t get_offset_of_elementNames_2() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___elementNames_2)); }
	inline Stack_t3827704391 * get_elementNames_2() const { return ___elementNames_2; }
	inline Stack_t3827704391 ** get_address_of_elementNames_2() { return &___elementNames_2; }
	inline void set_elementNames_2(Stack_t3827704391 * value)
	{
		___elementNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___elementNames_2), value);
	}

	inline static int32_t get_offset_of_xmlSpaces_3() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___xmlSpaces_3)); }
	inline Stack_t3827704391 * get_xmlSpaces_3() const { return ___xmlSpaces_3; }
	inline Stack_t3827704391 ** get_address_of_xmlSpaces_3() { return &___xmlSpaces_3; }
	inline void set_xmlSpaces_3(Stack_t3827704391 * value)
	{
		___xmlSpaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpaces_3), value);
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___xmlSpace_4)); }
	inline String_t* get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline String_t** get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(String_t* value)
	{
		___xmlSpace_4 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpace_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___buffer_5)); }
	inline StringBuilder_t1948519031 * get_buffer_5() const { return ___buffer_5; }
	inline StringBuilder_t1948519031 ** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(StringBuilder_t1948519031 * value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_nameBuffer_6() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___nameBuffer_6)); }
	inline CharU5BU5D_t3680385359* get_nameBuffer_6() const { return ___nameBuffer_6; }
	inline CharU5BU5D_t3680385359** get_address_of_nameBuffer_6() { return &___nameBuffer_6; }
	inline void set_nameBuffer_6(CharU5BU5D_t3680385359* value)
	{
		___nameBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameBuffer_6), value);
	}

	inline static int32_t get_offset_of_isWhitespace_7() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___isWhitespace_7)); }
	inline bool get_isWhitespace_7() const { return ___isWhitespace_7; }
	inline bool* get_address_of_isWhitespace_7() { return &___isWhitespace_7; }
	inline void set_isWhitespace_7(bool value)
	{
		___isWhitespace_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___attributes_8)); }
	inline AttrListImpl_t2804421211 * get_attributes_8() const { return ___attributes_8; }
	inline AttrListImpl_t2804421211 ** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttrListImpl_t2804421211 * value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_8), value);
	}

	inline static int32_t get_offset_of_line_9() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___line_9)); }
	inline int32_t get_line_9() const { return ___line_9; }
	inline int32_t* get_address_of_line_9() { return &___line_9; }
	inline void set_line_9(int32_t value)
	{
		___line_9 = value;
	}

	inline static int32_t get_offset_of_column_10() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___column_10)); }
	inline int32_t get_column_10() const { return ___column_10; }
	inline int32_t* get_address_of_column_10() { return &___column_10; }
	inline void set_column_10(int32_t value)
	{
		___column_10 = value;
	}

	inline static int32_t get_offset_of_resetColumn_11() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108, ___resetColumn_11)); }
	inline bool get_resetColumn_11() const { return ___resetColumn_11; }
	inline bool* get_address_of_resetColumn_11() { return &___resetColumn_11; }
	inline void set_resetColumn_11(bool value)
	{
		___resetColumn_11 = value;
	}
};

struct SmallXmlParser_t2801581108_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.SmallXmlParser::<>f__switch$map18
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map18_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map18_12() { return static_cast<int32_t>(offsetof(SmallXmlParser_t2801581108_StaticFields, ___U3CU3Ef__switchU24map18_12)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map18_12() const { return ___U3CU3Ef__switchU24map18_12; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map18_12() { return &___U3CU3Ef__switchU24map18_12; }
	inline void set_U3CU3Ef__switchU24map18_12(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map18_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map18_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLXMLPARSER_T2801581108_H
#ifndef ATTRLISTIMPL_T2804421211_H
#define ATTRLISTIMPL_T2804421211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser/AttrListImpl
struct  AttrListImpl_t2804421211  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Xml.SmallXmlParser/AttrListImpl::attrNames
	ArrayList_t1155359356 * ___attrNames_0;
	// System.Collections.ArrayList Mono.Xml.SmallXmlParser/AttrListImpl::attrValues
	ArrayList_t1155359356 * ___attrValues_1;

public:
	inline static int32_t get_offset_of_attrNames_0() { return static_cast<int32_t>(offsetof(AttrListImpl_t2804421211, ___attrNames_0)); }
	inline ArrayList_t1155359356 * get_attrNames_0() const { return ___attrNames_0; }
	inline ArrayList_t1155359356 ** get_address_of_attrNames_0() { return &___attrNames_0; }
	inline void set_attrNames_0(ArrayList_t1155359356 * value)
	{
		___attrNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrNames_0), value);
	}

	inline static int32_t get_offset_of_attrValues_1() { return static_cast<int32_t>(offsetof(AttrListImpl_t2804421211, ___attrValues_1)); }
	inline ArrayList_t1155359356 * get_attrValues_1() const { return ___attrValues_1; }
	inline ArrayList_t1155359356 ** get_address_of_attrValues_1() { return &___attrValues_1; }
	inline void set_attrValues_1(ArrayList_t1155359356 * value)
	{
		___attrValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRLISTIMPL_T2804421211_H
#ifndef RUNTIME_T874096818_H
#define RUNTIME_T874096818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Runtime
struct  Runtime_t874096818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIME_T874096818_H
#ifndef VALUETYPE_T3384490125_H
#define VALUETYPE_T3384490125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3384490125  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3384490125_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3384490125_marshaled_com
{
};
#endif // VALUETYPE_T3384490125_H
#ifndef COLLECTIONBASE_T2976814940_H
#define COLLECTIONBASE_T2976814940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2976814940  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t1155359356 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2976814940, ___list_0)); }
	inline ArrayList_t1155359356 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1155359356 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1155359356 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2976814940_H
#ifndef ASYMMETRICALGORITHM_T1807694938_H
#define ASYMMETRICALGORITHM_T1807694938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t1807694938  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3128442365* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1807694938, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1807694938, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t3128442365* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t3128442365** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t3128442365* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T1807694938_H
#ifndef KEYPAIRPERSISTENCE_T480922200_H
#define KEYPAIRPERSISTENCE_T480922200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyPairPersistence
struct  KeyPairPersistence_t480922200  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::_params
	CspParameters_t2845097780 * ____params_4;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_keyvalue
	String_t* ____keyvalue_5;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_filename
	String_t* ____filename_6;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_container
	String_t* ____container_7;

public:
	inline static int32_t get_offset_of__params_4() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200, ____params_4)); }
	inline CspParameters_t2845097780 * get__params_4() const { return ____params_4; }
	inline CspParameters_t2845097780 ** get_address_of__params_4() { return &____params_4; }
	inline void set__params_4(CspParameters_t2845097780 * value)
	{
		____params_4 = value;
		Il2CppCodeGenWriteBarrier((&____params_4), value);
	}

	inline static int32_t get_offset_of__keyvalue_5() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200, ____keyvalue_5)); }
	inline String_t* get__keyvalue_5() const { return ____keyvalue_5; }
	inline String_t** get_address_of__keyvalue_5() { return &____keyvalue_5; }
	inline void set__keyvalue_5(String_t* value)
	{
		____keyvalue_5 = value;
		Il2CppCodeGenWriteBarrier((&____keyvalue_5), value);
	}

	inline static int32_t get_offset_of__filename_6() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200, ____filename_6)); }
	inline String_t* get__filename_6() const { return ____filename_6; }
	inline String_t** get_address_of__filename_6() { return &____filename_6; }
	inline void set__filename_6(String_t* value)
	{
		____filename_6 = value;
		Il2CppCodeGenWriteBarrier((&____filename_6), value);
	}

	inline static int32_t get_offset_of__container_7() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200, ____container_7)); }
	inline String_t* get__container_7() const { return ____container_7; }
	inline String_t** get_address_of__container_7() { return &____container_7; }
	inline void set__container_7(String_t* value)
	{
		____container_7 = value;
		Il2CppCodeGenWriteBarrier((&____container_7), value);
	}
};

struct KeyPairPersistence_t480922200_StaticFields
{
public:
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_userPathExists
	bool ____userPathExists_0;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_userPath
	String_t* ____userPath_1;
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_machinePathExists
	bool ____machinePathExists_2;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_machinePath
	String_t* ____machinePath_3;
	// System.Object Mono.Security.Cryptography.KeyPairPersistence::lockobj
	RuntimeObject * ___lockobj_8;

public:
	inline static int32_t get_offset_of__userPathExists_0() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200_StaticFields, ____userPathExists_0)); }
	inline bool get__userPathExists_0() const { return ____userPathExists_0; }
	inline bool* get_address_of__userPathExists_0() { return &____userPathExists_0; }
	inline void set__userPathExists_0(bool value)
	{
		____userPathExists_0 = value;
	}

	inline static int32_t get_offset_of__userPath_1() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200_StaticFields, ____userPath_1)); }
	inline String_t* get__userPath_1() const { return ____userPath_1; }
	inline String_t** get_address_of__userPath_1() { return &____userPath_1; }
	inline void set__userPath_1(String_t* value)
	{
		____userPath_1 = value;
		Il2CppCodeGenWriteBarrier((&____userPath_1), value);
	}

	inline static int32_t get_offset_of__machinePathExists_2() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200_StaticFields, ____machinePathExists_2)); }
	inline bool get__machinePathExists_2() const { return ____machinePathExists_2; }
	inline bool* get_address_of__machinePathExists_2() { return &____machinePathExists_2; }
	inline void set__machinePathExists_2(bool value)
	{
		____machinePathExists_2 = value;
	}

	inline static int32_t get_offset_of__machinePath_3() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200_StaticFields, ____machinePath_3)); }
	inline String_t* get__machinePath_3() const { return ____machinePath_3; }
	inline String_t** get_address_of__machinePath_3() { return &____machinePath_3; }
	inline void set__machinePath_3(String_t* value)
	{
		____machinePath_3 = value;
		Il2CppCodeGenWriteBarrier((&____machinePath_3), value);
	}

	inline static int32_t get_offset_of_lockobj_8() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t480922200_StaticFields, ___lockobj_8)); }
	inline RuntimeObject * get_lockobj_8() const { return ___lockobj_8; }
	inline RuntimeObject ** get_address_of_lockobj_8() { return &___lockobj_8; }
	inline void set_lockobj_8(RuntimeObject * value)
	{
		___lockobj_8 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPAIRPERSISTENCE_T480922200_H
#ifndef HMACALGORITHM_T2506715951_H
#define HMACALGORITHM_T2506715951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMACAlgorithm
struct  HMACAlgorithm_t2506715951  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.Cryptography.HMACAlgorithm::key
	ByteU5BU5D_t3211447327* ___key_0;
	// System.Byte[] Mono.Security.Cryptography.HMACAlgorithm::hash
	ByteU5BU5D_t3211447327* ___hash_1;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMACAlgorithm::algo
	HashAlgorithm_t1901406455 * ___algo_2;
	// System.String Mono.Security.Cryptography.HMACAlgorithm::hashName
	String_t* ___hashName_3;
	// Mono.Security.Cryptography.BlockProcessor Mono.Security.Cryptography.HMACAlgorithm::block
	BlockProcessor_t2568162817 * ___block_4;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2506715951, ___key_0)); }
	inline ByteU5BU5D_t3211447327* get_key_0() const { return ___key_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ByteU5BU5D_t3211447327* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2506715951, ___hash_1)); }
	inline ByteU5BU5D_t3211447327* get_hash_1() const { return ___hash_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(ByteU5BU5D_t3211447327* value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}

	inline static int32_t get_offset_of_algo_2() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2506715951, ___algo_2)); }
	inline HashAlgorithm_t1901406455 * get_algo_2() const { return ___algo_2; }
	inline HashAlgorithm_t1901406455 ** get_address_of_algo_2() { return &___algo_2; }
	inline void set_algo_2(HashAlgorithm_t1901406455 * value)
	{
		___algo_2 = value;
		Il2CppCodeGenWriteBarrier((&___algo_2), value);
	}

	inline static int32_t get_offset_of_hashName_3() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2506715951, ___hashName_3)); }
	inline String_t* get_hashName_3() const { return ___hashName_3; }
	inline String_t** get_address_of_hashName_3() { return &___hashName_3; }
	inline void set_hashName_3(String_t* value)
	{
		___hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_3), value);
	}

	inline static int32_t get_offset_of_block_4() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2506715951, ___block_4)); }
	inline BlockProcessor_t2568162817 * get_block_4() const { return ___block_4; }
	inline BlockProcessor_t2568162817 ** get_address_of_block_4() { return &___block_4; }
	inline void set_block_4(BlockProcessor_t2568162817 * value)
	{
		___block_4 = value;
		Il2CppCodeGenWriteBarrier((&___block_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACALGORITHM_T2506715951_H
#ifndef SAFEBAG_T1957676964_H
#define SAFEBAG_T1957676964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t1957676964  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t794248276 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t1957676964, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t1957676964, ____asn1_1)); }
	inline ASN1_t794248276 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t794248276 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t794248276 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T1957676964_H
#ifndef LEVEL2MAPCOMPARER_T739262908_H
#define LEVEL2MAPCOMPARER_T739262908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2MapComparer
struct  Level2MapComparer_t739262908  : public RuntimeObject
{
public:

public:
};

struct Level2MapComparer_t739262908_StaticFields
{
public:
	// Mono.Globalization.Unicode.Level2MapComparer Mono.Globalization.Unicode.Level2MapComparer::Instance
	Level2MapComparer_t739262908 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Level2MapComparer_t739262908_StaticFields, ___Instance_0)); }
	inline Level2MapComparer_t739262908 * get_Instance_0() const { return ___Instance_0; }
	inline Level2MapComparer_t739262908 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Level2MapComparer_t739262908 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAPCOMPARER_T739262908_H
#ifndef PRIMEGENERATORBASE_T1196227554_H
#define PRIMEGENERATORBASE_T1196227554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t1196227554  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T1196227554_H
#ifndef TAILORINGINFO_T1721489472_H
#define TAILORINGINFO_T1721489472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.TailoringInfo
struct  TailoringInfo_t1721489472  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::LCID
	int32_t ___LCID_0;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringIndex
	int32_t ___TailoringIndex_1;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringCount
	int32_t ___TailoringCount_2;
	// System.Boolean Mono.Globalization.Unicode.TailoringInfo::FrenchSort
	bool ___FrenchSort_3;

public:
	inline static int32_t get_offset_of_LCID_0() { return static_cast<int32_t>(offsetof(TailoringInfo_t1721489472, ___LCID_0)); }
	inline int32_t get_LCID_0() const { return ___LCID_0; }
	inline int32_t* get_address_of_LCID_0() { return &___LCID_0; }
	inline void set_LCID_0(int32_t value)
	{
		___LCID_0 = value;
	}

	inline static int32_t get_offset_of_TailoringIndex_1() { return static_cast<int32_t>(offsetof(TailoringInfo_t1721489472, ___TailoringIndex_1)); }
	inline int32_t get_TailoringIndex_1() const { return ___TailoringIndex_1; }
	inline int32_t* get_address_of_TailoringIndex_1() { return &___TailoringIndex_1; }
	inline void set_TailoringIndex_1(int32_t value)
	{
		___TailoringIndex_1 = value;
	}

	inline static int32_t get_offset_of_TailoringCount_2() { return static_cast<int32_t>(offsetof(TailoringInfo_t1721489472, ___TailoringCount_2)); }
	inline int32_t get_TailoringCount_2() const { return ___TailoringCount_2; }
	inline int32_t* get_address_of_TailoringCount_2() { return &___TailoringCount_2; }
	inline void set_TailoringCount_2(int32_t value)
	{
		___TailoringCount_2 = value;
	}

	inline static int32_t get_offset_of_FrenchSort_3() { return static_cast<int32_t>(offsetof(TailoringInfo_t1721489472, ___FrenchSort_3)); }
	inline bool get_FrenchSort_3() const { return ___FrenchSort_3; }
	inline bool* get_address_of_FrenchSort_3() { return &___FrenchSort_3; }
	inline void set_FrenchSort_3(bool value)
	{
		___FrenchSort_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILORINGINFO_T1721489472_H
#ifndef SIMPLECOLLATOR_T385558570_H
#define SIMPLECOLLATOR_T385558570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator
struct  SimpleCollator_t385558570  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo Mono.Globalization.Unicode.SimpleCollator::textInfo
	TextInfo_t900078414 * ___textInfo_2;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::frenchSort
	bool ___frenchSort_3;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkCatTable
	uint8_t* ___cjkCatTable_4;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv1Table
	uint8_t* ___cjkLv1Table_5;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkIndexer
	CodePointIndexer_t3966590323 * ___cjkIndexer_6;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv2Table
	uint8_t* ___cjkLv2Table_7;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkLv2Indexer
	CodePointIndexer_t3966590323 * ___cjkLv2Indexer_8;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator::lcid
	int32_t ___lcid_9;
	// Mono.Globalization.Unicode.Contraction[] Mono.Globalization.Unicode.SimpleCollator::contractions
	ContractionU5BU5D_t3119464888* ___contractions_10;
	// Mono.Globalization.Unicode.Level2Map[] Mono.Globalization.Unicode.SimpleCollator::level2Maps
	Level2MapU5BU5D_t2416891939* ___level2Maps_11;
	// System.Byte[] Mono.Globalization.Unicode.SimpleCollator::unsafeFlags
	ByteU5BU5D_t3211447327* ___unsafeFlags_12;

public:
	inline static int32_t get_offset_of_textInfo_2() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___textInfo_2)); }
	inline TextInfo_t900078414 * get_textInfo_2() const { return ___textInfo_2; }
	inline TextInfo_t900078414 ** get_address_of_textInfo_2() { return &___textInfo_2; }
	inline void set_textInfo_2(TextInfo_t900078414 * value)
	{
		___textInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_2), value);
	}

	inline static int32_t get_offset_of_frenchSort_3() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___frenchSort_3)); }
	inline bool get_frenchSort_3() const { return ___frenchSort_3; }
	inline bool* get_address_of_frenchSort_3() { return &___frenchSort_3; }
	inline void set_frenchSort_3(bool value)
	{
		___frenchSort_3 = value;
	}

	inline static int32_t get_offset_of_cjkCatTable_4() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___cjkCatTable_4)); }
	inline uint8_t* get_cjkCatTable_4() const { return ___cjkCatTable_4; }
	inline uint8_t** get_address_of_cjkCatTable_4() { return &___cjkCatTable_4; }
	inline void set_cjkCatTable_4(uint8_t* value)
	{
		___cjkCatTable_4 = value;
	}

	inline static int32_t get_offset_of_cjkLv1Table_5() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___cjkLv1Table_5)); }
	inline uint8_t* get_cjkLv1Table_5() const { return ___cjkLv1Table_5; }
	inline uint8_t** get_address_of_cjkLv1Table_5() { return &___cjkLv1Table_5; }
	inline void set_cjkLv1Table_5(uint8_t* value)
	{
		___cjkLv1Table_5 = value;
	}

	inline static int32_t get_offset_of_cjkIndexer_6() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___cjkIndexer_6)); }
	inline CodePointIndexer_t3966590323 * get_cjkIndexer_6() const { return ___cjkIndexer_6; }
	inline CodePointIndexer_t3966590323 ** get_address_of_cjkIndexer_6() { return &___cjkIndexer_6; }
	inline void set_cjkIndexer_6(CodePointIndexer_t3966590323 * value)
	{
		___cjkIndexer_6 = value;
		Il2CppCodeGenWriteBarrier((&___cjkIndexer_6), value);
	}

	inline static int32_t get_offset_of_cjkLv2Table_7() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___cjkLv2Table_7)); }
	inline uint8_t* get_cjkLv2Table_7() const { return ___cjkLv2Table_7; }
	inline uint8_t** get_address_of_cjkLv2Table_7() { return &___cjkLv2Table_7; }
	inline void set_cjkLv2Table_7(uint8_t* value)
	{
		___cjkLv2Table_7 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Indexer_8() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___cjkLv2Indexer_8)); }
	inline CodePointIndexer_t3966590323 * get_cjkLv2Indexer_8() const { return ___cjkLv2Indexer_8; }
	inline CodePointIndexer_t3966590323 ** get_address_of_cjkLv2Indexer_8() { return &___cjkLv2Indexer_8; }
	inline void set_cjkLv2Indexer_8(CodePointIndexer_t3966590323 * value)
	{
		___cjkLv2Indexer_8 = value;
		Il2CppCodeGenWriteBarrier((&___cjkLv2Indexer_8), value);
	}

	inline static int32_t get_offset_of_lcid_9() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___lcid_9)); }
	inline int32_t get_lcid_9() const { return ___lcid_9; }
	inline int32_t* get_address_of_lcid_9() { return &___lcid_9; }
	inline void set_lcid_9(int32_t value)
	{
		___lcid_9 = value;
	}

	inline static int32_t get_offset_of_contractions_10() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___contractions_10)); }
	inline ContractionU5BU5D_t3119464888* get_contractions_10() const { return ___contractions_10; }
	inline ContractionU5BU5D_t3119464888** get_address_of_contractions_10() { return &___contractions_10; }
	inline void set_contractions_10(ContractionU5BU5D_t3119464888* value)
	{
		___contractions_10 = value;
		Il2CppCodeGenWriteBarrier((&___contractions_10), value);
	}

	inline static int32_t get_offset_of_level2Maps_11() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___level2Maps_11)); }
	inline Level2MapU5BU5D_t2416891939* get_level2Maps_11() const { return ___level2Maps_11; }
	inline Level2MapU5BU5D_t2416891939** get_address_of_level2Maps_11() { return &___level2Maps_11; }
	inline void set_level2Maps_11(Level2MapU5BU5D_t2416891939* value)
	{
		___level2Maps_11 = value;
		Il2CppCodeGenWriteBarrier((&___level2Maps_11), value);
	}

	inline static int32_t get_offset_of_unsafeFlags_12() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570, ___unsafeFlags_12)); }
	inline ByteU5BU5D_t3211447327* get_unsafeFlags_12() const { return ___unsafeFlags_12; }
	inline ByteU5BU5D_t3211447327** get_address_of_unsafeFlags_12() { return &___unsafeFlags_12; }
	inline void set_unsafeFlags_12(ByteU5BU5D_t3211447327* value)
	{
		___unsafeFlags_12 = value;
		Il2CppCodeGenWriteBarrier((&___unsafeFlags_12), value);
	}
};

struct SimpleCollator_t385558570_StaticFields
{
public:
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckDisabled
	bool ___QuickCheckDisabled_0;
	// Mono.Globalization.Unicode.SimpleCollator Mono.Globalization.Unicode.SimpleCollator::invariant
	SimpleCollator_t385558570 * ___invariant_1;

public:
	inline static int32_t get_offset_of_QuickCheckDisabled_0() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570_StaticFields, ___QuickCheckDisabled_0)); }
	inline bool get_QuickCheckDisabled_0() const { return ___QuickCheckDisabled_0; }
	inline bool* get_address_of_QuickCheckDisabled_0() { return &___QuickCheckDisabled_0; }
	inline void set_QuickCheckDisabled_0(bool value)
	{
		___QuickCheckDisabled_0 = value;
	}

	inline static int32_t get_offset_of_invariant_1() { return static_cast<int32_t>(offsetof(SimpleCollator_t385558570_StaticFields, ___invariant_1)); }
	inline SimpleCollator_t385558570 * get_invariant_1() const { return ___invariant_1; }
	inline SimpleCollator_t385558570 ** get_address_of_invariant_1() { return &___invariant_1; }
	inline void set_invariant_1(SimpleCollator_t385558570 * value)
	{
		___invariant_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOLLATOR_T385558570_H
#ifndef MSCOMPATUNICODETABLEUTIL_T139398475_H
#define MSCOMPATUNICODETABLEUTIL_T139398475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTableUtil
struct  MSCompatUnicodeTableUtil_t139398475  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTableUtil_t139398475_StaticFields
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Ignorable
	CodePointIndexer_t3966590323 * ___Ignorable_0;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Category
	CodePointIndexer_t3966590323 * ___Category_1;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level1
	CodePointIndexer_t3966590323 * ___Level1_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level2
	CodePointIndexer_t3966590323 * ___Level2_3;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level3
	CodePointIndexer_t3966590323 * ___Level3_4;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::CjkCHS
	CodePointIndexer_t3966590323 * ___CjkCHS_5;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Cjk
	CodePointIndexer_t3966590323 * ___Cjk_6;

public:
	inline static int32_t get_offset_of_Ignorable_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t139398475_StaticFields, ___Ignorable_0)); }
	inline CodePointIndexer_t3966590323 * get_Ignorable_0() const { return ___Ignorable_0; }
	inline CodePointIndexer_t3966590323 ** get_address_of_Ignorable_0() { return &___Ignorable_0; }
	inline void set_Ignorable_0(CodePointIndexer_t3966590323 * value)
	{
		___Ignorable_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ignorable_0), value);
	}

	inline static int32_t get_offset_of_Category_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t139398475_StaticFields, ___Category_1)); }
	inline CodePointIndexer_t3966590323 * get_Category_1() const { return ___Category_1; }
	inline CodePointIndexer_t3966590323 ** get_address_of_Category_1() { return &___Category_1; }
	inline void set_Category_1(CodePointIndexer_t3966590323 * value)
	{
		___Category_1 = value;
		Il2CppCodeGenWriteBarrier((&___Category_1), value);
	}

	inline static int32_t get_offset_of_Level1_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t139398475_StaticFields, ___Level1_2)); }
	inline CodePointIndexer_t3966590323 * get_Level1_2() const { return ___Level1_2; }
	inline CodePointIndexer_t3966590323 ** get_address_of_Level1_2() { return &___Level1_2; }
	inline void set_Level1_2(CodePointIndexer_t3966590323 * value)
	{
		___Level1_2 = value;
		Il2CppCodeGenWriteBarrier((&___Level1_2), value);
	}

	inline static int32_t get_offset_of_Level2_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t139398475_StaticFields, ___Level2_3)); }
	inline CodePointIndexer_t3966590323 * get_Level2_3() const { return ___Level2_3; }
	inline CodePointIndexer_t3966590323 ** get_address_of_Level2_3() { return &___Level2_3; }
	inline void set_Level2_3(CodePointIndexer_t3966590323 * value)
	{
		___Level2_3 = value;
		Il2CppCodeGenWriteBarrier((&___Level2_3), value);
	}

	inline static int32_t get_offset_of_Level3_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t139398475_StaticFields, ___Level3_4)); }
	inline CodePointIndexer_t3966590323 * get_Level3_4() const { return ___Level3_4; }
	inline CodePointIndexer_t3966590323 ** get_address_of_Level3_4() { return &___Level3_4; }
	inline void set_Level3_4(CodePointIndexer_t3966590323 * value)
	{
		___Level3_4 = value;
		Il2CppCodeGenWriteBarrier((&___Level3_4), value);
	}

	inline static int32_t get_offset_of_CjkCHS_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t139398475_StaticFields, ___CjkCHS_5)); }
	inline CodePointIndexer_t3966590323 * get_CjkCHS_5() const { return ___CjkCHS_5; }
	inline CodePointIndexer_t3966590323 ** get_address_of_CjkCHS_5() { return &___CjkCHS_5; }
	inline void set_CjkCHS_5(CodePointIndexer_t3966590323 * value)
	{
		___CjkCHS_5 = value;
		Il2CppCodeGenWriteBarrier((&___CjkCHS_5), value);
	}

	inline static int32_t get_offset_of_Cjk_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t139398475_StaticFields, ___Cjk_6)); }
	inline CodePointIndexer_t3966590323 * get_Cjk_6() const { return ___Cjk_6; }
	inline CodePointIndexer_t3966590323 ** get_address_of_Cjk_6() { return &___Cjk_6; }
	inline void set_Cjk_6(CodePointIndexer_t3966590323 * value)
	{
		___Cjk_6 = value;
		Il2CppCodeGenWriteBarrier((&___Cjk_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLEUTIL_T139398475_H
#ifndef MSCOMPATUNICODETABLE_T1127498958_H
#define MSCOMPATUNICODETABLE_T1127498958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct  MSCompatUnicodeTable_t1127498958  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTable_t1127498958_StaticFields
{
public:
	// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::MaxExpansionLength
	int32_t ___MaxExpansionLength_0;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::ignorableFlags
	uint8_t* ___ignorableFlags_1;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::categories
	uint8_t* ___categories_2;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level1
	uint8_t* ___level1_3;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level2
	uint8_t* ___level2_4;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level3
	uint8_t* ___level3_5;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHScategory
	uint8_t* ___cjkCHScategory_6;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTcategory
	uint8_t* ___cjkCHTcategory_7;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAcategory
	uint8_t* ___cjkJAcategory_8;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOcategory
	uint8_t* ___cjkKOcategory_9;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHSlv1
	uint8_t* ___cjkCHSlv1_10;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTlv1
	uint8_t* ___cjkCHTlv1_11;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAlv1
	uint8_t* ___cjkJAlv1_12;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv1
	uint8_t* ___cjkKOlv1_13;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv2
	uint8_t* ___cjkKOlv2_14;
	// System.Char[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringArr
	CharU5BU5D_t3680385359* ___tailoringArr_15;
	// Mono.Globalization.Unicode.TailoringInfo[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringInfos
	TailoringInfoU5BU5D_t2494201537* ___tailoringInfos_16;
	// System.Object Mono.Globalization.Unicode.MSCompatUnicodeTable::forLock
	RuntimeObject * ___forLock_17;
	// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::isReady
	bool ___isReady_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map2
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map2_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map3
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map3_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map4
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map4_21;

public:
	inline static int32_t get_offset_of_MaxExpansionLength_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___MaxExpansionLength_0)); }
	inline int32_t get_MaxExpansionLength_0() const { return ___MaxExpansionLength_0; }
	inline int32_t* get_address_of_MaxExpansionLength_0() { return &___MaxExpansionLength_0; }
	inline void set_MaxExpansionLength_0(int32_t value)
	{
		___MaxExpansionLength_0 = value;
	}

	inline static int32_t get_offset_of_ignorableFlags_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___ignorableFlags_1)); }
	inline uint8_t* get_ignorableFlags_1() const { return ___ignorableFlags_1; }
	inline uint8_t** get_address_of_ignorableFlags_1() { return &___ignorableFlags_1; }
	inline void set_ignorableFlags_1(uint8_t* value)
	{
		___ignorableFlags_1 = value;
	}

	inline static int32_t get_offset_of_categories_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___categories_2)); }
	inline uint8_t* get_categories_2() const { return ___categories_2; }
	inline uint8_t** get_address_of_categories_2() { return &___categories_2; }
	inline void set_categories_2(uint8_t* value)
	{
		___categories_2 = value;
	}

	inline static int32_t get_offset_of_level1_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___level1_3)); }
	inline uint8_t* get_level1_3() const { return ___level1_3; }
	inline uint8_t** get_address_of_level1_3() { return &___level1_3; }
	inline void set_level1_3(uint8_t* value)
	{
		___level1_3 = value;
	}

	inline static int32_t get_offset_of_level2_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___level2_4)); }
	inline uint8_t* get_level2_4() const { return ___level2_4; }
	inline uint8_t** get_address_of_level2_4() { return &___level2_4; }
	inline void set_level2_4(uint8_t* value)
	{
		___level2_4 = value;
	}

	inline static int32_t get_offset_of_level3_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___level3_5)); }
	inline uint8_t* get_level3_5() const { return ___level3_5; }
	inline uint8_t** get_address_of_level3_5() { return &___level3_5; }
	inline void set_level3_5(uint8_t* value)
	{
		___level3_5 = value;
	}

	inline static int32_t get_offset_of_cjkCHScategory_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkCHScategory_6)); }
	inline uint8_t* get_cjkCHScategory_6() const { return ___cjkCHScategory_6; }
	inline uint8_t** get_address_of_cjkCHScategory_6() { return &___cjkCHScategory_6; }
	inline void set_cjkCHScategory_6(uint8_t* value)
	{
		___cjkCHScategory_6 = value;
	}

	inline static int32_t get_offset_of_cjkCHTcategory_7() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkCHTcategory_7)); }
	inline uint8_t* get_cjkCHTcategory_7() const { return ___cjkCHTcategory_7; }
	inline uint8_t** get_address_of_cjkCHTcategory_7() { return &___cjkCHTcategory_7; }
	inline void set_cjkCHTcategory_7(uint8_t* value)
	{
		___cjkCHTcategory_7 = value;
	}

	inline static int32_t get_offset_of_cjkJAcategory_8() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkJAcategory_8)); }
	inline uint8_t* get_cjkJAcategory_8() const { return ___cjkJAcategory_8; }
	inline uint8_t** get_address_of_cjkJAcategory_8() { return &___cjkJAcategory_8; }
	inline void set_cjkJAcategory_8(uint8_t* value)
	{
		___cjkJAcategory_8 = value;
	}

	inline static int32_t get_offset_of_cjkKOcategory_9() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkKOcategory_9)); }
	inline uint8_t* get_cjkKOcategory_9() const { return ___cjkKOcategory_9; }
	inline uint8_t** get_address_of_cjkKOcategory_9() { return &___cjkKOcategory_9; }
	inline void set_cjkKOcategory_9(uint8_t* value)
	{
		___cjkKOcategory_9 = value;
	}

	inline static int32_t get_offset_of_cjkCHSlv1_10() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkCHSlv1_10)); }
	inline uint8_t* get_cjkCHSlv1_10() const { return ___cjkCHSlv1_10; }
	inline uint8_t** get_address_of_cjkCHSlv1_10() { return &___cjkCHSlv1_10; }
	inline void set_cjkCHSlv1_10(uint8_t* value)
	{
		___cjkCHSlv1_10 = value;
	}

	inline static int32_t get_offset_of_cjkCHTlv1_11() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkCHTlv1_11)); }
	inline uint8_t* get_cjkCHTlv1_11() const { return ___cjkCHTlv1_11; }
	inline uint8_t** get_address_of_cjkCHTlv1_11() { return &___cjkCHTlv1_11; }
	inline void set_cjkCHTlv1_11(uint8_t* value)
	{
		___cjkCHTlv1_11 = value;
	}

	inline static int32_t get_offset_of_cjkJAlv1_12() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkJAlv1_12)); }
	inline uint8_t* get_cjkJAlv1_12() const { return ___cjkJAlv1_12; }
	inline uint8_t** get_address_of_cjkJAlv1_12() { return &___cjkJAlv1_12; }
	inline void set_cjkJAlv1_12(uint8_t* value)
	{
		___cjkJAlv1_12 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv1_13() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkKOlv1_13)); }
	inline uint8_t* get_cjkKOlv1_13() const { return ___cjkKOlv1_13; }
	inline uint8_t** get_address_of_cjkKOlv1_13() { return &___cjkKOlv1_13; }
	inline void set_cjkKOlv1_13(uint8_t* value)
	{
		___cjkKOlv1_13 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv2_14() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___cjkKOlv2_14)); }
	inline uint8_t* get_cjkKOlv2_14() const { return ___cjkKOlv2_14; }
	inline uint8_t** get_address_of_cjkKOlv2_14() { return &___cjkKOlv2_14; }
	inline void set_cjkKOlv2_14(uint8_t* value)
	{
		___cjkKOlv2_14 = value;
	}

	inline static int32_t get_offset_of_tailoringArr_15() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___tailoringArr_15)); }
	inline CharU5BU5D_t3680385359* get_tailoringArr_15() const { return ___tailoringArr_15; }
	inline CharU5BU5D_t3680385359** get_address_of_tailoringArr_15() { return &___tailoringArr_15; }
	inline void set_tailoringArr_15(CharU5BU5D_t3680385359* value)
	{
		___tailoringArr_15 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringArr_15), value);
	}

	inline static int32_t get_offset_of_tailoringInfos_16() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___tailoringInfos_16)); }
	inline TailoringInfoU5BU5D_t2494201537* get_tailoringInfos_16() const { return ___tailoringInfos_16; }
	inline TailoringInfoU5BU5D_t2494201537** get_address_of_tailoringInfos_16() { return &___tailoringInfos_16; }
	inline void set_tailoringInfos_16(TailoringInfoU5BU5D_t2494201537* value)
	{
		___tailoringInfos_16 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringInfos_16), value);
	}

	inline static int32_t get_offset_of_forLock_17() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___forLock_17)); }
	inline RuntimeObject * get_forLock_17() const { return ___forLock_17; }
	inline RuntimeObject ** get_address_of_forLock_17() { return &___forLock_17; }
	inline void set_forLock_17(RuntimeObject * value)
	{
		___forLock_17 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_17), value);
	}

	inline static int32_t get_offset_of_isReady_18() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___isReady_18)); }
	inline bool get_isReady_18() const { return ___isReady_18; }
	inline bool* get_address_of_isReady_18() { return &___isReady_18; }
	inline void set_isReady_18(bool value)
	{
		___isReady_18 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_19() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___U3CU3Ef__switchU24map2_19)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map2_19() const { return ___U3CU3Ef__switchU24map2_19; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map2_19() { return &___U3CU3Ef__switchU24map2_19; }
	inline void set_U3CU3Ef__switchU24map2_19(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map2_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_20() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___U3CU3Ef__switchU24map3_20)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map3_20() const { return ___U3CU3Ef__switchU24map3_20; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map3_20() { return &___U3CU3Ef__switchU24map3_20; }
	inline void set_U3CU3Ef__switchU24map3_20(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map3_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_21() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1127498958_StaticFields, ___U3CU3Ef__switchU24map4_21)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map4_21() const { return ___U3CU3Ef__switchU24map4_21; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map4_21() { return &___U3CU3Ef__switchU24map4_21; }
	inline void set_U3CU3Ef__switchU24map4_21(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map4_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLE_T1127498958_H
#ifndef WIN32REGISTRYAPI_T202270062_H
#define WIN32REGISTRYAPI_T202270062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32RegistryApi
struct  Win32RegistryApi_t202270062  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32RegistryApi::NativeBytesPerCharacter
	int32_t ___NativeBytesPerCharacter_0;

public:
	inline static int32_t get_offset_of_NativeBytesPerCharacter_0() { return static_cast<int32_t>(offsetof(Win32RegistryApi_t202270062, ___NativeBytesPerCharacter_0)); }
	inline int32_t get_NativeBytesPerCharacter_0() const { return ___NativeBytesPerCharacter_0; }
	inline int32_t* get_address_of_NativeBytesPerCharacter_0() { return &___NativeBytesPerCharacter_0; }
	inline void set_NativeBytesPerCharacter_0(int32_t value)
	{
		___NativeBytesPerCharacter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32REGISTRYAPI_T202270062_H
#ifndef PRIMALITYTESTS_T1487464065_H
#define PRIMALITYTESTS_T1487464065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t1487464065  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T1487464065_H
#ifndef BIGINTEGER_T2833572241_H
#define BIGINTEGER_T2833572241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2833572241  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t3268503027* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t2833572241, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2833572241, ___data_1)); }
	inline UInt32U5BU5D_t3268503027* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t3268503027** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t3268503027* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t2833572241_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t3268503027* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t214893434 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t2833572241_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t3268503027* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t3268503027** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t3268503027* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t2833572241_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t214893434 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t214893434 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t214893434 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T2833572241_H
#ifndef MODULUSRING_T1463012966_H
#define MODULUSRING_T1463012966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t1463012966  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2833572241 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2833572241 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t1463012966, ___mod_0)); }
	inline BigInteger_t2833572241 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2833572241 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2833572241 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t1463012966, ___constant_1)); }
	inline BigInteger_t2833572241 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2833572241 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2833572241 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T1463012966_H
#ifndef CODEPOINTINDEXER_T3966590323_H
#define CODEPOINTINDEXER_T3966590323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer
struct  CodePointIndexer_t3966590323  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer/TableRange[] Mono.Globalization.Unicode.CodePointIndexer::ranges
	TableRangeU5BU5D_t2537401623* ___ranges_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::TotalCount
	int32_t ___TotalCount_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultIndex
	int32_t ___defaultIndex_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultCP
	int32_t ___defaultCP_3;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3966590323, ___ranges_0)); }
	inline TableRangeU5BU5D_t2537401623* get_ranges_0() const { return ___ranges_0; }
	inline TableRangeU5BU5D_t2537401623** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(TableRangeU5BU5D_t2537401623* value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_TotalCount_1() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3966590323, ___TotalCount_1)); }
	inline int32_t get_TotalCount_1() const { return ___TotalCount_1; }
	inline int32_t* get_address_of_TotalCount_1() { return &___TotalCount_1; }
	inline void set_TotalCount_1(int32_t value)
	{
		___TotalCount_1 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_2() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3966590323, ___defaultIndex_2)); }
	inline int32_t get_defaultIndex_2() const { return ___defaultIndex_2; }
	inline int32_t* get_address_of_defaultIndex_2() { return &___defaultIndex_2; }
	inline void set_defaultIndex_2(int32_t value)
	{
		___defaultIndex_2 = value;
	}

	inline static int32_t get_offset_of_defaultCP_3() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3966590323, ___defaultCP_3)); }
	inline int32_t get_defaultCP_3() const { return ___defaultCP_3; }
	inline int32_t* get_address_of_defaultCP_3() { return &___defaultCP_3; }
	inline void set_defaultCP_3(int32_t value)
	{
		___defaultCP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPOINTINDEXER_T3966590323_H
#ifndef KERNEL_T1914509127_H
#define KERNEL_T1914509127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1914509127  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1914509127_H
#ifndef CONTRACTIONCOMPARER_T2469179294_H
#define CONTRACTIONCOMPARER_T2469179294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.ContractionComparer
struct  ContractionComparer_t2469179294  : public RuntimeObject
{
public:

public:
};

struct ContractionComparer_t2469179294_StaticFields
{
public:
	// Mono.Globalization.Unicode.ContractionComparer Mono.Globalization.Unicode.ContractionComparer::Instance
	ContractionComparer_t2469179294 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ContractionComparer_t2469179294_StaticFields, ___Instance_0)); }
	inline ContractionComparer_t2469179294 * get_Instance_0() const { return ___Instance_0; }
	inline ContractionComparer_t2469179294 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ContractionComparer_t2469179294 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTIONCOMPARER_T2469179294_H
#ifndef AUTHENTICODEBASE_T3017943195_H
#define AUTHENTICODEBASE_T3017943195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeBase
struct  AuthenticodeBase_t3017943195  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::fileblock
	ByteU5BU5D_t3211447327* ___fileblock_0;
	// System.IO.FileStream Mono.Security.Authenticode.AuthenticodeBase::fs
	FileStream_t2808603896 * ___fs_1;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockNo
	int32_t ___blockNo_2;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockLength
	int32_t ___blockLength_3;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::peOffset
	int32_t ___peOffset_4;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecurityOffset
	int32_t ___dirSecurityOffset_5;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecuritySize
	int32_t ___dirSecuritySize_6;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::coffSymbolTableOffset
	int32_t ___coffSymbolTableOffset_7;

public:
	inline static int32_t get_offset_of_fileblock_0() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___fileblock_0)); }
	inline ByteU5BU5D_t3211447327* get_fileblock_0() const { return ___fileblock_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_fileblock_0() { return &___fileblock_0; }
	inline void set_fileblock_0(ByteU5BU5D_t3211447327* value)
	{
		___fileblock_0 = value;
		Il2CppCodeGenWriteBarrier((&___fileblock_0), value);
	}

	inline static int32_t get_offset_of_fs_1() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___fs_1)); }
	inline FileStream_t2808603896 * get_fs_1() const { return ___fs_1; }
	inline FileStream_t2808603896 ** get_address_of_fs_1() { return &___fs_1; }
	inline void set_fs_1(FileStream_t2808603896 * value)
	{
		___fs_1 = value;
		Il2CppCodeGenWriteBarrier((&___fs_1), value);
	}

	inline static int32_t get_offset_of_blockNo_2() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___blockNo_2)); }
	inline int32_t get_blockNo_2() const { return ___blockNo_2; }
	inline int32_t* get_address_of_blockNo_2() { return &___blockNo_2; }
	inline void set_blockNo_2(int32_t value)
	{
		___blockNo_2 = value;
	}

	inline static int32_t get_offset_of_blockLength_3() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___blockLength_3)); }
	inline int32_t get_blockLength_3() const { return ___blockLength_3; }
	inline int32_t* get_address_of_blockLength_3() { return &___blockLength_3; }
	inline void set_blockLength_3(int32_t value)
	{
		___blockLength_3 = value;
	}

	inline static int32_t get_offset_of_peOffset_4() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___peOffset_4)); }
	inline int32_t get_peOffset_4() const { return ___peOffset_4; }
	inline int32_t* get_address_of_peOffset_4() { return &___peOffset_4; }
	inline void set_peOffset_4(int32_t value)
	{
		___peOffset_4 = value;
	}

	inline static int32_t get_offset_of_dirSecurityOffset_5() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___dirSecurityOffset_5)); }
	inline int32_t get_dirSecurityOffset_5() const { return ___dirSecurityOffset_5; }
	inline int32_t* get_address_of_dirSecurityOffset_5() { return &___dirSecurityOffset_5; }
	inline void set_dirSecurityOffset_5(int32_t value)
	{
		___dirSecurityOffset_5 = value;
	}

	inline static int32_t get_offset_of_dirSecuritySize_6() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___dirSecuritySize_6)); }
	inline int32_t get_dirSecuritySize_6() const { return ___dirSecuritySize_6; }
	inline int32_t* get_address_of_dirSecuritySize_6() { return &___dirSecuritySize_6; }
	inline void set_dirSecuritySize_6(int32_t value)
	{
		___dirSecuritySize_6 = value;
	}

	inline static int32_t get_offset_of_coffSymbolTableOffset_7() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t3017943195, ___coffSymbolTableOffset_7)); }
	inline int32_t get_coffSymbolTableOffset_7() const { return ___coffSymbolTableOffset_7; }
	inline int32_t* get_address_of_coffSymbolTableOffset_7() { return &___coffSymbolTableOffset_7; }
	inline void set_coffSymbolTableOffset_7(int32_t value)
	{
		___coffSymbolTableOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEBASE_T3017943195_H
#ifndef UNIXREGISTRYAPI_T1874203425_H
#define UNIXREGISTRYAPI_T1874203425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.UnixRegistryApi
struct  UnixRegistryApi_t1874203425  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXREGISTRYAPI_T1874203425_H
#ifndef CONTRACTION_T1871396181_H
#define CONTRACTION_T1871396181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t1871396181  : public RuntimeObject
{
public:
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t3680385359* ___Source_0;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_1;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t3211447327* ___SortKey_2;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Contraction_t1871396181, ___Source_0)); }
	inline CharU5BU5D_t3680385359* get_Source_0() const { return ___Source_0; }
	inline CharU5BU5D_t3680385359** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(CharU5BU5D_t3680385359* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Replacement_1() { return static_cast<int32_t>(offsetof(Contraction_t1871396181, ___Replacement_1)); }
	inline String_t* get_Replacement_1() const { return ___Replacement_1; }
	inline String_t** get_address_of_Replacement_1() { return &___Replacement_1; }
	inline void set_Replacement_1(String_t* value)
	{
		___Replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___Replacement_1), value);
	}

	inline static int32_t get_offset_of_SortKey_2() { return static_cast<int32_t>(offsetof(Contraction_t1871396181, ___SortKey_2)); }
	inline ByteU5BU5D_t3211447327* get_SortKey_2() const { return ___SortKey_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_SortKey_2() { return &___SortKey_2; }
	inline void set_SortKey_2(ByteU5BU5D_t3211447327* value)
	{
		___SortKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___SortKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTION_T1871396181_H
#ifndef CRYPTOCONVERT_T2835797576_H
#define CRYPTOCONVERT_T2835797576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t2835797576  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T2835797576_H
#ifndef KEYBUILDER_T1099398106_H
#define KEYBUILDER_T1099398106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1099398106  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1099398106_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t214893434 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1099398106_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t214893434 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t214893434 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t214893434 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T1099398106_H
#ifndef BLOCKPROCESSOR_T2568162817_H
#define BLOCKPROCESSOR_T2568162817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.BlockProcessor
struct  BlockProcessor_t2568162817  : public RuntimeObject
{
public:
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.BlockProcessor::transform
	RuntimeObject* ___transform_0;
	// System.Byte[] Mono.Security.Cryptography.BlockProcessor::block
	ByteU5BU5D_t3211447327* ___block_1;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockSize
	int32_t ___blockSize_2;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockCount
	int32_t ___blockCount_3;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(BlockProcessor_t2568162817, ___transform_0)); }
	inline RuntimeObject* get_transform_0() const { return ___transform_0; }
	inline RuntimeObject** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(RuntimeObject* value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((&___transform_0), value);
	}

	inline static int32_t get_offset_of_block_1() { return static_cast<int32_t>(offsetof(BlockProcessor_t2568162817, ___block_1)); }
	inline ByteU5BU5D_t3211447327* get_block_1() const { return ___block_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_block_1() { return &___block_1; }
	inline void set_block_1(ByteU5BU5D_t3211447327* value)
	{
		___block_1 = value;
		Il2CppCodeGenWriteBarrier((&___block_1), value);
	}

	inline static int32_t get_offset_of_blockSize_2() { return static_cast<int32_t>(offsetof(BlockProcessor_t2568162817, ___blockSize_2)); }
	inline int32_t get_blockSize_2() const { return ___blockSize_2; }
	inline int32_t* get_address_of_blockSize_2() { return &___blockSize_2; }
	inline void set_blockSize_2(int32_t value)
	{
		___blockSize_2 = value;
	}

	inline static int32_t get_offset_of_blockCount_3() { return static_cast<int32_t>(offsetof(BlockProcessor_t2568162817, ___blockCount_3)); }
	inline int32_t get_blockCount_3() const { return ___blockCount_3; }
	inline int32_t* get_address_of_blockCount_3() { return &___blockCount_3; }
	inline void set_blockCount_3(int32_t value)
	{
		___blockCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKPROCESSOR_T2568162817_H
#ifndef LEVEL2MAP_T3992864006_H
#define LEVEL2MAP_T3992864006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2Map
struct  Level2Map_t3992864006  : public RuntimeObject
{
public:
	// System.Byte Mono.Globalization.Unicode.Level2Map::Source
	uint8_t ___Source_0;
	// System.Byte Mono.Globalization.Unicode.Level2Map::Replace
	uint8_t ___Replace_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Level2Map_t3992864006, ___Source_0)); }
	inline uint8_t get_Source_0() const { return ___Source_0; }
	inline uint8_t* get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(uint8_t value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_Replace_1() { return static_cast<int32_t>(offsetof(Level2Map_t3992864006, ___Replace_1)); }
	inline uint8_t get_Replace_1() const { return ___Replace_1; }
	inline uint8_t* get_address_of_Replace_1() { return &___Replace_1; }
	inline void set_Replace_1(uint8_t value)
	{
		___Replace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAP_T3992864006_H
#ifndef ESCAPE_T2360530905_H
#define ESCAPE_T2360530905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Escape
struct  Escape_t2360530905 
{
public:
	// System.String Mono.Globalization.Unicode.SimpleCollator/Escape::Source
	String_t* ___Source_0;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Index
	int32_t ___Index_1;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Start
	int32_t ___Start_2;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::End
	int32_t ___End_3;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Optional
	int32_t ___Optional_4;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Escape_t2360530905, ___Source_0)); }
	inline String_t* get_Source_0() const { return ___Source_0; }
	inline String_t** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(String_t* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Escape_t2360530905, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Start_2() { return static_cast<int32_t>(offsetof(Escape_t2360530905, ___Start_2)); }
	inline int32_t get_Start_2() const { return ___Start_2; }
	inline int32_t* get_address_of_Start_2() { return &___Start_2; }
	inline void set_Start_2(int32_t value)
	{
		___Start_2 = value;
	}

	inline static int32_t get_offset_of_End_3() { return static_cast<int32_t>(offsetof(Escape_t2360530905, ___End_3)); }
	inline int32_t get_End_3() const { return ___End_3; }
	inline int32_t* get_address_of_End_3() { return &___End_3; }
	inline void set_End_3(int32_t value)
	{
		___End_3 = value;
	}

	inline static int32_t get_offset_of_Optional_4() { return static_cast<int32_t>(offsetof(Escape_t2360530905, ___Optional_4)); }
	inline int32_t get_Optional_4() const { return ___Optional_4; }
	inline int32_t* get_address_of_Optional_4() { return &___Optional_4; }
	inline void set_Optional_4(int32_t value)
	{
		___Optional_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t2360530905_marshaled_pinvoke
{
	char* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t2360530905_marshaled_com
{
	Il2CppChar* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
#endif // ESCAPE_T2360530905_H
#ifndef SECURITYPARSER_T632205435_H
#define SECURITYPARSER_T632205435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SecurityParser
struct  SecurityParser_t632205435  : public SmallXmlParser_t2801581108
{
public:
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1747637791 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1747637791 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t3827704391 * ___stack_15;

public:
	inline static int32_t get_offset_of_root_13() { return static_cast<int32_t>(offsetof(SecurityParser_t632205435, ___root_13)); }
	inline SecurityElement_t1747637791 * get_root_13() const { return ___root_13; }
	inline SecurityElement_t1747637791 ** get_address_of_root_13() { return &___root_13; }
	inline void set_root_13(SecurityElement_t1747637791 * value)
	{
		___root_13 = value;
		Il2CppCodeGenWriteBarrier((&___root_13), value);
	}

	inline static int32_t get_offset_of_current_14() { return static_cast<int32_t>(offsetof(SecurityParser_t632205435, ___current_14)); }
	inline SecurityElement_t1747637791 * get_current_14() const { return ___current_14; }
	inline SecurityElement_t1747637791 ** get_address_of_current_14() { return &___current_14; }
	inline void set_current_14(SecurityElement_t1747637791 * value)
	{
		___current_14 = value;
		Il2CppCodeGenWriteBarrier((&___current_14), value);
	}

	inline static int32_t get_offset_of_stack_15() { return static_cast<int32_t>(offsetof(SecurityParser_t632205435, ___stack_15)); }
	inline Stack_t3827704391 * get_stack_15() const { return ___stack_15; }
	inline Stack_t3827704391 ** get_address_of_stack_15() { return &___stack_15; }
	inline void set_stack_15(Stack_t3827704391 * value)
	{
		___stack_15 = value;
		Il2CppCodeGenWriteBarrier((&___stack_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPARSER_T632205435_H
#ifndef TABLERANGE_T3364611106_H
#define TABLERANGE_T3364611106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t3364611106 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t3364611106, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t3364611106, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t3364611106, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t3364611106, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t3364611106, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T3364611106_H
#ifndef PREVIOUSINFO_T2651394912_H
#define PREVIOUSINFO_T2651394912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct  PreviousInfo_t2651394912 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::Code
	int32_t ___Code_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::SortKey
	uint8_t* ___SortKey_1;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(PreviousInfo_t2651394912, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_SortKey_1() { return static_cast<int32_t>(offsetof(PreviousInfo_t2651394912, ___SortKey_1)); }
	inline uint8_t* get_SortKey_1() const { return ___SortKey_1; }
	inline uint8_t** get_address_of_SortKey_1() { return &___SortKey_1; }
	inline void set_SortKey_1(uint8_t* value)
	{
		___SortKey_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2651394912_marshaled_pinvoke
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2651394912_marshaled_com
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
#endif // PREVIOUSINFO_T2651394912_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DSA_T2517477956_H
#define DSA_T2517477956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2517477956  : public AsymmetricAlgorithm_t1807694938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2517477956_H
#ifndef ENUM_T1186000454_H
#define ENUM_T1186000454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1186000454  : public ValueType_t3384490125
{
public:

public:
};

struct Enum_t1186000454_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3680385359* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1186000454_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3680385359* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3680385359** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3680385359* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1186000454_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1186000454_marshaled_com
{
};
#endif // ENUM_T1186000454_H
#ifndef X509EXTENSIONCOLLECTION_T682619128_H
#define X509EXTENSIONCOLLECTION_T682619128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t682619128  : public CollectionBase_t2976814940
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t682619128, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T682619128_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T222900672_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T222900672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t222900672  : public PrimeGeneratorBase_t1196227554
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T222900672_H
#ifndef VOID_T669509276_H
#define VOID_T669509276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t669509276 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T669509276_H
#ifndef RSA_T765183856_H
#define RSA_T765183856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t765183856  : public AsymmetricAlgorithm_t1807694938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T765183856_H
#ifndef X509CERTIFICATECOLLECTION_T3742608460_H
#define X509CERTIFICATECOLLECTION_T3742608460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t3742608460  : public CollectionBase_t2976814940
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3742608460_H
#ifndef SYSTEMEXCEPTION_T4124770834_H
#define SYSTEMEXCEPTION_T4124770834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t4124770834  : public Exception_t3285723142
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T4124770834_H
#ifndef BASICCONSTRAINTSEXTENSION_T778317414_H
#define BASICCONSTRAINTSEXTENSION_T778317414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t778317414  : public X509Extension_t2466191591
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t778317414, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t778317414, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T778317414_H
#ifndef TIMESPAN_T2435896000_H
#define TIMESPAN_T2435896000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2435896000 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2435896000, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2435896000_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2435896000  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2435896000  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2435896000  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2435896000_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t2435896000  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t2435896000 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t2435896000  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2435896000_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t2435896000  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t2435896000 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t2435896000  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2435896000_StaticFields, ___Zero_2)); }
	inline TimeSpan_t2435896000  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t2435896000 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t2435896000  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2435896000_H
#ifndef LINK_T621408978_H
#define LINK_T621408978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Link
struct  Link_t621408978 
{
public:
	// System.Int32 System.Collections.Generic.Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t621408978, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t621408978, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T621408978_H
#ifndef DATETIMEKIND_T3776209548_H
#define DATETIMEKIND_T3776209548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3776209548 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3776209548, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3776209548_H
#ifndef DELEGATE_T1482408207_H
#define DELEGATE_T1482408207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1482408207  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3788393282 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1482408207, ___data_8)); }
	inline DelegateData_t3788393282 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3788393282 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3788393282 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1482408207_H
#ifndef KEYNOTFOUNDEXCEPTION_T3423694178_H
#define KEYNOTFOUNDEXCEPTION_T3423694178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t3423694178  : public SystemException_t4124770834
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T3423694178_H
#ifndef COMPAREOPTIONS_T1252822224_H
#define COMPAREOPTIONS_T1252822224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t1252822224 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareOptions_t1252822224, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREOPTIONS_T1252822224_H
#ifndef DSAMANAGED_T3692869051_H
#define DSAMANAGED_T3692869051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged
struct  DSAManaged_t3692869051  : public DSA_t2517477956
{
public:
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated_3;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t2833572241 * ___p_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t2833572241 * ___q_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t2833572241 * ___g_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t2833572241 * ___x_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t2833572241 * ___y_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t2833572241 * ___j_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t2833572241 * ___seed_11;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter_12;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing_13;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t214893434 * ___rng_14;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t1498806477 * ___KeyGenerated_15;

public:
	inline static int32_t get_offset_of_keypairGenerated_3() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___keypairGenerated_3)); }
	inline bool get_keypairGenerated_3() const { return ___keypairGenerated_3; }
	inline bool* get_address_of_keypairGenerated_3() { return &___keypairGenerated_3; }
	inline void set_keypairGenerated_3(bool value)
	{
		___keypairGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_disposed_4() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___m_disposed_4)); }
	inline bool get_m_disposed_4() const { return ___m_disposed_4; }
	inline bool* get_address_of_m_disposed_4() { return &___m_disposed_4; }
	inline void set_m_disposed_4(bool value)
	{
		___m_disposed_4 = value;
	}

	inline static int32_t get_offset_of_p_5() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___p_5)); }
	inline BigInteger_t2833572241 * get_p_5() const { return ___p_5; }
	inline BigInteger_t2833572241 ** get_address_of_p_5() { return &___p_5; }
	inline void set_p_5(BigInteger_t2833572241 * value)
	{
		___p_5 = value;
		Il2CppCodeGenWriteBarrier((&___p_5), value);
	}

	inline static int32_t get_offset_of_q_6() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___q_6)); }
	inline BigInteger_t2833572241 * get_q_6() const { return ___q_6; }
	inline BigInteger_t2833572241 ** get_address_of_q_6() { return &___q_6; }
	inline void set_q_6(BigInteger_t2833572241 * value)
	{
		___q_6 = value;
		Il2CppCodeGenWriteBarrier((&___q_6), value);
	}

	inline static int32_t get_offset_of_g_7() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___g_7)); }
	inline BigInteger_t2833572241 * get_g_7() const { return ___g_7; }
	inline BigInteger_t2833572241 ** get_address_of_g_7() { return &___g_7; }
	inline void set_g_7(BigInteger_t2833572241 * value)
	{
		___g_7 = value;
		Il2CppCodeGenWriteBarrier((&___g_7), value);
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___x_8)); }
	inline BigInteger_t2833572241 * get_x_8() const { return ___x_8; }
	inline BigInteger_t2833572241 ** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(BigInteger_t2833572241 * value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}

	inline static int32_t get_offset_of_y_9() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___y_9)); }
	inline BigInteger_t2833572241 * get_y_9() const { return ___y_9; }
	inline BigInteger_t2833572241 ** get_address_of_y_9() { return &___y_9; }
	inline void set_y_9(BigInteger_t2833572241 * value)
	{
		___y_9 = value;
		Il2CppCodeGenWriteBarrier((&___y_9), value);
	}

	inline static int32_t get_offset_of_j_10() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___j_10)); }
	inline BigInteger_t2833572241 * get_j_10() const { return ___j_10; }
	inline BigInteger_t2833572241 ** get_address_of_j_10() { return &___j_10; }
	inline void set_j_10(BigInteger_t2833572241 * value)
	{
		___j_10 = value;
		Il2CppCodeGenWriteBarrier((&___j_10), value);
	}

	inline static int32_t get_offset_of_seed_11() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___seed_11)); }
	inline BigInteger_t2833572241 * get_seed_11() const { return ___seed_11; }
	inline BigInteger_t2833572241 ** get_address_of_seed_11() { return &___seed_11; }
	inline void set_seed_11(BigInteger_t2833572241 * value)
	{
		___seed_11 = value;
		Il2CppCodeGenWriteBarrier((&___seed_11), value);
	}

	inline static int32_t get_offset_of_counter_12() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___counter_12)); }
	inline int32_t get_counter_12() const { return ___counter_12; }
	inline int32_t* get_address_of_counter_12() { return &___counter_12; }
	inline void set_counter_12(int32_t value)
	{
		___counter_12 = value;
	}

	inline static int32_t get_offset_of_j_missing_13() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___j_missing_13)); }
	inline bool get_j_missing_13() const { return ___j_missing_13; }
	inline bool* get_address_of_j_missing_13() { return &___j_missing_13; }
	inline void set_j_missing_13(bool value)
	{
		___j_missing_13 = value;
	}

	inline static int32_t get_offset_of_rng_14() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___rng_14)); }
	inline RandomNumberGenerator_t214893434 * get_rng_14() const { return ___rng_14; }
	inline RandomNumberGenerator_t214893434 ** get_address_of_rng_14() { return &___rng_14; }
	inline void set_rng_14(RandomNumberGenerator_t214893434 * value)
	{
		___rng_14 = value;
		Il2CppCodeGenWriteBarrier((&___rng_14), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_15() { return static_cast<int32_t>(offsetof(DSAManaged_t3692869051, ___KeyGenerated_15)); }
	inline KeyGeneratedEventHandler_t1498806477 * get_KeyGenerated_15() const { return ___KeyGenerated_15; }
	inline KeyGeneratedEventHandler_t1498806477 ** get_address_of_KeyGenerated_15() { return &___KeyGenerated_15; }
	inline void set_KeyGenerated_15(KeyGeneratedEventHandler_t1498806477 * value)
	{
		___KeyGenerated_15 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAMANAGED_T3692869051_H
#ifndef CONFIDENCEFACTOR_T1363657514_H
#define CONFIDENCEFACTOR_T1363657514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t1363657514 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t1363657514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T1363657514_H
#ifndef EXTENDERTYPE_T2915463645_H
#define EXTENDERTYPE_T2915463645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
struct  ExtenderType_t2915463645 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/ExtenderType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExtenderType_t2915463645, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDERTYPE_T2915463645_H
#ifndef KEYINFO_T1882572041_H
#define KEYINFO_T1882572041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/KeyInfo
struct  KeyInfo_t1882572041 
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/KeyInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyInfo_t1882572041, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFO_T1882572041_H
#ifndef RSAMANAGED_T2465811819_H
#define RSAMANAGED_T2465811819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t2465811819  : public RSA_t765183856
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_5;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t2833572241 * ___d_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t2833572241 * ___p_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t2833572241 * ___q_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t2833572241 * ___dp_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t2833572241 * ___dq_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t2833572241 * ___qInv_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t2833572241 * ___n_13;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t2833572241 * ___e_14;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3763405038 * ___KeyGenerated_15;

public:
	inline static int32_t get_offset_of_isCRTpossible_3() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___isCRTpossible_3)); }
	inline bool get_isCRTpossible_3() const { return ___isCRTpossible_3; }
	inline bool* get_address_of_isCRTpossible_3() { return &___isCRTpossible_3; }
	inline void set_isCRTpossible_3(bool value)
	{
		___isCRTpossible_3 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_4() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___keyBlinding_4)); }
	inline bool get_keyBlinding_4() const { return ___keyBlinding_4; }
	inline bool* get_address_of_keyBlinding_4() { return &___keyBlinding_4; }
	inline void set_keyBlinding_4(bool value)
	{
		___keyBlinding_4 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_5() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___keypairGenerated_5)); }
	inline bool get_keypairGenerated_5() const { return ___keypairGenerated_5; }
	inline bool* get_address_of_keypairGenerated_5() { return &___keypairGenerated_5; }
	inline void set_keypairGenerated_5(bool value)
	{
		___keypairGenerated_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___d_7)); }
	inline BigInteger_t2833572241 * get_d_7() const { return ___d_7; }
	inline BigInteger_t2833572241 ** get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(BigInteger_t2833572241 * value)
	{
		___d_7 = value;
		Il2CppCodeGenWriteBarrier((&___d_7), value);
	}

	inline static int32_t get_offset_of_p_8() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___p_8)); }
	inline BigInteger_t2833572241 * get_p_8() const { return ___p_8; }
	inline BigInteger_t2833572241 ** get_address_of_p_8() { return &___p_8; }
	inline void set_p_8(BigInteger_t2833572241 * value)
	{
		___p_8 = value;
		Il2CppCodeGenWriteBarrier((&___p_8), value);
	}

	inline static int32_t get_offset_of_q_9() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___q_9)); }
	inline BigInteger_t2833572241 * get_q_9() const { return ___q_9; }
	inline BigInteger_t2833572241 ** get_address_of_q_9() { return &___q_9; }
	inline void set_q_9(BigInteger_t2833572241 * value)
	{
		___q_9 = value;
		Il2CppCodeGenWriteBarrier((&___q_9), value);
	}

	inline static int32_t get_offset_of_dp_10() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___dp_10)); }
	inline BigInteger_t2833572241 * get_dp_10() const { return ___dp_10; }
	inline BigInteger_t2833572241 ** get_address_of_dp_10() { return &___dp_10; }
	inline void set_dp_10(BigInteger_t2833572241 * value)
	{
		___dp_10 = value;
		Il2CppCodeGenWriteBarrier((&___dp_10), value);
	}

	inline static int32_t get_offset_of_dq_11() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___dq_11)); }
	inline BigInteger_t2833572241 * get_dq_11() const { return ___dq_11; }
	inline BigInteger_t2833572241 ** get_address_of_dq_11() { return &___dq_11; }
	inline void set_dq_11(BigInteger_t2833572241 * value)
	{
		___dq_11 = value;
		Il2CppCodeGenWriteBarrier((&___dq_11), value);
	}

	inline static int32_t get_offset_of_qInv_12() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___qInv_12)); }
	inline BigInteger_t2833572241 * get_qInv_12() const { return ___qInv_12; }
	inline BigInteger_t2833572241 ** get_address_of_qInv_12() { return &___qInv_12; }
	inline void set_qInv_12(BigInteger_t2833572241 * value)
	{
		___qInv_12 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_12), value);
	}

	inline static int32_t get_offset_of_n_13() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___n_13)); }
	inline BigInteger_t2833572241 * get_n_13() const { return ___n_13; }
	inline BigInteger_t2833572241 ** get_address_of_n_13() { return &___n_13; }
	inline void set_n_13(BigInteger_t2833572241 * value)
	{
		___n_13 = value;
		Il2CppCodeGenWriteBarrier((&___n_13), value);
	}

	inline static int32_t get_offset_of_e_14() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___e_14)); }
	inline BigInteger_t2833572241 * get_e_14() const { return ___e_14; }
	inline BigInteger_t2833572241 ** get_address_of_e_14() { return &___e_14; }
	inline void set_e_14(BigInteger_t2833572241 * value)
	{
		___e_14 = value;
		Il2CppCodeGenWriteBarrier((&___e_14), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_15() { return static_cast<int32_t>(offsetof(RSAManaged_t2465811819, ___KeyGenerated_15)); }
	inline KeyGeneratedEventHandler_t3763405038 * get_KeyGenerated_15() const { return ___KeyGenerated_15; }
	inline KeyGeneratedEventHandler_t3763405038 ** get_address_of_KeyGenerated_15() { return &___KeyGenerated_15; }
	inline void set_KeyGenerated_15(KeyGeneratedEventHandler_t3763405038 * value)
	{
		___KeyGenerated_15 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T2465811819_H
#ifndef SIGN_T2616005023_H
#define SIGN_T2616005023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t2616005023 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t2616005023, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGN_T2616005023_H
#ifndef X509CHAINSTATUSFLAGS_T1245170207_H
#define X509CHAINSTATUSFLAGS_T1245170207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1245170207 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1245170207, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINSTATUSFLAGS_T1245170207_H
#ifndef SMALLXMLPARSEREXCEPTION_T831939852_H
#define SMALLXMLPARSEREXCEPTION_T831939852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParserException
struct  SmallXmlParserException_t831939852  : public SystemException_t4124770834
{
public:
	// System.Int32 Mono.Xml.SmallXmlParserException::line
	int32_t ___line_11;
	// System.Int32 Mono.Xml.SmallXmlParserException::column
	int32_t ___column_12;

public:
	inline static int32_t get_offset_of_line_11() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t831939852, ___line_11)); }
	inline int32_t get_line_11() const { return ___line_11; }
	inline int32_t* get_address_of_line_11() { return &___line_11; }
	inline void set_line_11(int32_t value)
	{
		___line_11 = value;
	}

	inline static int32_t get_offset_of_column_12() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t831939852, ___column_12)); }
	inline int32_t get_column_12() const { return ___column_12; }
	inline int32_t* get_address_of_column_12() { return &___column_12; }
	inline void set_column_12(int32_t value)
	{
		___column_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLXMLPARSEREXCEPTION_T831939852_H
#ifndef CONTEXT_T3817494868_H
#define CONTEXT_T3817494868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Context
struct  Context_t3817494868 
{
public:
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SimpleCollator/Context::Option
	int32_t ___Option_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::NeverMatchFlags
	uint8_t* ___NeverMatchFlags_1;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::AlwaysMatchFlags
	uint8_t* ___AlwaysMatchFlags_2;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer1
	uint8_t* ___Buffer1_3;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer2
	uint8_t* ___Buffer2_4;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Context::PrevCode
	int32_t ___PrevCode_5;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::PrevSortKey
	uint8_t* ___PrevSortKey_6;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator/Context::QuickCheckPossible
	bool ___QuickCheckPossible_7;

public:
	inline static int32_t get_offset_of_Option_0() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___Option_0)); }
	inline int32_t get_Option_0() const { return ___Option_0; }
	inline int32_t* get_address_of_Option_0() { return &___Option_0; }
	inline void set_Option_0(int32_t value)
	{
		___Option_0 = value;
	}

	inline static int32_t get_offset_of_NeverMatchFlags_1() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___NeverMatchFlags_1)); }
	inline uint8_t* get_NeverMatchFlags_1() const { return ___NeverMatchFlags_1; }
	inline uint8_t** get_address_of_NeverMatchFlags_1() { return &___NeverMatchFlags_1; }
	inline void set_NeverMatchFlags_1(uint8_t* value)
	{
		___NeverMatchFlags_1 = value;
	}

	inline static int32_t get_offset_of_AlwaysMatchFlags_2() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___AlwaysMatchFlags_2)); }
	inline uint8_t* get_AlwaysMatchFlags_2() const { return ___AlwaysMatchFlags_2; }
	inline uint8_t** get_address_of_AlwaysMatchFlags_2() { return &___AlwaysMatchFlags_2; }
	inline void set_AlwaysMatchFlags_2(uint8_t* value)
	{
		___AlwaysMatchFlags_2 = value;
	}

	inline static int32_t get_offset_of_Buffer1_3() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___Buffer1_3)); }
	inline uint8_t* get_Buffer1_3() const { return ___Buffer1_3; }
	inline uint8_t** get_address_of_Buffer1_3() { return &___Buffer1_3; }
	inline void set_Buffer1_3(uint8_t* value)
	{
		___Buffer1_3 = value;
	}

	inline static int32_t get_offset_of_Buffer2_4() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___Buffer2_4)); }
	inline uint8_t* get_Buffer2_4() const { return ___Buffer2_4; }
	inline uint8_t** get_address_of_Buffer2_4() { return &___Buffer2_4; }
	inline void set_Buffer2_4(uint8_t* value)
	{
		___Buffer2_4 = value;
	}

	inline static int32_t get_offset_of_PrevCode_5() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___PrevCode_5)); }
	inline int32_t get_PrevCode_5() const { return ___PrevCode_5; }
	inline int32_t* get_address_of_PrevCode_5() { return &___PrevCode_5; }
	inline void set_PrevCode_5(int32_t value)
	{
		___PrevCode_5 = value;
	}

	inline static int32_t get_offset_of_PrevSortKey_6() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___PrevSortKey_6)); }
	inline uint8_t* get_PrevSortKey_6() const { return ___PrevSortKey_6; }
	inline uint8_t** get_address_of_PrevSortKey_6() { return &___PrevSortKey_6; }
	inline void set_PrevSortKey_6(uint8_t* value)
	{
		___PrevSortKey_6 = value;
	}

	inline static int32_t get_offset_of_QuickCheckPossible_7() { return static_cast<int32_t>(offsetof(Context_t3817494868, ___QuickCheckPossible_7)); }
	inline bool get_QuickCheckPossible_7() const { return ___QuickCheckPossible_7; }
	inline bool* get_address_of_QuickCheckPossible_7() { return &___QuickCheckPossible_7; }
	inline void set_QuickCheckPossible_7(bool value)
	{
		___QuickCheckPossible_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t3817494868_marshaled_pinvoke
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
	int32_t ___QuickCheckPossible_7;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t3817494868_marshaled_com
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
	int32_t ___QuickCheckPossible_7;
};
#endif // CONTEXT_T3817494868_H
#ifndef MULTICASTDELEGATE_T958895040_H
#define MULTICASTDELEGATE_T958895040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t958895040  : public Delegate_t1482408207
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t958895040 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t958895040 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t958895040, ___prev_9)); }
	inline MulticastDelegate_t958895040 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t958895040 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t958895040 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t958895040, ___kpm_next_10)); }
	inline MulticastDelegate_t958895040 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t958895040 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t958895040 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T958895040_H
#ifndef DATETIME_T481498736_H
#define DATETIME_T481498736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t481498736 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t2435896000  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t481498736, ___ticks_0)); }
	inline TimeSpan_t2435896000  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t2435896000 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t2435896000  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t481498736, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t481498736_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t481498736  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t481498736  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t421393138* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t421393138* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t421393138* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t421393138* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t421393138* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t421393138* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t421393138* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t617919100* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t617919100* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___MaxValue_2)); }
	inline DateTime_t481498736  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t481498736 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t481498736  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___MinValue_3)); }
	inline DateTime_t481498736  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t481498736 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t481498736  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t421393138* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t421393138** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t421393138* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t421393138* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t421393138** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t421393138* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t421393138* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t421393138** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t421393138* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t421393138* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t421393138** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t421393138* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t421393138* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t421393138** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t421393138* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t421393138* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t421393138** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t421393138* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t421393138* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t421393138** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t421393138* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t617919100* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t617919100** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t617919100* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t617919100* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t617919100** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t617919100* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t481498736_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T481498736_H
#ifndef SORTKEYBUFFER_T2773507607_H
#define SORTKEYBUFFER_T2773507607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SortKeyBuffer
struct  SortKeyBuffer_t2773507607  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l1
	int32_t ___l1_0;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l2
	int32_t ___l2_1;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l3
	int32_t ___l3_2;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4s
	int32_t ___l4s_3;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4t
	int32_t ___l4t_4;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4k
	int32_t ___l4k_5;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4w
	int32_t ___l4w_6;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l5
	int32_t ___l5_7;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l1b
	ByteU5BU5D_t3211447327* ___l1b_8;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l2b
	ByteU5BU5D_t3211447327* ___l2b_9;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l3b
	ByteU5BU5D_t3211447327* ___l3b_10;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4sb
	ByteU5BU5D_t3211447327* ___l4sb_11;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4tb
	ByteU5BU5D_t3211447327* ___l4tb_12;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4kb
	ByteU5BU5D_t3211447327* ___l4kb_13;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4wb
	ByteU5BU5D_t3211447327* ___l4wb_14;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l5b
	ByteU5BU5D_t3211447327* ___l5b_15;
	// System.String Mono.Globalization.Unicode.SortKeyBuffer::source
	String_t* ___source_16;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::processLevel2
	bool ___processLevel2_17;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSort
	bool ___frenchSort_18;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSorted
	bool ___frenchSorted_19;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::lcid
	int32_t ___lcid_20;
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SortKeyBuffer::options
	int32_t ___options_21;

public:
	inline static int32_t get_offset_of_l1_0() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l1_0)); }
	inline int32_t get_l1_0() const { return ___l1_0; }
	inline int32_t* get_address_of_l1_0() { return &___l1_0; }
	inline void set_l1_0(int32_t value)
	{
		___l1_0 = value;
	}

	inline static int32_t get_offset_of_l2_1() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l2_1)); }
	inline int32_t get_l2_1() const { return ___l2_1; }
	inline int32_t* get_address_of_l2_1() { return &___l2_1; }
	inline void set_l2_1(int32_t value)
	{
		___l2_1 = value;
	}

	inline static int32_t get_offset_of_l3_2() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l3_2)); }
	inline int32_t get_l3_2() const { return ___l3_2; }
	inline int32_t* get_address_of_l3_2() { return &___l3_2; }
	inline void set_l3_2(int32_t value)
	{
		___l3_2 = value;
	}

	inline static int32_t get_offset_of_l4s_3() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4s_3)); }
	inline int32_t get_l4s_3() const { return ___l4s_3; }
	inline int32_t* get_address_of_l4s_3() { return &___l4s_3; }
	inline void set_l4s_3(int32_t value)
	{
		___l4s_3 = value;
	}

	inline static int32_t get_offset_of_l4t_4() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4t_4)); }
	inline int32_t get_l4t_4() const { return ___l4t_4; }
	inline int32_t* get_address_of_l4t_4() { return &___l4t_4; }
	inline void set_l4t_4(int32_t value)
	{
		___l4t_4 = value;
	}

	inline static int32_t get_offset_of_l4k_5() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4k_5)); }
	inline int32_t get_l4k_5() const { return ___l4k_5; }
	inline int32_t* get_address_of_l4k_5() { return &___l4k_5; }
	inline void set_l4k_5(int32_t value)
	{
		___l4k_5 = value;
	}

	inline static int32_t get_offset_of_l4w_6() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4w_6)); }
	inline int32_t get_l4w_6() const { return ___l4w_6; }
	inline int32_t* get_address_of_l4w_6() { return &___l4w_6; }
	inline void set_l4w_6(int32_t value)
	{
		___l4w_6 = value;
	}

	inline static int32_t get_offset_of_l5_7() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l5_7)); }
	inline int32_t get_l5_7() const { return ___l5_7; }
	inline int32_t* get_address_of_l5_7() { return &___l5_7; }
	inline void set_l5_7(int32_t value)
	{
		___l5_7 = value;
	}

	inline static int32_t get_offset_of_l1b_8() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l1b_8)); }
	inline ByteU5BU5D_t3211447327* get_l1b_8() const { return ___l1b_8; }
	inline ByteU5BU5D_t3211447327** get_address_of_l1b_8() { return &___l1b_8; }
	inline void set_l1b_8(ByteU5BU5D_t3211447327* value)
	{
		___l1b_8 = value;
		Il2CppCodeGenWriteBarrier((&___l1b_8), value);
	}

	inline static int32_t get_offset_of_l2b_9() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l2b_9)); }
	inline ByteU5BU5D_t3211447327* get_l2b_9() const { return ___l2b_9; }
	inline ByteU5BU5D_t3211447327** get_address_of_l2b_9() { return &___l2b_9; }
	inline void set_l2b_9(ByteU5BU5D_t3211447327* value)
	{
		___l2b_9 = value;
		Il2CppCodeGenWriteBarrier((&___l2b_9), value);
	}

	inline static int32_t get_offset_of_l3b_10() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l3b_10)); }
	inline ByteU5BU5D_t3211447327* get_l3b_10() const { return ___l3b_10; }
	inline ByteU5BU5D_t3211447327** get_address_of_l3b_10() { return &___l3b_10; }
	inline void set_l3b_10(ByteU5BU5D_t3211447327* value)
	{
		___l3b_10 = value;
		Il2CppCodeGenWriteBarrier((&___l3b_10), value);
	}

	inline static int32_t get_offset_of_l4sb_11() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4sb_11)); }
	inline ByteU5BU5D_t3211447327* get_l4sb_11() const { return ___l4sb_11; }
	inline ByteU5BU5D_t3211447327** get_address_of_l4sb_11() { return &___l4sb_11; }
	inline void set_l4sb_11(ByteU5BU5D_t3211447327* value)
	{
		___l4sb_11 = value;
		Il2CppCodeGenWriteBarrier((&___l4sb_11), value);
	}

	inline static int32_t get_offset_of_l4tb_12() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4tb_12)); }
	inline ByteU5BU5D_t3211447327* get_l4tb_12() const { return ___l4tb_12; }
	inline ByteU5BU5D_t3211447327** get_address_of_l4tb_12() { return &___l4tb_12; }
	inline void set_l4tb_12(ByteU5BU5D_t3211447327* value)
	{
		___l4tb_12 = value;
		Il2CppCodeGenWriteBarrier((&___l4tb_12), value);
	}

	inline static int32_t get_offset_of_l4kb_13() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4kb_13)); }
	inline ByteU5BU5D_t3211447327* get_l4kb_13() const { return ___l4kb_13; }
	inline ByteU5BU5D_t3211447327** get_address_of_l4kb_13() { return &___l4kb_13; }
	inline void set_l4kb_13(ByteU5BU5D_t3211447327* value)
	{
		___l4kb_13 = value;
		Il2CppCodeGenWriteBarrier((&___l4kb_13), value);
	}

	inline static int32_t get_offset_of_l4wb_14() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l4wb_14)); }
	inline ByteU5BU5D_t3211447327* get_l4wb_14() const { return ___l4wb_14; }
	inline ByteU5BU5D_t3211447327** get_address_of_l4wb_14() { return &___l4wb_14; }
	inline void set_l4wb_14(ByteU5BU5D_t3211447327* value)
	{
		___l4wb_14 = value;
		Il2CppCodeGenWriteBarrier((&___l4wb_14), value);
	}

	inline static int32_t get_offset_of_l5b_15() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___l5b_15)); }
	inline ByteU5BU5D_t3211447327* get_l5b_15() const { return ___l5b_15; }
	inline ByteU5BU5D_t3211447327** get_address_of_l5b_15() { return &___l5b_15; }
	inline void set_l5b_15(ByteU5BU5D_t3211447327* value)
	{
		___l5b_15 = value;
		Il2CppCodeGenWriteBarrier((&___l5b_15), value);
	}

	inline static int32_t get_offset_of_source_16() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___source_16)); }
	inline String_t* get_source_16() const { return ___source_16; }
	inline String_t** get_address_of_source_16() { return &___source_16; }
	inline void set_source_16(String_t* value)
	{
		___source_16 = value;
		Il2CppCodeGenWriteBarrier((&___source_16), value);
	}

	inline static int32_t get_offset_of_processLevel2_17() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___processLevel2_17)); }
	inline bool get_processLevel2_17() const { return ___processLevel2_17; }
	inline bool* get_address_of_processLevel2_17() { return &___processLevel2_17; }
	inline void set_processLevel2_17(bool value)
	{
		___processLevel2_17 = value;
	}

	inline static int32_t get_offset_of_frenchSort_18() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___frenchSort_18)); }
	inline bool get_frenchSort_18() const { return ___frenchSort_18; }
	inline bool* get_address_of_frenchSort_18() { return &___frenchSort_18; }
	inline void set_frenchSort_18(bool value)
	{
		___frenchSort_18 = value;
	}

	inline static int32_t get_offset_of_frenchSorted_19() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___frenchSorted_19)); }
	inline bool get_frenchSorted_19() const { return ___frenchSorted_19; }
	inline bool* get_address_of_frenchSorted_19() { return &___frenchSorted_19; }
	inline void set_frenchSorted_19(bool value)
	{
		___frenchSorted_19 = value;
	}

	inline static int32_t get_offset_of_lcid_20() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___lcid_20)); }
	inline int32_t get_lcid_20() const { return ___lcid_20; }
	inline int32_t* get_address_of_lcid_20() { return &___lcid_20; }
	inline void set_lcid_20(int32_t value)
	{
		___lcid_20 = value;
	}

	inline static int32_t get_offset_of_options_21() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2773507607, ___options_21)); }
	inline int32_t get_options_21() const { return ___options_21; }
	inline int32_t* get_address_of_options_21() { return &___options_21; }
	inline void set_options_21(int32_t value)
	{
		___options_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTKEYBUFFER_T2773507607_H
#ifndef SORTKEY_T3400643391_H
#define SORTKEY_T3400643391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.SortKey
struct  SortKey_t3400643391  : public RuntimeObject
{
public:
	// System.String System.Globalization.SortKey::source
	String_t* ___source_0;
	// System.Globalization.CompareOptions System.Globalization.SortKey::options
	int32_t ___options_1;
	// System.Byte[] System.Globalization.SortKey::key
	ByteU5BU5D_t3211447327* ___key_2;
	// System.Int32 System.Globalization.SortKey::lcid
	int32_t ___lcid_3;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(SortKey_t3400643391, ___source_0)); }
	inline String_t* get_source_0() const { return ___source_0; }
	inline String_t** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(String_t* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(SortKey_t3400643391, ___options_1)); }
	inline int32_t get_options_1() const { return ___options_1; }
	inline int32_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(int32_t value)
	{
		___options_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(SortKey_t3400643391, ___key_2)); }
	inline ByteU5BU5D_t3211447327* get_key_2() const { return ___key_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(ByteU5BU5D_t3211447327* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((&___key_2), value);
	}

	inline static int32_t get_offset_of_lcid_3() { return static_cast<int32_t>(offsetof(SortKey_t3400643391, ___lcid_3)); }
	inline int32_t get_lcid_3() const { return ___lcid_3; }
	inline int32_t* get_address_of_lcid_3() { return &___lcid_3; }
	inline void set_lcid_3(int32_t value)
	{
		___lcid_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTKEY_T3400643391_H
#ifndef X509CHAIN_T2237044077_H
#define X509CHAIN_T2237044077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t2237044077  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t3742608460 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t3742608460 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t1520280087 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t3742608460 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t2237044077, ___roots_0)); }
	inline X509CertificateCollection_t3742608460 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t3742608460 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t3742608460 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t2237044077, ___certs_1)); }
	inline X509CertificateCollection_t3742608460 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t3742608460 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t3742608460 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t2237044077, ____root_2)); }
	inline X509Certificate_t1520280087 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t1520280087 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t1520280087 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t2237044077, ____chain_3)); }
	inline X509CertificateCollection_t3742608460 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t3742608460 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t3742608460 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t2237044077, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T2237044077_H
#ifndef X509CERTIFICATE_T1520280087_H
#define X509CERTIFICATE_T1520280087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t1520280087  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t794248276 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t3211447327* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t481498736  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t481498736  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t794248276 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t3211447327* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t794248276 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t3211447327* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t3211447327* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t3211447327* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t3211447327* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t765183856 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2517477956 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t3211447327* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t3211447327* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t3211447327* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t682619128 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___decoder_0)); }
	inline ASN1_t794248276 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t794248276 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t794248276 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t3211447327* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t3211447327* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_from_2)); }
	inline DateTime_t481498736  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t481498736 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t481498736  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_until_3)); }
	inline DateTime_t481498736  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t481498736 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t481498736  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___issuer_4)); }
	inline ASN1_t794248276 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t794248276 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t794248276 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t3211447327* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t3211447327** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t3211447327* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___subject_8)); }
	inline ASN1_t794248276 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t794248276 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t794248276 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_publickey_10)); }
	inline ByteU5BU5D_t3211447327* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t3211447327** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t3211447327* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___signature_11)); }
	inline ByteU5BU5D_t3211447327* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t3211447327** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t3211447327* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t3211447327* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t3211447327** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t3211447327* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___certhash_14)); }
	inline ByteU5BU5D_t3211447327* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t3211447327** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t3211447327* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ____rsa_15)); }
	inline RSA_t765183856 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t765183856 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t765183856 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ____dsa_16)); }
	inline DSA_t2517477956 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t2517477956 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t2517477956 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___serialnumber_18)); }
	inline ByteU5BU5D_t3211447327* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t3211447327** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t3211447327* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t3211447327* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t3211447327** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t3211447327* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t3211447327* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t3211447327** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t3211447327* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087, ___extensions_21)); }
	inline X509ExtensionCollection_t682619128 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t682619128 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t682619128 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t1520280087_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map13
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map13_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map14
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map14_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map15
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map15_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_23() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087_StaticFields, ___U3CU3Ef__switchU24map13_23)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map13_23() const { return ___U3CU3Ef__switchU24map13_23; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map13_23() { return &___U3CU3Ef__switchU24map13_23; }
	inline void set_U3CU3Ef__switchU24map13_23(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map13_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_24() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087_StaticFields, ___U3CU3Ef__switchU24map14_24)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map14_24() const { return ___U3CU3Ef__switchU24map14_24; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map14_24() { return &___U3CU3Ef__switchU24map14_24; }
	inline void set_U3CU3Ef__switchU24map14_24(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map14_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_25() { return static_cast<int32_t>(offsetof(X509Certificate_t1520280087_StaticFields, ___U3CU3Ef__switchU24map15_25)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map15_25() const { return ___U3CU3Ef__switchU24map15_25; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map15_25() { return &___U3CU3Ef__switchU24map15_25; }
	inline void set_U3CU3Ef__switchU24map15_25(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map15_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T1520280087_H
#ifndef KEYGENERATEDEVENTHANDLER_T3763405038_H
#define KEYGENERATEDEVENTHANDLER_T3763405038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3763405038  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3763405038_H
#ifndef AUTHENTICODEDEFORMATTER_T2482093956_H
#define AUTHENTICODEDEFORMATTER_T2482093956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t2482093956  : public AuthenticodeBase_t3017943195
{
public:
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_8;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t3211447327* ___hash_9;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t3742608460 * ___coll_10;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t794248276 * ___signedHash_11;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t481498736  ___timestamp_12;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t1520280087 * ___signingCertificate_13;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_14;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_16;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t3211447327* ___entry_17;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t2237044077 * ___signerChain_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t2237044077 * ___timestampChain_19;

public:
	inline static int32_t get_offset_of_filename_8() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___filename_8)); }
	inline String_t* get_filename_8() const { return ___filename_8; }
	inline String_t** get_address_of_filename_8() { return &___filename_8; }
	inline void set_filename_8(String_t* value)
	{
		___filename_8 = value;
		Il2CppCodeGenWriteBarrier((&___filename_8), value);
	}

	inline static int32_t get_offset_of_hash_9() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___hash_9)); }
	inline ByteU5BU5D_t3211447327* get_hash_9() const { return ___hash_9; }
	inline ByteU5BU5D_t3211447327** get_address_of_hash_9() { return &___hash_9; }
	inline void set_hash_9(ByteU5BU5D_t3211447327* value)
	{
		___hash_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_9), value);
	}

	inline static int32_t get_offset_of_coll_10() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___coll_10)); }
	inline X509CertificateCollection_t3742608460 * get_coll_10() const { return ___coll_10; }
	inline X509CertificateCollection_t3742608460 ** get_address_of_coll_10() { return &___coll_10; }
	inline void set_coll_10(X509CertificateCollection_t3742608460 * value)
	{
		___coll_10 = value;
		Il2CppCodeGenWriteBarrier((&___coll_10), value);
	}

	inline static int32_t get_offset_of_signedHash_11() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___signedHash_11)); }
	inline ASN1_t794248276 * get_signedHash_11() const { return ___signedHash_11; }
	inline ASN1_t794248276 ** get_address_of_signedHash_11() { return &___signedHash_11; }
	inline void set_signedHash_11(ASN1_t794248276 * value)
	{
		___signedHash_11 = value;
		Il2CppCodeGenWriteBarrier((&___signedHash_11), value);
	}

	inline static int32_t get_offset_of_timestamp_12() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___timestamp_12)); }
	inline DateTime_t481498736  get_timestamp_12() const { return ___timestamp_12; }
	inline DateTime_t481498736 * get_address_of_timestamp_12() { return &___timestamp_12; }
	inline void set_timestamp_12(DateTime_t481498736  value)
	{
		___timestamp_12 = value;
	}

	inline static int32_t get_offset_of_signingCertificate_13() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___signingCertificate_13)); }
	inline X509Certificate_t1520280087 * get_signingCertificate_13() const { return ___signingCertificate_13; }
	inline X509Certificate_t1520280087 ** get_address_of_signingCertificate_13() { return &___signingCertificate_13; }
	inline void set_signingCertificate_13(X509Certificate_t1520280087 * value)
	{
		___signingCertificate_13 = value;
		Il2CppCodeGenWriteBarrier((&___signingCertificate_13), value);
	}

	inline static int32_t get_offset_of_reason_14() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___reason_14)); }
	inline int32_t get_reason_14() const { return ___reason_14; }
	inline int32_t* get_address_of_reason_14() { return &___reason_14; }
	inline void set_reason_14(int32_t value)
	{
		___reason_14 = value;
	}

	inline static int32_t get_offset_of_trustedRoot_15() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___trustedRoot_15)); }
	inline bool get_trustedRoot_15() const { return ___trustedRoot_15; }
	inline bool* get_address_of_trustedRoot_15() { return &___trustedRoot_15; }
	inline void set_trustedRoot_15(bool value)
	{
		___trustedRoot_15 = value;
	}

	inline static int32_t get_offset_of_trustedTimestampRoot_16() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___trustedTimestampRoot_16)); }
	inline bool get_trustedTimestampRoot_16() const { return ___trustedTimestampRoot_16; }
	inline bool* get_address_of_trustedTimestampRoot_16() { return &___trustedTimestampRoot_16; }
	inline void set_trustedTimestampRoot_16(bool value)
	{
		___trustedTimestampRoot_16 = value;
	}

	inline static int32_t get_offset_of_entry_17() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___entry_17)); }
	inline ByteU5BU5D_t3211447327* get_entry_17() const { return ___entry_17; }
	inline ByteU5BU5D_t3211447327** get_address_of_entry_17() { return &___entry_17; }
	inline void set_entry_17(ByteU5BU5D_t3211447327* value)
	{
		___entry_17 = value;
		Il2CppCodeGenWriteBarrier((&___entry_17), value);
	}

	inline static int32_t get_offset_of_signerChain_18() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___signerChain_18)); }
	inline X509Chain_t2237044077 * get_signerChain_18() const { return ___signerChain_18; }
	inline X509Chain_t2237044077 ** get_address_of_signerChain_18() { return &___signerChain_18; }
	inline void set_signerChain_18(X509Chain_t2237044077 * value)
	{
		___signerChain_18 = value;
		Il2CppCodeGenWriteBarrier((&___signerChain_18), value);
	}

	inline static int32_t get_offset_of_timestampChain_19() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956, ___timestampChain_19)); }
	inline X509Chain_t2237044077 * get_timestampChain_19() const { return ___timestampChain_19; }
	inline X509Chain_t2237044077 ** get_address_of_timestampChain_19() { return &___timestampChain_19; }
	inline void set_timestampChain_19(X509Chain_t2237044077 * value)
	{
		___timestampChain_19 = value;
		Il2CppCodeGenWriteBarrier((&___timestampChain_19), value);
	}
};

struct AuthenticodeDeformatter_t2482093956_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map5
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map5_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map6
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map6_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map7
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map7_22;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_20() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956_StaticFields, ___U3CU3Ef__switchU24map5_20)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map5_20() const { return ___U3CU3Ef__switchU24map5_20; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map5_20() { return &___U3CU3Ef__switchU24map5_20; }
	inline void set_U3CU3Ef__switchU24map5_20(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map5_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_21() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956_StaticFields, ___U3CU3Ef__switchU24map6_21)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map6_21() const { return ___U3CU3Ef__switchU24map6_21; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map6_21() { return &___U3CU3Ef__switchU24map6_21; }
	inline void set_U3CU3Ef__switchU24map6_21(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map6_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_22() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t2482093956_StaticFields, ___U3CU3Ef__switchU24map7_22)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map7_22() const { return ___U3CU3Ef__switchU24map7_22; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map7_22() { return &___U3CU3Ef__switchU24map7_22; }
	inline void set_U3CU3Ef__switchU24map7_22(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map7_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEDEFORMATTER_T2482093956_H
#ifndef KEYGENERATEDEVENTHANDLER_T1498806477_H
#define KEYGENERATEDEVENTHANDLER_T1498806477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t1498806477  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T1498806477_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize100 = { sizeof (KeyHandler_t1067155208), -1, sizeof(KeyHandler_t1067155208_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable100[7] = 
{
	KeyHandler_t1067155208_StaticFields::get_offset_of_key_to_handler_0(),
	KeyHandler_t1067155208_StaticFields::get_offset_of_dir_to_handler_1(),
	KeyHandler_t1067155208::get_offset_of_Dir_2(),
	KeyHandler_t1067155208::get_offset_of_values_3(),
	KeyHandler_t1067155208::get_offset_of_file_4(),
	KeyHandler_t1067155208::get_offset_of_dirty_5(),
	KeyHandler_t1067155208_StaticFields::get_offset_of_U3CU3Ef__switchU24map1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize101 = { sizeof (UnixRegistryApi_t1874203425), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize102 = { sizeof (Win32RegistryApi_t202270062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable102[1] = 
{
	Win32RegistryApi_t202270062::get_offset_of_NativeBytesPerCharacter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize103 = { sizeof (CodePointIndexer_t3966590323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable103[4] = 
{
	CodePointIndexer_t3966590323::get_offset_of_ranges_0(),
	CodePointIndexer_t3966590323::get_offset_of_TotalCount_1(),
	CodePointIndexer_t3966590323::get_offset_of_defaultIndex_2(),
	CodePointIndexer_t3966590323::get_offset_of_defaultCP_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize104 = { sizeof (TableRange_t3364611106)+ sizeof (RuntimeObject), sizeof(TableRange_t3364611106 ), 0, 0 };
extern const int32_t g_FieldOffsetTable104[5] = 
{
	TableRange_t3364611106::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3364611106::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3364611106::get_offset_of_Count_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3364611106::get_offset_of_IndexStart_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3364611106::get_offset_of_IndexEnd_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize105 = { sizeof (TailoringInfo_t1721489472), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable105[4] = 
{
	TailoringInfo_t1721489472::get_offset_of_LCID_0(),
	TailoringInfo_t1721489472::get_offset_of_TailoringIndex_1(),
	TailoringInfo_t1721489472::get_offset_of_TailoringCount_2(),
	TailoringInfo_t1721489472::get_offset_of_FrenchSort_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize106 = { sizeof (Contraction_t1871396181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable106[3] = 
{
	Contraction_t1871396181::get_offset_of_Source_0(),
	Contraction_t1871396181::get_offset_of_Replacement_1(),
	Contraction_t1871396181::get_offset_of_SortKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize107 = { sizeof (ContractionComparer_t2469179294), -1, sizeof(ContractionComparer_t2469179294_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable107[1] = 
{
	ContractionComparer_t2469179294_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize108 = { sizeof (Level2Map_t3992864006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable108[2] = 
{
	Level2Map_t3992864006::get_offset_of_Source_0(),
	Level2Map_t3992864006::get_offset_of_Replace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize109 = { sizeof (Level2MapComparer_t739262908), -1, sizeof(Level2MapComparer_t739262908_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable109[1] = 
{
	Level2MapComparer_t739262908_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize110 = { sizeof (MSCompatUnicodeTable_t1127498958), -1, sizeof(MSCompatUnicodeTable_t1127498958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable110[22] = 
{
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_MaxExpansionLength_0(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_ignorableFlags_1(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_categories_2(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_level1_3(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_level2_4(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_level3_5(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkCHScategory_6(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkCHTcategory_7(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkJAcategory_8(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkKOcategory_9(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkCHSlv1_10(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkCHTlv1_11(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkJAlv1_12(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkKOlv1_13(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_cjkKOlv2_14(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_tailoringArr_15(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_tailoringInfos_16(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_forLock_17(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_isReady_18(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_19(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_20(),
	MSCompatUnicodeTable_t1127498958_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize111 = { sizeof (MSCompatUnicodeTableUtil_t139398475), -1, sizeof(MSCompatUnicodeTableUtil_t139398475_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable111[7] = 
{
	MSCompatUnicodeTableUtil_t139398475_StaticFields::get_offset_of_Ignorable_0(),
	MSCompatUnicodeTableUtil_t139398475_StaticFields::get_offset_of_Category_1(),
	MSCompatUnicodeTableUtil_t139398475_StaticFields::get_offset_of_Level1_2(),
	MSCompatUnicodeTableUtil_t139398475_StaticFields::get_offset_of_Level2_3(),
	MSCompatUnicodeTableUtil_t139398475_StaticFields::get_offset_of_Level3_4(),
	MSCompatUnicodeTableUtil_t139398475_StaticFields::get_offset_of_CjkCHS_5(),
	MSCompatUnicodeTableUtil_t139398475_StaticFields::get_offset_of_Cjk_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize112 = { sizeof (SimpleCollator_t385558570), -1, sizeof(SimpleCollator_t385558570_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable112[13] = 
{
	SimpleCollator_t385558570_StaticFields::get_offset_of_QuickCheckDisabled_0(),
	SimpleCollator_t385558570_StaticFields::get_offset_of_invariant_1(),
	SimpleCollator_t385558570::get_offset_of_textInfo_2(),
	SimpleCollator_t385558570::get_offset_of_frenchSort_3(),
	SimpleCollator_t385558570::get_offset_of_cjkCatTable_4(),
	SimpleCollator_t385558570::get_offset_of_cjkLv1Table_5(),
	SimpleCollator_t385558570::get_offset_of_cjkIndexer_6(),
	SimpleCollator_t385558570::get_offset_of_cjkLv2Table_7(),
	SimpleCollator_t385558570::get_offset_of_cjkLv2Indexer_8(),
	SimpleCollator_t385558570::get_offset_of_lcid_9(),
	SimpleCollator_t385558570::get_offset_of_contractions_10(),
	SimpleCollator_t385558570::get_offset_of_level2Maps_11(),
	SimpleCollator_t385558570::get_offset_of_unsafeFlags_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize113 = { sizeof (Context_t3817494868)+ sizeof (RuntimeObject), sizeof(Context_t3817494868_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable113[8] = 
{
	Context_t3817494868::get_offset_of_Option_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t3817494868::get_offset_of_NeverMatchFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t3817494868::get_offset_of_AlwaysMatchFlags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t3817494868::get_offset_of_Buffer1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t3817494868::get_offset_of_Buffer2_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t3817494868::get_offset_of_PrevCode_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t3817494868::get_offset_of_PrevSortKey_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t3817494868::get_offset_of_QuickCheckPossible_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize114 = { sizeof (PreviousInfo_t2651394912)+ sizeof (RuntimeObject), sizeof(PreviousInfo_t2651394912_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable114[2] = 
{
	PreviousInfo_t2651394912::get_offset_of_Code_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PreviousInfo_t2651394912::get_offset_of_SortKey_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize115 = { sizeof (Escape_t2360530905)+ sizeof (RuntimeObject), sizeof(Escape_t2360530905_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable115[5] = 
{
	Escape_t2360530905::get_offset_of_Source_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t2360530905::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t2360530905::get_offset_of_Start_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t2360530905::get_offset_of_End_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t2360530905::get_offset_of_Optional_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize116 = { sizeof (ExtenderType_t2915463645)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable116[6] = 
{
	ExtenderType_t2915463645::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize117 = { sizeof (SortKey_t3400643391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable117[4] = 
{
	SortKey_t3400643391::get_offset_of_source_0(),
	SortKey_t3400643391::get_offset_of_options_1(),
	SortKey_t3400643391::get_offset_of_key_2(),
	SortKey_t3400643391::get_offset_of_lcid_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize118 = { sizeof (SortKeyBuffer_t2773507607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable118[22] = 
{
	SortKeyBuffer_t2773507607::get_offset_of_l1_0(),
	SortKeyBuffer_t2773507607::get_offset_of_l2_1(),
	SortKeyBuffer_t2773507607::get_offset_of_l3_2(),
	SortKeyBuffer_t2773507607::get_offset_of_l4s_3(),
	SortKeyBuffer_t2773507607::get_offset_of_l4t_4(),
	SortKeyBuffer_t2773507607::get_offset_of_l4k_5(),
	SortKeyBuffer_t2773507607::get_offset_of_l4w_6(),
	SortKeyBuffer_t2773507607::get_offset_of_l5_7(),
	SortKeyBuffer_t2773507607::get_offset_of_l1b_8(),
	SortKeyBuffer_t2773507607::get_offset_of_l2b_9(),
	SortKeyBuffer_t2773507607::get_offset_of_l3b_10(),
	SortKeyBuffer_t2773507607::get_offset_of_l4sb_11(),
	SortKeyBuffer_t2773507607::get_offset_of_l4tb_12(),
	SortKeyBuffer_t2773507607::get_offset_of_l4kb_13(),
	SortKeyBuffer_t2773507607::get_offset_of_l4wb_14(),
	SortKeyBuffer_t2773507607::get_offset_of_l5b_15(),
	SortKeyBuffer_t2773507607::get_offset_of_source_16(),
	SortKeyBuffer_t2773507607::get_offset_of_processLevel2_17(),
	SortKeyBuffer_t2773507607::get_offset_of_frenchSort_18(),
	SortKeyBuffer_t2773507607::get_offset_of_frenchSorted_19(),
	SortKeyBuffer_t2773507607::get_offset_of_lcid_20(),
	SortKeyBuffer_t2773507607::get_offset_of_options_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize119 = { sizeof (PrimeGeneratorBase_t1196227554), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize120 = { sizeof (SequentialSearchPrimeGeneratorBase_t222900672), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize121 = { sizeof (ConfidenceFactor_t1363657514)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable121[7] = 
{
	ConfidenceFactor_t1363657514::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize122 = { sizeof (PrimalityTests_t1487464065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize123 = { sizeof (BigInteger_t2833572241), -1, sizeof(BigInteger_t2833572241_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable123[4] = 
{
	BigInteger_t2833572241::get_offset_of_length_0(),
	BigInteger_t2833572241::get_offset_of_data_1(),
	BigInteger_t2833572241_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t2833572241_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize124 = { sizeof (Sign_t2616005023)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable124[4] = 
{
	Sign_t2616005023::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize125 = { sizeof (ModulusRing_t1463012966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable125[2] = 
{
	ModulusRing_t1463012966::get_offset_of_mod_0(),
	ModulusRing_t1463012966::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize126 = { sizeof (Kernel_t1914509127), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize127 = { sizeof (AuthenticodeBase_t3017943195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable127[8] = 
{
	AuthenticodeBase_t3017943195::get_offset_of_fileblock_0(),
	AuthenticodeBase_t3017943195::get_offset_of_fs_1(),
	AuthenticodeBase_t3017943195::get_offset_of_blockNo_2(),
	AuthenticodeBase_t3017943195::get_offset_of_blockLength_3(),
	AuthenticodeBase_t3017943195::get_offset_of_peOffset_4(),
	AuthenticodeBase_t3017943195::get_offset_of_dirSecurityOffset_5(),
	AuthenticodeBase_t3017943195::get_offset_of_dirSecuritySize_6(),
	AuthenticodeBase_t3017943195::get_offset_of_coffSymbolTableOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize128 = { sizeof (AuthenticodeDeformatter_t2482093956), -1, sizeof(AuthenticodeDeformatter_t2482093956_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable128[15] = 
{
	AuthenticodeDeformatter_t2482093956::get_offset_of_filename_8(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_hash_9(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_coll_10(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_signedHash_11(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_timestamp_12(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_signingCertificate_13(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_reason_14(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_trustedRoot_15(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_trustedTimestampRoot_16(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_entry_17(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_signerChain_18(),
	AuthenticodeDeformatter_t2482093956::get_offset_of_timestampChain_19(),
	AuthenticodeDeformatter_t2482093956_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_20(),
	AuthenticodeDeformatter_t2482093956_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_21(),
	AuthenticodeDeformatter_t2482093956_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize129 = { sizeof (CryptoConvert_t2835797576), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize130 = { sizeof (KeyBuilder_t1099398106), -1, sizeof(KeyBuilder_t1099398106_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable130[1] = 
{
	KeyBuilder_t1099398106_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize131 = { sizeof (BlockProcessor_t2568162817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable131[4] = 
{
	BlockProcessor_t2568162817::get_offset_of_transform_0(),
	BlockProcessor_t2568162817::get_offset_of_block_1(),
	BlockProcessor_t2568162817::get_offset_of_blockSize_2(),
	BlockProcessor_t2568162817::get_offset_of_blockCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize132 = { sizeof (DSAManaged_t3692869051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable132[14] = 
{
	0,
	DSAManaged_t3692869051::get_offset_of_keypairGenerated_3(),
	DSAManaged_t3692869051::get_offset_of_m_disposed_4(),
	DSAManaged_t3692869051::get_offset_of_p_5(),
	DSAManaged_t3692869051::get_offset_of_q_6(),
	DSAManaged_t3692869051::get_offset_of_g_7(),
	DSAManaged_t3692869051::get_offset_of_x_8(),
	DSAManaged_t3692869051::get_offset_of_y_9(),
	DSAManaged_t3692869051::get_offset_of_j_10(),
	DSAManaged_t3692869051::get_offset_of_seed_11(),
	DSAManaged_t3692869051::get_offset_of_counter_12(),
	DSAManaged_t3692869051::get_offset_of_j_missing_13(),
	DSAManaged_t3692869051::get_offset_of_rng_14(),
	DSAManaged_t3692869051::get_offset_of_KeyGenerated_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize133 = { sizeof (KeyGeneratedEventHandler_t1498806477), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize134 = { sizeof (HMACAlgorithm_t2506715951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable134[5] = 
{
	HMACAlgorithm_t2506715951::get_offset_of_key_0(),
	HMACAlgorithm_t2506715951::get_offset_of_hash_1(),
	HMACAlgorithm_t2506715951::get_offset_of_algo_2(),
	HMACAlgorithm_t2506715951::get_offset_of_hashName_3(),
	HMACAlgorithm_t2506715951::get_offset_of_block_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize135 = { sizeof (KeyPairPersistence_t480922200), -1, sizeof(KeyPairPersistence_t480922200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable135[9] = 
{
	KeyPairPersistence_t480922200_StaticFields::get_offset_of__userPathExists_0(),
	KeyPairPersistence_t480922200_StaticFields::get_offset_of__userPath_1(),
	KeyPairPersistence_t480922200_StaticFields::get_offset_of__machinePathExists_2(),
	KeyPairPersistence_t480922200_StaticFields::get_offset_of__machinePath_3(),
	KeyPairPersistence_t480922200::get_offset_of__params_4(),
	KeyPairPersistence_t480922200::get_offset_of__keyvalue_5(),
	KeyPairPersistence_t480922200::get_offset_of__filename_6(),
	KeyPairPersistence_t480922200::get_offset_of__container_7(),
	KeyPairPersistence_t480922200_StaticFields::get_offset_of_lockobj_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize136 = { sizeof (MACAlgorithm_t829004313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable136[5] = 
{
	MACAlgorithm_t829004313::get_offset_of_algo_0(),
	MACAlgorithm_t829004313::get_offset_of_enc_1(),
	MACAlgorithm_t829004313::get_offset_of_block_2(),
	MACAlgorithm_t829004313::get_offset_of_blockSize_3(),
	MACAlgorithm_t829004313::get_offset_of_blockCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize137 = { sizeof (PKCS1_t2578701016), -1, sizeof(PKCS1_t2578701016_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable137[4] = 
{
	PKCS1_t2578701016_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t2578701016_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t2578701016_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t2578701016_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize138 = { sizeof (PKCS8_t2064271432), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize139 = { sizeof (KeyInfo_t1882572041)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable139[4] = 
{
	KeyInfo_t1882572041::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize140 = { sizeof (PrivateKeyInfo_t3908730992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable140[4] = 
{
	PrivateKeyInfo_t3908730992::get_offset_of__version_0(),
	PrivateKeyInfo_t3908730992::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t3908730992::get_offset_of__key_2(),
	PrivateKeyInfo_t3908730992::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize141 = { sizeof (EncryptedPrivateKeyInfo_t4066124073), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable141[4] = 
{
	EncryptedPrivateKeyInfo_t4066124073::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t4066124073::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t4066124073::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t4066124073::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize142 = { sizeof (RSAManaged_t2465811819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable142[14] = 
{
	0,
	RSAManaged_t2465811819::get_offset_of_isCRTpossible_3(),
	RSAManaged_t2465811819::get_offset_of_keyBlinding_4(),
	RSAManaged_t2465811819::get_offset_of_keypairGenerated_5(),
	RSAManaged_t2465811819::get_offset_of_m_disposed_6(),
	RSAManaged_t2465811819::get_offset_of_d_7(),
	RSAManaged_t2465811819::get_offset_of_p_8(),
	RSAManaged_t2465811819::get_offset_of_q_9(),
	RSAManaged_t2465811819::get_offset_of_dp_10(),
	RSAManaged_t2465811819::get_offset_of_dq_11(),
	RSAManaged_t2465811819::get_offset_of_qInv_12(),
	RSAManaged_t2465811819::get_offset_of_n_13(),
	RSAManaged_t2465811819::get_offset_of_e_14(),
	RSAManaged_t2465811819::get_offset_of_KeyGenerated_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize143 = { sizeof (KeyGeneratedEventHandler_t3763405038), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize144 = { sizeof (SymmetricTransform_t1629006107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable144[12] = 
{
	SymmetricTransform_t1629006107::get_offset_of_algo_0(),
	SymmetricTransform_t1629006107::get_offset_of_encrypt_1(),
	SymmetricTransform_t1629006107::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t1629006107::get_offset_of_temp_3(),
	SymmetricTransform_t1629006107::get_offset_of_temp2_4(),
	SymmetricTransform_t1629006107::get_offset_of_workBuff_5(),
	SymmetricTransform_t1629006107::get_offset_of_workout_6(),
	SymmetricTransform_t1629006107::get_offset_of_FeedBackByte_7(),
	SymmetricTransform_t1629006107::get_offset_of_FeedBackIter_8(),
	SymmetricTransform_t1629006107::get_offset_of_m_disposed_9(),
	SymmetricTransform_t1629006107::get_offset_of_lastBlock_10(),
	SymmetricTransform_t1629006107::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize145 = { sizeof (BasicConstraintsExtension_t778317414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable145[2] = 
{
	BasicConstraintsExtension_t778317414::get_offset_of_cA_3(),
	BasicConstraintsExtension_t778317414::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize146 = { sizeof (SafeBag_t1957676964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable146[2] = 
{
	SafeBag_t1957676964::get_offset_of__bagOID_0(),
	SafeBag_t1957676964::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize147 = { sizeof (PKCS12_t2230622237), -1, sizeof(PKCS12_t2230622237_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable147[17] = 
{
	PKCS12_t2230622237_StaticFields::get_offset_of_recommendedIterationCount_0(),
	PKCS12_t2230622237::get_offset_of__password_1(),
	PKCS12_t2230622237::get_offset_of__keyBags_2(),
	PKCS12_t2230622237::get_offset_of__secretBags_3(),
	PKCS12_t2230622237::get_offset_of__certs_4(),
	PKCS12_t2230622237::get_offset_of__keyBagsChanged_5(),
	PKCS12_t2230622237::get_offset_of__secretBagsChanged_6(),
	PKCS12_t2230622237::get_offset_of__certsChanged_7(),
	PKCS12_t2230622237::get_offset_of__iterations_8(),
	PKCS12_t2230622237::get_offset_of__safeBags_9(),
	PKCS12_t2230622237::get_offset_of__rng_10(),
	PKCS12_t2230622237_StaticFields::get_offset_of_password_max_length_11(),
	PKCS12_t2230622237_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_12(),
	PKCS12_t2230622237_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_13(),
	PKCS12_t2230622237_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_14(),
	PKCS12_t2230622237_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_15(),
	PKCS12_t2230622237_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize148 = { sizeof (DeriveBytes_t2262949376), -1, sizeof(DeriveBytes_t2262949376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable148[7] = 
{
	DeriveBytes_t2262949376_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t2262949376_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t2262949376_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t2262949376::get_offset_of__hashName_3(),
	DeriveBytes_t2262949376::get_offset_of__iterations_4(),
	DeriveBytes_t2262949376::get_offset_of__password_5(),
	DeriveBytes_t2262949376::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize149 = { sizeof (X501_t3820828930), -1, sizeof(X501_t3820828930_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable149[15] = 
{
	X501_t3820828930_StaticFields::get_offset_of_countryName_0(),
	X501_t3820828930_StaticFields::get_offset_of_organizationName_1(),
	X501_t3820828930_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t3820828930_StaticFields::get_offset_of_commonName_3(),
	X501_t3820828930_StaticFields::get_offset_of_localityName_4(),
	X501_t3820828930_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t3820828930_StaticFields::get_offset_of_streetAddress_6(),
	X501_t3820828930_StaticFields::get_offset_of_domainComponent_7(),
	X501_t3820828930_StaticFields::get_offset_of_userid_8(),
	X501_t3820828930_StaticFields::get_offset_of_email_9(),
	X501_t3820828930_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t3820828930_StaticFields::get_offset_of_title_11(),
	X501_t3820828930_StaticFields::get_offset_of_surname_12(),
	X501_t3820828930_StaticFields::get_offset_of_givenName_13(),
	X501_t3820828930_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize150 = { sizeof (X509Certificate_t1520280087), -1, sizeof(X509Certificate_t1520280087_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable150[26] = 
{
	X509Certificate_t1520280087::get_offset_of_decoder_0(),
	X509Certificate_t1520280087::get_offset_of_m_encodedcert_1(),
	X509Certificate_t1520280087::get_offset_of_m_from_2(),
	X509Certificate_t1520280087::get_offset_of_m_until_3(),
	X509Certificate_t1520280087::get_offset_of_issuer_4(),
	X509Certificate_t1520280087::get_offset_of_m_issuername_5(),
	X509Certificate_t1520280087::get_offset_of_m_keyalgo_6(),
	X509Certificate_t1520280087::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t1520280087::get_offset_of_subject_8(),
	X509Certificate_t1520280087::get_offset_of_m_subject_9(),
	X509Certificate_t1520280087::get_offset_of_m_publickey_10(),
	X509Certificate_t1520280087::get_offset_of_signature_11(),
	X509Certificate_t1520280087::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t1520280087::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t1520280087::get_offset_of_certhash_14(),
	X509Certificate_t1520280087::get_offset_of__rsa_15(),
	X509Certificate_t1520280087::get_offset_of__dsa_16(),
	X509Certificate_t1520280087::get_offset_of_version_17(),
	X509Certificate_t1520280087::get_offset_of_serialnumber_18(),
	X509Certificate_t1520280087::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t1520280087::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t1520280087::get_offset_of_extensions_21(),
	X509Certificate_t1520280087_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t1520280087_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_23(),
	X509Certificate_t1520280087_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_24(),
	X509Certificate_t1520280087_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize151 = { sizeof (X509CertificateCollection_t3742608460), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize152 = { sizeof (X509CertificateEnumerator_t3716631709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable152[1] = 
{
	X509CertificateEnumerator_t3716631709::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize153 = { sizeof (X509Chain_t2237044077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable153[5] = 
{
	X509Chain_t2237044077::get_offset_of_roots_0(),
	X509Chain_t2237044077::get_offset_of_certs_1(),
	X509Chain_t2237044077::get_offset_of__root_2(),
	X509Chain_t2237044077::get_offset_of__chain_3(),
	X509Chain_t2237044077::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize154 = { sizeof (X509ChainStatusFlags_t1245170207)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable154[8] = 
{
	X509ChainStatusFlags_t1245170207::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize155 = { sizeof (X509Extension_t2466191591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable155[3] = 
{
	X509Extension_t2466191591::get_offset_of_extnOid_0(),
	X509Extension_t2466191591::get_offset_of_extnCritical_1(),
	X509Extension_t2466191591::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize156 = { sizeof (X509ExtensionCollection_t682619128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable156[1] = 
{
	X509ExtensionCollection_t682619128::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize157 = { sizeof (X509Store_t3332514910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable157[3] = 
{
	X509Store_t3332514910::get_offset_of__storePath_0(),
	X509Store_t3332514910::get_offset_of__certificates_1(),
	X509Store_t3332514910::get_offset_of__crl_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize158 = { sizeof (X509StoreManager_t789173376), -1, sizeof(X509StoreManager_t789173376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable158[2] = 
{
	X509StoreManager_t789173376_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t789173376_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize159 = { sizeof (X509Stores_t4122901616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable159[2] = 
{
	X509Stores_t4122901616::get_offset_of__storePath_0(),
	X509Stores_t4122901616::get_offset_of__trusted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize160 = { sizeof (ASN1_t794248276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable160[3] = 
{
	ASN1_t794248276::get_offset_of_m_nTag_0(),
	ASN1_t794248276::get_offset_of_m_aValue_1(),
	ASN1_t794248276::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize161 = { sizeof (ASN1Convert_t2129500005), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize162 = { sizeof (BitConverterLE_t2289320504), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize163 = { sizeof (PKCS7_t1624441634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize164 = { sizeof (ContentInfo_t471155258), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable164[2] = 
{
	ContentInfo_t471155258::get_offset_of_contentType_0(),
	ContentInfo_t471155258::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize165 = { sizeof (EncryptedData_t821126457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable165[4] = 
{
	EncryptedData_t821126457::get_offset_of__version_0(),
	EncryptedData_t821126457::get_offset_of__content_1(),
	EncryptedData_t821126457::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t821126457::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize166 = { sizeof (SignedData_t2258442609), -1, sizeof(SignedData_t2258442609_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable166[8] = 
{
	SignedData_t2258442609::get_offset_of_version_0(),
	SignedData_t2258442609::get_offset_of_hashAlgorithm_1(),
	SignedData_t2258442609::get_offset_of_contentInfo_2(),
	SignedData_t2258442609::get_offset_of_certs_3(),
	SignedData_t2258442609::get_offset_of_crls_4(),
	SignedData_t2258442609::get_offset_of_signerInfo_5(),
	SignedData_t2258442609::get_offset_of_mda_6(),
	SignedData_t2258442609_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize167 = { sizeof (SignerInfo_t122983661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable167[8] = 
{
	SignerInfo_t122983661::get_offset_of_version_0(),
	SignerInfo_t122983661::get_offset_of_hashAlgorithm_1(),
	SignerInfo_t122983661::get_offset_of_authenticatedAttributes_2(),
	SignerInfo_t122983661::get_offset_of_unauthenticatedAttributes_3(),
	SignerInfo_t122983661::get_offset_of_signature_4(),
	SignerInfo_t122983661::get_offset_of_issuer_5(),
	SignerInfo_t122983661::get_offset_of_serial_6(),
	SignerInfo_t122983661::get_offset_of_ski_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize168 = { sizeof (StrongName_t1555735751), -1, sizeof(StrongName_t1555735751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable168[6] = 
{
	StrongName_t1555735751::get_offset_of_rsa_0(),
	StrongName_t1555735751::get_offset_of_publicKey_1(),
	StrongName_t1555735751::get_offset_of_keyToken_2(),
	StrongName_t1555735751::get_offset_of_tokenAlgorithm_3(),
	StrongName_t1555735751_StaticFields::get_offset_of_lockObject_4(),
	StrongName_t1555735751_StaticFields::get_offset_of_initialized_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize169 = { sizeof (SecurityParser_t632205435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable169[3] = 
{
	SecurityParser_t632205435::get_offset_of_root_13(),
	SecurityParser_t632205435::get_offset_of_current_14(),
	SecurityParser_t632205435::get_offset_of_stack_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize170 = { sizeof (SmallXmlParser_t2801581108), -1, sizeof(SmallXmlParser_t2801581108_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable170[13] = 
{
	SmallXmlParser_t2801581108::get_offset_of_handler_0(),
	SmallXmlParser_t2801581108::get_offset_of_reader_1(),
	SmallXmlParser_t2801581108::get_offset_of_elementNames_2(),
	SmallXmlParser_t2801581108::get_offset_of_xmlSpaces_3(),
	SmallXmlParser_t2801581108::get_offset_of_xmlSpace_4(),
	SmallXmlParser_t2801581108::get_offset_of_buffer_5(),
	SmallXmlParser_t2801581108::get_offset_of_nameBuffer_6(),
	SmallXmlParser_t2801581108::get_offset_of_isWhitespace_7(),
	SmallXmlParser_t2801581108::get_offset_of_attributes_8(),
	SmallXmlParser_t2801581108::get_offset_of_line_9(),
	SmallXmlParser_t2801581108::get_offset_of_column_10(),
	SmallXmlParser_t2801581108::get_offset_of_resetColumn_11(),
	SmallXmlParser_t2801581108_StaticFields::get_offset_of_U3CU3Ef__switchU24map18_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize171 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize172 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize173 = { sizeof (AttrListImpl_t2804421211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable173[2] = 
{
	AttrListImpl_t2804421211::get_offset_of_attrNames_0(),
	AttrListImpl_t2804421211::get_offset_of_attrValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize174 = { sizeof (SmallXmlParserException_t831939852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable174[2] = 
{
	SmallXmlParserException_t831939852::get_offset_of_line_11(),
	SmallXmlParserException_t831939852::get_offset_of_column_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize175 = { sizeof (Runtime_t874096818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize176 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize177 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize178 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable178[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize179 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize180 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize181 = { sizeof (Link_t621408978)+ sizeof (RuntimeObject), sizeof(Link_t621408978 ), 0, 0 };
extern const int32_t g_FieldOffsetTable181[2] = 
{
	Link_t621408978::get_offset_of_HashCode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t621408978::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize182 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable182[16] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize183 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable183[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize184 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable184[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize185 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable185[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize186 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable186[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize187 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable187[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize188 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable188[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize189 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize190 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable190[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize191 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize192 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize193 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize194 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize195 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize196 = { sizeof (KeyNotFoundException_t3423694178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize197 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable197[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize198 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable198[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize199 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable199[4] = 
{
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

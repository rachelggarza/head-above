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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t794248277;
// System.Byte[]
struct ByteU5BU5D_t3211447327;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t214893434;
// System.Security.Cryptography.RSA
struct RSA_t765183856;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t471155259;
// Mono.Math.BigInteger
struct BigInteger_t2833572242;
// System.Collections.ArrayList
struct ArrayList_t1155359356;
// System.UInt32[]
struct UInt32U5BU5D_t3268503027;
// System.Int32[]
struct Int32U5BU5D_t617919100;
// System.IntPtr[]
struct IntPtrU5BU5D_t1869361681;
// System.Collections.IDictionary
struct IDictionary_t1585172076;
// System.Void
struct Void_t669509276;
// System.Char[]
struct CharU5BU5D_t3680385359;
// System.Globalization.CompareInfo
struct CompareInfo_t3994572730;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3788393282;
// System.Collections.Hashtable
struct Hashtable_t495704637;
// System.Globalization.DaylightTime
struct DaylightTime_t1830788077;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3128442365;
// Mono.Math.BigInteger
struct BigInteger_t2833572241;
// System.IAsyncResult
struct IAsyncResult_t1592075193;
// System.AsyncCallback
struct AsyncCallback_t2650920735;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3287158110;
// System.Reflection.Assembly
struct Assembly_t3537485000;
// System.ResolveEventArgs
struct ResolveEventArgs_t2529604179;
// System.EventArgs
struct EventArgs_t1682362798;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t1194469036;
// System.String[]
struct StringU5BU5D_t421393138;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1705569899;
// System.Reflection.MemberInfo
struct MemberInfo_t;




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
#ifndef U3CMODULEU3E_T2866242826_H
#define U3CMODULEU3E_T2866242826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2866242826 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2866242826_H
#ifndef CONTENTINFO_T471155259_H
#define CONTENTINFO_T471155259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t471155259  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t794248277 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t471155259, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t471155259, ___content_1)); }
	inline ASN1_t794248277 * get_content_1() const { return ___content_1; }
	inline ASN1_t794248277 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t794248277 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T471155259_H
#ifndef VERSION_T1902747478_H
#define VERSION_T1902747478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t1902747478  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t1902747478, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t1902747478, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t1902747478, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t1902747478, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T1902747478_H
#ifndef PKCS8_T2064271433_H
#define PKCS8_T2064271433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t2064271433  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T2064271433_H
#ifndef PKCS1_T2578701017_H
#define PKCS1_T2578701017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t2578701017  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t2578701017_StaticFields
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
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t2578701017_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t3211447327* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t3211447327* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t2578701017_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t3211447327* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t3211447327* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t2578701017_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t3211447327* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t3211447327* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t2578701017_StaticFields, ___emptySHA512_3)); }
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
#endif // PKCS1_T2578701017_H
#ifndef KEYBUILDER_T1099398107_H
#define KEYBUILDER_T1099398107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1099398107  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1099398107_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t214893434 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1099398107_StaticFields, ___rng_0)); }
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
#endif // KEYBUILDER_T1099398107_H
#ifndef CRYPTOCONVERT_T2835797577_H
#define CRYPTOCONVERT_T2835797577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t2835797577  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T2835797577_H
#ifndef PRIVATEKEY_T1259183006_H
#define PRIVATEKEY_T1259183006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.PrivateKey
struct  PrivateKey_t1259183006  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Authenticode.PrivateKey::encrypted
	bool ___encrypted_0;
	// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::rsa
	RSA_t765183856 * ___rsa_1;
	// System.Boolean Mono.Security.Authenticode.PrivateKey::weak
	bool ___weak_2;
	// System.Int32 Mono.Security.Authenticode.PrivateKey::keyType
	int32_t ___keyType_3;

public:
	inline static int32_t get_offset_of_encrypted_0() { return static_cast<int32_t>(offsetof(PrivateKey_t1259183006, ___encrypted_0)); }
	inline bool get_encrypted_0() const { return ___encrypted_0; }
	inline bool* get_address_of_encrypted_0() { return &___encrypted_0; }
	inline void set_encrypted_0(bool value)
	{
		___encrypted_0 = value;
	}

	inline static int32_t get_offset_of_rsa_1() { return static_cast<int32_t>(offsetof(PrivateKey_t1259183006, ___rsa_1)); }
	inline RSA_t765183856 * get_rsa_1() const { return ___rsa_1; }
	inline RSA_t765183856 ** get_address_of_rsa_1() { return &___rsa_1; }
	inline void set_rsa_1(RSA_t765183856 * value)
	{
		___rsa_1 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_1), value);
	}

	inline static int32_t get_offset_of_weak_2() { return static_cast<int32_t>(offsetof(PrivateKey_t1259183006, ___weak_2)); }
	inline bool get_weak_2() const { return ___weak_2; }
	inline bool* get_address_of_weak_2() { return &___weak_2; }
	inline void set_weak_2(bool value)
	{
		___weak_2 = value;
	}

	inline static int32_t get_offset_of_keyType_3() { return static_cast<int32_t>(offsetof(PrivateKey_t1259183006, ___keyType_3)); }
	inline int32_t get_keyType_3() const { return ___keyType_3; }
	inline int32_t* get_address_of_keyType_3() { return &___keyType_3; }
	inline void set_keyType_3(int32_t value)
	{
		___keyType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEY_T1259183006_H
#ifndef ENCRYPTEDDATA_T821126458_H
#define ENCRYPTEDDATA_T821126458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t821126458  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t471155259 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t471155259 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t3211447327* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t821126458, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t821126458, ____content_1)); }
	inline ContentInfo_t471155259 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t471155259 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t471155259 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t821126458, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t471155259 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t471155259 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t471155259 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t821126458, ____encrypted_3)); }
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
#endif // ENCRYPTEDDATA_T821126458_H
#ifndef MODULUSRING_T1463012967_H
#define MODULUSRING_T1463012967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t1463012967  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2833572242 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2833572242 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t1463012967, ___mod_0)); }
	inline BigInteger_t2833572242 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2833572242 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2833572242 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t1463012967, ___constant_1)); }
	inline BigInteger_t2833572242 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2833572242 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2833572242 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T1463012967_H
#ifndef PKCS7_T1624441635_H
#define PKCS7_T1624441635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t1624441635  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T1624441635_H
#ifndef BITCONVERTERLE_T2289320505_H
#define BITCONVERTERLE_T2289320505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2289320505  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2289320505_H
#ifndef ASN1CONVERT_T2129500006_H
#define ASN1CONVERT_T2129500006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2129500006  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2129500006_H
#ifndef ASN1_T794248277_H
#define ASN1_T794248277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t794248277  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t3211447327* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t1155359356 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t794248277, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t794248277, ___m_aValue_1)); }
	inline ByteU5BU5D_t3211447327* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t3211447327* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t794248277, ___elist_2)); }
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
#endif // ASN1_T794248277_H
#ifndef PRIMEGENERATORBASE_T1196227555_H
#define PRIMEGENERATORBASE_T1196227555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t1196227555  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T1196227555_H
#ifndef PRIMALITYTESTS_T1487464066_H
#define PRIMALITYTESTS_T1487464066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t1487464066  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T1487464066_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef LOCALE_T3646739237_H
#define LOCALE_T3646739237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t3646739237  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T3646739237_H
#ifndef BIGINTEGER_T2833572242_H
#define BIGINTEGER_T2833572242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2833572242  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t3268503027* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t2833572242, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2833572242, ___data_1)); }
	inline UInt32U5BU5D_t3268503027* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t3268503027** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t3268503027* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t2833572242_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t3268503027* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t214893434 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t2833572242_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t3268503027* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t3268503027** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t3268503027* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t2833572242_StaticFields, ___rng_3)); }
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
#endif // BIGINTEGER_T2833572242_H
#ifndef EVENTARGS_T1682362798_H
#define EVENTARGS_T1682362798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1682362798  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1682362798_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1682362798 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1682362798_StaticFields, ___Empty_0)); }
	inline EventArgs_t1682362798 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1682362798 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1682362798 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1682362798_H
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
#ifndef KERNEL_T1914509128_H
#define KERNEL_T1914509128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1914509128  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1914509128_H
#ifndef RANDOM_T2864274872_H
#define RANDOM_T2864274872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t2864274872  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t617919100* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t2864274872, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t2864274872, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t2864274872, ___SeedArray_2)); }
	inline Int32U5BU5D_t617919100* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t617919100** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t617919100* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T2864274872_H
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
#ifndef ATTRIBUTE_T4285271925_H
#define ATTRIBUTE_T4285271925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t4285271925  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T4285271925_H
#ifndef HASHALGORITHM_T1901406455_H
#define HASHALGORITHM_T1901406455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1901406455  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3211447327* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1901406455, ___HashValue_0)); }
	inline ByteU5BU5D_t3211447327* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t3211447327* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1901406455, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1901406455, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1901406455, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1901406455_H
#ifndef STRINGCOMPARER_T87726838_H
#define STRINGCOMPARER_T87726838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t87726838  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t87726838_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t87726838 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t87726838 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t87726838 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t87726838 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t87726838_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t87726838 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t87726838 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t87726838 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t87726838_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t87726838 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t87726838 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t87726838 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t87726838_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t87726838 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t87726838 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t87726838 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t87726838_StaticFields, ___ordinal_3)); }
	inline StringComparer_t87726838 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t87726838 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t87726838 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T87726838_H
#ifndef TIMEZONE_T3383581328_H
#define TIMEZONE_T3383581328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t3383581328  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t3383581328_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t3383581328 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t3383581328_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t3383581328 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t3383581328 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t3383581328 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t3383581328_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t3383581328_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T3383581328_H
#ifndef PARSER_T149109707_H
#define PARSER_T149109707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t149109707  : public RuntimeObject
{
public:
	// System.String System.TimeSpan/Parser::_src
	String_t* ____src_0;
	// System.Int32 System.TimeSpan/Parser::_cur
	int32_t ____cur_1;
	// System.Int32 System.TimeSpan/Parser::_length
	int32_t ____length_2;
	// System.Boolean System.TimeSpan/Parser::formatError
	bool ___formatError_3;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t149109707, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t149109707, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t149109707, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t149109707, ___formatError_3)); }
	inline bool get_formatError_3() const { return ___formatError_3; }
	inline bool* get_address_of_formatError_3() { return &___formatError_3; }
	inline void set_formatError_3(bool value)
	{
		___formatError_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T149109707_H
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
#ifndef U24ARRAYTYPEU2464_T1742567739_H
#define U24ARRAYTYPEU2464_T1742567739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1742567739 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t1742567739__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1742567739_H
#ifndef U24ARRAYTYPEU2412_T2616359416_H
#define U24ARRAYTYPEU2412_T2616359416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2616359416 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2616359416__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2616359416_H
#ifndef U24ARRAYTYPEU24136_T4263477204_H
#define U24ARRAYTYPEU24136_T4263477204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t4263477204 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t4263477204__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T4263477204_H
#ifndef U24ARRAYTYPEU248_T773441_H
#define U24ARRAYTYPEU248_T773441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t773441 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t773441__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T773441_H
#ifndef BOOLEAN_T2774580009_H
#define BOOLEAN_T2774580009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t2774580009 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2774580009, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t2774580009_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2774580009_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2774580009_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T2774580009_H
#ifndef U24ARRAYTYPEU2472_T3946235017_H
#define U24ARRAYTYPEU2472_T3946235017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3946235017 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t3946235017__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3946235017_H
#ifndef U24ARRAYTYPEU24124_T1217628188_H
#define U24ARRAYTYPEU24124_T1217628188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t1217628188 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t1217628188__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T1217628188_H
#ifndef U24ARRAYTYPEU2496_T3183783455_H
#define U24ARRAYTYPEU2496_T3183783455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t3183783455 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t3183783455__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T3183783455_H
#ifndef U24ARRAYTYPEU241024_T3812758345_H
#define U24ARRAYTYPEU241024_T3812758345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3812758345 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t3812758345__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3812758345_H
#ifndef U24ARRAYTYPEU24256_T2633067405_H
#define U24ARRAYTYPEU24256_T2633067405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2633067405 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t2633067405__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2633067405_H
#ifndef U24ARRAYTYPEU2448_T3380830122_H
#define U24ARRAYTYPEU2448_T3380830122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3380830122 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t3380830122__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3380830122_H
#ifndef U24ARRAYTYPEU24640_T4065842139_H
#define U24ARRAYTYPEU24640_T4065842139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t4065842139 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t4065842139__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T4065842139_H
#ifndef U24ARRAYTYPEU24160_T2223263372_H
#define U24ARRAYTYPEU24160_T2223263372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$160
struct  U24ArrayTypeU24160_t2223263372 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24160_t2223263372__padding[160];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24160_T2223263372_H
#ifndef U24ARRAYTYPEU24128_T3997016451_H
#define U24ARRAYTYPEU24128_T3997016451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t3997016451 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t3997016451__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T3997016451_H
#ifndef U24ARRAYTYPEU2452_T1918462091_H
#define U24ARRAYTYPEU2452_T1918462091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t1918462091 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t1918462091__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T1918462091_H
#ifndef __IL2CPPCOMDELEGATE_T1315709631_H
#define __IL2CPPCOMDELEGATE_T1315709631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1315709631  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1315709631_H
#ifndef RESOLVEEVENTARGS_T2529604179_H
#define RESOLVEEVENTARGS_T2529604179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t2529604179  : public EventArgs_t1682362798
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t2529604179, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T2529604179_H
#ifndef U24ARRAYTYPEU242048_T446144843_H
#define U24ARRAYTYPEU242048_T446144843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t446144843 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t446144843__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T446144843_H
#ifndef U24ARRAYTYPEU2432_T628517584_H
#define U24ARRAYTYPEU2432_T628517584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t628517584 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t628517584__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T628517584_H
#ifndef U24ARRAYTYPEU243132_T855833617_H
#define U24ARRAYTYPEU243132_T855833617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t855833617 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t855833617__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T855833617_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T3287158110_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T3287158110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t3287158110  : public EventArgs_t1682362798
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t3287158110, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t3287158110, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T3287158110_H
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
#ifndef GCHANDLE_T183696143_H
#define GCHANDLE_T183696143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t183696143 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t183696143, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T183696143_H
#ifndef MD4_T1171525528_H
#define MD4_T1171525528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t1171525528  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T1171525528_H
#ifndef MD2_T1832775597_H
#define MD2_T1832775597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t1832775597  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T1832775597_H
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
#ifndef U24ARRAYTYPEU2420_T3637169233_H
#define U24ARRAYTYPEU2420_T3637169233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t3637169233 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t3637169233__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T3637169233_H
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
#ifndef THREADSTATICATTRIBUTE_T1314146907_H
#define THREADSTATICATTRIBUTE_T1314146907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t1314146907  : public Attribute_t4285271925
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T1314146907_H
#ifndef ORDINALCOMPARER_T31114505_H
#define ORDINALCOMPARER_T31114505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t31114505  : public StringComparer_t87726838
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t31114505, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T31114505_H
#ifndef CULTUREAWARECOMPARER_T3151594946_H
#define CULTUREAWARECOMPARER_T3151594946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t3151594946  : public StringComparer_t87726838
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3994572730 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3151594946, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3151594946, ____compareInfo_5)); }
	inline CompareInfo_t3994572730 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t3994572730 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t3994572730 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T3151594946_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T222900673_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T222900673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t222900673  : public PrimeGeneratorBase_t1196227555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T222900673_H
#ifndef U24ARRAYTYPEU2456_T974944900_H
#define U24ARRAYTYPEU2456_T974944900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t974944900 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t974944900__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T974944900_H
#ifndef U24ARRAYTYPEU2424_T1851435834_H
#define U24ARRAYTYPEU2424_T1851435834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t1851435834 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t1851435834__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T1851435834_H
#ifndef U24ARRAYTYPEU2416_T3307410505_H
#define U24ARRAYTYPEU2416_T3307410505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t3307410505 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t3307410505__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T3307410505_H
#ifndef U24ARRAYTYPEU24120_T407033139_H
#define U24ARRAYTYPEU24120_T407033139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t407033139 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t407033139__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T407033139_H
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
#ifndef U24ARRAYTYPEU2484_T311983075_H
#define U24ARRAYTYPEU2484_T311983075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$84
struct  U24ArrayTypeU2484_t311983075 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2484_t311983075__padding[84];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2484_T311983075_H
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
#ifndef MD2MANAGED_T917949851_H
#define MD2MANAGED_T917949851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t917949851  : public MD2_t1832775597
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t3211447327* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t3211447327* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t3211447327* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t3211447327* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t917949851, ___state_4)); }
	inline ByteU5BU5D_t3211447327* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t3211447327* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t917949851, ___checksum_5)); }
	inline ByteU5BU5D_t3211447327* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t3211447327** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t3211447327* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t917949851, ___buffer_6)); }
	inline ByteU5BU5D_t3211447327* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t3211447327** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t3211447327* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t917949851, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t917949851, ___x_8)); }
	inline ByteU5BU5D_t3211447327* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t3211447327** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t3211447327* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t917949851_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t3211447327* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t917949851_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t3211447327* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t3211447327** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t3211447327* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T917949851_H
#ifndef MD4MANAGED_T3163660329_H
#define MD4MANAGED_T3163660329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t3163660329  : public MD4_t1171525528
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t3268503027* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t3211447327* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t3268503027* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t3268503027* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t3211447327* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t3163660329, ___state_4)); }
	inline UInt32U5BU5D_t3268503027* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t3268503027** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t3268503027* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t3163660329, ___buffer_5)); }
	inline ByteU5BU5D_t3211447327* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3211447327** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3211447327* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t3163660329, ___count_6)); }
	inline UInt32U5BU5D_t3268503027* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t3268503027** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t3268503027* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t3163660329, ___x_7)); }
	inline UInt32U5BU5D_t3268503027* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t3268503027** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t3268503027* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t3163660329, ___digest_8)); }
	inline ByteU5BU5D_t3211447327* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t3211447327** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t3211447327* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T3163660329_H
#ifndef NOTSUPPORTEDEXCEPTION_T2429366409_H
#define NOTSUPPORTEDEXCEPTION_T2429366409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t2429366409  : public SystemException_t4124770834
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T2429366409_H
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
#ifndef CONFIDENCEFACTOR_T1363657515_H
#define CONFIDENCEFACTOR_T1363657515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t1363657515 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t1363657515, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T1363657515_H
#ifndef PADDINGMODE_T457467698_H
#define PADDINGMODE_T457467698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t457467698 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t457467698, ___value___1)); }
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
#endif // PADDINGMODE_T457467698_H
#ifndef CIPHERMODE_T2720925493_H
#define CIPHERMODE_T2720925493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2720925493 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2720925493, ___value___1)); }
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
#endif // CIPHERMODE_T2720925493_H
#ifndef UNITYTYPE_T1000798694_H
#define UNITYTYPE_T1000798694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t1000798694 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t1000798694, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T1000798694_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T1083807365_H
#define UNAUTHORIZEDACCESSEXCEPTION_T1083807365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t1083807365  : public SystemException_t4124770834
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T1083807365_H
#ifndef TYPELOADEXCEPTION_T3287913379_H
#define TYPELOADEXCEPTION_T3287913379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3287913379  : public SystemException_t4124770834
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3287913379, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3287913379, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3287913379_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T21047190_H
#define TYPEINITIALIZATIONEXCEPTION_T21047190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t21047190  : public SystemException_t4124770834
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t21047190, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T21047190_H
#ifndef TYPECODE_T3909367126_H
#define TYPECODE_T3909367126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t3909367126 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t3909367126, ___value___1)); }
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
#endif // TYPECODE_T3909367126_H
#ifndef CURRENTSYSTEMTIMEZONE_T1462745868_H
#define CURRENTSYSTEMTIMEZONE_T1462745868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t1462745868  : public TimeZone_t3383581328
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t495704637 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t2435896000  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t2435896000  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t495704637 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t495704637 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t495704637 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t2435896000  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t2435896000 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t2435896000  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t2435896000  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t2435896000 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t2435896000  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t1462745868_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t1830788077 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1462745868_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t1830788077 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t1830788077 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t1830788077 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T1462745868_H
#ifndef WEAKREFERENCE_T1070761214_H
#define WEAKREFERENCE_T1070761214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1070761214  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t183696143  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1070761214, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1070761214, ___gcHandle_1)); }
	inline GCHandle_t183696143  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t183696143 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t183696143  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1070761214_H
#ifndef SIGN_T2616005024_H
#define SIGN_T2616005024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t2616005024 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t2616005024, ___value___1)); }
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
#endif // SIGN_T2616005024_H
#ifndef STRINGCOMPARISON_T2698444534_H
#define STRINGCOMPARISON_T2698444534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t2698444534 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t2698444534, ___value___1)); }
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
#endif // STRINGCOMPARISON_T2698444534_H
#ifndef STACKOVERFLOWEXCEPTION_T2814075976_H
#define STACKOVERFLOWEXCEPTION_T2814075976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t2814075976  : public SystemException_t4124770834
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T2814075976_H
#ifndef RUNTIMEMETHODHANDLE_T2487394533_H
#define RUNTIMEMETHODHANDLE_T2487394533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t2487394533 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t2487394533, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T2487394533_H
#ifndef RANKEXCEPTION_T2363722987_H
#define RANKEXCEPTION_T2363722987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t2363722987  : public SystemException_t4124770834
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T2363722987_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2051038631_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2051038631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2051038631  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t974944900  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t1851435834  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t1851435834  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t1851435834  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t1851435834  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t3307410505  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t3307410505  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t855833617  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t3637169233  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t628517584  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t3380830122  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t1742567739  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t1742567739  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t1742567739  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t1742567739  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t2616359416  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t2616359416  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t2616359416  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t3307410505  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t4263477204  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$84 <PrivateImplementationDetails>::$$field-29
	U24ArrayTypeU2484_t311983075  ___U24U24fieldU2D29_20;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t3946235017  ___U24U24fieldU2D30_21;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t773441  ___U24U24fieldU2D31_22;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t3637169233  ___U24U24fieldU2D32_23;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t1742567739  ___U24U24fieldU2D33_24;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t1217628188  ___U24U24fieldU2D34_25;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t628517584  ___U24U24fieldU2D35_26;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t3183783455  ___U24U24fieldU2D36_27;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t446144843  ___U24U24fieldU2D37_28;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t974944900  ___U24U24fieldU2D38_29;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t3307410505  ___U24U24fieldU2D39_30;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t3380830122  ___U24U24fieldU2D40_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t446144843  ___U24U24fieldU2D41_32;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t446144843  ___U24U24fieldU2D42_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t2633067405  ___U24U24fieldU2D43_34;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t2633067405  ___U24U24fieldU2D44_35;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t407033139  ___U24U24fieldU2D45_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t2633067405  ___U24U24fieldU2D46_37;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t2633067405  ___U24U24fieldU2D47_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D48_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D49_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D50_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D51_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D52_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D53_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D54_45;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t3812758345  ___U24U24fieldU2D55_46;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t2633067405  ___U24U24fieldU2D56_47;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t4065842139  ___U24U24fieldU2D57_48;
	// <PrivateImplementationDetails>/$ArrayType$160 <PrivateImplementationDetails>::$$field-59
	U24ArrayTypeU24160_t2223263372  ___U24U24fieldU2D59_49;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t2616359416  ___U24U24fieldU2D60_50;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t3997016451  ___U24U24fieldU2D62_51;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t2633067405  ___U24U24fieldU2D63_52;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t1918462091  ___U24U24fieldU2D64_53;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t1918462091  ___U24U24fieldU2D65_54;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t974944900  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t974944900 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t974944900  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t1851435834  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t1851435834 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t1851435834  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t1851435834  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t1851435834 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t1851435834  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t1851435834  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t1851435834 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t1851435834  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t1851435834  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t1851435834 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t1851435834  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t3307410505  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t3307410505 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t3307410505  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t3307410505  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t3307410505 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t3307410505  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t855833617  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t855833617 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t855833617  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t3637169233  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t3637169233 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t3637169233  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t628517584  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t628517584 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t628517584  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t3380830122  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t3380830122 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t3380830122  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t1742567739  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t1742567739 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t1742567739  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t1742567739  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t1742567739 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t1742567739  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t1742567739  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t1742567739 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t1742567739  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t1742567739  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t1742567739 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t1742567739  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t2616359416  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t2616359416 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t2616359416  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t2616359416  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t2616359416 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t2616359416  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t2616359416  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t2616359416 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t2616359416  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t3307410505  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t3307410505 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t3307410505  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t4263477204  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t4263477204 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t4263477204  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D29_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D29_20)); }
	inline U24ArrayTypeU2484_t311983075  get_U24U24fieldU2D29_20() const { return ___U24U24fieldU2D29_20; }
	inline U24ArrayTypeU2484_t311983075 * get_address_of_U24U24fieldU2D29_20() { return &___U24U24fieldU2D29_20; }
	inline void set_U24U24fieldU2D29_20(U24ArrayTypeU2484_t311983075  value)
	{
		___U24U24fieldU2D29_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D30_21)); }
	inline U24ArrayTypeU2472_t3946235017  get_U24U24fieldU2D30_21() const { return ___U24U24fieldU2D30_21; }
	inline U24ArrayTypeU2472_t3946235017 * get_address_of_U24U24fieldU2D30_21() { return &___U24U24fieldU2D30_21; }
	inline void set_U24U24fieldU2D30_21(U24ArrayTypeU2472_t3946235017  value)
	{
		___U24U24fieldU2D30_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D31_22)); }
	inline U24ArrayTypeU248_t773441  get_U24U24fieldU2D31_22() const { return ___U24U24fieldU2D31_22; }
	inline U24ArrayTypeU248_t773441 * get_address_of_U24U24fieldU2D31_22() { return &___U24U24fieldU2D31_22; }
	inline void set_U24U24fieldU2D31_22(U24ArrayTypeU248_t773441  value)
	{
		___U24U24fieldU2D31_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D32_23)); }
	inline U24ArrayTypeU2420_t3637169233  get_U24U24fieldU2D32_23() const { return ___U24U24fieldU2D32_23; }
	inline U24ArrayTypeU2420_t3637169233 * get_address_of_U24U24fieldU2D32_23() { return &___U24U24fieldU2D32_23; }
	inline void set_U24U24fieldU2D32_23(U24ArrayTypeU2420_t3637169233  value)
	{
		___U24U24fieldU2D32_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D33_24)); }
	inline U24ArrayTypeU2464_t1742567739  get_U24U24fieldU2D33_24() const { return ___U24U24fieldU2D33_24; }
	inline U24ArrayTypeU2464_t1742567739 * get_address_of_U24U24fieldU2D33_24() { return &___U24U24fieldU2D33_24; }
	inline void set_U24U24fieldU2D33_24(U24ArrayTypeU2464_t1742567739  value)
	{
		___U24U24fieldU2D33_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D34_25)); }
	inline U24ArrayTypeU24124_t1217628188  get_U24U24fieldU2D34_25() const { return ___U24U24fieldU2D34_25; }
	inline U24ArrayTypeU24124_t1217628188 * get_address_of_U24U24fieldU2D34_25() { return &___U24U24fieldU2D34_25; }
	inline void set_U24U24fieldU2D34_25(U24ArrayTypeU24124_t1217628188  value)
	{
		___U24U24fieldU2D34_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D35_26)); }
	inline U24ArrayTypeU2432_t628517584  get_U24U24fieldU2D35_26() const { return ___U24U24fieldU2D35_26; }
	inline U24ArrayTypeU2432_t628517584 * get_address_of_U24U24fieldU2D35_26() { return &___U24U24fieldU2D35_26; }
	inline void set_U24U24fieldU2D35_26(U24ArrayTypeU2432_t628517584  value)
	{
		___U24U24fieldU2D35_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D36_27)); }
	inline U24ArrayTypeU2496_t3183783455  get_U24U24fieldU2D36_27() const { return ___U24U24fieldU2D36_27; }
	inline U24ArrayTypeU2496_t3183783455 * get_address_of_U24U24fieldU2D36_27() { return &___U24U24fieldU2D36_27; }
	inline void set_U24U24fieldU2D36_27(U24ArrayTypeU2496_t3183783455  value)
	{
		___U24U24fieldU2D36_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D37_28)); }
	inline U24ArrayTypeU242048_t446144843  get_U24U24fieldU2D37_28() const { return ___U24U24fieldU2D37_28; }
	inline U24ArrayTypeU242048_t446144843 * get_address_of_U24U24fieldU2D37_28() { return &___U24U24fieldU2D37_28; }
	inline void set_U24U24fieldU2D37_28(U24ArrayTypeU242048_t446144843  value)
	{
		___U24U24fieldU2D37_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D38_29)); }
	inline U24ArrayTypeU2456_t974944900  get_U24U24fieldU2D38_29() const { return ___U24U24fieldU2D38_29; }
	inline U24ArrayTypeU2456_t974944900 * get_address_of_U24U24fieldU2D38_29() { return &___U24U24fieldU2D38_29; }
	inline void set_U24U24fieldU2D38_29(U24ArrayTypeU2456_t974944900  value)
	{
		___U24U24fieldU2D38_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D39_30)); }
	inline U24ArrayTypeU2416_t3307410505  get_U24U24fieldU2D39_30() const { return ___U24U24fieldU2D39_30; }
	inline U24ArrayTypeU2416_t3307410505 * get_address_of_U24U24fieldU2D39_30() { return &___U24U24fieldU2D39_30; }
	inline void set_U24U24fieldU2D39_30(U24ArrayTypeU2416_t3307410505  value)
	{
		___U24U24fieldU2D39_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D40_31)); }
	inline U24ArrayTypeU2448_t3380830122  get_U24U24fieldU2D40_31() const { return ___U24U24fieldU2D40_31; }
	inline U24ArrayTypeU2448_t3380830122 * get_address_of_U24U24fieldU2D40_31() { return &___U24U24fieldU2D40_31; }
	inline void set_U24U24fieldU2D40_31(U24ArrayTypeU2448_t3380830122  value)
	{
		___U24U24fieldU2D40_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D41_32)); }
	inline U24ArrayTypeU242048_t446144843  get_U24U24fieldU2D41_32() const { return ___U24U24fieldU2D41_32; }
	inline U24ArrayTypeU242048_t446144843 * get_address_of_U24U24fieldU2D41_32() { return &___U24U24fieldU2D41_32; }
	inline void set_U24U24fieldU2D41_32(U24ArrayTypeU242048_t446144843  value)
	{
		___U24U24fieldU2D41_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D42_33)); }
	inline U24ArrayTypeU242048_t446144843  get_U24U24fieldU2D42_33() const { return ___U24U24fieldU2D42_33; }
	inline U24ArrayTypeU242048_t446144843 * get_address_of_U24U24fieldU2D42_33() { return &___U24U24fieldU2D42_33; }
	inline void set_U24U24fieldU2D42_33(U24ArrayTypeU242048_t446144843  value)
	{
		___U24U24fieldU2D42_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D43_34)); }
	inline U24ArrayTypeU24256_t2633067405  get_U24U24fieldU2D43_34() const { return ___U24U24fieldU2D43_34; }
	inline U24ArrayTypeU24256_t2633067405 * get_address_of_U24U24fieldU2D43_34() { return &___U24U24fieldU2D43_34; }
	inline void set_U24U24fieldU2D43_34(U24ArrayTypeU24256_t2633067405  value)
	{
		___U24U24fieldU2D43_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D44_35)); }
	inline U24ArrayTypeU24256_t2633067405  get_U24U24fieldU2D44_35() const { return ___U24U24fieldU2D44_35; }
	inline U24ArrayTypeU24256_t2633067405 * get_address_of_U24U24fieldU2D44_35() { return &___U24U24fieldU2D44_35; }
	inline void set_U24U24fieldU2D44_35(U24ArrayTypeU24256_t2633067405  value)
	{
		___U24U24fieldU2D44_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D45_36)); }
	inline U24ArrayTypeU24120_t407033139  get_U24U24fieldU2D45_36() const { return ___U24U24fieldU2D45_36; }
	inline U24ArrayTypeU24120_t407033139 * get_address_of_U24U24fieldU2D45_36() { return &___U24U24fieldU2D45_36; }
	inline void set_U24U24fieldU2D45_36(U24ArrayTypeU24120_t407033139  value)
	{
		___U24U24fieldU2D45_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D46_37)); }
	inline U24ArrayTypeU24256_t2633067405  get_U24U24fieldU2D46_37() const { return ___U24U24fieldU2D46_37; }
	inline U24ArrayTypeU24256_t2633067405 * get_address_of_U24U24fieldU2D46_37() { return &___U24U24fieldU2D46_37; }
	inline void set_U24U24fieldU2D46_37(U24ArrayTypeU24256_t2633067405  value)
	{
		___U24U24fieldU2D46_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D47_38)); }
	inline U24ArrayTypeU24256_t2633067405  get_U24U24fieldU2D47_38() const { return ___U24U24fieldU2D47_38; }
	inline U24ArrayTypeU24256_t2633067405 * get_address_of_U24U24fieldU2D47_38() { return &___U24U24fieldU2D47_38; }
	inline void set_U24U24fieldU2D47_38(U24ArrayTypeU24256_t2633067405  value)
	{
		___U24U24fieldU2D47_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D48_39)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D48_39() const { return ___U24U24fieldU2D48_39; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D48_39() { return &___U24U24fieldU2D48_39; }
	inline void set_U24U24fieldU2D48_39(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D48_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D49_40)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D49_40() const { return ___U24U24fieldU2D49_40; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D49_40() { return &___U24U24fieldU2D49_40; }
	inline void set_U24U24fieldU2D49_40(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D49_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D50_41)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D50_41() const { return ___U24U24fieldU2D50_41; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D50_41() { return &___U24U24fieldU2D50_41; }
	inline void set_U24U24fieldU2D50_41(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D50_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D51_42)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D51_42() const { return ___U24U24fieldU2D51_42; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D51_42() { return &___U24U24fieldU2D51_42; }
	inline void set_U24U24fieldU2D51_42(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D51_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D52_43)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D52_43() const { return ___U24U24fieldU2D52_43; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D52_43() { return &___U24U24fieldU2D52_43; }
	inline void set_U24U24fieldU2D52_43(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D52_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D53_44)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D53_44() const { return ___U24U24fieldU2D53_44; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D53_44() { return &___U24U24fieldU2D53_44; }
	inline void set_U24U24fieldU2D53_44(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D53_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D54_45)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D54_45() const { return ___U24U24fieldU2D54_45; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D54_45() { return &___U24U24fieldU2D54_45; }
	inline void set_U24U24fieldU2D54_45(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D54_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D55_46)); }
	inline U24ArrayTypeU241024_t3812758345  get_U24U24fieldU2D55_46() const { return ___U24U24fieldU2D55_46; }
	inline U24ArrayTypeU241024_t3812758345 * get_address_of_U24U24fieldU2D55_46() { return &___U24U24fieldU2D55_46; }
	inline void set_U24U24fieldU2D55_46(U24ArrayTypeU241024_t3812758345  value)
	{
		___U24U24fieldU2D55_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D56_47)); }
	inline U24ArrayTypeU24256_t2633067405  get_U24U24fieldU2D56_47() const { return ___U24U24fieldU2D56_47; }
	inline U24ArrayTypeU24256_t2633067405 * get_address_of_U24U24fieldU2D56_47() { return &___U24U24fieldU2D56_47; }
	inline void set_U24U24fieldU2D56_47(U24ArrayTypeU24256_t2633067405  value)
	{
		___U24U24fieldU2D56_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D57_48)); }
	inline U24ArrayTypeU24640_t4065842139  get_U24U24fieldU2D57_48() const { return ___U24U24fieldU2D57_48; }
	inline U24ArrayTypeU24640_t4065842139 * get_address_of_U24U24fieldU2D57_48() { return &___U24U24fieldU2D57_48; }
	inline void set_U24U24fieldU2D57_48(U24ArrayTypeU24640_t4065842139  value)
	{
		___U24U24fieldU2D57_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D59_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D59_49)); }
	inline U24ArrayTypeU24160_t2223263372  get_U24U24fieldU2D59_49() const { return ___U24U24fieldU2D59_49; }
	inline U24ArrayTypeU24160_t2223263372 * get_address_of_U24U24fieldU2D59_49() { return &___U24U24fieldU2D59_49; }
	inline void set_U24U24fieldU2D59_49(U24ArrayTypeU24160_t2223263372  value)
	{
		___U24U24fieldU2D59_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D60_50)); }
	inline U24ArrayTypeU2412_t2616359416  get_U24U24fieldU2D60_50() const { return ___U24U24fieldU2D60_50; }
	inline U24ArrayTypeU2412_t2616359416 * get_address_of_U24U24fieldU2D60_50() { return &___U24U24fieldU2D60_50; }
	inline void set_U24U24fieldU2D60_50(U24ArrayTypeU2412_t2616359416  value)
	{
		___U24U24fieldU2D60_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D62_51)); }
	inline U24ArrayTypeU24128_t3997016451  get_U24U24fieldU2D62_51() const { return ___U24U24fieldU2D62_51; }
	inline U24ArrayTypeU24128_t3997016451 * get_address_of_U24U24fieldU2D62_51() { return &___U24U24fieldU2D62_51; }
	inline void set_U24U24fieldU2D62_51(U24ArrayTypeU24128_t3997016451  value)
	{
		___U24U24fieldU2D62_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D63_52)); }
	inline U24ArrayTypeU24256_t2633067405  get_U24U24fieldU2D63_52() const { return ___U24U24fieldU2D63_52; }
	inline U24ArrayTypeU24256_t2633067405 * get_address_of_U24U24fieldU2D63_52() { return &___U24U24fieldU2D63_52; }
	inline void set_U24U24fieldU2D63_52(U24ArrayTypeU24256_t2633067405  value)
	{
		___U24U24fieldU2D63_52 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_53() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D64_53)); }
	inline U24ArrayTypeU2452_t1918462091  get_U24U24fieldU2D64_53() const { return ___U24U24fieldU2D64_53; }
	inline U24ArrayTypeU2452_t1918462091 * get_address_of_U24U24fieldU2D64_53() { return &___U24U24fieldU2D64_53; }
	inline void set_U24U24fieldU2D64_53(U24ArrayTypeU2452_t1918462091  value)
	{
		___U24U24fieldU2D64_53 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_54() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields, ___U24U24fieldU2D65_54)); }
	inline U24ArrayTypeU2452_t1918462091  get_U24U24fieldU2D65_54() const { return ___U24U24fieldU2D65_54; }
	inline U24ArrayTypeU2452_t1918462091 * get_address_of_U24U24fieldU2D65_54() { return &___U24U24fieldU2D65_54; }
	inline void set_U24U24fieldU2D65_54(U24ArrayTypeU2452_t1918462091  value)
	{
		___U24U24fieldU2D65_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2051038631_H
#ifndef STRINGSPLITOPTIONS_T1800131533_H
#define STRINGSPLITOPTIONS_T1800131533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t1800131533 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t1800131533, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T1800131533_H
#ifndef SYMMETRICALGORITHM_T2354607141_H
#define SYMMETRICALGORITHM_T2354607141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t2354607141  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3211447327* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3211447327* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t3128442365* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3128442365* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___IVValue_1)); }
	inline ByteU5BU5D_t3211447327* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3211447327* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___KeyValue_3)); }
	inline ByteU5BU5D_t3211447327* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3211447327** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3211447327* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t3128442365* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t3128442365** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t3128442365* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t3128442365* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t3128442365** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t3128442365* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2354607141, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T2354607141_H
#ifndef UNITYSERIALIZATIONHOLDER_T1956920969_H
#define UNITYSERIALIZATIONHOLDER_T1956920969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t1956920969  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1956920969, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1956920969, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1956920969, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T1956920969_H
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
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T3867517831_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T3867517831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t3867517831  : public NotSupportedException_t2429366409
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T3867517831_H
#ifndef PRIMALITYTEST_T2456668666_H
#define PRIMALITYTEST_T2456668666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t2456668666  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T2456668666_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3460117138_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3460117138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3460117138  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3460117138_H
#ifndef RESOLVEEVENTHANDLER_T3799866926_H
#define RESOLVEEVENTHANDLER_T3799866926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t3799866926  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T3799866926_H
#ifndef EVENTHANDLER_T931688993_H
#define EVENTHANDLER_T931688993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t931688993  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T931688993_H
#ifndef RC4_T3355146851_H
#define RC4_T3355146851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t3355146851  : public SymmetricAlgorithm_t2354607141
{
public:

public:
};

struct RC4_t3355146851_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t3128442365* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t3128442365* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t3355146851_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t3128442365* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t3128442365** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t3128442365* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t3355146851_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t3128442365* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t3128442365** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t3128442365* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T3355146851_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T4219759005_H
#define ASSEMBLYLOADEVENTHANDLER_T4219759005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t4219759005  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T4219759005_H
#ifndef APPDOMAININITIALIZER_T2064664002_H
#define APPDOMAININITIALIZER_T2064664002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t2064664002  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T2064664002_H
#ifndef WAITORTIMERCALLBACK_T4092828473_H
#define WAITORTIMERCALLBACK_T4092828473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t4092828473  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T4092828473_H
#ifndef TYPEFILTER_T2827250750_H
#define TYPEFILTER_T2827250750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t2827250750  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T2827250750_H
#ifndef WAITCALLBACK_T3569908751_H
#define WAITCALLBACK_T3569908751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t3569908751  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T3569908751_H
#ifndef THREADSTART_T2464623979_H
#define THREADSTART_T2464623979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t2464623979  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T2464623979_H
#ifndef SENDORPOSTCALLBACK_T3699776575_H
#define SENDORPOSTCALLBACK_T3699776575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t3699776575  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T3699776575_H
#ifndef PARAMETERIZEDTHREADSTART_T1126407903_H
#define PARAMETERIZEDTHREADSTART_T1126407903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_t1126407903  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDTHREADSTART_T1126407903_H
#ifndef CONTEXTCALLBACK_T1692108130_H
#define CONTEXTCALLBACK_T1692108130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ContextCallback
struct  ContextCallback_t1692108130  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACK_T1692108130_H
#ifndef HEADERHANDLER_T2639704621_H
#define HEADERHANDLER_T2639704621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t2639704621  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T2639704621_H
#ifndef CROSSCONTEXTDELEGATE_T3993858941_H
#define CROSSCONTEXTDELEGATE_T3993858941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t3993858941  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T3993858941_H
#ifndef TIMERCALLBACK_T4102703181_H
#define TIMERCALLBACK_T4102703181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t4102703181  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T4102703181_H
#ifndef MEMBERFILTER_T2176168764_H
#define MEMBERFILTER_T2176168764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t2176168764  : public MulticastDelegate_t958895040
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T2176168764_H
#ifndef ARC4MANAGED_T4160195948_H
#define ARC4MANAGED_T4160195948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t4160195948  : public RC4_t3355146851
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t3211447327* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t3211447327* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t4160195948, ___key_12)); }
	inline ByteU5BU5D_t3211447327* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t3211447327** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t3211447327* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t4160195948, ___state_13)); }
	inline ByteU5BU5D_t3211447327* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t3211447327** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t3211447327* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t4160195948, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t4160195948, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t4160195948, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T4160195948_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (PlatformNotSupportedException_t3867517831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1000[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (Random_t2864274872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1001[3] = 
{
	Random_t2864274872::get_offset_of_inext_0(),
	Random_t2864274872::get_offset_of_inextp_1(),
	Random_t2864274872::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (RankException_t2363722987), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (ResolveEventArgs_t2529604179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1003[1] = 
{
	ResolveEventArgs_t2529604179::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (RuntimeMethodHandle_t2487394533)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t2487394533 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1004[1] = 
{
	RuntimeMethodHandle_t2487394533::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (StackOverflowException_t2814075976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (StringComparer_t87726838), -1, sizeof(StringComparer_t87726838_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1006[4] = 
{
	StringComparer_t87726838_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t87726838_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t87726838_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t87726838_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (CultureAwareComparer_t3151594946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1007[2] = 
{
	CultureAwareComparer_t3151594946::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t3151594946::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (OrdinalComparer_t31114505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1008[1] = 
{
	OrdinalComparer_t31114505::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (StringComparison_t2698444534)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1009[7] = 
{
	StringComparison_t2698444534::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (StringSplitOptions_t1800131533)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1010[3] = 
{
	StringSplitOptions_t1800131533::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (SystemException_t4124770834), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (ThreadStaticAttribute_t1314146907), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (TimeSpan_t2435896000)+ sizeof (RuntimeObject), sizeof(TimeSpan_t2435896000 ), sizeof(TimeSpan_t2435896000_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1013[4] = 
{
	TimeSpan_t2435896000_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t2435896000_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t2435896000_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t2435896000::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (Parser_t149109707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1014[4] = 
{
	Parser_t149109707::get_offset_of__src_0(),
	Parser_t149109707::get_offset_of__cur_1(),
	Parser_t149109707::get_offset_of__length_2(),
	Parser_t149109707::get_offset_of_formatError_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (TimeZone_t3383581328), -1, sizeof(TimeZone_t3383581328_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1015[3] = 
{
	TimeZone_t3383581328_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t3383581328_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t3383581328_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (CurrentSystemTimeZone_t1462745868), -1, sizeof(CurrentSystemTimeZone_t1462745868_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1016[8] = 
{
	CurrentSystemTimeZone_t1462745868::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t1462745868::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t1462745868::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t1462745868::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t1462745868::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t1462745868::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t1462745868_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t1462745868_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (TypeCode_t3909367126)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1017[19] = 
{
	TypeCode_t3909367126::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (TypeInitializationException_t21047190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1018[1] = 
{
	TypeInitializationException_t21047190::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (TypeLoadException_t3287913379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1019[3] = 
{
	0,
	TypeLoadException_t3287913379::get_offset_of_className_12(),
	TypeLoadException_t3287913379::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (UnauthorizedAccessException_t1083807365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (UnhandledExceptionEventArgs_t3287158110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[2] = 
{
	UnhandledExceptionEventArgs_t3287158110::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t3287158110::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (UnitySerializationHolder_t1956920969), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1022[3] = 
{
	UnitySerializationHolder_t1956920969::get_offset_of__data_0(),
	UnitySerializationHolder_t1956920969::get_offset_of__unityType_1(),
	UnitySerializationHolder_t1956920969::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (UnityType_t1000798694)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1023[5] = 
{
	UnityType_t1000798694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (Version_t1902747478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1024[5] = 
{
	0,
	Version_t1902747478::get_offset_of__Major_1(),
	Version_t1902747478::get_offset_of__Minor_2(),
	Version_t1902747478::get_offset_of__Build_3(),
	Version_t1902747478::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (WeakReference_t1070761214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1025[2] = 
{
	WeakReference_t1070761214::get_offset_of_isLongReference_0(),
	WeakReference_t1070761214::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (PrimalityTest_t2456668666), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (MemberFilter_t2176168764), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (TypeFilter_t2827250750), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (CrossContextDelegate_t3993858941), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { sizeof (HeaderHandler_t2639704621), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { sizeof (ContextCallback_t1692108130), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (ParameterizedThreadStart_t1126407903), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (SendOrPostCallback_t3699776575), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (ThreadStart_t2464623979), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (TimerCallback_t4102703181), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (WaitCallback_t3569908751), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (WaitOrTimerCallback_t4092828473), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (AppDomainInitializer_t2064664002), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (AssemblyLoadEventHandler_t4219759005), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (EventHandler_t931688993), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (ResolveEventHandler_t3799866926), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (UnhandledExceptionEventHandler_t3460117138), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (U3CPrivateImplementationDetailsU3E_t2051038631), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1048[55] = 
{
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D29_20(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D30_21(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D31_22(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D32_23(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D33_24(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D34_25(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D35_26(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D36_27(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D37_28(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D38_29(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D39_30(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D40_31(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D41_32(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D42_33(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D43_34(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D44_35(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D45_36(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D46_37(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D47_38(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D48_39(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D49_40(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D50_41(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D51_42(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D52_43(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D53_44(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D54_45(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D55_46(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D56_47(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D57_48(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D59_49(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D60_50(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D62_51(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D63_52(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D64_53(),
	U3CPrivateImplementationDetailsU3E_t2051038631_StaticFields::get_offset_of_U24U24fieldU2D65_54(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (U24ArrayTypeU2456_t974944900)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t974944900 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (U24ArrayTypeU2424_t1851435834)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t1851435834 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (U24ArrayTypeU2416_t3307410505)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t3307410505 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (U24ArrayTypeU24120_t407033139)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t407033139 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (U24ArrayTypeU243132_t855833617)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t855833617 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (U24ArrayTypeU2420_t3637169233)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t3637169233 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (U24ArrayTypeU2432_t628517584)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t628517584 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (U24ArrayTypeU2448_t3380830122)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t3380830122 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (U24ArrayTypeU2464_t1742567739)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1742567739 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (U24ArrayTypeU2412_t2616359416)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2616359416 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (U24ArrayTypeU24136_t4263477204)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t4263477204 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (U24ArrayTypeU248_t773441)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t773441 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (U24ArrayTypeU2484_t311983075)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2484_t311983075 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (U24ArrayTypeU2472_t3946235017)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t3946235017 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (U24ArrayTypeU24124_t1217628188)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t1217628188 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (U24ArrayTypeU2496_t3183783455)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t3183783455 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (U24ArrayTypeU242048_t446144843)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t446144843 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (U24ArrayTypeU24256_t2633067405)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2633067405 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (U24ArrayTypeU241024_t3812758345)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3812758345 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (U24ArrayTypeU24640_t4065842139)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t4065842139 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (U24ArrayTypeU24160_t2223263372)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24160_t2223263372 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (U24ArrayTypeU24128_t3997016451)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t3997016451 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (U24ArrayTypeU2452_t1918462091)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t1918462091 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (__Il2CppComDelegate_t1315709631), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (U3CModuleU3E_t2866242826), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (Locale_t3646739237), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (BigInteger_t2833572242), -1, sizeof(BigInteger_t2833572242_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1076[4] = 
{
	BigInteger_t2833572242::get_offset_of_length_0(),
	BigInteger_t2833572242::get_offset_of_data_1(),
	BigInteger_t2833572242_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t2833572242_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (Sign_t2616005024)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1077[4] = 
{
	Sign_t2616005024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (ModulusRing_t1463012967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1078[2] = 
{
	ModulusRing_t1463012967::get_offset_of_mod_0(),
	ModulusRing_t1463012967::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (Kernel_t1914509128), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (ConfidenceFactor_t1363657515)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1080[7] = 
{
	ConfidenceFactor_t1363657515::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (PrimalityTests_t1487464066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (PrimeGeneratorBase_t1196227555), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (SequentialSearchPrimeGeneratorBase_t222900673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (ASN1_t794248277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1084[3] = 
{
	ASN1_t794248277::get_offset_of_m_nTag_0(),
	ASN1_t794248277::get_offset_of_m_aValue_1(),
	ASN1_t794248277::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (ASN1Convert_t2129500006), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (BitConverterLE_t2289320505), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (PKCS7_t1624441635), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (ContentInfo_t471155259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1088[2] = 
{
	ContentInfo_t471155259::get_offset_of_contentType_0(),
	ContentInfo_t471155259::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (EncryptedData_t821126458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1089[4] = 
{
	EncryptedData_t821126458::get_offset_of__version_0(),
	EncryptedData_t821126458::get_offset_of__content_1(),
	EncryptedData_t821126458::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t821126458::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (PrivateKey_t1259183006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1090[4] = 
{
	PrivateKey_t1259183006::get_offset_of_encrypted_0(),
	PrivateKey_t1259183006::get_offset_of_rsa_1(),
	PrivateKey_t1259183006::get_offset_of_weak_2(),
	PrivateKey_t1259183006::get_offset_of_keyType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (ARC4Managed_t4160195948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1091[5] = 
{
	ARC4Managed_t4160195948::get_offset_of_key_12(),
	ARC4Managed_t4160195948::get_offset_of_state_13(),
	ARC4Managed_t4160195948::get_offset_of_x_14(),
	ARC4Managed_t4160195948::get_offset_of_y_15(),
	ARC4Managed_t4160195948::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (CryptoConvert_t2835797577), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (KeyBuilder_t1099398107), -1, sizeof(KeyBuilder_t1099398107_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1093[1] = 
{
	KeyBuilder_t1099398107_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (MD2_t1832775597), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (MD2Managed_t917949851), -1, sizeof(MD2Managed_t917949851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1095[6] = 
{
	MD2Managed_t917949851::get_offset_of_state_4(),
	MD2Managed_t917949851::get_offset_of_checksum_5(),
	MD2Managed_t917949851::get_offset_of_buffer_6(),
	MD2Managed_t917949851::get_offset_of_count_7(),
	MD2Managed_t917949851::get_offset_of_x_8(),
	MD2Managed_t917949851_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (MD4_t1171525528), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (MD4Managed_t3163660329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1097[5] = 
{
	MD4Managed_t3163660329::get_offset_of_state_4(),
	MD4Managed_t3163660329::get_offset_of_buffer_5(),
	MD4Managed_t3163660329::get_offset_of_count_6(),
	MD4Managed_t3163660329::get_offset_of_x_7(),
	MD4Managed_t3163660329::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (PKCS1_t2578701017), -1, sizeof(PKCS1_t2578701017_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1098[4] = 
{
	PKCS1_t2578701017_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t2578701017_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t2578701017_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t2578701017_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (PKCS8_t2064271433), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

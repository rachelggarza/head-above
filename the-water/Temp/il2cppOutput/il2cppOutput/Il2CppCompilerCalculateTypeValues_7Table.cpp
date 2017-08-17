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

// System.Byte[]
struct ByteU5BU5D_t3211447327;
// System.UInt32[]
struct UInt32U5BU5D_t3268503027;
// System.UInt64[]
struct UInt64U5BU5D_t1611299958;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1155359356;
// System.Collections.IEnumerator
struct IEnumerator_t580101646;
// System.Security.Policy.IApplicationTrustManager
struct IApplicationTrustManager_t1123126480;
// System.ApplicationIdentity
struct ApplicationIdentity_t2613150010;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2107093201;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t2194848035;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t1983707203;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3128486386;
// System.Version
struct Version_t1902747478;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3235869392;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2264694153;
// System.Reflection.Assembly
struct Assembly_t3537485000;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2354607141;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t214893434;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3128442365;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t3774464129;
// System.Security.Cryptography.RSA
struct RSA_t765183856;
// System.Void
struct Void_t669509276;
// System.Security.Cryptography.DESTransform
struct DESTransform_t1468889429;
// System.Char[]
struct CharU5BU5D_t3680385359;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1901406455;
// System.UInt16[]
struct UInt16U5BU5D_t175108951;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t1617442946;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t480922200;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2465811819;
// System.Security.Cryptography.TripleDES
struct TripleDES_t2792648320;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t829004313;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t952012975;
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t1562199765;




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
#ifndef SHACONSTANTS_T485986180_H
#define SHACONSTANTS_T485986180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t485986180  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t485986180_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t3268503027* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t1611299958* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t485986180_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t3268503027* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t3268503027** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t3268503027* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t485986180_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t1611299958* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t1611299958** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t1611299958* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T485986180_H
#ifndef SIGNATUREDESCRIPTION_T1853926373_H
#define SIGNATUREDESCRIPTION_T1853926373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t1853926373  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t1853926373, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t1853926373, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t1853926373, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t1853926373, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T1853926373_H
#ifndef TOBASE64TRANSFORM_T2881320518_H
#define TOBASE64TRANSFORM_T2881320518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t2881320518  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_2;

public:
	inline static int32_t get_offset_of_m_disposed_2() { return static_cast<int32_t>(offsetof(ToBase64Transform_t2881320518, ___m_disposed_2)); }
	inline bool get_m_disposed_2() const { return ___m_disposed_2; }
	inline bool* get_address_of_m_disposed_2() { return &___m_disposed_2; }
	inline void set_m_disposed_2(bool value)
	{
		___m_disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T2881320518_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T1562199765_H
#define KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T1562199765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct  KeyContainerPermissionAccessEntryCollection_t1562199765  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::_list
	ArrayList_t1155359356 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryCollection_t1562199765, ____list_0)); }
	inline ArrayList_t1155359356 * get__list_0() const { return ____list_0; }
	inline ArrayList_t1155359356 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t1155359356 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T1562199765_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3555139228_H
#define KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3555139228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct  KeyContainerPermissionAccessEntryEnumerator_t3555139228  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryEnumerator_t3555139228, ___e_0)); }
	inline RuntimeObject* get_e_0() const { return ___e_0; }
	inline RuntimeObject** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(RuntimeObject* value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((&___e_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3555139228_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T3235869392_H
#define STRONGNAMEPUBLICKEYBLOB_T3235869392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t3235869392  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t3211447327* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t3235869392, ___pubkey_0)); }
	inline ByteU5BU5D_t3211447327* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t3211447327* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T3235869392_H
#ifndef ALLMEMBERSHIPCONDITION_T1476358333_H
#define ALLMEMBERSHIPCONDITION_T1476358333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.AllMembershipCondition
struct  AllMembershipCondition_t1476358333  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.AllMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(AllMembershipCondition_t1476358333, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLMEMBERSHIPCONDITION_T1476358333_H
#ifndef APPLICATIONSECURITYMANAGER_T1317866397_H
#define APPLICATIONSECURITYMANAGER_T1317866397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationSecurityManager
struct  ApplicationSecurityManager_t1317866397  : public RuntimeObject
{
public:

public:
};

struct ApplicationSecurityManager_t1317866397_StaticFields
{
public:
	// System.Security.Policy.IApplicationTrustManager System.Security.Policy.ApplicationSecurityManager::_appTrustManager
	RuntimeObject* ____appTrustManager_0;

public:
	inline static int32_t get_offset_of__appTrustManager_0() { return static_cast<int32_t>(offsetof(ApplicationSecurityManager_t1317866397_StaticFields, ____appTrustManager_0)); }
	inline RuntimeObject* get__appTrustManager_0() const { return ____appTrustManager_0; }
	inline RuntimeObject** get_address_of__appTrustManager_0() { return &____appTrustManager_0; }
	inline void set__appTrustManager_0(RuntimeObject* value)
	{
		____appTrustManager_0 = value;
		Il2CppCodeGenWriteBarrier((&____appTrustManager_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONSECURITYMANAGER_T1317866397_H
#ifndef APPLICATIONTRUST_T2175938951_H
#define APPLICATIONTRUST_T2175938951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t2175938951  : public RuntimeObject
{
public:
	// System.ApplicationIdentity System.Security.Policy.ApplicationTrust::_appid
	ApplicationIdentity_t2613150010 * ____appid_0;
	// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::_defaultPolicy
	PolicyStatement_t2107093201 * ____defaultPolicy_1;
	// System.Object System.Security.Policy.ApplicationTrust::_xtranfo
	RuntimeObject * ____xtranfo_2;
	// System.Boolean System.Security.Policy.ApplicationTrust::_trustrun
	bool ____trustrun_3;
	// System.Boolean System.Security.Policy.ApplicationTrust::_persist
	bool ____persist_4;
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_5;

public:
	inline static int32_t get_offset_of__appid_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2175938951, ____appid_0)); }
	inline ApplicationIdentity_t2613150010 * get__appid_0() const { return ____appid_0; }
	inline ApplicationIdentity_t2613150010 ** get_address_of__appid_0() { return &____appid_0; }
	inline void set__appid_0(ApplicationIdentity_t2613150010 * value)
	{
		____appid_0 = value;
		Il2CppCodeGenWriteBarrier((&____appid_0), value);
	}

	inline static int32_t get_offset_of__defaultPolicy_1() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2175938951, ____defaultPolicy_1)); }
	inline PolicyStatement_t2107093201 * get__defaultPolicy_1() const { return ____defaultPolicy_1; }
	inline PolicyStatement_t2107093201 ** get_address_of__defaultPolicy_1() { return &____defaultPolicy_1; }
	inline void set__defaultPolicy_1(PolicyStatement_t2107093201 * value)
	{
		____defaultPolicy_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultPolicy_1), value);
	}

	inline static int32_t get_offset_of__xtranfo_2() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2175938951, ____xtranfo_2)); }
	inline RuntimeObject * get__xtranfo_2() const { return ____xtranfo_2; }
	inline RuntimeObject ** get_address_of__xtranfo_2() { return &____xtranfo_2; }
	inline void set__xtranfo_2(RuntimeObject * value)
	{
		____xtranfo_2 = value;
		Il2CppCodeGenWriteBarrier((&____xtranfo_2), value);
	}

	inline static int32_t get_offset_of__trustrun_3() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2175938951, ____trustrun_3)); }
	inline bool get__trustrun_3() const { return ____trustrun_3; }
	inline bool* get_address_of__trustrun_3() { return &____trustrun_3; }
	inline void set__trustrun_3(bool value)
	{
		____trustrun_3 = value;
	}

	inline static int32_t get_offset_of__persist_4() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2175938951, ____persist_4)); }
	inline bool get__persist_4() const { return ____persist_4; }
	inline bool* get_address_of__persist_4() { return &____persist_4; }
	inline void set__persist_4(bool value)
	{
		____persist_4 = value;
	}

	inline static int32_t get_offset_of_fullTrustAssemblies_5() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2175938951, ___fullTrustAssemblies_5)); }
	inline RuntimeObject* get_fullTrustAssemblies_5() const { return ___fullTrustAssemblies_5; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_5() { return &___fullTrustAssemblies_5; }
	inline void set_fullTrustAssemblies_5(RuntimeObject* value)
	{
		___fullTrustAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T2175938951_H
#ifndef CODECONNECTACCESS_T2983407520_H
#define CODECONNECTACCESS_T2983407520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeConnectAccess
struct  CodeConnectAccess_t2983407520  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::_scheme
	String_t* ____scheme_4;
	// System.Int32 System.Security.Policy.CodeConnectAccess::_port
	int32_t ____port_5;

public:
	inline static int32_t get_offset_of__scheme_4() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t2983407520, ____scheme_4)); }
	inline String_t* get__scheme_4() const { return ____scheme_4; }
	inline String_t** get_address_of__scheme_4() { return &____scheme_4; }
	inline void set__scheme_4(String_t* value)
	{
		____scheme_4 = value;
		Il2CppCodeGenWriteBarrier((&____scheme_4), value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t2983407520, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}
};

struct CodeConnectAccess_t2983407520_StaticFields
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::AnyScheme
	String_t* ___AnyScheme_0;
	// System.Int32 System.Security.Policy.CodeConnectAccess::DefaultPort
	int32_t ___DefaultPort_1;
	// System.Int32 System.Security.Policy.CodeConnectAccess::OriginPort
	int32_t ___OriginPort_2;
	// System.String System.Security.Policy.CodeConnectAccess::OriginScheme
	String_t* ___OriginScheme_3;

public:
	inline static int32_t get_offset_of_AnyScheme_0() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t2983407520_StaticFields, ___AnyScheme_0)); }
	inline String_t* get_AnyScheme_0() const { return ___AnyScheme_0; }
	inline String_t** get_address_of_AnyScheme_0() { return &___AnyScheme_0; }
	inline void set_AnyScheme_0(String_t* value)
	{
		___AnyScheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___AnyScheme_0), value);
	}

	inline static int32_t get_offset_of_DefaultPort_1() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t2983407520_StaticFields, ___DefaultPort_1)); }
	inline int32_t get_DefaultPort_1() const { return ___DefaultPort_1; }
	inline int32_t* get_address_of_DefaultPort_1() { return &___DefaultPort_1; }
	inline void set_DefaultPort_1(int32_t value)
	{
		___DefaultPort_1 = value;
	}

	inline static int32_t get_offset_of_OriginPort_2() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t2983407520_StaticFields, ___OriginPort_2)); }
	inline int32_t get_OriginPort_2() const { return ___OriginPort_2; }
	inline int32_t* get_address_of_OriginPort_2() { return &___OriginPort_2; }
	inline void set_OriginPort_2(int32_t value)
	{
		___OriginPort_2 = value;
	}

	inline static int32_t get_offset_of_OriginScheme_3() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t2983407520_StaticFields, ___OriginScheme_3)); }
	inline String_t* get_OriginScheme_3() const { return ___OriginScheme_3; }
	inline String_t** get_address_of_OriginScheme_3() { return &___OriginScheme_3; }
	inline void set_OriginScheme_3(String_t* value)
	{
		___OriginScheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginScheme_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODECONNECTACCESS_T2983407520_H
#ifndef CODEGROUP_T1150497623_H
#define CODEGROUP_T1150497623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t1150497623  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t2107093201 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t1155359356 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t1150497623, ___m_policy_0)); }
	inline PolicyStatement_t2107093201 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t2107093201 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t2107093201 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t1150497623, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t1150497623, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t1150497623, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t1150497623, ___m_children_4)); }
	inline ArrayList_t1155359356 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t1155359356 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t1155359356 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t1150497623_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2A
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map2A_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_5() { return static_cast<int32_t>(offsetof(CodeGroup_t1150497623_StaticFields, ___U3CU3Ef__switchU24map2A_5)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map2A_5() const { return ___U3CU3Ef__switchU24map2A_5; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map2A_5() { return &___U3CU3Ef__switchU24map2A_5; }
	inline void set_U3CU3Ef__switchU24map2A_5(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map2A_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T1150497623_H
#ifndef DEFAULTPOLICIES_T3235917172_H
#define DEFAULTPOLICIES_T3235917172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t3235917172  : public RuntimeObject
{
public:

public:
};

struct DefaultPolicies_t3235917172_StaticFields
{
public:
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t1902747478 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t3211447327* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t3235869392 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t3211447327* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t3235869392 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t2264694153 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t2264694153 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t2264694153 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t2264694153 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t2264694153 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t2264694153 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t2264694153 * ____everything_11;

public:
	inline static int32_t get_offset_of__fxVersion_0() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____fxVersion_0)); }
	inline Version_t1902747478 * get__fxVersion_0() const { return ____fxVersion_0; }
	inline Version_t1902747478 ** get_address_of__fxVersion_0() { return &____fxVersion_0; }
	inline void set__fxVersion_0(Version_t1902747478 * value)
	{
		____fxVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&____fxVersion_0), value);
	}

	inline static int32_t get_offset_of__ecmaKey_1() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____ecmaKey_1)); }
	inline ByteU5BU5D_t3211447327* get__ecmaKey_1() const { return ____ecmaKey_1; }
	inline ByteU5BU5D_t3211447327** get_address_of__ecmaKey_1() { return &____ecmaKey_1; }
	inline void set__ecmaKey_1(ByteU5BU5D_t3211447327* value)
	{
		____ecmaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____ecmaKey_1), value);
	}

	inline static int32_t get_offset_of__ecma_2() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____ecma_2)); }
	inline StrongNamePublicKeyBlob_t3235869392 * get__ecma_2() const { return ____ecma_2; }
	inline StrongNamePublicKeyBlob_t3235869392 ** get_address_of__ecma_2() { return &____ecma_2; }
	inline void set__ecma_2(StrongNamePublicKeyBlob_t3235869392 * value)
	{
		____ecma_2 = value;
		Il2CppCodeGenWriteBarrier((&____ecma_2), value);
	}

	inline static int32_t get_offset_of__msFinalKey_3() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____msFinalKey_3)); }
	inline ByteU5BU5D_t3211447327* get__msFinalKey_3() const { return ____msFinalKey_3; }
	inline ByteU5BU5D_t3211447327** get_address_of__msFinalKey_3() { return &____msFinalKey_3; }
	inline void set__msFinalKey_3(ByteU5BU5D_t3211447327* value)
	{
		____msFinalKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____msFinalKey_3), value);
	}

	inline static int32_t get_offset_of__msFinal_4() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____msFinal_4)); }
	inline StrongNamePublicKeyBlob_t3235869392 * get__msFinal_4() const { return ____msFinal_4; }
	inline StrongNamePublicKeyBlob_t3235869392 ** get_address_of__msFinal_4() { return &____msFinal_4; }
	inline void set__msFinal_4(StrongNamePublicKeyBlob_t3235869392 * value)
	{
		____msFinal_4 = value;
		Il2CppCodeGenWriteBarrier((&____msFinal_4), value);
	}

	inline static int32_t get_offset_of__fullTrust_5() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____fullTrust_5)); }
	inline NamedPermissionSet_t2264694153 * get__fullTrust_5() const { return ____fullTrust_5; }
	inline NamedPermissionSet_t2264694153 ** get_address_of__fullTrust_5() { return &____fullTrust_5; }
	inline void set__fullTrust_5(NamedPermissionSet_t2264694153 * value)
	{
		____fullTrust_5 = value;
		Il2CppCodeGenWriteBarrier((&____fullTrust_5), value);
	}

	inline static int32_t get_offset_of__localIntranet_6() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____localIntranet_6)); }
	inline NamedPermissionSet_t2264694153 * get__localIntranet_6() const { return ____localIntranet_6; }
	inline NamedPermissionSet_t2264694153 ** get_address_of__localIntranet_6() { return &____localIntranet_6; }
	inline void set__localIntranet_6(NamedPermissionSet_t2264694153 * value)
	{
		____localIntranet_6 = value;
		Il2CppCodeGenWriteBarrier((&____localIntranet_6), value);
	}

	inline static int32_t get_offset_of__internet_7() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____internet_7)); }
	inline NamedPermissionSet_t2264694153 * get__internet_7() const { return ____internet_7; }
	inline NamedPermissionSet_t2264694153 ** get_address_of__internet_7() { return &____internet_7; }
	inline void set__internet_7(NamedPermissionSet_t2264694153 * value)
	{
		____internet_7 = value;
		Il2CppCodeGenWriteBarrier((&____internet_7), value);
	}

	inline static int32_t get_offset_of__skipVerification_8() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____skipVerification_8)); }
	inline NamedPermissionSet_t2264694153 * get__skipVerification_8() const { return ____skipVerification_8; }
	inline NamedPermissionSet_t2264694153 ** get_address_of__skipVerification_8() { return &____skipVerification_8; }
	inline void set__skipVerification_8(NamedPermissionSet_t2264694153 * value)
	{
		____skipVerification_8 = value;
		Il2CppCodeGenWriteBarrier((&____skipVerification_8), value);
	}

	inline static int32_t get_offset_of__execution_9() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____execution_9)); }
	inline NamedPermissionSet_t2264694153 * get__execution_9() const { return ____execution_9; }
	inline NamedPermissionSet_t2264694153 ** get_address_of__execution_9() { return &____execution_9; }
	inline void set__execution_9(NamedPermissionSet_t2264694153 * value)
	{
		____execution_9 = value;
		Il2CppCodeGenWriteBarrier((&____execution_9), value);
	}

	inline static int32_t get_offset_of__nothing_10() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____nothing_10)); }
	inline NamedPermissionSet_t2264694153 * get__nothing_10() const { return ____nothing_10; }
	inline NamedPermissionSet_t2264694153 ** get_address_of__nothing_10() { return &____nothing_10; }
	inline void set__nothing_10(NamedPermissionSet_t2264694153 * value)
	{
		____nothing_10 = value;
		Il2CppCodeGenWriteBarrier((&____nothing_10), value);
	}

	inline static int32_t get_offset_of__everything_11() { return static_cast<int32_t>(offsetof(DefaultPolicies_t3235917172_StaticFields, ____everything_11)); }
	inline NamedPermissionSet_t2264694153 * get__everything_11() const { return ____everything_11; }
	inline NamedPermissionSet_t2264694153 ** get_address_of__everything_11() { return &____everything_11; }
	inline void set__everything_11(NamedPermissionSet_t2264694153 * value)
	{
		____everything_11 = value;
		Il2CppCodeGenWriteBarrier((&____everything_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPOLICIES_T3235917172_H
#ifndef EVIDENCE_T53821868_H
#define EVIDENCE_T53821868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t53821868  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t1155359356 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t1155359356 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t53821868, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t53821868, ___hostEvidenceList_1)); }
	inline ArrayList_t1155359356 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t1155359356 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t1155359356 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t53821868, ___assemblyEvidenceList_2)); }
	inline ArrayList_t1155359356 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t1155359356 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t1155359356 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t53821868, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T53821868_H
#ifndef EVIDENCEENUMERATOR_T3711490937_H
#define EVIDENCEENUMERATOR_T3711490937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t3711490937  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3711490937, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3711490937, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t3711490937, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T3711490937_H
#ifndef HASH_T3907327974_H
#define HASH_T3907327974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t3907327974  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t3537485000 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t3211447327* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t3907327974, ___assembly_0)); }
	inline Assembly_t3537485000 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t3537485000 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t3537485000 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t3907327974, ___data_1)); }
	inline ByteU5BU5D_t3211447327* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3211447327* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T3907327974_H
#ifndef DERIVEBYTES_T2888709407_H
#define DERIVEBYTES_T2888709407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t2888709407  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2888709407_H
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
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T2781476948_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T2781476948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t2781476948  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T2781476948_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T4042897779_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T4042897779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t4042897779  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T4042897779_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1896705197_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1896705197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1896705197  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1896705197_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T4243093456_H
#define ASYMMETRICSIGNATUREFORMATTER_T4243093456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t4243093456  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T4243093456_H
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
#ifndef CODEACCESSPERMISSION_T2136755615_H
#define CODEACCESSPERMISSION_T2136755615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t2136755615  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T2136755615_H
#ifndef SHA1INTERNAL_T952012975_H
#define SHA1INTERNAL_T952012975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t952012975  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t3268503027* ____H_2;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_3;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t3211447327* ____ProcessingBuffer_4;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t3268503027* ___buff_6;

public:
	inline static int32_t get_offset_of__H_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t952012975, ____H_2)); }
	inline UInt32U5BU5D_t3268503027* get__H_2() const { return ____H_2; }
	inline UInt32U5BU5D_t3268503027** get_address_of__H_2() { return &____H_2; }
	inline void set__H_2(UInt32U5BU5D_t3268503027* value)
	{
		____H_2 = value;
		Il2CppCodeGenWriteBarrier((&____H_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t952012975, ___count_3)); }
	inline uint64_t get_count_3() const { return ___count_3; }
	inline uint64_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(uint64_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t952012975, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t3211447327* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t3211447327** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t3211447327* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_5() { return static_cast<int32_t>(offsetof(SHA1Internal_t952012975, ____ProcessingBufferCount_5)); }
	inline int32_t get__ProcessingBufferCount_5() const { return ____ProcessingBufferCount_5; }
	inline int32_t* get_address_of__ProcessingBufferCount_5() { return &____ProcessingBufferCount_5; }
	inline void set__ProcessingBufferCount_5(int32_t value)
	{
		____ProcessingBufferCount_5 = value;
	}

	inline static int32_t get_offset_of_buff_6() { return static_cast<int32_t>(offsetof(SHA1Internal_t952012975, ___buff_6)); }
	inline UInt32U5BU5D_t3268503027* get_buff_6() const { return ___buff_6; }
	inline UInt32U5BU5D_t3268503027** get_address_of_buff_6() { return &___buff_6; }
	inline void set_buff_6(UInt32U5BU5D_t3268503027* value)
	{
		___buff_6 = value;
		Il2CppCodeGenWriteBarrier((&___buff_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T952012975_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T2850726604_H
#define RIJNDAELMANAGEDTRANSFORM_T2850726604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t2850726604  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t3774464129 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t2850726604, ____st_0)); }
	inline RijndaelTransform_t3774464129 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t3774464129 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t3774464129 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t2850726604, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T2850726604_H
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
#ifndef KEYSIZES_T1134556340_H
#define KEYSIZES_T1134556340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t1134556340  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t1134556340, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t1134556340, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t1134556340, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T1134556340_H
#ifndef MASKGENERATIONMETHOD_T1787409721_H
#define MASKGENERATIONMETHOD_T1787409721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MaskGenerationMethod
struct  MaskGenerationMethod_t1787409721  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKGENERATIONMETHOD_T1787409721_H
#ifndef RANDOMNUMBERGENERATOR_T214893434_H
#define RANDOMNUMBERGENERATOR_T214893434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t214893434  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T214893434_H
#ifndef RSAOAEPKEYEXCHANGEDEFORMATTER_T580130373_H
#define RSAOAEPKEYEXCHANGEDEFORMATTER_T580130373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct  RSAOAEPKeyExchangeDeformatter_t580130373  : public AsymmetricKeyExchangeDeformatter_t2781476948
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::rsa
	RSA_t765183856 * ___rsa_0;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeDeformatter_t580130373, ___rsa_0)); }
	inline RSA_t765183856 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t765183856 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t765183856 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEDEFORMATTER_T580130373_H
#ifndef SNIP_T1878142959_H
#define SNIP_T1878142959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t1878142959 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t3235869392 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t1902747478 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t1878142959, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t3235869392 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t3235869392 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t3235869392 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t1878142959, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t1878142959, ___AssemblyVersion_2)); }
	inline Version_t1902747478 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t1902747478 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t1902747478 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t1878142959_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t3235869392 * ___PublicKey_0;
	char* ___Name_1;
	Version_t1902747478 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t1878142959_marshaled_com
{
	StrongNamePublicKeyBlob_t3235869392 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t1902747478 * ___AssemblyVersion_2;
};
#endif // SNIP_T1878142959_H
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
#ifndef PKCS1MASKGENERATIONMETHOD_T3982938770_H
#define PKCS1MASKGENERATIONMETHOD_T3982938770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct  PKCS1MaskGenerationMethod_t3982938770  : public MaskGenerationMethod_t1787409721
{
public:
	// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::hashName
	String_t* ___hashName_0;

public:
	inline static int32_t get_offset_of_hashName_0() { return static_cast<int32_t>(offsetof(PKCS1MaskGenerationMethod_t3982938770, ___hashName_0)); }
	inline String_t* get_hashName_0() const { return ___hashName_0; }
	inline String_t** get_address_of_hashName_0() { return &___hashName_0; }
	inline void set_hashName_0(String_t* value)
	{
		___hashName_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1MASKGENERATIONMETHOD_T3982938770_H
#ifndef RSAPKCS1KEYEXCHANGEDEFORMATTER_T3395103956_H
#define RSAPKCS1KEYEXCHANGEDEFORMATTER_T3395103956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct  RSAPKCS1KeyExchangeDeformatter_t3395103956  : public AsymmetricKeyExchangeDeformatter_t2781476948
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::rsa
	RSA_t765183856 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::random
	RandomNumberGenerator_t214893434 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t3395103956, ___rsa_0)); }
	inline RSA_t765183856 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t765183856 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t765183856 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t3395103956, ___random_1)); }
	inline RandomNumberGenerator_t214893434 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t214893434 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t214893434 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEDEFORMATTER_T3395103956_H
#ifndef TRIPLEDESTRANSFORM_T1572432551_H
#define TRIPLEDESTRANSFORM_T1572432551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t1572432551  : public SymmetricTransform_t1629006107
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t1468889429 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t1468889429 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t1468889429 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t1468889429 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t1468889429 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t1468889429 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1572432551, ___E1_12)); }
	inline DESTransform_t1468889429 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t1468889429 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t1468889429 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1572432551, ___D2_13)); }
	inline DESTransform_t1468889429 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t1468889429 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t1468889429 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1572432551, ___E3_14)); }
	inline DESTransform_t1468889429 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t1468889429 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t1468889429 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1572432551, ___D1_15)); }
	inline DESTransform_t1468889429 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t1468889429 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t1468889429 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1572432551, ___E2_16)); }
	inline DESTransform_t1468889429 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t1468889429 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t1468889429 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1572432551, ___D3_17)); }
	inline DESTransform_t1468889429 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t1468889429 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t1468889429 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T1572432551_H
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
#ifndef PASSWORDDERIVEBYTES_T679102561_H
#define PASSWORDDERIVEBYTES_T679102561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PasswordDeriveBytes
struct  PasswordDeriveBytes_t679102561  : public DeriveBytes_t2888709407
{
public:
	// System.String System.Security.Cryptography.PasswordDeriveBytes::HashNameValue
	String_t* ___HashNameValue_0;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::SaltValue
	ByteU5BU5D_t3211447327* ___SaltValue_1;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::IterationsValue
	int32_t ___IterationsValue_2;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.PasswordDeriveBytes::hash
	HashAlgorithm_t1901406455 * ___hash_3;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::state
	int32_t ___state_4;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::password
	ByteU5BU5D_t3211447327* ___password_5;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::initial
	ByteU5BU5D_t3211447327* ___initial_6;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::output
	ByteU5BU5D_t3211447327* ___output_7;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::position
	int32_t ___position_8;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::hashnumber
	int32_t ___hashnumber_9;

public:
	inline static int32_t get_offset_of_HashNameValue_0() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___HashNameValue_0)); }
	inline String_t* get_HashNameValue_0() const { return ___HashNameValue_0; }
	inline String_t** get_address_of_HashNameValue_0() { return &___HashNameValue_0; }
	inline void set_HashNameValue_0(String_t* value)
	{
		___HashNameValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashNameValue_0), value);
	}

	inline static int32_t get_offset_of_SaltValue_1() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___SaltValue_1)); }
	inline ByteU5BU5D_t3211447327* get_SaltValue_1() const { return ___SaltValue_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_SaltValue_1() { return &___SaltValue_1; }
	inline void set_SaltValue_1(ByteU5BU5D_t3211447327* value)
	{
		___SaltValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___SaltValue_1), value);
	}

	inline static int32_t get_offset_of_IterationsValue_2() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___IterationsValue_2)); }
	inline int32_t get_IterationsValue_2() const { return ___IterationsValue_2; }
	inline int32_t* get_address_of_IterationsValue_2() { return &___IterationsValue_2; }
	inline void set_IterationsValue_2(int32_t value)
	{
		___IterationsValue_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___hash_3)); }
	inline HashAlgorithm_t1901406455 * get_hash_3() const { return ___hash_3; }
	inline HashAlgorithm_t1901406455 ** get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(HashAlgorithm_t1901406455 * value)
	{
		___hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___hash_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_password_5() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___password_5)); }
	inline ByteU5BU5D_t3211447327* get_password_5() const { return ___password_5; }
	inline ByteU5BU5D_t3211447327** get_address_of_password_5() { return &___password_5; }
	inline void set_password_5(ByteU5BU5D_t3211447327* value)
	{
		___password_5 = value;
		Il2CppCodeGenWriteBarrier((&___password_5), value);
	}

	inline static int32_t get_offset_of_initial_6() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___initial_6)); }
	inline ByteU5BU5D_t3211447327* get_initial_6() const { return ___initial_6; }
	inline ByteU5BU5D_t3211447327** get_address_of_initial_6() { return &___initial_6; }
	inline void set_initial_6(ByteU5BU5D_t3211447327* value)
	{
		___initial_6 = value;
		Il2CppCodeGenWriteBarrier((&___initial_6), value);
	}

	inline static int32_t get_offset_of_output_7() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___output_7)); }
	inline ByteU5BU5D_t3211447327* get_output_7() const { return ___output_7; }
	inline ByteU5BU5D_t3211447327** get_address_of_output_7() { return &___output_7; }
	inline void set_output_7(ByteU5BU5D_t3211447327* value)
	{
		___output_7 = value;
		Il2CppCodeGenWriteBarrier((&___output_7), value);
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___position_8)); }
	inline int32_t get_position_8() const { return ___position_8; }
	inline int32_t* get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(int32_t value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_hashnumber_9() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t679102561, ___hashnumber_9)); }
	inline int32_t get_hashnumber_9() const { return ___hashnumber_9; }
	inline int32_t* get_address_of_hashnumber_9() { return &___hashnumber_9; }
	inline void set_hashnumber_9(int32_t value)
	{
		___hashnumber_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDDERIVEBYTES_T679102561_H
#ifndef FIRSTMATCHCODEGROUP_T1257427547_H
#define FIRSTMATCHCODEGROUP_T1257427547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FirstMatchCodeGroup
struct  FirstMatchCodeGroup_t1257427547  : public CodeGroup_t1150497623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMATCHCODEGROUP_T1257427547_H
#ifndef RC2TRANSFORM_T64344617_H
#define RC2TRANSFORM_T64344617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t64344617  : public SymmetricTransform_t1629006107
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t175108951* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t64344617, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t64344617, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t64344617, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t64344617, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t64344617, ___K_16)); }
	inline UInt16U5BU5D_t175108951* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t175108951** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t175108951* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t64344617, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t64344617_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t3211447327* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t64344617_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t3211447327* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t3211447327** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t3211447327* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T64344617_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T3695246810_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T3695246810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t3695246810  : public AsymmetricKeyExchangeFormatter_t4042897779
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t765183856 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t214893434 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t3695246810, ___rsa_0)); }
	inline RSA_t765183856 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t765183856 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t765183856 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t3695246810, ___random_1)); }
	inline RandomNumberGenerator_t214893434 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t214893434 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t214893434 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T3695246810_H
#ifndef RIPEMD160_T2305654835_H
#define RIPEMD160_T2305654835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t2305654835  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T2305654835_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T3889336290_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T3889336290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t3889336290  : public AsymmetricSignatureDeformatter_t1896705197
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t765183856 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3889336290, ___rsa_0)); }
	inline RSA_t765183856 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t765183856 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t765183856 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3889336290, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T3889336290_H
#ifndef MD5_T1318060051_H
#define MD5_T1318060051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t1318060051  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T1318060051_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2504824041_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2504824041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t2504824041  : public SignatureDescription_t1853926373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2504824041_H
#ifndef DSASIGNATUREDESCRIPTION_T732697198_H
#define DSASIGNATUREDESCRIPTION_T732697198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t732697198  : public SignatureDescription_t1853926373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T732697198_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T3710577328_H
#define RSAPKCS1SIGNATUREFORMATTER_T3710577328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t3710577328  : public AsymmetricSignatureFormatter_t4243093456
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t765183856 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t1901406455 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t3710577328, ___rsa_0)); }
	inline RSA_t765183856 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t765183856 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t765183856 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t3710577328, ___hash_1)); }
	inline HashAlgorithm_t1901406455 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t1901406455 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t1901406455 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T3710577328_H
#ifndef RSAPARAMETERS_T2539289496_H
#define RSAPARAMETERS_T2539289496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t2539289496 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t3211447327* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t3211447327* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t3211447327* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t3211447327* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t3211447327* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t3211447327* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t3211447327* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t3211447327* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___P_0)); }
	inline ByteU5BU5D_t3211447327* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t3211447327** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t3211447327* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___Q_1)); }
	inline ByteU5BU5D_t3211447327* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t3211447327** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t3211447327* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___D_2)); }
	inline ByteU5BU5D_t3211447327* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t3211447327* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___DP_3)); }
	inline ByteU5BU5D_t3211447327* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t3211447327** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t3211447327* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___DQ_4)); }
	inline ByteU5BU5D_t3211447327* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t3211447327* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___InverseQ_5)); }
	inline ByteU5BU5D_t3211447327* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t3211447327** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t3211447327* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___Modulus_6)); }
	inline ByteU5BU5D_t3211447327* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t3211447327** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t3211447327* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t2539289496, ___Exponent_7)); }
	inline ByteU5BU5D_t3211447327* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t3211447327** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t3211447327* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2539289496_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2539289496_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T2539289496_H
#ifndef SHA512_T1183720439_H
#define SHA512_T1183720439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t1183720439  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T1183720439_H
#ifndef KEYEDHASHALGORITHM_T1433390772_H
#define KEYEDHASHALGORITHM_T1433390772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t1433390772  : public HashAlgorithm_t1901406455
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t3211447327* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t1433390772, ___KeyValue_4)); }
	inline ByteU5BU5D_t3211447327* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t3211447327* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T1433390772_H
#ifndef SHA384_T3627691719_H
#define SHA384_T3627691719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t3627691719  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T3627691719_H
#ifndef SHA256_T2217789386_H
#define SHA256_T2217789386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t2217789386  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T2217789386_H
#ifndef RSAOAEPKEYEXCHANGEFORMATTER_T2895710169_H
#define RSAOAEPKEYEXCHANGEFORMATTER_T2895710169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t2895710169  : public AsymmetricKeyExchangeFormatter_t4042897779
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::rsa
	RSA_t765183856 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::random
	RandomNumberGenerator_t214893434 * ___random_1;
	// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::param
	ByteU5BU5D_t3211447327* ___param_2;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2895710169, ___rsa_0)); }
	inline RSA_t765183856 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t765183856 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t765183856 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2895710169, ___random_1)); }
	inline RandomNumberGenerator_t214893434 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t214893434 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t214893434 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}

	inline static int32_t get_offset_of_param_2() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2895710169, ___param_2)); }
	inline ByteU5BU5D_t3211447327* get_param_2() const { return ___param_2; }
	inline ByteU5BU5D_t3211447327** get_address_of_param_2() { return &___param_2; }
	inline void set_param_2(ByteU5BU5D_t3211447327* value)
	{
		___param_2 = value;
		Il2CppCodeGenWriteBarrier((&___param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEFORMATTER_T2895710169_H
#ifndef SHA1_T1813491683_H
#define SHA1_T1813491683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1813491683  : public HashAlgorithm_t1901406455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1813491683_H
#ifndef RFC2898DERIVEBYTES_T4180542127_H
#define RFC2898DERIVEBYTES_T4180542127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rfc2898DeriveBytes
struct  Rfc2898DeriveBytes_t4180542127  : public DeriveBytes_t2888709407
{
public:
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_iteration
	int32_t ____iteration_1;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_t3211447327* ____salt_2;
	// System.Security.Cryptography.HMACSHA1 System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMACSHA1_t1617442946 * ____hmac_3;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_t3211447327* ____buffer_4;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_pos
	int32_t ____pos_5;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_f
	int32_t ____f_6;

public:
	inline static int32_t get_offset_of__iteration_1() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t4180542127, ____iteration_1)); }
	inline int32_t get__iteration_1() const { return ____iteration_1; }
	inline int32_t* get_address_of__iteration_1() { return &____iteration_1; }
	inline void set__iteration_1(int32_t value)
	{
		____iteration_1 = value;
	}

	inline static int32_t get_offset_of__salt_2() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t4180542127, ____salt_2)); }
	inline ByteU5BU5D_t3211447327* get__salt_2() const { return ____salt_2; }
	inline ByteU5BU5D_t3211447327** get_address_of__salt_2() { return &____salt_2; }
	inline void set__salt_2(ByteU5BU5D_t3211447327* value)
	{
		____salt_2 = value;
		Il2CppCodeGenWriteBarrier((&____salt_2), value);
	}

	inline static int32_t get_offset_of__hmac_3() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t4180542127, ____hmac_3)); }
	inline HMACSHA1_t1617442946 * get__hmac_3() const { return ____hmac_3; }
	inline HMACSHA1_t1617442946 ** get_address_of__hmac_3() { return &____hmac_3; }
	inline void set__hmac_3(HMACSHA1_t1617442946 * value)
	{
		____hmac_3 = value;
		Il2CppCodeGenWriteBarrier((&____hmac_3), value);
	}

	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t4180542127, ____buffer_4)); }
	inline ByteU5BU5D_t3211447327* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t3211447327** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t3211447327* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t4180542127, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t4180542127, ____f_6)); }
	inline int32_t get__f_6() const { return ____f_6; }
	inline int32_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(int32_t value)
	{
		____f_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RFC2898DERIVEBYTES_T4180542127_H
#ifndef RIJNDAELTRANSFORM_T3774464129_H
#define RIJNDAELTRANSFORM_T3774464129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t3774464129  : public SymmetricTransform_t1629006107
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t3268503027* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129, ___expandedKey_12)); }
	inline UInt32U5BU5D_t3268503027* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t3268503027** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t3268503027* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t3774464129_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t3268503027* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t3211447327* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t3211447327* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t3268503027* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t3268503027* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t3268503027* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t3268503027* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t3268503027* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t3268503027* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t3268503027* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t3268503027* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t3268503027* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t3268503027** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t3268503027* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t3211447327* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t3211447327** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t3211447327* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t3211447327* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t3211447327** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t3211447327* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t3268503027* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t3268503027** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t3268503027* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t3268503027* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t3268503027** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t3268503027* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t3268503027* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t3268503027** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t3268503027* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t3268503027* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t3268503027** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t3268503027* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t3268503027* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t3268503027** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t3268503027* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t3268503027* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t3268503027** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t3268503027* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t3268503027* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t3268503027** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t3268503027* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t3774464129_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t3268503027* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t3268503027** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t3268503027* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T3774464129_H
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
#ifndef UIPERMISSIONWINDOW_T4231648239_H
#define UIPERMISSIONWINDOW_T4231648239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t4231648239 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t4231648239, ___value___1)); }
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
#endif // UIPERMISSIONWINDOW_T4231648239_H
#ifndef UIPERMISSIONCLIPBOARD_T1238064727_H
#define UIPERMISSIONCLIPBOARD_T1238064727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t1238064727 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t1238064727, ___value___1)); }
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
#endif // UIPERMISSIONCLIPBOARD_T1238064727_H
#ifndef RSACRYPTOSERVICEPROVIDER_T1880357372_H
#define RSACRYPTOSERVICEPROVIDER_T1880357372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t1880357372  : public RSA_t765183856
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t480922200 * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t2465811819 * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372, ___store_3)); }
	inline KeyPairPersistence_t480922200 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t480922200 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t480922200 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372, ___rsa_8)); }
	inline RSAManaged_t2465811819 * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t2465811819 ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t2465811819 * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_8), value);
	}
};

struct RSACryptoServiceProvider_t1880357372_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.RSACryptoServiceProvider::<>f__switch$map29
	Dictionary_2_t3128486386 * ___U3CU3Ef__switchU24map29_10;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map29_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1880357372_StaticFields, ___U3CU3Ef__switchU24map29_10)); }
	inline Dictionary_2_t3128486386 * get_U3CU3Ef__switchU24map29_10() const { return ___U3CU3Ef__switchU24map29_10; }
	inline Dictionary_2_t3128486386 ** get_address_of_U3CU3Ef__switchU24map29_10() { return &___U3CU3Ef__switchU24map29_10; }
	inline void set_U3CU3Ef__switchU24map29_10(Dictionary_2_t3128486386 * value)
	{
		___U3CU3Ef__switchU24map29_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map29_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T1880357372_H
#ifndef REFLECTIONPERMISSIONFLAG_T865653965_H
#define REFLECTIONPERMISSIONFLAG_T865653965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionFlag
struct  ReflectionPermissionFlag_t865653965 
{
public:
	// System.Int32 System.Security.Permissions.ReflectionPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReflectionPermissionFlag_t865653965, ___value___1)); }
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
#endif // REFLECTIONPERMISSIONFLAG_T865653965_H
#ifndef RIPEMD160MANAGED_T938145236_H
#define RIPEMD160MANAGED_T938145236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t938145236  : public RIPEMD160_t2305654835
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t3211447327* ____ProcessingBuffer_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t3268503027* ____X_6;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t3268503027* ____HashValue_7;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_8;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t938145236, ____ProcessingBuffer_5)); }
	inline ByteU5BU5D_t3211447327* get__ProcessingBuffer_5() const { return ____ProcessingBuffer_5; }
	inline ByteU5BU5D_t3211447327** get_address_of__ProcessingBuffer_5() { return &____ProcessingBuffer_5; }
	inline void set__ProcessingBuffer_5(ByteU5BU5D_t3211447327* value)
	{
		____ProcessingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_5), value);
	}

	inline static int32_t get_offset_of__X_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t938145236, ____X_6)); }
	inline UInt32U5BU5D_t3268503027* get__X_6() const { return ____X_6; }
	inline UInt32U5BU5D_t3268503027** get_address_of__X_6() { return &____X_6; }
	inline void set__X_6(UInt32U5BU5D_t3268503027* value)
	{
		____X_6 = value;
		Il2CppCodeGenWriteBarrier((&____X_6), value);
	}

	inline static int32_t get_offset_of__HashValue_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t938145236, ____HashValue_7)); }
	inline UInt32U5BU5D_t3268503027* get__HashValue_7() const { return ____HashValue_7; }
	inline UInt32U5BU5D_t3268503027** get_address_of__HashValue_7() { return &____HashValue_7; }
	inline void set__HashValue_7(UInt32U5BU5D_t3268503027* value)
	{
		____HashValue_7 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_7), value);
	}

	inline static int32_t get_offset_of__Length_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t938145236, ____Length_8)); }
	inline uint64_t get__Length_8() const { return ____Length_8; }
	inline uint64_t* get_address_of__Length_8() { return &____Length_8; }
	inline void set__Length_8(uint64_t value)
	{
		____Length_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t938145236, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T938145236_H
#ifndef KEY_T903142364_H
#define KEY_T903142364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies/Key
struct  Key_t903142364 
{
public:
	// System.Int32 System.Security.Policy.DefaultPolicies/Key::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Key_t903142364, ___value___1)); }
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
#endif // KEY_T903142364_H
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
#ifndef MD5CRYPTOSERVICEPROVIDER_T4265055356_H
#define MD5CRYPTOSERVICEPROVIDER_T4265055356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t4265055356  : public MD5_t1318060051
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t3268503027* ____H_6;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t3268503027* ___buff_7;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_8;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t3211447327* ____ProcessingBuffer_9;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4265055356, ____H_6)); }
	inline UInt32U5BU5D_t3268503027* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t3268503027** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t3268503027* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_buff_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4265055356, ___buff_7)); }
	inline UInt32U5BU5D_t3268503027* get_buff_7() const { return ___buff_7; }
	inline UInt32U5BU5D_t3268503027** get_address_of_buff_7() { return &___buff_7; }
	inline void set_buff_7(UInt32U5BU5D_t3268503027* value)
	{
		___buff_7 = value;
		Il2CppCodeGenWriteBarrier((&___buff_7), value);
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4265055356, ___count_8)); }
	inline uint64_t get_count_8() const { return ___count_8; }
	inline uint64_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(uint64_t value)
	{
		___count_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4265055356, ____ProcessingBuffer_9)); }
	inline ByteU5BU5D_t3211447327* get__ProcessingBuffer_9() const { return ____ProcessingBuffer_9; }
	inline ByteU5BU5D_t3211447327** get_address_of__ProcessingBuffer_9() { return &____ProcessingBuffer_9; }
	inline void set__ProcessingBuffer_9(ByteU5BU5D_t3211447327* value)
	{
		____ProcessingBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_9), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_10() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4265055356, ____ProcessingBufferCount_10)); }
	inline int32_t get__ProcessingBufferCount_10() const { return ____ProcessingBufferCount_10; }
	inline int32_t* get_address_of__ProcessingBufferCount_10() { return &____ProcessingBufferCount_10; }
	inline void set__ProcessingBufferCount_10(int32_t value)
	{
		____ProcessingBufferCount_10 = value;
	}
};

struct MD5CryptoServiceProvider_t4265055356_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t3268503027* ___K_11;

public:
	inline static int32_t get_offset_of_K_11() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t4265055356_StaticFields, ___K_11)); }
	inline UInt32U5BU5D_t3268503027* get_K_11() const { return ___K_11; }
	inline UInt32U5BU5D_t3268503027** get_address_of_K_11() { return &___K_11; }
	inline void set_K_11(UInt32U5BU5D_t3268503027* value)
	{
		___K_11 = value;
		Il2CppCodeGenWriteBarrier((&___K_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T4265055356_H
#ifndef MACTRIPLEDES_T3452597048_H
#define MACTRIPLEDES_T3452597048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t3452597048  : public KeyedHashAlgorithm_t1433390772
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t2792648320 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t829004313 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t3452597048, ___tdes_5)); }
	inline TripleDES_t2792648320 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t2792648320 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t2792648320 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t3452597048, ___mac_6)); }
	inline MACAlgorithm_t829004313 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t829004313 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t829004313 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t3452597048, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T3452597048_H
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
#ifndef KEYNUMBER_T3291983514_H
#define KEYNUMBER_T3291983514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyNumber
struct  KeyNumber_t3291983514 
{
public:
	// System.Int32 System.Security.Cryptography.KeyNumber::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyNumber_t3291983514, ___value___1)); }
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
#endif // KEYNUMBER_T3291983514_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T3850892000_H
#define RNGCRYPTOSERVICEPROVIDER_T3850892000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t3850892000  : public RandomNumberGenerator_t214893434
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	IntPtr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3850892000, ____handle_1)); }
	inline IntPtr_t get__handle_1() const { return ____handle_1; }
	inline IntPtr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(IntPtr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t3850892000_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3850892000_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T3850892000_H
#ifndef SECURITYPERMISSIONFLAG_T1532257867_H
#define SECURITYPERMISSIONFLAG_T1532257867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t1532257867 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t1532257867, ___value___1)); }
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
#endif // SECURITYPERMISSIONFLAG_T1532257867_H
#ifndef FILEDIALOGPERMISSIONACCESS_T3862160470_H
#define FILEDIALOGPERMISSIONACCESS_T3862160470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermissionAccess
struct  FileDialogPermissionAccess_t3862160470 
{
public:
	// System.Int32 System.Security.Permissions.FileDialogPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileDialogPermissionAccess_t3862160470, ___value___1)); }
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
#endif // FILEDIALOGPERMISSIONACCESS_T3862160470_H
#ifndef HOSTPROTECTIONRESOURCE_T3285881121_H
#define HOSTPROTECTIONRESOURCE_T3285881121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionResource
struct  HostProtectionResource_t3285881121 
{
public:
	// System.Int32 System.Security.Permissions.HostProtectionResource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostProtectionResource_t3285881121, ___value___1)); }
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
#endif // HOSTPROTECTIONRESOURCE_T3285881121_H
#ifndef SHA384MANAGED_T1256470452_H
#define SHA384MANAGED_T1256470452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t1256470452  : public SHA384_t3627691719
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t3211447327* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t1611299958* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___xBuf_4)); }
	inline ByteU5BU5D_t3211447327* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t3211447327* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___W_16)); }
	inline UInt64U5BU5D_t1611299958* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1611299958** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1611299958* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t1256470452, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T1256470452_H
#ifndef SHA512MANAGED_T3330920523_H
#define SHA512MANAGED_T3330920523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t3330920523  : public SHA512_t1183720439
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t3211447327* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t1611299958* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___xBuf_4)); }
	inline ByteU5BU5D_t3211447327* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t3211447327** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t3211447327* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___W_16)); }
	inline UInt64U5BU5D_t1611299958* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1611299958** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1611299958* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t3330920523, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T3330920523_H
#ifndef ENVIRONMENTPERMISSIONACCESS_T81580952_H
#define ENVIRONMENTPERMISSIONACCESS_T81580952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAccess
struct  EnvironmentPermissionAccess_t81580952 
{
public:
	// System.Int32 System.Security.Permissions.EnvironmentPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAccess_t81580952, ___value___1)); }
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
#endif // ENVIRONMENTPERMISSIONACCESS_T81580952_H
#ifndef SECURITYZONE_T703641507_H
#define SECURITYZONE_T703641507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t703641507 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityZone_t703641507, ___value___1)); }
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
#endif // SECURITYZONE_T703641507_H
#ifndef SECURITYACTION_T821223243_H
#define SECURITYACTION_T821223243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t821223243 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t821223243, ___value___1)); }
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
#endif // SECURITYACTION_T821223243_H
#ifndef FILEIOPERMISSIONACCESS_T872519967_H
#define FILEIOPERMISSIONACCESS_T872519967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t872519967 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t872519967, ___value___1)); }
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
#endif // FILEIOPERMISSIONACCESS_T872519967_H
#ifndef SHA256MANAGED_T129517214_H
#define SHA256MANAGED_T129517214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t129517214  : public SHA256_t2217789386
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t3268503027* ____H_6;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t3211447327* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t3268503027* ___buff_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t129517214, ____H_6)); }
	inline UInt32U5BU5D_t3268503027* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t3268503027** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t3268503027* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t129517214, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t129517214, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_t3211447327* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_t3211447327** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_t3211447327* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_8), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(SHA256Managed_t129517214, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}

	inline static int32_t get_offset_of_buff_10() { return static_cast<int32_t>(offsetof(SHA256Managed_t129517214, ___buff_10)); }
	inline UInt32U5BU5D_t3268503027* get_buff_10() const { return ___buff_10; }
	inline UInt32U5BU5D_t3268503027** get_address_of_buff_10() { return &___buff_10; }
	inline void set_buff_10(UInt32U5BU5D_t3268503027* value)
	{
		___buff_10 = value;
		Il2CppCodeGenWriteBarrier((&___buff_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T129517214_H
#ifndef ISOLATEDSTORAGECONTAINMENT_T3008271873_H
#define ISOLATEDSTORAGECONTAINMENT_T3008271873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageContainment
struct  IsolatedStorageContainment_t3008271873 
{
public:
	// System.Int32 System.Security.Permissions.IsolatedStorageContainment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IsolatedStorageContainment_t3008271873, ___value___1)); }
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
#endif // ISOLATEDSTORAGECONTAINMENT_T3008271873_H
#ifndef KEYCONTAINERPERMISSIONFLAGS_T1948635102_H
#define KEYCONTAINERPERMISSIONFLAGS_T1948635102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionFlags
struct  KeyContainerPermissionFlags_t1948635102 
{
public:
	// System.Int32 System.Security.Permissions.KeyContainerPermissionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionFlags_t1948635102, ___value___1)); }
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
#endif // KEYCONTAINERPERMISSIONFLAGS_T1948635102_H
#ifndef SHA1MANAGED_T898601296_H
#define SHA1MANAGED_T898601296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t898601296  : public SHA1_t1813491683
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t952012975 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t898601296, ___sha_4)); }
	inline SHA1Internal_t952012975 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t952012975 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t952012975 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T898601296_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T3790933178_H
#define SHA1CRYPTOSERVICEPROVIDER_T3790933178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t3790933178  : public SHA1_t1813491683
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t952012975 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t3790933178, ___sha_4)); }
	inline SHA1Internal_t952012975 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t952012975 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t952012975 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T3790933178_H
#ifndef REGISTRYPERMISSIONACCESS_T2975466446_H
#define REGISTRYPERMISSIONACCESS_T2975466446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAccess
struct  RegistryPermissionAccess_t2975466446 
{
public:
	// System.Int32 System.Security.Permissions.RegistryPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryPermissionAccess_t2975466446, ___value___1)); }
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
#endif // REGISTRYPERMISSIONACCESS_T2975466446_H
#ifndef PERMISSIONSTATE_T2909873875_H
#define PERMISSIONSTATE_T2909873875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t2909873875 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t2909873875, ___value___1)); }
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
#endif // PERMISSIONSTATE_T2909873875_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRY_T581893878_H
#define KEYCONTAINERPERMISSIONACCESSENTRY_T581893878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct  KeyContainerPermissionAccessEntry_t581893878  : public RuntimeObject
{
public:
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermissionAccessEntry::_flags
	int32_t ____flags_0;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_containerName
	String_t* ____containerName_1;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_spec
	int32_t ____spec_2;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_store
	String_t* ____store_3;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_providerName
	String_t* ____providerName_4;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_type
	int32_t ____type_5;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t581893878, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of__containerName_1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t581893878, ____containerName_1)); }
	inline String_t* get__containerName_1() const { return ____containerName_1; }
	inline String_t** get_address_of__containerName_1() { return &____containerName_1; }
	inline void set__containerName_1(String_t* value)
	{
		____containerName_1 = value;
		Il2CppCodeGenWriteBarrier((&____containerName_1), value);
	}

	inline static int32_t get_offset_of__spec_2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t581893878, ____spec_2)); }
	inline int32_t get__spec_2() const { return ____spec_2; }
	inline int32_t* get_address_of__spec_2() { return &____spec_2; }
	inline void set__spec_2(int32_t value)
	{
		____spec_2 = value;
	}

	inline static int32_t get_offset_of__store_3() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t581893878, ____store_3)); }
	inline String_t* get__store_3() const { return ____store_3; }
	inline String_t** get_address_of__store_3() { return &____store_3; }
	inline void set__store_3(String_t* value)
	{
		____store_3 = value;
		Il2CppCodeGenWriteBarrier((&____store_3), value);
	}

	inline static int32_t get_offset_of__providerName_4() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t581893878, ____providerName_4)); }
	inline String_t* get__providerName_4() const { return ____providerName_4; }
	inline String_t** get_address_of__providerName_4() { return &____providerName_4; }
	inline void set__providerName_4(String_t* value)
	{
		____providerName_4 = value;
		Il2CppCodeGenWriteBarrier((&____providerName_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t581893878, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRY_T581893878_H
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
#ifndef SECURITYATTRIBUTE_T2925933023_H
#define SECURITYATTRIBUTE_T2925933023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t2925933023  : public Attribute_t4285271925
{
public:
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2925933023, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Unrestricted_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2925933023, ___m_Unrestricted_1)); }
	inline bool get_m_Unrestricted_1() const { return ___m_Unrestricted_1; }
	inline bool* get_address_of_m_Unrestricted_1() { return &___m_Unrestricted_1; }
	inline void set_m_Unrestricted_1(bool value)
	{
		___m_Unrestricted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T2925933023_H
#ifndef ENVIRONMENTPERMISSION_T152251322_H
#define ENVIRONMENTPERMISSION_T152251322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t152251322  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t1155359356 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t1155359356 * ___writeList_2;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t152251322, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_readList_1() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t152251322, ___readList_1)); }
	inline ArrayList_t1155359356 * get_readList_1() const { return ___readList_1; }
	inline ArrayList_t1155359356 ** get_address_of_readList_1() { return &___readList_1; }
	inline void set_readList_1(ArrayList_t1155359356 * value)
	{
		___readList_1 = value;
		Il2CppCodeGenWriteBarrier((&___readList_1), value);
	}

	inline static int32_t get_offset_of_writeList_2() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t152251322, ___writeList_2)); }
	inline ArrayList_t1155359356 * get_writeList_2() const { return ___writeList_2; }
	inline ArrayList_t1155359356 ** get_address_of_writeList_2() { return &___writeList_2; }
	inline void set_writeList_2(ArrayList_t1155359356 * value)
	{
		___writeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTPERMISSION_T152251322_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T3026079502_H
#define STRONGNAMEIDENTITYPERMISSION_T3026079502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t3026079502  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t1155359356 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t3026079502, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t3026079502, ____list_2)); }
	inline ArrayList_t1155359356 * get__list_2() const { return ____list_2; }
	inline ArrayList_t1155359356 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t1155359356 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}
};

struct StrongNameIdentityPermission_t3026079502_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t1902747478 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t3026079502_StaticFields, ___defaultVersion_0)); }
	inline Version_t1902747478 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t1902747478 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t1902747478 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T3026079502_H
#ifndef FILEDIALOGPERMISSION_T4245301446_H
#define FILEDIALOGPERMISSION_T4245301446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermission
struct  FileDialogPermission_t4245301446  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.FileDialogPermissionAccess System.Security.Permissions.FileDialogPermission::_access
	int32_t ____access_0;

public:
	inline static int32_t get_offset_of__access_0() { return static_cast<int32_t>(offsetof(FileDialogPermission_t4245301446, ____access_0)); }
	inline int32_t get__access_0() const { return ____access_0; }
	inline int32_t* get_address_of__access_0() { return &____access_0; }
	inline void set__access_0(int32_t value)
	{
		____access_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEDIALOGPERMISSION_T4245301446_H
#ifndef ZONEIDENTITYPERMISSION_T3585114252_H
#define ZONEIDENTITYPERMISSION_T3585114252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t3585114252  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t3585114252, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSION_T3585114252_H
#ifndef REGISTRYPERMISSION_T4218196502_H
#define REGISTRYPERMISSION_T4218196502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t4218196502  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t1155359356 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t1155359356 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t1155359356 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t4218196502, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t4218196502, ___createList_1)); }
	inline ArrayList_t1155359356 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t1155359356 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t1155359356 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier((&___createList_1), value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t4218196502, ___readList_2)); }
	inline ArrayList_t1155359356 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t1155359356 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t1155359356 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier((&___readList_2), value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t4218196502, ___writeList_3)); }
	inline ArrayList_t1155359356 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t1155359356 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t1155359356 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSION_T4218196502_H
#ifndef FILEIOPERMISSION_T1826548496_H
#define FILEIOPERMISSION_T1826548496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermission
struct  FileIOPermission_t1826548496  : public CodeAccessPermission_t2136755615
{
public:
	// System.Boolean System.Security.Permissions.FileIOPermission::m_Unrestricted
	bool ___m_Unrestricted_2;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllFilesAccess
	int32_t ___m_AllFilesAccess_3;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllLocalFilesAccess
	int32_t ___m_AllLocalFilesAccess_4;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::readList
	ArrayList_t1155359356 * ___readList_5;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::writeList
	ArrayList_t1155359356 * ___writeList_6;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::appendList
	ArrayList_t1155359356 * ___appendList_7;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::pathList
	ArrayList_t1155359356 * ___pathList_8;

public:
	inline static int32_t get_offset_of_m_Unrestricted_2() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496, ___m_Unrestricted_2)); }
	inline bool get_m_Unrestricted_2() const { return ___m_Unrestricted_2; }
	inline bool* get_address_of_m_Unrestricted_2() { return &___m_Unrestricted_2; }
	inline void set_m_Unrestricted_2(bool value)
	{
		___m_Unrestricted_2 = value;
	}

	inline static int32_t get_offset_of_m_AllFilesAccess_3() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496, ___m_AllFilesAccess_3)); }
	inline int32_t get_m_AllFilesAccess_3() const { return ___m_AllFilesAccess_3; }
	inline int32_t* get_address_of_m_AllFilesAccess_3() { return &___m_AllFilesAccess_3; }
	inline void set_m_AllFilesAccess_3(int32_t value)
	{
		___m_AllFilesAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_AllLocalFilesAccess_4() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496, ___m_AllLocalFilesAccess_4)); }
	inline int32_t get_m_AllLocalFilesAccess_4() const { return ___m_AllLocalFilesAccess_4; }
	inline int32_t* get_address_of_m_AllLocalFilesAccess_4() { return &___m_AllLocalFilesAccess_4; }
	inline void set_m_AllLocalFilesAccess_4(int32_t value)
	{
		___m_AllLocalFilesAccess_4 = value;
	}

	inline static int32_t get_offset_of_readList_5() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496, ___readList_5)); }
	inline ArrayList_t1155359356 * get_readList_5() const { return ___readList_5; }
	inline ArrayList_t1155359356 ** get_address_of_readList_5() { return &___readList_5; }
	inline void set_readList_5(ArrayList_t1155359356 * value)
	{
		___readList_5 = value;
		Il2CppCodeGenWriteBarrier((&___readList_5), value);
	}

	inline static int32_t get_offset_of_writeList_6() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496, ___writeList_6)); }
	inline ArrayList_t1155359356 * get_writeList_6() const { return ___writeList_6; }
	inline ArrayList_t1155359356 ** get_address_of_writeList_6() { return &___writeList_6; }
	inline void set_writeList_6(ArrayList_t1155359356 * value)
	{
		___writeList_6 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_6), value);
	}

	inline static int32_t get_offset_of_appendList_7() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496, ___appendList_7)); }
	inline ArrayList_t1155359356 * get_appendList_7() const { return ___appendList_7; }
	inline ArrayList_t1155359356 ** get_address_of_appendList_7() { return &___appendList_7; }
	inline void set_appendList_7(ArrayList_t1155359356 * value)
	{
		___appendList_7 = value;
		Il2CppCodeGenWriteBarrier((&___appendList_7), value);
	}

	inline static int32_t get_offset_of_pathList_8() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496, ___pathList_8)); }
	inline ArrayList_t1155359356 * get_pathList_8() const { return ___pathList_8; }
	inline ArrayList_t1155359356 ** get_address_of_pathList_8() { return &___pathList_8; }
	inline void set_pathList_8(ArrayList_t1155359356 * value)
	{
		___pathList_8 = value;
		Il2CppCodeGenWriteBarrier((&___pathList_8), value);
	}
};

struct FileIOPermission_t1826548496_StaticFields
{
public:
	// System.Char[] System.Security.Permissions.FileIOPermission::BadPathNameCharacters
	CharU5BU5D_t3680385359* ___BadPathNameCharacters_0;
	// System.Char[] System.Security.Permissions.FileIOPermission::BadFileNameCharacters
	CharU5BU5D_t3680385359* ___BadFileNameCharacters_1;

public:
	inline static int32_t get_offset_of_BadPathNameCharacters_0() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496_StaticFields, ___BadPathNameCharacters_0)); }
	inline CharU5BU5D_t3680385359* get_BadPathNameCharacters_0() const { return ___BadPathNameCharacters_0; }
	inline CharU5BU5D_t3680385359** get_address_of_BadPathNameCharacters_0() { return &___BadPathNameCharacters_0; }
	inline void set_BadPathNameCharacters_0(CharU5BU5D_t3680385359* value)
	{
		___BadPathNameCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___BadPathNameCharacters_0), value);
	}

	inline static int32_t get_offset_of_BadFileNameCharacters_1() { return static_cast<int32_t>(offsetof(FileIOPermission_t1826548496_StaticFields, ___BadFileNameCharacters_1)); }
	inline CharU5BU5D_t3680385359* get_BadFileNameCharacters_1() const { return ___BadFileNameCharacters_1; }
	inline CharU5BU5D_t3680385359** get_address_of_BadFileNameCharacters_1() { return &___BadFileNameCharacters_1; }
	inline void set_BadFileNameCharacters_1(CharU5BU5D_t3680385359* value)
	{
		___BadFileNameCharacters_1 = value;
		Il2CppCodeGenWriteBarrier((&___BadFileNameCharacters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSION_T1826548496_H
#ifndef FILECODEGROUP_T1044940265_H
#define FILECODEGROUP_T1044940265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t1044940265  : public CodeGroup_t1150497623
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_6;

public:
	inline static int32_t get_offset_of_m_access_6() { return static_cast<int32_t>(offsetof(FileCodeGroup_t1044940265, ___m_access_6)); }
	inline int32_t get_m_access_6() const { return ___m_access_6; }
	inline int32_t* get_address_of_m_access_6() { return &___m_access_6; }
	inline void set_m_access_6(int32_t value)
	{
		___m_access_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECODEGROUP_T1044940265_H
#ifndef UIPERMISSION_T1105996444_H
#define UIPERMISSION_T1105996444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t1105996444  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;

public:
	inline static int32_t get_offset_of__window_0() { return static_cast<int32_t>(offsetof(UIPermission_t1105996444, ____window_0)); }
	inline int32_t get__window_0() const { return ____window_0; }
	inline int32_t* get_address_of__window_0() { return &____window_0; }
	inline void set__window_0(int32_t value)
	{
		____window_0 = value;
	}

	inline static int32_t get_offset_of__clipboard_1() { return static_cast<int32_t>(offsetof(UIPermission_t1105996444, ____clipboard_1)); }
	inline int32_t get__clipboard_1() const { return ____clipboard_1; }
	inline int32_t* get_address_of__clipboard_1() { return &____clipboard_1; }
	inline void set__clipboard_1(int32_t value)
	{
		____clipboard_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSION_T1105996444_H
#ifndef REFLECTIONPERMISSION_T2516955668_H
#define REFLECTIONPERMISSION_T2516955668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermission
struct  ReflectionPermission_t2516955668  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(ReflectionPermission_t2516955668, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSION_T2516955668_H
#ifndef ISOLATEDSTORAGEPERMISSION_T170543676_H
#define ISOLATEDSTORAGEPERMISSION_T170543676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStoragePermission
struct  IsolatedStoragePermission_t170543676  : public CodeAccessPermission_t2136755615
{
public:
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_userQuota
	int64_t ___m_userQuota_0;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_machineQuota
	int64_t ___m_machineQuota_1;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_expirationDays
	int64_t ___m_expirationDays_2;
	// System.Boolean System.Security.Permissions.IsolatedStoragePermission::m_permanentData
	bool ___m_permanentData_3;
	// System.Security.Permissions.IsolatedStorageContainment System.Security.Permissions.IsolatedStoragePermission::m_allowed
	int32_t ___m_allowed_4;

public:
	inline static int32_t get_offset_of_m_userQuota_0() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t170543676, ___m_userQuota_0)); }
	inline int64_t get_m_userQuota_0() const { return ___m_userQuota_0; }
	inline int64_t* get_address_of_m_userQuota_0() { return &___m_userQuota_0; }
	inline void set_m_userQuota_0(int64_t value)
	{
		___m_userQuota_0 = value;
	}

	inline static int32_t get_offset_of_m_machineQuota_1() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t170543676, ___m_machineQuota_1)); }
	inline int64_t get_m_machineQuota_1() const { return ___m_machineQuota_1; }
	inline int64_t* get_address_of_m_machineQuota_1() { return &___m_machineQuota_1; }
	inline void set_m_machineQuota_1(int64_t value)
	{
		___m_machineQuota_1 = value;
	}

	inline static int32_t get_offset_of_m_expirationDays_2() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t170543676, ___m_expirationDays_2)); }
	inline int64_t get_m_expirationDays_2() const { return ___m_expirationDays_2; }
	inline int64_t* get_address_of_m_expirationDays_2() { return &___m_expirationDays_2; }
	inline void set_m_expirationDays_2(int64_t value)
	{
		___m_expirationDays_2 = value;
	}

	inline static int32_t get_offset_of_m_permanentData_3() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t170543676, ___m_permanentData_3)); }
	inline bool get_m_permanentData_3() const { return ___m_permanentData_3; }
	inline bool* get_address_of_m_permanentData_3() { return &___m_permanentData_3; }
	inline void set_m_permanentData_3(bool value)
	{
		___m_permanentData_3 = value;
	}

	inline static int32_t get_offset_of_m_allowed_4() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t170543676, ___m_allowed_4)); }
	inline int32_t get_m_allowed_4() const { return ___m_allowed_4; }
	inline int32_t* get_address_of_m_allowed_4() { return &___m_allowed_4; }
	inline void set_m_allowed_4(int32_t value)
	{
		___m_allowed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEPERMISSION_T170543676_H
#ifndef KEYCONTAINERPERMISSION_T1214898821_H
#define KEYCONTAINERPERMISSION_T1214898821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t1214898821  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t1562199765 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of__accessEntries_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1214898821, ____accessEntries_0)); }
	inline KeyContainerPermissionAccessEntryCollection_t1562199765 * get__accessEntries_0() const { return ____accessEntries_0; }
	inline KeyContainerPermissionAccessEntryCollection_t1562199765 ** get_address_of__accessEntries_0() { return &____accessEntries_0; }
	inline void set__accessEntries_0(KeyContainerPermissionAccessEntryCollection_t1562199765 * value)
	{
		____accessEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&____accessEntries_0), value);
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1214898821, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSION_T1214898821_H
#ifndef SECURITYPERMISSION_T2949140523_H
#define SECURITYPERMISSION_T2949140523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2949140523  : public CodeAccessPermission_t2136755615
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t2949140523, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2949140523_H
#ifndef RIJNDAEL_T447473561_H
#define RIJNDAEL_T447473561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t447473561  : public SymmetricAlgorithm_t2354607141
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T447473561_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T907939268_H
#define CODEACCESSSECURITYATTRIBUTE_T907939268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t907939268  : public SecurityAttribute_t2925933023
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T907939268_H
#ifndef TRIPLEDES_T2792648320_H
#define TRIPLEDES_T2792648320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t2792648320  : public SymmetricAlgorithm_t2354607141
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T2792648320_H
#ifndef ISOLATEDSTORAGEFILEPERMISSION_T505319995_H
#define ISOLATEDSTORAGEFILEPERMISSION_T505319995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageFilePermission
struct  IsolatedStorageFilePermission_t505319995  : public IsolatedStoragePermission_t170543676
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEFILEPERMISSION_T505319995_H
#ifndef RC2_T165294765_H
#define RC2_T165294765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t165294765  : public SymmetricAlgorithm_t2354607141
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t165294765, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T165294765_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T4261859952_H
#define RC2CRYPTOSERVICEPROVIDER_T4261859952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t4261859952  : public RC2_t165294765
{
public:
	// System.Boolean System.Security.Cryptography.RC2CryptoServiceProvider::_useSalt
	bool ____useSalt_11;

public:
	inline static int32_t get_offset_of__useSalt_11() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t4261859952, ____useSalt_11)); }
	inline bool get__useSalt_11() const { return ____useSalt_11; }
	inline bool* get_address_of__useSalt_11() { return &____useSalt_11; }
	inline void set__useSalt_11(bool value)
	{
		____useSalt_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T4261859952_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T1705082136_H
#define SECURITYPERMISSIONATTRIBUTE_T1705082136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t1705082136  : public CodeAccessSecurityAttribute_t907939268
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_2;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t1705082136, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T1705082136_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T1338379196_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T1338379196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t1338379196  : public TripleDES_t2792648320
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T1338379196_H
#ifndef RIJNDAELMANAGED_T404226640_H
#define RIJNDAELMANAGED_T404226640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t404226640  : public Rijndael_t447473561
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T404226640_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (HashAlgorithm_t1901406455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable700[4] = 
{
	HashAlgorithm_t1901406455::get_offset_of_HashValue_0(),
	HashAlgorithm_t1901406455::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t1901406455::get_offset_of_State_2(),
	HashAlgorithm_t1901406455::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (KeyNumber_t3291983514)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable703[3] = 
{
	KeyNumber_t3291983514::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (KeySizes_t1134556340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable704[3] = 
{
	KeySizes_t1134556340::get_offset_of__maxSize_0(),
	KeySizes_t1134556340::get_offset_of__minSize_1(),
	KeySizes_t1134556340::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (KeyedHashAlgorithm_t1433390772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable705[1] = 
{
	KeyedHashAlgorithm_t1433390772::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (MACTripleDES_t3452597048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable706[3] = 
{
	MACTripleDES_t3452597048::get_offset_of_tdes_5(),
	MACTripleDES_t3452597048::get_offset_of_mac_6(),
	MACTripleDES_t3452597048::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (MD5_t1318060051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (MD5CryptoServiceProvider_t4265055356), -1, sizeof(MD5CryptoServiceProvider_t4265055356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable708[8] = 
{
	0,
	0,
	MD5CryptoServiceProvider_t4265055356::get_offset_of__H_6(),
	MD5CryptoServiceProvider_t4265055356::get_offset_of_buff_7(),
	MD5CryptoServiceProvider_t4265055356::get_offset_of_count_8(),
	MD5CryptoServiceProvider_t4265055356::get_offset_of__ProcessingBuffer_9(),
	MD5CryptoServiceProvider_t4265055356::get_offset_of__ProcessingBufferCount_10(),
	MD5CryptoServiceProvider_t4265055356_StaticFields::get_offset_of_K_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (MaskGenerationMethod_t1787409721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (PKCS1MaskGenerationMethod_t3982938770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable710[1] = 
{
	PKCS1MaskGenerationMethod_t3982938770::get_offset_of_hashName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (PaddingMode_t457467698)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable711[6] = 
{
	PaddingMode_t457467698::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (PasswordDeriveBytes_t679102561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable712[10] = 
{
	PasswordDeriveBytes_t679102561::get_offset_of_HashNameValue_0(),
	PasswordDeriveBytes_t679102561::get_offset_of_SaltValue_1(),
	PasswordDeriveBytes_t679102561::get_offset_of_IterationsValue_2(),
	PasswordDeriveBytes_t679102561::get_offset_of_hash_3(),
	PasswordDeriveBytes_t679102561::get_offset_of_state_4(),
	PasswordDeriveBytes_t679102561::get_offset_of_password_5(),
	PasswordDeriveBytes_t679102561::get_offset_of_initial_6(),
	PasswordDeriveBytes_t679102561::get_offset_of_output_7(),
	PasswordDeriveBytes_t679102561::get_offset_of_position_8(),
	PasswordDeriveBytes_t679102561::get_offset_of_hashnumber_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (RC2_t165294765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable713[1] = 
{
	RC2_t165294765::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (RC2CryptoServiceProvider_t4261859952), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable714[1] = 
{
	RC2CryptoServiceProvider_t4261859952::get_offset_of__useSalt_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (RC2Transform_t64344617), -1, sizeof(RC2Transform_t64344617_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable715[7] = 
{
	RC2Transform_t64344617::get_offset_of_R0_12(),
	RC2Transform_t64344617::get_offset_of_R1_13(),
	RC2Transform_t64344617::get_offset_of_R2_14(),
	RC2Transform_t64344617::get_offset_of_R3_15(),
	RC2Transform_t64344617::get_offset_of_K_16(),
	RC2Transform_t64344617::get_offset_of_j_17(),
	RC2Transform_t64344617_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (RIPEMD160_t2305654835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (RIPEMD160Managed_t938145236), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable717[6] = 
{
	0,
	RIPEMD160Managed_t938145236::get_offset_of__ProcessingBuffer_5(),
	RIPEMD160Managed_t938145236::get_offset_of__X_6(),
	RIPEMD160Managed_t938145236::get_offset_of__HashValue_7(),
	RIPEMD160Managed_t938145236::get_offset_of__Length_8(),
	RIPEMD160Managed_t938145236::get_offset_of__ProcessingBufferCount_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (RNGCryptoServiceProvider_t3850892000), -1, sizeof(RNGCryptoServiceProvider_t3850892000_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable718[2] = 
{
	RNGCryptoServiceProvider_t3850892000_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t3850892000::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (RSA_t765183856), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (RSACryptoServiceProvider_t1880357372), -1, sizeof(RSACryptoServiceProvider_t1880357372_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable720[9] = 
{
	0,
	RSACryptoServiceProvider_t1880357372::get_offset_of_store_3(),
	RSACryptoServiceProvider_t1880357372::get_offset_of_persistKey_4(),
	RSACryptoServiceProvider_t1880357372::get_offset_of_persisted_5(),
	RSACryptoServiceProvider_t1880357372::get_offset_of_privateKeyExportable_6(),
	RSACryptoServiceProvider_t1880357372::get_offset_of_m_disposed_7(),
	RSACryptoServiceProvider_t1880357372::get_offset_of_rsa_8(),
	RSACryptoServiceProvider_t1880357372_StaticFields::get_offset_of_useMachineKeyStore_9(),
	RSACryptoServiceProvider_t1880357372_StaticFields::get_offset_of_U3CU3Ef__switchU24map29_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (RSAOAEPKeyExchangeDeformatter_t580130373), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable721[1] = 
{
	RSAOAEPKeyExchangeDeformatter_t580130373::get_offset_of_rsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (RSAOAEPKeyExchangeFormatter_t2895710169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable722[3] = 
{
	RSAOAEPKeyExchangeFormatter_t2895710169::get_offset_of_rsa_0(),
	RSAOAEPKeyExchangeFormatter_t2895710169::get_offset_of_random_1(),
	RSAOAEPKeyExchangeFormatter_t2895710169::get_offset_of_param_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (RSAPKCS1KeyExchangeDeformatter_t3395103956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable723[2] = 
{
	RSAPKCS1KeyExchangeDeformatter_t3395103956::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeDeformatter_t3395103956::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (RSAPKCS1KeyExchangeFormatter_t3695246810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable724[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t3695246810::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t3695246810::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (RSAPKCS1SignatureDeformatter_t3889336290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable725[2] = 
{
	RSAPKCS1SignatureDeformatter_t3889336290::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t3889336290::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (RSAPKCS1SignatureFormatter_t3710577328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable726[2] = 
{
	RSAPKCS1SignatureFormatter_t3710577328::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t3710577328::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (RSAParameters_t2539289496)+ sizeof (RuntimeObject), sizeof(RSAParameters_t2539289496_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable727[8] = 
{
	RSAParameters_t2539289496::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2539289496::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2539289496::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2539289496::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2539289496::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2539289496::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2539289496::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2539289496::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (RandomNumberGenerator_t214893434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (Rfc2898DeriveBytes_t4180542127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable729[7] = 
{
	0,
	Rfc2898DeriveBytes_t4180542127::get_offset_of__iteration_1(),
	Rfc2898DeriveBytes_t4180542127::get_offset_of__salt_2(),
	Rfc2898DeriveBytes_t4180542127::get_offset_of__hmac_3(),
	Rfc2898DeriveBytes_t4180542127::get_offset_of__buffer_4(),
	Rfc2898DeriveBytes_t4180542127::get_offset_of__pos_5(),
	Rfc2898DeriveBytes_t4180542127::get_offset_of__f_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { sizeof (Rijndael_t447473561), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { sizeof (RijndaelManaged_t404226640), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { sizeof (RijndaelTransform_t3774464129), -1, sizeof(RijndaelTransform_t3774464129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable732[15] = 
{
	RijndaelTransform_t3774464129::get_offset_of_expandedKey_12(),
	RijndaelTransform_t3774464129::get_offset_of_Nb_13(),
	RijndaelTransform_t3774464129::get_offset_of_Nk_14(),
	RijndaelTransform_t3774464129::get_offset_of_Nr_15(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t3774464129_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { sizeof (RijndaelManagedTransform_t2850726604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable733[2] = 
{
	RijndaelManagedTransform_t2850726604::get_offset_of__st_0(),
	RijndaelManagedTransform_t2850726604::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (SHA1_t1813491683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { sizeof (SHA1Internal_t952012975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable735[7] = 
{
	0,
	0,
	SHA1Internal_t952012975::get_offset_of__H_2(),
	SHA1Internal_t952012975::get_offset_of_count_3(),
	SHA1Internal_t952012975::get_offset_of__ProcessingBuffer_4(),
	SHA1Internal_t952012975::get_offset_of__ProcessingBufferCount_5(),
	SHA1Internal_t952012975::get_offset_of_buff_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (SHA1CryptoServiceProvider_t3790933178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable736[1] = 
{
	SHA1CryptoServiceProvider_t3790933178::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (SHA1Managed_t898601296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable737[1] = 
{
	SHA1Managed_t898601296::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (SHA256_t2217789386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { sizeof (SHA256Managed_t129517214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable739[7] = 
{
	0,
	0,
	SHA256Managed_t129517214::get_offset_of__H_6(),
	SHA256Managed_t129517214::get_offset_of_count_7(),
	SHA256Managed_t129517214::get_offset_of__ProcessingBuffer_8(),
	SHA256Managed_t129517214::get_offset_of__ProcessingBufferCount_9(),
	SHA256Managed_t129517214::get_offset_of_buff_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { sizeof (SHA384_t3627691719), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (SHA384Managed_t1256470452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable741[14] = 
{
	SHA384Managed_t1256470452::get_offset_of_xBuf_4(),
	SHA384Managed_t1256470452::get_offset_of_xBufOff_5(),
	SHA384Managed_t1256470452::get_offset_of_byteCount1_6(),
	SHA384Managed_t1256470452::get_offset_of_byteCount2_7(),
	SHA384Managed_t1256470452::get_offset_of_H1_8(),
	SHA384Managed_t1256470452::get_offset_of_H2_9(),
	SHA384Managed_t1256470452::get_offset_of_H3_10(),
	SHA384Managed_t1256470452::get_offset_of_H4_11(),
	SHA384Managed_t1256470452::get_offset_of_H5_12(),
	SHA384Managed_t1256470452::get_offset_of_H6_13(),
	SHA384Managed_t1256470452::get_offset_of_H7_14(),
	SHA384Managed_t1256470452::get_offset_of_H8_15(),
	SHA384Managed_t1256470452::get_offset_of_W_16(),
	SHA384Managed_t1256470452::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { sizeof (SHA512_t1183720439), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { sizeof (SHA512Managed_t3330920523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable743[14] = 
{
	SHA512Managed_t3330920523::get_offset_of_xBuf_4(),
	SHA512Managed_t3330920523::get_offset_of_xBufOff_5(),
	SHA512Managed_t3330920523::get_offset_of_byteCount1_6(),
	SHA512Managed_t3330920523::get_offset_of_byteCount2_7(),
	SHA512Managed_t3330920523::get_offset_of_H1_8(),
	SHA512Managed_t3330920523::get_offset_of_H2_9(),
	SHA512Managed_t3330920523::get_offset_of_H3_10(),
	SHA512Managed_t3330920523::get_offset_of_H4_11(),
	SHA512Managed_t3330920523::get_offset_of_H5_12(),
	SHA512Managed_t3330920523::get_offset_of_H6_13(),
	SHA512Managed_t3330920523::get_offset_of_H7_14(),
	SHA512Managed_t3330920523::get_offset_of_H8_15(),
	SHA512Managed_t3330920523::get_offset_of_W_16(),
	SHA512Managed_t3330920523::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { sizeof (SHAConstants_t485986180), -1, sizeof(SHAConstants_t485986180_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable744[2] = 
{
	SHAConstants_t485986180_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t485986180_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { sizeof (SignatureDescription_t1853926373), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable745[4] = 
{
	SignatureDescription_t1853926373::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t1853926373::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t1853926373::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t1853926373::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { sizeof (DSASignatureDescription_t732697198), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { sizeof (RSAPKCS1SHA1SignatureDescription_t2504824041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (SymmetricAlgorithm_t2354607141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable748[10] = 
{
	SymmetricAlgorithm_t2354607141::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t2354607141::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t2354607141::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t2354607141::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t2354607141::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t2354607141::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t2354607141::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t2354607141::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t2354607141::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t2354607141::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { sizeof (ToBase64Transform_t2881320518), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable749[3] = 
{
	0,
	0,
	ToBase64Transform_t2881320518::get_offset_of_m_disposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (TripleDES_t2792648320), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { sizeof (TripleDESCryptoServiceProvider_t1338379196), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { sizeof (TripleDESTransform_t1572432551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable752[6] = 
{
	TripleDESTransform_t1572432551::get_offset_of_E1_12(),
	TripleDESTransform_t1572432551::get_offset_of_D2_13(),
	TripleDESTransform_t1572432551::get_offset_of_E3_14(),
	TripleDESTransform_t1572432551::get_offset_of_D1_15(),
	TripleDESTransform_t1572432551::get_offset_of_E2_16(),
	TripleDESTransform_t1572432551::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { sizeof (CodeAccessSecurityAttribute_t907939268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { sizeof (EnvironmentPermission_t152251322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable754[3] = 
{
	EnvironmentPermission_t152251322::get_offset_of__state_0(),
	EnvironmentPermission_t152251322::get_offset_of_readList_1(),
	EnvironmentPermission_t152251322::get_offset_of_writeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (EnvironmentPermissionAccess_t81580952)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable755[5] = 
{
	EnvironmentPermissionAccess_t81580952::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (FileDialogPermission_t4245301446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable756[1] = 
{
	FileDialogPermission_t4245301446::get_offset_of__access_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (FileDialogPermissionAccess_t3862160470)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable757[5] = 
{
	FileDialogPermissionAccess_t3862160470::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { sizeof (FileIOPermission_t1826548496), -1, sizeof(FileIOPermission_t1826548496_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable758[9] = 
{
	FileIOPermission_t1826548496_StaticFields::get_offset_of_BadPathNameCharacters_0(),
	FileIOPermission_t1826548496_StaticFields::get_offset_of_BadFileNameCharacters_1(),
	FileIOPermission_t1826548496::get_offset_of_m_Unrestricted_2(),
	FileIOPermission_t1826548496::get_offset_of_m_AllFilesAccess_3(),
	FileIOPermission_t1826548496::get_offset_of_m_AllLocalFilesAccess_4(),
	FileIOPermission_t1826548496::get_offset_of_readList_5(),
	FileIOPermission_t1826548496::get_offset_of_writeList_6(),
	FileIOPermission_t1826548496::get_offset_of_appendList_7(),
	FileIOPermission_t1826548496::get_offset_of_pathList_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { sizeof (FileIOPermissionAccess_t872519967)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable759[7] = 
{
	FileIOPermissionAccess_t872519967::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { sizeof (HostProtectionResource_t3285881121)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable760[12] = 
{
	HostProtectionResource_t3285881121::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (IsolatedStorageContainment_t3008271873)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable763[13] = 
{
	IsolatedStorageContainment_t3008271873::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (IsolatedStorageFilePermission_t505319995), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (IsolatedStoragePermission_t170543676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable765[5] = 
{
	IsolatedStoragePermission_t170543676::get_offset_of_m_userQuota_0(),
	IsolatedStoragePermission_t170543676::get_offset_of_m_machineQuota_1(),
	IsolatedStoragePermission_t170543676::get_offset_of_m_expirationDays_2(),
	IsolatedStoragePermission_t170543676::get_offset_of_m_permanentData_3(),
	IsolatedStoragePermission_t170543676::get_offset_of_m_allowed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (KeyContainerPermission_t1214898821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable766[2] = 
{
	KeyContainerPermission_t1214898821::get_offset_of__accessEntries_0(),
	KeyContainerPermission_t1214898821::get_offset_of__flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { sizeof (KeyContainerPermissionAccessEntry_t581893878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable767[6] = 
{
	KeyContainerPermissionAccessEntry_t581893878::get_offset_of__flags_0(),
	KeyContainerPermissionAccessEntry_t581893878::get_offset_of__containerName_1(),
	KeyContainerPermissionAccessEntry_t581893878::get_offset_of__spec_2(),
	KeyContainerPermissionAccessEntry_t581893878::get_offset_of__store_3(),
	KeyContainerPermissionAccessEntry_t581893878::get_offset_of__providerName_4(),
	KeyContainerPermissionAccessEntry_t581893878::get_offset_of__type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (KeyContainerPermissionAccessEntryCollection_t1562199765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable768[1] = 
{
	KeyContainerPermissionAccessEntryCollection_t1562199765::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (KeyContainerPermissionAccessEntryEnumerator_t3555139228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable769[1] = 
{
	KeyContainerPermissionAccessEntryEnumerator_t3555139228::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (KeyContainerPermissionFlags_t1948635102)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable770[12] = 
{
	KeyContainerPermissionFlags_t1948635102::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (PermissionState_t2909873875)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable771[3] = 
{
	PermissionState_t2909873875::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (ReflectionPermission_t2516955668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable772[1] = 
{
	ReflectionPermission_t2516955668::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (ReflectionPermissionFlag_t865653965)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable773[7] = 
{
	ReflectionPermissionFlag_t865653965::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (RegistryPermission_t4218196502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable774[4] = 
{
	RegistryPermission_t4218196502::get_offset_of__state_0(),
	RegistryPermission_t4218196502::get_offset_of_createList_1(),
	RegistryPermission_t4218196502::get_offset_of_readList_2(),
	RegistryPermission_t4218196502::get_offset_of_writeList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (RegistryPermissionAccess_t2975466446)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable775[6] = 
{
	RegistryPermissionAccess_t2975466446::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (SecurityAction_t821223243)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable776[10] = 
{
	SecurityAction_t821223243::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (SecurityPermission_t2949140523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable777[1] = 
{
	SecurityPermission_t2949140523::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (SecurityPermissionAttribute_t1705082136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable778[1] = 
{
	SecurityPermissionAttribute_t1705082136::get_offset_of_m_Flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (SecurityPermissionFlag_t1532257867)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable779[17] = 
{
	SecurityPermissionFlag_t1532257867::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (StrongNameIdentityPermission_t3026079502), -1, sizeof(StrongNameIdentityPermission_t3026079502_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable780[3] = 
{
	StrongNameIdentityPermission_t3026079502_StaticFields::get_offset_of_defaultVersion_0(),
	StrongNameIdentityPermission_t3026079502::get_offset_of__state_1(),
	StrongNameIdentityPermission_t3026079502::get_offset_of__list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (SNIP_t1878142959)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable781[3] = 
{
	SNIP_t1878142959::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t1878142959::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t1878142959::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (StrongNamePublicKeyBlob_t3235869392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable782[1] = 
{
	StrongNamePublicKeyBlob_t3235869392::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (UIPermission_t1105996444), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable783[2] = 
{
	UIPermission_t1105996444::get_offset_of__window_0(),
	UIPermission_t1105996444::get_offset_of__clipboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (UIPermissionClipboard_t1238064727)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable784[4] = 
{
	UIPermissionClipboard_t1238064727::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (UIPermissionWindow_t4231648239)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable785[5] = 
{
	UIPermissionWindow_t4231648239::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (ZoneIdentityPermission_t3585114252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable786[1] = 
{
	ZoneIdentityPermission_t3585114252::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (AllMembershipCondition_t1476358333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable787[1] = 
{
	AllMembershipCondition_t1476358333::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (ApplicationSecurityManager_t1317866397), -1, sizeof(ApplicationSecurityManager_t1317866397_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable788[1] = 
{
	ApplicationSecurityManager_t1317866397_StaticFields::get_offset_of__appTrustManager_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (ApplicationTrust_t2175938951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable789[6] = 
{
	ApplicationTrust_t2175938951::get_offset_of__appid_0(),
	ApplicationTrust_t2175938951::get_offset_of__defaultPolicy_1(),
	ApplicationTrust_t2175938951::get_offset_of__xtranfo_2(),
	ApplicationTrust_t2175938951::get_offset_of__trustrun_3(),
	ApplicationTrust_t2175938951::get_offset_of__persist_4(),
	ApplicationTrust_t2175938951::get_offset_of_fullTrustAssemblies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (CodeConnectAccess_t2983407520), -1, sizeof(CodeConnectAccess_t2983407520_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable790[6] = 
{
	CodeConnectAccess_t2983407520_StaticFields::get_offset_of_AnyScheme_0(),
	CodeConnectAccess_t2983407520_StaticFields::get_offset_of_DefaultPort_1(),
	CodeConnectAccess_t2983407520_StaticFields::get_offset_of_OriginPort_2(),
	CodeConnectAccess_t2983407520_StaticFields::get_offset_of_OriginScheme_3(),
	CodeConnectAccess_t2983407520::get_offset_of__scheme_4(),
	CodeConnectAccess_t2983407520::get_offset_of__port_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (CodeGroup_t1150497623), -1, sizeof(CodeGroup_t1150497623_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable791[6] = 
{
	CodeGroup_t1150497623::get_offset_of_m_policy_0(),
	CodeGroup_t1150497623::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t1150497623::get_offset_of_m_description_2(),
	CodeGroup_t1150497623::get_offset_of_m_name_3(),
	CodeGroup_t1150497623::get_offset_of_m_children_4(),
	CodeGroup_t1150497623_StaticFields::get_offset_of_U3CU3Ef__switchU24map2A_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (DefaultPolicies_t3235917172), -1, sizeof(DefaultPolicies_t3235917172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable792[12] = 
{
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__fxVersion_0(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__ecmaKey_1(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__ecma_2(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__msFinalKey_3(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__msFinal_4(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__fullTrust_5(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__localIntranet_6(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__internet_7(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__skipVerification_8(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__execution_9(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__nothing_10(),
	DefaultPolicies_t3235917172_StaticFields::get_offset_of__everything_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (Key_t903142364)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable793[3] = 
{
	Key_t903142364::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (Evidence_t53821868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable794[4] = 
{
	Evidence_t53821868::get_offset_of__locked_0(),
	Evidence_t53821868::get_offset_of_hostEvidenceList_1(),
	Evidence_t53821868::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t53821868::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (EvidenceEnumerator_t3711490937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable795[3] = 
{
	EvidenceEnumerator_t3711490937::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t3711490937::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t3711490937::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (FileCodeGroup_t1044940265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable796[1] = 
{
	FileCodeGroup_t1044940265::get_offset_of_m_access_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (FirstMatchCodeGroup_t1257427547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (Hash_t3907327974), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable798[2] = 
{
	Hash_t3907327974::get_offset_of_assembly_0(),
	Hash_t3907327974::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

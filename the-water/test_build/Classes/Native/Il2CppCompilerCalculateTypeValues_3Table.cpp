﻿#include "il2cpp-config.h"

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

// System.Resources.ResourceReader
struct ResourceReader_t1900069865;
// System.IO.BinaryReader
struct BinaryReader_t1700768923;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t4134939198;
// System.String[]
struct StringU5BU5D_t2509779023;
// System.Int32[]
struct Int32U5BU5D_t586679782;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t2888186992;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t4105994744;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1051455722;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t4011716087;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t624537351;
// System.Collections.Hashtable
struct Hashtable_t3025822586;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t788222812;
// System.String
struct String_t;
// System.Resources.IResourceReader
struct IResourceReader_t489524542;
// System.IntPtr[]
struct IntPtrU5BU5D_t2491467973;
// System.Collections.IDictionary
struct IDictionary_t532781155;
// System.Void
struct Void_t3905056020;
// System.Char[]
struct CharU5BU5D_t435350908;
// System.Boolean[]
struct BooleanU5BU5D_t1669462487;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t3513970872;
// System.Version
struct Version_t3119141469;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t3045831606;
// System.Security.Policy.Evidence
struct Evidence_t3108787796;
// System.Security.PermissionSet
struct PermissionSet_t391877602;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t4043190589;
// System.Globalization.CultureInfo
struct CultureInfo_t696948173;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t661613368;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4235365075;
// System.Type[]
struct TypeU5BU5D_t3936831464;
// System.Reflection.MemberFilter
struct MemberFilter_t1058824631;
// System.Reflection.TypeFilter
struct TypeFilter_t1586392507;
// System.Reflection.Assembly
struct Assembly_t3966409397;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1726020185;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t1434140253;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t2710771656;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t2356600865;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t3960034063;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t2792532731;
// System.Delegate
struct Delegate_t3189149245;
// System.IAsyncResult
struct IAsyncResult_t1899953664;
// System.AsyncCallback
struct AsyncCallback_t2504034618;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t189589395;




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
#ifndef RESOURCEENUMERATOR_T4013981347_H
#define RESOURCEENUMERATOR_T4013981347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t4013981347  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t1900069865 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t4013981347, ___reader_0)); }
	inline ResourceReader_t1900069865 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t1900069865 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t1900069865 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t4013981347, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t4013981347, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T4013981347_H
#ifndef RESOURCEREADER_T1900069865_H
#define RESOURCEREADER_T1900069865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t1900069865  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t1700768923 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t2509779023* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t586679782* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t2888186992* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t4105994744* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___reader_0)); }
	inline BinaryReader_t1700768923 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t1700768923 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t1700768923 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___typeNames_5)); }
	inline StringU5BU5D_t2509779023* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t2509779023** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t2509779023* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___hashes_6)); }
	inline Int32U5BU5D_t586679782* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t586679782** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t586679782* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___infos_7)); }
	inline ResourceInfoU5BU5D_t2888186992* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t2888186992** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t2888186992* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t4105994744* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t4105994744** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t4105994744* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t1900069865, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T1900069865_H
#ifndef ERRORWRAPPER_T746015156_H
#define ERRORWRAPPER_T746015156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t746015156  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t746015156, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T746015156_H
#ifndef CUSTOMATTRIBUTEDATA_T1944018477_H
#define CUSTOMATTRIBUTEDATA_T1944018477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1944018477  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t1051455722 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1944018477, ___ctorInfo_0)); }
	inline ConstructorInfo_t1051455722 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t1051455722 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t1051455722 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1944018477, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1944018477, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1944018477_H
#ifndef ATTRIBUTE_T1118259030_H
#define ATTRIBUTE_T1118259030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1118259030  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1118259030_H
#ifndef MISSING_T2290667667_H
#define MISSING_T2290667667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t2290667667  : public RuntimeObject
{
public:

public:
};

struct Missing_t2290667667_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t2290667667 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t2290667667_StaticFields, ___Value_0)); }
	inline Missing_t2290667667 * get_Value_0() const { return ___Value_0; }
	inline Missing_t2290667667 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t2290667667 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T2290667667_H
#ifndef BINDER_T100831160_H
#define BINDER_T100831160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t100831160  : public RuntimeObject
{
public:

public:
};

struct Binder_t100831160_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t100831160 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t100831160_StaticFields, ___default_binder_0)); }
	inline Binder_t100831160 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t100831160 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t100831160 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T100831160_H
#ifndef RESOURCEMANAGER_T1574974358_H
#define RESOURCEMANAGER_T1574974358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t1574974358  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t1574974358, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t1574974358_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t3025822586 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t3025822586 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t1574974358_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t3025822586 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t3025822586 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t3025822586 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t1574974358_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t3025822586 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t3025822586 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t3025822586 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t1574974358_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t1574974358_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T1574974358_H
#ifndef STRONGNAMEKEYPAIR_T661613368_H
#define STRONGNAMEKEYPAIR_T661613368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t661613368  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t788222812* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t788222812* ____keyPairArray_3;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t661613368, ____publicKey_0)); }
	inline ByteU5BU5D_t788222812* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t788222812** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t788222812* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t661613368, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t661613368, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t661613368, ____keyPairArray_3)); }
	inline ByteU5BU5D_t788222812* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t788222812** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t788222812* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T661613368_H
#ifndef ACTIVATIONARGUMENTS_T1201523115_H
#define ACTIVATIONARGUMENTS_T1201523115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t1201523115  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T1201523115_H
#ifndef VALUETYPE_T2940981616_H
#define VALUETYPE_T2940981616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2940981616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2940981616_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2940981616_marshaled_com
{
};
#endif // VALUETYPE_T2940981616_H
#ifndef RESOLVEEVENTHOLDER_T3045831606_H
#define RESOLVEEVENTHOLDER_T3045831606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t3045831606  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T3045831606_H
#ifndef RESOURCESET_T3953867458_H
#define RESOURCESET_T3953867458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t3953867458  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t3025822586 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t3953867458, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t3953867458, ___Table_1)); }
	inline Hashtable_t3025822586 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t3025822586 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t3025822586 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t3953867458, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t3953867458, ___disposed_3)); }
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
#endif // RESOURCESET_T3953867458_H
#ifndef EXCEPTION_T1230494385_H
#define EXCEPTION_T1230494385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1230494385  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2491467973* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1230494385 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2491467973* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2491467973** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2491467973* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___inner_exception_1)); }
	inline Exception_t1230494385 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1230494385 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1230494385 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1230494385, ____data_10)); }
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
#endif // EXCEPTION_T1230494385_H
#ifndef POINTER_T2964077917_H
#define POINTER_T2964077917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t2964077917  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t2964077917, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t2964077917, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T2964077917_H
#ifndef ISVOLATILE_T833339501_H
#define ISVOLATILE_T833339501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t833339501  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T833339501_H
#ifndef CRITICALFINALIZEROBJECT_T670660033_H
#define CRITICALFINALIZEROBJECT_T670660033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t670660033  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T670660033_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef GCHANDLE_T236533809_H
#define GCHANDLE_T236533809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t236533809 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t236533809, ___handle_0)); }
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
#endif // GCHANDLE_T236533809_H
#ifndef METHODBASE_T1201996934_H
#define METHODBASE_T1201996934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t1201996934  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T1201996934_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T2144985657_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T2144985657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t2144985657  : public Attribute_t1118259030
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t2144985657, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T2144985657_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef TARGETINVOCATIONEXCEPTION_T2124426067_H
#define TARGETINVOCATIONEXCEPTION_T2124426067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t2124426067  : public Exception_t1230494385
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T2124426067_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T4245688062_H
#define COMDEFAULTINTERFACEATTRIBUTE_T4245688062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t4245688062  : public Attribute_t1118259030
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t4245688062, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T4245688062_H
#ifndef TARGETEXCEPTION_T1341465775_H
#define TARGETEXCEPTION_T1341465775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t1341465775  : public Exception_t1230494385
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T1341465775_H
#ifndef STRINGFREEZINGATTRIBUTE_T4062128190_H
#define STRINGFREEZINGATTRIBUTE_T4062128190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t4062128190  : public Attribute_t1118259030
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T4062128190_H
#ifndef RUNTIMERESOURCESET_T3780465009_H
#define RUNTIMERESOURCESET_T3780465009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t3780465009  : public ResourceSet_t3953867458
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T3780465009_H
#ifndef DISPIDATTRIBUTE_T1968884601_H
#define DISPIDATTRIBUTE_T1968884601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t1968884601  : public Attribute_t1118259030
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t1968884601, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T1968884601_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1139259108_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1139259108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1139259108  : public Exception_t1230494385
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1139259108_H
#ifndef RESOURCEINFO_T1140522749_H
#define RESOURCEINFO_T1140522749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t1140522749 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t1140522749, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t1140522749, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t1140522749, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t1140522749_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t1140522749_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T1140522749_H
#ifndef ENUM_T2157734926_H
#define ENUM_T2157734926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2157734926  : public ValueType_t2940981616
{
public:

public:
};

struct Enum_t2157734926_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t435350908* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2157734926_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t435350908* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t435350908** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t435350908* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2157734926_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2157734926_marshaled_com
{
};
#endif // ENUM_T2157734926_H
#ifndef RESOURCECACHEITEM_T1073304085_H
#define RESOURCECACHEITEM_T1073304085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t1073304085 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t1073304085, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t1073304085, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t1073304085_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t1073304085_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T1073304085_H
#ifndef VOID_T3905056020_H
#define VOID_T3905056020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3905056020 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3905056020_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T1568972858_H
#define ASSEMBLYCOMPANYATTRIBUTE_T1568972858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t1568972858  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t1568972858, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T1568972858_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T2035211777_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T2035211777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t2035211777  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t2035211777, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T2035211777_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T1121597341_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T1121597341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t1121597341  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t1121597341, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T1121597341_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T2088287118_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T2088287118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t2088287118  : public Attribute_t1118259030
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t2088287118, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T2088287118_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1627882960_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1627882960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1627882960  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1627882960, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1627882960_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T3371765514_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T3371765514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t3371765514  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t3371765514, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T3371765514_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3244367487_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3244367487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t3244367487  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t3244367487, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3244367487_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T3835782926_H
#define ASSEMBLYKEYFILEATTRIBUTE_T3835782926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t3835782926  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t3835782926, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T3835782926_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T3110409465_H
#define ASSEMBLYPRODUCTATTRIBUTE_T3110409465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t3110409465  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t3110409465, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T3110409465_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T73868379_H
#define ASSEMBLYTITLEATTRIBUTE_T73868379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t73868379  : public Attribute_t1118259030
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t73868379, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T73868379_H
#ifndef DEFAULT_T865921611_H
#define DEFAULT_T865921611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t865921611  : public Binder_t100831160
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T865921611_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2518999310_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2518999310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t2518999310  : public Attribute_t1118259030
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t2518999310, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2518999310_H
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
#ifndef SYSTEMEXCEPTION_T347482938_H
#define SYSTEMEXCEPTION_T347482938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t347482938  : public Exception_t1230494385
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T347482938_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T3969390060_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T3969390060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t3969390060 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3969390060, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3969390060, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3969390060_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3969390060_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T3969390060_H
#ifndef PARAMETERMODIFIER_T3299472771_H
#define PARAMETERMODIFIER_T3299472771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t3299472771 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t1669462487* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t3299472771, ____byref_0)); }
	inline BooleanU5BU5D_t1669462487* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t1669462487** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t1669462487* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t3299472771_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t3299472771_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T3299472771_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t3513970872 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t3513970872 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t3513970872 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t3513970872 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T1049780016_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T1049780016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t1049780016  : public Attribute_t1118259030
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t3119141469 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t1049780016, ___ver_0)); }
	inline Version_t3119141469 * get_ver_0() const { return ___ver_0; }
	inline Version_t3119141469 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t3119141469 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T1049780016_H
#ifndef EXTERNALEXCEPTION_T2046867550_H
#define EXTERNALEXCEPTION_T2046867550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t2046867550  : public SystemException_t347482938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T2046867550_H
#ifndef LOADHINT_T1640546763_H
#define LOADHINT_T1640546763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t1640546763 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t1640546763, ___value___1)); }
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
#endif // LOADHINT_T1640546763_H
#ifndef CER_T3718909549_H
#define CER_T3718909549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t3718909549 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t3718909549, ___value___1)); }
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
#endif // CER_T3718909549_H
#ifndef CONSISTENCY_T3964001954_H
#define CONSISTENCY_T3964001954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t3964001954 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t3964001954, ___value___1)); }
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
#endif // CONSISTENCY_T3964001954_H
#ifndef CALLINGCONVENTION_T3731470056_H
#define CALLINGCONVENTION_T3731470056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3731470056 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3731470056, ___value___1)); }
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
#endif // CALLINGCONVENTION_T3731470056_H
#ifndef CHARSET_T2889185247_H
#define CHARSET_T2889185247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t2889185247 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t2889185247, ___value___1)); }
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
#endif // CHARSET_T2889185247_H
#ifndef CLASSINTERFACETYPE_T2221664837_H
#define CLASSINTERFACETYPE_T2221664837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t2221664837 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t2221664837, ___value___1)); }
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
#endif // CLASSINTERFACETYPE_T2221664837_H
#ifndef COMINTERFACETYPE_T654874125_H
#define COMINTERFACETYPE_T654874125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t654874125 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t654874125, ___value___1)); }
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
#endif // COMINTERFACETYPE_T654874125_H
#ifndef GCHANDLETYPE_T1492727449_H
#define GCHANDLETYPE_T1492727449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t1492727449 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t1492727449, ___value___1)); }
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
#endif // GCHANDLETYPE_T1492727449_H
#ifndef UNMANAGEDTYPE_T463236462_H
#define UNMANAGEDTYPE_T463236462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t463236462 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t463236462, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T463236462_H
#ifndef ASSEMBLYHASHALGORITHM_T397735886_H
#define ASSEMBLYHASHALGORITHM_T397735886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t397735886 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t397735886, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T397735886_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T1800026232_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T1800026232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t1800026232 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t1800026232, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T1800026232_H
#ifndef RUNTIMEFIELDHANDLE_T1950192934_H
#define RUNTIMEFIELDHANDLE_T1950192934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1950192934 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1950192934, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1950192934_H
#ifndef COMPILATIONRELAXATIONS_T3258629482_H
#define COMPILATIONRELAXATIONS_T3258629482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t3258629482 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t3258629482, ___value___1)); }
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
#endif // COMPILATIONRELAXATIONS_T3258629482_H
#ifndef STACKBEHAVIOUR_T3999112124_H
#define STACKBEHAVIOUR_T3999112124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t3999112124 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t3999112124, ___value___1)); }
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
#endif // STACKBEHAVIOUR_T3999112124_H
#ifndef PROPERTYATTRIBUTES_T939767101_H
#define PROPERTYATTRIBUTES_T939767101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t939767101 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t939767101, ___value___1)); }
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
#endif // PROPERTYATTRIBUTES_T939767101_H
#ifndef TYPEATTRIBUTES_T1947579680_H
#define TYPEATTRIBUTES_T1947579680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t1947579680 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t1947579680, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T1947579680_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T4092956093_H
#define AMBIGUOUSMATCHEXCEPTION_T4092956093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t4092956093  : public SystemException_t347482938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T4092956093_H
#ifndef ASSEMBLY_T3966409397_H
#define ASSEMBLY_T3966409397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t3966409397  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t3045831606 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t3108787796 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t391877602 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t391877602 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t391877602 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t391877602 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t391877602 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t3045831606 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t3045831606 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t3045831606 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ____evidence_2)); }
	inline Evidence_t3108787796 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t3108787796 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t3108787796 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ____minimum_3)); }
	inline PermissionSet_t391877602 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t391877602 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t391877602 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ____optional_4)); }
	inline PermissionSet_t391877602 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t391877602 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t391877602 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ____refuse_5)); }
	inline PermissionSet_t391877602 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t391877602 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t391877602 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ____granted_6)); }
	inline PermissionSet_t391877602 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t391877602 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t391877602 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ____denied_7)); }
	inline PermissionSet_t391877602 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t391877602 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t391877602 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t3966409397, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T3966409397_H
#ifndef ASSEMBLYNAMEFLAGS_T3213277401_H
#define ASSEMBLYNAMEFLAGS_T3213277401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3213277401 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3213277401, ___value___1)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3213277401_H
#ifndef BINDINGFLAGS_T1014399621_H
#define BINDINGFLAGS_T1014399621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1014399621 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1014399621, ___value___1)); }
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
#endif // BINDINGFLAGS_T1014399621_H
#ifndef CALLINGCONVENTIONS_T1175650234_H
#define CALLINGCONVENTIONS_T1175650234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t1175650234 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t1175650234, ___value___1)); }
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
#endif // CALLINGCONVENTIONS_T1175650234_H
#ifndef CONSTRUCTORINFO_T1051455722_H
#define CONSTRUCTORINFO_T1051455722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t1051455722  : public MethodBase_t1201996934
{
public:

public:
};

struct ConstructorInfo_t1051455722_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t1051455722_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t1051455722_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T1051455722_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T582211324_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T582211324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t582211324 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t3969390060  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t582211324, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t3969390060  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t3969390060 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t3969390060  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t582211324, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t582211324_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t3969390060_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t582211324_marshaled_com
{
	CustomAttributeTypedArgument_t3969390060_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T582211324_H
#ifndef EVENTATTRIBUTES_T2935082086_H
#define EVENTATTRIBUTES_T2935082086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t2935082086 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t2935082086, ___value___1)); }
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
#endif // EVENTATTRIBUTES_T2935082086_H
#ifndef FIELDATTRIBUTES_T3946098044_H
#define FIELDATTRIBUTES_T3946098044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t3946098044 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t3946098044, ___value___1)); }
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
#endif // FIELDATTRIBUTES_T3946098044_H
#ifndef MEMBERTYPES_T1824828885_H
#define MEMBERTYPES_T1824828885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t1824828885 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t1824828885, ___value___1)); }
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
#endif // MEMBERTYPES_T1824828885_H
#ifndef METHODATTRIBUTES_T2656797142_H
#define METHODATTRIBUTES_T2656797142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2656797142 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2656797142, ___value___1)); }
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
#endif // METHODATTRIBUTES_T2656797142_H
#ifndef METHODIMPLATTRIBUTES_T1299516022_H
#define METHODIMPLATTRIBUTES_T1299516022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t1299516022 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t1299516022, ___value___1)); }
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
#endif // METHODIMPLATTRIBUTES_T1299516022_H
#ifndef PREDEFINEDRESOURCETYPE_T4233431922_H
#define PREDEFINEDRESOURCETYPE_T4233431922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t4233431922 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t4233431922, ___value___1)); }
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
#endif // PREDEFINEDRESOURCETYPE_T4233431922_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t1201996934
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef DELEGATE_T3189149245_H
#define DELEGATE_T3189149245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3189149245  : public RuntimeObject
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
	DelegateData_t4043190589 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3189149245, ___data_8)); }
	inline DelegateData_t4043190589 * get_data_8() const { return ___data_8; }
	inline DelegateData_t4043190589 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t4043190589 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3189149245_H
#ifndef PARAMETERATTRIBUTES_T3089147898_H
#define PARAMETERATTRIBUTES_T3089147898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t3089147898 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t3089147898, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T3089147898_H
#ifndef RUNTIMETYPEHANDLE_T1530100976_H
#define RUNTIMETYPEHANDLE_T1530100976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1530100976 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1530100976, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T1530100976_H
#ifndef PINFO_T3133392860_H
#define PINFO_T3133392860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t3133392860 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t3133392860, ___value___1)); }
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
#endif // PINFO_T3133392860_H
#ifndef PROCESSORARCHITECTURE_T3244600211_H
#define PROCESSORARCHITECTURE_T3244600211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t3244600211 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t3244600211, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T3244600211_H
#ifndef ASSEMBLYNAME_T2134144535_H
#define ASSEMBLYNAME_T2134144535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t2134144535  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t696948173 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t661613368 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t788222812* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t788222812* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3119141469 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___cultureinfo_6)); }
	inline CultureInfo_t696948173 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t696948173 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t696948173 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___keypair_9)); }
	inline StrongNameKeyPair_t661613368 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t661613368 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t661613368 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___publicKey_10)); }
	inline ByteU5BU5D_t788222812* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t788222812** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t788222812* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___keyToken_11)); }
	inline ByteU5BU5D_t788222812* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t788222812** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t788222812* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___version_13)); }
	inline Version_t3119141469 * get_version_13() const { return ___version_13; }
	inline Version_t3119141469 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3119141469 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t2134144535, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T2134144535_H
#ifndef PARAMETERINFO_T2422921841_H
#define PARAMETERINFO_T2422921841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t2422921841  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t4235365075 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t2422921841, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t2422921841, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t2422921841, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t2422921841, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t2422921841, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t2422921841, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t2422921841, ___marshalAs_6)); }
	inline UnmanagedMarshal_t4235365075 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t4235365075 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t4235365075 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T2422921841_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T3993647451_H
#define DEFAULTDEPENDENCYATTRIBUTE_T3993647451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t3993647451  : public Attribute_t1118259030
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t3993647451, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T3993647451_H
#ifndef UNMANAGEDMARSHAL_T4235365075_H
#define UNMANAGEDMARSHAL_T4235365075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t4235365075  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4235365075, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T4235365075_H
#ifndef COMEXCEPTION_T3878500012_H
#define COMEXCEPTION_T3878500012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t3878500012  : public ExternalException_t2046867550
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T3878500012_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1530100976  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1530100976  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1530100976 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1530100976  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3936831464* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1058824631 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1058824631 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1058824631 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3936831464* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3936831464** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3936831464* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1058824631 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1058824631 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1058824631 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1058824631 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1058824631 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1058824631 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1058824631 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1058824631 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1058824631 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MONOPROPERTYINFO_T1554210287_H
#define MONOPROPERTYINFO_T1554210287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t1554210287 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t1554210287, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t1554210287, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t1554210287, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t1554210287, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t1554210287, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t1554210287_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t1554210287_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T1554210287_H
#ifndef INTERFACETYPEATTRIBUTE_T822749474_H
#define INTERFACETYPEATTRIBUTE_T822749474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t822749474  : public Attribute_t1118259030
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t822749474, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T822749474_H
#ifndef MONOCMETHOD_T1553246366_H
#define MONOCMETHOD_T1553246366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t1553246366  : public ConstructorInfo_t1051455722
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t1553246366, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t1553246366, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t1553246366, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T1553246366_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOMETHODINFO_T1947633336_H
#define MONOMETHODINFO_T1947633336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t1947633336 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1947633336, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1947633336, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1947633336, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1947633336, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1947633336, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1947633336_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1947633336_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T1947633336_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T804301097_H
#define RELIABILITYCONTRACTATTRIBUTE_T804301097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t804301097  : public Attribute_t1118259030
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t804301097, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t804301097, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T804301097_H
#ifndef MODULE_T3071642906_H
#define MODULE_T3071642906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t3071642906  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t3966409397 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t3071642906, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t3071642906, ___assembly_4)); }
	inline Assembly_t3966409397 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t3966409397 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t3966409397 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t3071642906, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t3071642906, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t3071642906, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t3071642906, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t3071642906, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t3071642906_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t1586392507 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t1586392507 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t3071642906_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t1586392507 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t1586392507 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t1586392507 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t3071642906_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t1586392507 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t1586392507 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t1586392507 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T3071642906_H
#ifndef MONOEVENTINFO_T4255616975_H
#define MONOEVENTINFO_T4255616975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t4255616975 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t1726020185* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t4255616975, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t1726020185* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t1726020185** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t1726020185* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t4255616975_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t1726020185* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t4255616975_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t1726020185* ___other_methods_7;
};
#endif // MONOEVENTINFO_T4255616975_H
#ifndef CLASSINTERFACEATTRIBUTE_T2845152447_H
#define CLASSINTERFACEATTRIBUTE_T2845152447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2845152447  : public Attribute_t1118259030
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2845152447, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2845152447_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t1950192934  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t1950192934  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t1950192934 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t1950192934  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T3191012558_H
#define MEMBERINFOSERIALIZATIONHOLDER_T3191012558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t3191012558  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t3936831464* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3191012558, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3191012558, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3191012558, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3191012558, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t3191012558, ____genericArguments_4)); }
	inline TypeU5BU5D_t3936831464* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t3936831464** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t3936831464* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T3191012558_H
#ifndef MULTICASTDELEGATE_T2824449817_H
#define MULTICASTDELEGATE_T2824449817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2824449817  : public Delegate_t3189149245
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2824449817 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2824449817 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2824449817, ___prev_9)); }
	inline MulticastDelegate_t2824449817 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2824449817 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2824449817 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2824449817, ___kpm_next_10)); }
	inline MulticastDelegate_t2824449817 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2824449817 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2824449817 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2824449817_H
#ifndef TYPEBUILDER_T1488774482_H
#define TYPEBUILDER_T1488774482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t1488774482  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t3936831464* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t1434140253* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t2710771656* ___ctors_15;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t2356600865* ___fields_16;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_17;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t3960034063 * ___pmodule_18;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t2792532731* ___generic_params_19;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_20;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_21;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_22;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_23;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___interfaces_12)); }
	inline TypeU5BU5D_t3936831464* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t3936831464** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t3936831464* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___methods_14)); }
	inline MethodBuilderU5BU5D_t1434140253* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t1434140253** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t1434140253* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t2710771656* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t2710771656** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t2710771656* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_fields_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___fields_16)); }
	inline FieldBuilderU5BU5D_t2356600865* get_fields_16() const { return ___fields_16; }
	inline FieldBuilderU5BU5D_t2356600865** get_address_of_fields_16() { return &___fields_16; }
	inline void set_fields_16(FieldBuilderU5BU5D_t2356600865* value)
	{
		___fields_16 = value;
		Il2CppCodeGenWriteBarrier((&___fields_16), value);
	}

	inline static int32_t get_offset_of_attrs_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___attrs_17)); }
	inline int32_t get_attrs_17() const { return ___attrs_17; }
	inline int32_t* get_address_of_attrs_17() { return &___attrs_17; }
	inline void set_attrs_17(int32_t value)
	{
		___attrs_17 = value;
	}

	inline static int32_t get_offset_of_pmodule_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___pmodule_18)); }
	inline ModuleBuilder_t3960034063 * get_pmodule_18() const { return ___pmodule_18; }
	inline ModuleBuilder_t3960034063 ** get_address_of_pmodule_18() { return &___pmodule_18; }
	inline void set_pmodule_18(ModuleBuilder_t3960034063 * value)
	{
		___pmodule_18 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_18), value);
	}

	inline static int32_t get_offset_of_generic_params_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___generic_params_19)); }
	inline GenericTypeParameterBuilderU5BU5D_t2792532731* get_generic_params_19() const { return ___generic_params_19; }
	inline GenericTypeParameterBuilderU5BU5D_t2792532731** get_address_of_generic_params_19() { return &___generic_params_19; }
	inline void set_generic_params_19(GenericTypeParameterBuilderU5BU5D_t2792532731* value)
	{
		___generic_params_19 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_19), value);
	}

	inline static int32_t get_offset_of_created_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___created_20)); }
	inline Type_t * get_created_20() const { return ___created_20; }
	inline Type_t ** get_address_of_created_20() { return &___created_20; }
	inline void set_created_20(Type_t * value)
	{
		___created_20 = value;
		Il2CppCodeGenWriteBarrier((&___created_20), value);
	}

	inline static int32_t get_offset_of_fullname_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___fullname_21)); }
	inline String_t* get_fullname_21() const { return ___fullname_21; }
	inline String_t** get_address_of_fullname_21() { return &___fullname_21; }
	inline void set_fullname_21(String_t* value)
	{
		___fullname_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_21), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___createTypeCalled_22)); }
	inline bool get_createTypeCalled_22() const { return ___createTypeCalled_22; }
	inline bool* get_address_of_createTypeCalled_22() { return &___createTypeCalled_22; }
	inline void set_createTypeCalled_22(bool value)
	{
		___createTypeCalled_22 = value;
	}

	inline static int32_t get_offset_of_underlying_type_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t1488774482, ___underlying_type_23)); }
	inline Type_t * get_underlying_type_23() const { return ___underlying_type_23; }
	inline Type_t ** get_address_of_underlying_type_23() { return &___underlying_type_23; }
	inline void set_underlying_type_23(Type_t * value)
	{
		___underlying_type_23 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T1488774482_H
#ifndef ADDEVENTADAPTER_T3513970872_H
#define ADDEVENTADAPTER_T3513970872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t3513970872  : public MulticastDelegate_t2824449817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T3513970872_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t1554210287  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t189589395 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t1554210287  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t1554210287 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t1554210287  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t189589395 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t189589395 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t189589395 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef MONOGENERICCMETHOD_T275282335_H
#define MONOGENERICCMETHOD_T275282335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t275282335  : public MonoCMethod_t1553246366
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T275282335_H
#ifndef GETTERADAPTER_T189589395_H
#define GETTERADAPTER_T189589395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t189589395  : public MulticastDelegate_t2824449817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T189589395_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (StackBehaviour_t3999112124)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable300[30] = 
{
	StackBehaviour_t3999112124::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (TypeBuilder_t1488774482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable301[16] = 
{
	TypeBuilder_t1488774482::get_offset_of_tname_8(),
	TypeBuilder_t1488774482::get_offset_of_nspace_9(),
	TypeBuilder_t1488774482::get_offset_of_parent_10(),
	TypeBuilder_t1488774482::get_offset_of_nesting_type_11(),
	TypeBuilder_t1488774482::get_offset_of_interfaces_12(),
	TypeBuilder_t1488774482::get_offset_of_num_methods_13(),
	TypeBuilder_t1488774482::get_offset_of_methods_14(),
	TypeBuilder_t1488774482::get_offset_of_ctors_15(),
	TypeBuilder_t1488774482::get_offset_of_fields_16(),
	TypeBuilder_t1488774482::get_offset_of_attrs_17(),
	TypeBuilder_t1488774482::get_offset_of_pmodule_18(),
	TypeBuilder_t1488774482::get_offset_of_generic_params_19(),
	TypeBuilder_t1488774482::get_offset_of_created_20(),
	TypeBuilder_t1488774482::get_offset_of_fullname_21(),
	TypeBuilder_t1488774482::get_offset_of_createTypeCalled_22(),
	TypeBuilder_t1488774482::get_offset_of_underlying_type_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (UnmanagedMarshal_t4235365075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable302[9] = 
{
	UnmanagedMarshal_t4235365075::get_offset_of_count_0(),
	UnmanagedMarshal_t4235365075::get_offset_of_t_1(),
	UnmanagedMarshal_t4235365075::get_offset_of_tbase_2(),
	UnmanagedMarshal_t4235365075::get_offset_of_guid_3(),
	UnmanagedMarshal_t4235365075::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t4235365075::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t4235365075::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t4235365075::get_offset_of_param_num_7(),
	UnmanagedMarshal_t4235365075::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (AmbiguousMatchException_t4092956093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (Assembly_t3966409397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[10] = 
{
	Assembly_t3966409397::get_offset_of__mono_assembly_0(),
	Assembly_t3966409397::get_offset_of_resolve_event_holder_1(),
	Assembly_t3966409397::get_offset_of__evidence_2(),
	Assembly_t3966409397::get_offset_of__minimum_3(),
	Assembly_t3966409397::get_offset_of__optional_4(),
	Assembly_t3966409397::get_offset_of__refuse_5(),
	Assembly_t3966409397::get_offset_of__granted_6(),
	Assembly_t3966409397::get_offset_of__denied_7(),
	Assembly_t3966409397::get_offset_of_fromByteArray_8(),
	Assembly_t3966409397::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (ResolveEventHolder_t3045831606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (AssemblyCompanyAttribute_t1568972858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[1] = 
{
	AssemblyCompanyAttribute_t1568972858::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (AssemblyCopyrightAttribute_t2035211777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[1] = 
{
	AssemblyCopyrightAttribute_t2035211777::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (AssemblyDefaultAliasAttribute_t1121597341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable308[1] = 
{
	AssemblyDefaultAliasAttribute_t1121597341::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (AssemblyDelaySignAttribute_t2088287118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[1] = 
{
	AssemblyDelaySignAttribute_t2088287118::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (AssemblyDescriptionAttribute_t1627882960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable310[1] = 
{
	AssemblyDescriptionAttribute_t1627882960::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (AssemblyFileVersionAttribute_t3371765514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	AssemblyFileVersionAttribute_t3371765514::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (AssemblyInformationalVersionAttribute_t3244367487), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	AssemblyInformationalVersionAttribute_t3244367487::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (AssemblyKeyFileAttribute_t3835782926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[1] = 
{
	AssemblyKeyFileAttribute_t3835782926::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (AssemblyName_t2134144535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[15] = 
{
	AssemblyName_t2134144535::get_offset_of_name_0(),
	AssemblyName_t2134144535::get_offset_of_codebase_1(),
	AssemblyName_t2134144535::get_offset_of_major_2(),
	AssemblyName_t2134144535::get_offset_of_minor_3(),
	AssemblyName_t2134144535::get_offset_of_build_4(),
	AssemblyName_t2134144535::get_offset_of_revision_5(),
	AssemblyName_t2134144535::get_offset_of_cultureinfo_6(),
	AssemblyName_t2134144535::get_offset_of_flags_7(),
	AssemblyName_t2134144535::get_offset_of_hashalg_8(),
	AssemblyName_t2134144535::get_offset_of_keypair_9(),
	AssemblyName_t2134144535::get_offset_of_publicKey_10(),
	AssemblyName_t2134144535::get_offset_of_keyToken_11(),
	AssemblyName_t2134144535::get_offset_of_versioncompat_12(),
	AssemblyName_t2134144535::get_offset_of_version_13(),
	AssemblyName_t2134144535::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (AssemblyNameFlags_t3213277401)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable315[6] = 
{
	AssemblyNameFlags_t3213277401::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (AssemblyProductAttribute_t3110409465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[1] = 
{
	AssemblyProductAttribute_t3110409465::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (AssemblyTitleAttribute_t73868379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable317[1] = 
{
	AssemblyTitleAttribute_t73868379::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (Binder_t100831160), -1, sizeof(Binder_t100831160_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	Binder_t100831160_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (Default_t865921611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (BindingFlags_t1014399621)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable320[21] = 
{
	BindingFlags_t1014399621::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (CallingConventions_t1175650234)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable321[6] = 
{
	CallingConventions_t1175650234::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (ConstructorInfo_t1051455722), -1, sizeof(ConstructorInfo_t1051455722_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable322[2] = 
{
	ConstructorInfo_t1051455722_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t1051455722_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (CustomAttributeData_t1944018477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[3] = 
{
	CustomAttributeData_t1944018477::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t1944018477::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t1944018477::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (CustomAttributeNamedArgument_t582211324)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[2] = 
{
	CustomAttributeNamedArgument_t582211324::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t582211324::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (CustomAttributeTypedArgument_t3969390060)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[2] = 
{
	CustomAttributeTypedArgument_t3969390060::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t3969390060::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (EventAttributes_t2935082086)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable326[5] = 
{
	EventAttributes_t2935082086::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (AddEventAdapter_t3513970872), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (FieldAttributes_t3946098044)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable329[20] = 
{
	FieldAttributes_t3946098044::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (MemberInfoSerializationHolder_t3191012558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[5] = 
{
	MemberInfoSerializationHolder_t3191012558::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t3191012558::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t3191012558::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t3191012558::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t3191012558::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (MemberTypes_t1824828885)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable332[10] = 
{
	MemberTypes_t1824828885::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (MethodAttributes_t2656797142)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable333[25] = 
{
	MethodAttributes_t2656797142::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (MethodBase_t1201996934), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (MethodImplAttributes_t1299516022)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable335[15] = 
{
	MethodImplAttributes_t1299516022::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (Missing_t2290667667), -1, sizeof(Missing_t2290667667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable337[1] = 
{
	Missing_t2290667667_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (Module_t3071642906), -1, sizeof(Module_t3071642906_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable338[10] = 
{
	0,
	Module_t3071642906_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t3071642906_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t3071642906::get_offset_of__impl_3(),
	Module_t3071642906::get_offset_of_assembly_4(),
	Module_t3071642906::get_offset_of_fqname_5(),
	Module_t3071642906::get_offset_of_name_6(),
	Module_t3071642906::get_offset_of_scopename_7(),
	Module_t3071642906::get_offset_of_is_resource_8(),
	Module_t3071642906::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (MonoEventInfo_t4255616975)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable339[8] = 
{
	MonoEventInfo_t4255616975::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4255616975::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4255616975::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4255616975::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4255616975::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4255616975::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4255616975::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t4255616975::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable341[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (MonoGenericCMethod_t275282335), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (MonoMethodInfo_t1947633336)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[5] = 
{
	MonoMethodInfo_t1947633336::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1947633336::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1947633336::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1947633336::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1947633336::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (MonoCMethod_t1553246366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[3] = 
{
	MonoCMethod_t1553246366::get_offset_of_mhandle_2(),
	MonoCMethod_t1553246366::get_offset_of_name_3(),
	MonoCMethod_t1553246366::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (MonoPropertyInfo_t1554210287)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[5] = 
{
	MonoPropertyInfo_t1554210287::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t1554210287::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t1554210287::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t1554210287::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t1554210287::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (PInfo_t3133392860)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable348[7] = 
{
	PInfo_t3133392860::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable349[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (GetterAdapter_t189589395), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (ParameterAttributes_t3089147898)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable353[12] = 
{
	ParameterAttributes_t3089147898::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (ParameterInfo_t2422921841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable354[7] = 
{
	ParameterInfo_t2422921841::get_offset_of_ClassImpl_0(),
	ParameterInfo_t2422921841::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t2422921841::get_offset_of_MemberImpl_2(),
	ParameterInfo_t2422921841::get_offset_of_NameImpl_3(),
	ParameterInfo_t2422921841::get_offset_of_PositionImpl_4(),
	ParameterInfo_t2422921841::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t2422921841::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (ParameterModifier_t3299472771)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t3299472771_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable355[1] = 
{
	ParameterModifier_t3299472771::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (Pointer_t2964077917), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable356[2] = 
{
	Pointer_t2964077917::get_offset_of_data_0(),
	Pointer_t2964077917::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (ProcessorArchitecture_t3244600211)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable357[6] = 
{
	ProcessorArchitecture_t3244600211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (PropertyAttributes_t939767101)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable358[9] = 
{
	PropertyAttributes_t939767101::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (StrongNameKeyPair_t661613368), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable360[4] = 
{
	StrongNameKeyPair_t661613368::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t661613368::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t661613368::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t661613368::get_offset_of__keyPairArray_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (TargetException_t1341465775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (TargetInvocationException_t2124426067), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (TargetParameterCountException_t1139259108), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (TypeAttributes_t1947579680)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable364[32] = 
{
	TypeAttributes_t1947579680::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (NeutralResourcesLanguageAttribute_t2518999310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable366[1] = 
{
	NeutralResourcesLanguageAttribute_t2518999310::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (ResourceManager_t1574974358), -1, sizeof(ResourceManager_t1574974358_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable367[5] = 
{
	ResourceManager_t1574974358_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t1574974358_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t1574974358_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t1574974358_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t1574974358::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (PredefinedResourceType_t4233431922)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable368[21] = 
{
	PredefinedResourceType_t4233431922::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (ResourceReader_t1900069865), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[13] = 
{
	ResourceReader_t1900069865::get_offset_of_reader_0(),
	ResourceReader_t1900069865::get_offset_of_readerLock_1(),
	ResourceReader_t1900069865::get_offset_of_formatter_2(),
	ResourceReader_t1900069865::get_offset_of_resourceCount_3(),
	ResourceReader_t1900069865::get_offset_of_typeCount_4(),
	ResourceReader_t1900069865::get_offset_of_typeNames_5(),
	ResourceReader_t1900069865::get_offset_of_hashes_6(),
	ResourceReader_t1900069865::get_offset_of_infos_7(),
	ResourceReader_t1900069865::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t1900069865::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t1900069865::get_offset_of_resource_ver_10(),
	ResourceReader_t1900069865::get_offset_of_cache_11(),
	ResourceReader_t1900069865::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (ResourceInfo_t1140522749)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t1140522749_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable370[3] = 
{
	ResourceInfo_t1140522749::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t1140522749::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t1140522749::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (ResourceCacheItem_t1073304085)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t1073304085_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable371[2] = 
{
	ResourceCacheItem_t1073304085::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t1073304085::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (ResourceEnumerator_t4013981347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable372[3] = 
{
	ResourceEnumerator_t4013981347::get_offset_of_reader_0(),
	ResourceEnumerator_t4013981347::get_offset_of_index_1(),
	ResourceEnumerator_t4013981347::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (ResourceSet_t3953867458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable373[4] = 
{
	ResourceSet_t3953867458::get_offset_of_Reader_0(),
	ResourceSet_t3953867458::get_offset_of_Table_1(),
	ResourceSet_t3953867458::get_offset_of_resources_read_2(),
	ResourceSet_t3953867458::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (RuntimeResourceSet_t3780465009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (SatelliteContractVersionAttribute_t1049780016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable375[1] = 
{
	SatelliteContractVersionAttribute_t1049780016::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (CompilationRelaxations_t3258629482)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable376[2] = 
{
	CompilationRelaxations_t3258629482::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (CompilationRelaxationsAttribute_t2144985657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable377[1] = 
{
	CompilationRelaxationsAttribute_t2144985657::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (DefaultDependencyAttribute_t3993647451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable378[1] = 
{
	DefaultDependencyAttribute_t3993647451::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (IsVolatile_t833339501), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (LoadHint_t1640546763)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable380[4] = 
{
	LoadHint_t1640546763::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (StringFreezingAttribute_t4062128190), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (Cer_t3718909549)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable382[4] = 
{
	Cer_t3718909549::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (Consistency_t3964001954)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[5] = 
{
	Consistency_t3964001954::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (CriticalFinalizerObject_t670660033), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (ReliabilityContractAttribute_t804301097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable385[2] = 
{
	ReliabilityContractAttribute_t804301097::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t804301097::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (ActivationArguments_t1201523115), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (COMException_t3878500012), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (CallingConvention_t3731470056)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable388[6] = 
{
	CallingConvention_t3731470056::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (CharSet_t2889185247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable389[5] = 
{
	CharSet_t2889185247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (ClassInterfaceAttribute_t2845152447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable390[1] = 
{
	ClassInterfaceAttribute_t2845152447::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ClassInterfaceType_t2221664837)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable391[4] = 
{
	ClassInterfaceType_t2221664837::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (ComDefaultInterfaceAttribute_t4245688062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable392[1] = 
{
	ComDefaultInterfaceAttribute_t4245688062::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (ComInterfaceType_t654874125)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable393[4] = 
{
	ComInterfaceType_t654874125::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (DispIdAttribute_t1968884601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable394[1] = 
{
	DispIdAttribute_t1968884601::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (ErrorWrapper_t746015156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable395[1] = 
{
	ErrorWrapper_t746015156::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (ExternalException_t2046867550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (GCHandle_t236533809)+ sizeof (RuntimeObject), sizeof(GCHandle_t236533809 ), 0, 0 };
extern const int32_t g_FieldOffsetTable397[1] = 
{
	GCHandle_t236533809::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (GCHandleType_t1492727449)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable398[5] = 
{
	GCHandleType_t1492727449::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (InterfaceTypeAttribute_t822749474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	InterfaceTypeAttribute_t822749474::get_offset_of_intType_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
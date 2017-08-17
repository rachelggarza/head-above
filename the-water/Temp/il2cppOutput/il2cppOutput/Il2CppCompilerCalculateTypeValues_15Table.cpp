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
struct ByteU5BU5D_t1911797546;
// System.Net.NetworkInformation.NetworkAddressChangedEventHandler
struct NetworkAddressChangedEventHandler_t322091467;
// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler
struct NetworkAvailabilityChangedEventHandler_t3888596048;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2277986120;
// System.Collections.Generic.List`1<System.Net.NetworkInformation.MulticastIPAddressInformation>
struct List_1_t663405119;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3239153688;
// System.Net.Security.SslStream
struct SslStream_t2885149954;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t554737672;
// System.Net.IPAddress
struct IPAddress_t1246319067;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t1732441359;
// System.Net.NetworkInformation.Ping
struct Ping_t3141386893;
// System.String
struct String_t;
// System.Version
struct Version_t841222345;
// System.IntPtr[]
struct IntPtrU5BU5D_t1620385550;
// System.Collections.IDictionary
struct IDictionary_t2801550460;
// System.Collections.Generic.List`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct List_1_t993230339;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t466862868;
// System.IO.Stream
struct Stream_t694873001;
// System.Void
struct Void_t1241996066;
// System.Char[]
struct CharU5BU5D_t3721686741;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1809214059;
// System.ComponentModel.ISite
struct ISite_t2411418129;
// System.Exception
struct Exception_t3320833656;
// System.Byte
struct Byte_t2684048203;
// System.Double
struct Double_t3560003413;
// System.UInt16
struct UInt16_t3777341819;
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t732300543;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1950950845;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t1275494983;
// System.UInt32[]
struct UInt32U5BU5D_t1901745880;
// System.Net.NetworkInformation.PingReply
struct PingReply_t927847823;
// System.String[]
struct StringU5BU5D_t443946311;
// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t1633535364;
// System.Net.NetworkInformation.PingCompletedEventHandler
struct PingCompletedEventHandler_t819453210;
// System.Net.IPEndPoint
struct IPEndPoint_t680189499;
// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t1683438693;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3360711166;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t2214060586;
// System.Net.Sockets.Socket
struct Socket_t466607635;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t4248672084;
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t186924645;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1021693654;




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
#ifndef ICMPMESSAGE_T713404167_H
#define ICMPMESSAGE_T713404167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/IcmpMessage
struct  IcmpMessage_t713404167  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.Ping/IcmpMessage::bytes
	ByteU5BU5D_t1911797546* ___bytes_0;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(IcmpMessage_t713404167, ___bytes_0)); }
	inline ByteU5BU5D_t1911797546* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5D_t1911797546** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5D_t1911797546* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICMPMESSAGE_T713404167_H
#ifndef NETWORKCHANGE_T1581737281_H
#define NETWORKCHANGE_T1581737281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkChange
struct  NetworkChange_t1581737281  : public RuntimeObject
{
public:

public:
};

struct NetworkChange_t1581737281_StaticFields
{
public:
	// System.Net.NetworkInformation.NetworkAddressChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAddressChanged
	NetworkAddressChangedEventHandler_t322091467 * ___NetworkAddressChanged_0;
	// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAvailabilityChanged
	NetworkAvailabilityChangedEventHandler_t3888596048 * ___NetworkAvailabilityChanged_1;

public:
	inline static int32_t get_offset_of_NetworkAddressChanged_0() { return static_cast<int32_t>(offsetof(NetworkChange_t1581737281_StaticFields, ___NetworkAddressChanged_0)); }
	inline NetworkAddressChangedEventHandler_t322091467 * get_NetworkAddressChanged_0() const { return ___NetworkAddressChanged_0; }
	inline NetworkAddressChangedEventHandler_t322091467 ** get_address_of_NetworkAddressChanged_0() { return &___NetworkAddressChanged_0; }
	inline void set_NetworkAddressChanged_0(NetworkAddressChangedEventHandler_t322091467 * value)
	{
		___NetworkAddressChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___NetworkAddressChanged_0), value);
	}

	inline static int32_t get_offset_of_NetworkAvailabilityChanged_1() { return static_cast<int32_t>(offsetof(NetworkChange_t1581737281_StaticFields, ___NetworkAvailabilityChanged_1)); }
	inline NetworkAvailabilityChangedEventHandler_t3888596048 * get_NetworkAvailabilityChanged_1() const { return ___NetworkAvailabilityChanged_1; }
	inline NetworkAvailabilityChangedEventHandler_t3888596048 ** get_address_of_NetworkAvailabilityChanged_1() { return &___NetworkAvailabilityChanged_1; }
	inline void set_NetworkAvailabilityChanged_1(NetworkAvailabilityChangedEventHandler_t3888596048 * value)
	{
		___NetworkAvailabilityChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___NetworkAvailabilityChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCHANGE_T1581737281_H
#ifndef MARSHALBYREFOBJECT_T2407046294_H
#define MARSHALBYREFOBJECT_T2407046294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2407046294  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2277986120 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2407046294, ____identity_0)); }
	inline ServerIdentity_t2277986120 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2277986120 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2277986120 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2407046294_H
#ifndef MULTICASTIPADDRESSINFORMATIONCOLLECTION_T3414323632_H
#define MULTICASTIPADDRESSINFORMATIONCOLLECTION_T3414323632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct  MulticastIPAddressInformationCollection_t3414323632  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Net.NetworkInformation.MulticastIPAddressInformation> System.Net.NetworkInformation.MulticastIPAddressInformationCollection::list
	List_1_t663405119 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationCollection_t3414323632, ___list_0)); }
	inline List_1_t663405119 * get_list_0() const { return ___list_0; }
	inline List_1_t663405119 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t663405119 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATIONCOLLECTION_T3414323632_H
#ifndef U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T1402348074_H
#define U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T1402348074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7
struct  U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1402348074  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::clientCertificates
	X509CertificateCollection_t3239153688 * ___clientCertificates_0;
	// System.Net.Security.SslStream System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::<>f__this
	SslStream_t2885149954 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_clientCertificates_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1402348074, ___clientCertificates_0)); }
	inline X509CertificateCollection_t3239153688 * get_clientCertificates_0() const { return ___clientCertificates_0; }
	inline X509CertificateCollection_t3239153688 ** get_address_of_clientCertificates_0() { return &___clientCertificates_0; }
	inline void set_clientCertificates_0(X509CertificateCollection_t3239153688 * value)
	{
		___clientCertificates_0 = value;
		Il2CppCodeGenWriteBarrier((&___clientCertificates_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1402348074, ___U3CU3Ef__this_1)); }
	inline SslStream_t2885149954 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline SslStream_t2885149954 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(SslStream_t2885149954 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T1402348074_H
#ifndef U3CBEGINAUTHENTICATEASSERVERU3EC__ANONSTOREY8_T957658941_H
#define U3CBEGINAUTHENTICATEASSERVERU3EC__ANONSTOREY8_T957658941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream/<BeginAuthenticateAsServer>c__AnonStorey8
struct  U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t957658941  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream/<BeginAuthenticateAsServer>c__AnonStorey8::serverCertificate
	X509Certificate_t554737672 * ___serverCertificate_0;
	// System.Net.Security.SslStream System.Net.Security.SslStream/<BeginAuthenticateAsServer>c__AnonStorey8::<>f__this
	SslStream_t2885149954 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_serverCertificate_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t957658941, ___serverCertificate_0)); }
	inline X509Certificate_t554737672 * get_serverCertificate_0() const { return ___serverCertificate_0; }
	inline X509Certificate_t554737672 ** get_address_of_serverCertificate_0() { return &___serverCertificate_0; }
	inline void set_serverCertificate_0(X509Certificate_t554737672 * value)
	{
		___serverCertificate_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverCertificate_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t957658941, ___U3CU3Ef__this_1)); }
	inline SslStream_t2885149954 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline SslStream_t2885149954 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(SslStream_t2885149954 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBEGINAUTHENTICATEASSERVERU3EC__ANONSTOREY8_T957658941_H
#ifndef U3CSENDASYNCU3EC__ANONSTOREY6_T3414844710_H
#define U3CSENDASYNCU3EC__ANONSTOREY6_T3414844710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6
struct  U3CSendAsyncU3Ec__AnonStorey6_t3414844710  : public RuntimeObject
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::address
	IPAddress_t1246319067 * ___address_0;
	// System.Int32 System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::timeout
	int32_t ___timeout_1;
	// System.Byte[] System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::buffer
	ByteU5BU5D_t1911797546* ___buffer_2;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::options
	PingOptions_t1732441359 * ___options_3;
	// System.Net.NetworkInformation.Ping System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::<>f__this
	Ping_t3141386893 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t3414844710, ___address_0)); }
	inline IPAddress_t1246319067 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1246319067 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1246319067 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_timeout_1() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t3414844710, ___timeout_1)); }
	inline int32_t get_timeout_1() const { return ___timeout_1; }
	inline int32_t* get_address_of_timeout_1() { return &___timeout_1; }
	inline void set_timeout_1(int32_t value)
	{
		___timeout_1 = value;
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t3414844710, ___buffer_2)); }
	inline ByteU5BU5D_t1911797546* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t1911797546** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t1911797546* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_2), value);
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t3414844710, ___options_3)); }
	inline PingOptions_t1732441359 * get_options_3() const { return ___options_3; }
	inline PingOptions_t1732441359 ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(PingOptions_t1732441359 * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier((&___options_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t3414844710, ___U3CU3Ef__this_4)); }
	inline Ping_t3141386893 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline Ping_t3141386893 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(Ping_t3141386893 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDASYNCU3EC__ANONSTOREY6_T3414844710_H
#ifndef IPV6MULTICASTOPTION_T3527735721_H
#define IPV6MULTICASTOPTION_T3527735721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPv6MulticastOption
struct  IPv6MulticastOption_t3527735721  : public RuntimeObject
{
public:
	// System.Net.IPAddress System.Net.Sockets.IPv6MulticastOption::group
	IPAddress_t1246319067 * ___group_0;
	// System.Int64 System.Net.Sockets.IPv6MulticastOption::ifIndex
	int64_t ___ifIndex_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(IPv6MulticastOption_t3527735721, ___group_0)); }
	inline IPAddress_t1246319067 * get_group_0() const { return ___group_0; }
	inline IPAddress_t1246319067 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(IPAddress_t1246319067 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ifIndex_1() { return static_cast<int32_t>(offsetof(IPv6MulticastOption_t3527735721, ___ifIndex_1)); }
	inline int64_t get_ifIndex_1() const { return ___ifIndex_1; }
	inline int64_t* get_address_of_ifIndex_1() { return &___ifIndex_1; }
	inline void set_ifIndex_1(int64_t value)
	{
		___ifIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6MULTICASTOPTION_T3527735721_H
#ifndef LINGEROPTION_T2103409930_H
#define LINGEROPTION_T2103409930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.LingerOption
struct  LingerOption_t2103409930  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::seconds
	int32_t ___seconds_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t2103409930, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_seconds_1() { return static_cast<int32_t>(offsetof(LingerOption_t2103409930, ___seconds_1)); }
	inline int32_t get_seconds_1() const { return ___seconds_1; }
	inline int32_t* get_address_of_seconds_1() { return &___seconds_1; }
	inline void set_seconds_1(int32_t value)
	{
		___seconds_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINGEROPTION_T2103409930_H
#ifndef MULTICASTOPTION_T1308785084_H
#define MULTICASTOPTION_T1308785084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t1308785084  : public RuntimeObject
{
public:
	// System.Net.IPAddress System.Net.Sockets.MulticastOption::group
	IPAddress_t1246319067 * ___group_0;
	// System.Net.IPAddress System.Net.Sockets.MulticastOption::local
	IPAddress_t1246319067 * ___local_1;
	// System.Int32 System.Net.Sockets.MulticastOption::iface_index
	int32_t ___iface_index_2;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(MulticastOption_t1308785084, ___group_0)); }
	inline IPAddress_t1246319067 * get_group_0() const { return ___group_0; }
	inline IPAddress_t1246319067 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(IPAddress_t1246319067 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_local_1() { return static_cast<int32_t>(offsetof(MulticastOption_t1308785084, ___local_1)); }
	inline IPAddress_t1246319067 * get_local_1() const { return ___local_1; }
	inline IPAddress_t1246319067 ** get_address_of_local_1() { return &___local_1; }
	inline void set_local_1(IPAddress_t1246319067 * value)
	{
		___local_1 = value;
		Il2CppCodeGenWriteBarrier((&___local_1), value);
	}

	inline static int32_t get_offset_of_iface_index_2() { return static_cast<int32_t>(offsetof(MulticastOption_t1308785084, ___iface_index_2)); }
	inline int32_t get_iface_index_2() const { return ___iface_index_2; }
	inline int32_t* get_address_of_iface_index_2() { return &___iface_index_2; }
	inline void set_iface_index_2(int32_t value)
	{
		___iface_index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTOPTION_T1308785084_H
#ifndef TIMEOUT_T933903443_H
#define TIMEOUT_T933903443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream/Timeout
struct  Timeout_t933903443  : public RuntimeObject
{
public:

public:
};

struct Timeout_t933903443_StaticFields
{
public:
	// System.Single System.Net.Sockets.NetworkStream/Timeout::Infinite
	float ___Infinite_0;

public:
	inline static int32_t get_offset_of_Infinite_0() { return static_cast<int32_t>(offsetof(Timeout_t933903443_StaticFields, ___Infinite_0)); }
	inline float get_Infinite_0() const { return ___Infinite_0; }
	inline float* get_address_of_Infinite_0() { return &___Infinite_0; }
	inline void set_Infinite_0(float value)
	{
		___Infinite_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUT_T933903443_H
#ifndef SENDPACKETSELEMENT_T1089969814_H
#define SENDPACKETSELEMENT_T1089969814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SendPacketsElement
struct  SendPacketsElement_t1089969814  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.Sockets.SendPacketsElement::<Buffer>k__BackingField
	ByteU5BU5D_t1911797546* ___U3CBufferU3Ek__BackingField_0;
	// System.Int32 System.Net.Sockets.SendPacketsElement::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_1;
	// System.Boolean System.Net.Sockets.SendPacketsElement::<EndOfPacket>k__BackingField
	bool ___U3CEndOfPacketU3Ek__BackingField_2;
	// System.String System.Net.Sockets.SendPacketsElement::<FilePath>k__BackingField
	String_t* ___U3CFilePathU3Ek__BackingField_3;
	// System.Int32 System.Net.Sockets.SendPacketsElement::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CBufferU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SendPacketsElement_t1089969814, ___U3CBufferU3Ek__BackingField_0)); }
	inline ByteU5BU5D_t1911797546* get_U3CBufferU3Ek__BackingField_0() const { return ___U3CBufferU3Ek__BackingField_0; }
	inline ByteU5BU5D_t1911797546** get_address_of_U3CBufferU3Ek__BackingField_0() { return &___U3CBufferU3Ek__BackingField_0; }
	inline void set_U3CBufferU3Ek__BackingField_0(ByteU5BU5D_t1911797546* value)
	{
		___U3CBufferU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBufferU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SendPacketsElement_t1089969814, ___U3CCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CCountU3Ek__BackingField_1() const { return ___U3CCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_1() { return &___U3CCountU3Ek__BackingField_1; }
	inline void set_U3CCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEndOfPacketU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SendPacketsElement_t1089969814, ___U3CEndOfPacketU3Ek__BackingField_2)); }
	inline bool get_U3CEndOfPacketU3Ek__BackingField_2() const { return ___U3CEndOfPacketU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CEndOfPacketU3Ek__BackingField_2() { return &___U3CEndOfPacketU3Ek__BackingField_2; }
	inline void set_U3CEndOfPacketU3Ek__BackingField_2(bool value)
	{
		___U3CEndOfPacketU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFilePathU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SendPacketsElement_t1089969814, ___U3CFilePathU3Ek__BackingField_3)); }
	inline String_t* get_U3CFilePathU3Ek__BackingField_3() const { return ___U3CFilePathU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CFilePathU3Ek__BackingField_3() { return &___U3CFilePathU3Ek__BackingField_3; }
	inline void set_U3CFilePathU3Ek__BackingField_3(String_t* value)
	{
		___U3CFilePathU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFilePathU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SendPacketsElement_t1089969814, ___U3COffsetU3Ek__BackingField_4)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_4() const { return ___U3COffsetU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_4() { return &___U3COffsetU3Ek__BackingField_4; }
	inline void set_U3COffsetU3Ek__BackingField_4(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDPACKETSELEMENT_T1089969814_H
#ifndef NETWORKINTERFACE_T1788753897_H
#define NETWORKINTERFACE_T1788753897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterface
struct  NetworkInterface_t1788753897  : public RuntimeObject
{
public:

public:
};

struct NetworkInterface_t1788753897_StaticFields
{
public:
	// System.Version System.Net.NetworkInformation.NetworkInterface::windowsVer51
	Version_t841222345 * ___windowsVer51_0;
	// System.Boolean System.Net.NetworkInformation.NetworkInterface::runningOnUnix
	bool ___runningOnUnix_1;

public:
	inline static int32_t get_offset_of_windowsVer51_0() { return static_cast<int32_t>(offsetof(NetworkInterface_t1788753897_StaticFields, ___windowsVer51_0)); }
	inline Version_t841222345 * get_windowsVer51_0() const { return ___windowsVer51_0; }
	inline Version_t841222345 ** get_address_of_windowsVer51_0() { return &___windowsVer51_0; }
	inline void set_windowsVer51_0(Version_t841222345 * value)
	{
		___windowsVer51_0 = value;
		Il2CppCodeGenWriteBarrier((&___windowsVer51_0), value);
	}

	inline static int32_t get_offset_of_runningOnUnix_1() { return static_cast<int32_t>(offsetof(NetworkInterface_t1788753897_StaticFields, ___runningOnUnix_1)); }
	inline bool get_runningOnUnix_1() const { return ___runningOnUnix_1; }
	inline bool* get_address_of_runningOnUnix_1() { return &___runningOnUnix_1; }
	inline void set_runningOnUnix_1(bool value)
	{
		___runningOnUnix_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACE_T1788753897_H
#ifndef VALUETYPE_T2885800788_H
#define VALUETYPE_T2885800788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2885800788  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2885800788_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2885800788_marshaled_com
{
};
#endif // VALUETYPE_T2885800788_H
#ifndef TCPSTATISTICS_T2631061388_H
#define TCPSTATISTICS_T2631061388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpStatistics
struct  TcpStatistics_t2631061388  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPSTATISTICS_T2631061388_H
#ifndef IPADDRESSINFORMATION_T3314592653_H
#define IPADDRESSINFORMATION_T3314592653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPAddressInformation
struct  IPAddressInformation_t3314592653  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESSINFORMATION_T3314592653_H
#ifndef EVENTARGS_T1769155655_H
#define EVENTARGS_T1769155655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1769155655  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1769155655_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1769155655 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1769155655_StaticFields, ___Empty_0)); }
	inline EventArgs_t1769155655 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1769155655 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1769155655 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1769155655_H
#ifndef EXCEPTION_T3320833656_H
#define EXCEPTION_T3320833656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3320833656  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1620385550* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3320833656 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1620385550* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1620385550** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1620385550* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___inner_exception_1)); }
	inline Exception_t3320833656 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3320833656 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3320833656 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3320833656, ____data_10)); }
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
#endif // EXCEPTION_T3320833656_H
#ifndef PHYSICALADDRESS_T3400300738_H
#define PHYSICALADDRESS_T3400300738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PhysicalAddress
struct  PhysicalAddress_t3400300738  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::bytes
	ByteU5BU5D_t1911797546* ___bytes_2;

public:
	inline static int32_t get_offset_of_bytes_2() { return static_cast<int32_t>(offsetof(PhysicalAddress_t3400300738, ___bytes_2)); }
	inline ByteU5BU5D_t1911797546* get_bytes_2() const { return ___bytes_2; }
	inline ByteU5BU5D_t1911797546** get_address_of_bytes_2() { return &___bytes_2; }
	inline void set_bytes_2(ByteU5BU5D_t1911797546* value)
	{
		___bytes_2 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_2), value);
	}
};

struct PhysicalAddress_t3400300738_StaticFields
{
public:
	// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::None
	PhysicalAddress_t3400300738 * ___None_1;

public:
	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(PhysicalAddress_t3400300738_StaticFields, ___None_1)); }
	inline PhysicalAddress_t3400300738 * get_None_1() const { return ___None_1; }
	inline PhysicalAddress_t3400300738 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(PhysicalAddress_t3400300738 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICALADDRESS_T3400300738_H
#ifndef TCPCONNECTIONINFORMATION_T861646105_H
#define TCPCONNECTIONINFORMATION_T861646105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpConnectionInformation
struct  TcpConnectionInformation_t861646105  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCONNECTIONINFORMATION_T861646105_H
#ifndef ICMPV6MESSAGETYPES_T3523028033_H
#define ICMPV6MESSAGETYPES_T3523028033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IcmpV6MessageTypes
struct  IcmpV6MessageTypes_t3523028033  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICMPV6MESSAGETYPES_T3523028033_H
#ifndef PINGOPTIONS_T1732441359_H
#define PINGOPTIONS_T1732441359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingOptions
struct  PingOptions_t1732441359  : public RuntimeObject
{
public:
	// System.Int32 System.Net.NetworkInformation.PingOptions::ttl
	int32_t ___ttl_0;
	// System.Boolean System.Net.NetworkInformation.PingOptions::dont_fragment
	bool ___dont_fragment_1;

public:
	inline static int32_t get_offset_of_ttl_0() { return static_cast<int32_t>(offsetof(PingOptions_t1732441359, ___ttl_0)); }
	inline int32_t get_ttl_0() const { return ___ttl_0; }
	inline int32_t* get_address_of_ttl_0() { return &___ttl_0; }
	inline void set_ttl_0(int32_t value)
	{
		___ttl_0 = value;
	}

	inline static int32_t get_offset_of_dont_fragment_1() { return static_cast<int32_t>(offsetof(PingOptions_t1732441359, ___dont_fragment_1)); }
	inline bool get_dont_fragment_1() const { return ___dont_fragment_1; }
	inline bool* get_address_of_dont_fragment_1() { return &___dont_fragment_1; }
	inline void set_dont_fragment_1(bool value)
	{
		___dont_fragment_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGOPTIONS_T1732441359_H
#ifndef ICMPV6STATISTICS_T3221687514_H
#define ICMPV6STATISTICS_T3221687514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IcmpV6Statistics
struct  IcmpV6Statistics_t3221687514  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICMPV6STATISTICS_T3221687514_H
#ifndef STREAM_T694873001_H
#define STREAM_T694873001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t694873001  : public RuntimeObject
{
public:

public:
};

struct Stream_t694873001_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t694873001 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t694873001_StaticFields, ___Null_0)); }
	inline Stream_t694873001 * get_Null_0() const { return ___Null_0; }
	inline Stream_t694873001 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t694873001 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T694873001_H
#ifndef UDPSTATISTICS_T2566375289_H
#define UDPSTATISTICS_T2566375289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UdpStatistics
struct  UdpStatistics_t2566375289  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDPSTATISTICS_T2566375289_H
#ifndef UNICASTIPADDRESSINFORMATIONCOLLECTION_T221438517_H
#define UNICASTIPADDRESSINFORMATIONCOLLECTION_T221438517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct  UnicastIPAddressInformationCollection_t221438517  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::list
	List_1_t993230339 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationCollection_t221438517, ___list_0)); }
	inline List_1_t993230339 * get_list_0() const { return ___list_0; }
	inline List_1_t993230339 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t993230339 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICASTIPADDRESSINFORMATIONCOLLECTION_T221438517_H
#ifndef WIN32_MIB_TCPSTATS_T1348245028_H
#define WIN32_MIB_TCPSTATS_T1348245028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_TCPSTATS
struct  Win32_MIB_TCPSTATS_t1348245028 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RtoAlgorithm
	uint32_t ___RtoAlgorithm_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RtoMin
	uint32_t ___RtoMin_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RtoMax
	uint32_t ___RtoMax_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::MaxConn
	uint32_t ___MaxConn_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::ActiveOpens
	uint32_t ___ActiveOpens_4;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::PassiveOpens
	uint32_t ___PassiveOpens_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::AttemptFails
	uint32_t ___AttemptFails_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::EstabResets
	uint32_t ___EstabResets_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::CurrEstab
	uint32_t ___CurrEstab_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::InSegs
	uint32_t ___InSegs_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::OutSegs
	uint32_t ___OutSegs_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RetransSegs
	uint32_t ___RetransSegs_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::InErrs
	uint32_t ___InErrs_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::OutRsts
	uint32_t ___OutRsts_13;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::NumConns
	uint32_t ___NumConns_14;

public:
	inline static int32_t get_offset_of_RtoAlgorithm_0() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___RtoAlgorithm_0)); }
	inline uint32_t get_RtoAlgorithm_0() const { return ___RtoAlgorithm_0; }
	inline uint32_t* get_address_of_RtoAlgorithm_0() { return &___RtoAlgorithm_0; }
	inline void set_RtoAlgorithm_0(uint32_t value)
	{
		___RtoAlgorithm_0 = value;
	}

	inline static int32_t get_offset_of_RtoMin_1() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___RtoMin_1)); }
	inline uint32_t get_RtoMin_1() const { return ___RtoMin_1; }
	inline uint32_t* get_address_of_RtoMin_1() { return &___RtoMin_1; }
	inline void set_RtoMin_1(uint32_t value)
	{
		___RtoMin_1 = value;
	}

	inline static int32_t get_offset_of_RtoMax_2() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___RtoMax_2)); }
	inline uint32_t get_RtoMax_2() const { return ___RtoMax_2; }
	inline uint32_t* get_address_of_RtoMax_2() { return &___RtoMax_2; }
	inline void set_RtoMax_2(uint32_t value)
	{
		___RtoMax_2 = value;
	}

	inline static int32_t get_offset_of_MaxConn_3() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___MaxConn_3)); }
	inline uint32_t get_MaxConn_3() const { return ___MaxConn_3; }
	inline uint32_t* get_address_of_MaxConn_3() { return &___MaxConn_3; }
	inline void set_MaxConn_3(uint32_t value)
	{
		___MaxConn_3 = value;
	}

	inline static int32_t get_offset_of_ActiveOpens_4() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___ActiveOpens_4)); }
	inline uint32_t get_ActiveOpens_4() const { return ___ActiveOpens_4; }
	inline uint32_t* get_address_of_ActiveOpens_4() { return &___ActiveOpens_4; }
	inline void set_ActiveOpens_4(uint32_t value)
	{
		___ActiveOpens_4 = value;
	}

	inline static int32_t get_offset_of_PassiveOpens_5() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___PassiveOpens_5)); }
	inline uint32_t get_PassiveOpens_5() const { return ___PassiveOpens_5; }
	inline uint32_t* get_address_of_PassiveOpens_5() { return &___PassiveOpens_5; }
	inline void set_PassiveOpens_5(uint32_t value)
	{
		___PassiveOpens_5 = value;
	}

	inline static int32_t get_offset_of_AttemptFails_6() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___AttemptFails_6)); }
	inline uint32_t get_AttemptFails_6() const { return ___AttemptFails_6; }
	inline uint32_t* get_address_of_AttemptFails_6() { return &___AttemptFails_6; }
	inline void set_AttemptFails_6(uint32_t value)
	{
		___AttemptFails_6 = value;
	}

	inline static int32_t get_offset_of_EstabResets_7() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___EstabResets_7)); }
	inline uint32_t get_EstabResets_7() const { return ___EstabResets_7; }
	inline uint32_t* get_address_of_EstabResets_7() { return &___EstabResets_7; }
	inline void set_EstabResets_7(uint32_t value)
	{
		___EstabResets_7 = value;
	}

	inline static int32_t get_offset_of_CurrEstab_8() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___CurrEstab_8)); }
	inline uint32_t get_CurrEstab_8() const { return ___CurrEstab_8; }
	inline uint32_t* get_address_of_CurrEstab_8() { return &___CurrEstab_8; }
	inline void set_CurrEstab_8(uint32_t value)
	{
		___CurrEstab_8 = value;
	}

	inline static int32_t get_offset_of_InSegs_9() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___InSegs_9)); }
	inline uint32_t get_InSegs_9() const { return ___InSegs_9; }
	inline uint32_t* get_address_of_InSegs_9() { return &___InSegs_9; }
	inline void set_InSegs_9(uint32_t value)
	{
		___InSegs_9 = value;
	}

	inline static int32_t get_offset_of_OutSegs_10() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___OutSegs_10)); }
	inline uint32_t get_OutSegs_10() const { return ___OutSegs_10; }
	inline uint32_t* get_address_of_OutSegs_10() { return &___OutSegs_10; }
	inline void set_OutSegs_10(uint32_t value)
	{
		___OutSegs_10 = value;
	}

	inline static int32_t get_offset_of_RetransSegs_11() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___RetransSegs_11)); }
	inline uint32_t get_RetransSegs_11() const { return ___RetransSegs_11; }
	inline uint32_t* get_address_of_RetransSegs_11() { return &___RetransSegs_11; }
	inline void set_RetransSegs_11(uint32_t value)
	{
		___RetransSegs_11 = value;
	}

	inline static int32_t get_offset_of_InErrs_12() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___InErrs_12)); }
	inline uint32_t get_InErrs_12() const { return ___InErrs_12; }
	inline uint32_t* get_address_of_InErrs_12() { return &___InErrs_12; }
	inline void set_InErrs_12(uint32_t value)
	{
		___InErrs_12 = value;
	}

	inline static int32_t get_offset_of_OutRsts_13() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___OutRsts_13)); }
	inline uint32_t get_OutRsts_13() const { return ___OutRsts_13; }
	inline uint32_t* get_address_of_OutRsts_13() { return &___OutRsts_13; }
	inline void set_OutRsts_13(uint32_t value)
	{
		___OutRsts_13 = value;
	}

	inline static int32_t get_offset_of_NumConns_14() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1348245028, ___NumConns_14)); }
	inline uint32_t get_NumConns_14() const { return ___NumConns_14; }
	inline uint32_t* get_address_of_NumConns_14() { return &___NumConns_14; }
	inline void set_NumConns_14(uint32_t value)
	{
		___NumConns_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIB_TCPSTATS_T1348245028_H
#ifndef MIBTCPSTATISTICS_T2385316820_H
#define MIBTCPSTATISTICS_T2385316820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibTcpStatistics
struct  MibTcpStatistics_t2385316820  : public TcpStatistics_t2631061388
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibTcpStatistics::dic
	StringDictionary_t466862868 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibTcpStatistics_t2385316820, ___dic_0)); }
	inline StringDictionary_t466862868 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t466862868 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t466862868 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBTCPSTATISTICS_T2385316820_H
#ifndef WIN32_MIB_UDPSTATS_T3110808585_H
#define WIN32_MIB_UDPSTATS_T3110808585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_UDPSTATS
struct  Win32_MIB_UDPSTATS_t3110808585 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::InDatagrams
	uint32_t ___InDatagrams_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::NoPorts
	uint32_t ___NoPorts_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::InErrors
	uint32_t ___InErrors_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::OutDatagrams
	uint32_t ___OutDatagrams_3;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::NumAddrs
	int32_t ___NumAddrs_4;

public:
	inline static int32_t get_offset_of_InDatagrams_0() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t3110808585, ___InDatagrams_0)); }
	inline uint32_t get_InDatagrams_0() const { return ___InDatagrams_0; }
	inline uint32_t* get_address_of_InDatagrams_0() { return &___InDatagrams_0; }
	inline void set_InDatagrams_0(uint32_t value)
	{
		___InDatagrams_0 = value;
	}

	inline static int32_t get_offset_of_NoPorts_1() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t3110808585, ___NoPorts_1)); }
	inline uint32_t get_NoPorts_1() const { return ___NoPorts_1; }
	inline uint32_t* get_address_of_NoPorts_1() { return &___NoPorts_1; }
	inline void set_NoPorts_1(uint32_t value)
	{
		___NoPorts_1 = value;
	}

	inline static int32_t get_offset_of_InErrors_2() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t3110808585, ___InErrors_2)); }
	inline uint32_t get_InErrors_2() const { return ___InErrors_2; }
	inline uint32_t* get_address_of_InErrors_2() { return &___InErrors_2; }
	inline void set_InErrors_2(uint32_t value)
	{
		___InErrors_2 = value;
	}

	inline static int32_t get_offset_of_OutDatagrams_3() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t3110808585, ___OutDatagrams_3)); }
	inline uint32_t get_OutDatagrams_3() const { return ___OutDatagrams_3; }
	inline uint32_t* get_address_of_OutDatagrams_3() { return &___OutDatagrams_3; }
	inline void set_OutDatagrams_3(uint32_t value)
	{
		___OutDatagrams_3 = value;
	}

	inline static int32_t get_offset_of_NumAddrs_4() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t3110808585, ___NumAddrs_4)); }
	inline int32_t get_NumAddrs_4() const { return ___NumAddrs_4; }
	inline int32_t* get_address_of_NumAddrs_4() { return &___NumAddrs_4; }
	inline void set_NumAddrs_4(int32_t value)
	{
		___NumAddrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIB_UDPSTATS_T3110808585_H
#ifndef UNICASTIPADDRESSINFORMATION_T25488820_H
#define UNICASTIPADDRESSINFORMATION_T25488820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformation
struct  UnicastIPAddressInformation_t25488820  : public IPAddressInformation_t3314592653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICASTIPADDRESSINFORMATION_T25488820_H
#ifndef IPPACKETINFORMATION_T994212700_H
#define IPPACKETINFORMATION_T994212700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPPacketInformation
struct  IPPacketInformation_t994212700 
{
public:
	// System.Net.IPAddress System.Net.Sockets.IPPacketInformation::address
	IPAddress_t1246319067 * ___address_0;
	// System.Int32 System.Net.Sockets.IPPacketInformation::iface
	int32_t ___iface_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPPacketInformation_t994212700, ___address_0)); }
	inline IPAddress_t1246319067 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1246319067 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1246319067 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_iface_1() { return static_cast<int32_t>(offsetof(IPPacketInformation_t994212700, ___iface_1)); }
	inline int32_t get_iface_1() const { return ___iface_1; }
	inline int32_t* get_address_of_iface_1() { return &___iface_1; }
	inline void set_iface_1(int32_t value)
	{
		___iface_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.IPPacketInformation
struct IPPacketInformation_t994212700_marshaled_pinvoke
{
	IPAddress_t1246319067 * ___address_0;
	int32_t ___iface_1;
};
// Native definition for COM marshalling of System.Net.Sockets.IPPacketInformation
struct IPPacketInformation_t994212700_marshaled_com
{
	IPAddress_t1246319067 * ___address_0;
	int32_t ___iface_1;
};
#endif // IPPACKETINFORMATION_T994212700_H
#ifndef ALIGNMENTUNION_T537482936_H
#define ALIGNMENTUNION_T537482936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t537482936 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t537482936, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t537482936, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t537482936, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T537482936_H
#ifndef WIN32LENGTHFLAGSUNION_T1550459756_H
#define WIN32LENGTHFLAGSUNION_T1550459756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32LengthFlagsUnion
struct  Win32LengthFlagsUnion_t1550459756 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Length
	uint32_t ___Length_2;
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Flags
	uint32_t ___Flags_3;

public:
	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1550459756, ___Length_2)); }
	inline uint32_t get_Length_2() const { return ___Length_2; }
	inline uint32_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(uint32_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_Flags_3() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1550459756, ___Flags_3)); }
	inline uint32_t get_Flags_3() const { return ___Flags_3; }
	inline uint32_t* get_address_of_Flags_3() { return &___Flags_3; }
	inline void set_Flags_3(uint32_t value)
	{
		___Flags_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32LENGTHFLAGSUNION_T1550459756_H
#ifndef AUTHENTICATEDSTREAM_T2751539955_H
#define AUTHENTICATEDSTREAM_T2751539955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t2751539955  : public Stream_t694873001
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t694873001 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t2751539955, ___innerStream_1)); }
	inline Stream_t694873001 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t694873001 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t694873001 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_leaveStreamOpen_2() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t2751539955, ___leaveStreamOpen_2)); }
	inline bool get_leaveStreamOpen_2() const { return ___leaveStreamOpen_2; }
	inline bool* get_address_of_leaveStreamOpen_2() { return &___leaveStreamOpen_2; }
	inline void set_leaveStreamOpen_2(bool value)
	{
		___leaveStreamOpen_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATEDSTREAM_T2751539955_H
#ifndef UINT32_T3016832693_H
#define UINT32_T3016832693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t3016832693 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t3016832693, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T3016832693_H
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
#ifndef BYTE_T2684048203_H
#define BYTE_T2684048203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t2684048203 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t2684048203, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T2684048203_H
#ifndef ENUM_T1268435862_H
#define ENUM_T1268435862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1268435862  : public ValueType_t2885800788
{
public:

public:
};

struct Enum_t1268435862_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3721686741* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1268435862_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3721686741* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3721686741** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3721686741* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1268435862_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1268435862_marshaled_com
{
};
#endif // ENUM_T1268435862_H
#ifndef COMPONENT_T861990167_H
#define COMPONENT_T861990167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t861990167  : public MarshalByRefObject_t2407046294
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1809214059 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t861990167, ___event_handlers_1)); }
	inline EventHandlerList_t1809214059 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1809214059 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1809214059 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t861990167, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t861990167, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T861990167_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T2037473441_H
#define ASYNCCOMPLETEDEVENTARGS_T2037473441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t2037473441  : public EventArgs_t1769155655
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t3320833656 * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2037473441, ____error_1)); }
	inline Exception_t3320833656 * get__error_1() const { return ____error_1; }
	inline Exception_t3320833656 ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t3320833656 * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2037473441, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2037473441, ____userState_3)); }
	inline RuntimeObject * get__userState_3() const { return ____userState_3; }
	inline RuntimeObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(RuntimeObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier((&____userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T2037473441_H
#ifndef CHAR_T1364681404_H
#define CHAR_T1364681404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t1364681404 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t1364681404, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t1364681404_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t1364681404_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t1364681404_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t1364681404_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t1364681404_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t1364681404_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t1364681404_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t1364681404_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T1364681404_H
#ifndef UNICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T3081499236_H
#define UNICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T3081499236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection
struct  UnicastIPAddressInformationImplCollection_t3081499236  : public UnicastIPAddressInformationCollection_t221438517
{
public:
	// System.Boolean System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::is_readonly
	bool ___is_readonly_2;

public:
	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationImplCollection_t3081499236, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}
};

struct UnicastIPAddressInformationImplCollection_t3081499236_StaticFields
{
public:
	// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::Empty
	UnicastIPAddressInformationImplCollection_t3081499236 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationImplCollection_t3081499236_StaticFields, ___Empty_1)); }
	inline UnicastIPAddressInformationImplCollection_t3081499236 * get_Empty_1() const { return ___Empty_1; }
	inline UnicastIPAddressInformationImplCollection_t3081499236 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(UnicastIPAddressInformationImplCollection_t3081499236 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T3081499236_H
#ifndef MIBUDPSTATISTICS_T2400994538_H
#define MIBUDPSTATISTICS_T2400994538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibUdpStatistics
struct  MibUdpStatistics_t2400994538  : public UdpStatistics_t2566375289
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibUdpStatistics::dic
	StringDictionary_t466862868 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibUdpStatistics_t2400994538, ___dic_0)); }
	inline StringDictionary_t466862868 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t466862868 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t466862868 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBUDPSTATISTICS_T2400994538_H
#ifndef SYSTEMEXCEPTION_T3966762165_H
#define SYSTEMEXCEPTION_T3966762165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3966762165  : public Exception_t3320833656
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3966762165_H
#ifndef MULTICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T2411369525_H
#define MULTICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T2411369525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection
struct  MulticastIPAddressInformationImplCollection_t2411369525  : public MulticastIPAddressInformationCollection_t3414323632
{
public:
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::is_readonly
	bool ___is_readonly_2;

public:
	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImplCollection_t2411369525, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}
};

struct MulticastIPAddressInformationImplCollection_t2411369525_StaticFields
{
public:
	// System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::Empty
	MulticastIPAddressInformationImplCollection_t2411369525 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImplCollection_t2411369525_StaticFields, ___Empty_1)); }
	inline MulticastIPAddressInformationImplCollection_t2411369525 * get_Empty_1() const { return ___Empty_1; }
	inline MulticastIPAddressInformationImplCollection_t2411369525 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(MulticastIPAddressInformationImplCollection_t2411369525 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T2411369525_H
#ifndef CAP_USER_DATA_T_T3609000153_H
#define CAP_USER_DATA_T_T3609000153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/cap_user_data_t
struct  cap_user_data_t_t3609000153 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::effective
	uint32_t ___effective_0;
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::permitted
	uint32_t ___permitted_1;
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::inheritable
	uint32_t ___inheritable_2;

public:
	inline static int32_t get_offset_of_effective_0() { return static_cast<int32_t>(offsetof(cap_user_data_t_t3609000153, ___effective_0)); }
	inline uint32_t get_effective_0() const { return ___effective_0; }
	inline uint32_t* get_address_of_effective_0() { return &___effective_0; }
	inline void set_effective_0(uint32_t value)
	{
		___effective_0 = value;
	}

	inline static int32_t get_offset_of_permitted_1() { return static_cast<int32_t>(offsetof(cap_user_data_t_t3609000153, ___permitted_1)); }
	inline uint32_t get_permitted_1() const { return ___permitted_1; }
	inline uint32_t* get_address_of_permitted_1() { return &___permitted_1; }
	inline void set_permitted_1(uint32_t value)
	{
		___permitted_1 = value;
	}

	inline static int32_t get_offset_of_inheritable_2() { return static_cast<int32_t>(offsetof(cap_user_data_t_t3609000153, ___inheritable_2)); }
	inline uint32_t get_inheritable_2() const { return ___inheritable_2; }
	inline uint32_t* get_address_of_inheritable_2() { return &___inheritable_2; }
	inline void set_inheritable_2(uint32_t value)
	{
		___inheritable_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAP_USER_DATA_T_T3609000153_H
#ifndef SOCKADDR_T3458098367_H
#define SOCKADDR_T3458098367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr
struct  sockaddr_t3458098367 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_len
	uint8_t ___sa_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_family
	uint8_t ___sa_family_1;

public:
	inline static int32_t get_offset_of_sa_len_0() { return static_cast<int32_t>(offsetof(sockaddr_t3458098367, ___sa_len_0)); }
	inline uint8_t get_sa_len_0() const { return ___sa_len_0; }
	inline uint8_t* get_address_of_sa_len_0() { return &___sa_len_0; }
	inline void set_sa_len_0(uint8_t value)
	{
		___sa_len_0 = value;
	}

	inline static int32_t get_offset_of_sa_family_1() { return static_cast<int32_t>(offsetof(sockaddr_t3458098367, ___sa_family_1)); }
	inline uint8_t get_sa_family_1() const { return ___sa_family_1; }
	inline uint8_t* get_address_of_sa_family_1() { return &___sa_family_1; }
	inline void set_sa_family_1(uint8_t value)
	{
		___sa_family_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_T3458098367_H
#ifndef NETWORKAVAILABILITYEVENTARGS_T4198220499_H
#define NETWORKAVAILABILITYEVENTARGS_T4198220499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkAvailabilityEventArgs
struct  NetworkAvailabilityEventArgs_t4198220499  : public EventArgs_t1769155655
{
public:
	// System.Boolean System.Net.NetworkInformation.NetworkAvailabilityEventArgs::available
	bool ___available_1;

public:
	inline static int32_t get_offset_of_available_1() { return static_cast<int32_t>(offsetof(NetworkAvailabilityEventArgs_t4198220499, ___available_1)); }
	inline bool get_available_1() const { return ___available_1; }
	inline bool* get_address_of_available_1() { return &___available_1; }
	inline void set_available_1(bool value)
	{
		___available_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKAVAILABILITYEVENTARGS_T4198220499_H
#ifndef SOCKADDR_IN_T614512486_H
#define SOCKADDR_IN_T614512486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in
struct  sockaddr_in_t614512486 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_len
	uint8_t ___sin_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_family
	uint8_t ___sin_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_port
	uint16_t ___sin_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_addr
	uint32_t ___sin_addr_3;

public:
	inline static int32_t get_offset_of_sin_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t614512486, ___sin_len_0)); }
	inline uint8_t get_sin_len_0() const { return ___sin_len_0; }
	inline uint8_t* get_address_of_sin_len_0() { return &___sin_len_0; }
	inline void set_sin_len_0(uint8_t value)
	{
		___sin_len_0 = value;
	}

	inline static int32_t get_offset_of_sin_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t614512486, ___sin_family_1)); }
	inline uint8_t get_sin_family_1() const { return ___sin_family_1; }
	inline uint8_t* get_address_of_sin_family_1() { return &___sin_family_1; }
	inline void set_sin_family_1(uint8_t value)
	{
		___sin_family_1 = value;
	}

	inline static int32_t get_offset_of_sin_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t614512486, ___sin_port_2)); }
	inline uint16_t get_sin_port_2() const { return ___sin_port_2; }
	inline uint16_t* get_address_of_sin_port_2() { return &___sin_port_2; }
	inline void set_sin_port_2(uint16_t value)
	{
		___sin_port_2 = value;
	}

	inline static int32_t get_offset_of_sin_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in_t614512486, ___sin_addr_3)); }
	inline uint32_t get_sin_addr_3() const { return ___sin_addr_3; }
	inline uint32_t* get_address_of_sin_addr_3() { return &___sin_addr_3; }
	inline void set_sin_addr_3(uint32_t value)
	{
		___sin_addr_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T614512486_H
#ifndef MULTICASTIPADDRESSINFORMATION_T3990630896_H
#define MULTICASTIPADDRESSINFORMATION_T3990630896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformation
struct  MulticastIPAddressInformation_t3990630896  : public IPAddressInformation_t3314592653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATION_T3990630896_H
#ifndef SOCKADDR_IN_T4028229695_H
#define SOCKADDR_IN_T4028229695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in
struct  sockaddr_in_t4028229695 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_family
	uint16_t ___sin_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_port
	uint16_t ___sin_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in::sin_addr
	uint32_t ___sin_addr_2;

public:
	inline static int32_t get_offset_of_sin_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t4028229695, ___sin_family_0)); }
	inline uint16_t get_sin_family_0() const { return ___sin_family_0; }
	inline uint16_t* get_address_of_sin_family_0() { return &___sin_family_0; }
	inline void set_sin_family_0(uint16_t value)
	{
		___sin_family_0 = value;
	}

	inline static int32_t get_offset_of_sin_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t4028229695, ___sin_port_1)); }
	inline uint16_t get_sin_port_1() const { return ___sin_port_1; }
	inline uint16_t* get_address_of_sin_port_1() { return &___sin_port_1; }
	inline void set_sin_port_1(uint16_t value)
	{
		___sin_port_1 = value;
	}

	inline static int32_t get_offset_of_sin_addr_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t4028229695, ___sin_addr_2)); }
	inline uint32_t get_sin_addr_2() const { return ___sin_addr_2; }
	inline uint32_t* get_address_of_sin_addr_2() { return &___sin_addr_2; }
	inline void set_sin_addr_2(uint32_t value)
	{
		___sin_addr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T4028229695_H
#ifndef MIBICMPV6STATISTICS_T766298242_H
#define MIBICMPV6STATISTICS_T766298242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIcmpV6Statistics
struct  MibIcmpV6Statistics_t766298242  : public IcmpV6Statistics_t3221687514
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIcmpV6Statistics::dic
	StringDictionary_t466862868 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibIcmpV6Statistics_t766298242, ___dic_0)); }
	inline StringDictionary_t466862868 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t466862868 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t466862868 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBICMPV6STATISTICS_T766298242_H
#ifndef WIN32_MIBICMPSTATS_T2795648086_H
#define WIN32_MIBICMPSTATS_T2795648086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIBICMPSTATS
struct  Win32_MIBICMPSTATS_t2795648086 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Msgs
	uint32_t ___Msgs_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Errors
	uint32_t ___Errors_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::DestUnreachs
	uint32_t ___DestUnreachs_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::TimeExcds
	uint32_t ___TimeExcds_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::ParmProbs
	uint32_t ___ParmProbs_4;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::SrcQuenchs
	uint32_t ___SrcQuenchs_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Redirects
	uint32_t ___Redirects_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Echos
	uint32_t ___Echos_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::EchoReps
	uint32_t ___EchoReps_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Timestamps
	uint32_t ___Timestamps_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::TimestampReps
	uint32_t ___TimestampReps_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::AddrMasks
	uint32_t ___AddrMasks_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::AddrMaskReps
	uint32_t ___AddrMaskReps_12;

public:
	inline static int32_t get_offset_of_Msgs_0() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___Msgs_0)); }
	inline uint32_t get_Msgs_0() const { return ___Msgs_0; }
	inline uint32_t* get_address_of_Msgs_0() { return &___Msgs_0; }
	inline void set_Msgs_0(uint32_t value)
	{
		___Msgs_0 = value;
	}

	inline static int32_t get_offset_of_Errors_1() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___Errors_1)); }
	inline uint32_t get_Errors_1() const { return ___Errors_1; }
	inline uint32_t* get_address_of_Errors_1() { return &___Errors_1; }
	inline void set_Errors_1(uint32_t value)
	{
		___Errors_1 = value;
	}

	inline static int32_t get_offset_of_DestUnreachs_2() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___DestUnreachs_2)); }
	inline uint32_t get_DestUnreachs_2() const { return ___DestUnreachs_2; }
	inline uint32_t* get_address_of_DestUnreachs_2() { return &___DestUnreachs_2; }
	inline void set_DestUnreachs_2(uint32_t value)
	{
		___DestUnreachs_2 = value;
	}

	inline static int32_t get_offset_of_TimeExcds_3() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___TimeExcds_3)); }
	inline uint32_t get_TimeExcds_3() const { return ___TimeExcds_3; }
	inline uint32_t* get_address_of_TimeExcds_3() { return &___TimeExcds_3; }
	inline void set_TimeExcds_3(uint32_t value)
	{
		___TimeExcds_3 = value;
	}

	inline static int32_t get_offset_of_ParmProbs_4() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___ParmProbs_4)); }
	inline uint32_t get_ParmProbs_4() const { return ___ParmProbs_4; }
	inline uint32_t* get_address_of_ParmProbs_4() { return &___ParmProbs_4; }
	inline void set_ParmProbs_4(uint32_t value)
	{
		___ParmProbs_4 = value;
	}

	inline static int32_t get_offset_of_SrcQuenchs_5() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___SrcQuenchs_5)); }
	inline uint32_t get_SrcQuenchs_5() const { return ___SrcQuenchs_5; }
	inline uint32_t* get_address_of_SrcQuenchs_5() { return &___SrcQuenchs_5; }
	inline void set_SrcQuenchs_5(uint32_t value)
	{
		___SrcQuenchs_5 = value;
	}

	inline static int32_t get_offset_of_Redirects_6() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___Redirects_6)); }
	inline uint32_t get_Redirects_6() const { return ___Redirects_6; }
	inline uint32_t* get_address_of_Redirects_6() { return &___Redirects_6; }
	inline void set_Redirects_6(uint32_t value)
	{
		___Redirects_6 = value;
	}

	inline static int32_t get_offset_of_Echos_7() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___Echos_7)); }
	inline uint32_t get_Echos_7() const { return ___Echos_7; }
	inline uint32_t* get_address_of_Echos_7() { return &___Echos_7; }
	inline void set_Echos_7(uint32_t value)
	{
		___Echos_7 = value;
	}

	inline static int32_t get_offset_of_EchoReps_8() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___EchoReps_8)); }
	inline uint32_t get_EchoReps_8() const { return ___EchoReps_8; }
	inline uint32_t* get_address_of_EchoReps_8() { return &___EchoReps_8; }
	inline void set_EchoReps_8(uint32_t value)
	{
		___EchoReps_8 = value;
	}

	inline static int32_t get_offset_of_Timestamps_9() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___Timestamps_9)); }
	inline uint32_t get_Timestamps_9() const { return ___Timestamps_9; }
	inline uint32_t* get_address_of_Timestamps_9() { return &___Timestamps_9; }
	inline void set_Timestamps_9(uint32_t value)
	{
		___Timestamps_9 = value;
	}

	inline static int32_t get_offset_of_TimestampReps_10() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___TimestampReps_10)); }
	inline uint32_t get_TimestampReps_10() const { return ___TimestampReps_10; }
	inline uint32_t* get_address_of_TimestampReps_10() { return &___TimestampReps_10; }
	inline void set_TimestampReps_10(uint32_t value)
	{
		___TimestampReps_10 = value;
	}

	inline static int32_t get_offset_of_AddrMasks_11() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___AddrMasks_11)); }
	inline uint32_t get_AddrMasks_11() const { return ___AddrMasks_11; }
	inline uint32_t* get_address_of_AddrMasks_11() { return &___AddrMasks_11; }
	inline void set_AddrMasks_11(uint32_t value)
	{
		___AddrMasks_11 = value;
	}

	inline static int32_t get_offset_of_AddrMaskReps_12() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t2795648086, ___AddrMaskReps_12)); }
	inline uint32_t get_AddrMaskReps_12() const { return ___AddrMaskReps_12; }
	inline uint32_t* get_address_of_AddrMaskReps_12() { return &___AddrMaskReps_12; }
	inline void set_AddrMaskReps_12(uint32_t value)
	{
		___AddrMaskReps_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIBICMPSTATS_T2795648086_H
#ifndef CAP_USER_HEADER_T_T312072441_H
#define CAP_USER_HEADER_T_T312072441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/cap_user_header_t
struct  cap_user_header_t_t312072441 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_header_t::version
	uint32_t ___version_0;
	// System.Int32 System.Net.NetworkInformation.Ping/cap_user_header_t::pid
	int32_t ___pid_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(cap_user_header_t_t312072441, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_pid_1() { return static_cast<int32_t>(offsetof(cap_user_header_t_t312072441, ___pid_1)); }
	inline int32_t get_pid_1() const { return ___pid_1; }
	inline int32_t* get_address_of_pid_1() { return &___pid_1; }
	inline void set_pid_1(int32_t value)
	{
		___pid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAP_USER_HEADER_T_T312072441_H
#ifndef NETWORKINFORMATIONEXCEPTION_T2838903247_H
#define NETWORKINFORMATIONEXCEPTION_T2838903247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInformationException
struct  NetworkInformationException_t2838903247  : public Exception_t3320833656
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInformationException::error_code
	int32_t ___error_code_11;

public:
	inline static int32_t get_offset_of_error_code_11() { return static_cast<int32_t>(offsetof(NetworkInformationException_t2838903247, ___error_code_11)); }
	inline int32_t get_error_code_11() const { return ___error_code_11; }
	inline int32_t* get_address_of_error_code_11() { return &___error_code_11; }
	inline void set_error_code_11(int32_t value)
	{
		___error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINFORMATIONEXCEPTION_T2838903247_H
#ifndef SSLSTREAM_T2885149954_H
#define SSLSTREAM_T2885149954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t2885149954  : public AuthenticatedStream_t2751539955
{
public:
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t732300543 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t1950950845 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t1275494983 * ___selection_callback_5;

public:
	inline static int32_t get_offset_of_ssl_stream_3() { return static_cast<int32_t>(offsetof(SslStream_t2885149954, ___ssl_stream_3)); }
	inline SslStreamBase_t732300543 * get_ssl_stream_3() const { return ___ssl_stream_3; }
	inline SslStreamBase_t732300543 ** get_address_of_ssl_stream_3() { return &___ssl_stream_3; }
	inline void set_ssl_stream_3(SslStreamBase_t732300543 * value)
	{
		___ssl_stream_3 = value;
		Il2CppCodeGenWriteBarrier((&___ssl_stream_3), value);
	}

	inline static int32_t get_offset_of_validation_callback_4() { return static_cast<int32_t>(offsetof(SslStream_t2885149954, ___validation_callback_4)); }
	inline RemoteCertificateValidationCallback_t1950950845 * get_validation_callback_4() const { return ___validation_callback_4; }
	inline RemoteCertificateValidationCallback_t1950950845 ** get_address_of_validation_callback_4() { return &___validation_callback_4; }
	inline void set_validation_callback_4(RemoteCertificateValidationCallback_t1950950845 * value)
	{
		___validation_callback_4 = value;
		Il2CppCodeGenWriteBarrier((&___validation_callback_4), value);
	}

	inline static int32_t get_offset_of_selection_callback_5() { return static_cast<int32_t>(offsetof(SslStream_t2885149954, ___selection_callback_5)); }
	inline LocalCertificateSelectionCallback_t1275494983 * get_selection_callback_5() const { return ___selection_callback_5; }
	inline LocalCertificateSelectionCallback_t1275494983 ** get_address_of_selection_callback_5() { return &___selection_callback_5; }
	inline void set_selection_callback_5(LocalCertificateSelectionCallback_t1275494983 * value)
	{
		___selection_callback_5 = value;
		Il2CppCodeGenWriteBarrier((&___selection_callback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAM_T2885149954_H
#ifndef MULTICASTIPADDRESSINFORMATIONIMPL_T1982907726_H
#define MULTICASTIPADDRESSINFORMATIONIMPL_T1982907726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformationImpl
struct  MulticastIPAddressInformationImpl_t1982907726  : public MulticastIPAddressInformation_t3990630896
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.MulticastIPAddressInformationImpl::address
	IPAddress_t1246319067 * ___address_0;
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::is_dns_eligible
	bool ___is_dns_eligible_1;
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::is_transient
	bool ___is_transient_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImpl_t1982907726, ___address_0)); }
	inline IPAddress_t1246319067 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1246319067 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1246319067 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_is_dns_eligible_1() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImpl_t1982907726, ___is_dns_eligible_1)); }
	inline bool get_is_dns_eligible_1() const { return ___is_dns_eligible_1; }
	inline bool* get_address_of_is_dns_eligible_1() { return &___is_dns_eligible_1; }
	inline void set_is_dns_eligible_1(bool value)
	{
		___is_dns_eligible_1 = value;
	}

	inline static int32_t get_offset_of_is_transient_2() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImpl_t1982907726, ___is_transient_2)); }
	inline bool get_is_transient_2() const { return ___is_transient_2; }
	inline bool* get_address_of_is_transient_2() { return &___is_transient_2; }
	inline void set_is_transient_2(bool value)
	{
		___is_transient_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATIONIMPL_T1982907726_H
#ifndef PROTECTIONLEVEL_T1125977288_H
#define PROTECTIONLEVEL_T1125977288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.ProtectionLevel
struct  ProtectionLevel_t1125977288 
{
public:
	// System.Int32 System.Net.Security.ProtectionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtectionLevel_t1125977288, ___value___1)); }
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
#endif // PROTECTIONLEVEL_T1125977288_H
#ifndef ADDRESSFAMILY_T3985073988_H
#define ADDRESSFAMILY_T3985073988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t3985073988 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t3985073988, ___value___1)); }
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
#endif // ADDRESSFAMILY_T3985073988_H
#ifndef IOCONTROLCODE_T4181008199_H
#define IOCONTROLCODE_T4181008199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IOControlCode
struct  IOControlCode_t4181008199 
{
public:
	// System.Int64 System.Net.Sockets.IOControlCode::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IOControlCode_t4181008199, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOCONTROLCODE_T4181008199_H
#ifndef MACOSARPHARDWARE_T2846532272_H
#define MACOSARPHARDWARE_T2846532272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsArpHardware
struct  MacOsArpHardware_t2846532272 
{
public:
	// System.Int32 System.Net.NetworkInformation.MacOsArpHardware::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MacOsArpHardware_t2846532272, ___value___1)); }
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
#endif // MACOSARPHARDWARE_T2846532272_H
#ifndef SOCKADDR_DL_T2923860787_H
#define SOCKADDR_DL_T2923860787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct  sockaddr_dl_t2923860787 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_len
	uint8_t ___sdl_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_family
	uint8_t ___sdl_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_index
	uint16_t ___sdl_index_2;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_type
	uint8_t ___sdl_type_3;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_nlen
	uint8_t ___sdl_nlen_4;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_alen
	uint8_t ___sdl_alen_5;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_slen
	uint8_t ___sdl_slen_6;
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_data
	ByteU5BU5D_t1911797546* ___sdl_data_7;

public:
	inline static int32_t get_offset_of_sdl_len_0() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_len_0)); }
	inline uint8_t get_sdl_len_0() const { return ___sdl_len_0; }
	inline uint8_t* get_address_of_sdl_len_0() { return &___sdl_len_0; }
	inline void set_sdl_len_0(uint8_t value)
	{
		___sdl_len_0 = value;
	}

	inline static int32_t get_offset_of_sdl_family_1() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_family_1)); }
	inline uint8_t get_sdl_family_1() const { return ___sdl_family_1; }
	inline uint8_t* get_address_of_sdl_family_1() { return &___sdl_family_1; }
	inline void set_sdl_family_1(uint8_t value)
	{
		___sdl_family_1 = value;
	}

	inline static int32_t get_offset_of_sdl_index_2() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_index_2)); }
	inline uint16_t get_sdl_index_2() const { return ___sdl_index_2; }
	inline uint16_t* get_address_of_sdl_index_2() { return &___sdl_index_2; }
	inline void set_sdl_index_2(uint16_t value)
	{
		___sdl_index_2 = value;
	}

	inline static int32_t get_offset_of_sdl_type_3() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_type_3)); }
	inline uint8_t get_sdl_type_3() const { return ___sdl_type_3; }
	inline uint8_t* get_address_of_sdl_type_3() { return &___sdl_type_3; }
	inline void set_sdl_type_3(uint8_t value)
	{
		___sdl_type_3 = value;
	}

	inline static int32_t get_offset_of_sdl_nlen_4() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_nlen_4)); }
	inline uint8_t get_sdl_nlen_4() const { return ___sdl_nlen_4; }
	inline uint8_t* get_address_of_sdl_nlen_4() { return &___sdl_nlen_4; }
	inline void set_sdl_nlen_4(uint8_t value)
	{
		___sdl_nlen_4 = value;
	}

	inline static int32_t get_offset_of_sdl_alen_5() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_alen_5)); }
	inline uint8_t get_sdl_alen_5() const { return ___sdl_alen_5; }
	inline uint8_t* get_address_of_sdl_alen_5() { return &___sdl_alen_5; }
	inline void set_sdl_alen_5(uint8_t value)
	{
		___sdl_alen_5 = value;
	}

	inline static int32_t get_offset_of_sdl_slen_6() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_slen_6)); }
	inline uint8_t get_sdl_slen_6() const { return ___sdl_slen_6; }
	inline uint8_t* get_address_of_sdl_slen_6() { return &___sdl_slen_6; }
	inline void set_sdl_slen_6(uint8_t value)
	{
		___sdl_slen_6 = value;
	}

	inline static int32_t get_offset_of_sdl_data_7() { return static_cast<int32_t>(offsetof(sockaddr_dl_t2923860787, ___sdl_data_7)); }
	inline ByteU5BU5D_t1911797546* get_sdl_data_7() const { return ___sdl_data_7; }
	inline ByteU5BU5D_t1911797546** get_address_of_sdl_data_7() { return &___sdl_data_7; }
	inline void set_sdl_data_7(ByteU5BU5D_t1911797546* value)
	{
		___sdl_data_7 = value;
		Il2CppCodeGenWriteBarrier((&___sdl_data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t2923860787_marshaled_pinvoke
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t ___sdl_data_7[12];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t2923860787_marshaled_com
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t ___sdl_data_7[12];
};
#endif // SOCKADDR_DL_T2923860787_H
#ifndef NEGOTIATESTREAM_T2274969796_H
#define NEGOTIATESTREAM_T2274969796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.NegotiateStream
struct  NegotiateStream_t2274969796  : public AuthenticatedStream_t2751539955
{
public:
	// System.Int32 System.Net.Security.NegotiateStream::readTimeout
	int32_t ___readTimeout_3;
	// System.Int32 System.Net.Security.NegotiateStream::writeTimeout
	int32_t ___writeTimeout_4;

public:
	inline static int32_t get_offset_of_readTimeout_3() { return static_cast<int32_t>(offsetof(NegotiateStream_t2274969796, ___readTimeout_3)); }
	inline int32_t get_readTimeout_3() const { return ___readTimeout_3; }
	inline int32_t* get_address_of_readTimeout_3() { return &___readTimeout_3; }
	inline void set_readTimeout_3(int32_t value)
	{
		___readTimeout_3 = value;
	}

	inline static int32_t get_offset_of_writeTimeout_4() { return static_cast<int32_t>(offsetof(NegotiateStream_t2274969796, ___writeTimeout_4)); }
	inline int32_t get_writeTimeout_4() const { return ___writeTimeout_4; }
	inline int32_t* get_address_of_writeTimeout_4() { return &___writeTimeout_4; }
	inline void set_writeTimeout_4(int32_t value)
	{
		___writeTimeout_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEGOTIATESTREAM_T2274969796_H
#ifndef IN6_ADDR_T3584574828_H
#define IN6_ADDR_T3584574828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.in6_addr
struct  in6_addr_t3584574828 
{
public:
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.in6_addr::u6_addr8
	ByteU5BU5D_t1911797546* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t3584574828, ___u6_addr8_0)); }
	inline ByteU5BU5D_t1911797546* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t1911797546** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t1911797546* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t3584574828_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t3584574828_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T3584574828_H
#ifndef SSLPOLICYERRORS_T2820001216_H
#define SSLPOLICYERRORS_T2820001216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2820001216 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2820001216, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T2820001216_H
#ifndef PROTOCOLTYPE_T3119533966_H
#define PROTOCOLTYPE_T3119533966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t3119533966 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolType_t3119533966, ___value___1)); }
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
#endif // PROTOCOLTYPE_T3119533966_H
#ifndef SELECTMODE_T3374635220_H
#define SELECTMODE_T3374635220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SelectMode
struct  SelectMode_t3374635220 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectMode_t3374635220, ___value___1)); }
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
#endif // SELECTMODE_T3374635220_H
#ifndef IFADDRS_T696232374_H
#define IFADDRS_T696232374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct  ifaddrs_t696232374 
{
public:
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_next
	IntPtr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_addr
	IntPtr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_netmask
	IntPtr_t ___ifa_netmask_4;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_dstaddr
	IntPtr_t ___ifa_dstaddr_5;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_data
	IntPtr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t696232374, ___ifa_next_0)); }
	inline IntPtr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline IntPtr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(IntPtr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t696232374, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t696232374, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t696232374, ___ifa_addr_3)); }
	inline IntPtr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline IntPtr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(IntPtr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t696232374, ___ifa_netmask_4)); }
	inline IntPtr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline IntPtr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(IntPtr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_dstaddr_5() { return static_cast<int32_t>(offsetof(ifaddrs_t696232374, ___ifa_dstaddr_5)); }
	inline IntPtr_t get_ifa_dstaddr_5() const { return ___ifa_dstaddr_5; }
	inline IntPtr_t* get_address_of_ifa_dstaddr_5() { return &___ifa_dstaddr_5; }
	inline void set_ifa_dstaddr_5(IntPtr_t value)
	{
		___ifa_dstaddr_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t696232374, ___ifa_data_6)); }
	inline IntPtr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline IntPtr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(IntPtr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t696232374_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t696232374_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T696232374_H
#ifndef LINUXARPHARDWARE_T1359242568_H
#define LINUXARPHARDWARE_T1359242568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxArpHardware
struct  LinuxArpHardware_t1359242568 
{
public:
	// System.Int32 System.Net.NetworkInformation.LinuxArpHardware::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LinuxArpHardware_t1359242568, ___value___1)); }
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
#endif // LINUXARPHARDWARE_T1359242568_H
#ifndef SOCKADDR_LL_T2837141694_H
#define SOCKADDR_LL_T2837141694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_ll
struct  sockaddr_ll_t2837141694 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_family
	uint16_t ___sll_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_protocol
	uint16_t ___sll_protocol_1;
	// System.Int32 System.Net.NetworkInformation.sockaddr_ll::sll_ifindex
	int32_t ___sll_ifindex_2;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_hatype
	uint16_t ___sll_hatype_3;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_pkttype
	uint8_t ___sll_pkttype_4;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_halen
	uint8_t ___sll_halen_5;
	// System.Byte[] System.Net.NetworkInformation.sockaddr_ll::sll_addr
	ByteU5BU5D_t1911797546* ___sll_addr_6;

public:
	inline static int32_t get_offset_of_sll_family_0() { return static_cast<int32_t>(offsetof(sockaddr_ll_t2837141694, ___sll_family_0)); }
	inline uint16_t get_sll_family_0() const { return ___sll_family_0; }
	inline uint16_t* get_address_of_sll_family_0() { return &___sll_family_0; }
	inline void set_sll_family_0(uint16_t value)
	{
		___sll_family_0 = value;
	}

	inline static int32_t get_offset_of_sll_protocol_1() { return static_cast<int32_t>(offsetof(sockaddr_ll_t2837141694, ___sll_protocol_1)); }
	inline uint16_t get_sll_protocol_1() const { return ___sll_protocol_1; }
	inline uint16_t* get_address_of_sll_protocol_1() { return &___sll_protocol_1; }
	inline void set_sll_protocol_1(uint16_t value)
	{
		___sll_protocol_1 = value;
	}

	inline static int32_t get_offset_of_sll_ifindex_2() { return static_cast<int32_t>(offsetof(sockaddr_ll_t2837141694, ___sll_ifindex_2)); }
	inline int32_t get_sll_ifindex_2() const { return ___sll_ifindex_2; }
	inline int32_t* get_address_of_sll_ifindex_2() { return &___sll_ifindex_2; }
	inline void set_sll_ifindex_2(int32_t value)
	{
		___sll_ifindex_2 = value;
	}

	inline static int32_t get_offset_of_sll_hatype_3() { return static_cast<int32_t>(offsetof(sockaddr_ll_t2837141694, ___sll_hatype_3)); }
	inline uint16_t get_sll_hatype_3() const { return ___sll_hatype_3; }
	inline uint16_t* get_address_of_sll_hatype_3() { return &___sll_hatype_3; }
	inline void set_sll_hatype_3(uint16_t value)
	{
		___sll_hatype_3 = value;
	}

	inline static int32_t get_offset_of_sll_pkttype_4() { return static_cast<int32_t>(offsetof(sockaddr_ll_t2837141694, ___sll_pkttype_4)); }
	inline uint8_t get_sll_pkttype_4() const { return ___sll_pkttype_4; }
	inline uint8_t* get_address_of_sll_pkttype_4() { return &___sll_pkttype_4; }
	inline void set_sll_pkttype_4(uint8_t value)
	{
		___sll_pkttype_4 = value;
	}

	inline static int32_t get_offset_of_sll_halen_5() { return static_cast<int32_t>(offsetof(sockaddr_ll_t2837141694, ___sll_halen_5)); }
	inline uint8_t get_sll_halen_5() const { return ___sll_halen_5; }
	inline uint8_t* get_address_of_sll_halen_5() { return &___sll_halen_5; }
	inline void set_sll_halen_5(uint8_t value)
	{
		___sll_halen_5 = value;
	}

	inline static int32_t get_offset_of_sll_addr_6() { return static_cast<int32_t>(offsetof(sockaddr_ll_t2837141694, ___sll_addr_6)); }
	inline ByteU5BU5D_t1911797546* get_sll_addr_6() const { return ___sll_addr_6; }
	inline ByteU5BU5D_t1911797546** get_address_of_sll_addr_6() { return &___sll_addr_6; }
	inline void set_sll_addr_6(ByteU5BU5D_t1911797546* value)
	{
		___sll_addr_6 = value;
		Il2CppCodeGenWriteBarrier((&___sll_addr_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t2837141694_marshaled_pinvoke
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t2837141694_marshaled_com
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
#endif // SOCKADDR_LL_T2837141694_H
#ifndef IN6_ADDR_T2494137227_H
#define IN6_ADDR_T2494137227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.in6_addr
struct  in6_addr_t2494137227 
{
public:
	// System.Byte[] System.Net.NetworkInformation.in6_addr::u6_addr8
	ByteU5BU5D_t1911797546* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t2494137227, ___u6_addr8_0)); }
	inline ByteU5BU5D_t1911797546* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t1911797546** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t1911797546* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t2494137227_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t2494137227_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T2494137227_H
#ifndef IFA_IFU_T1162969782_H
#define IFA_IFU_T1162969782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifa_ifu
struct  ifa_ifu_t1162969782 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_broadaddr
			IntPtr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntPtr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_dstaddr
			IntPtr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntPtr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_ifu_broadaddr_0() { return static_cast<int32_t>(offsetof(ifa_ifu_t1162969782, ___ifu_broadaddr_0)); }
	inline IntPtr_t get_ifu_broadaddr_0() const { return ___ifu_broadaddr_0; }
	inline IntPtr_t* get_address_of_ifu_broadaddr_0() { return &___ifu_broadaddr_0; }
	inline void set_ifu_broadaddr_0(IntPtr_t value)
	{
		___ifu_broadaddr_0 = value;
	}

	inline static int32_t get_offset_of_ifu_dstaddr_1() { return static_cast<int32_t>(offsetof(ifa_ifu_t1162969782, ___ifu_dstaddr_1)); }
	inline IntPtr_t get_ifu_dstaddr_1() const { return ___ifu_dstaddr_1; }
	inline IntPtr_t* get_address_of_ifu_dstaddr_1() { return &___ifu_dstaddr_1; }
	inline void set_ifu_dstaddr_1(IntPtr_t value)
	{
		___ifu_dstaddr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFA_IFU_T1162969782_H
#ifndef WIN32_MIBICMPSTATS_EX_T3168409432_H
#define WIN32_MIBICMPSTATS_EX_T3168409432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct  Win32_MIBICMPSTATS_EX_t3168409432 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Msgs
	uint32_t ___Msgs_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Errors
	uint32_t ___Errors_1;
	// System.UInt32[] System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Counts
	UInt32U5BU5D_t1901745880* ___Counts_2;

public:
	inline static int32_t get_offset_of_Msgs_0() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3168409432, ___Msgs_0)); }
	inline uint32_t get_Msgs_0() const { return ___Msgs_0; }
	inline uint32_t* get_address_of_Msgs_0() { return &___Msgs_0; }
	inline void set_Msgs_0(uint32_t value)
	{
		___Msgs_0 = value;
	}

	inline static int32_t get_offset_of_Errors_1() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3168409432, ___Errors_1)); }
	inline uint32_t get_Errors_1() const { return ___Errors_1; }
	inline uint32_t* get_address_of_Errors_1() { return &___Errors_1; }
	inline void set_Errors_1(uint32_t value)
	{
		___Errors_1 = value;
	}

	inline static int32_t get_offset_of_Counts_2() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3168409432, ___Counts_2)); }
	inline UInt32U5BU5D_t1901745880* get_Counts_2() const { return ___Counts_2; }
	inline UInt32U5BU5D_t1901745880** get_address_of_Counts_2() { return &___Counts_2; }
	inline void set_Counts_2(UInt32U5BU5D_t1901745880* value)
	{
		___Counts_2 = value;
		Il2CppCodeGenWriteBarrier((&___Counts_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct Win32_MIBICMPSTATS_EX_t3168409432_marshaled_pinvoke
{
	uint32_t ___Msgs_0;
	uint32_t ___Errors_1;
	uint32_t ___Counts_2[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct Win32_MIBICMPSTATS_EX_t3168409432_marshaled_com
{
	uint32_t ___Msgs_0;
	uint32_t ___Errors_1;
	uint32_t ___Counts_2[256];
};
#endif // WIN32_MIBICMPSTATS_EX_T3168409432_H
#ifndef INVALIDOPERATIONEXCEPTION_T2713628326_H
#define INVALIDOPERATIONEXCEPTION_T2713628326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t2713628326  : public SystemException_t3966762165
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T2713628326_H
#ifndef IPSTATUS_T634573473_H
#define IPSTATUS_T634573473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPStatus
struct  IPStatus_t634573473 
{
public:
	// System.Int32 System.Net.NetworkInformation.IPStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IPStatus_t634573473, ___value___1)); }
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
#endif // IPSTATUS_T634573473_H
#ifndef DUPLICATEADDRESSDETECTIONSTATE_T2370725145_H
#define DUPLICATEADDRESSDETECTIONSTATE_T2370725145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.DuplicateAddressDetectionState
struct  DuplicateAddressDetectionState_t2370725145 
{
public:
	// System.Int32 System.Net.NetworkInformation.DuplicateAddressDetectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DuplicateAddressDetectionState_t2370725145, ___value___1)); }
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
#endif // DUPLICATEADDRESSDETECTIONSTATE_T2370725145_H
#ifndef FILEACCESS_T3915851057_H
#define FILEACCESS_T3915851057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t3915851057 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t3915851057, ___value___1)); }
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
#endif // FILEACCESS_T3915851057_H
#ifndef PROTOCOLFAMILY_T4202596618_H
#define PROTOCOLFAMILY_T4202596618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolFamily
struct  ProtocolFamily_t4202596618 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolFamily_t4202596618, ___value___1)); }
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
#endif // PROTOCOLFAMILY_T4202596618_H
#ifndef PINGCOMPLETEDEVENTARGS_T4181080639_H
#define PINGCOMPLETEDEVENTARGS_T4181080639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingCompletedEventArgs
struct  PingCompletedEventArgs_t4181080639  : public AsyncCompletedEventArgs_t2037473441
{
public:
	// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.PingCompletedEventArgs::reply
	PingReply_t927847823 * ___reply_4;

public:
	inline static int32_t get_offset_of_reply_4() { return static_cast<int32_t>(offsetof(PingCompletedEventArgs_t4181080639, ___reply_4)); }
	inline PingReply_t927847823 * get_reply_4() const { return ___reply_4; }
	inline PingReply_t927847823 ** get_address_of_reply_4() { return &___reply_4; }
	inline void set_reply_4(PingReply_t927847823 * value)
	{
		___reply_4 = value;
		Il2CppCodeGenWriteBarrier((&___reply_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGCOMPLETEDEVENTARGS_T4181080639_H
#ifndef AUTHENTICATIONLEVEL_T1427068837_H
#define AUTHENTICATIONLEVEL_T1427068837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1427068837 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1427068837, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T1427068837_H
#ifndef WIN32_SOCKADDR_T3284582552_H
#define WIN32_SOCKADDR_T3284582552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKADDR
struct  Win32_SOCKADDR_t3284582552 
{
public:
	// System.UInt16 System.Net.NetworkInformation.Win32_SOCKADDR::AddressFamily
	uint16_t ___AddressFamily_0;
	// System.Byte[] System.Net.NetworkInformation.Win32_SOCKADDR::AddressData
	ByteU5BU5D_t1911797546* ___AddressData_1;

public:
	inline static int32_t get_offset_of_AddressFamily_0() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t3284582552, ___AddressFamily_0)); }
	inline uint16_t get_AddressFamily_0() const { return ___AddressFamily_0; }
	inline uint16_t* get_address_of_AddressFamily_0() { return &___AddressFamily_0; }
	inline void set_AddressFamily_0(uint16_t value)
	{
		___AddressFamily_0 = value;
	}

	inline static int32_t get_offset_of_AddressData_1() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t3284582552, ___AddressData_1)); }
	inline ByteU5BU5D_t1911797546* get_AddressData_1() const { return ___AddressData_1; }
	inline ByteU5BU5D_t1911797546** get_address_of_AddressData_1() { return &___AddressData_1; }
	inline void set_AddressData_1(ByteU5BU5D_t1911797546* value)
	{
		___AddressData_1 = value;
		Il2CppCodeGenWriteBarrier((&___AddressData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t3284582552_marshaled_pinvoke
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t3284582552_marshaled_com
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
#endif // WIN32_SOCKADDR_T3284582552_H
#ifndef PREFIXORIGIN_T663493939_H
#define PREFIXORIGIN_T663493939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PrefixOrigin
struct  PrefixOrigin_t663493939 
{
public:
	// System.Int32 System.Net.NetworkInformation.PrefixOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrefixOrigin_t663493939, ___value___1)); }
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
#endif // PREFIXORIGIN_T663493939_H
#ifndef SUFFIXORIGIN_T2253785573_H
#define SUFFIXORIGIN_T2253785573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.SuffixOrigin
struct  SuffixOrigin_t2253785573 
{
public:
	// System.Int32 System.Net.NetworkInformation.SuffixOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SuffixOrigin_t2253785573, ___value___1)); }
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
#endif // SUFFIXORIGIN_T2253785573_H
#ifndef PING_T3141386893_H
#define PING_T3141386893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping
struct  Ping_t3141386893  : public Component_t861990167
{
public:
	// System.ComponentModel.BackgroundWorker System.Net.NetworkInformation.Ping::worker
	BackgroundWorker_t1633535364 * ___worker_12;
	// System.Object System.Net.NetworkInformation.Ping::user_async_state
	RuntimeObject * ___user_async_state_13;
	// System.Net.NetworkInformation.PingCompletedEventHandler System.Net.NetworkInformation.Ping::PingCompleted
	PingCompletedEventHandler_t819453210 * ___PingCompleted_14;

public:
	inline static int32_t get_offset_of_worker_12() { return static_cast<int32_t>(offsetof(Ping_t3141386893, ___worker_12)); }
	inline BackgroundWorker_t1633535364 * get_worker_12() const { return ___worker_12; }
	inline BackgroundWorker_t1633535364 ** get_address_of_worker_12() { return &___worker_12; }
	inline void set_worker_12(BackgroundWorker_t1633535364 * value)
	{
		___worker_12 = value;
		Il2CppCodeGenWriteBarrier((&___worker_12), value);
	}

	inline static int32_t get_offset_of_user_async_state_13() { return static_cast<int32_t>(offsetof(Ping_t3141386893, ___user_async_state_13)); }
	inline RuntimeObject * get_user_async_state_13() const { return ___user_async_state_13; }
	inline RuntimeObject ** get_address_of_user_async_state_13() { return &___user_async_state_13; }
	inline void set_user_async_state_13(RuntimeObject * value)
	{
		___user_async_state_13 = value;
		Il2CppCodeGenWriteBarrier((&___user_async_state_13), value);
	}

	inline static int32_t get_offset_of_PingCompleted_14() { return static_cast<int32_t>(offsetof(Ping_t3141386893, ___PingCompleted_14)); }
	inline PingCompletedEventHandler_t819453210 * get_PingCompleted_14() const { return ___PingCompleted_14; }
	inline PingCompletedEventHandler_t819453210 ** get_address_of_PingCompleted_14() { return &___PingCompleted_14; }
	inline void set_PingCompleted_14(PingCompletedEventHandler_t819453210 * value)
	{
		___PingCompleted_14 = value;
		Il2CppCodeGenWriteBarrier((&___PingCompleted_14), value);
	}
};

struct Ping_t3141386893_StaticFields
{
public:
	// System.String[] System.Net.NetworkInformation.Ping::PingBinPaths
	StringU5BU5D_t443946311* ___PingBinPaths_8;
	// System.String System.Net.NetworkInformation.Ping::PingBinPath
	String_t* ___PingBinPath_9;
	// System.Byte[] System.Net.NetworkInformation.Ping::default_buffer
	ByteU5BU5D_t1911797546* ___default_buffer_10;
	// System.Boolean System.Net.NetworkInformation.Ping::canSendPrivileged
	bool ___canSendPrivileged_11;

public:
	inline static int32_t get_offset_of_PingBinPaths_8() { return static_cast<int32_t>(offsetof(Ping_t3141386893_StaticFields, ___PingBinPaths_8)); }
	inline StringU5BU5D_t443946311* get_PingBinPaths_8() const { return ___PingBinPaths_8; }
	inline StringU5BU5D_t443946311** get_address_of_PingBinPaths_8() { return &___PingBinPaths_8; }
	inline void set_PingBinPaths_8(StringU5BU5D_t443946311* value)
	{
		___PingBinPaths_8 = value;
		Il2CppCodeGenWriteBarrier((&___PingBinPaths_8), value);
	}

	inline static int32_t get_offset_of_PingBinPath_9() { return static_cast<int32_t>(offsetof(Ping_t3141386893_StaticFields, ___PingBinPath_9)); }
	inline String_t* get_PingBinPath_9() const { return ___PingBinPath_9; }
	inline String_t** get_address_of_PingBinPath_9() { return &___PingBinPath_9; }
	inline void set_PingBinPath_9(String_t* value)
	{
		___PingBinPath_9 = value;
		Il2CppCodeGenWriteBarrier((&___PingBinPath_9), value);
	}

	inline static int32_t get_offset_of_default_buffer_10() { return static_cast<int32_t>(offsetof(Ping_t3141386893_StaticFields, ___default_buffer_10)); }
	inline ByteU5BU5D_t1911797546* get_default_buffer_10() const { return ___default_buffer_10; }
	inline ByteU5BU5D_t1911797546** get_address_of_default_buffer_10() { return &___default_buffer_10; }
	inline void set_default_buffer_10(ByteU5BU5D_t1911797546* value)
	{
		___default_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_buffer_10), value);
	}

	inline static int32_t get_offset_of_canSendPrivileged_11() { return static_cast<int32_t>(offsetof(Ping_t3141386893_StaticFields, ___canSendPrivileged_11)); }
	inline bool get_canSendPrivileged_11() const { return ___canSendPrivileged_11; }
	inline bool* get_address_of_canSendPrivileged_11() { return &___canSendPrivileged_11; }
	inline void set_canSendPrivileged_11(bool value)
	{
		___canSendPrivileged_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PING_T3141386893_H
#ifndef TCPSTATE_T3726442284_H
#define TCPSTATE_T3726442284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpState
struct  TcpState_t3726442284 
{
public:
	// System.Int32 System.Net.NetworkInformation.TcpState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TcpState_t3726442284, ___value___1)); }
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
#endif // TCPSTATE_T3726442284_H
#ifndef OPERATIONALSTATUS_T2716097632_H
#define OPERATIONALSTATUS_T2716097632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2716097632 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperationalStatus_t2716097632, ___value___1)); }
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
#endif // OPERATIONALSTATUS_T2716097632_H
#ifndef NETWORKINTERFACETYPE_T2306629260_H
#define NETWORKINTERFACETYPE_T2306629260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t2306629260 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t2306629260, ___value___1)); }
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
#endif // NETWORKINTERFACETYPE_T2306629260_H
#ifndef WIN32TCPSTATISTICS_T4265221714_H
#define WIN32TCPSTATISTICS_T4265221714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32TcpStatistics
struct  Win32TcpStatistics_t4265221714  : public TcpStatistics_t2631061388
{
public:
	// System.Net.NetworkInformation.Win32_MIB_TCPSTATS System.Net.NetworkInformation.Win32TcpStatistics::info
	Win32_MIB_TCPSTATS_t1348245028  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32TcpStatistics_t4265221714, ___info_0)); }
	inline Win32_MIB_TCPSTATS_t1348245028  get_info_0() const { return ___info_0; }
	inline Win32_MIB_TCPSTATS_t1348245028 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_TCPSTATS_t1348245028  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32TCPSTATISTICS_T4265221714_H
#ifndef NETWORKINTERFACECOMPONENT_T3929417507_H
#define NETWORKINTERFACECOMPONENT_T3929417507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceComponent
struct  NetworkInterfaceComponent_t3929417507 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceComponent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkInterfaceComponent_t3929417507, ___value___1)); }
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
#endif // NETWORKINTERFACECOMPONENT_T3929417507_H
#ifndef WIN32_SOCKET_ADDRESS_T315120776_H
#define WIN32_SOCKET_ADDRESS_T315120776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct  Win32_SOCKET_ADDRESS_t315120776 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::Sockaddr
	IntPtr_t ___Sockaddr_1;
	// System.Int32 System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::SockaddrLength
	int32_t ___SockaddrLength_2;

public:
	inline static int32_t get_offset_of_Sockaddr_1() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t315120776, ___Sockaddr_1)); }
	inline IntPtr_t get_Sockaddr_1() const { return ___Sockaddr_1; }
	inline IntPtr_t* get_address_of_Sockaddr_1() { return &___Sockaddr_1; }
	inline void set_Sockaddr_1(IntPtr_t value)
	{
		___Sockaddr_1 = value;
	}

	inline static int32_t get_offset_of_SockaddrLength_2() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t315120776, ___SockaddrLength_2)); }
	inline int32_t get_SockaddrLength_2() const { return ___SockaddrLength_2; }
	inline int32_t* get_address_of_SockaddrLength_2() { return &___SockaddrLength_2; }
	inline void set_SockaddrLength_2(int32_t value)
	{
		___SockaddrLength_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_SOCKET_ADDRESS_T315120776_H
#ifndef LINUXUNICASTIPADDRESSINFORMATION_T797410516_H
#define LINUXUNICASTIPADDRESSINFORMATION_T797410516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
struct  LinuxUnicastIPAddressInformation_t797410516  : public UnicastIPAddressInformation_t25488820
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::address
	IPAddress_t1246319067 * ___address_0;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(LinuxUnicastIPAddressInformation_t797410516, ___address_0)); }
	inline IPAddress_t1246319067 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1246319067 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1246319067 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXUNICASTIPADDRESSINFORMATION_T797410516_H
#ifndef NETWORKINFORMATIONACCESS_T3759522151_H
#define NETWORKINFORMATIONACCESS_T3759522151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInformationAccess
struct  NetworkInformationAccess_t3759522151 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInformationAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkInformationAccess_t3759522151, ___value___1)); }
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
#endif // NETWORKINFORMATIONACCESS_T3759522151_H
#ifndef WIN32UDPSTATISTICS_T1776017683_H
#define WIN32UDPSTATISTICS_T1776017683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32UdpStatistics
struct  Win32UdpStatistics_t1776017683  : public UdpStatistics_t2566375289
{
public:
	// System.Net.NetworkInformation.Win32_MIB_UDPSTATS System.Net.NetworkInformation.Win32UdpStatistics::info
	Win32_MIB_UDPSTATS_t3110808585  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32UdpStatistics_t1776017683, ___info_0)); }
	inline Win32_MIB_UDPSTATS_t3110808585  get_info_0() const { return ___info_0; }
	inline Win32_MIB_UDPSTATS_t3110808585 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_UDPSTATS_t3110808585  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32UDPSTATISTICS_T1776017683_H
#ifndef WIN32_MIBICMPINFO_T806084661_H
#define WIN32_MIBICMPINFO_T806084661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIBICMPINFO
struct  Win32_MIBICMPINFO_t806084661 
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32_MIBICMPINFO::InStats
	Win32_MIBICMPSTATS_t2795648086  ___InStats_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32_MIBICMPINFO::OutStats
	Win32_MIBICMPSTATS_t2795648086  ___OutStats_1;

public:
	inline static int32_t get_offset_of_InStats_0() { return static_cast<int32_t>(offsetof(Win32_MIBICMPINFO_t806084661, ___InStats_0)); }
	inline Win32_MIBICMPSTATS_t2795648086  get_InStats_0() const { return ___InStats_0; }
	inline Win32_MIBICMPSTATS_t2795648086 * get_address_of_InStats_0() { return &___InStats_0; }
	inline void set_InStats_0(Win32_MIBICMPSTATS_t2795648086  value)
	{
		___InStats_0 = value;
	}

	inline static int32_t get_offset_of_OutStats_1() { return static_cast<int32_t>(offsetof(Win32_MIBICMPINFO_t806084661, ___OutStats_1)); }
	inline Win32_MIBICMPSTATS_t2795648086  get_OutStats_1() const { return ___OutStats_1; }
	inline Win32_MIBICMPSTATS_t2795648086 * get_address_of_OutStats_1() { return &___OutStats_1; }
	inline void set_OutStats_1(Win32_MIBICMPSTATS_t2795648086  value)
	{
		___OutStats_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIBICMPINFO_T806084661_H
#ifndef NETBIOSNODETYPE_T3335870477_H
#define NETBIOSNODETYPE_T3335870477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetBiosNodeType
struct  NetBiosNodeType_t3335870477 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetBiosNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetBiosNodeType_t3335870477, ___value___1)); }
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
#endif // NETBIOSNODETYPE_T3335870477_H
#ifndef WIN32_IP_ADDR_STRING_T1317420491_H
#define WIN32_IP_ADDR_STRING_T1317420491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t1317420491 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	IntPtr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1317420491, ___Next_0)); }
	inline IntPtr_t get_Next_0() const { return ___Next_0; }
	inline IntPtr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(IntPtr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_IpAddress_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1317420491, ___IpAddress_1)); }
	inline String_t* get_IpAddress_1() const { return ___IpAddress_1; }
	inline String_t** get_address_of_IpAddress_1() { return &___IpAddress_1; }
	inline void set_IpAddress_1(String_t* value)
	{
		___IpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___IpAddress_1), value);
	}

	inline static int32_t get_offset_of_IpMask_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1317420491, ___IpMask_2)); }
	inline String_t* get_IpMask_2() const { return ___IpMask_2; }
	inline String_t** get_address_of_IpMask_2() { return &___IpMask_2; }
	inline void set_IpMask_2(String_t* value)
	{
		___IpMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___IpMask_2), value);
	}

	inline static int32_t get_offset_of_Context_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1317420491, ___Context_3)); }
	inline uint32_t get_Context_3() const { return ___Context_3; }
	inline uint32_t* get_address_of_Context_3() { return &___Context_3; }
	inline void set_Context_3(uint32_t value)
	{
		___Context_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1317420491_marshaled_com
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
#endif // WIN32_IP_ADDR_STRING_T1317420491_H
#ifndef PINGEXCEPTION_T3785180175_H
#define PINGEXCEPTION_T3785180175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingException
struct  PingException_t3785180175  : public InvalidOperationException_t2713628326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGEXCEPTION_T3785180175_H
#ifndef PINGREPLY_T927847823_H
#define PINGREPLY_T927847823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingReply
struct  PingReply_t927847823  : public RuntimeObject
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.PingReply::address
	IPAddress_t1246319067 * ___address_0;
	// System.Byte[] System.Net.NetworkInformation.PingReply::buffer
	ByteU5BU5D_t1911797546* ___buffer_1;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.PingReply::options
	PingOptions_t1732441359 * ___options_2;
	// System.Int64 System.Net.NetworkInformation.PingReply::rtt
	int64_t ___rtt_3;
	// System.Net.NetworkInformation.IPStatus System.Net.NetworkInformation.PingReply::status
	int32_t ___status_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(PingReply_t927847823, ___address_0)); }
	inline IPAddress_t1246319067 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1246319067 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1246319067 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(PingReply_t927847823, ___buffer_1)); }
	inline ByteU5BU5D_t1911797546* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t1911797546** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t1911797546* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(PingReply_t927847823, ___options_2)); }
	inline PingOptions_t1732441359 * get_options_2() const { return ___options_2; }
	inline PingOptions_t1732441359 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(PingOptions_t1732441359 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((&___options_2), value);
	}

	inline static int32_t get_offset_of_rtt_3() { return static_cast<int32_t>(offsetof(PingReply_t927847823, ___rtt_3)); }
	inline int64_t get_rtt_3() const { return ___rtt_3; }
	inline int64_t* get_address_of_rtt_3() { return &___rtt_3; }
	inline void set_rtt_3(int64_t value)
	{
		___rtt_3 = value;
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(PingReply_t927847823, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGREPLY_T927847823_H
#ifndef WIN32_IP_ADAPTER_UNICAST_ADDRESS_T1811745134_H
#define WIN32_IP_ADAPTER_UNICAST_ADDRESS_T1811745134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
struct  Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1550459756  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t315120776  ___Address_2;
	// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PrefixOrigin
	int32_t ___PrefixOrigin_3;
	// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::SuffixOrigin
	int32_t ___SuffixOrigin_4;
	// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::DadState
	int32_t ___DadState_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::ValidLifetime
	uint32_t ___ValidLifetime_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PreferredLifetime
	uint32_t ___PreferredLifetime_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LeaseLifetime
	uint32_t ___LeaseLifetime_8;
	// System.Byte System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::OnLinkPrefixLength
	uint8_t ___OnLinkPrefixLength_9;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1550459756  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1550459756 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1550459756  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___Next_1)); }
	inline IntPtr_t get_Next_1() const { return ___Next_1; }
	inline IntPtr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(IntPtr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t315120776  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t315120776 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t315120776  value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_PrefixOrigin_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___PrefixOrigin_3)); }
	inline int32_t get_PrefixOrigin_3() const { return ___PrefixOrigin_3; }
	inline int32_t* get_address_of_PrefixOrigin_3() { return &___PrefixOrigin_3; }
	inline void set_PrefixOrigin_3(int32_t value)
	{
		___PrefixOrigin_3 = value;
	}

	inline static int32_t get_offset_of_SuffixOrigin_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___SuffixOrigin_4)); }
	inline int32_t get_SuffixOrigin_4() const { return ___SuffixOrigin_4; }
	inline int32_t* get_address_of_SuffixOrigin_4() { return &___SuffixOrigin_4; }
	inline void set_SuffixOrigin_4(int32_t value)
	{
		___SuffixOrigin_4 = value;
	}

	inline static int32_t get_offset_of_DadState_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___DadState_5)); }
	inline int32_t get_DadState_5() const { return ___DadState_5; }
	inline int32_t* get_address_of_DadState_5() { return &___DadState_5; }
	inline void set_DadState_5(int32_t value)
	{
		___DadState_5 = value;
	}

	inline static int32_t get_offset_of_ValidLifetime_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___ValidLifetime_6)); }
	inline uint32_t get_ValidLifetime_6() const { return ___ValidLifetime_6; }
	inline uint32_t* get_address_of_ValidLifetime_6() { return &___ValidLifetime_6; }
	inline void set_ValidLifetime_6(uint32_t value)
	{
		___ValidLifetime_6 = value;
	}

	inline static int32_t get_offset_of_PreferredLifetime_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___PreferredLifetime_7)); }
	inline uint32_t get_PreferredLifetime_7() const { return ___PreferredLifetime_7; }
	inline uint32_t* get_address_of_PreferredLifetime_7() { return &___PreferredLifetime_7; }
	inline void set_PreferredLifetime_7(uint32_t value)
	{
		___PreferredLifetime_7 = value;
	}

	inline static int32_t get_offset_of_LeaseLifetime_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___LeaseLifetime_8)); }
	inline uint32_t get_LeaseLifetime_8() const { return ___LeaseLifetime_8; }
	inline uint32_t* get_address_of_LeaseLifetime_8() { return &___LeaseLifetime_8; }
	inline void set_LeaseLifetime_8(uint32_t value)
	{
		___LeaseLifetime_8 = value;
	}

	inline static int32_t get_offset_of_OnLinkPrefixLength_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134, ___OnLinkPrefixLength_9)); }
	inline uint8_t get_OnLinkPrefixLength_9() const { return ___OnLinkPrefixLength_9; }
	inline uint8_t* get_address_of_OnLinkPrefixLength_9() { return &___OnLinkPrefixLength_9; }
	inline void set_OnLinkPrefixLength_9(uint8_t value)
	{
		___OnLinkPrefixLength_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_UNICAST_ADDRESS_T1811745134_H
#ifndef WIN32_IP_ADAPTER_MULTICAST_ADDRESS_T2065770837_H
#define WIN32_IP_ADAPTER_MULTICAST_ADDRESS_T2065770837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS
struct  Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1550459756  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t315120776  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1550459756  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1550459756 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1550459756  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837, ___Next_1)); }
	inline IntPtr_t get_Next_1() const { return ___Next_1; }
	inline IntPtr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(IntPtr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t315120776  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t315120776 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t315120776  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_MULTICAST_ADDRESS_T2065770837_H
#ifndef WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T2506981708_H
#define WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T2506981708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS
struct  Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1550459756  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t315120776  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1550459756  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1550459756 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1550459756  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708, ___Next_1)); }
	inline IntPtr_t get_Next_1() const { return ___Next_1; }
	inline IntPtr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(IntPtr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t315120776  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t315120776 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t315120776  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T2506981708_H
#ifndef TCPCONNECTIONINFORMATIONIMPL_T4206775385_H
#define TCPCONNECTIONINFORMATIONIMPL_T4206775385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpConnectionInformationImpl
struct  TcpConnectionInformationImpl_t4206775385  : public TcpConnectionInformation_t861646105
{
public:
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::local
	IPEndPoint_t680189499 * ___local_0;
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::remote
	IPEndPoint_t680189499 * ___remote_1;
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.TcpConnectionInformationImpl::state
	int32_t ___state_2;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t4206775385, ___local_0)); }
	inline IPEndPoint_t680189499 * get_local_0() const { return ___local_0; }
	inline IPEndPoint_t680189499 ** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(IPEndPoint_t680189499 * value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier((&___local_0), value);
	}

	inline static int32_t get_offset_of_remote_1() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t4206775385, ___remote_1)); }
	inline IPEndPoint_t680189499 * get_remote_1() const { return ___remote_1; }
	inline IPEndPoint_t680189499 ** get_address_of_remote_1() { return &___remote_1; }
	inline void set_remote_1(IPEndPoint_t680189499 * value)
	{
		___remote_1 = value;
		Il2CppCodeGenWriteBarrier((&___remote_1), value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t4206775385, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCONNECTIONINFORMATIONIMPL_T4206775385_H
#ifndef WIN32ICMPV6STATISTICS_T218572939_H
#define WIN32ICMPV6STATISTICS_T218572939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IcmpV6Statistics
struct  Win32IcmpV6Statistics_t218572939  : public IcmpV6Statistics_t3221687514
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32IcmpV6Statistics::iin
	Win32_MIBICMPSTATS_EX_t3168409432  ___iin_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32IcmpV6Statistics::iout
	Win32_MIBICMPSTATS_EX_t3168409432  ___iout_1;

public:
	inline static int32_t get_offset_of_iin_0() { return static_cast<int32_t>(offsetof(Win32IcmpV6Statistics_t218572939, ___iin_0)); }
	inline Win32_MIBICMPSTATS_EX_t3168409432  get_iin_0() const { return ___iin_0; }
	inline Win32_MIBICMPSTATS_EX_t3168409432 * get_address_of_iin_0() { return &___iin_0; }
	inline void set_iin_0(Win32_MIBICMPSTATS_EX_t3168409432  value)
	{
		___iin_0 = value;
	}

	inline static int32_t get_offset_of_iout_1() { return static_cast<int32_t>(offsetof(Win32IcmpV6Statistics_t218572939, ___iout_1)); }
	inline Win32_MIBICMPSTATS_EX_t3168409432  get_iout_1() const { return ___iout_1; }
	inline Win32_MIBICMPSTATS_EX_t3168409432 * get_address_of_iout_1() { return &___iout_1; }
	inline void set_iout_1(Win32_MIBICMPSTATS_EX_t3168409432  value)
	{
		___iout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32ICMPV6STATISTICS_T218572939_H
#ifndef WIN32_MIB_ICMP_EX_T59794716_H
#define WIN32_MIB_ICMP_EX_T59794716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct  Win32_MIB_ICMP_EX_t59794716 
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::InStats
	Win32_MIBICMPSTATS_EX_t3168409432  ___InStats_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::OutStats
	Win32_MIBICMPSTATS_EX_t3168409432  ___OutStats_1;

public:
	inline static int32_t get_offset_of_InStats_0() { return static_cast<int32_t>(offsetof(Win32_MIB_ICMP_EX_t59794716, ___InStats_0)); }
	inline Win32_MIBICMPSTATS_EX_t3168409432  get_InStats_0() const { return ___InStats_0; }
	inline Win32_MIBICMPSTATS_EX_t3168409432 * get_address_of_InStats_0() { return &___InStats_0; }
	inline void set_InStats_0(Win32_MIBICMPSTATS_EX_t3168409432  value)
	{
		___InStats_0 = value;
	}

	inline static int32_t get_offset_of_OutStats_1() { return static_cast<int32_t>(offsetof(Win32_MIB_ICMP_EX_t59794716, ___OutStats_1)); }
	inline Win32_MIBICMPSTATS_EX_t3168409432  get_OutStats_1() const { return ___OutStats_1; }
	inline Win32_MIBICMPSTATS_EX_t3168409432 * get_address_of_OutStats_1() { return &___OutStats_1; }
	inline void set_OutStats_1(Win32_MIBICMPSTATS_EX_t3168409432  value)
	{
		___OutStats_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct Win32_MIB_ICMP_EX_t59794716_marshaled_pinvoke
{
	Win32_MIBICMPSTATS_EX_t3168409432_marshaled_pinvoke ___InStats_0;
	Win32_MIBICMPSTATS_EX_t3168409432_marshaled_pinvoke ___OutStats_1;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct Win32_MIB_ICMP_EX_t59794716_marshaled_com
{
	Win32_MIBICMPSTATS_EX_t3168409432_marshaled_com ___InStats_0;
	Win32_MIBICMPSTATS_EX_t3168409432_marshaled_com ___OutStats_1;
};
#endif // WIN32_MIB_ICMP_EX_T59794716_H
#ifndef WIN32_IP_ADAPTER_ANYCAST_ADDRESS_T1719416764_H
#define WIN32_IP_ADAPTER_ANYCAST_ADDRESS_T1719416764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS
struct  Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1550459756  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t315120776  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1550459756  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1550459756 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1550459756  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764, ___Next_1)); }
	inline IntPtr_t get_Next_1() const { return ___Next_1; }
	inline IntPtr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(IntPtr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t315120776  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t315120776 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t315120776  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_ANYCAST_ADDRESS_T1719416764_H
#ifndef IFADDRS_T2290526693_H
#define IFADDRS_T2290526693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifaddrs
struct  ifaddrs_t2290526693 
{
public:
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_next
	IntPtr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_addr
	IntPtr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_netmask
	IntPtr_t ___ifa_netmask_4;
	// System.Net.NetworkInformation.ifa_ifu System.Net.NetworkInformation.ifaddrs::ifa_ifu
	ifa_ifu_t1162969782  ___ifa_ifu_5;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_data
	IntPtr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t2290526693, ___ifa_next_0)); }
	inline IntPtr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline IntPtr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(IntPtr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t2290526693, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t2290526693, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t2290526693, ___ifa_addr_3)); }
	inline IntPtr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline IntPtr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(IntPtr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t2290526693, ___ifa_netmask_4)); }
	inline IntPtr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline IntPtr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(IntPtr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_ifu_5() { return static_cast<int32_t>(offsetof(ifaddrs_t2290526693, ___ifa_ifu_5)); }
	inline ifa_ifu_t1162969782  get_ifa_ifu_5() const { return ___ifa_ifu_5; }
	inline ifa_ifu_t1162969782 * get_address_of_ifa_ifu_5() { return &___ifa_ifu_5; }
	inline void set_ifa_ifu_5(ifa_ifu_t1162969782  value)
	{
		___ifa_ifu_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t2290526693, ___ifa_data_6)); }
	inline IntPtr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline IntPtr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(IntPtr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t2290526693_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1162969782  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t2290526693_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1162969782  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T2290526693_H
#ifndef SOCKADDR_IN6_T3689116072_H
#define SOCKADDR_IN6_T3689116072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in6
struct  sockaddr_in6_t3689116072 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_family
	uint16_t ___sin6_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_2;
	// System.Net.NetworkInformation.in6_addr System.Net.NetworkInformation.sockaddr_in6::sin6_addr
	in6_addr_t2494137227  ___sin6_addr_3;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_4;

public:
	inline static int32_t get_offset_of_sin6_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t3689116072, ___sin6_family_0)); }
	inline uint16_t get_sin6_family_0() const { return ___sin6_family_0; }
	inline uint16_t* get_address_of_sin6_family_0() { return &___sin6_family_0; }
	inline void set_sin6_family_0(uint16_t value)
	{
		___sin6_family_0 = value;
	}

	inline static int32_t get_offset_of_sin6_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t3689116072, ___sin6_port_1)); }
	inline uint16_t get_sin6_port_1() const { return ___sin6_port_1; }
	inline uint16_t* get_address_of_sin6_port_1() { return &___sin6_port_1; }
	inline void set_sin6_port_1(uint16_t value)
	{
		___sin6_port_1 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t3689116072, ___sin6_flowinfo_2)); }
	inline uint32_t get_sin6_flowinfo_2() const { return ___sin6_flowinfo_2; }
	inline uint32_t* get_address_of_sin6_flowinfo_2() { return &___sin6_flowinfo_2; }
	inline void set_sin6_flowinfo_2(uint32_t value)
	{
		___sin6_flowinfo_2 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t3689116072, ___sin6_addr_3)); }
	inline in6_addr_t2494137227  get_sin6_addr_3() const { return ___sin6_addr_3; }
	inline in6_addr_t2494137227 * get_address_of_sin6_addr_3() { return &___sin6_addr_3; }
	inline void set_sin6_addr_3(in6_addr_t2494137227  value)
	{
		___sin6_addr_3 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t3689116072, ___sin6_scope_id_4)); }
	inline uint32_t get_sin6_scope_id_4() const { return ___sin6_scope_id_4; }
	inline uint32_t* get_address_of_sin6_scope_id_4() { return &___sin6_scope_id_4; }
	inline void set_sin6_scope_id_4(uint32_t value)
	{
		___sin6_scope_id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t3689116072_marshaled_pinvoke
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t2494137227_marshaled_pinvoke ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t3689116072_marshaled_com
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t2494137227_marshaled_com ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
#endif // SOCKADDR_IN6_T3689116072_H
#ifndef WIN32_MIB_IFROW_T5497741_H
#define WIN32_MIB_IFROW_T5497741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_IFROW
struct  Win32_MIB_IFROW_t5497741 
{
public:
	// System.Char[] System.Net.NetworkInformation.Win32_MIB_IFROW::Name
	CharU5BU5D_t3721686741* ___Name_3;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Index
	int32_t ___Index_4;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_MIB_IFROW::Type
	int32_t ___Type_5;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Mtu
	int32_t ___Mtu_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::Speed
	uint32_t ___Speed_7;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddrLen
	int32_t ___PhysAddrLen_8;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddr
	ByteU5BU5D_t1911797546* ___PhysAddr_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::AdminStatus
	uint32_t ___AdminStatus_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::OperStatus
	uint32_t ___OperStatus_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::LastChange
	uint32_t ___LastChange_12;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InOctets
	int32_t ___InOctets_13;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUcastPkts
	int32_t ___InUcastPkts_14;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InNUcastPkts
	int32_t ___InNUcastPkts_15;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InDiscards
	int32_t ___InDiscards_16;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InErrors
	int32_t ___InErrors_17;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUnknownProtos
	int32_t ___InUnknownProtos_18;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutOctets
	int32_t ___OutOctets_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutUcastPkts
	int32_t ___OutUcastPkts_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutNUcastPkts
	int32_t ___OutNUcastPkts_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutDiscards
	int32_t ___OutDiscards_22;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutErrors
	int32_t ___OutErrors_23;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutQLen
	int32_t ___OutQLen_24;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::DescrLen
	int32_t ___DescrLen_25;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::Descr
	ByteU5BU5D_t1911797546* ___Descr_26;

public:
	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___Name_3)); }
	inline CharU5BU5D_t3721686741* get_Name_3() const { return ___Name_3; }
	inline CharU5BU5D_t3721686741** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(CharU5BU5D_t3721686741* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___Name_3), value);
	}

	inline static int32_t get_offset_of_Index_4() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___Index_4)); }
	inline int32_t get_Index_4() const { return ___Index_4; }
	inline int32_t* get_address_of_Index_4() { return &___Index_4; }
	inline void set_Index_4(int32_t value)
	{
		___Index_4 = value;
	}

	inline static int32_t get_offset_of_Type_5() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___Type_5)); }
	inline int32_t get_Type_5() const { return ___Type_5; }
	inline int32_t* get_address_of_Type_5() { return &___Type_5; }
	inline void set_Type_5(int32_t value)
	{
		___Type_5 = value;
	}

	inline static int32_t get_offset_of_Mtu_6() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___Mtu_6)); }
	inline int32_t get_Mtu_6() const { return ___Mtu_6; }
	inline int32_t* get_address_of_Mtu_6() { return &___Mtu_6; }
	inline void set_Mtu_6(int32_t value)
	{
		___Mtu_6 = value;
	}

	inline static int32_t get_offset_of_Speed_7() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___Speed_7)); }
	inline uint32_t get_Speed_7() const { return ___Speed_7; }
	inline uint32_t* get_address_of_Speed_7() { return &___Speed_7; }
	inline void set_Speed_7(uint32_t value)
	{
		___Speed_7 = value;
	}

	inline static int32_t get_offset_of_PhysAddrLen_8() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___PhysAddrLen_8)); }
	inline int32_t get_PhysAddrLen_8() const { return ___PhysAddrLen_8; }
	inline int32_t* get_address_of_PhysAddrLen_8() { return &___PhysAddrLen_8; }
	inline void set_PhysAddrLen_8(int32_t value)
	{
		___PhysAddrLen_8 = value;
	}

	inline static int32_t get_offset_of_PhysAddr_9() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___PhysAddr_9)); }
	inline ByteU5BU5D_t1911797546* get_PhysAddr_9() const { return ___PhysAddr_9; }
	inline ByteU5BU5D_t1911797546** get_address_of_PhysAddr_9() { return &___PhysAddr_9; }
	inline void set_PhysAddr_9(ByteU5BU5D_t1911797546* value)
	{
		___PhysAddr_9 = value;
		Il2CppCodeGenWriteBarrier((&___PhysAddr_9), value);
	}

	inline static int32_t get_offset_of_AdminStatus_10() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___AdminStatus_10)); }
	inline uint32_t get_AdminStatus_10() const { return ___AdminStatus_10; }
	inline uint32_t* get_address_of_AdminStatus_10() { return &___AdminStatus_10; }
	inline void set_AdminStatus_10(uint32_t value)
	{
		___AdminStatus_10 = value;
	}

	inline static int32_t get_offset_of_OperStatus_11() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___OperStatus_11)); }
	inline uint32_t get_OperStatus_11() const { return ___OperStatus_11; }
	inline uint32_t* get_address_of_OperStatus_11() { return &___OperStatus_11; }
	inline void set_OperStatus_11(uint32_t value)
	{
		___OperStatus_11 = value;
	}

	inline static int32_t get_offset_of_LastChange_12() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___LastChange_12)); }
	inline uint32_t get_LastChange_12() const { return ___LastChange_12; }
	inline uint32_t* get_address_of_LastChange_12() { return &___LastChange_12; }
	inline void set_LastChange_12(uint32_t value)
	{
		___LastChange_12 = value;
	}

	inline static int32_t get_offset_of_InOctets_13() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___InOctets_13)); }
	inline int32_t get_InOctets_13() const { return ___InOctets_13; }
	inline int32_t* get_address_of_InOctets_13() { return &___InOctets_13; }
	inline void set_InOctets_13(int32_t value)
	{
		___InOctets_13 = value;
	}

	inline static int32_t get_offset_of_InUcastPkts_14() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___InUcastPkts_14)); }
	inline int32_t get_InUcastPkts_14() const { return ___InUcastPkts_14; }
	inline int32_t* get_address_of_InUcastPkts_14() { return &___InUcastPkts_14; }
	inline void set_InUcastPkts_14(int32_t value)
	{
		___InUcastPkts_14 = value;
	}

	inline static int32_t get_offset_of_InNUcastPkts_15() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___InNUcastPkts_15)); }
	inline int32_t get_InNUcastPkts_15() const { return ___InNUcastPkts_15; }
	inline int32_t* get_address_of_InNUcastPkts_15() { return &___InNUcastPkts_15; }
	inline void set_InNUcastPkts_15(int32_t value)
	{
		___InNUcastPkts_15 = value;
	}

	inline static int32_t get_offset_of_InDiscards_16() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___InDiscards_16)); }
	inline int32_t get_InDiscards_16() const { return ___InDiscards_16; }
	inline int32_t* get_address_of_InDiscards_16() { return &___InDiscards_16; }
	inline void set_InDiscards_16(int32_t value)
	{
		___InDiscards_16 = value;
	}

	inline static int32_t get_offset_of_InErrors_17() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___InErrors_17)); }
	inline int32_t get_InErrors_17() const { return ___InErrors_17; }
	inline int32_t* get_address_of_InErrors_17() { return &___InErrors_17; }
	inline void set_InErrors_17(int32_t value)
	{
		___InErrors_17 = value;
	}

	inline static int32_t get_offset_of_InUnknownProtos_18() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___InUnknownProtos_18)); }
	inline int32_t get_InUnknownProtos_18() const { return ___InUnknownProtos_18; }
	inline int32_t* get_address_of_InUnknownProtos_18() { return &___InUnknownProtos_18; }
	inline void set_InUnknownProtos_18(int32_t value)
	{
		___InUnknownProtos_18 = value;
	}

	inline static int32_t get_offset_of_OutOctets_19() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___OutOctets_19)); }
	inline int32_t get_OutOctets_19() const { return ___OutOctets_19; }
	inline int32_t* get_address_of_OutOctets_19() { return &___OutOctets_19; }
	inline void set_OutOctets_19(int32_t value)
	{
		___OutOctets_19 = value;
	}

	inline static int32_t get_offset_of_OutUcastPkts_20() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___OutUcastPkts_20)); }
	inline int32_t get_OutUcastPkts_20() const { return ___OutUcastPkts_20; }
	inline int32_t* get_address_of_OutUcastPkts_20() { return &___OutUcastPkts_20; }
	inline void set_OutUcastPkts_20(int32_t value)
	{
		___OutUcastPkts_20 = value;
	}

	inline static int32_t get_offset_of_OutNUcastPkts_21() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___OutNUcastPkts_21)); }
	inline int32_t get_OutNUcastPkts_21() const { return ___OutNUcastPkts_21; }
	inline int32_t* get_address_of_OutNUcastPkts_21() { return &___OutNUcastPkts_21; }
	inline void set_OutNUcastPkts_21(int32_t value)
	{
		___OutNUcastPkts_21 = value;
	}

	inline static int32_t get_offset_of_OutDiscards_22() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___OutDiscards_22)); }
	inline int32_t get_OutDiscards_22() const { return ___OutDiscards_22; }
	inline int32_t* get_address_of_OutDiscards_22() { return &___OutDiscards_22; }
	inline void set_OutDiscards_22(int32_t value)
	{
		___OutDiscards_22 = value;
	}

	inline static int32_t get_offset_of_OutErrors_23() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___OutErrors_23)); }
	inline int32_t get_OutErrors_23() const { return ___OutErrors_23; }
	inline int32_t* get_address_of_OutErrors_23() { return &___OutErrors_23; }
	inline void set_OutErrors_23(int32_t value)
	{
		___OutErrors_23 = value;
	}

	inline static int32_t get_offset_of_OutQLen_24() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___OutQLen_24)); }
	inline int32_t get_OutQLen_24() const { return ___OutQLen_24; }
	inline int32_t* get_address_of_OutQLen_24() { return &___OutQLen_24; }
	inline void set_OutQLen_24(int32_t value)
	{
		___OutQLen_24 = value;
	}

	inline static int32_t get_offset_of_DescrLen_25() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___DescrLen_25)); }
	inline int32_t get_DescrLen_25() const { return ___DescrLen_25; }
	inline int32_t* get_address_of_DescrLen_25() { return &___DescrLen_25; }
	inline void set_DescrLen_25(int32_t value)
	{
		___DescrLen_25 = value;
	}

	inline static int32_t get_offset_of_Descr_26() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t5497741, ___Descr_26)); }
	inline ByteU5BU5D_t1911797546* get_Descr_26() const { return ___Descr_26; }
	inline ByteU5BU5D_t1911797546** get_address_of_Descr_26() { return &___Descr_26; }
	inline void set_Descr_26(ByteU5BU5D_t1911797546* value)
	{
		___Descr_26 = value;
		Il2CppCodeGenWriteBarrier((&___Descr_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t5497741_marshaled_pinvoke
{
	uint8_t ___Name_3[512];
	int32_t ___Index_4;
	int32_t ___Type_5;
	int32_t ___Mtu_6;
	uint32_t ___Speed_7;
	int32_t ___PhysAddrLen_8;
	uint8_t ___PhysAddr_9[8];
	uint32_t ___AdminStatus_10;
	uint32_t ___OperStatus_11;
	uint32_t ___LastChange_12;
	int32_t ___InOctets_13;
	int32_t ___InUcastPkts_14;
	int32_t ___InNUcastPkts_15;
	int32_t ___InDiscards_16;
	int32_t ___InErrors_17;
	int32_t ___InUnknownProtos_18;
	int32_t ___OutOctets_19;
	int32_t ___OutUcastPkts_20;
	int32_t ___OutNUcastPkts_21;
	int32_t ___OutDiscards_22;
	int32_t ___OutErrors_23;
	int32_t ___OutQLen_24;
	int32_t ___DescrLen_25;
	uint8_t ___Descr_26[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t5497741_marshaled_com
{
	uint8_t ___Name_3[512];
	int32_t ___Index_4;
	int32_t ___Type_5;
	int32_t ___Mtu_6;
	uint32_t ___Speed_7;
	int32_t ___PhysAddrLen_8;
	uint8_t ___PhysAddr_9[8];
	uint32_t ___AdminStatus_10;
	uint32_t ___OperStatus_11;
	uint32_t ___LastChange_12;
	int32_t ___InOctets_13;
	int32_t ___InUcastPkts_14;
	int32_t ___InNUcastPkts_15;
	int32_t ___InDiscards_16;
	int32_t ___InErrors_17;
	int32_t ___InUnknownProtos_18;
	int32_t ___OutOctets_19;
	int32_t ___OutUcastPkts_20;
	int32_t ___OutNUcastPkts_21;
	int32_t ___OutDiscards_22;
	int32_t ___OutErrors_23;
	int32_t ___OutQLen_24;
	int32_t ___DescrLen_25;
	uint8_t ___Descr_26[256];
};
#endif // WIN32_MIB_IFROW_T5497741_H
#ifndef WIN32_IP_ADAPTER_INFO_T1617871487_H
#define WIN32_IP_ADAPTER_INFO_T1617871487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct  Win32_IP_ADAPTER_INFO_t1617871487  : public RuntimeObject
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Next
	IntPtr_t ___Next_3;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::ComboIndex
	int32_t ___ComboIndex_4;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AdapterName
	String_t* ___AdapterName_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Description
	String_t* ___Description_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AddressLength
	uint32_t ___AddressLength_7;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Address
	ByteU5BU5D_t1911797546* ___Address_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Index
	uint32_t ___Index_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Type
	uint32_t ___Type_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpEnabled
	uint32_t ___DhcpEnabled_11;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::CurrentIpAddress
	IntPtr_t ___CurrentIpAddress_12;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::IpAddressList
	Win32_IP_ADDR_STRING_t1317420491  ___IpAddressList_13;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::GatewayList
	Win32_IP_ADDR_STRING_t1317420491  ___GatewayList_14;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpServer
	Win32_IP_ADDR_STRING_t1317420491  ___DhcpServer_15;
	// System.Boolean System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::HaveWins
	bool ___HaveWins_16;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::PrimaryWinsServer
	Win32_IP_ADDR_STRING_t1317420491  ___PrimaryWinsServer_17;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::SecondaryWinsServer
	Win32_IP_ADDR_STRING_t1317420491  ___SecondaryWinsServer_18;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseObtained
	int64_t ___LeaseObtained_19;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseExpires
	int64_t ___LeaseExpires_20;

public:
	inline static int32_t get_offset_of_Next_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___Next_3)); }
	inline IntPtr_t get_Next_3() const { return ___Next_3; }
	inline IntPtr_t* get_address_of_Next_3() { return &___Next_3; }
	inline void set_Next_3(IntPtr_t value)
	{
		___Next_3 = value;
	}

	inline static int32_t get_offset_of_ComboIndex_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___ComboIndex_4)); }
	inline int32_t get_ComboIndex_4() const { return ___ComboIndex_4; }
	inline int32_t* get_address_of_ComboIndex_4() { return &___ComboIndex_4; }
	inline void set_ComboIndex_4(int32_t value)
	{
		___ComboIndex_4 = value;
	}

	inline static int32_t get_offset_of_AdapterName_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___AdapterName_5)); }
	inline String_t* get_AdapterName_5() const { return ___AdapterName_5; }
	inline String_t** get_address_of_AdapterName_5() { return &___AdapterName_5; }
	inline void set_AdapterName_5(String_t* value)
	{
		___AdapterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_5), value);
	}

	inline static int32_t get_offset_of_Description_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___Description_6)); }
	inline String_t* get_Description_6() const { return ___Description_6; }
	inline String_t** get_address_of_Description_6() { return &___Description_6; }
	inline void set_Description_6(String_t* value)
	{
		___Description_6 = value;
		Il2CppCodeGenWriteBarrier((&___Description_6), value);
	}

	inline static int32_t get_offset_of_AddressLength_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___AddressLength_7)); }
	inline uint32_t get_AddressLength_7() const { return ___AddressLength_7; }
	inline uint32_t* get_address_of_AddressLength_7() { return &___AddressLength_7; }
	inline void set_AddressLength_7(uint32_t value)
	{
		___AddressLength_7 = value;
	}

	inline static int32_t get_offset_of_Address_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___Address_8)); }
	inline ByteU5BU5D_t1911797546* get_Address_8() const { return ___Address_8; }
	inline ByteU5BU5D_t1911797546** get_address_of_Address_8() { return &___Address_8; }
	inline void set_Address_8(ByteU5BU5D_t1911797546* value)
	{
		___Address_8 = value;
		Il2CppCodeGenWriteBarrier((&___Address_8), value);
	}

	inline static int32_t get_offset_of_Index_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___Index_9)); }
	inline uint32_t get_Index_9() const { return ___Index_9; }
	inline uint32_t* get_address_of_Index_9() { return &___Index_9; }
	inline void set_Index_9(uint32_t value)
	{
		___Index_9 = value;
	}

	inline static int32_t get_offset_of_Type_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___Type_10)); }
	inline uint32_t get_Type_10() const { return ___Type_10; }
	inline uint32_t* get_address_of_Type_10() { return &___Type_10; }
	inline void set_Type_10(uint32_t value)
	{
		___Type_10 = value;
	}

	inline static int32_t get_offset_of_DhcpEnabled_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___DhcpEnabled_11)); }
	inline uint32_t get_DhcpEnabled_11() const { return ___DhcpEnabled_11; }
	inline uint32_t* get_address_of_DhcpEnabled_11() { return &___DhcpEnabled_11; }
	inline void set_DhcpEnabled_11(uint32_t value)
	{
		___DhcpEnabled_11 = value;
	}

	inline static int32_t get_offset_of_CurrentIpAddress_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___CurrentIpAddress_12)); }
	inline IntPtr_t get_CurrentIpAddress_12() const { return ___CurrentIpAddress_12; }
	inline IntPtr_t* get_address_of_CurrentIpAddress_12() { return &___CurrentIpAddress_12; }
	inline void set_CurrentIpAddress_12(IntPtr_t value)
	{
		___CurrentIpAddress_12 = value;
	}

	inline static int32_t get_offset_of_IpAddressList_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___IpAddressList_13)); }
	inline Win32_IP_ADDR_STRING_t1317420491  get_IpAddressList_13() const { return ___IpAddressList_13; }
	inline Win32_IP_ADDR_STRING_t1317420491 * get_address_of_IpAddressList_13() { return &___IpAddressList_13; }
	inline void set_IpAddressList_13(Win32_IP_ADDR_STRING_t1317420491  value)
	{
		___IpAddressList_13 = value;
	}

	inline static int32_t get_offset_of_GatewayList_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___GatewayList_14)); }
	inline Win32_IP_ADDR_STRING_t1317420491  get_GatewayList_14() const { return ___GatewayList_14; }
	inline Win32_IP_ADDR_STRING_t1317420491 * get_address_of_GatewayList_14() { return &___GatewayList_14; }
	inline void set_GatewayList_14(Win32_IP_ADDR_STRING_t1317420491  value)
	{
		___GatewayList_14 = value;
	}

	inline static int32_t get_offset_of_DhcpServer_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___DhcpServer_15)); }
	inline Win32_IP_ADDR_STRING_t1317420491  get_DhcpServer_15() const { return ___DhcpServer_15; }
	inline Win32_IP_ADDR_STRING_t1317420491 * get_address_of_DhcpServer_15() { return &___DhcpServer_15; }
	inline void set_DhcpServer_15(Win32_IP_ADDR_STRING_t1317420491  value)
	{
		___DhcpServer_15 = value;
	}

	inline static int32_t get_offset_of_HaveWins_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___HaveWins_16)); }
	inline bool get_HaveWins_16() const { return ___HaveWins_16; }
	inline bool* get_address_of_HaveWins_16() { return &___HaveWins_16; }
	inline void set_HaveWins_16(bool value)
	{
		___HaveWins_16 = value;
	}

	inline static int32_t get_offset_of_PrimaryWinsServer_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___PrimaryWinsServer_17)); }
	inline Win32_IP_ADDR_STRING_t1317420491  get_PrimaryWinsServer_17() const { return ___PrimaryWinsServer_17; }
	inline Win32_IP_ADDR_STRING_t1317420491 * get_address_of_PrimaryWinsServer_17() { return &___PrimaryWinsServer_17; }
	inline void set_PrimaryWinsServer_17(Win32_IP_ADDR_STRING_t1317420491  value)
	{
		___PrimaryWinsServer_17 = value;
	}

	inline static int32_t get_offset_of_SecondaryWinsServer_18() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___SecondaryWinsServer_18)); }
	inline Win32_IP_ADDR_STRING_t1317420491  get_SecondaryWinsServer_18() const { return ___SecondaryWinsServer_18; }
	inline Win32_IP_ADDR_STRING_t1317420491 * get_address_of_SecondaryWinsServer_18() { return &___SecondaryWinsServer_18; }
	inline void set_SecondaryWinsServer_18(Win32_IP_ADDR_STRING_t1317420491  value)
	{
		___SecondaryWinsServer_18 = value;
	}

	inline static int32_t get_offset_of_LeaseObtained_19() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___LeaseObtained_19)); }
	inline int64_t get_LeaseObtained_19() const { return ___LeaseObtained_19; }
	inline int64_t* get_address_of_LeaseObtained_19() { return &___LeaseObtained_19; }
	inline void set_LeaseObtained_19(int64_t value)
	{
		___LeaseObtained_19 = value;
	}

	inline static int32_t get_offset_of_LeaseExpires_20() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t1617871487, ___LeaseExpires_20)); }
	inline int64_t get_LeaseExpires_20() const { return ___LeaseExpires_20; }
	inline int64_t* get_address_of_LeaseExpires_20() { return &___LeaseExpires_20; }
	inline void set_LeaseExpires_20(int64_t value)
	{
		___LeaseExpires_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t1617871487_marshaled_pinvoke
{
	intptr_t ___Next_3;
	int32_t ___ComboIndex_4;
	char ___AdapterName_5[260];
	char ___Description_6[132];
	uint32_t ___AddressLength_7;
	uint8_t ___Address_8[8];
	uint32_t ___Index_9;
	uint32_t ___Type_10;
	uint32_t ___DhcpEnabled_11;
	intptr_t ___CurrentIpAddress_12;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke ___IpAddressList_13;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke ___GatewayList_14;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke ___DhcpServer_15;
	int32_t ___HaveWins_16;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke ___PrimaryWinsServer_17;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke ___SecondaryWinsServer_18;
	int64_t ___LeaseObtained_19;
	int64_t ___LeaseExpires_20;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t1617871487_marshaled_com
{
	intptr_t ___Next_3;
	int32_t ___ComboIndex_4;
	char ___AdapterName_5[260];
	char ___Description_6[132];
	uint32_t ___AddressLength_7;
	uint8_t ___Address_8[8];
	uint32_t ___Index_9;
	uint32_t ___Type_10;
	uint32_t ___DhcpEnabled_11;
	intptr_t ___CurrentIpAddress_12;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_com ___IpAddressList_13;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_com ___GatewayList_14;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_com ___DhcpServer_15;
	int32_t ___HaveWins_16;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_com ___PrimaryWinsServer_17;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_com ___SecondaryWinsServer_18;
	int64_t ___LeaseObtained_19;
	int64_t ___LeaseExpires_20;
};
#endif // WIN32_IP_ADAPTER_INFO_T1617871487_H
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T4248672084_H
#define WIN32_IP_ADAPTER_ADDRESSES_T4248672084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t4248672084  : public RuntimeObject
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t537482936  ___Alignment_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	IntPtr_t ___Next_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_6;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	IntPtr_t ___FirstUnicastAddress_7;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	IntPtr_t ___FirstAnycastAddress_8;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	IntPtr_t ___FirstMulticastAddress_9;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	IntPtr_t ___FirstDnsServerAddress_10;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_11;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_12;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_13;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t1911797546* ___PhysicalAddress_14;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_15;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_16;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_17;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_18;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_19;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_20;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t1901745880* ___ZoneIndices_21;

public:
	inline static int32_t get_offset_of_Alignment_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___Alignment_4)); }
	inline AlignmentUnion_t537482936  get_Alignment_4() const { return ___Alignment_4; }
	inline AlignmentUnion_t537482936 * get_address_of_Alignment_4() { return &___Alignment_4; }
	inline void set_Alignment_4(AlignmentUnion_t537482936  value)
	{
		___Alignment_4 = value;
	}

	inline static int32_t get_offset_of_Next_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___Next_5)); }
	inline IntPtr_t get_Next_5() const { return ___Next_5; }
	inline IntPtr_t* get_address_of_Next_5() { return &___Next_5; }
	inline void set_Next_5(IntPtr_t value)
	{
		___Next_5 = value;
	}

	inline static int32_t get_offset_of_AdapterName_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___AdapterName_6)); }
	inline String_t* get_AdapterName_6() const { return ___AdapterName_6; }
	inline String_t** get_address_of_AdapterName_6() { return &___AdapterName_6; }
	inline void set_AdapterName_6(String_t* value)
	{
		___AdapterName_6 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_6), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___FirstUnicastAddress_7)); }
	inline IntPtr_t get_FirstUnicastAddress_7() const { return ___FirstUnicastAddress_7; }
	inline IntPtr_t* get_address_of_FirstUnicastAddress_7() { return &___FirstUnicastAddress_7; }
	inline void set_FirstUnicastAddress_7(IntPtr_t value)
	{
		___FirstUnicastAddress_7 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___FirstAnycastAddress_8)); }
	inline IntPtr_t get_FirstAnycastAddress_8() const { return ___FirstAnycastAddress_8; }
	inline IntPtr_t* get_address_of_FirstAnycastAddress_8() { return &___FirstAnycastAddress_8; }
	inline void set_FirstAnycastAddress_8(IntPtr_t value)
	{
		___FirstAnycastAddress_8 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___FirstMulticastAddress_9)); }
	inline IntPtr_t get_FirstMulticastAddress_9() const { return ___FirstMulticastAddress_9; }
	inline IntPtr_t* get_address_of_FirstMulticastAddress_9() { return &___FirstMulticastAddress_9; }
	inline void set_FirstMulticastAddress_9(IntPtr_t value)
	{
		___FirstMulticastAddress_9 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___FirstDnsServerAddress_10)); }
	inline IntPtr_t get_FirstDnsServerAddress_10() const { return ___FirstDnsServerAddress_10; }
	inline IntPtr_t* get_address_of_FirstDnsServerAddress_10() { return &___FirstDnsServerAddress_10; }
	inline void set_FirstDnsServerAddress_10(IntPtr_t value)
	{
		___FirstDnsServerAddress_10 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___DnsSuffix_11)); }
	inline String_t* get_DnsSuffix_11() const { return ___DnsSuffix_11; }
	inline String_t** get_address_of_DnsSuffix_11() { return &___DnsSuffix_11; }
	inline void set_DnsSuffix_11(String_t* value)
	{
		___DnsSuffix_11 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_11), value);
	}

	inline static int32_t get_offset_of_Description_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___Description_12)); }
	inline String_t* get_Description_12() const { return ___Description_12; }
	inline String_t** get_address_of_Description_12() { return &___Description_12; }
	inline void set_Description_12(String_t* value)
	{
		___Description_12 = value;
		Il2CppCodeGenWriteBarrier((&___Description_12), value);
	}

	inline static int32_t get_offset_of_FriendlyName_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___FriendlyName_13)); }
	inline String_t* get_FriendlyName_13() const { return ___FriendlyName_13; }
	inline String_t** get_address_of_FriendlyName_13() { return &___FriendlyName_13; }
	inline void set_FriendlyName_13(String_t* value)
	{
		___FriendlyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_13), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___PhysicalAddress_14)); }
	inline ByteU5BU5D_t1911797546* get_PhysicalAddress_14() const { return ___PhysicalAddress_14; }
	inline ByteU5BU5D_t1911797546** get_address_of_PhysicalAddress_14() { return &___PhysicalAddress_14; }
	inline void set_PhysicalAddress_14(ByteU5BU5D_t1911797546* value)
	{
		___PhysicalAddress_14 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_14), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___PhysicalAddressLength_15)); }
	inline uint32_t get_PhysicalAddressLength_15() const { return ___PhysicalAddressLength_15; }
	inline uint32_t* get_address_of_PhysicalAddressLength_15() { return &___PhysicalAddressLength_15; }
	inline void set_PhysicalAddressLength_15(uint32_t value)
	{
		___PhysicalAddressLength_15 = value;
	}

	inline static int32_t get_offset_of_Flags_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___Flags_16)); }
	inline uint32_t get_Flags_16() const { return ___Flags_16; }
	inline uint32_t* get_address_of_Flags_16() { return &___Flags_16; }
	inline void set_Flags_16(uint32_t value)
	{
		___Flags_16 = value;
	}

	inline static int32_t get_offset_of_Mtu_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___Mtu_17)); }
	inline uint32_t get_Mtu_17() const { return ___Mtu_17; }
	inline uint32_t* get_address_of_Mtu_17() { return &___Mtu_17; }
	inline void set_Mtu_17(uint32_t value)
	{
		___Mtu_17 = value;
	}

	inline static int32_t get_offset_of_IfType_18() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___IfType_18)); }
	inline int32_t get_IfType_18() const { return ___IfType_18; }
	inline int32_t* get_address_of_IfType_18() { return &___IfType_18; }
	inline void set_IfType_18(int32_t value)
	{
		___IfType_18 = value;
	}

	inline static int32_t get_offset_of_OperStatus_19() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___OperStatus_19)); }
	inline int32_t get_OperStatus_19() const { return ___OperStatus_19; }
	inline int32_t* get_address_of_OperStatus_19() { return &___OperStatus_19; }
	inline void set_OperStatus_19(int32_t value)
	{
		___OperStatus_19 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_20() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___Ipv6IfIndex_20)); }
	inline int32_t get_Ipv6IfIndex_20() const { return ___Ipv6IfIndex_20; }
	inline int32_t* get_address_of_Ipv6IfIndex_20() { return &___Ipv6IfIndex_20; }
	inline void set_Ipv6IfIndex_20(int32_t value)
	{
		___Ipv6IfIndex_20 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_21() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t4248672084, ___ZoneIndices_21)); }
	inline UInt32U5BU5D_t1901745880* get_ZoneIndices_21() const { return ___ZoneIndices_21; }
	inline UInt32U5BU5D_t1901745880** get_address_of_ZoneIndices_21() { return &___ZoneIndices_21; }
	inline void set_ZoneIndices_21(UInt32U5BU5D_t1901745880* value)
	{
		___ZoneIndices_21 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t4248672084_marshaled_pinvoke
{
	AlignmentUnion_t537482936  ___Alignment_4;
	intptr_t ___Next_5;
	char* ___AdapterName_6;
	intptr_t ___FirstUnicastAddress_7;
	intptr_t ___FirstAnycastAddress_8;
	intptr_t ___FirstMulticastAddress_9;
	intptr_t ___FirstDnsServerAddress_10;
	Il2CppChar* ___DnsSuffix_11;
	Il2CppChar* ___Description_12;
	Il2CppChar* ___FriendlyName_13;
	uint8_t ___PhysicalAddress_14[8];
	uint32_t ___PhysicalAddressLength_15;
	uint32_t ___Flags_16;
	uint32_t ___Mtu_17;
	int32_t ___IfType_18;
	int32_t ___OperStatus_19;
	int32_t ___Ipv6IfIndex_20;
	uint32_t ___ZoneIndices_21[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t4248672084_marshaled_com
{
	AlignmentUnion_t537482936  ___Alignment_4;
	intptr_t ___Next_5;
	char* ___AdapterName_6;
	intptr_t ___FirstUnicastAddress_7;
	intptr_t ___FirstAnycastAddress_8;
	intptr_t ___FirstMulticastAddress_9;
	intptr_t ___FirstDnsServerAddress_10;
	Il2CppChar* ___DnsSuffix_11;
	Il2CppChar* ___Description_12;
	Il2CppChar* ___FriendlyName_13;
	uint8_t ___PhysicalAddress_14[8];
	uint32_t ___PhysicalAddressLength_15;
	uint32_t ___Flags_16;
	uint32_t ___Mtu_17;
	int32_t ___IfType_18;
	int32_t ___OperStatus_19;
	int32_t ___Ipv6IfIndex_20;
	uint32_t ___ZoneIndices_21[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T4248672084_H
#ifndef UNIXNETWORKINTERFACE_T2385454068_H
#define UNIXNETWORKINTERFACE_T2385454068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t2385454068  : public NetworkInterface_t1788753897
{
public:
	// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.UnixNetworkInterface::ipv4stats
	IPv4InterfaceStatistics_t1683438693 * ___ipv4stats_2;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.UnixNetworkInterface::ipproperties
	IPInterfaceProperties_t3360711166 * ___ipproperties_3;
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_4;
	// System.Int32 System.Net.NetworkInformation.UnixNetworkInterface::index
	int32_t ___index_5;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t2214060586 * ___addresses_6;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t1911797546* ___macAddress_7;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_8;

public:
	inline static int32_t get_offset_of_ipv4stats_2() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2385454068, ___ipv4stats_2)); }
	inline IPv4InterfaceStatistics_t1683438693 * get_ipv4stats_2() const { return ___ipv4stats_2; }
	inline IPv4InterfaceStatistics_t1683438693 ** get_address_of_ipv4stats_2() { return &___ipv4stats_2; }
	inline void set_ipv4stats_2(IPv4InterfaceStatistics_t1683438693 * value)
	{
		___ipv4stats_2 = value;
		Il2CppCodeGenWriteBarrier((&___ipv4stats_2), value);
	}

	inline static int32_t get_offset_of_ipproperties_3() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2385454068, ___ipproperties_3)); }
	inline IPInterfaceProperties_t3360711166 * get_ipproperties_3() const { return ___ipproperties_3; }
	inline IPInterfaceProperties_t3360711166 ** get_address_of_ipproperties_3() { return &___ipproperties_3; }
	inline void set_ipproperties_3(IPInterfaceProperties_t3360711166 * value)
	{
		___ipproperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___ipproperties_3), value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2385454068, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((&___name_4), value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2385454068, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_addresses_6() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2385454068, ___addresses_6)); }
	inline List_1_t2214060586 * get_addresses_6() const { return ___addresses_6; }
	inline List_1_t2214060586 ** get_address_of_addresses_6() { return &___addresses_6; }
	inline void set_addresses_6(List_1_t2214060586 * value)
	{
		___addresses_6 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_6), value);
	}

	inline static int32_t get_offset_of_macAddress_7() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2385454068, ___macAddress_7)); }
	inline ByteU5BU5D_t1911797546* get_macAddress_7() const { return ___macAddress_7; }
	inline ByteU5BU5D_t1911797546** get_address_of_macAddress_7() { return &___macAddress_7; }
	inline void set_macAddress_7(ByteU5BU5D_t1911797546* value)
	{
		___macAddress_7 = value;
		Il2CppCodeGenWriteBarrier((&___macAddress_7), value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2385454068, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACE_T2385454068_H
#ifndef WIN32_FIXED_INFO_T3548810287_H
#define WIN32_FIXED_INFO_T3548810287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t3548810287  : public RuntimeObject
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	IntPtr_t ___CurrentDnsServer_6;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1317420491  ___DnsServerList_7;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_8;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_12;

public:
	inline static int32_t get_offset_of_HostName_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___HostName_4)); }
	inline String_t* get_HostName_4() const { return ___HostName_4; }
	inline String_t** get_address_of_HostName_4() { return &___HostName_4; }
	inline void set_HostName_4(String_t* value)
	{
		___HostName_4 = value;
		Il2CppCodeGenWriteBarrier((&___HostName_4), value);
	}

	inline static int32_t get_offset_of_DomainName_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___DomainName_5)); }
	inline String_t* get_DomainName_5() const { return ___DomainName_5; }
	inline String_t** get_address_of_DomainName_5() { return &___DomainName_5; }
	inline void set_DomainName_5(String_t* value)
	{
		___DomainName_5 = value;
		Il2CppCodeGenWriteBarrier((&___DomainName_5), value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___CurrentDnsServer_6)); }
	inline IntPtr_t get_CurrentDnsServer_6() const { return ___CurrentDnsServer_6; }
	inline IntPtr_t* get_address_of_CurrentDnsServer_6() { return &___CurrentDnsServer_6; }
	inline void set_CurrentDnsServer_6(IntPtr_t value)
	{
		___CurrentDnsServer_6 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___DnsServerList_7)); }
	inline Win32_IP_ADDR_STRING_t1317420491  get_DnsServerList_7() const { return ___DnsServerList_7; }
	inline Win32_IP_ADDR_STRING_t1317420491 * get_address_of_DnsServerList_7() { return &___DnsServerList_7; }
	inline void set_DnsServerList_7(Win32_IP_ADDR_STRING_t1317420491  value)
	{
		___DnsServerList_7 = value;
	}

	inline static int32_t get_offset_of_NodeType_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___NodeType_8)); }
	inline int32_t get_NodeType_8() const { return ___NodeType_8; }
	inline int32_t* get_address_of_NodeType_8() { return &___NodeType_8; }
	inline void set_NodeType_8(int32_t value)
	{
		___NodeType_8 = value;
	}

	inline static int32_t get_offset_of_ScopeId_9() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___ScopeId_9)); }
	inline String_t* get_ScopeId_9() const { return ___ScopeId_9; }
	inline String_t** get_address_of_ScopeId_9() { return &___ScopeId_9; }
	inline void set_ScopeId_9(String_t* value)
	{
		___ScopeId_9 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_9), value);
	}

	inline static int32_t get_offset_of_EnableRouting_10() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___EnableRouting_10)); }
	inline uint32_t get_EnableRouting_10() const { return ___EnableRouting_10; }
	inline uint32_t* get_address_of_EnableRouting_10() { return &___EnableRouting_10; }
	inline void set_EnableRouting_10(uint32_t value)
	{
		___EnableRouting_10 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_11() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___EnableProxy_11)); }
	inline uint32_t get_EnableProxy_11() const { return ___EnableProxy_11; }
	inline uint32_t* get_address_of_EnableProxy_11() { return &___EnableProxy_11; }
	inline void set_EnableProxy_11(uint32_t value)
	{
		___EnableProxy_11 = value;
	}

	inline static int32_t get_offset_of_EnableDns_12() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287, ___EnableDns_12)); }
	inline uint32_t get_EnableDns_12() const { return ___EnableDns_12; }
	inline uint32_t* get_address_of_EnableDns_12() { return &___EnableDns_12; }
	inline void set_EnableDns_12(uint32_t value)
	{
		___EnableDns_12 = value;
	}
};

struct Win32_FIXED_INFO_t3548810287_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::fixed_info
	Win32_FIXED_INFO_t3548810287 * ___fixed_info_3;

public:
	inline static int32_t get_offset_of_fixed_info_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t3548810287_StaticFields, ___fixed_info_3)); }
	inline Win32_FIXED_INFO_t3548810287 * get_fixed_info_3() const { return ___fixed_info_3; }
	inline Win32_FIXED_INFO_t3548810287 ** get_address_of_fixed_info_3() { return &___fixed_info_3; }
	inline void set_fixed_info_3(Win32_FIXED_INFO_t3548810287 * value)
	{
		___fixed_info_3 = value;
		Il2CppCodeGenWriteBarrier((&___fixed_info_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t3548810287_marshaled_pinvoke
{
	char ___HostName_4[132];
	char ___DomainName_5[132];
	intptr_t ___CurrentDnsServer_6;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke ___DnsServerList_7;
	int32_t ___NodeType_8;
	char ___ScopeId_9[260];
	uint32_t ___EnableRouting_10;
	uint32_t ___EnableProxy_11;
	uint32_t ___EnableDns_12;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t3548810287_marshaled_com
{
	char ___HostName_4[132];
	char ___DomainName_5[132];
	intptr_t ___CurrentDnsServer_6;
	Win32_IP_ADDR_STRING_t1317420491_marshaled_com ___DnsServerList_7;
	int32_t ___NodeType_8;
	char ___ScopeId_9[260];
	uint32_t ___EnableRouting_10;
	uint32_t ___EnableProxy_11;
	uint32_t ___EnableDns_12;
};
#endif // WIN32_FIXED_INFO_T3548810287_H
#ifndef SOCKADDR_IN6_T1095689098_H
#define SOCKADDR_IN6_T1095689098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct  sockaddr_in6_t1095689098 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_len
	uint8_t ___sin6_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_family
	uint8_t ___sin6_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_3;
	// System.Net.NetworkInformation.MacOsStructs.in6_addr System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_addr
	in6_addr_t3584574828  ___sin6_addr_4;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_5;

public:
	inline static int32_t get_offset_of_sin6_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t1095689098, ___sin6_len_0)); }
	inline uint8_t get_sin6_len_0() const { return ___sin6_len_0; }
	inline uint8_t* get_address_of_sin6_len_0() { return &___sin6_len_0; }
	inline void set_sin6_len_0(uint8_t value)
	{
		___sin6_len_0 = value;
	}

	inline static int32_t get_offset_of_sin6_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t1095689098, ___sin6_family_1)); }
	inline uint8_t get_sin6_family_1() const { return ___sin6_family_1; }
	inline uint8_t* get_address_of_sin6_family_1() { return &___sin6_family_1; }
	inline void set_sin6_family_1(uint8_t value)
	{
		___sin6_family_1 = value;
	}

	inline static int32_t get_offset_of_sin6_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t1095689098, ___sin6_port_2)); }
	inline uint16_t get_sin6_port_2() const { return ___sin6_port_2; }
	inline uint16_t* get_address_of_sin6_port_2() { return &___sin6_port_2; }
	inline void set_sin6_port_2(uint16_t value)
	{
		___sin6_port_2 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t1095689098, ___sin6_flowinfo_3)); }
	inline uint32_t get_sin6_flowinfo_3() const { return ___sin6_flowinfo_3; }
	inline uint32_t* get_address_of_sin6_flowinfo_3() { return &___sin6_flowinfo_3; }
	inline void set_sin6_flowinfo_3(uint32_t value)
	{
		___sin6_flowinfo_3 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t1095689098, ___sin6_addr_4)); }
	inline in6_addr_t3584574828  get_sin6_addr_4() const { return ___sin6_addr_4; }
	inline in6_addr_t3584574828 * get_address_of_sin6_addr_4() { return &___sin6_addr_4; }
	inline void set_sin6_addr_4(in6_addr_t3584574828  value)
	{
		___sin6_addr_4 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_5() { return static_cast<int32_t>(offsetof(sockaddr_in6_t1095689098, ___sin6_scope_id_5)); }
	inline uint32_t get_sin6_scope_id_5() const { return ___sin6_scope_id_5; }
	inline uint32_t* get_address_of_sin6_scope_id_5() { return &___sin6_scope_id_5; }
	inline void set_sin6_scope_id_5(uint32_t value)
	{
		___sin6_scope_id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t1095689098_marshaled_pinvoke
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t3584574828_marshaled_pinvoke ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t1095689098_marshaled_com
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t3584574828_marshaled_com ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
#endif // SOCKADDR_IN6_T1095689098_H
#ifndef NETWORKSTREAM_T2247031156_H
#define NETWORKSTREAM_T2247031156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t2247031156  : public Stream_t694873001
{
public:
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_1;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t466607635 * ___socket_2;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_4;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(NetworkStream_t2247031156, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(NetworkStream_t2247031156, ___socket_2)); }
	inline Socket_t466607635 * get_socket_2() const { return ___socket_2; }
	inline Socket_t466607635 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t466607635 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_owns_socket_3() { return static_cast<int32_t>(offsetof(NetworkStream_t2247031156, ___owns_socket_3)); }
	inline bool get_owns_socket_3() const { return ___owns_socket_3; }
	inline bool* get_address_of_owns_socket_3() { return &___owns_socket_3; }
	inline void set_owns_socket_3(bool value)
	{
		___owns_socket_3 = value;
	}

	inline static int32_t get_offset_of_readable_4() { return static_cast<int32_t>(offsetof(NetworkStream_t2247031156, ___readable_4)); }
	inline bool get_readable_4() const { return ___readable_4; }
	inline bool* get_address_of_readable_4() { return &___readable_4; }
	inline void set_readable_4(bool value)
	{
		___readable_4 = value;
	}

	inline static int32_t get_offset_of_writeable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t2247031156, ___writeable_5)); }
	inline bool get_writeable_5() const { return ___writeable_5; }
	inline bool* get_address_of_writeable_5() { return &___writeable_5; }
	inline void set_writeable_5(bool value)
	{
		___writeable_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(NetworkStream_t2247031156, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T2247031156_H
#ifndef WIN32NETWORKINTERFACE2_T3017435268_H
#define WIN32NETWORKINTERFACE2_T3017435268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t3017435268  : public NetworkInterface_t1788753897
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t4248672084 * ___addr_2;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t5497741  ___mib4_3;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t5497741  ___mib6_4;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t186924645 * ___ip4stats_5;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t3360711166 * ___ip_if_props_6;

public:
	inline static int32_t get_offset_of_addr_2() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t3017435268, ___addr_2)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t4248672084 * get_addr_2() const { return ___addr_2; }
	inline Win32_IP_ADAPTER_ADDRESSES_t4248672084 ** get_address_of_addr_2() { return &___addr_2; }
	inline void set_addr_2(Win32_IP_ADAPTER_ADDRESSES_t4248672084 * value)
	{
		___addr_2 = value;
		Il2CppCodeGenWriteBarrier((&___addr_2), value);
	}

	inline static int32_t get_offset_of_mib4_3() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t3017435268, ___mib4_3)); }
	inline Win32_MIB_IFROW_t5497741  get_mib4_3() const { return ___mib4_3; }
	inline Win32_MIB_IFROW_t5497741 * get_address_of_mib4_3() { return &___mib4_3; }
	inline void set_mib4_3(Win32_MIB_IFROW_t5497741  value)
	{
		___mib4_3 = value;
	}

	inline static int32_t get_offset_of_mib6_4() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t3017435268, ___mib6_4)); }
	inline Win32_MIB_IFROW_t5497741  get_mib6_4() const { return ___mib6_4; }
	inline Win32_MIB_IFROW_t5497741 * get_address_of_mib6_4() { return &___mib6_4; }
	inline void set_mib6_4(Win32_MIB_IFROW_t5497741  value)
	{
		___mib6_4 = value;
	}

	inline static int32_t get_offset_of_ip4stats_5() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t3017435268, ___ip4stats_5)); }
	inline Win32IPv4InterfaceStatistics_t186924645 * get_ip4stats_5() const { return ___ip4stats_5; }
	inline Win32IPv4InterfaceStatistics_t186924645 ** get_address_of_ip4stats_5() { return &___ip4stats_5; }
	inline void set_ip4stats_5(Win32IPv4InterfaceStatistics_t186924645 * value)
	{
		___ip4stats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ip4stats_5), value);
	}

	inline static int32_t get_offset_of_ip_if_props_6() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t3017435268, ___ip_if_props_6)); }
	inline IPInterfaceProperties_t3360711166 * get_ip_if_props_6() const { return ___ip_if_props_6; }
	inline IPInterfaceProperties_t3360711166 ** get_address_of_ip_if_props_6() { return &___ip_if_props_6; }
	inline void set_ip_if_props_6(IPInterfaceProperties_t3360711166 * value)
	{
		___ip_if_props_6 = value;
		Il2CppCodeGenWriteBarrier((&___ip_if_props_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE2_T3017435268_H
#ifndef MACOSNETWORKINTERFACE_T3459145602_H
#define MACOSNETWORKINTERFACE_T3459145602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsNetworkInterface
struct  MacOsNetworkInterface_t3459145602  : public UnixNetworkInterface_t2385454068
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACE_T3459145602_H
#ifndef LINUXNETWORKINTERFACE_T483920069_H
#define LINUXNETWORKINTERFACE_T483920069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t483920069  : public UnixNetworkInterface_t2385454068
{
public:
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.LinuxNetworkInterface::type
	int32_t ___type_12;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_13;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_14;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_15;

public:
	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t483920069, ___type_12)); }
	inline int32_t get_type_12() const { return ___type_12; }
	inline int32_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(int32_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_iface_path_13() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t483920069, ___iface_path_13)); }
	inline String_t* get_iface_path_13() const { return ___iface_path_13; }
	inline String_t** get_address_of_iface_path_13() { return &___iface_path_13; }
	inline void set_iface_path_13(String_t* value)
	{
		___iface_path_13 = value;
		Il2CppCodeGenWriteBarrier((&___iface_path_13), value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_14() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t483920069, ___iface_operstate_path_14)); }
	inline String_t* get_iface_operstate_path_14() const { return ___iface_operstate_path_14; }
	inline String_t** get_address_of_iface_operstate_path_14() { return &___iface_operstate_path_14; }
	inline void set_iface_operstate_path_14(String_t* value)
	{
		___iface_operstate_path_14 = value;
		Il2CppCodeGenWriteBarrier((&___iface_operstate_path_14), value);
	}

	inline static int32_t get_offset_of_iface_flags_path_15() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t483920069, ___iface_flags_path_15)); }
	inline String_t* get_iface_flags_path_15() const { return ___iface_flags_path_15; }
	inline String_t** get_address_of_iface_flags_path_15() { return &___iface_flags_path_15; }
	inline void set_iface_flags_path_15(String_t* value)
	{
		___iface_flags_path_15 = value;
		Il2CppCodeGenWriteBarrier((&___iface_flags_path_15), value);
	}
};

struct LinuxNetworkInterface_t483920069_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.NetworkInformation.LinuxNetworkInterface::<>f__switch$map3
	Dictionary_2_t1021693654 * ___U3CU3Ef__switchU24map3_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_16() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t483920069_StaticFields, ___U3CU3Ef__switchU24map3_16)); }
	inline Dictionary_2_t1021693654 * get_U3CU3Ef__switchU24map3_16() const { return ___U3CU3Ef__switchU24map3_16; }
	inline Dictionary_2_t1021693654 ** get_address_of_U3CU3Ef__switchU24map3_16() { return &___U3CU3Ef__switchU24map3_16; }
	inline void set_U3CU3Ef__switchU24map3_16(Dictionary_2_t1021693654 * value)
	{
		___U3CU3Ef__switchU24map3_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACE_T483920069_H
#ifndef WIN32UNICASTIPADDRESSINFORMATION_T2430628829_H
#define WIN32UNICASTIPADDRESSINFORMATION_T2430628829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct  Win32UnicastIPAddressInformation_t2430628829  : public UnicastIPAddressInformation_t25488820
{
public:
	// System.Int32 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::if_index
	int32_t ___if_index_0;
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS System.Net.NetworkInformation.Win32UnicastIPAddressInformation::info
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134  ___info_1;

public:
	inline static int32_t get_offset_of_if_index_0() { return static_cast<int32_t>(offsetof(Win32UnicastIPAddressInformation_t2430628829, ___if_index_0)); }
	inline int32_t get_if_index_0() const { return ___if_index_0; }
	inline int32_t* get_address_of_if_index_0() { return &___if_index_0; }
	inline void set_if_index_0(int32_t value)
	{
		___if_index_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(Win32UnicastIPAddressInformation_t2430628829, ___info_1)); }
	inline Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134  get_info_1() const { return ___info_1; }
	inline Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134 * get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134  value)
	{
		___info_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32UNICASTIPADDRESSINFORMATION_T2430628829_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (Win32_MIBICMPINFO_t806084661)+ sizeof (RuntimeObject), sizeof(Win32_MIBICMPINFO_t806084661 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1500[2] = 
{
	Win32_MIBICMPINFO_t806084661::get_offset_of_InStats_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPINFO_t806084661::get_offset_of_OutStats_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (Win32_MIBICMPSTATS_t2795648086)+ sizeof (RuntimeObject), sizeof(Win32_MIBICMPSTATS_t2795648086 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1501[13] = 
{
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_Msgs_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_Errors_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_DestUnreachs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_TimeExcds_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_ParmProbs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_SrcQuenchs_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_Redirects_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_Echos_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_EchoReps_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_Timestamps_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_TimestampReps_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_AddrMasks_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t2795648086::get_offset_of_AddrMaskReps_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (IcmpV6Statistics_t3221687514), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (MibIcmpV6Statistics_t766298242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1503[1] = 
{
	MibIcmpV6Statistics_t766298242::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (IcmpV6MessageTypes_t3523028033), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1504[15] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (Win32IcmpV6Statistics_t218572939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1505[2] = 
{
	Win32IcmpV6Statistics_t218572939::get_offset_of_iin_0(),
	Win32IcmpV6Statistics_t218572939::get_offset_of_iout_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (Win32_MIB_ICMP_EX_t59794716)+ sizeof (RuntimeObject), sizeof(Win32_MIB_ICMP_EX_t59794716_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1506[2] = 
{
	Win32_MIB_ICMP_EX_t59794716::get_offset_of_InStats_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_ICMP_EX_t59794716::get_offset_of_OutStats_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (Win32_MIBICMPSTATS_EX_t3168409432)+ sizeof (RuntimeObject), sizeof(Win32_MIBICMPSTATS_EX_t3168409432_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1507[3] = 
{
	Win32_MIBICMPSTATS_EX_t3168409432::get_offset_of_Msgs_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_EX_t3168409432::get_offset_of_Errors_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_EX_t3168409432::get_offset_of_Counts_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (ifa_ifu_t1162969782)+ sizeof (RuntimeObject), sizeof(ifa_ifu_t1162969782 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1508[2] = 
{
	ifa_ifu_t1162969782::get_offset_of_ifu_broadaddr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifa_ifu_t1162969782::get_offset_of_ifu_dstaddr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (ifaddrs_t2290526693)+ sizeof (RuntimeObject), sizeof(ifaddrs_t2290526693_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1509[7] = 
{
	ifaddrs_t2290526693::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2290526693::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2290526693::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2290526693::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2290526693::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2290526693::get_offset_of_ifa_ifu_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2290526693::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (sockaddr_in_t4028229695)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t4028229695 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1510[3] = 
{
	sockaddr_in_t4028229695::get_offset_of_sin_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t4028229695::get_offset_of_sin_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t4028229695::get_offset_of_sin_addr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (sockaddr_in6_t3689116072)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t3689116072_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1511[5] = 
{
	sockaddr_in6_t3689116072::get_offset_of_sin6_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t3689116072::get_offset_of_sin6_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t3689116072::get_offset_of_sin6_flowinfo_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t3689116072::get_offset_of_sin6_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t3689116072::get_offset_of_sin6_scope_id_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (in6_addr_t2494137227)+ sizeof (RuntimeObject), sizeof(in6_addr_t2494137227_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1512[1] = 
{
	in6_addr_t2494137227::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (sockaddr_ll_t2837141694)+ sizeof (RuntimeObject), sizeof(sockaddr_ll_t2837141694_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1513[7] = 
{
	sockaddr_ll_t2837141694::get_offset_of_sll_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t2837141694::get_offset_of_sll_protocol_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t2837141694::get_offset_of_sll_ifindex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t2837141694::get_offset_of_sll_hatype_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t2837141694::get_offset_of_sll_pkttype_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t2837141694::get_offset_of_sll_halen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t2837141694::get_offset_of_sll_addr_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (LinuxArpHardware_t1359242568)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1514[11] = 
{
	LinuxArpHardware_t1359242568::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (ifaddrs_t696232374)+ sizeof (RuntimeObject), sizeof(ifaddrs_t696232374_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1515[7] = 
{
	ifaddrs_t696232374::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t696232374::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t696232374::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t696232374::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t696232374::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t696232374::get_offset_of_ifa_dstaddr_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t696232374::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (sockaddr_t3458098367)+ sizeof (RuntimeObject), sizeof(sockaddr_t3458098367 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1516[2] = 
{
	sockaddr_t3458098367::get_offset_of_sa_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_t3458098367::get_offset_of_sa_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (sockaddr_in_t614512486)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t614512486 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1517[4] = 
{
	sockaddr_in_t614512486::get_offset_of_sin_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t614512486::get_offset_of_sin_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t614512486::get_offset_of_sin_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t614512486::get_offset_of_sin_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (in6_addr_t3584574828)+ sizeof (RuntimeObject), sizeof(in6_addr_t3584574828_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1518[1] = 
{
	in6_addr_t3584574828::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (sockaddr_in6_t1095689098)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t1095689098_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1519[6] = 
{
	sockaddr_in6_t1095689098::get_offset_of_sin6_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t1095689098::get_offset_of_sin6_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t1095689098::get_offset_of_sin6_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t1095689098::get_offset_of_sin6_flowinfo_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t1095689098::get_offset_of_sin6_addr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t1095689098::get_offset_of_sin6_scope_id_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (sockaddr_dl_t2923860787)+ sizeof (RuntimeObject), sizeof(sockaddr_dl_t2923860787_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1520[8] = 
{
	sockaddr_dl_t2923860787::get_offset_of_sdl_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t2923860787::get_offset_of_sdl_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t2923860787::get_offset_of_sdl_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t2923860787::get_offset_of_sdl_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t2923860787::get_offset_of_sdl_nlen_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t2923860787::get_offset_of_sdl_alen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t2923860787::get_offset_of_sdl_slen_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t2923860787::get_offset_of_sdl_data_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (MacOsArpHardware_t2846532272)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1521[7] = 
{
	MacOsArpHardware_t2846532272::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (MulticastIPAddressInformation_t3990630896), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (MulticastIPAddressInformationImpl_t1982907726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1523[3] = 
{
	MulticastIPAddressInformationImpl_t1982907726::get_offset_of_address_0(),
	MulticastIPAddressInformationImpl_t1982907726::get_offset_of_is_dns_eligible_1(),
	MulticastIPAddressInformationImpl_t1982907726::get_offset_of_is_transient_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (MulticastIPAddressInformationCollection_t3414323632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1524[1] = 
{
	MulticastIPAddressInformationCollection_t3414323632::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (MulticastIPAddressInformationImplCollection_t2411369525), -1, sizeof(MulticastIPAddressInformationImplCollection_t2411369525_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1525[2] = 
{
	MulticastIPAddressInformationImplCollection_t2411369525_StaticFields::get_offset_of_Empty_1(),
	MulticastIPAddressInformationImplCollection_t2411369525::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (NetBiosNodeType_t3335870477)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1526[6] = 
{
	NetBiosNodeType_t3335870477::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (NetworkAvailabilityEventArgs_t4198220499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1527[1] = 
{
	NetworkAvailabilityEventArgs_t4198220499::get_offset_of_available_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (NetworkChange_t1581737281), -1, sizeof(NetworkChange_t1581737281_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1528[2] = 
{
	NetworkChange_t1581737281_StaticFields::get_offset_of_NetworkAddressChanged_0(),
	NetworkChange_t1581737281_StaticFields::get_offset_of_NetworkAvailabilityChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (NetworkInformationAccess_t3759522151)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1529[4] = 
{
	NetworkInformationAccess_t3759522151::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (NetworkInformationException_t2838903247), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1530[1] = 
{
	NetworkInformationException_t2838903247::get_offset_of_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (NetworkInterface_t1788753897), -1, sizeof(NetworkInterface_t1788753897_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1531[2] = 
{
	NetworkInterface_t1788753897_StaticFields::get_offset_of_windowsVer51_0(),
	NetworkInterface_t1788753897_StaticFields::get_offset_of_runningOnUnix_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (UnixNetworkInterface_t2385454068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1532[7] = 
{
	UnixNetworkInterface_t2385454068::get_offset_of_ipv4stats_2(),
	UnixNetworkInterface_t2385454068::get_offset_of_ipproperties_3(),
	UnixNetworkInterface_t2385454068::get_offset_of_name_4(),
	UnixNetworkInterface_t2385454068::get_offset_of_index_5(),
	UnixNetworkInterface_t2385454068::get_offset_of_addresses_6(),
	UnixNetworkInterface_t2385454068::get_offset_of_macAddress_7(),
	UnixNetworkInterface_t2385454068::get_offset_of_type_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (LinuxNetworkInterface_t483920069), -1, sizeof(LinuxNetworkInterface_t483920069_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1533[8] = 
{
	0,
	0,
	0,
	LinuxNetworkInterface_t483920069::get_offset_of_type_12(),
	LinuxNetworkInterface_t483920069::get_offset_of_iface_path_13(),
	LinuxNetworkInterface_t483920069::get_offset_of_iface_operstate_path_14(),
	LinuxNetworkInterface_t483920069::get_offset_of_iface_flags_path_15(),
	LinuxNetworkInterface_t483920069_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (MacOsNetworkInterface_t3459145602), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1534[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (Win32NetworkInterface2_t3017435268), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1535[5] = 
{
	Win32NetworkInterface2_t3017435268::get_offset_of_addr_2(),
	Win32NetworkInterface2_t3017435268::get_offset_of_mib4_3(),
	Win32NetworkInterface2_t3017435268::get_offset_of_mib6_4(),
	Win32NetworkInterface2_t3017435268::get_offset_of_ip4stats_5(),
	Win32NetworkInterface2_t3017435268::get_offset_of_ip_if_props_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (NetworkInterfaceComponent_t3929417507)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1536[3] = 
{
	NetworkInterfaceComponent_t3929417507::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (NetworkInterfaceType_t2306629260)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1537[26] = 
{
	NetworkInterfaceType_t2306629260::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (OperationalStatus_t2716097632)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1538[8] = 
{
	OperationalStatus_t2716097632::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (PhysicalAddress_t3400300738), -1, sizeof(PhysicalAddress_t3400300738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1539[3] = 
{
	0,
	PhysicalAddress_t3400300738_StaticFields::get_offset_of_None_1(),
	PhysicalAddress_t3400300738::get_offset_of_bytes_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (Ping_t3141386893), -1, sizeof(Ping_t3141386893_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1540[11] = 
{
	0,
	0,
	0,
	0,
	Ping_t3141386893_StaticFields::get_offset_of_PingBinPaths_8(),
	Ping_t3141386893_StaticFields::get_offset_of_PingBinPath_9(),
	Ping_t3141386893_StaticFields::get_offset_of_default_buffer_10(),
	Ping_t3141386893_StaticFields::get_offset_of_canSendPrivileged_11(),
	Ping_t3141386893::get_offset_of_worker_12(),
	Ping_t3141386893::get_offset_of_user_async_state_13(),
	Ping_t3141386893::get_offset_of_PingCompleted_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (cap_user_header_t_t312072441)+ sizeof (RuntimeObject), sizeof(cap_user_header_t_t312072441 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1541[2] = 
{
	cap_user_header_t_t312072441::get_offset_of_version_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	cap_user_header_t_t312072441::get_offset_of_pid_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (cap_user_data_t_t3609000153)+ sizeof (RuntimeObject), sizeof(cap_user_data_t_t3609000153 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1542[3] = 
{
	cap_user_data_t_t3609000153::get_offset_of_effective_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	cap_user_data_t_t3609000153::get_offset_of_permitted_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	cap_user_data_t_t3609000153::get_offset_of_inheritable_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (IcmpMessage_t713404167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1543[1] = 
{
	IcmpMessage_t713404167::get_offset_of_bytes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (U3CSendAsyncU3Ec__AnonStorey6_t3414844710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1544[5] = 
{
	U3CSendAsyncU3Ec__AnonStorey6_t3414844710::get_offset_of_address_0(),
	U3CSendAsyncU3Ec__AnonStorey6_t3414844710::get_offset_of_timeout_1(),
	U3CSendAsyncU3Ec__AnonStorey6_t3414844710::get_offset_of_buffer_2(),
	U3CSendAsyncU3Ec__AnonStorey6_t3414844710::get_offset_of_options_3(),
	U3CSendAsyncU3Ec__AnonStorey6_t3414844710::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (PingCompletedEventArgs_t4181080639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[1] = 
{
	PingCompletedEventArgs_t4181080639::get_offset_of_reply_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (PingException_t3785180175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (PingOptions_t1732441359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1547[2] = 
{
	PingOptions_t1732441359::get_offset_of_ttl_0(),
	PingOptions_t1732441359::get_offset_of_dont_fragment_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (PingReply_t927847823), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[5] = 
{
	PingReply_t927847823::get_offset_of_address_0(),
	PingReply_t927847823::get_offset_of_buffer_1(),
	PingReply_t927847823::get_offset_of_options_2(),
	PingReply_t927847823::get_offset_of_rtt_3(),
	PingReply_t927847823::get_offset_of_status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (PrefixOrigin_t663493939)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1549[6] = 
{
	PrefixOrigin_t663493939::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (SuffixOrigin_t2253785573)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1550[7] = 
{
	SuffixOrigin_t2253785573::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (TcpConnectionInformation_t861646105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (TcpConnectionInformationImpl_t4206775385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1552[3] = 
{
	TcpConnectionInformationImpl_t4206775385::get_offset_of_local_0(),
	TcpConnectionInformationImpl_t4206775385::get_offset_of_remote_1(),
	TcpConnectionInformationImpl_t4206775385::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (TcpState_t3726442284)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1553[14] = 
{
	TcpState_t3726442284::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (TcpStatistics_t2631061388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (MibTcpStatistics_t2385316820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1555[1] = 
{
	MibTcpStatistics_t2385316820::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (Win32TcpStatistics_t4265221714), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1556[1] = 
{
	Win32TcpStatistics_t4265221714::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (Win32_MIB_TCPSTATS_t1348245028)+ sizeof (RuntimeObject), sizeof(Win32_MIB_TCPSTATS_t1348245028 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1557[15] = 
{
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_RtoAlgorithm_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_RtoMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_RtoMax_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_MaxConn_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_ActiveOpens_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_PassiveOpens_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_AttemptFails_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_EstabResets_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_CurrEstab_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_InSegs_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_OutSegs_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_RetransSegs_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_InErrs_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_OutRsts_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1348245028::get_offset_of_NumConns_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (UdpStatistics_t2566375289), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (MibUdpStatistics_t2400994538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1559[1] = 
{
	MibUdpStatistics_t2400994538::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (Win32UdpStatistics_t1776017683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1560[1] = 
{
	Win32UdpStatistics_t1776017683::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (Win32_MIB_UDPSTATS_t3110808585)+ sizeof (RuntimeObject), sizeof(Win32_MIB_UDPSTATS_t3110808585 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1561[5] = 
{
	Win32_MIB_UDPSTATS_t3110808585::get_offset_of_InDatagrams_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t3110808585::get_offset_of_NoPorts_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t3110808585::get_offset_of_InErrors_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t3110808585::get_offset_of_OutDatagrams_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t3110808585::get_offset_of_NumAddrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (UnicastIPAddressInformation_t25488820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (Win32UnicastIPAddressInformation_t2430628829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1563[2] = 
{
	Win32UnicastIPAddressInformation_t2430628829::get_offset_of_if_index_0(),
	Win32UnicastIPAddressInformation_t2430628829::get_offset_of_info_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (LinuxUnicastIPAddressInformation_t797410516), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1564[1] = 
{
	LinuxUnicastIPAddressInformation_t797410516::get_offset_of_address_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (UnicastIPAddressInformationCollection_t221438517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1565[1] = 
{
	UnicastIPAddressInformationCollection_t221438517::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (UnicastIPAddressInformationImplCollection_t3081499236), -1, sizeof(UnicastIPAddressInformationImplCollection_t3081499236_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1566[2] = 
{
	UnicastIPAddressInformationImplCollection_t3081499236_StaticFields::get_offset_of_Empty_1(),
	UnicastIPAddressInformationImplCollection_t3081499236::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (Win32_FIXED_INFO_t3548810287), sizeof(Win32_FIXED_INFO_t3548810287_marshaled_pinvoke), sizeof(Win32_FIXED_INFO_t3548810287_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1567[13] = 
{
	0,
	0,
	0,
	Win32_FIXED_INFO_t3548810287_StaticFields::get_offset_of_fixed_info_3(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_HostName_4(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_DomainName_5(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_CurrentDnsServer_6(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_DnsServerList_7(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_NodeType_8(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_ScopeId_9(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_EnableRouting_10(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_EnableProxy_11(),
	Win32_FIXED_INFO_t3548810287::get_offset_of_EnableDns_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (AlignmentUnion_t537482936)+ sizeof (RuntimeObject), sizeof(AlignmentUnion_t537482936 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1568[3] = 
{
	AlignmentUnion_t537482936::get_offset_of_Alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t537482936::get_offset_of_Length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t537482936::get_offset_of_IfIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (Win32_IP_ADAPTER_ADDRESSES_t4248672084), sizeof(Win32_IP_ADAPTER_ADDRESSES_t4248672084_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1569[22] = 
{
	0,
	0,
	0,
	0,
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_Alignment_4(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_Next_5(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_AdapterName_6(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_FirstUnicastAddress_7(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_FirstAnycastAddress_8(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_FirstMulticastAddress_9(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_FirstDnsServerAddress_10(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_DnsSuffix_11(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_Description_12(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_FriendlyName_13(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_PhysicalAddress_14(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_PhysicalAddressLength_15(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_Flags_16(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_Mtu_17(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_IfType_18(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_OperStatus_19(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_Ipv6IfIndex_20(),
	Win32_IP_ADAPTER_ADDRESSES_t4248672084::get_offset_of_ZoneIndices_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (Win32_IP_ADAPTER_INFO_t1617871487), sizeof(Win32_IP_ADAPTER_INFO_t1617871487_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1570[21] = 
{
	0,
	0,
	0,
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_Next_3(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_ComboIndex_4(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_AdapterName_5(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_Description_6(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_AddressLength_7(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_Address_8(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_Index_9(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_Type_10(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_DhcpEnabled_11(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_CurrentIpAddress_12(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_IpAddressList_13(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_GatewayList_14(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_DhcpServer_15(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_HaveWins_16(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_PrimaryWinsServer_17(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_SecondaryWinsServer_18(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_LeaseObtained_19(),
	Win32_IP_ADAPTER_INFO_t1617871487::get_offset_of_LeaseExpires_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (Win32_MIB_IFROW_t5497741)+ sizeof (RuntimeObject), sizeof(Win32_MIB_IFROW_t5497741_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1571[27] = 
{
	0,
	0,
	0,
	Win32_MIB_IFROW_t5497741::get_offset_of_Name_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_Index_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_Type_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_Mtu_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_Speed_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_PhysAddrLen_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_PhysAddr_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_AdminStatus_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_OperStatus_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_LastChange_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_InOctets_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_InUcastPkts_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_InNUcastPkts_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_InDiscards_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_InErrors_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_InUnknownProtos_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_OutOctets_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_OutUcastPkts_20() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_OutNUcastPkts_21() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_OutDiscards_22() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_OutErrors_23() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_OutQLen_24() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_DescrLen_25() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t5497741::get_offset_of_Descr_26() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (Win32_IP_ADDR_STRING_t1317420491)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADDR_STRING_t1317420491_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1572[4] = 
{
	Win32_IP_ADDR_STRING_t1317420491::get_offset_of_Next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1317420491::get_offset_of_IpAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1317420491::get_offset_of_IpMask_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1317420491::get_offset_of_Context_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (Win32LengthFlagsUnion_t1550459756)+ sizeof (RuntimeObject), sizeof(Win32LengthFlagsUnion_t1550459756 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1573[4] = 
{
	0,
	0,
	Win32LengthFlagsUnion_t1550459756::get_offset_of_Length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32LengthFlagsUnion_t1550459756::get_offset_of_Flags_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1574[3] = 
{
	Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ANYCAST_ADDRESS_t1719416764::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1575[3] = 
{
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t2506981708::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1576[3] = 
{
	Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2065770837::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1577[10] = 
{
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_PrefixOrigin_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_SuffixOrigin_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_DadState_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_ValidLifetime_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_PreferredLifetime_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_LeaseLifetime_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1811745134::get_offset_of_OnLinkPrefixLength_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (Win32_SOCKADDR_t3284582552)+ sizeof (RuntimeObject), sizeof(Win32_SOCKADDR_t3284582552_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1578[2] = 
{
	Win32_SOCKADDR_t3284582552::get_offset_of_AddressFamily_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_SOCKADDR_t3284582552::get_offset_of_AddressData_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (Win32_SOCKET_ADDRESS_t315120776)+ sizeof (RuntimeObject), sizeof(Win32_SOCKET_ADDRESS_t315120776 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1579[3] = 
{
	0,
	Win32_SOCKET_ADDRESS_t315120776::get_offset_of_Sockaddr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_SOCKET_ADDRESS_t315120776::get_offset_of_SockaddrLength_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (AuthenticatedStream_t2751539955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1580[2] = 
{
	AuthenticatedStream_t2751539955::get_offset_of_innerStream_1(),
	AuthenticatedStream_t2751539955::get_offset_of_leaveStreamOpen_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (AuthenticationLevel_t1427068837)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1581[4] = 
{
	AuthenticationLevel_t1427068837::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (NegotiateStream_t2274969796), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1582[2] = 
{
	NegotiateStream_t2274969796::get_offset_of_readTimeout_3(),
	NegotiateStream_t2274969796::get_offset_of_writeTimeout_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (ProtectionLevel_t1125977288)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1583[4] = 
{
	ProtectionLevel_t1125977288::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (SslPolicyErrors_t2820001216)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1584[5] = 
{
	SslPolicyErrors_t2820001216::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (SslStream_t2885149954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1585[3] = 
{
	SslStream_t2885149954::get_offset_of_ssl_stream_3(),
	SslStream_t2885149954::get_offset_of_validation_callback_4(),
	SslStream_t2885149954::get_offset_of_selection_callback_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1402348074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1586[2] = 
{
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1402348074::get_offset_of_clientCertificates_0(),
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1402348074::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t957658941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1587[2] = 
{
	U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t957658941::get_offset_of_serverCertificate_0(),
	U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t957658941::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (AddressFamily_t3985073988)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1588[32] = 
{
	AddressFamily_t3985073988::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (IOControlCode_t4181008199)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1589[35] = 
{
	IOControlCode_t4181008199::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (IPPacketInformation_t994212700)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1590[2] = 
{
	IPPacketInformation_t994212700::get_offset_of_address_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IPPacketInformation_t994212700::get_offset_of_iface_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (IPv6MulticastOption_t3527735721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1591[2] = 
{
	IPv6MulticastOption_t3527735721::get_offset_of_group_0(),
	IPv6MulticastOption_t3527735721::get_offset_of_ifIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (LingerOption_t2103409930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1592[2] = 
{
	LingerOption_t2103409930::get_offset_of_enabled_0(),
	LingerOption_t2103409930::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (MulticastOption_t1308785084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1593[3] = 
{
	MulticastOption_t1308785084::get_offset_of_group_0(),
	MulticastOption_t1308785084::get_offset_of_local_1(),
	MulticastOption_t1308785084::get_offset_of_iface_index_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (NetworkStream_t2247031156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1594[6] = 
{
	NetworkStream_t2247031156::get_offset_of_access_1(),
	NetworkStream_t2247031156::get_offset_of_socket_2(),
	NetworkStream_t2247031156::get_offset_of_owns_socket_3(),
	NetworkStream_t2247031156::get_offset_of_readable_4(),
	NetworkStream_t2247031156::get_offset_of_writeable_5(),
	NetworkStream_t2247031156::get_offset_of_disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (Timeout_t933903443), -1, sizeof(Timeout_t933903443_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1595[1] = 
{
	Timeout_t933903443_StaticFields::get_offset_of_Infinite_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (ProtocolFamily_t4202596618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1596[32] = 
{
	ProtocolFamily_t4202596618::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (ProtocolType_t3119533966)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1597[26] = 
{
	ProtocolType_t3119533966::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (SelectMode_t3374635220)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1598[4] = 
{
	SelectMode_t3374635220::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (SendPacketsElement_t1089969814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1599[5] = 
{
	SendPacketsElement_t1089969814::get_offset_of_U3CBufferU3Ek__BackingField_0(),
	SendPacketsElement_t1089969814::get_offset_of_U3CCountU3Ek__BackingField_1(),
	SendPacketsElement_t1089969814::get_offset_of_U3CEndOfPacketU3Ek__BackingField_2(),
	SendPacketsElement_t1089969814::get_offset_of_U3CFilePathU3Ek__BackingField_3(),
	SendPacketsElement_t1089969814::get_offset_of_U3COffsetU3Ek__BackingField_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

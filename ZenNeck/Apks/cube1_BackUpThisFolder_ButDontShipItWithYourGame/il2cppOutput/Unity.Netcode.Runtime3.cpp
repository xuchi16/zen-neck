﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>
struct Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603;
// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A;
// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
// System.Collections.Generic.IEqualityComparer`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct IEqualityComparer_1_tE64C0B9EDA2F5BACAB333B43424ECA25DB52CAF1;
// System.Collections.Generic.IReadOnlyList`1<Unity.Netcode.NetworkClient>
struct IReadOnlyList_1_t0179361F5E46124A5F314B3F8A3BBF6C9160E9D7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct KeyCollection_t44A4E49B5C14FFA8C521AFB181691FE9E37EBD40;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.UInt64>
struct KeyCollection_tFFA90686DDD4B2C580EB4F094C43950126BE2521;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319;
// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkInterface>
struct List_1_tC673C156FBD962AEDC0C4957C82DD522010A9BC6;
// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkProtocol>
struct List_1_t55E70A01F2B19225279AEE9C81F69F51DE1781C0;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkPrefab>
struct List_1_tE788305FC69BA0DB2AEFE4DE86FACD7D09507CB6;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Byte>
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkEvent>
struct UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct UnsafeList_1_t5D77D9399869F973DD7861206FE7B0BB5254BEDA;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct UnsafeList_1_t501C48EF6B212CE7B242B47AE1184A6DE456C629;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct ValueCollection_tD491792D7459A4B5FC0EBC6F918A562110281CBD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.UInt64>
struct ValueCollection_t95A51D5C2411347508C15912A00FF829518C0B2F;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>[]
struct EntryU5BU5D_t035D87369BEA3523150D87EEBF1E2387D9C9D61D;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,System.UInt64>[]
struct EntryU5BU5D_t56005863DECCE8E72147EC85DD4BB7BE8C9C2518;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>[]
struct EntryU5BU5D_tD02EF8C2CDB271018A115A525F07124C6A158D2D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.Netcode.Transports.UTP.BatchedReceiveQueue
struct BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Unity.Netcode.IDeferredNetworkMessageManager
struct IDeferredNetworkMessageManager_t16B56EB08D165ABBD988A4AD6F3C196CDA906B91;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_tE2C13758A950A5C77D2682C15F47914B13AC1C41;
// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor
struct INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA;
// Unity.Netcode.IRealTimeProvider
struct IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Unity.Collections.NativeQueueBlockPoolData
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87;
// Unity.Collections.NativeQueueData
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
// Unity.Netcode.NetworkConnectionManager
struct NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// Unity.Netcode.NetworkMessageManager
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468;
// Unity.Netcode.NetworkMetricsManager
struct NetworkMetricsManager_tD9F432E8A6803DEC0B9BEB12E72EDD552AEB8987;
// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
// Unity.Netcode.NetworkPrefabs
struct NetworkPrefabs_t1DCB21A957C1C64646BD413900E696049BC8A324;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.Netcode.RealTimeProvider
struct RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Netcode.Transports.UTP.SecretsLoaderHelper
struct SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Type
struct Type_t;
// Unity.Netcode.Transports.UNET.UNetTransport
struct UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A;
// Unity.Netcode.Transports.UTP.UnityTransport
struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4;
// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14;
// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEvent_tFC4FE8610A831452CA942B169FB11657DA90B9EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2B729244E3D5A04BA740FAA8DCEE1B8DDBA97E;
IL2CPP_EXTERN_C String_t* _stringLiteral16A1F44E626C6E51CC4568E9D038831D467CB052;
IL2CPP_EXTERN_C String_t* _stringLiteral16AEF74423B1755030046BE7AB19FAAE3335B198;
IL2CPP_EXTERN_C String_t* _stringLiteral1812ED2F2239F62391593B71DE1096D7784E218F;
IL2CPP_EXTERN_C String_t* _stringLiteral19E695215E8746B92A73A3DC5BC42B039244F6CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA280C4AC596D1757D38ADC504F4D2A8588BE09;
IL2CPP_EXTERN_C String_t* _stringLiteral21485A24450AF24EBB33C80E94F925D7B879E91F;
IL2CPP_EXTERN_C String_t* _stringLiteral357BFB1EF804083E0B58DA274A5B38ADF23E439E;
IL2CPP_EXTERN_C String_t* _stringLiteral35C06E70CFFAB6D4B1FA8BA3D4CC946B326C7AD6;
IL2CPP_EXTERN_C String_t* _stringLiteral4198AF98259608DACAA2B6A8AA1ED829824AB979;
IL2CPP_EXTERN_C String_t* _stringLiteral5612A49B705A4FE2E8A26462FE59C5D016593F5C;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral644832CF60047B3D9FAB0A389B880AEF5B87FE70;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral6992BAB5D0DA18DBB6B8CC0786AA2CE98F091D68;
IL2CPP_EXTERN_C String_t* _stringLiteral6AADA7F1F15F6777EC5A389193BBBC18C07F0F4D;
IL2CPP_EXTERN_C String_t* _stringLiteral6CBC2672C8D6CA64BE38741D0052878AD0261970;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9746450EDAE716B0E0568BD80DF1E0892E43FB;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD97639EEDDEB8C0AD70322C13DC2E403EDE616;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD98782E6D2FF48AC2FF228F3F2B3178F849DF9;
IL2CPP_EXTERN_C String_t* _stringLiteral83DED9A821A680A9C3EF0C38B2DEC6622C2BD121;
IL2CPP_EXTERN_C String_t* _stringLiteral83E6526E6CC6F86D0F81148E48FAA9BD354B446B;
IL2CPP_EXTERN_C String_t* _stringLiteral8611D3B69B0B715A192FABBEFCCAD48DB5074B46;
IL2CPP_EXTERN_C String_t* _stringLiteral9033E767C7E2FEB776CA0B4C15369E63C995C4CD;
IL2CPP_EXTERN_C String_t* _stringLiteral9147515337D6D3658C1F571703F60A99E6815FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral96C502F2672EE8CA635B0E03F0F848B19683110C;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA9192249DD16DC6C6336314648F0964730DA50;
IL2CPP_EXTERN_C String_t* _stringLiteralA19DFA80D01AE3F3CE45DD710605443066726F4F;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C52582463E83DEFCA4FAE51BCA879063462DA0;
IL2CPP_EXTERN_C String_t* _stringLiteralAE8F3F50F8D6A51A29E3EBD0A31F00C86B93A7CF;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4B44B128888B4302BD7BE7931C43B8DB6A7EE9;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B9C347346F5D881C6912E306B81D88C59210B8;
IL2CPP_EXTERN_C String_t* _stringLiteralD5476B4D26F0D93405A47E7865C0C4B7FC148874;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF4ADD2D57F4BAB0951244413CF80823252C53CF;
IL2CPP_EXTERN_C String_t* _stringLiteralE132B6356450125CD39CFDC2E7AE7DFD49FA3F2D;
IL2CPP_EXTERN_C String_t* _stringLiteralE40160D9DA52E2A9F3C180FBFDED668C63CED0AD;
IL2CPP_EXTERN_C String_t* _stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4;
IL2CPP_EXTERN_C String_t* _stringLiteralF228735828A21EB536BD7D1B8582E1A731D46466;
IL2CPP_EXTERN_C String_t* _stringLiteralF258902371641A17276D7E53D25B16B6C26A890B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC81C1719B246FAF2B02FB9B639685CDC97C4C8D;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Run_TisSendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_m8805B81AA5D1503F36E31919FA2D1A9ACA2D6AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnectionManager_GetServerTransportId_mF951847AF72F8F2F0C4F6D842D32633B249A7846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnreliableSequencedPipelineStage_t625184725960F7CD0FC7FF99316E91B304E581AC_0_0_0_var;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14;;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com;;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke;
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t035D87369BEA3523150D87EEBF1E2387D9C9D61D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t44A4E49B5C14FFA8C521AFB181691FE9E37EBD40* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD491792D7459A4B5FC0EBC6F918A562110281CBD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t56005863DECCE8E72147EC85DD4BB7BE8C9C2518* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tFFA90686DDD4B2C580EB4F094C43950126BE2521* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t95A51D5C2411347508C15912A00FF829518C0B2F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD02EF8C2CDB271018A115A525F07124C6A158D2D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
};
struct Il2CppArrayBounds;

// Unity.Netcode.Transports.UTP.BatchedReceiveQueue
struct BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA  : public RuntimeObject
{
	// System.Byte[] Unity.Netcode.Transports.UTP.BatchedReceiveQueue::m_Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Data_0;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedReceiveQueue::m_Offset
	int32_t ___m_Offset_1;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedReceiveQueue::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60  : public RuntimeObject
{
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* ___m_SharedOrderChannels_27;
};

// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F  : public RuntimeObject
{
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64  : public RuntimeObject
{
	// System.Boolean Unity.Netcode.NetworkClient::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_0;
	// System.Boolean Unity.Netcode.NetworkClient::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_1;
	// System.Boolean Unity.Netcode.NetworkClient::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_2;
	// System.Boolean Unity.Netcode.NetworkClient::<IsApproved>k__BackingField
	bool ___U3CIsApprovedU3Ek__BackingField_3;
	// System.UInt64 Unity.Netcode.NetworkClient::ClientId
	uint64_t ___ClientId_4;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkClient::PlayerObject
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___PlayerObject_5;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkClient::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_6;
};

// Unity.Netcode.NetworkConnectionManager
struct NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1  : public RuntimeObject
{
	// System.String Unity.Netcode.NetworkConnectionManager::<DisconnectReason>k__BackingField
	String_t* ___U3CDisconnectReasonU3Ek__BackingField_0;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkConnectionManager::OnClientConnectedCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientConnectedCallback_1;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkConnectionManager::OnClientDisconnectCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientDisconnectCallback_2;
	// System.Action Unity.Netcode.NetworkConnectionManager::OnTransportFailure
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTransportFailure_3;
	// System.Boolean Unity.Netcode.NetworkConnectionManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkConnectionManager::NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManager_5;
	// Unity.Netcode.NetworkMessageManager Unity.Netcode.NetworkConnectionManager::MessageManager
	NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___MessageManager_6;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkConnectionManager::LocalClient
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* ___LocalClient_7;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkConnectionManager::ClientsToApprove
	Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A* ___ClientsToApprove_8;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkConnectionManager::ConnectedClients
	Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF* ___ConnectedClients_9;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkConnectionManager::ClientIdToTransportIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___ClientIdToTransportIdMap_10;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkConnectionManager::TransportIdToClientIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___TransportIdToClientIdMap_11;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkConnectionManager::ConnectedClientsList
	List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5* ___ConnectedClientsList_12;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkConnectionManager::ConnectedClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___ConnectedClientIds_13;
	// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkConnectionManager::ConnectionApprovalCallback
	Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B* ___ConnectionApprovalCallback_14;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkConnectionManager::m_PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___m_PendingClients_15;
	// UnityEngine.Coroutine Unity.Netcode.NetworkConnectionManager::LocalClientApprovalCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___LocalClientApprovalCoroutine_16;
	// System.UInt64 Unity.Netcode.NetworkConnectionManager::m_NextClientId
	uint64_t ___m_NextClientId_17;
};

// Unity.Netcode.RealTimeProvider
struct RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int64>
struct NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage>
struct NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.UInt32>
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint32_t ___value_1;
};

// System.Nullable`1<System.UInt64>
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint64_t ___value_1;
};

// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.QueuedSendMessage>
struct ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1/ParallelWriter::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1/ParallelWriter::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// System.Int32 Unity.Collections.NativeQueue`1/ParallelWriter::m_ThreadIndex
	int32_t ___m_ThreadIndex_2;
};

// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct ParallelWriter_t55B873B53088E2C14EC0CE7DD3ECA37705CB04CC 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1/ParallelWriter::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1/ParallelWriter::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// System.Int32 Unity.Collections.NativeQueue`1/ParallelWriter::m_ThreadIndex
	int32_t ___m_ThreadIndex_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Unity.Collections.FixedBytes16
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.Networking.Transport.NetworkConfigParameter
struct NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D 
{
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::connectTimeoutMS
	int32_t ___connectTimeoutMS_0;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxConnectAttempts
	int32_t ___maxConnectAttempts_1;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::disconnectTimeoutMS
	int32_t ___disconnectTimeoutMS_2;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::heartbeatTimeoutMS
	int32_t ___heartbeatTimeoutMS_3;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxFrameTimeMS
	int32_t ___maxFrameTimeMS_4;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::fixedFrameTimeMS
	int32_t ___fixedFrameTimeMS_5;
};

// Unity.Networking.Transport.NetworkConnection
struct NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 
{
	// System.Int32 Unity.Networking.Transport.NetworkConnection::m_NetworkId
	int32_t ___m_NetworkId_0;
	// System.Int32 Unity.Networking.Transport.NetworkConnection::m_NetworkVersion
	int32_t ___m_NetworkVersion_1;
};

// Unity.Networking.Transport.NetworkDataStreamParameter
struct NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA 
{
	// System.Int32 Unity.Networking.Transport.NetworkDataStreamParameter::size
	int32_t ___size_1;
};

// Unity.Netcode.Transports.UTP.NetworkMetricsContext
struct NetworkMetricsContext_t1F0D6EA5D46CAEF908A2BF8795C67F4AB9726ECD 
{
	// System.UInt32 Unity.Netcode.Transports.UTP.NetworkMetricsContext::PacketSentCount
	uint32_t ___PacketSentCount_0;
	// System.UInt32 Unity.Netcode.Transports.UTP.NetworkMetricsContext::PacketReceivedCount
	uint32_t ___PacketReceivedCount_1;
};

// Unity.Networking.Transport.NetworkPipeline
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	// System.Int32 Unity.Networking.Transport.NetworkPipeline::Id
	int32_t ___Id_0;
};

// Unity.Networking.Transport.NetworkPipelineStageId
struct NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA 
{
	// System.Int32 Unity.Networking.Transport.NetworkPipelineStageId::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Networking.Transport.NetworkPipelineStageId::IsValid
	int32_t ___IsValid_1;
};

// Unity.Mathematics.Random
struct Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 
{
	// System.UInt32 Unity.Mathematics.Random::state
	uint32_t ___state_0;
};

// Unity.Networking.Transport.Utilities.SequenceBufferContext
struct SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 
{
	// System.Int32 Unity.Networking.Transport.Utilities.SequenceBufferContext::Sequence
	int32_t ___Sequence_0;
	// System.Int32 Unity.Networking.Transport.Utilities.SequenceBufferContext::Acked
	int32_t ___Acked_1;
	// System.UInt64 Unity.Networking.Transport.Utilities.SequenceBufferContext::AckedMask
	uint64_t ___AckedMask_2;
	// System.UInt64 Unity.Networking.Transport.Utilities.SequenceBufferContext::LastAckedMask
	uint64_t ___LastAckedMask_3;
	// System.UInt32 Unity.Networking.Transport.Utilities.SequenceBufferContext::AckMask
	uint32_t ___AckMask_4;
	// System.UInt32 Unity.Networking.Transport.Utilities.SequenceBufferContext::LastAckMask
	uint32_t ___LastAckMask_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD__padding[256];
	};
};
#pragma pack(pop, tp)

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress
struct Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data0
			uint8_t ___data0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___data0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data1_1_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data1
			uint8_t ___data1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___data1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data2_2_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data2
			uint8_t ___data2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___data2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data3_3_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data3
			uint8_t ___data3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___data3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data4_4_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data4
			uint8_t ___data4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___data4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data5_5_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data5
			uint8_t ___data5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___data5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data6_6_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data6
			uint8_t ___data6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___data6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data7_7_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data7
			uint8_t ___data7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___data7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data8_8_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data8
			uint8_t ___data8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___data8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data9_9_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data9
			uint8_t ___data9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___data9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data10_10_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data10
			uint8_t ___data10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___data10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data11_11_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data11
			uint8_t ___data11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___data11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data12_12_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data12
			uint8_t ___data12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___data12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data13_13_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data13
			uint8_t ___data13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___data13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data14_14_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data14
			uint8_t ___data14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___data14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data15_15_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data15
			uint8_t ___data15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___data15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_0
			uint8_t ___ipv6_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv6_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_1_17_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_1
			uint8_t ___ipv6_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_1_17_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv6_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_2_18_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_2
			uint8_t ___ipv6_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_2_18_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv6_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_3_19_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_3
			uint8_t ___ipv6_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_3_19_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv6_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_4_20_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_4
			uint8_t ___ipv6_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_4_20_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___ipv6_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_5_21_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_5
			uint8_t ___ipv6_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_5_21_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___ipv6_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_6_22_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_6
			uint8_t ___ipv6_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_6_22_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___ipv6_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_7_23_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_7
			uint8_t ___ipv6_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_7_23_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___ipv6_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_8_24_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_8
			uint8_t ___ipv6_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_8_24_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___ipv6_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_9_25_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_9
			uint8_t ___ipv6_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_9_25_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___ipv6_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_10_26_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_10
			uint8_t ___ipv6_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_10_26_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___ipv6_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_11_27_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_11
			uint8_t ___ipv6_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_11_27_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___ipv6_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_12_28_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_12
			uint8_t ___ipv6_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_12_28_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___ipv6_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_13_29_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_13
			uint8_t ___ipv6_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_13_29_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___ipv6_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_14_30_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_14
			uint8_t ___ipv6_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_14_30_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___ipv6_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_15_31_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_15
			uint8_t ___ipv6_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_15_31_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___ipv6_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_0
			uint8_t ___ipv4_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv4_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_1_33_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_1
			uint8_t ___ipv4_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_1_33_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv4_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_2_34_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_2
			uint8_t ___ipv4_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_2_34_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv4_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_3_35_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_3
			uint8_t ___ipv4_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_3_35_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv4_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port0_36_OffsetPadding[16];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port0
			uint8_t ___port0_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port0_36_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___port0_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port1_37_OffsetPadding[17];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port1
			uint8_t ___port1_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port1_37_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___port1_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___family_38_OffsetPadding[18];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::family
			uint8_t ___family_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___family_38_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___family_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____padding_39_OffsetPadding[19];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::_padding
			uint8_t ____padding_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____padding_39_OffsetPadding_forAlignmentOnly[19];
			uint8_t ____padding_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding[20];
			// System.UInt32 Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_scope_id
			uint32_t ___ipv6_scope_id_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___ipv6_scope_id_40_forAlignmentOnly;
		};
	};
};

// Unity.Networking.Transport.DataStreamReader/Context
struct Context_tD63E0B178C9748CD0DD094D0A85FEDD8096267C5 
{
	// System.Int32 Unity.Networking.Transport.DataStreamReader/Context::m_ReadByteIndex
	int32_t ___m_ReadByteIndex_0;
	// System.Int32 Unity.Networking.Transport.DataStreamReader/Context::m_BitIndex
	int32_t ___m_BitIndex_1;
	// System.UInt64 Unity.Networking.Transport.DataStreamReader/Context::m_BitBuffer
	uint64_t ___m_BitBuffer_2;
	// System.Int32 Unity.Networking.Transport.DataStreamReader/Context::m_FailedReads
	int32_t ___m_FailedReads_3;
};

// Unity.Networking.Transport.DataStreamWriter/StreamData
struct StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 
{
	// System.Byte* Unity.Networking.Transport.DataStreamWriter/StreamData::buffer
	uint8_t* ___buffer_0;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::length
	int32_t ___length_1;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::capacity
	int32_t ___capacity_2;
	// System.UInt64 Unity.Networking.Transport.DataStreamWriter/StreamData::bitBuffer
	uint64_t ___bitBuffer_3;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::bitIndex
	int32_t ___bitIndex_4;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::failedWrites
	int32_t ___failedWrites_5;
};

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8__padding[16];
	};
};

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054__padding[255];
	};
};

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67__padding[64];
	};
};

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer
struct U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816__padding[32];
	};
};

// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo
struct RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::LastRtt
	int32_t ___LastRtt_0;
	// System.Single Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::SmoothedRtt
	float ___SmoothedRtt_1;
	// System.Single Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::SmoothedVariance
	float ___SmoothedVariance_2;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::ResendTimeout
	int32_t ___ResendTimeout_3;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics
struct Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsReceived
	int32_t ___PacketsReceived_0;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsSent
	int32_t ___PacketsSent_1;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsDropped
	int32_t ___PacketsDropped_2;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsOutOfOrder
	int32_t ___PacketsOutOfOrder_3;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsDuplicated
	int32_t ___PacketsDuplicated_4;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsStale
	int32_t ___PacketsStale_5;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsResent
	int32_t ___PacketsResent_6;
};

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
struct ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F 
{
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets::ServerCommonName
	String_t* ___ServerCommonName_0;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets::ClientCertificate
	String_t* ___ClientCertificate_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
struct ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke
{
	char* ___ServerCommonName_0;
	char* ___ClientCertificate_1;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
struct ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com
{
	Il2CppChar* ___ServerCommonName_0;
	Il2CppChar* ___ClientCertificate_1;
};

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
struct ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C 
{
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets::ServerPrivate
	String_t* ___ServerPrivate_0;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets::ServerCertificate
	String_t* ___ServerCertificate_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
struct ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke
{
	char* ___ServerPrivate_0;
	char* ___ServerCertificate_1;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
struct ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com
{
	Il2CppChar* ___ServerPrivate_0;
	Il2CppChar* ___ServerCertificate_1;
};

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 
{
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Address
	String_t* ___Address_0;
	// System.UInt16 Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Port
	uint16_t ___Port_1;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ServerListenAddress
	String_t* ___ServerListenAddress_2;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke
{
	char* ___Address_0;
	uint16_t ___Port_1;
	char* ___ServerListenAddress_2;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com
{
	Il2CppChar* ___Address_0;
	uint16_t ___Port_1;
	Il2CppChar* ___ServerListenAddress_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache
struct PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsReceived
	int32_t ___PacketsReceived_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsDropped
	int32_t ___PacketsDropped_1;
	// System.Single Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketLoss
	float ___PacketLoss_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters
struct SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDelayMS
	int32_t ___PacketDelayMS_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketJitterMS
	int32_t ___PacketJitterMS_1;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDropRate
	int32_t ___PacketDropRate_2;
};

// Unity.Networking.Transport.NetworkEventQueue/Concurrent/ConcurrentConnectionQueue
struct ConcurrentConnectionQueue_tE38C2DE6E083563C24985FECE98CFCF061E80C78 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>* Unity.Networking.Transport.NetworkEventQueue/Concurrent/ConcurrentConnectionQueue::m_ConnectionEventHeadTail
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ConnectionEventHeadTail_0;
};

// Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 
{
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4 ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Collections.NativeList`1<System.Byte>
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<System.Int32>
struct NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent>
struct NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5D77D9399869F973DD7861206FE7B0BB5254BEDA* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t501C48EF6B212CE7B242B47AE1184A6DE456C629* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeQueue`1<System.Int32>
struct NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage>
struct NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem>
struct NativeQueue_1_t1998FE7B3590BD3E5658462E15CDFDC7E946B3F8 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct NativeQueue_1_t3C5DFC28122633C8F672980038A79B3B7D26790A 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeReference`1<System.Int32>
struct NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE 
{
	// System.Void* Unity.Collections.NativeReference`1::m_Data
	void* ___m_Data_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeReference`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD21904779CC32A6177B4E0D9832E2914FD13FFDA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tD21904779CC32A6177B4E0D9832E2914FD13FFDA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::069E42803A623C550E1D97957542706C51EE52C6262757503BCA925BF40009C9
	__StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD ___069E42803A623C550E1D97957542706C51EE52C6262757503BCA925BF40009C9_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::0DC23B9F693E00DB8A82C23DBC72BF724412EEFE73C8011C7B034B95055395BA
	__StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 ___0DC23B9F693E00DB8A82C23DBC72BF724412EEFE73C8011C7B034B95055395BA_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::AEC63A1D9817B88413C02DFD4ACAA4DCE92E7B31885038AD5F851B01F6E20836
	__StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 ___AEC63A1D9817B88413C02DFD4ACAA4DCE92E7B31885038AD5F851B01F6E20836_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::CFFA0C336E65626D7D6A1B7DEC9EA46121AA12320D3A2187436F489C100F3047
	__StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD ___CFFA0C336E65626D7D6A1B7DEC9EA46121AA12320D3A2187436F489C100F3047_3;
};

// Unity.Networking.Transport.DataStreamReader
struct DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 
{
	// System.Byte* Unity.Networking.Transport.DataStreamReader::m_bufferPtr
	uint8_t* ___m_bufferPtr_0;
	// Unity.Networking.Transport.DataStreamReader/Context Unity.Networking.Transport.DataStreamReader::m_Context
	Context_tD63E0B178C9748CD0DD094D0A85FEDD8096267C5 ___m_Context_1;
	// System.Int32 Unity.Networking.Transport.DataStreamReader::m_Length
	int32_t ___m_Length_2;
};

// Unity.Networking.Transport.DataStreamWriter
struct DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA 
{
	// Unity.Networking.Transport.DataStreamWriter/StreamData Unity.Networking.Transport.DataStreamWriter::m_Data
	StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 ___m_Data_0;
	// System.IntPtr Unity.Networking.Transport.DataStreamWriter::m_SendHandleData
	intptr_t ___m_SendHandleData_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.Collections.FixedBytes126
#pragma pack(push, tp, 1)
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_7_OffsetPadding[112];
					// System.Byte Unity.Collections.FixedBytes126::byte0112
					uint8_t ___byte0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_7_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_8_OffsetPadding[113];
					// System.Byte Unity.Collections.FixedBytes126::byte0113
					uint8_t ___byte0113_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_8_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_9_OffsetPadding[114];
					// System.Byte Unity.Collections.FixedBytes126::byte0114
					uint8_t ___byte0114_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_9_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_10_OffsetPadding[115];
					// System.Byte Unity.Collections.FixedBytes126::byte0115
					uint8_t ___byte0115_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_10_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_11_OffsetPadding[116];
					// System.Byte Unity.Collections.FixedBytes126::byte0116
					uint8_t ___byte0116_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_11_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_12_OffsetPadding[117];
					// System.Byte Unity.Collections.FixedBytes126::byte0117
					uint8_t ___byte0117_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_12_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_13_OffsetPadding[118];
					// System.Byte Unity.Collections.FixedBytes126::byte0118
					uint8_t ___byte0118_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_13_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_14_OffsetPadding[119];
					// System.Byte Unity.Collections.FixedBytes126::byte0119
					uint8_t ___byte0119_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_14_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_15_OffsetPadding[120];
					// System.Byte Unity.Collections.FixedBytes126::byte0120
					uint8_t ___byte0120_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_15_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_16_OffsetPadding[121];
					// System.Byte Unity.Collections.FixedBytes126::byte0121
					uint8_t ___byte0121_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_16_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_17_OffsetPadding[122];
					// System.Byte Unity.Collections.FixedBytes126::byte0122
					uint8_t ___byte0122_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_17_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_18_OffsetPadding[123];
					// System.Byte Unity.Collections.FixedBytes126::byte0123
					uint8_t ___byte0123_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_18_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_19_OffsetPadding[124];
					// System.Byte Unity.Collections.FixedBytes126::byte0124
					uint8_t ___byte0124_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_19_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_20_OffsetPadding[125];
					// System.Byte Unity.Collections.FixedBytes126::byte0125
					uint8_t ___byte0125_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_20_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_20_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};
#pragma pack(pop, tp)

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113  : public RuntimeObject
{
	// System.UInt16 Unity.Netcode.NetworkConfig::ProtocolVersion
	uint16_t ___ProtocolVersion_0;
	// Unity.Netcode.NetworkTransport Unity.Netcode.NetworkConfig::NetworkTransport
	NetworkTransport_t55E07951299283974C86476F46CC977780560B64* ___NetworkTransport_1;
	// UnityEngine.GameObject Unity.Netcode.NetworkConfig::PlayerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerPrefab_2;
	// Unity.Netcode.NetworkPrefabs Unity.Netcode.NetworkConfig::Prefabs
	NetworkPrefabs_t1DCB21A957C1C64646BD413900E696049BC8A324* ___Prefabs_3;
	// System.UInt32 Unity.Netcode.NetworkConfig::TickRate
	uint32_t ___TickRate_4;
	// System.Int32 Unity.Netcode.NetworkConfig::ClientConnectionBufferTimeout
	int32_t ___ClientConnectionBufferTimeout_5;
	// System.Boolean Unity.Netcode.NetworkConfig::ConnectionApproval
	bool ___ConnectionApproval_6;
	// System.Byte[] Unity.Netcode.NetworkConfig::ConnectionData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ConnectionData_7;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableTimeResync
	bool ___EnableTimeResync_8;
	// System.Int32 Unity.Netcode.NetworkConfig::TimeResyncInterval
	int32_t ___TimeResyncInterval_9;
	// System.Boolean Unity.Netcode.NetworkConfig::EnsureNetworkVariableLengthSafety
	bool ___EnsureNetworkVariableLengthSafety_10;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableSceneManagement
	bool ___EnableSceneManagement_11;
	// System.Boolean Unity.Netcode.NetworkConfig::ForceSamePrefabs
	bool ___ForceSamePrefabs_12;
	// System.Boolean Unity.Netcode.NetworkConfig::RecycleNetworkIds
	bool ___RecycleNetworkIds_13;
	// System.Single Unity.Netcode.NetworkConfig::NetworkIdRecycleDelay
	float ___NetworkIdRecycleDelay_14;
	// Unity.Netcode.HashSize Unity.Netcode.NetworkConfig::RpcHashSize
	uint8_t ___RpcHashSize_15;
	// System.Int32 Unity.Netcode.NetworkConfig::LoadSceneTimeOut
	int32_t ___LoadSceneTimeOut_16;
	// System.Single Unity.Netcode.NetworkConfig::SpawnTimeout
	float ___SpawnTimeout_17;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableNetworkLogs
	bool ___EnableNetworkLogs_18;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkConfig::m_ConfigHash
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___m_ConfigHash_21;
	// System.Boolean Unity.Netcode.NetworkConfig::m_DidWarnOldPrefabList
	bool ___m_DidWarnOldPrefabList_22;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkPrefab> Unity.Netcode.NetworkConfig::OldPrefabList
	List_1_tE788305FC69BA0DB2AEFE4DE86FACD7D09507CB6* ___OldPrefabList_23;
};

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 
{
	// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress Unity.Networking.Transport.NetworkEndPoint::rawNetworkAddress
	Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 ___rawNetworkAddress_5;
};

struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_StaticFields
{
	// System.Boolean Unity.Networking.Transport.NetworkEndPoint::IsLittleEndian
	bool ___IsLittleEndian_4;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Networking.Transport.Relay.RelayAllocationId
struct RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 
{
	// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayAllocationId::Value
	U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 ___Value_1;
};

// Unity.Networking.Transport.Relay.RelayConnectionData
struct RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D 
{
	// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayConnectionData::Value
	U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 ___Value_1;
};

// Unity.Networking.Transport.Relay.RelayHMACKey
struct RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 
{
	// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayHMACKey::Value
	U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 ___Value_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// Unity.Networking.Transport.NetworkDriver/Parameters
struct Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 
{
	// Unity.Networking.Transport.NetworkDataStreamParameter Unity.Networking.Transport.NetworkDriver/Parameters::dataStream
	NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA ___dataStream_0;
	// Unity.Networking.Transport.NetworkConfigParameter Unity.Networking.Transport.NetworkDriver/Parameters::config
	NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D ___config_1;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext
struct SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::WindowSize
	int32_t ___WindowSize_0;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::MinimumResendTime
	int32_t ___MinimumResendTime_1;
	// Unity.Networking.Transport.Utilities.SequenceBufferContext Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::SentPackets
	SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 ___SentPackets_2;
	// Unity.Networking.Transport.Utilities.SequenceBufferContext Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::ReceivedPackets
	SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 ___ReceivedPackets_3;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::DuplicatesSinceLastAck
	int32_t ___DuplicatesSinceLastAck_4;
	// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::stats
	Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5 ___stats_5;
	// Unity.Networking.Transport.Utilities.ReliableUtility/ErrorCodes Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::errorCode
	int32_t ___errorCode_6;
	// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RttInfo
	RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 ___RttInfo_7;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::TimerDataOffset
	int32_t ___TimerDataOffset_8;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::TimerDataStride
	int32_t ___TimerDataStride_9;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RemoteTimerDataOffset
	int32_t ___RemoteTimerDataOffset_10;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RemoteTimerDataStride
	int32_t ___RemoteTimerDataStride_11;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget
struct SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 
{
	// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::ClientId
	uint64_t ___ClientId_0;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::NetworkPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___NetworkPipeline_1;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ____currentKey_3;
};

// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue> Unity.Collections.NativeHashMap`2::m_HashMapData
	UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B ___m_HashMapData_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE ___Ptr_0;
};

// Unity.Netcode.Transports.UTP.BatchedSendQueue
struct BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 
{
	// Unity.Collections.NativeList`1<System.Byte> Unity.Netcode.Transports.UTP.BatchedSendQueue::m_Data
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Data_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Netcode.Transports.UTP.BatchedSendQueue::m_HeadTailIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_HeadTailIndices_1;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::m_MaximumCapacity
	int32_t ___m_MaximumCapacity_2;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::m_MinimumCapacity
	int32_t ___m_MinimumCapacity_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.Collections.FixedString128Bytes
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString128Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_1;
			// Unity.Collections.FixedBytes126 Unity.Collections.FixedString128Bytes::bytes
			FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes_2;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Networking.Transport.NetworkEventQueue
struct NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 
{
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem> Unity.Networking.Transport.NetworkEventQueue::m_MasterEventQ
	NativeQueue_1_t1998FE7B3590BD3E5658462E15CDFDC7E946B3F8 ___m_MasterEventQ_0;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent> Unity.Networking.Transport.NetworkEventQueue::m_ConnectionEventQ
	NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 ___m_ConnectionEventQ_1;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkEventQueue::m_ConnectionEventHeadTail
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_ConnectionEventHeadTail_2;
};

// Unity.Networking.Transport.NetworkPipelineProcessor
struct NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C 
{
	// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage> Unity.Networking.Transport.NetworkPipelineProcessor::m_StageCollection
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 ___m_StageCollection_2;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_StaticInstanceBuffer
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_StaticInstanceBuffer_3;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::m_StageList
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_StageList_4;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::m_AccumulatedHeaderCapacity
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_AccumulatedHeaderCapacity_5;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl> Unity.Networking.Transport.NetworkPipelineProcessor::m_Pipelines
	NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C ___m_Pipelines_6;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_ReceiveBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_ReceiveBuffer_7;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_SendBuffer_8;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_SharedBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_SharedBuffer_9;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_ReceiveStageNeedsUpdate
	NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 ___m_ReceiveStageNeedsUpdate_10;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendStageNeedsUpdate
	NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 ___m_SendStageNeedsUpdate_11;
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendStageNeedsUpdateRead
	NativeQueue_1_t3C5DFC28122633C8F672980038A79B3B7D26790A ___m_SendStageNeedsUpdateRead_12;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::sizePerConnection
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___sizePerConnection_13;
	// Unity.Collections.NativeArray`1<System.Int64> Unity.Networking.Transport.NetworkPipelineProcessor::m_timestamp
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___m_timestamp_14;
};

// Unity.Networking.Transport.Relay.RelayServerData
struct RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 
{
	// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.Relay.RelayServerData::Endpoint
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___Endpoint_0;
	// System.UInt16 Unity.Networking.Transport.Relay.RelayServerData::Nonce
	uint16_t ___Nonce_1;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::ConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___ConnectionData_2;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::HostConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___HostConnectionData_3;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayServerData::AllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___AllocationId_4;
	// Unity.Networking.Transport.Relay.RelayHMACKey Unity.Networking.Transport.Relay.RelayServerData::HMACKey
	RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 ___HMACKey_5;
	// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer Unity.Networking.Transport.Relay.RelayServerData::HMAC
	U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 ___HMAC_6;
	// System.Byte Unity.Networking.Transport.Relay.RelayServerData::IsSecure
	uint8_t ___IsSecure_7;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// Unity.Networking.Transport.NetworkEventQueue/Concurrent
struct Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 
{
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent> Unity.Networking.Transport.NetworkEventQueue/Concurrent::m_ConnectionEventQ
	NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 ___m_ConnectionEventQ_0;
	// Unity.Networking.Transport.NetworkEventQueue/Concurrent/ConcurrentConnectionQueue Unity.Networking.Transport.NetworkEventQueue/Concurrent::m_ConnectionEventHeadTail
	ConcurrentConnectionQueue_tE38C2DE6E083563C24985FECE98CFCF061E80C78 ___m_ConnectionEventHeadTail_1;
};

// Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent
struct Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 
{
	// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_StageCollection
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 ___m_StageCollection_0;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_StaticInstanceBuffer
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_StaticInstanceBuffer_1;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_Pipelines
	NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C ___m_Pipelines_2;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_StageList
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_StageList_3;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_AccumulatedHeaderCapacity
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_AccumulatedHeaderCapacity_4;
	// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_SendStageNeedsUpdateWrite
	ParallelWriter_t55B873B53088E2C14EC0CE7DD3ECA37705CB04CC ___m_SendStageNeedsUpdateWrite_5;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::sizePerConnection
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___sizePerConnection_6;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::sharedBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___sharedBuffer_7;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::sendBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___sendBuffer_8;
	// Unity.Collections.NativeArray`1<System.Int64> Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent::m_timestamp
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___m_timestamp_9;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ____currentValue_3;
};

// System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___value_1;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Netcode.Transports.UTP.ErrorUtilities
struct ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84  : public RuntimeObject
{
};

struct ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields
{
	// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::k_NetworkSuccess
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___k_NetworkSuccess_0;
	// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::k_NetworkIdMismatch
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___k_NetworkIdMismatch_1;
	// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::k_NetworkVersionMismatch
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___k_NetworkVersionMismatch_2;
	// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::k_NetworkStateMismatch
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___k_NetworkStateMismatch_3;
	// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::k_NetworkPacketOverflow
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___k_NetworkPacketOverflow_4;
	// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::k_NetworkSendQueueFull
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___k_NetworkSendQueueFull_5;
};

// Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate> Unity.Networking.Transport.NetworkProtocol::ComputePacketOverhead
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessReceive
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSend
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendConnectionAccept
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate> Unity.Networking.Transport.NetworkProtocol::Connect
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate> Unity.Networking.Transport.NetworkProtocol::Disconnect
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPing
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPong
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate> Unity.Networking.Transport.NetworkProtocol::Update
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	// System.IntPtr Unity.Networking.Transport.NetworkProtocol::UserData
	intptr_t ___UserData_9;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxHeaderSize
	int32_t ___MaxHeaderSize_10;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxFooterSize
	int32_t ___MaxFooterSize_11;
	// System.Boolean Unity.Networking.Transport.NetworkProtocol::NeedsUpdate
	bool ___NeedsUpdate_12;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};

// Unity.Networking.Transport.NetworkSendInterface
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::BeginSendMessage
	TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 ___BeginSendMessage_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::EndSendMessage
	TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D ___EndSendMessage_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::AbortSendMessage
	TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 ___AbortSendMessage_2;
	// System.IntPtr Unity.Networking.Transport.NetworkSendInterface::UserData
	intptr_t ___UserData_3;
};

// Unity.Networking.Transport.NetworkSettings
struct NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 
{
	// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice> Unity.Networking.Transport.NetworkSettings::m_ParameterOffsets
	NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC ___m_ParameterOffsets_1;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkSettings::m_Parameters
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Parameters_2;
	// System.Byte Unity.Networking.Transport.NetworkSettings::m_Initialized
	uint8_t ___m_Initialized_3;
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 
{
	// System.Int32 Unity.Networking.Transport.NetworkDriver::m_NetworkInterfaceIndex
	int32_t ___m_NetworkInterfaceIndex_2;
	// Unity.Networking.Transport.NetworkSendInterface Unity.Networking.Transport.NetworkDriver::m_NetworkSendInterface
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	// System.Int32 Unity.Networking.Transport.NetworkDriver::m_NetworkProtocolIndex
	int32_t ___m_NetworkProtocolIndex_4;
	// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.NetworkDriver::m_NetworkProtocolInterface
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 ___m_NetworkProtocolInterface_5;
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage> Unity.Networking.Transport.NetworkDriver::m_ParallelSendQueue
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	// Unity.Networking.Transport.NetworkEventQueue Unity.Networking.Transport.NetworkDriver::m_EventQueue
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkDriver::m_DisconnectReasons
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_FreeList
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_NetworkAcceptQueue
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection> Unity.Networking.Transport.NetworkDriver::m_ConnectionList
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_InternalState
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	// Unity.Collections.NativeReference`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_ProtocolStatus
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_PendingFree
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_ErrorCodes
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	// Unity.Networking.Transport.NetworkDriver/Parameters Unity.Networking.Transport.NetworkDriver::m_NetworkParams
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkDriver::m_DataStream
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_DataStreamHead
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	// Unity.Networking.Transport.NetworkPipelineProcessor Unity.Networking.Transport.NetworkDriver::m_PipelineProcessor
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	// Unity.Networking.Transport.Protocols.UdpCHeader/HeaderFlags Unity.Networking.Transport.NetworkDriver::m_DefaultHeaderFlags
	uint8_t ___m_DefaultHeaderFlags_20;
	// System.Int64 Unity.Networking.Transport.NetworkDriver::m_UpdateTime
	int64_t ___m_UpdateTime_21;
	// System.Int64 Unity.Networking.Transport.NetworkDriver::m_UpdateTimeAdjustment
	int64_t ___m_UpdateTimeAdjustment_22;
	// Unity.Mathematics.Random Unity.Networking.Transport.NetworkDriver::m_Rand
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};

struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_StaticFields
{
	// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkInterface> Unity.Networking.Transport.NetworkDriver::s_NetworkInterfaces
	List_1_tC673C156FBD962AEDC0C4957C82DD522010A9BC6* ___s_NetworkInterfaces_0;
	// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkProtocol> Unity.Networking.Transport.NetworkDriver::s_NetworkProtocols
	List_1_t55E70A01F2B19225279AEE9C81F69F51DE1781C0* ___s_NetworkProtocols_1;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_marshaled_pinvoke
{
	int32_t ___m_NetworkInterfaceIndex_2;
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	int32_t ___m_NetworkProtocolIndex_4;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke ___m_NetworkProtocolInterface_5;
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	uint8_t ___m_DefaultHeaderFlags_20;
	int64_t ___m_UpdateTime_21;
	int64_t ___m_UpdateTimeAdjustment_22;
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_marshaled_com
{
	int32_t ___m_NetworkInterfaceIndex_2;
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	int32_t ___m_NetworkProtocolIndex_4;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com ___m_NetworkProtocolInterface_5;
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	uint8_t ___m_DefaultHeaderFlags_20;
	int64_t ___m_UpdateTime_21;
	int64_t ___m_UpdateTimeAdjustment_22;
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};

// Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 
{
	// Unity.Networking.Transport.NetworkSendInterface Unity.Networking.Transport.NetworkDriver/Concurrent::m_NetworkSendInterface
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_0;
	// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.NetworkDriver/Concurrent::m_NetworkProtocolInterface
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 ___m_NetworkProtocolInterface_1;
	// Unity.Networking.Transport.NetworkEventQueue/Concurrent Unity.Networking.Transport.NetworkDriver/Concurrent::m_EventQueue
	Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 ___m_EventQueue_2;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkDriver/Concurrent::m_DisconnectReasons
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_3;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection> Unity.Networking.Transport.NetworkDriver/Concurrent::m_ConnectionList
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_4;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkDriver/Concurrent::m_DataStream
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_5;
	// Unity.Networking.Transport.NetworkPipelineProcessor/Concurrent Unity.Networking.Transport.NetworkDriver/Concurrent::m_PipelineProcessor
	Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 ___m_PipelineProcessor_6;
	// Unity.Networking.Transport.Protocols.UdpCHeader/HeaderFlags Unity.Networking.Transport.NetworkDriver/Concurrent::m_DefaultHeaderFlags
	uint8_t ___m_DefaultHeaderFlags_7;
	// Unity.Collections.NativeQueue`1/ParallelWriter<Unity.Networking.Transport.QueuedSendMessage> Unity.Networking.Transport.NetworkDriver/Concurrent::m_ConcurrentParallelSendQueue
	ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 ___m_ConcurrentParallelSendQueue_8;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke
{
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_0;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke ___m_NetworkProtocolInterface_1;
	Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 ___m_EventQueue_2;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_3;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_4;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_5;
	Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 ___m_PipelineProcessor_6;
	uint8_t ___m_DefaultHeaderFlags_7;
	ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 ___m_ConcurrentParallelSendQueue_8;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkDriver/Concurrent
struct Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com
{
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_0;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com ___m_NetworkProtocolInterface_1;
	Concurrent_t92C384E6E68FB84D47BABBD1610E5FF8CFE3F2B3 ___m_EventQueue_2;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_3;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_4;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_5;
	Concurrent_t76D9AE05BA23B3FBC0B4C7AADEAA81E828C46673 ___m_PipelineProcessor_6;
	uint8_t ___m_DefaultHeaderFlags_7;
	ParallelWriter_tD2337D6A048735D05F7C0698B7FEEDAD7153DE97 ___m_ConcurrentParallelSendQueue_8;
};

// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>
struct Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients_6;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_7;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig_8;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_9;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_10;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted_13;
	// System.Action Unity.Netcode.NetworkManager::OnClientStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnClientStarted_14;
	// System.Action`1<System.Boolean> Unity.Netcode.NetworkManager::OnServerStopped
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnServerStopped_15;
	// System.Action`1<System.Boolean> Unity.Netcode.NetworkManager::OnClientStopped
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnClientStopped_16;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler_17;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_18;
	// Unity.Netcode.IDeferredNetworkMessageManager Unity.Netcode.NetworkManager::<DeferredMessageManager>k__BackingField
	RuntimeObject* ___U3CDeferredMessageManagerU3Ek__BackingField_19;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField_20;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField_21;
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField_22;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField_23;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField_24;
	// Unity.Netcode.IRealTimeProvider Unity.Netcode.NetworkManager::<RealTimeProvider>k__BackingField
	RuntimeObject* ___U3CRealTimeProviderU3Ek__BackingField_25;
	// Unity.Netcode.NetworkMetricsManager Unity.Netcode.NetworkManager::MetricsManager
	NetworkMetricsManager_tD9F432E8A6803DEC0B9BEB12E72EDD552AEB8987* ___MetricsManager_26;
	// Unity.Netcode.NetworkConnectionManager Unity.Netcode.NetworkManager::ConnectionManager
	NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* ___ConnectionManager_27;
	// Unity.Netcode.NetworkMessageManager Unity.Netcode.NetworkManager::MessageManager
	NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___MessageManager_28;
};

struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField_11;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady_12;
};

// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkTransport::NetworkMetrics
	RuntimeObject* ___NetworkMetrics_4;
	// Unity.Netcode.NetworkTransport/TransportEventDelegate Unity.Netcode.NetworkTransport::OnTransportEvent
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___OnTransportEvent_5;
};

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper
struct SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerCommonName
	String_t* ___m_ServerCommonName_4;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ClientCAFilePath
	String_t* ___m_ClientCAFilePath_5;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ClientCAOverride
	String_t* ___m_ClientCAOverride_6;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerCertificateFilePath
	String_t* ___m_ServerCertificateFilePath_7;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerPrivateFilePath
	String_t* ___m_ServerPrivateFilePath_8;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ClientCA
	String_t* ___m_ClientCA_9;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerCertificate
	String_t* ___m_ServerCertificate_10;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerPrivate
	String_t* ___m_ServerPrivate_11;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
struct SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC 
{
	// Unity.Networking.Transport.NetworkDriver/Concurrent Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Driver
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 ___Driver_0;
	// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Target
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___Target_1;
	// Unity.Netcode.Transports.UTP.BatchedSendQueue Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Queue
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___Queue_2;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::ReliablePipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___ReliablePipeline_3;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
struct SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke ___Driver_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___Target_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___Queue_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___ReliablePipeline_3;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
struct SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com ___Driver_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___Target_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___Queue_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___ReliablePipeline_3;
};

// Unity.Netcode.Transports.UNET.UNetTransport
struct UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A  : public NetworkTransport_t55E07951299283974C86476F46CC977780560B64
{
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_UnreliableChannelId
	int32_t ___m_UnreliableChannelId_6;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_UnreliableSequencedChannelId
	int32_t ___m_UnreliableSequencedChannelId_7;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableChannelId
	int32_t ___m_ReliableChannelId_8;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableSequencedChannelId
	int32_t ___m_ReliableSequencedChannelId_9;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableFragmentedSequencedChannelId
	int32_t ___m_ReliableFragmentedSequencedChannelId_10;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MessageBufferSize
	int32_t ___MessageBufferSize_11;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MaxConnections
	int32_t ___MaxConnections_12;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MaxSentMessageQueueSize
	int32_t ___MaxSentMessageQueueSize_13;
	// System.String Unity.Netcode.Transports.UNET.UNetTransport::ConnectAddress
	String_t* ___ConnectAddress_14;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::ConnectPort
	int32_t ___ConnectPort_15;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::ServerListenPort
	int32_t ___ServerListenPort_16;
	// Unity.Netcode.Transports.UNET.UNetTransport/SendMode Unity.Netcode.Transports.UNET.UNetTransport::MessageSendMode
	int32_t ___MessageSendMode_17;
	// System.Byte[] Unity.Netcode.Transports.UNET.UNetTransport::m_MessageBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_MessageBuffer_18;
	// System.WeakReference Unity.Netcode.Transports.UNET.UNetTransport::m_TemporaryBufferReference
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___m_TemporaryBufferReference_19;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ServerConnectionId
	int32_t ___m_ServerConnectionId_20;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ServerHostId
	int32_t ___m_ServerHostId_21;
	// Unity.Netcode.NetworkManager Unity.Netcode.Transports.UNET.UNetTransport::NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManager_22;
};

// Unity.Netcode.Transports.UTP.UnityTransport
struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4  : public NetworkTransport_t55E07951299283974C86476F46CC977780560B64
{
	// Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType Unity.Netcode.Transports.UTP.UnityTransport::m_ProtocolType
	int32_t ___m_ProtocolType_12;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxPacketQueueSize
	int32_t ___m_MaxPacketQueueSize_13;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxPayloadSize
	int32_t ___m_MaxPayloadSize_14;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxSendQueueSize
	int32_t ___m_MaxSendQueueSize_15;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_HeartbeatTimeoutMS
	int32_t ___m_HeartbeatTimeoutMS_16;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_ConnectTimeoutMS
	int32_t ___m_ConnectTimeoutMS_17;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxConnectAttempts
	int32_t ___m_MaxConnectAttempts_18;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_DisconnectTimeoutMS
	int32_t ___m_DisconnectTimeoutMS_19;
	// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData Unity.Netcode.Transports.UTP.UnityTransport::ConnectionData
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 ___ConnectionData_20;
	// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters Unity.Netcode.Transports.UTP.UnityTransport::DebugSimulator
	SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 ___DebugSimulator_21;
	// System.Nullable`1<System.UInt32> Unity.Netcode.Transports.UTP.UnityTransport::<DebugSimulatorRandomSeed>k__BackingField
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22;
	// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache Unity.Netcode.Transports.UTP.UnityTransport::m_PacketLossCache
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7 ___m_PacketLossCache_25;
	// Unity.Netcode.Transports.UTP.UnityTransport/State Unity.Netcode.Transports.UTP.UnityTransport::m_State
	int32_t ___m_State_26;
	// Unity.Networking.Transport.NetworkDriver Unity.Netcode.Transports.UTP.UnityTransport::m_Driver
	NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___m_Driver_27;
	// Unity.Networking.Transport.NetworkSettings Unity.Netcode.Transports.UTP.UnityTransport::m_NetworkSettings
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___m_NetworkSettings_28;
	// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::m_ServerClientId
	uint64_t ___m_ServerClientId_29;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_UnreliableFragmentedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_UnreliableFragmentedPipeline_30;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_UnreliableSequencedFragmentedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_UnreliableSequencedFragmentedPipeline_31;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_ReliableSequencedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_ReliableSequencedPipeline_32;
	// Unity.Networking.Transport.Relay.RelayServerData Unity.Netcode.Transports.UTP.UnityTransport::m_RelayServerData
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___m_RelayServerData_33;
	// Unity.Netcode.NetworkManager Unity.Netcode.Transports.UTP.UnityTransport::NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManager_34;
	// Unity.Netcode.IRealTimeProvider Unity.Netcode.Transports.UTP.UnityTransport::m_RealTimeProvider
	RuntimeObject* ___m_RealTimeProvider_35;
	// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue> Unity.Netcode.Transports.UTP.UnityTransport::m_SendQueue
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ___m_SendQueue_36;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue> Unity.Netcode.Transports.UTP.UnityTransport::m_ReliableReceiveQueues
	Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* ___m_ReliableReceiveQueues_37;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerPrivateKey
	String_t* ___m_ServerPrivateKey_38;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerCertificate
	String_t* ___m_ServerCertificate_39;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerCommonName
	String_t* ___m_ServerCommonName_40;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ClientCaCertificate
	String_t* ___m_ClientCaCertificate_41;
};

struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields
{
	// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData Unity.Netcode.Transports.UTP.UnityTransport::s_DefaultConnectionAddressData
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 ___s_DefaultConnectionAddressData_10;
	// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor Unity.Netcode.Transports.UTP.UnityTransport::s_DriverConstructor
	RuntimeObject* ___s_DriverConstructor_11;
	// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver> Unity.Netcode.Transports.UTP.UnityTransport::TransportInitialized
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* ___TransportInitialized_23;
	// System.Action`1<System.Int32> Unity.Netcode.Transports.UTP.UnityTransport::TransportDisposed
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___TransportDisposed_24;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_back(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke& marshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_cleanup(Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_back(const Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com& marshaled, Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14& unmarshaled);
IL2CPP_EXTERN_C void Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_cleanup(Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshaled_com& marshaled);

// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeList`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeList`1<System.Byte>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Byte>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___initialCapacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Byte>::ResizeUninitialized(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___list0, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1<System.Byte>::AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mD7C393AE045EF225975A8BF6B27887913C28A829_gshared_inline (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* __this, int32_t ___arg10, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___arg21, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_gshared (ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_gshared (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_gshared_inline (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_gshared (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void Unity.Jobs.IJobExtensions::Run<Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IJobExtensions_Run_TisSendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_m8805B81AA5D1503F36E31919FA2D1A9ACA2D6AB0_gshared (SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC ___jobData0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.ArraySegment`1<System.Byte>::op_Equality(System.ArraySegment`1<T>,System.ArraySegment`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___a0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_gshared (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_gshared_inline (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_gshared_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_gshared_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_gshared (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_gshared (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, int32_t ___initialCapacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_gshared (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_gshared (KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_gshared (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_gshared_inline (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Add(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_gshared (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_gshared (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_gshared (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_gshared (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method) ;
// T Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_gshared (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_gshared (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m6E34CC0D7FF8EBEE6889AF1C9DB70009EDBC1706_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.UInt32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_gshared (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5_gshared (Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* __this, uint64_t ___key0, uint64_t* ___value1, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::Invoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_inline (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamReader::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.DataStreamReader::ReadBytes(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamReader_ReadBytes_m1E2D499A170CDF22A902617B1072E7E1091874A3 (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, uint8_t* ___data0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared)(___array0, ___newSize1, method);
}
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_HeadIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_HeadIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_TailIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_TailIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeList`1<System.Byte>::get_Length()
inline int32_t NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, const RuntimeMethod*))NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_gshared)(__this, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeList`1<System.Byte>::get_IsCreated()
inline bool NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, const RuntimeMethod*))NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_gshared)(__this, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___a0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Byte>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___initialCapacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_gshared)(__this, ___initialCapacity0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeList`1<System.Byte>::ResizeUninitialized(System.Int32)
inline void NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___length0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, int32_t, const RuntimeMethod*))NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_gshared)(__this, ___length0, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Byte>::Dispose()
inline void NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, const RuntimeMethod*))NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.DataStreamWriter::WriteBytes(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint8_t* ___data0, int32_t ___bytes1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::WriteBytes(Unity.Networking.Transport.DataStreamWriter&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, uint8_t* ___data1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeList`1<T>)
inline void* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___list0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94, const RuntimeMethod*))NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_gshared)(___list0, method);
}
// System.Void Unity.Networking.Transport.DataStreamWriter::.ctor(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamWriter__ctor_mE61DA857285F4FF4469253135FF3E8A40673EE62 (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint8_t* ___data0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Boolean Unity.Networking.Transport.DataStreamWriter::WriteInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_WriteInt_mEE3DE78C7B6AA46BB509437F89EEA0658F2A851E (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::AppendDataAtTail(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemMove(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemMove_m4799FAA9C4BCFA1AEDC6ED01BB9A6DF657C4CEE3 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::PushMessage(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1<System.Byte>::AsArray()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, const RuntimeMethod*))NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_gshared)(__this, method);
}
// System.Void Unity.Networking.Transport.DataStreamReader::.ctor(Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamReader__ctor_mE6C5005A31142F3547C3CE8D5D98AFCC383C009B (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamWriter::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.DataStreamReader::SeekSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamReader_SeekSet_m0B3939FF6C6A1C3B5A47CCA959457ED3DDF421DE (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, int32_t ___pos0, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamReader::ReadInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStreamReader_ReadInt_m862924CC887B2309FAA8ED4C8E40E452B3D58E45 (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamReader::GetBytesRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStreamReader_GetBytesRead_m3A3C261F207245C5211B1066DC6BEFED2F1A7636 (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithMessages(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithBytes(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Consume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCertificate_m17E07950D0BAE0F46481FD63731F00F964024023 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerPrivate_mC64E26A2A2D022FA90E1D97ECBA6EC63988D55ED (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCA_mCD4313D71FDCA16695E86846C97ED8273E3D07E1 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCommonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326_inline (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.Netcode.Transports.UTP.UnityTransport>()
inline UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetServerSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetServerSecrets_m684BAAECD15C338E085AC16DB4CE73B1AA28E027 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___serverCertificate0, String_t* ___serverPrivateKey1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetClientSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetClientSecrets_mEF4456DE072468B4B0F3133CA9A61B32FFD3DCC5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___serverCommonName0, String_t* ___caCertificate1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::ReadFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A (String_t* ___path0, String_t* ___label1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToString(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorUtilities_ErrorToString_mBC73277A2AF455EC019CF36B522C084F411DA3C3 (int32_t ___error0, uint64_t ___connectionId1, const RuntimeMethod* method) ;
// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToFixedString(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B (int32_t ___error0, uint64_t ___connectionId1, const RuntimeMethod* method) ;
// System.String Unity.Collections.FixedString128Bytes::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29 (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* __this, const RuntimeMethod* method) ;
// Unity.Collections.FixedString128Bytes Unity.Collections.FixedString::Format(Unity.Collections.FixedString128Bytes,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 FixedString_Format_m68D81C29724F640A5261464C671E96EB92AAA4B0 (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___formatString0, float ___arg01, const RuntimeMethod* method) ;
// Unity.Collections.FixedString128Bytes Unity.Collections.FixedString128Bytes::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E (String_t* ___b0, const RuntimeMethod* method) ;
// Unity.Collections.FixedString128Bytes Unity.Collections.FixedString::Format(Unity.Collections.FixedString128Bytes,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 FixedString_Format_m6F108E2AF8178697C27234FF8AA515F32B77F4AF (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___formatString0, int32_t ___arg01, const RuntimeMethod* method) ;
// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor Unity.Netcode.Transports.UTP.UnityTransport::get_DriverConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityTransport_get_DriverConstructor_m87F5F253CC96D0739B5C93BE84A65A8851748461 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkDriver Unity.Netcode.Transports.UTP.UnityTransport::get_NetworkDriver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>::Invoke(T1,T2)
inline void Action_2_Invoke_mD7C393AE045EF225975A8BF6B27887913C28A829_inline (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* __this, int32_t ___arg10, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*, int32_t, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036, const RuntimeMethod*))Action_2_Invoke_mD7C393AE045EF225975A8BF6B27887913C28A829_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean Unity.Networking.Transport.NetworkDriver::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkDriver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkSettings::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_Dispose_m2D73A6555834E52D4631863324D4FA79F1B696FD (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Values()
inline ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, const RuntimeMethod*))Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
inline Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D (ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB (*) (ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D*, const RuntimeMethod*))ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
inline void Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB*, const RuntimeMethod*))Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
inline BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_inline (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method)
{
	return ((  BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 (*) (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB*, const RuntimeMethod*))Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
inline bool Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB*, const RuntimeMethod*))Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Clear()
inline void Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, const RuntimeMethod*))Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_gshared)(__this, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipeline Unity.Networking.Transport.NetworkPipeline::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 NetworkPipeline_get_Null_m2A86DFD59FADE78775823D6AB411F3F968BBB00D (const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.Relay.RelayParameterExtensions::WithRelayParameters(Unity.Networking.Transport.NetworkSettings&,Unity.Networking.Transport.Relay.RelayServerData&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* RelayParameterExtensions_WithRelayParameters_m8025C21B35FAD6E160B05C727131152D372D3F0F (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___settings0, RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* ___serverData1, int32_t ___relayConnectionTimeMS2, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkFamily Unity.Networking.Transport.NetworkEndPoint::get_Family()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::InitDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_AnyIpv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 NetworkEndPoint_get_AnyIpv4_m9E44E70ACE51BA65B73BBF8217835C6669D0927D (const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_AnyIpv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 NetworkEndPoint_get_AnyIpv6_mC4CE165BBEF5C10339B7CE69AF44BDBFFE84DA24 (const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::Bind(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_Bind_m994686C7645A1A631C8A4B74B5E508ECB062C771 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___endpoint0, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection Unity.Networking.Transport.NetworkDriver::Connect(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 NetworkDriver_Connect_m135819C4EE07E41AE102BC66C00BE43DEB454FCE (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___endpoint0, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE (NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___utpConnectionId0, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::Listen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_Listen_m9673394E3D802D8A4FD978682B4AFDC19B0C7020 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayServerData::.ctor(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayServerData__ctor_m039E25DA5133BDFB0F8C29E4C721A792C7C46042 (RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* __this, String_t* ___host0, uint16_t ___port1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___allocationId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___connectionData3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hostConnectionData4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key5, bool ___isSecure6, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetProtocol(Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___inProtocol0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetRelayServerData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___ipv4Address0, uint16_t ___port1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___allocationIdBytes2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___connectionDataBytes4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hostConnectionDataBytes5, bool ___isSecure6, const RuntimeMethod* method) ;
// System.String Unity.Networking.Transport.NetworkEndPoint::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEndPoint_get_Address_m8CB1DFBD3F0943AF98BC707EB0F942B698EE00E5 (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::op_Inequality(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_op_Inequality_m582DA760A6FE0C5119D41F5CE211A397FE07A384 (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___lhs0, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___rhs1, const RuntimeMethod* method) ;
// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetConnectionData(System.String,System.UInt16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetConnectionData_m072363DFC264110D349C7D3F958E8464EB1B74CC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___ipv4Address0, uint16_t ___port1, String_t* ___listenAddress2, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ServerBindAndListen(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___endPoint0, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkDriver/Concurrent Unity.Networking.Transport.NetworkDriver::ToConcurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 NetworkDriver_ToConcurrent_mF20A77F70A8BAF09360A9FF010440F004A4625BA (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Void Unity.Jobs.IJobExtensions::Run<Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob>(T)
inline void IJobExtensions_Run_TisSendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_m8805B81AA5D1503F36E31919FA2D1A9ACA2D6AB0 (SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC ___jobData0, const RuntimeMethod* method)
{
	((  void (*) (SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC, const RuntimeMethod*))IJobExtensions_Run_TisSendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_m8805B81AA5D1503F36E31919FA2D1A9ACA2D6AB0_gshared)(___jobData0, method);
}
// Unity.Networking.Transport.NetworkConnection Unity.Networking.Transport.NetworkDriver::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 NetworkDriver_Accept_m3F866B13DCB636206113E97EA279160AFDA789DB (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkConnection::op_Equality(Unity.Networking.Transport.NetworkConnection,Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkConnection_op_Equality_m14044022C0D3C1DA3CF97186FCD59D88256F8202 (NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___lhs0, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___rhs1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTransport::InvokeOnTransportEvent(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::op_Equality(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___lhs0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, uint64_t ___key0, BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A*, uint64_t, BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA**, const RuntimeMethod*))Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PushReader(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue_PushReader_m0E81E806C9D1FD220CF8A15189B42C36FD37ED19 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___reader0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::.ctor(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___reader0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777 (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, uint64_t ___key0, BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A*, uint64_t, BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA*, const RuntimeMethod*))Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared)(__this, ___key0, ___value1, method);
}
// System.ArraySegment`1<System.Byte> Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PopMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 BatchedReceiveQueue_PopMessage_m20B586540098D5D1A1FD0830396FAFB62CD6E9BF (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) ;
// System.Boolean System.ArraySegment`1<System.Byte>::op_Equality(System.ArraySegment`1<T>,System.ArraySegment`1<T>)
inline bool ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___a0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___b1, const RuntimeMethod* method)
{
	return ((  bool (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_gshared)(___a0, ___b1, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedReceiveQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedReceiveQueue_get_IsEmpty_mE6FE9C4054B69EFAB47C9842F39A16E9F1753721 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEvent/Type Unity.Networking.Transport.NetworkDriver::PopEvent(Unity.Networking.Transport.NetworkConnection&,Unity.Networking.Transport.DataStreamReader&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetworkDriver_PopEvent_mE0ECB283C8178BAA9C30364C1242BABEC19B5757 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4* ___con0, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* ___reader1, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___pipeline2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::Remove(TKey)
inline bool Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A*, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E_gshared)(__this, ___key0, method);
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ClearSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ReceiveMessages(System.UInt64,Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ReceiveMessages_mB3FBD7582B7E56D776F3869A236952701DC217D5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipeline1, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___dataReader2, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
inline Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
inline void Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD*, const RuntimeMethod*))Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
inline KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 (*) (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD*, const RuntimeMethod*))Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Key()
inline SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method)
{
	return ((  SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 (*) (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293*, const RuntimeMethod*))KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Value()
inline BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method)
{
	return ((  BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 (*) (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293*, const RuntimeMethod*))KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_gshared_inline)(__this, method);
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SendBatchedMessages(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___sendTarget0, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___queue1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
inline bool Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94 (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD*, const RuntimeMethod*))Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_gshared)(__this, method);
}
// Unity.Jobs.JobHandle Unity.Networking.Transport.NetworkDriver::ScheduleUpdate(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NetworkDriver_ScheduleUpdate_mBF306FD6BA96C2D1439D9322429EDFB7FF581A14 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dep0, const RuntimeMethod* method) ;
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayConnectionStatus Unity.Networking.Transport.Relay.NetworkDriverRelayExtensions::GetRelayConnectionStatus(Unity.Networking.Transport.NetworkDriver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriverRelayExtensions_GetRelayConnectionStatus_mE2BFB1735FAA4BBD33FB3C3C8770BC30D99B2CA6 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___driver0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::AcceptConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_AcceptConnection_m14AA4E2915B8E5C2E6B8643A3C103EED242A928B (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ProcessEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ProcessEvent_mDBA825C0B894F06F2C2B4A64BBDF0AA0E52FBC7A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisposeInternals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection/State Unity.Networking.Transport.NetworkDriver::GetConnectionState(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___con0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipelineStageId Unity.Networking.Transport.NetworkPipelineStageCollection::GetStageId(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA NetworkPipelineStageCollection_GetStageId_m46FAF89A65BC1F183DB1894225CE89C7A39CEF20 (Type_t* ___stageType0, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkDriver::GetPipelineBuffers(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkPipelineStageId,Unity.Networking.Transport.NetworkConnection,Unity.Collections.NativeArray`1<System.Byte>&,Unity.Collections.NativeArray`1<System.Byte>&,Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkDriver_GetPipelineBuffers_mDFAB4A0B3F7E3A330FFC1B21D72C1E2ADF790667 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipeline0, NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA ___stageId1, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___connection2, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___readProcessingBuffer3, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___writeProcessingBuffer4, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___sharedBuffer5, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___nativeArray0, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513 (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, int32_t ___initialCapacity0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_gshared)(__this, ___initialCapacity0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Dispose()
inline void NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784 (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935*, const RuntimeMethod*))NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Keys()
inline KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, const RuntimeMethod*))Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
inline Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A (KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 (*) (KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B*, const RuntimeMethod*))KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
inline void Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153 (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4*, const RuntimeMethod*))Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
inline SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_inline (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method)
{
	return ((  SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 (*) (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4*, const RuntimeMethod*))Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_gshared_inline)(__this, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Add(T&)
inline void NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90 (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935*, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*, const RuntimeMethod*))NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_gshared)(__this, ___value0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
inline bool Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704 (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4*, const RuntimeMethod*))Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::GetEnumerator()
inline Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 (*) (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935*, const RuntimeMethod*))NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Dispose()
inline void Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513 (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327*, const RuntimeMethod*))Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_gshared)(__this, method);
}
// T Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::get_Current()
inline SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178 (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method)
{
	return ((  SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 (*) (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327*, const RuntimeMethod*))Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Item(TKey)
inline BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, const RuntimeMethod* method)
{
	return ((  BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653, const RuntimeMethod*))Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Remove(TKey)
inline bool Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653, const RuntimeMethod*))Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_gshared)(__this, ___key0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::MoveNext()
inline bool Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0 (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327*, const RuntimeMethod*))Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_gshared)(__this, method);
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::FlushSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5 (uint64_t ___netcodeConnectionId0, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::Disconnect(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_Disconnect_m1925090D52AEF6839A78D391892C269C2184D587 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___id0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkConnectionManager::ClientIdToTransportId(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkConnectionManager_ClientIdToTransportId_m1329EE63E4DBF4FC449E7EF214B6B0F00F7318E0_inline (NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* __this, uint64_t ___clientId0, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::ExtractRtt(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___networkConnection0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.RealTimeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeProvider__ctor_m4DC17BC4A594007AF7DE0657C6CE3D73112C9D7A (RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B* __this, const RuntimeMethod* method) ;
// Unity.Netcode.IRealTimeProvider Unity.Netcode.NetworkManager::get_RealTimeProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_RealTimeProvider_mAF8EEDE4C46E0478801F0ABCFF5410F762FAF8BE_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkSettings::.ctor(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings__ctor_mA6470D24077F1464F81F521A490AAB45DF4E4EFB (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, int32_t ___allocator0, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.Utilities.FragmentationStageParameterExtensions::WithFragmentationStageParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* FragmentationStageParameterExtensions_WithFragmentationStageParameters_m36789359AAC36AE9359B0D4851E5B3E66A570720 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___settings0, int32_t ___payloadCapacity1, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.Utilities.ReliableStageParameterExtensions::WithReliableStageParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ReliableStageParameterExtensions_WithReliableStageParameters_mB9D05293EB3AAA38BA6CEBA63A5F9BE991BDFD5F (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___settings0, int32_t ___windowSize1, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.BaselibNetworkParameterExtensions::WithBaselibNetworkInterfaceParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* BaselibNetworkParameterExtensions_WithBaselibNetworkInterfaceParameters_m7D3FB8742A79FAF55A847330FE57ADB0C10B75FD (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___settings0, int32_t ___receiveQueueCapacity1, int32_t ___sendQueueCapacity2, uint32_t ___maximumPayloadSize3, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::SelectSendPipeline(Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 UnityTransport_SelectSendPipeline_m30254C6AD763FA133356411D218D998CC9C03E91 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___delivery0, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::op_Inequality(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_op_Inequality_m3B0595A06BF15AF50491B0B482B36B12C2683178 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___lhs0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___rhs1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::.ctor(System.UInt64,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, uint64_t ___clientId0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___networkPipeline1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*, const RuntimeMethod*))Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Add(TKey,TValue)
inline void Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key0, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988, const RuntimeMethod*))Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_gshared)(__this, ___key0, ___value1, method);
}
// System.UInt64 Unity.Netcode.NetworkConnectionManager::TransportIdToClientId(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkConnectionManager_TransportIdToClientId_m69297481202CC42996037059EC44262CFE5FB6EC_inline (NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* __this, uint64_t ___transportId0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Networking.Transport.NetworkDriver::ScheduleFlushSend(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NetworkDriver_ScheduleFlushSend_mD70E667D237F0E074B7B41BB34458119043A0958 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dep0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ClientBindAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ClientBindAndConnect_m314FF705C9FCF4363F289CDD4674F179E8203BDF (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ListenEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartRelayServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartRelayServer_m6AABA070D1F162026424AF5D7DD02FD6C9227097 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::Clear()
inline void Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A*, const RuntimeMethod*))Dictionary_2_Clear_m6E34CC0D7FF8EBEE6889AF1C9DB70009EDBC1706_gshared)(__this, method);
}
// System.Nullable`1<System.UInt32> Unity.Netcode.Transports.UTP.UnityTransport::get_DebugSimulatorRandomSeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, const RuntimeMethod*))Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline)(__this, method);
}
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7 (const RuntimeMethod* method) ;
// T System.Nullable`1<System.UInt32>::GetValueOrDefault()
inline uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline)(__this, method);
}
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.Utilities.SimulatorStageParameterExtensions::WithSimulatorStageParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* SimulatorStageParameterExtensions_WithSimulatorStageParameters_mC426EFA09868B412137F4DA2770D658A594E8B1B (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___settings0, int32_t ___maxPacketCount1, int32_t ___maxPacketSize2, int32_t ___packetDelayMs3, int32_t ___packetJitterMs4, int32_t ___packetDropInterval5, int32_t ___packetDropPercentage6, int32_t ___fuzzFactor7, int32_t ___fuzzOffset8, uint32_t ___randomSeed9, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.CommonNetworkParametersExtensions::WithNetworkConfigParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* CommonNetworkParametersExtensions_WithNetworkConfigParameters_m6EF7D65466B63D63B632D3D5BDF49CB47CD938F7 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___settings0, int32_t ___connectTimeoutMS1, int32_t ___maxConnectAttempts2, int32_t ___disconnectTimeoutMS3, int32_t ___heartbeatTimeoutMS4, int32_t ___maxFrameTimeMS5, int32_t ___fixedFrameTimeMS6, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkDriver Unity.Networking.Transport.NetworkDriver::Create(Unity.Networking.Transport.NetworkSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 NetworkDriver_Create_m28AD7ED83DAC754E2CF8605F6DC7465203B42DBE (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___settings0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetupPipelinesForUtp1(Unity.Networking.Transport.NetworkDriver,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetupPipelinesForUtp1_mBB88F9D60C339BA6D7462E30462B02BDC10A7B3D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___driver0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___unreliableFragmentedPipeline1, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___unreliableSequencedFragmentedPipeline2, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___reliableSequencedPipeline3, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipeline Unity.Networking.Transport.NetworkDriver::CreatePipeline(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___stages0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::.ctor()
inline void Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*, const RuntimeMethod*))Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::.ctor()
inline void Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81 (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A*, const RuntimeMethod*))Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared)(__this, method);
}
// System.Void Unity.Netcode.NetworkTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::TryParse(System.String,System.UInt16,Unity.Networking.Transport.NetworkEndPoint&,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E (String_t* ___address0, uint16_t ___port1, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* ___endpoint2, int32_t ___family3, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ParseNetworkEndpoint(System.String,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_ParseNetworkEndpoint_m93C005D46E35A425F3715D7B0355A3CB49F0A828 (String_t* ___ip0, uint16_t ___port1, bool ___silent2, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_LoopbackIpv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 NetworkEndPoint_get_LoopbackIpv4_m7189BA088DDB27DECB093343C5D4DAFE16FB1FA2 (const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_LoopbackIpv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 NetworkEndPoint_get_LoopbackIpv6_m35D5CA8E9B3980579CEDE256F5F8A88574A24AD8 (const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::WithPort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 NetworkEndPoint_WithPort_mF8B99C061FF1575156E13643D36954B6D437094C (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* __this, uint16_t ___port0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_IsIpv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionAddressData_get_IsIpv6_mE612A7E74750A01212193FD88E72B6EE53813C90 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver/Concurrent::BeginSend(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkConnection,Unity.Networking.Transport.DataStreamWriter&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Concurrent_BeginSend_m08F4DDE3E9503455B091B4F1CA55709107405DAC (Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipe0, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___id1, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer2, int32_t ___requiredPayloadSize3, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver/Concurrent::EndSend(Unity.Networking.Transport.DataStreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Concurrent_EndSend_m37CAD602AD47C3AEF56E5DAF464382CDD2A94B18 (Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA ___writer0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7 (SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::Equals(Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_Equals_mDDEEE23DC6479D865F524372DE89B48CC06B6F14 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___connection0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___other0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkPipeline::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF_inline (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetNetcodeClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint8_t ___hostId0, uint16_t ___connectionId1, bool ___isServer2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsStarted_mB18FFFD3F8718BFE678B7460A9D5772F1B02628E (const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::get_ConnectedClientsList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_ConnectedClientsList_mA7F66C446F46012C187EB6C41FB399C511E6EDC9 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___clientId0, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkManager::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___clientId0, uint8_t* ___hostId1, uint16_t* ___connectionId2, const RuntimeMethod* method) ;
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::QueueMessageForSending(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::SendQueuedMessages(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74 (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method) ;
// UnityEngine.Networking.ConnectionConfig Unity.Netcode.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC (int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20 (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRTT(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxSentMessageQueueSize_m4EF0FBEF7C0BF9A3D28BE8577B7AA449522EDEE7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkConnectionManager::GetServerTransportId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkConnectionManager_GetServerTransportId_mF951847AF72F8F2F0C4F6D842D32633B249A7846_inline (NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5 (Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* __this, uint64_t ___key0, uint64_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42*, uint64_t, uint64_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Netcode.LogLevel Unity.Netcode.NetworkLog::get_CurrentLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkLog_get_CurrentLogLevel_m8D46ADEFC32E3AC0592F30B64B2062202A97AF9C (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkLog::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkLog_LogWarning_m1A2073B527F4B95F216508B0E5A76DF71823D899 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.Netcode.RealTimeProvider::get_RealTimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RealTimeProvider_get_RealTimeSinceStartup_m66782283B8247B386C07A0F07661623907B7B1B2 (RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B* __this, const RuntimeMethod* method) 
{
	{
		// public float RealTimeSinceStartup => Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		return L_0;
	}
}
// System.Single Unity.Netcode.RealTimeProvider::get_UnscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RealTimeProvider_get_UnscaledTime_mF29A161516E9714F373859B4F5B2EC20FA926F2F (RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B* __this, const RuntimeMethod* method) 
{
	{
		// public float UnscaledTime => Time.unscaledTime;
		float L_0;
		L_0 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		return L_0;
	}
}
// System.Single Unity.Netcode.RealTimeProvider::get_UnscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RealTimeProvider_get_UnscaledDeltaTime_m0B1AD9306F844B8BF33813A81EB080C477BB4426 (RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B* __this, const RuntimeMethod* method) 
{
	{
		// public float UnscaledDeltaTime => Time.unscaledDeltaTime;
		float L_0;
		L_0 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		return L_0;
	}
}
// System.Single Unity.Netcode.RealTimeProvider::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RealTimeProvider_get_DeltaTime_mE77CC09298345A74378F168CF9FED93A390A7A61 (RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B* __this, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime => Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		return L_0;
	}
}
// System.Void Unity.Netcode.RealTimeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeProvider__ctor_m4DC17BC4A594007AF7DE0657C6CE3D73112C9D7A (RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Netcode.NetworkTransport::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsSupported_m55D61FEFB95616D76EE1CCAA551D4ED53C8F6CD0 (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsSupported => true;
		return (bool)1;
	}
}
// System.Void Unity.Netcode.NetworkTransport::add_OnTransportEvent(Unity.Netcode.NetworkTransport/TransportEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_add_OnTransportEvent_m47B8F9ACBBB2EC7F737857DB19489C24C4C9E8E4 (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_0 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_1 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_2 = NULL;
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_0 = __this->___OnTransportEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_1 = V_0;
		V_1 = L_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_2 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)CastclassSealed((RuntimeObject*)L_4, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var));
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135** L_5 = (&__this->___OnTransportEvent_5);
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_6 = V_2;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_7 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_8;
		L_8 = InterlockedCompareExchangeImpl<TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*>(L_5, L_6, L_7);
		V_0 = L_8;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_9 = V_0;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_10 = V_1;
		if ((!(((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_9) == ((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.NetworkTransport::remove_OnTransportEvent(Unity.Netcode.NetworkTransport/TransportEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_remove_OnTransportEvent_mAB4E27758F95E4649B1B90725F7B20096B30145A (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_0 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_1 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_2 = NULL;
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_0 = __this->___OnTransportEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_1 = V_0;
		V_1 = L_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_2 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)CastclassSealed((RuntimeObject*)L_4, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var));
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135** L_5 = (&__this->___OnTransportEvent_5);
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_6 = V_2;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_7 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_8;
		L_8 = InterlockedCompareExchangeImpl<TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*>(L_5, L_6, L_7);
		V_0 = L_8;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_9 = V_0;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_10 = V_1;
		if ((!(((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_9) == ((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.NetworkTransport::InvokeOnTransportEvent(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method) 
{
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* G_B2_0 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* G_B1_0 = NULL;
	{
		// OnTransportEvent?.Invoke(eventType, clientId, payload, receiveTime);
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_0 = __this->___OnTransportEvent_5;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___eventType0;
		uint64_t L_3 = ___clientId1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_4 = ___payload2;
		float L_5 = ___receiveTime3;
		NullCheck(G_B2_0);
		TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_inline(G_B2_0, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_Multicast(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* currentDelegate = reinterpret_cast<TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___eventType0, ___clientId1, ___payload2, ___receiveTime3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenInst(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___eventType0, ___clientId1, ___payload2, ___receiveTime3, method);
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStatic(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___eventType0, ___clientId1, ___payload2, ___receiveTime3, method);
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStaticInvoker(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float >::Invoke(__this->___method_ptr_0, method, NULL, ___eventType0, ___clientId1, ___payload2, ___receiveTime3);
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_ClosedStaticInvoker(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___eventType0, ___clientId1, ___payload2, ___receiveTime3);
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate__ctor_mAF3FFFC3C352B29CF7221CF2ECE6D968F35BF90F (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_Multicast;
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::Invoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___eventType0, ___clientId1, ___payload2, ___receiveTime3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkTransport/TransportEventDelegate::BeginInvoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransportEventDelegate_BeginInvoke_m096188072C0C81ECD769AB1B8209E2E7CE121AA6 (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEvent_tFC4FE8610A831452CA942B169FB11657DA90B9EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(NetworkEvent_tFC4FE8610A831452CA942B169FB11657DA90B9EB_il2cpp_TypeInfo_var, &___eventType0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___clientId1);
	__d_args[2] = Box(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var, &___payload2);
	__d_args[3] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___receiveTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_EndInvoke_m40161665A1A08F92AE989358150764E38F579AAE (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Netcode.Transports.UTP.BatchedReceiveQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedReceiveQueue_get_IsEmpty_mE6FE9C4054B69EFAB47C9842F39A16E9F1753721 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => m_Length <= 0;
		int32_t L_0 = __this->___m_Length_2;
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::.ctor(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// public BatchedReceiveQueue(DataStreamReader reader)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Data = new byte[reader.Length];
		int32_t L_0;
		L_0 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline((&___reader0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_Data_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_1);
		// fixed (byte* dataPtr = m_Data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Data_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_002c;
		}
	}

IL_0027:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0035;
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0035:
	{
		// reader.ReadBytes(dataPtr, reader.Length);
		uint8_t* L_6 = V_0;
		int32_t L_7;
		L_7 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline((&___reader0), NULL);
		DataStreamReader_ReadBytes_m1E2D499A170CDF22A902617B1072E7E1091874A3((&___reader0), L_6, L_7, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// m_Offset = 0;
		__this->___m_Offset_1 = 0;
		// m_Length = reader.Length;
		int32_t L_8;
		L_8 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline((&___reader0), NULL);
		__this->___m_Length_2 = L_8;
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PushReader(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue_PushReader_m0E81E806C9D1FD220CF8A15189B42C36FD37ED19 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// var available = m_Data.Length - (m_Offset + m_Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_Data_0;
		NullCheck(L_0);
		int32_t L_1 = __this->___m_Offset_1;
		int32_t L_2 = __this->___m_Length_2;
		// if (available < reader.Length)
		int32_t L_3;
		L_3 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline((&___reader0), NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)il2cpp_codegen_add(L_1, L_2))))) >= ((int32_t)L_3)))
		{
			goto IL_007c;
		}
	}
	{
		// if (m_Length > 0)
		int32_t L_4 = __this->___m_Length_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// Array.Copy(m_Data, m_Offset, m_Data, 0, m_Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___m_Data_0;
		int32_t L_6 = __this->___m_Offset_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Data_0;
		int32_t L_8 = __this->___m_Length_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
	}

IL_0046:
	{
		// m_Offset = 0;
		__this->___m_Offset_1 = 0;
		goto IL_0064;
	}

IL_004f:
	{
		// Array.Resize(ref m_Data, m_Data.Length * 2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_9 = (&__this->___m_Data_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___m_Data_0;
		NullCheck(L_10);
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297(L_9, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_10)->max_length)), 2)), Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0064:
	{
		// while (m_Data.Length - m_Length < reader.Length)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Data_0;
		NullCheck(L_11);
		int32_t L_12 = __this->___m_Length_2;
		int32_t L_13;
		L_13 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline((&___reader0), NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12))) < ((int32_t)L_13)))
		{
			goto IL_004f;
		}
	}

IL_007c:
	{
		// fixed (byte* dataPtr = m_Data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___m_Data_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_008b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			goto IL_0090;
		}
	}

IL_008b:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0099;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		NullCheck(L_17);
		V_0 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0099:
	{
		// reader.ReadBytes(dataPtr + m_Offset + m_Length, reader.Length);
		uint8_t* L_18 = V_0;
		int32_t L_19 = __this->___m_Offset_1;
		int32_t L_20 = __this->___m_Length_2;
		int32_t L_21;
		L_21 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline((&___reader0), NULL);
		DataStreamReader_ReadBytes_m1E2D499A170CDF22A902617B1072E7E1091874A3((&___reader0), ((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_19)), L_20)), L_21, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// m_Length += reader.Length;
		int32_t L_22 = __this->___m_Length_2;
		int32_t L_23;
		L_23 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline((&___reader0), NULL);
		__this->___m_Length_2 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		// }
		return;
	}
}
// System.ArraySegment`1<System.Byte> Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PopMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 BatchedReceiveQueue_PopMessage_m20B586540098D5D1A1FD0830396FAFB62CD6E9BF (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_Length < sizeof(int))
		int32_t L_0 = __this->___m_Length_2;
		if ((((int32_t)L_0) >= ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = V_1;
		return L_1;
	}

IL_0013:
	{
		// var messageLength = BitConverter.ToInt32(m_Data, m_Offset);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Data_0;
		int32_t L_3 = __this->___m_Offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_2, L_3, NULL);
		V_0 = L_4;
		// if (m_Length - sizeof(int) < messageLength)
		int32_t L_5 = __this->___m_Length_2;
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 4))) >= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_7 = V_1;
		return L_7;
	}

IL_003a:
	{
		// var data = new ArraySegment<byte>(m_Data, m_Offset + sizeof(int), messageLength);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___m_Data_0;
		int32_t L_9 = __this->___m_Offset_1;
		int32_t L_10 = V_0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_11), L_8, ((int32_t)il2cpp_codegen_add(L_9, 4)), L_10, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// m_Offset += sizeof(int) + messageLength;
		int32_t L_12 = __this->___m_Offset_1;
		int32_t L_13 = V_0;
		__this->___m_Offset_1 = ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_add(4, L_13))));
		// m_Length -= sizeof(int) + messageLength;
		int32_t L_14 = __this->___m_Length_2;
		int32_t L_15 = V_0;
		__this->___m_Length_2 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)il2cpp_codegen_add(4, L_15))));
		// return data;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_HeadIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_HeadTailIndices[k_HeadInternalIndex]; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer_0, 0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_HeadIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_HeadTailIndices[k_HeadInternalIndex] = value; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1 = ___value0;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_0)->___m_Buffer_0, 0, (L_1));
		// set { m_HeadTailIndices[k_HeadInternalIndex] = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(_thisAdjusted, ___value0, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_TailIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_HeadTailIndices[k_TailInternalIndex]; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer_0, 1);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_TailIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_HeadTailIndices[k_TailInternalIndex] = value; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1 = ___value0;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_0)->___m_Buffer_0, 1, (L_1));
		// set { m_HeadTailIndices[k_TailInternalIndex] = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(_thisAdjusted, ___value0, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	{
		// public int Length => TailIndex - HeadIndex;
		int32_t L_0;
		L_0 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_1;
		L_1 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Capacity => m_Data.Length;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_0 = (&__this->___m_Data_0);
		int32_t L_1;
		L_1 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_0, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => HeadIndex == TailIndex;
		int32_t L_0;
		L_0 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_1;
		L_1 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsCreated => m_Data.IsCreated;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_0 = (&__this->___m_Data_0);
		bool L_1;
		L_1 = NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88(L_0, NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MaximumCapacity = capacity + (capacity & 1);
		int32_t L_0 = ___capacity0;
		int32_t L_1 = ___capacity0;
		__this->___m_MaximumCapacity_2 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_1&1))));
		// m_MinimumCapacity = m_MaximumCapacity;
		int32_t L_2 = __this->___m_MaximumCapacity_2;
		__this->___m_MinimumCapacity_3 = L_2;
		goto IL_0027;
	}

IL_0019:
	{
		// m_MinimumCapacity /= 2;
		int32_t L_3 = __this->___m_MinimumCapacity_3;
		__this->___m_MinimumCapacity_3 = ((int32_t)(L_3/2));
	}

IL_0027:
	{
		// while (m_MinimumCapacity / 2 >= MinimumMinimumCapacity)
		int32_t L_4 = __this->___m_MinimumCapacity_3;
		if ((((int32_t)((int32_t)(L_4/2))) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_0019;
		}
	}
	{
		// m_Data = new NativeList<byte>(m_MinimumCapacity, Allocator.Persistent);
		int32_t L_5 = __this->___m_MinimumCapacity_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_7;
		memset((&L_7), 0, sizeof(L_7));
		NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078((&L_7), L_5, L_6, /*hidden argument*/NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_RuntimeMethod_var);
		__this->___m_Data_0 = L_7;
		// m_HeadTailIndices = new NativeArray<int>(2, Allocator.Persistent);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_8;
		memset((&L_8), 0, sizeof(L_8));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_8), 2, 4, 1, /*hidden argument*/NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_HeadTailIndices_1 = L_8;
		// m_Data.ResizeUninitialized(m_MinimumCapacity);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_9 = (&__this->___m_Data_0);
		int32_t L_10 = __this->___m_MinimumCapacity_3;
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_9, L_10, NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		// HeadIndex = 0;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, 0, NULL);
		// TailIndex = 0;
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E_AdjustorThunk (RuntimeObject* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E(_thisAdjusted, ___capacity0, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsCreated)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// m_Data.Dispose();
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_1 = (&__this->___m_Data_0);
		NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6(L_1, NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_RuntimeMethod_var);
		// m_HeadTailIndices.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_2 = (&__this->___m_HeadTailIndices_1);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_2, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C(_thisAdjusted, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::WriteBytes(Unity.Networking.Transport.DataStreamWriter&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, uint8_t* ___data1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		// writer.WriteBytes(data, length);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_0 = ___writer0;
		uint8_t* L_1 = ___data1;
		int32_t L_2 = ___length2;
		bool L_3;
		L_3 = DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933_AdjustorThunk (RuntimeObject* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, uint8_t* ___data1, int32_t ___length2, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(_thisAdjusted, ___writer0, ___data1, ___length2, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::AppendDataAtTail(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// var writer = new DataStreamWriter((byte*)m_Data.GetUnsafePtr() + TailIndex, Capacity - TailIndex);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_0 = __this->___m_Data_0;
		void* L_1;
		L_1 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_0, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_2;
		L_2 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_3;
		L_3 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_4;
		L_4 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		DataStreamWriter__ctor_mE61DA857285F4FF4469253135FF3E8A40673EE62((&V_0), (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_1, L_2)), ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		// writer.WriteInt(data.Count);
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		bool L_6;
		L_6 = DataStreamWriter_WriteInt_mEE3DE78C7B6AA46BB509437F89EEA0658F2A851E((&V_0), L_5, NULL);
		// fixed (byte* dataPtr = data.Array)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___data0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		V_2 = L_8;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		if (((int32_t)(((RuntimeArray*)L_9)->max_length)))
		{
			goto IL_004a;
		}
	}

IL_0045:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_0053;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		NullCheck(L_10);
		V_1 = (uint8_t*)((uintptr_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0053:
	{
		// WriteBytes(ref writer, dataPtr + data.Offset, data.Count);
		uint8_t* L_11 = V_1;
		int32_t L_12;
		L_12 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___data0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		int32_t L_13;
		L_13 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(__this, (&V_0), ((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12)), L_13, NULL);
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// TailIndex += sizeof(int) + data.Count;
		int32_t L_14;
		L_14 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_15;
		L_15 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)il2cpp_codegen_add(4, L_15)))), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9_AdjustorThunk (RuntimeObject* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(_thisAdjusted, ___data0, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::PushMessage(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsCreated)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (Capacity - TailIndex >= sizeof(int) + message.Count)
		int32_t L_1;
		L_1 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_2;
		L_2 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_3;
		L_3 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___message0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_3)))))
		{
			goto IL_002b;
		}
	}
	{
		// AppendDataAtTail(message);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_4 = ___message0;
		BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(__this, L_4, NULL);
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// if (HeadIndex > 0 && Length > 0)
		int32_t L_5;
		L_5 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_6;
		L_6 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		// UnsafeUtility.MemMove(m_Data.GetUnsafePtr(), (byte*)m_Data.GetUnsafePtr() + HeadIndex, Length);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_7 = __this->___m_Data_0;
		void* L_8;
		L_8 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_7, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_9 = __this->___m_Data_0;
		void* L_10;
		L_10 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_9, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_11;
		L_11 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_12;
		L_12 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		UnsafeUtility_MemMove_m4799FAA9C4BCFA1AEDC6ED01BB9A6DF657C4CEE3(L_8, ((void*)il2cpp_codegen_add((intptr_t)L_10, L_11)), ((int64_t)L_12), NULL);
		// TailIndex = Length;
		int32_t L_13;
		L_13 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, L_13, NULL);
		// HeadIndex = 0;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, 0, NULL);
	}

IL_0079:
	{
		// if (Capacity - TailIndex >= sizeof(int) + message.Count)
		int32_t L_14;
		L_14 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_15;
		L_15 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_16;
		L_16 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___message0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_16)))))
		{
			goto IL_00f2;
		}
	}
	{
		// AppendDataAtTail(message);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_17 = ___message0;
		BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(__this, L_17, NULL);
		goto IL_00ad;
	}

IL_009a:
	{
		// m_Data.ResizeUninitialized(Capacity / 2);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_18 = (&__this->___m_Data_0);
		int32_t L_19;
		L_19 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_18, ((int32_t)(L_19/2)), NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
	}

IL_00ad:
	{
		// while (TailIndex < Capacity / 4 && Capacity > m_MinimumCapacity)
		int32_t L_20;
		L_20 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_21;
		L_21 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)(L_21/4)))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_22;
		L_22 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_23 = __this->___m_MinimumCapacity_3;
		if ((((int32_t)L_22) > ((int32_t)L_23)))
		{
			goto IL_009a;
		}
	}

IL_00cb:
	{
		// return true;
		return (bool)1;
	}

IL_00cd:
	{
		// if (Capacity * 2 > m_MaximumCapacity)
		int32_t L_24;
		L_24 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_25 = __this->___m_MaximumCapacity_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_24, 2))) <= ((int32_t)L_25)))
		{
			goto IL_00df;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00df:
	{
		// m_Data.ResizeUninitialized(Capacity * 2);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_26 = (&__this->___m_Data_0);
		int32_t L_27;
		L_27 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_26, ((int32_t)il2cpp_codegen_multiply(L_27, 2)), NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
	}

IL_00f2:
	{
		// while (Capacity - TailIndex < sizeof(int) + message.Count)
		int32_t L_28;
		L_28 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_29;
		L_29 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_30;
		L_30 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___message0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_28, L_29))) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_30)))))
		{
			goto IL_00cd;
		}
	}
	{
		// AppendDataAtTail(message);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_31 = ___message0;
		BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(__this, L_31, NULL);
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA_AdjustorThunk (RuntimeObject* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA(_thisAdjusted, ___message0, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithMessages(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (!IsCreated || Length == 0)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return 0;
		return 0;
	}

IL_0012:
	{
		// var reader = new DataStreamReader(m_Data.AsArray());
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_2 = (&__this->___m_Data_0);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3;
		L_3 = NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E(L_2, NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_RuntimeMethod_var);
		DataStreamReader__ctor_mE6C5005A31142F3547C3CE8D5D98AFCC383C009B((&V_0), L_3, NULL);
		// var writerAvailable = writer.Capacity;
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_4 = ___writer0;
		int32_t L_5;
		L_5 = DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D(L_4, NULL);
		V_1 = L_5;
		// var readerOffset = HeadIndex;
		int32_t L_6;
		L_6 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		V_2 = L_6;
		goto IL_007d;
	}

IL_0034:
	{
		// reader.SeekSet(readerOffset);
		int32_t L_7 = V_2;
		DataStreamReader_SeekSet_m0B3939FF6C6A1C3B5A47CCA959457ED3DDF421DE((&V_0), L_7, NULL);
		// var messageLength = reader.ReadInt();
		int32_t L_8;
		L_8 = DataStreamReader_ReadInt_m862924CC887B2309FAA8ED4C8E40E452B3D58E45((&V_0), NULL);
		V_3 = L_8;
		// if (writerAvailable < sizeof(int) + messageLength)
		int32_t L_9 = V_1;
		int32_t L_10 = V_3;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_10)))))
		{
			goto IL_0086;
		}
	}
	{
		// writer.WriteInt(messageLength);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_11 = ___writer0;
		int32_t L_12 = V_3;
		bool L_13;
		L_13 = DataStreamWriter_WriteInt_mEE3DE78C7B6AA46BB509437F89EEA0658F2A851E(L_11, L_12, NULL);
		// var messageOffset = reader.GetBytesRead();
		int32_t L_14;
		L_14 = DataStreamReader_GetBytesRead_m3A3C261F207245C5211B1066DC6BEFED2F1A7636((&V_0), NULL);
		V_4 = L_14;
		// WriteBytes(ref writer, (byte*)m_Data.GetUnsafePtr() + messageOffset, messageLength);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_15 = ___writer0;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_16 = __this->___m_Data_0;
		void* L_17;
		L_17 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_16, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(__this, L_15, (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_17, L_18)), L_19, NULL);
		// writerAvailable -= sizeof(int) + messageLength;
		int32_t L_20 = V_1;
		int32_t L_21 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)il2cpp_codegen_add(4, L_21))));
		// readerOffset += sizeof(int) + messageLength;
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_add(4, L_23))));
	}

IL_007d:
	{
		// while (readerOffset < TailIndex)
		int32_t L_24 = V_2;
		int32_t L_25;
		L_25 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0034;
		}
	}

IL_0086:
	{
		// return writer.Capacity - writerAvailable;
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_26 = ___writer0;
		int32_t L_27;
		L_27 = DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D(L_26, NULL);
		int32_t L_28 = V_1;
		return ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4_AdjustorThunk (RuntimeObject* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4(_thisAdjusted, ___writer0, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithBytes(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!IsCreated || Length == 0)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return 0;
		return 0;
	}

IL_0012:
	{
		// var copyLength = Math.Min(writer.Capacity, Length);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_2 = ___writer0;
		int32_t L_3;
		L_3 = DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D(L_2, NULL);
		int32_t L_4;
		L_4 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_4, NULL);
		V_0 = L_5;
		// WriteBytes(ref writer, (byte*)m_Data.GetUnsafePtr() + HeadIndex, copyLength);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_6 = ___writer0;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_7 = __this->___m_Data_0;
		void* L_8;
		L_8 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_7, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_9;
		L_9 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_10 = V_0;
		BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(__this, L_6, (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_8, L_9)), L_10, NULL);
		// return copyLength;
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3_AdjustorThunk (RuntimeObject* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___writer0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3(_thisAdjusted, ___writer0, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Consume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (size >= Length)
		int32_t L_0 = ___size0;
		int32_t L_1;
		L_1 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		// HeadIndex = 0;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, 0, NULL);
		// TailIndex = 0;
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, 0, NULL);
		// m_Data.ResizeUninitialized(m_MinimumCapacity);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_2 = (&__this->___m_Data_0);
		int32_t L_3 = __this->___m_MinimumCapacity_3;
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_2, L_3, NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		return;
	}

IL_0029:
	{
		// HeadIndex += size;
		int32_t L_4;
		L_4 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_5 = ___size0;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A_AdjustorThunk (RuntimeObject* __this, int32_t ___size0, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A(_thisAdjusted, ___size0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_Awake_mD0DE669368057A3BD8EA7E790DFC5EF19FA799CA (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF258902371641A17276D7E53D25B16B6C26A890B);
		s_Il2CppMethodInitialized = true;
	}
	ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C V_0;
	memset((&V_0), 0, sizeof(V_0));
	ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var serverSecrets = new ServerSecrets();
		il2cpp_codegen_initobj((&V_0), sizeof(ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C));
	}
	try
	{// begin try (depth: 1)
		// serverSecrets.ServerCertificate = ServerCertificate;
		String_t* L_0;
		L_0 = SecretsLoaderHelper_get_ServerCertificate_m17E07950D0BAE0F46481FD63731F00F964024023(__this, NULL);
		(&V_0)->___ServerCertificate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ServerCertificate_1), (void*)L_0);
		// }
		goto IL_001e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		// Debug.Log(exception);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001e;
	}// end catch (depth: 1)

IL_001e:
	{
	}
	try
	{// begin try (depth: 1)
		// serverSecrets.ServerPrivate = ServerPrivate;
		String_t* L_1;
		L_1 = SecretsLoaderHelper_get_ServerPrivate_mC64E26A2A2D022FA90E1D97ECBA6EC63988D55ED(__this, NULL);
		(&V_0)->___ServerPrivate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ServerPrivate_0), (void*)L_1);
		// }
		goto IL_0035;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002e;
		}
		throw e;
	}

CATCH_002e:
	{// begin catch(System.Exception)
		// Debug.Log(exception);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0035;
	}// end catch (depth: 1)

IL_0035:
	{
		// var clientSecrets = new ClientSecrets();
		il2cpp_codegen_initobj((&V_1), sizeof(ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F));
	}
	try
	{// begin try (depth: 1)
		// clientSecrets.ClientCertificate = ClientCA;
		String_t* L_2;
		L_2 = SecretsLoaderHelper_get_ClientCA_mCD4313D71FDCA16695E86846C97ED8273E3D07E1(__this, NULL);
		(&V_1)->___ClientCertificate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___ClientCertificate_1), (void*)L_2);
		// }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004c;
		}
		throw e;
	}

CATCH_004c:
	{// begin catch(System.Exception)
		// Debug.Log(exception);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0053;
	}// end catch (depth: 1)

IL_0053:
	{
	}
	try
	{// begin try (depth: 1)
		// clientSecrets.ServerCommonName = ServerCommonName;
		String_t* L_3;
		L_3 = SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326_inline(__this, NULL);
		(&V_1)->___ServerCommonName_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___ServerCommonName_0), (void*)L_3);
		// }
		goto IL_006a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{// begin catch(System.Exception)
		// Debug.Log(exception);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006a;
	}// end catch (depth: 1)

IL_006a:
	{
		// var unityTransportComponent = GetComponent<UnityTransport>();
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_4;
		L_4 = Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28(__this, Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
		V_2 = L_4;
		// if (unityTransportComponent == null)
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.LogError($"You need to select the UnityTransport protocol, in the NetworkManager, in order for the SecretsLoaderHelper component to be useful.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF258902371641A17276D7E53D25B16B6C26A890B, NULL);
		// return;
		return;
	}

IL_0085:
	{
		// unityTransportComponent.SetServerSecrets(serverSecrets.ServerCertificate, serverSecrets.ServerPrivate);
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_7 = V_2;
		ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C L_8 = V_0;
		String_t* L_9 = L_8.___ServerCertificate_1;
		ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C L_10 = V_0;
		String_t* L_11 = L_10.___ServerPrivate_0;
		NullCheck(L_7);
		UnityTransport_SetServerSecrets_m684BAAECD15C338E085AC16DB4CE73B1AA28E027(L_7, L_9, L_11, NULL);
		// unityTransportComponent.SetClientSecrets(clientSecrets.ServerCommonName, clientSecrets.ClientCertificate);
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_12 = V_2;
		ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F L_13 = V_1;
		String_t* L_14 = L_13.___ServerCommonName_0;
		ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F L_15 = V_1;
		String_t* L_16 = L_15.___ClientCertificate_1;
		NullCheck(L_12);
		UnityTransport_SetClientSecrets_mEF4456DE072468B4B0F3133CA9A61B32FFD3DCC5(L_12, L_14, L_16, NULL);
		// }
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCommonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerCommonName;
		String_t* L_0 = __this->___m_ServerCommonName_4;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerCommonName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerCommonName_mF5C925D49116E1C300E3D3D38B667CB49A45B243 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ServerCommonName = value;
		String_t* L_0 = ___value0;
		__this->___m_ServerCommonName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCommonName_4), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCAFilePath_mA26003801EBE4D2769374C068E8AC49BA038A3A4 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClientCAFilePath;
		String_t* L_0 = __this->___m_ClientCAFilePath_5;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ClientCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ClientCAFilePath_mD7C079046DC03F9F57DE16F68EFFA7E8EA1A4544 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClientCAFilePath = value;
		String_t* L_0 = ___value0;
		__this->___m_ClientCAFilePath_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAFilePath_5), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCAOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCAOverride_m2CF26A176FFEFEB596DC782370A34DECD888AF79 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClientCAOverride;
		String_t* L_0 = __this->___m_ClientCAOverride_6;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ClientCAOverride(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ClientCAOverride_m5F3085FC01FA644632DD140EDB26CCE1188ABE78 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClientCAOverride = value;
		String_t* L_0 = ___value0;
		__this->___m_ClientCAOverride_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAOverride_6), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCertificateFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCertificateFilePath_m1D50ADCE4A3ADB643EF5B319D0A4FC2447E2CE98 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerCertificateFilePath;
		String_t* L_0 = __this->___m_ServerCertificateFilePath_7;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerCertificateFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerCertificateFilePath_m850DFBC1A35878001CDE4EE10803DE7EB4412610 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ServerCertificateFilePath = value;
		String_t* L_0 = ___value0;
		__this->___m_ServerCertificateFilePath_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificateFilePath_7), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerPrivateFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerPrivateFilePath_mAF26CA5AA6390A8973F691A068D53940A0316CB7 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerPrivateFilePath;
		String_t* L_0 = __this->___m_ServerPrivateFilePath_8;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerPrivateFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerPrivateFilePath_mF6AE970AABEFE64AFBA938955069FBB3CF6D2255 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ServerPrivate = value;
		String_t* L_0 = ___value0;
		__this->___m_ServerPrivate_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivate_11), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCA_mCD4313D71FDCA16695E86846C97ED8273E3D07E1 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9C52582463E83DEFCA4FAE51BCA879063462DA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ClientCAOverride != "")
		String_t* L_0 = __this->___m_ClientCAOverride_6;
		bool L_1;
		L_1 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return m_ClientCAOverride;
		String_t* L_2 = __this->___m_ClientCAOverride_6;
		return L_2;
	}

IL_0019:
	{
		// return ReadFile(m_ClientCAFilePath, "Client Certificate");
		String_t* L_3 = __this->___m_ClientCAFilePath_5;
		String_t* L_4;
		L_4 = SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A(L_3, _stringLiteralA9C52582463E83DEFCA4FAE51BCA879063462DA0, NULL);
		return L_4;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ClientCA(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ClientCA_m529EDF51ACA147886C7E65892F4007A01D1EEBC6 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ClientCA = value;
		String_t* L_0 = ___value0;
		__this->___m_ClientCA_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCA_9), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCertificate_m17E07950D0BAE0F46481FD63731F00F964024023 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE132B6356450125CD39CFDC2E7AE7DFD49FA3F2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => ReadFile(m_ServerCertificateFilePath, "Server Certificate");
		String_t* L_0 = __this->___m_ServerCertificateFilePath_7;
		String_t* L_1;
		L_1 = SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A(L_0, _stringLiteralE132B6356450125CD39CFDC2E7AE7DFD49FA3F2D, NULL);
		return L_1;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerCertificate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerCertificate_m9F42351E69D51DF4B1415F52390CED03D2F315FA (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ServerCertificate = value;
		String_t* L_0 = ___value0;
		__this->___m_ServerCertificate_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificate_10), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerPrivate_mC64E26A2A2D022FA90E1D97ECBA6EC63988D55ED (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral357BFB1EF804083E0B58DA274A5B38ADF23E439E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => ReadFile(m_ServerPrivateFilePath, "Server Key");
		String_t* L_0 = __this->___m_ServerPrivateFilePath_8;
		String_t* L_1;
		L_1 = SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A(L_0, _stringLiteral357BFB1EF804083E0B58DA274A5B38ADF23E439E, NULL);
		return L_1;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerPrivate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerPrivate_m86ABFEA3A5AFD9BA34DB5D7E45B2DA1DDBED0143 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ServerPrivate = value;
		String_t* L_0 = ___value0;
		__this->___m_ServerPrivate_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivate_11), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::ReadFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A (String_t* ___path0, String_t* ___label1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA280C4AC596D1757D38ADC504F4D2A8588BE09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96C502F2672EE8CA635B0E03F0F848B19683110C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE40160D9DA52E2A9F3C180FBFDED668C63CED0AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC81C1719B246FAF2B02FB9B639685CDC97C4C8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B6_0 = NULL;
	{
		// if (path == null || path == "")
		String_t* L_0 = ___path0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___path0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0016:
	{
		// var reader = new StreamReader(path);
		String_t* L_3 = ___path0;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_4, L_3, NULL);
		// string fileContent = reader.ReadToEnd();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadToEnd() */, L_4);
		V_0 = L_5;
		// Debug.Log((fileContent.Length > 1) ? ("Successfully loaded " + fileContent.Length + " byte(s) from " + label) : ("Could not read " + label + " file"));
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_8 = ___label1;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFC81C1719B246FAF2B02FB9B639685CDC97C4C8D, L_8, _stringLiteral1BA280C4AC596D1757D38ADC504F4D2A8588BE09, NULL);
		G_B6_0 = L_9;
		goto IL_005b;
	}

IL_003d:
	{
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_1 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_13 = ___label1;
		String_t* L_14;
		L_14 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralE40160D9DA52E2A9F3C180FBFDED668C63CED0AD, L_12, _stringLiteral96C502F2672EE8CA635B0E03F0F848B19683110C, L_13, NULL);
		G_B6_0 = L_14;
	}

IL_005b:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(G_B6_0, NULL);
		// return fileContent;
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper__ctor_mF1115A4191D86771D43EED22B1A0B96415BC3BD5 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string m_ServerCommonName = "localhost";
		__this->___m_ServerCommonName_4 = _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCommonName_4), (void*)_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		// private string m_ClientCAFilePath = ""; // "Assets/Secure/myGameClientCA.pem"
		__this->___m_ClientCAFilePath_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAFilePath_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string m_ClientCAOverride = "";
		__this->___m_ClientCAOverride_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAOverride_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string m_ServerCertificateFilePath = ""; // "Assets/Secure/myGameServerCertificate.pem"
		__this->___m_ServerCertificateFilePath_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificateFilePath_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string m_ServerPrivateFilePath = ""; // "Assets/Secure/myGameServerPrivate.pem"
		__this->___m_ServerPrivateFilePath_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivateFilePath_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_pinvoke(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke& marshaled)
{
	marshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_string(unmarshaled.___ServerPrivate_0);
	marshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_string(unmarshaled.___ServerCertificate_1);
}
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_pinvoke_back(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke& marshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled)
{
	unmarshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_string_result(marshaled.___ServerPrivate_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerPrivate_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerPrivate_0));
	unmarshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_string_result(marshaled.___ServerCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCertificate_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_pinvoke_cleanup(ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ServerPrivate_0);
	marshaled.___ServerPrivate_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ServerCertificate_1);
	marshaled.___ServerCertificate_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_com(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com& marshaled)
{
	marshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerPrivate_0);
	marshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerCertificate_1);
}
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_com_back(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com& marshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled)
{
	unmarshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerPrivate_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerPrivate_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerPrivate_0));
	unmarshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCertificate_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_com_cleanup(ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerPrivate_0);
	marshaled.___ServerPrivate_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerCertificate_1);
	marshaled.___ServerCertificate_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_pinvoke(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke& marshaled)
{
	marshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_string(unmarshaled.___ServerCommonName_0);
	marshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_string(unmarshaled.___ClientCertificate_1);
}
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_pinvoke_back(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke& marshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled)
{
	unmarshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_string_result(marshaled.___ServerCommonName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCommonName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerCommonName_0));
	unmarshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_string_result(marshaled.___ClientCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ClientCertificate_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ClientCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_pinvoke_cleanup(ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ServerCommonName_0);
	marshaled.___ServerCommonName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ClientCertificate_1);
	marshaled.___ClientCertificate_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_com(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com& marshaled)
{
	marshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerCommonName_0);
	marshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ClientCertificate_1);
}
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_com_back(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com& marshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled)
{
	unmarshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCommonName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCommonName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCommonName_0));
	unmarshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ClientCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ClientCertificate_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ClientCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_com_cleanup(ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerCommonName_0);
	marshaled.___ServerCommonName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ClientCertificate_1);
	marshaled.___ClientCertificate_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToString(Unity.Networking.Transport.Error.StatusCode,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorUtilities_ErrorToString_m4343A44389AFF8060D72162538C2BCC1652C92E8 (int32_t ___error0, uint64_t ___connectionId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ErrorToString((int)error, connectionId);
		int32_t L_0 = ___error0;
		uint64_t L_1 = ___connectionId1;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = ErrorUtilities_ErrorToString_mBC73277A2AF455EC019CF36B522C084F411DA3C3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToString(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorUtilities_ErrorToString_mBC73277A2AF455EC019CF36B522C084F411DA3C3 (int32_t ___error0, uint64_t ___connectionId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ErrorToFixedString(error, connectionId).ToString();
		int32_t L_0 = ___error0;
		uint64_t L_1 = ___connectionId1;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_2;
		L_2 = ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29((&V_0), NULL);
		return L_3;
	}
}
// Unity.Collections.FixedString128Bytes Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToFixedString(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B (int32_t ___error0, uint64_t ___connectionId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9147515337D6D3658C1F571703F60A99E6815FBA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch ((Networking.Transport.Error.StatusCode)error)
		int32_t L_0 = ___error0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)-5))))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_0039;
			}
			case 4:
			{
				goto IL_002b;
			}
			case 5:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0025:
	{
		// return k_NetworkSuccess;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_2 = ((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkSuccess_0;
		return L_2;
	}

IL_002b:
	{
		// return FixedString.Format(k_NetworkIdMismatch, connectionId);
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_3 = ((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkIdMismatch_1;
		uint64_t L_4 = ___connectionId1;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_5;
		L_5 = FixedString_Format_m68D81C29724F640A5261464C671E96EB92AAA4B0(L_3, ((float)((double)(uint64_t)L_4)), NULL);
		return L_5;
	}

IL_0039:
	{
		// return FixedString.Format(k_NetworkVersionMismatch, connectionId);
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_6 = ((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkVersionMismatch_2;
		uint64_t L_7 = ___connectionId1;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_8;
		L_8 = FixedString_Format_m68D81C29724F640A5261464C671E96EB92AAA4B0(L_6, ((float)((double)(uint64_t)L_7)), NULL);
		return L_8;
	}

IL_0047:
	{
		// return FixedString.Format(k_NetworkStateMismatch, connectionId);
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_9 = ((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkStateMismatch_3;
		uint64_t L_10 = ___connectionId1;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_11;
		L_11 = FixedString_Format_m68D81C29724F640A5261464C671E96EB92AAA4B0(L_9, ((float)((double)(uint64_t)L_10)), NULL);
		return L_11;
	}

IL_0055:
	{
		// return k_NetworkPacketOverflow;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_12 = ((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkPacketOverflow_4;
		return L_12;
	}

IL_005b:
	{
		// return k_NetworkSendQueueFull;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_13 = ((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkSendQueueFull_5;
		return L_13;
	}

IL_0061:
	{
		// return FixedString.Format("Unknown error code {0}.", error);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_14;
		L_14 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteral9147515337D6D3658C1F571703F60A99E6815FBA, NULL);
		int32_t L_15 = ___error0;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_16;
		L_16 = FixedString_Format_m6F108E2AF8178697C27234FF8AA515F32B77F4AF(L_14, L_15, NULL);
		return L_16;
	}
}
// System.Void Unity.Netcode.Transports.UTP.ErrorUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorUtilities__cctor_mA6485BA336C64BAA165501FF0FACD6612C877366 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E695215E8746B92A73A3DC5BC42B039244F6CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21485A24450AF24EBB33C80E94F925D7B879E91F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8611D3B69B0B715A192FABBEFCCAD48DB5074B46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19DFA80D01AE3F3CE45DD710605443066726F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF228735828A21EB536BD7D1B8582E1A731D46466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly FixedString128Bytes k_NetworkSuccess = "Success";
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_0;
		L_0 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, NULL);
		((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkSuccess_0 = L_0;
		// private static readonly FixedString128Bytes k_NetworkIdMismatch = "Invalid connection ID {0}.";
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_1;
		L_1 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteralF228735828A21EB536BD7D1B8582E1A731D46466, NULL);
		((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkIdMismatch_1 = L_1;
		// private static readonly FixedString128Bytes k_NetworkVersionMismatch = "Connection ID is invalid. Likely caused by sending on stale connection {0}.";
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_2;
		L_2 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteral19E695215E8746B92A73A3DC5BC42B039244F6CA, NULL);
		((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkVersionMismatch_2 = L_2;
		// private static readonly FixedString128Bytes k_NetworkStateMismatch = "Connection state is invalid. Likely caused by sending on connection {0} which is stale or still connecting.";
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_3;
		L_3 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteral8611D3B69B0B715A192FABBEFCCAD48DB5074B46, NULL);
		((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkStateMismatch_3 = L_3;
		// private static readonly FixedString128Bytes k_NetworkPacketOverflow = "Packet is too large to be allocated by the transport.";
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_4;
		L_4 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteralA19DFA80D01AE3F3CE45DD710605443066726F4F, NULL);
		((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkPacketOverflow_4 = L_4;
		// private static readonly FixedString128Bytes k_NetworkSendQueueFull = "Unable to queue packet in the transport. Likely caused by send queue size ('Max Send Queue Size') being too small.";
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_5;
		L_5 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteral21485A24450AF24EBB33C80E94F925D7B879E91F, NULL);
		((ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_StaticFields*)il2cpp_codegen_static_fields_for(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var))->___k_NetworkSendQueueFull_5 = L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor Unity.Netcode.Transports.UTP.UnityTransport::get_DriverConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityTransport_get_DriverConstructor_m87F5F253CC96D0739B5C93BE84A65A8851748461 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public INetworkStreamDriverConstructor DriverConstructor => s_DriverConstructor ?? this;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DriverConstructor_11;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = ((RuntimeObject*)(__this));
	}

IL_000a:
	{
		return G_B2_0;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxPacketQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxPacketQueueSize_mC13CE2EBBF0F7C51ABA961E6AB376FB8C8C7DFF5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxPacketQueueSize;
		int32_t L_0 = __this->___m_MaxPacketQueueSize_13;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxPacketQueueSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxPacketQueueSize_m9F9FC2E296E7D5207E4C8C1F6AC178C737925C5B (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxPacketQueueSize = value;
		int32_t L_0 = ___value0;
		__this->___m_MaxPacketQueueSize_13 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxPayloadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxPayloadSize_m0A3E0523AE7DED468B470B268DBBFCBADD44FC77 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxPayloadSize;
		int32_t L_0 = __this->___m_MaxPayloadSize_14;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxPayloadSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxPayloadSize_mB8DAA286A18CBB7BB6C106F2473C23E8F47C4410 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxPayloadSize = value;
		int32_t L_0 = ___value0;
		__this->___m_MaxPayloadSize_14 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxSendQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxSendQueueSize_m94386ECF24A4CAD01D45992C5847073C7BB32426 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxSendQueueSize;
		int32_t L_0 = __this->___m_MaxSendQueueSize_15;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxSendQueueSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxSendQueueSize_m36EA903E2E61AD19A6811E3C0272DF22ABA569DC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxSendQueueSize = value;
		int32_t L_0 = ___value0;
		__this->___m_MaxSendQueueSize_15 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_HeartbeatTimeoutMS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_HeartbeatTimeoutMS_m6308B229D855B51E09EF35C9316AC01040B3A95D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeartbeatTimeoutMS;
		int32_t L_0 = __this->___m_HeartbeatTimeoutMS_16;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_HeartbeatTimeoutMS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_HeartbeatTimeoutMS_m7320D864F3AB6CC0B9A1976E6E2E0F2E41F22D0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeartbeatTimeoutMS = value;
		int32_t L_0 = ___value0;
		__this->___m_HeartbeatTimeoutMS_16 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_ConnectTimeoutMS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_ConnectTimeoutMS_m4C9FDA5A88F2CF8E257E57D847993EA53485077E (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ConnectTimeoutMS;
		int32_t L_0 = __this->___m_ConnectTimeoutMS_17;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_ConnectTimeoutMS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_ConnectTimeoutMS_mA22CAB7EB21E092F550378931530C73B312007F0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ConnectTimeoutMS = value;
		int32_t L_0 = ___value0;
		__this->___m_ConnectTimeoutMS_17 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxConnectAttempts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxConnectAttempts_mE7B28453B6028FC4F9BF60E8C90B8D1B3B2DBC2F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxConnectAttempts;
		int32_t L_0 = __this->___m_MaxConnectAttempts_18;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxConnectAttempts(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxConnectAttempts_mAC9DF28461C83520F1B109C3466C1ACFA52AE3F5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MaxConnectAttempts = value;
		int32_t L_0 = ___value0;
		__this->___m_MaxConnectAttempts_18 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_DisconnectTimeoutMS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_DisconnectTimeoutMS_mC58096ACB706C41555B365BD77A65021AAD3C486 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DisconnectTimeoutMS;
		int32_t L_0 = __this->___m_DisconnectTimeoutMS_19;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_DisconnectTimeoutMS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_DisconnectTimeoutMS_m7408E6D445D8197BE24F9FD57FA5815C2D225ED5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DisconnectTimeoutMS = value;
		int32_t L_0 = ___value0;
		__this->___m_DisconnectTimeoutMS_19 = L_0;
		return;
	}
}
// System.Nullable`1<System.UInt32> Unity.Netcode.Transports.UTP.UnityTransport::get_DebugSimulatorRandomSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal uint? DebugSimulatorRandomSeed { get; set; } = null;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = __this->___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_DebugSimulatorRandomSeed(System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_DebugSimulatorRandomSeed_mAEF0C85E1B5CF6DF22484977AC4F28DD3BE2509E (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___value0, const RuntimeMethod* method) 
{
	{
		// internal uint? DebugSimulatorRandomSeed { get; set; } = null;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = ___value0;
		__this->___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::add_TransportInitialized(System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_add_TransportInitialized_m1D6A6DC9236B0F12093B10F3A044D4CCFE41C808 (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_0 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_1 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_1 = V_0;
		V_1 = L_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_2 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)Castclass((RuntimeObject*)L_4, Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_5 = V_2;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_6 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23), L_5, L_6);
		V_0 = L_7;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_8 = V_0;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_8) == ((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::remove_TransportInitialized(System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_remove_TransportInitialized_mA9097C55FB17D221BA959457DEA2E03C32835FD5 (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_0 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_1 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_1 = V_0;
		V_1 = L_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_2 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)Castclass((RuntimeObject*)L_4, Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_5 = V_2;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_6 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23), L_5, L_6);
		V_0 = L_7;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_8 = V_0;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_8) == ((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::add_TransportDisposed(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_add_TransportDisposed_mFAC9F26B8F671544A590A518D103D17D6198668A (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::remove_TransportDisposed(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_remove_TransportDisposed_mF3F41C8A345D5BD55A8B370119DD047FD3518649 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// Unity.Networking.Transport.NetworkDriver Unity.Netcode.Transports.UTP.UnityTransport::get_NetworkDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal NetworkDriver NetworkDriver => m_Driver;
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_0 = __this->___m_Driver_27;
		return L_0;
	}
}
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::get_ServerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_get_ServerClientId_mCC6EA60FC2E9D11A04BB6F09A72C21BAD7782F65 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// public override ulong ServerClientId => m_ServerClientId;
		uint64_t L_0 = __this->___m_ServerClientId_29;
		return L_0;
	}
}
// Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType Unity.Netcode.Transports.UTP.UnityTransport::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_Protocol_mDC856C9295082D44BAD5585C803BC66716C8CBCD (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// public ProtocolType Protocol => m_ProtocolType;
		int32_t L_0 = __this->___m_ProtocolType_12;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::InitDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* G_B2_0 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* G_B1_0 = NULL;
	{
		// DriverConstructor.CreateDriver(
		//     this,
		//     out m_Driver,
		//     out m_UnreliableFragmentedPipeline,
		//     out m_UnreliableSequencedFragmentedPipeline,
		//     out m_ReliableSequencedPipeline);
		RuntimeObject* L_0;
		L_0 = UnityTransport_get_DriverConstructor_m87F5F253CC96D0739B5C93BE84A65A8851748461(__this, NULL);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_1 = (&__this->___m_Driver_27);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_2 = (&__this->___m_UnreliableFragmentedPipeline_30);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_3 = (&__this->___m_UnreliableSequencedFragmentedPipeline_31);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_4 = (&__this->___m_ReliableSequencedPipeline_32);
		NullCheck(L_0);
		InterfaceActionInvoker5< UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4*, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036*, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* >::Invoke(0 /* System.Void Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor::CreateDriver(Unity.Netcode.Transports.UTP.UnityTransport,Unity.Networking.Transport.NetworkDriver&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&) */, INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA_il2cpp_TypeInfo_var, L_0, __this, L_1, L_2, L_3, L_4);
		// TransportInitialized?.Invoke(GetInstanceID(), NetworkDriver);
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_5 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		int32_t L_7;
		L_7 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_8;
		L_8 = UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D_inline(__this, NULL);
		NullCheck(G_B2_0);
		Action_2_Invoke_mD7C393AE045EF225975A8BF6B27887913C28A829_inline(G_B2_0, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisposeInternals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B10_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B9_0 = NULL;
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_2 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_2, NULL);
	}

IL_0018:
	{
		// m_NetworkSettings.Dispose();
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_3 = (&__this->___m_NetworkSettings_28);
		NetworkSettings_Dispose_m2D73A6555834E52D4631863324D4FA79F1B696FD(L_3, NULL);
		// foreach (var queue in m_SendQueue.Values)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_4 = __this->___m_SendQueue_36;
		NullCheck(L_4);
		ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* L_5;
		L_5 = Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B(L_4, Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB L_6;
		L_6 = ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D(L_5, ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE((&V_0), Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0036_1:
			{
				// foreach (var queue in m_SendQueue.Values)
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_7;
				L_7 = Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_inline((&V_0), Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_RuntimeMethod_var);
				V_1 = L_7;
				// queue.Dispose();
				BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C((&V_1), NULL);
			}

IL_0045_1:
			{
				// foreach (var queue in m_SendQueue.Values)
				bool L_8;
				L_8 = Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B((&V_0), Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// m_SendQueue.Clear();
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_9 = __this->___m_SendQueue_36;
		NullCheck(L_9);
		Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80(L_9, Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_RuntimeMethod_var);
		// TransportDisposed?.Invoke(GetInstanceID());
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_11 = L_10;
		G_B9_0 = L_11;
		if (L_11)
		{
			G_B10_0 = L_11;
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		int32_t L_12;
		L_12 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		NullCheck(G_B10_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B10_0, L_12, NULL);
		// }
		return;
	}
}
// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::SelectSendPipeline(Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 UnityTransport_SelectSendPipeline_m30254C6AD763FA133356411D218D998CC9C03E91 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___delivery0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2B729244E3D5A04BA740FAA8DCEE1B8DDBA97E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA9192249DD16DC6C6336314648F0964730DA50);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___delivery0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_002a;
			}
			case 4:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0031;
	}

IL_001c:
	{
		// return m_UnreliableFragmentedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1 = __this->___m_UnreliableFragmentedPipeline_30;
		return L_1;
	}

IL_0023:
	{
		// return m_UnreliableSequencedFragmentedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_2 = __this->___m_UnreliableSequencedFragmentedPipeline_31;
		return L_2;
	}

IL_002a:
	{
		// return m_ReliableSequencedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_3 = __this->___m_ReliableSequencedPipeline_32;
		return L_3;
	}

IL_0031:
	{
		// Debug.LogError($"Unknown {nameof(NetworkDelivery)} value: {delivery}");
		int32_t L_4 = ___delivery0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0A2B729244E3D5A04BA740FAA8DCEE1B8DDBA97E, _stringLiteral9CA9192249DD16DC6C6336314648F0964730DA50, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		// return NetworkPipeline.Null;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_8;
		L_8 = NetworkPipeline_get_Null_m2A86DFD59FADE78775823D6AB411F3F968BBB00D(NULL);
		return L_8;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ClientBindAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ClientBindAndConnect_m314FF705C9FCF4363F289CDD4674F179E8203BDF (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A1F44E626C6E51CC4568E9D038831D467CB052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16AEF74423B1755030046BE7AB19FAAE3335B198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35C06E70CFFAB6D4B1FA8BA3D4CC946B326C7AD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DED9A821A680A9C3EF0C38B2DEC6622C2BD121);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	{
		// var serverEndpoint = default(NetworkEndpoint);
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63));
		// if (m_ProtocolType == ProtocolType.RelayUnityTransport)
		int32_t L_0 = __this->___m_ProtocolType_12;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0064;
		}
	}
	{
		// if (m_RelayServerData.Equals(default(RelayServerData)))
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_1 = (&__this->___m_RelayServerData_33);
		il2cpp_codegen_initobj((&V_3), sizeof(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09));
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_2 = V_3;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_3 = L_2;
		RuntimeObject* L_4 = Box(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09> L_5(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, L_1);
		bool L_6;
		L_6 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.LogError("You must call SetRelayServerData() at least once before calling StartClient.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral16AEF74423B1755030046BE7AB19FAAE3335B198, NULL);
		// return false;
		return (bool)0;
	}

IL_003e:
	{
		// m_NetworkSettings.WithRelayParameters(ref m_RelayServerData, m_HeartbeatTimeoutMS);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_7 = (&__this->___m_NetworkSettings_28);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_8 = (&__this->___m_RelayServerData_33);
		int32_t L_9 = __this->___m_HeartbeatTimeoutMS_16;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_10;
		L_10 = RelayParameterExtensions_WithRelayParameters_m8025C21B35FAD6E160B05C727131152D372D3F0F(L_7, L_8, L_9, NULL);
		// serverEndpoint = m_RelayServerData.Endpoint;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_11 = (&__this->___m_RelayServerData_33);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_12 = L_11->___Endpoint_0;
		V_0 = L_12;
		goto IL_0070;
	}

IL_0064:
	{
		// serverEndpoint = ConnectionData.ServerEndPoint;
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* L_13 = (&__this->___ConnectionData_20);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_14;
		L_14 = ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C(L_13, NULL);
		V_0 = L_14;
	}

IL_0070:
	{
		// if (serverEndpoint.Family == NetworkFamily.Invalid)
		int32_t L_15;
		L_15 = NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E((&V_0), NULL);
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		// Debug.LogError($"Target server network address ({ConnectionData.Address}) is {nameof(NetworkFamily.Invalid)}!");
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* L_16 = (&__this->___ConnectionData_20);
		String_t* L_17 = L_16->___Address_0;
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral83DED9A821A680A9C3EF0C38B2DEC6622C2BD121, L_17, _stringLiteral16A1F44E626C6E51CC4568E9D038831D467CB052, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
		// return false;
		return (bool)0;
	}

IL_009a:
	{
		// InitDriver();
		UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA(__this, NULL);
		// var bindEndpoint = serverEndpoint.Family == NetworkFamily.Ipv6 ? NetworkEndpoint.AnyIpv6 : NetworkEndpoint.AnyIpv4;
		int32_t L_19;
		L_19 = NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E((&V_0), NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)23))))
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_20;
		L_20 = NetworkEndPoint_get_AnyIpv4_m9E44E70ACE51BA65B73BBF8217835C6669D0927D(NULL);
		G_B10_0 = L_20;
		goto IL_00b7;
	}

IL_00b2:
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_21;
		L_21 = NetworkEndPoint_get_AnyIpv6_mC4CE165BBEF5C10339B7CE69AF44BDBFFE84DA24(NULL);
		G_B10_0 = L_21;
	}

IL_00b7:
	{
		V_1 = G_B10_0;
		// int result = m_Driver.Bind(bindEndpoint);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_22 = (&__this->___m_Driver_27);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_23 = V_1;
		int32_t L_24;
		L_24 = NetworkDriver_Bind_m994686C7645A1A631C8A4B74B5E508ECB062C771(L_22, L_23, NULL);
		// if (result != 0)
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// Debug.LogError("Client failed to bind");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral35C06E70CFFAB6D4B1FA8BA3D4CC946B326C7AD6, NULL);
		// return false;
		return (bool)0;
	}

IL_00d2:
	{
		// var serverConnection = m_Driver.Connect(serverEndpoint);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_25 = (&__this->___m_Driver_27);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_26 = V_0;
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_27;
		L_27 = NetworkDriver_Connect_m135819C4EE07E41AE102BC66C00BE43DEB454FCE(L_25, L_26, NULL);
		V_2 = L_27;
		// m_ServerClientId = ParseClientId(serverConnection);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_28 = V_2;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		uint64_t L_29;
		L_29 = UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE(L_28, NULL);
		__this->___m_ServerClientId_29 = L_29;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ServerBindAndListen(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___endPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A1F44E626C6E51CC4568E9D038831D467CB052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5612A49B705A4FE2E8A26462FE59C5D016593F5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AADA7F1F15F6777EC5A389193BBBC18C07F0F4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE8F3F50F8D6A51A29E3EBD0A31F00C86B93A7CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (endPoint.Family == NetworkFamily.Invalid)
		int32_t L_0;
		L_0 = NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E((&___endPoint0), NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// Debug.LogError($"Network listen address ({ConnectionData.Address}) is {nameof(NetworkFamily.Invalid)}!");
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* L_1 = (&__this->___ConnectionData_20);
		String_t* L_2 = L_1->___Address_0;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6AADA7F1F15F6777EC5A389193BBBC18C07F0F4D, L_2, _stringLiteral16A1F44E626C6E51CC4568E9D038831D467CB052, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_3, NULL);
		// return false;
		return (bool)0;
	}

IL_002a:
	{
		// InitDriver();
		UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA(__this, NULL);
		// int result = m_Driver.Bind(endPoint);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_4 = (&__this->___m_Driver_27);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_5 = ___endPoint0;
		int32_t L_6;
		L_6 = NetworkDriver_Bind_m994686C7645A1A631C8A4B74B5E508ECB062C771(L_4, L_5, NULL);
		// if (result != 0)
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// Debug.LogError("Server failed to bind. This is usually caused by another process being bound to the same port.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralAE8F3F50F8D6A51A29E3EBD0A31F00C86B93A7CF, NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// result = m_Driver.Listen();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_7 = (&__this->___m_Driver_27);
		int32_t L_8;
		L_8 = NetworkDriver_Listen_m9673394E3D802D8A4FD978682B4AFDC19B0C7020(L_7, NULL);
		// if (result != 0)
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		// Debug.LogError("Server failed to listen.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5612A49B705A4FE2E8A26462FE59C5D016593F5C, NULL);
		// return false;
		return (bool)0;
	}

IL_0063:
	{
		// m_State = State.Listening;
		__this->___m_State_26 = 1;
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetProtocol(Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___inProtocol0, const RuntimeMethod* method) 
{
	{
		// m_ProtocolType = inProtocol;
		int32_t L_0 = ___inProtocol0;
		__this->___m_ProtocolType_12 = L_0;
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetRelayServerData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___ipv4Address0, uint16_t ___port1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___allocationIdBytes2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___connectionDataBytes4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hostConnectionDataBytes5, bool ___isSecure6, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	{
		// var hostConnectionData = hostConnectionDataBytes ?? connectionDataBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___hostConnectionDataBytes5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0008;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___connectionDataBytes4;
		G_B2_0 = L_2;
	}

IL_0008:
	{
		V_0 = G_B2_0;
		// m_RelayServerData = new RelayServerData(ipv4Address, port, allocationIdBytes, connectionDataBytes, hostConnectionData, keyBytes, isSecure);
		String_t* L_3 = ___ipv4Address0;
		uint16_t L_4 = ___port1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___allocationIdBytes2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___connectionDataBytes4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___keyBytes3;
		bool L_9 = ___isSecure6;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_10;
		memset((&L_10), 0, sizeof(L_10));
		RelayServerData__ctor_m039E25DA5133BDFB0F8C29E4C721A792C7C46042((&L_10), L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->___m_RelayServerData_33 = L_10;
		// SetProtocol(ProtocolType.RelayUnityTransport);
		UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3_inline(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetRelayServerData(Unity.Networking.Transport.Relay.RelayServerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetRelayServerData_m5ECB5AF89AEFCDF25BD0C7ABF37DB6731DF5C312 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___serverData0, const RuntimeMethod* method) 
{
	{
		// m_RelayServerData = serverData;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_0 = ___serverData0;
		__this->___m_RelayServerData_33 = L_0;
		// SetProtocol(ProtocolType.RelayUnityTransport);
		UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3_inline(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetHostRelayData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetHostRelayData_m89AD8AC44A31BF76DC1B936B31E3E89331735ACC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___ipAddress0, uint16_t ___port1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___allocationId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___connectionData4, bool ___isSecure5, const RuntimeMethod* method) 
{
	{
		// SetRelayServerData(ipAddress, port, allocationId, key, connectionData, null, isSecure);
		String_t* L_0 = ___ipAddress0;
		uint16_t L_1 = ___port1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___allocationId2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___key3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___connectionData4;
		bool L_5 = ___isSecure5;
		UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0(__this, L_0, L_1, L_2, L_3, L_4, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetClientRelayData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetClientRelayData_m69B1257AB81304EC6727B25101ABF25169E92C82 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___ipAddress0, uint16_t ___port1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___allocationId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___connectionData4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hostConnectionData5, bool ___isSecure6, const RuntimeMethod* method) 
{
	{
		// SetRelayServerData(ipAddress, port, allocationId, key, connectionData, hostConnectionData, isSecure);
		String_t* L_0 = ___ipAddress0;
		uint16_t L_1 = ___port1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___allocationId2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___key3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___connectionData4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___hostConnectionData5;
		bool L_6 = ___isSecure6;
		UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetConnectionData(System.String,System.UInt16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetConnectionData_m072363DFC264110D349C7D3F958E8464EB1B74CC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___ipv4Address0, uint16_t ___port1, String_t* ___listenAddress2, const RuntimeMethod* method) 
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* G_B2_0 = NULL;
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* G_B2_1 = NULL;
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* G_B1_1 = NULL;
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* G_B1_2 = NULL;
	{
		// ConnectionData = new ConnectionAddressData
		// {
		//     Address = ipv4Address,
		//     Port = port,
		//     ServerListenAddress = listenAddress ?? ipv4Address
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865));
		String_t* L_0 = ___ipv4Address0;
		(&V_0)->___Address_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Address_0), (void*)L_0);
		uint16_t L_1 = ___port1;
		(&V_0)->___Port_1 = L_1;
		String_t* L_2 = ___listenAddress2;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			G_B2_2 = __this;
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___ipv4Address0;
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0021:
	{
		G_B2_1->___ServerListenAddress_2 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___ServerListenAddress_2), (void*)G_B2_0);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 L_5 = V_0;
		NullCheck(G_B2_2);
		G_B2_2->___ConnectionData_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B2_2->___ConnectionData_20))->___Address_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B2_2->___ConnectionData_20))->___ServerListenAddress_2), (void*)NULL);
		#endif
		// SetProtocol(ProtocolType.UnityTransport);
		UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetConnectionData(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetConnectionData_mC635E5F6D3D308B6080633687EAF778DCB72807A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___endPoint0, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___listenEndPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9746450EDAE716B0E0568BD80DF1E0892E43FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// string serverAddress = endPoint.Address.Split(':')[0];
		String_t* L_0;
		L_0 = NetworkEndPoint_get_Address_m8CB1DFBD3F0943AF98BC707EB0F942B698EE00E5((&___endPoint0), NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)58), 0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// string listenAddress = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_4;
		// if (listenEndPoint != default)
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_5 = ___listenEndPoint1;
		il2cpp_codegen_initobj((&V_2), sizeof(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63));
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = NetworkEndPoint_op_Inequality_m582DA760A6FE0C5119D41F5CE211A397FE07A384(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		// listenAddress = listenEndPoint.Address.Split(':')[0];
		String_t* L_8;
		L_8 = NetworkEndPoint_get_Address_m8CB1DFBD3F0943AF98BC707EB0F942B698EE00E5((&___listenEndPoint1), NULL);
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_8, ((int32_t)58), 0, NULL);
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// if (endPoint.Port != listenEndPoint.Port)
		uint16_t L_12;
		L_12 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___endPoint0), NULL);
		uint16_t L_13;
		L_13 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___listenEndPoint1), NULL);
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogError($"Port mismatch between server and listen endpoints ({endPoint.Port} vs {listenEndPoint.Port}).");
		uint16_t L_14;
		L_14 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___endPoint0), NULL);
		uint16_t L_15 = L_14;
		RuntimeObject* L_16 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_15);
		uint16_t L_17;
		L_17 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___listenEndPoint1), NULL);
		uint16_t L_18 = L_17;
		RuntimeObject* L_19 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7A9746450EDAE716B0E0568BD80DF1E0892E43FB, L_16, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
	}

IL_0072:
	{
		// SetConnectionData(serverAddress, endPoint.Port, listenAddress);
		String_t* L_21 = V_0;
		uint16_t L_22;
		L_22 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___endPoint0), NULL);
		String_t* L_23 = V_1;
		UnityTransport_SetConnectionData_m072363DFC264110D349C7D3F958E8464EB1B74CC(__this, L_21, L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetDebugSimulatorParameters(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetDebugSimulatorParameters_m5CB0CEB4B3BEB77426DE36CC9C1654B3A9E2A9D3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___packetDelay0, int32_t ___packetJitter1, int32_t ___dropRate2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CBC2672C8D6CA64BE38741D0052878AD0261970);
		s_Il2CppMethodInitialized = true;
	}
	SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("SetDebugSimulatorParameters() must be called before StartClient() or StartServer().");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6CBC2672C8D6CA64BE38741D0052878AD0261970, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// DebugSimulator = new SimulatorParameters
		// {
		//     PacketDelayMS = packetDelay,
		//     PacketJitterMS = packetJitter,
		//     PacketDropRate = dropRate
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67));
		int32_t L_2 = ___packetDelay0;
		(&V_0)->___PacketDelayMS_0 = L_2;
		int32_t L_3 = ___packetJitter1;
		(&V_0)->___PacketJitterMS_1 = L_3;
		int32_t L_4 = ___dropRate2;
		(&V_0)->___PacketDropRate_2 = L_4;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 L_5 = V_0;
		__this->___DebugSimulator_21 = L_5;
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartRelayServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartRelayServer_m6AABA070D1F162026424AF5D7DD02FD6C9227097 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4198AF98259608DACAA2B6A8AA1ED829824AB979);
		s_Il2CppMethodInitialized = true;
	}
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_RelayServerData.Equals(default(RelayServerData)))
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_0 = (&__this->___m_RelayServerData_33);
		il2cpp_codegen_initobj((&V_0), sizeof(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09));
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_1 = V_0;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_2 = L_1;
		RuntimeObject* L_3 = Box(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09> L_4(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogError("You must call SetRelayServerData() at least once before calling StartServer.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4198AF98259608DACAA2B6A8AA1ED829824AB979, NULL);
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// m_NetworkSettings.WithRelayParameters(ref m_RelayServerData, m_HeartbeatTimeoutMS);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_6 = (&__this->___m_NetworkSettings_28);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_7 = (&__this->___m_RelayServerData_33);
		int32_t L_8 = __this->___m_HeartbeatTimeoutMS_16;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_9;
		L_9 = RelayParameterExtensions_WithRelayParameters_m8025C21B35FAD6E160B05C727131152D372D3F0F(L_6, L_7, L_8, NULL);
		// return ServerBindAndListen(NetworkEndpoint.AnyIpv4);
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_10;
		L_10 = NetworkEndPoint_get_AnyIpv4_m9E44E70ACE51BA65B73BBF8217835C6669D0927D(NULL);
		bool L_11;
		L_11 = UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F(__this, L_10, NULL);
		return L_11;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SendBatchedMessages(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___sendTarget0, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___queue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Run_TisSendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_m8805B81AA5D1503F36E31919FA2D1A9ACA2D6AB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// new SendBatchedMessagesJob
		// {
		//     Driver = m_Driver.ToConcurrent(),
		//     Target = sendTarget,
		//     Queue = queue,
		//     ReliablePipeline = m_ReliableSequencedPipeline
		// }.Run();
		il2cpp_codegen_initobj((&V_0), sizeof(SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC));
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_2 = (&__this->___m_Driver_27);
		Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 L_3;
		L_3 = NetworkDriver_ToConcurrent_mF20A77F70A8BAF09360A9FF010440F004A4625BA(L_2, NULL);
		(&V_0)->___Driver_0 = L_3;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_4 = ___sendTarget0;
		(&V_0)->___Target_1 = L_4;
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_5 = ___queue1;
		(&V_0)->___Queue_2 = L_5;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_6 = __this->___m_ReliableSequencedPipeline_32;
		(&V_0)->___ReliablePipeline_3 = L_6;
		SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC L_7 = V_0;
		IJobExtensions_Run_TisSendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_m8805B81AA5D1503F36E31919FA2D1A9ACA2D6AB0(L_7, IJobExtensions_Run_TisSendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_m8805B81AA5D1503F36E31919FA2D1A9ACA2D6AB0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::AcceptConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_AcceptConnection_m14AA4E2915B8E5C2E6B8643A3C103EED242A928B (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var connection = m_Driver.Accept();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_1;
		L_1 = NetworkDriver_Accept_m3F866B13DCB636206113E97EA279160AFDA789DB(L_0, NULL);
		V_0 = L_1;
		// if (connection == default)
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_2 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4));
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_3 = V_1;
		bool L_4;
		L_4 = NetworkConnection_op_Equality_m14044022C0D3C1DA3CF97186FCD59D88256F8202(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Connect,
		//     ParseClientId(connection),
		//     default,
		//     m_RealTimeProvider.RealTimeSinceStartup);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		uint64_t L_6;
		L_6 = UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE(L_5, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_7 = V_2;
		RuntimeObject* L_8 = __this->___m_RealTimeProvider_35;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_8);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 1, L_6, L_7, L_9, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ReceiveMessages(System.UInt64,Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ReceiveMessages_mB3FBD7582B7E56D776F3869A236952701DC217D5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipeline1, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___dataReader2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (pipeline == m_ReliableSequencedPipeline)
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_0 = ___pipeline1;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1 = __this->___m_ReliableSequencedPipeline_32;
		bool L_2;
		L_2 = NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// if (m_ReliableReceiveQueues.TryGetValue(clientId, out queue))
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_3 = __this->___m_ReliableReceiveQueues_37;
		uint64_t L_4 = ___clientId0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// queue.PushReader(dataReader);
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_6 = V_0;
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_7 = ___dataReader2;
		NullCheck(L_6);
		BatchedReceiveQueue_PushReader_m0E81E806C9D1FD220CF8A15189B42C36FD37ED19(L_6, L_7, NULL);
		goto IL_0072;
	}

IL_0027:
	{
		// queue = new BatchedReceiveQueue(dataReader);
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_8 = ___dataReader2;
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_9 = (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA*)il2cpp_codegen_object_new(BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9(L_9, L_8, NULL);
		V_0 = L_9;
		// m_ReliableReceiveQueues[clientId] = queue;
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_10 = __this->___m_ReliableReceiveQueues_37;
		uint64_t L_11 = ___clientId0;
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777(L_10, L_11, L_12, Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777_RuntimeMethod_var);
		goto IL_0072;
	}

IL_003d:
	{
		// queue = new BatchedReceiveQueue(dataReader);
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_13 = ___dataReader2;
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_14 = (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA*)il2cpp_codegen_object_new(BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9(L_14, L_13, NULL);
		V_0 = L_14;
		goto IL_0072;
	}

IL_0046:
	{
		// var message = queue.PopMessage();
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_15 = V_0;
		NullCheck(L_15);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_16;
		L_16 = BatchedReceiveQueue_PopMessage_m20B586540098D5D1A1FD0830396FAFB62CD6E9BF(L_15, NULL);
		V_1 = L_16;
		// if (message == default)
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_17 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D(L_17, L_18, ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_007a;
		}
	}
	{
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Data, clientId, message, m_RealTimeProvider.RealTimeSinceStartup);
		uint64_t L_20 = ___clientId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_21 = V_1;
		RuntimeObject* L_22 = __this->___m_RealTimeProvider_35;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_22);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 0, L_20, L_21, L_23, NULL);
	}

IL_0072:
	{
		// while (!queue.IsEmpty)
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_24 = V_0;
		NullCheck(L_24);
		bool L_25;
		L_25 = BatchedReceiveQueue_get_IsEmpty_mE6FE9C4054B69EFAB47C9842F39A16E9F1753721(L_24, NULL);
		if (!L_25)
		{
			goto IL_0046;
		}
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ProcessEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ProcessEvent_mDBA825C0B894F06F2C2B4A64BBDF0AA0E52FBC7A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD98782E6D2FF48AC2FF228F3F2B3178F849DF9);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint64_t V_4 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var eventType = m_Driver.PopEvent(out var networkConnection, out var reader, out var pipeline);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		int16_t L_1;
		L_1 = NetworkDriver_PopEvent_mE0ECB283C8178BAA9C30364C1242BABEC19B5757(L_0, (&V_1), (&V_2), (&V_3), NULL);
		V_0 = L_1;
		// var clientId = ParseClientId(networkConnection);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE(L_2, NULL);
		V_4 = L_3;
		int16_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_00c4;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_00d0;
	}

IL_0033:
	{
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Connect,
		//     clientId,
		//     default,
		//     m_RealTimeProvider.RealTimeSinceStartup);
		uint64_t L_5 = V_4;
		il2cpp_codegen_initobj((&V_5), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6 = V_5;
		RuntimeObject* L_7 = __this->___m_RealTimeProvider_35;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_7);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 1, L_5, L_6, L_8, NULL);
		// m_State = State.Connected;
		__this->___m_State_26 = 2;
		// return true;
		return (bool)1;
	}

IL_005a:
	{
		// if (m_State == State.Connected)
		int32_t L_9 = __this->___m_State_26;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0074;
		}
	}
	{
		// m_State = State.Disconnected;
		__this->___m_State_26 = 0;
		// m_ServerClientId = default;
		__this->___m_ServerClientId_29 = ((int64_t)0);
		goto IL_008e;
	}

IL_0074:
	{
		// else if (m_State == State.Disconnected)
		int32_t L_10 = __this->___m_State_26;
		if (L_10)
		{
			goto IL_008e;
		}
	}
	{
		// Debug.LogError("Failed to connect to server.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7CD98782E6D2FF48AC2FF228F3F2B3178F849DF9, NULL);
		// m_ServerClientId = default;
		__this->___m_ServerClientId_29 = ((int64_t)0);
	}

IL_008e:
	{
		// m_ReliableReceiveQueues.Remove(clientId);
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_11 = __this->___m_ReliableReceiveQueues_37;
		uint64_t L_12 = V_4;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC(L_11, L_12, Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		// ClearSendQueuesForClientId(clientId);
		uint64_t L_14 = V_4;
		UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F(__this, L_14, NULL);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Disconnect,
		//     clientId,
		//     default,
		//     m_RealTimeProvider.RealTimeSinceStartup);
		uint64_t L_15 = V_4;
		il2cpp_codegen_initobj((&V_5), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_16 = V_5;
		RuntimeObject* L_17 = __this->___m_RealTimeProvider_35;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_17);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 2, L_15, L_16, L_18, NULL);
		// return true;
		return (bool)1;
	}

IL_00c4:
	{
		// ReceiveMessages(clientId, pipeline, reader);
		uint64_t L_19 = V_4;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_20 = V_3;
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_21 = V_2;
		UnityTransport_ReceiveMessages_mB3FBD7582B7E56D776F3869A236952701DC217D5(__this, L_19, L_20, L_21, NULL);
		// return true;
		return (bool)1;
	}

IL_00d0:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Update_mBFE9366E0A3A29DADCEC7A1A8C3C3FA6C124935A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4B44B128888B4302BD7BE7931C43B8DB6A7EE9);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 V_1;
	memset((&V_1), 0, sizeof(V_1));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		// foreach (var kvp in m_SendQueue)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_2 = __this->___m_SendQueue_36;
		NullCheck(L_2);
		Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD L_3;
		L_3 = Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A(L_2, Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D((&V_0), Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_001e_1:
			{
				// foreach (var kvp in m_SendQueue)
				KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 L_4;
				L_4 = Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline((&V_0), Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
				V_1 = L_4;
				// SendBatchedMessages(kvp.Key, kvp.Value);
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_5;
				L_5 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_1), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_6;
				L_6 = KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline((&V_1), KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
				UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_5, L_6, NULL);
			}

IL_003a_1:
			{
				// foreach (var kvp in m_SendQueue)
				bool L_7;
				L_7 = Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94((&V_0), Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// m_Driver.ScheduleUpdate().Complete();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_8 = (&__this->___m_Driver_27);
		il2cpp_codegen_initobj((&V_2), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = V_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_10;
		L_10 = NetworkDriver_ScheduleUpdate_mBF306FD6BA96C2D1439D9322429EDFB7FF581A14(L_8, L_9, NULL);
		V_2 = L_10;
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((&V_2), NULL);
		// if (m_ProtocolType == ProtocolType.RelayUnityTransport && m_Driver.GetRelayConnectionStatus() == RelayConnectionStatus.AllocationInvalid)
		int32_t L_11 = __this->___m_ProtocolType_12;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00ae;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_12 = __this->___m_Driver_27;
		int32_t L_13;
		L_13 = NetworkDriverRelayExtensions_GetRelayConnectionStatus_mE2BFB1735FAA4BBD33FB3C3C8770BC30D99B2CA6(L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_00ae;
		}
	}
	{
		// Debug.LogError("Transport failure! Relay allocation needs to be recreated, and NetworkManager restarted. " +
		//     "Use NetworkManager.OnTransportFailure to be notified of such events programmatically.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBD4B44B128888B4302BD7BE7931C43B8DB6A7EE9, NULL);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.TransportFailure, 0, default, m_RealTimeProvider.RealTimeSinceStartup);
		il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_14 = V_3;
		RuntimeObject* L_15 = __this->___m_RealTimeProvider_35;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_15);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 3, ((int64_t)0), L_14, L_16, NULL);
		// return;
		return;
	}

IL_00ae:
	{
		// while (AcceptConnection() && m_Driver.IsCreated)
		bool L_17;
		L_17 = UnityTransport_AcceptConnection_m14AA4E2915B8E5C2E6B8643A3C103EED242A928B(__this, NULL);
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_18 = (&__this->___m_Driver_27);
		bool L_19;
		L_19 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_18, NULL);
		if (L_19)
		{
			goto IL_00ae;
		}
	}

IL_00c3:
	{
		// while (ProcessEvent() && m_Driver.IsCreated)
		bool L_20;
		L_20 = UnityTransport_ProcessEvent_mDBA825C0B894F06F2C2B4A64BBDF0AA0E52FBC7A(__this, NULL);
		if (!L_20)
		{
			goto IL_00d8;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_21 = (&__this->___m_Driver_27);
		bool L_22;
		L_22 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_21, NULL);
		if (L_22)
		{
			goto IL_00c3;
		}
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_OnDestroy_mC173384DDD1FAFD46FC6FDFF094944243D466BE2 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// DisposeInternals();
		UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303(__this, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::ExtractRtt(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___networkConnection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_3 = NULL;
	{
		// if (m_Driver.GetConnectionState(networkConnection) != NetworkConnection.State.Connected)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_1 = ___networkConnection0;
		int32_t L_2;
		L_2 = NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9(L_0, L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0011:
	{
		//             m_Driver.GetPipelineBuffers(m_ReliableSequencedPipeline,
		// #if UTP_TRANSPORT_2_0_ABOVE
		//                 NetworkPipelineStageId.Get<ReliableSequencedPipelineStage>(),
		// #else
		//                 NetworkPipelineStageCollection.GetStageId(typeof(ReliableSequencedPipelineStage)),
		// #endif
		//                 networkConnection,
		//                 out _,
		//                 out _,
		//                 out var sharedBuffer);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_3 = (&__this->___m_Driver_27);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_4 = __this->___m_ReliableSequencedPipeline_32;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA L_7;
		L_7 = NetworkPipelineStageCollection_GetStageId_m46FAF89A65BC1F183DB1894225CE89C7A39CEF20(L_6, NULL);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_8 = ___networkConnection0;
		NetworkDriver_GetPipelineBuffers_mDFAB4A0B3F7E3A330FFC1B21D72C1E2ADF790667(L_3, L_4, L_7, L_8, (&V_1), (&V_2), (&V_0), NULL);
		// var sharedContext = (ReliableUtility.SharedContext*)sharedBuffer.GetUnsafePtr();
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_9 = V_0;
		void* L_10;
		L_10 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_9, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		V_3 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_10;
		// return sharedContext->RttInfo.LastRtt;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_11 = V_3;
		NullCheck(L_11);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518* L_12 = (&L_11->___RttInfo_7);
		int32_t L_13 = L_12->___LastRtt_0;
		return L_13;
	}
}
// System.Single Unity.Netcode.Transports.UTP.UnityTransport::ExtractPacketLoss(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityTransport_ExtractPacketLoss_m1AFCF5C8A265863BDFEF469E46634030D76BC358 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___networkConnection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* G_B7_0 = NULL;
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* G_B6_0 = NULL;
	float G_B8_0 = 0.0f;
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* G_B8_1 = NULL;
	{
		// if (m_Driver.GetConnectionState(networkConnection) != NetworkConnection.State.Connected)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_1 = ___networkConnection0;
		int32_t L_2;
		L_2 = NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9(L_0, L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0015:
	{
		//             m_Driver.GetPipelineBuffers(m_ReliableSequencedPipeline,
		// #if UTP_TRANSPORT_2_0_ABOVE
		//                 NetworkPipelineStageId.Get<ReliableSequencedPipelineStage>(),
		// #else
		//                 NetworkPipelineStageCollection.GetStageId(typeof(ReliableSequencedPipelineStage)),
		// #endif
		//                 networkConnection,
		//                 out _,
		//                 out _,
		//                 out var sharedBuffer);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_3 = (&__this->___m_Driver_27);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_4 = __this->___m_ReliableSequencedPipeline_32;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA L_7;
		L_7 = NetworkPipelineStageCollection_GetStageId_m46FAF89A65BC1F183DB1894225CE89C7A39CEF20(L_6, NULL);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_8 = ___networkConnection0;
		NetworkDriver_GetPipelineBuffers_mDFAB4A0B3F7E3A330FFC1B21D72C1E2ADF790667(L_3, L_4, L_7, L_8, (&V_1), (&V_2), (&V_0), NULL);
		// var sharedContext = (ReliableUtility.SharedContext*)sharedBuffer.GetUnsafePtr();
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_9 = V_0;
		void* L_10;
		L_10 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_9, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		V_3 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_10;
		// var packetReceivedDelta = (float)(sharedContext->stats.PacketsReceived - m_PacketLossCache.PacketsReceived);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_11 = V_3;
		NullCheck(L_11);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_12 = (&L_11->___stats_5);
		int32_t L_13 = L_12->___PacketsReceived_0;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_14 = (&__this->___m_PacketLossCache_25);
		int32_t L_15 = L_14->___PacketsReceived_0;
		V_4 = ((float)((int32_t)il2cpp_codegen_subtract(L_13, L_15)));
		// var packetDroppedDelta = (float)(sharedContext->stats.PacketsDropped - m_PacketLossCache.PacketsDropped);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_16 = V_3;
		NullCheck(L_16);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_17 = (&L_16->___stats_5);
		int32_t L_18 = L_17->___PacketsDropped_2;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_19 = (&__this->___m_PacketLossCache_25);
		int32_t L_20 = L_19->___PacketsDropped_1;
		V_5 = ((float)((int32_t)il2cpp_codegen_subtract(L_18, L_20)));
		// if (packetDroppedDelta == 0 && packetReceivedDelta == 0)
		float L_21 = V_5;
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		float L_22 = V_4;
		if ((!(((float)L_22) == ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// return m_PacketLossCache.PacketLoss;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_23 = (&__this->___m_PacketLossCache_25);
		float L_24 = L_23->___PacketLoss_2;
		return L_24;
	}

IL_0095:
	{
		// m_PacketLossCache.PacketsReceived = sharedContext->stats.PacketsReceived;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_25 = (&__this->___m_PacketLossCache_25);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_26 = V_3;
		NullCheck(L_26);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_27 = (&L_26->___stats_5);
		int32_t L_28 = L_27->___PacketsReceived_0;
		L_25->___PacketsReceived_0 = L_28;
		// m_PacketLossCache.PacketsDropped = sharedContext->stats.PacketsDropped;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_29 = (&__this->___m_PacketLossCache_25);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_30 = V_3;
		NullCheck(L_30);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_31 = (&L_30->___stats_5);
		int32_t L_32 = L_31->___PacketsDropped_2;
		L_29->___PacketsDropped_1 = L_32;
		// m_PacketLossCache.PacketLoss = packetReceivedDelta > 0 ? packetDroppedDelta / packetReceivedDelta : 0;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_33 = (&__this->___m_PacketLossCache_25);
		float L_34 = V_4;
		G_B6_0 = L_33;
		if ((((float)L_34) > ((float)(0.0f))))
		{
			G_B7_0 = L_33;
			goto IL_00d7;
		}
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		goto IL_00dc;
	}

IL_00d7:
	{
		float L_35 = V_5;
		float L_36 = V_4;
		G_B8_0 = ((float)(L_35/L_36));
		G_B8_1 = G_B7_0;
	}

IL_00dc:
	{
		G_B8_1->___PacketLoss_2 = G_B8_0;
		// return m_PacketLossCache.PacketLoss;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_37 = (&__this->___m_PacketLossCache_25);
		float L_38 = L_37->___PacketLoss_2;
		return L_38;
	}
}
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE (NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___utpConnectionId0, const RuntimeMethod* method) 
{
	{
		// return *(ulong*)&utpConnectionId;
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___utpConnectionId0)));
		return L_0;
	}
}
// Unity.Networking.Transport.NetworkConnection Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5 (uint64_t ___netcodeConnectionId0, const RuntimeMethod* method) 
{
	{
		// return *(NetworkConnection*)&netcodeConnectionId;
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_0 = (*(NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4*)((uintptr_t)(&___netcodeConnectionId0)));
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ClearSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_4;
	memset((&V_4), 0, sizeof(V_4));
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// using var keys = new NativeList<SendTarget>(16, Allocator.Temp);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0;
		L_0 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513((&V_0), ((int32_t)16), L_0, NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_RuntimeMethod_var);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{// begin finally (depth: 1)
				NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784((&V_0), NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (var key in m_SendQueue.Keys)
				Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_1 = __this->___m_SendQueue_36;
				NullCheck(L_1);
				KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* L_2;
				L_2 = Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795(L_1, Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_RuntimeMethod_var);
				NullCheck(L_2);
				Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 L_3;
				L_3 = KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A(L_2, KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_RuntimeMethod_var);
				V_1 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0047_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153((&V_1), Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_003c_2;
					}

IL_0022_2:
					{
						// foreach (var key in m_SendQueue.Keys)
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_4;
						L_4 = Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_inline((&V_1), Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_RuntimeMethod_var);
						V_2 = L_4;
						// if (key.ClientId == clientId)
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_5 = V_2;
						uint64_t L_6 = L_5.___ClientId_0;
						uint64_t L_7 = ___clientId0;
						if ((!(((uint64_t)L_6) == ((uint64_t)L_7))))
						{
							goto IL_003c_2;
						}
					}
					{
						// keys.Add(key);
						NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90((&V_0), (&V_2), NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_RuntimeMethod_var);
					}

IL_003c_2:
					{
						// foreach (var key in m_SendQueue.Keys)
						bool L_8;
						L_8 = Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704((&V_1), Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_RuntimeMethod_var);
						if (L_8)
						{
							goto IL_0022_2;
						}
					}
					{
						goto IL_0055_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0055_1:
			{
				// foreach (var target in keys)
				Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 L_9;
				L_9 = NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F((&V_0), NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_RuntimeMethod_var);
				V_3 = L_9;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0097_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513((&V_3), Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_008c_2;
					}

IL_005f_2:
					{
						// foreach (var target in keys)
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_10;
						L_10 = Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178((&V_3), Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_RuntimeMethod_var);
						V_4 = L_10;
						// m_SendQueue[target].Dispose();
						Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_11 = __this->___m_SendQueue_36;
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_12 = V_4;
						NullCheck(L_11);
						BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_13;
						L_13 = Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873(L_11, L_12, Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_RuntimeMethod_var);
						V_5 = L_13;
						BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C((&V_5), NULL);
						// m_SendQueue.Remove(target);
						Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_14 = __this->___m_SendQueue_36;
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_15 = V_4;
						NullCheck(L_14);
						bool L_16;
						L_16 = Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013(L_14, L_15, Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_RuntimeMethod_var);
					}

IL_008c_2:
					{
						// foreach (var target in keys)
						bool L_17;
						L_17 = Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0((&V_3), Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_RuntimeMethod_var);
						if (L_17)
						{
							goto IL_005f_2;
						}
					}
					{
						goto IL_00b3;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::FlushSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var kvp in m_SendQueue)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_0 = __this->___m_SendQueue_36;
		NullCheck(L_0);
		Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD L_1;
		L_1 = Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A(L_0, Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D((&V_0), Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_000e_1:
			{
				// foreach (var kvp in m_SendQueue)
				KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 L_2;
				L_2 = Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline((&V_0), Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
				V_1 = L_2;
				// if (kvp.Key.ClientId == clientId)
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_3;
				L_3 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_1), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				uint64_t L_4 = L_3.___ClientId_0;
				uint64_t L_5 = ___clientId0;
				if ((!(((uint64_t)L_4) == ((uint64_t)L_5))))
				{
					goto IL_0039_1;
				}
			}
			{
				// SendBatchedMessages(kvp.Key, kvp.Value);
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_6;
				L_6 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_1), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_7;
				L_7 = KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline((&V_1), KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
				UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_6, L_7, NULL);
			}

IL_0039_1:
			{
				// foreach (var kvp in m_SendQueue)
				bool L_8;
				L_8 = Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94((&V_0), Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisconnectLocalClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisconnectLocalClient_mEDB43EB97106CCA76C64FF8A5BB35F6DACBF85E3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_State == State.Connected)
		int32_t L_0 = __this->___m_State_26;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// FlushSendQueuesForClientId(m_ServerClientId);
		uint64_t L_1 = __this->___m_ServerClientId_29;
		UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3(__this, L_1, NULL);
		// if (m_Driver.Disconnect(ParseClientId(m_ServerClientId)) == 0)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_2 = (&__this->___m_Driver_27);
		uint64_t L_3 = __this->___m_ServerClientId_29;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_4;
		L_4 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_3, NULL);
		int32_t L_5;
		L_5 = NetworkDriver_Disconnect_m1925090D52AEF6839A78D391892C269C2184D587(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0073;
		}
	}
	{
		// m_State = State.Disconnected;
		__this->___m_State_26 = 0;
		// m_ReliableReceiveQueues.Remove(m_ServerClientId);
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_6 = __this->___m_ReliableReceiveQueues_37;
		uint64_t L_7 = __this->___m_ServerClientId_29;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC(L_6, L_7, Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		// ClearSendQueuesForClientId(m_ServerClientId);
		uint64_t L_9 = __this->___m_ServerClientId_29;
		UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F(__this, L_9, NULL);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Disconnect,
		//     m_ServerClientId,
		//     default,
		//     m_RealTimeProvider.RealTimeSinceStartup);
		uint64_t L_10 = __this->___m_ServerClientId_29;
		il2cpp_codegen_initobj((&V_0), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_11 = V_0;
		RuntimeObject* L_12 = __this->___m_RealTimeProvider_35;
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_12);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 2, L_10, L_11, L_13, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisconnectRemoteClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisconnectRemoteClient_m93C0FA95B3D27700018A57D6D5EB64036ACE26AD (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_State == State.Listening)
		int32_t L_0 = __this->___m_State_26;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// FlushSendQueuesForClientId(clientId);
		uint64_t L_1 = ___clientId0;
		UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3(__this, L_1, NULL);
		// m_ReliableReceiveQueues.Remove(clientId);
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_2 = __this->___m_ReliableReceiveQueues_37;
		uint64_t L_3 = ___clientId0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC(L_2, L_3, Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		// ClearSendQueuesForClientId(clientId);
		uint64_t L_5 = ___clientId0;
		UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F(__this, L_5, NULL);
		// var connection = ParseClientId(clientId);
		uint64_t L_6 = ___clientId0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_7;
		L_7 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_6, NULL);
		V_0 = L_7;
		// if (m_Driver.GetConnectionState(connection) != NetworkConnection.State.Disconnected)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_8 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_9 = V_0;
		int32_t L_10;
		L_10 = NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// m_Driver.Disconnect(connection);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_11 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_12 = V_0;
		int32_t L_13;
		L_13 = NetworkDriver_Disconnect_m1925090D52AEF6839A78D391892C269C2184D587(L_11, L_12, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::GetCurrentRtt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_GetCurrentRtt_mC1B944E456E546D7925BE63E0EDBC0002DADF507 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (NetworkManager != null)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = __this->___NetworkManager_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// var transportId = NetworkManager.ConnectionManager.ClientIdToTransportId(clientId);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = __this->___NetworkManager_34;
		NullCheck(L_2);
		NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* L_3 = L_2->___ConnectionManager_27;
		uint64_t L_4 = ___clientId0;
		NullCheck(L_3);
		uint64_t L_5;
		L_5 = NetworkConnectionManager_ClientIdToTransportId_m1329EE63E4DBF4FC449E7EF214B6B0F00F7318E0_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// var rtt = ExtractRtt(ParseClientId(transportId));
		uint64_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_7;
		L_7 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_6, NULL);
		int32_t L_8;
		L_8 = UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671(__this, L_7, NULL);
		V_1 = L_8;
		// if (rtt > 0)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// return (ulong)rtt;
		int32_t L_10 = V_1;
		return ((int64_t)L_10);
	}

IL_0034:
	{
		// return (ulong)ExtractRtt(ParseClientId(clientId));
		uint64_t L_11 = ___clientId0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_12;
		L_12 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_11, NULL);
		int32_t L_13;
		L_13 = UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671(__this, L_12, NULL);
		return ((int64_t)L_13);
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Initialize(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Initialize_m841F9062D918F68F0DA0DD29F1F56DA221FA0E0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___networkManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* G_B2_0 = NULL;
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* G_B3_1 = NULL;
	{
		// NetworkManager = networkManager;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ___networkManager0;
		__this->___NetworkManager_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NetworkManager_34), (void*)L_0);
		// m_RealTimeProvider = NetworkManager ? NetworkManager.RealTimeProvider : new RealTimeProvider();
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = __this->___NetworkManager_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B* L_3 = (RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B*)il2cpp_codegen_object_new(RealTimeProvider_tC7E3BBEBF8AE83F6368A1ACE596E6A5B13FDBC2B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RealTimeProvider__ctor_m4DC17BC4A594007AF7DE0657C6CE3D73112C9D7A(L_3, NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = V_1;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_001e:
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = __this->___NetworkManager_34;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = NetworkManager_get_RealTimeProvider_mAF8EEDE4C46E0478801F0ABCFF5410F762FAF8BE_inline(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_RealTimeProvider_35 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_RealTimeProvider_35), (void*)G_B3_0);
		// m_NetworkSettings = new NetworkSettings(Allocator.Persistent);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 L_7;
		memset((&L_7), 0, sizeof(L_7));
		NetworkSettings__ctor_mA6470D24077F1464F81F521A490AAB45DF4E4EFB((&L_7), 4, /*hidden argument*/NULL);
		__this->___m_NetworkSettings_28 = L_7;
		// var fragmentationCapacity = m_MaxPayloadSize + BatchedSendQueue.PerMessageOverhead;
		int32_t L_8 = __this->___m_MaxPayloadSize_14;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 4));
		// m_NetworkSettings.WithFragmentationStageParameters(payloadCapacity: fragmentationCapacity);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_9 = (&__this->___m_NetworkSettings_28);
		int32_t L_10 = V_0;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_11;
		L_11 = FragmentationStageParameterExtensions_WithFragmentationStageParameters_m36789359AAC36AE9359B0D4851E5B3E66A570720(L_9, L_10, NULL);
		// m_NetworkSettings.WithReliableStageParameters(windowSize: 64);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_12 = (&__this->___m_NetworkSettings_28);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_13;
		L_13 = ReliableStageParameterExtensions_WithReliableStageParameters_mB9D05293EB3AAA38BA6CEBA63A5F9BE991BDFD5F(L_12, ((int32_t)64), NULL);
		// m_NetworkSettings.WithBaselibNetworkInterfaceParameters(
		//     receiveQueueCapacity: m_MaxPacketQueueSize,
		//     sendQueueCapacity: m_MaxPacketQueueSize);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_14 = (&__this->___m_NetworkSettings_28);
		int32_t L_15 = __this->___m_MaxPacketQueueSize_13;
		int32_t L_16 = __this->___m_MaxPacketQueueSize_13;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_17;
		L_17 = BaselibNetworkParameterExtensions_WithBaselibNetworkInterfaceParameters_m7D3FB8742A79FAF55A847330FE57ADB0C10B75FD(L_14, L_15, L_16, ((int32_t)2000), NULL);
		// }
		return;
	}
}
// Unity.Netcode.NetworkEvent Unity.Netcode.Transports.UTP.UnityTransport::PollEvent(System.UInt64&,System.ArraySegment`1<System.Byte>&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_PollEvent_mA28A5028DFCBFC49D690F1E3E34FC0D8A51FFC0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t* ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___payload1, float* ___receiveTime2, const RuntimeMethod* method) 
{
	{
		// clientId = default;
		uint64_t* L_0 = ___clientId0;
		*((int64_t*)L_0) = (int64_t)((int64_t)0);
		// payload = default;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_1 = ___payload1;
		il2cpp_codegen_initobj(L_1, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		// receiveTime = default;
		float* L_2 = ___receiveTime2;
		*((float*)L_2) = (float)(0.0f);
		// return NetcodeNetworkEvent.Nothing;
		return (int32_t)(4);
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Send_m4475D81752A3D653C94F4C545C349F607EC23867 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload1, int32_t ___networkDelivery2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1812ED2F2239F62391593B71DE1096D7784E218F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BD97639EEDDEB8C0AD70322C13DC2E403EDE616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5476B4D26F0D93405A47E7865C0C4B7FC148874);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_5;
	memset((&V_5), 0, sizeof(V_5));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B7_0 = 0;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* G_B12_0 = NULL;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* G_B11_0 = NULL;
	uint64_t G_B13_0 = 0;
	{
		// var pipeline = SelectSendPipeline(networkDelivery);
		int32_t L_0 = ___networkDelivery2;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1;
		L_1 = UnityTransport_SelectSendPipeline_m30254C6AD763FA133356411D218D998CC9C03E91(__this, L_0, NULL);
		V_0 = L_1;
		// if (pipeline != m_ReliableSequencedPipeline && payload.Count > m_MaxPayloadSize)
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_2 = V_0;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_3 = __this->___m_ReliableSequencedPipeline_32;
		bool L_4;
		L_4 = NetworkPipeline_op_Inequality_m3B0595A06BF15AF50491B0B482B36B12C2683178(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_6 = __this->___m_MaxPayloadSize_14;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_004c;
		}
	}
	{
		// Debug.LogError($"Unreliable payload of size {payload.Count} larger than configured 'Max Payload Size' ({m_MaxPayloadSize}).");
		int32_t L_7;
		L_7 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = __this->___m_MaxPayloadSize_14;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7BD97639EEDDEB8C0AD70322C13DC2E403EDE616, L_9, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
		// return;
		return;
	}

IL_004c:
	{
		// var sendTarget = new SendTarget(clientId, pipeline);
		uint64_t L_14 = ___clientId0;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_15 = V_0;
		SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41((&V_1), L_14, L_15, NULL);
		// if (!m_SendQueue.TryGetValue(sendTarget, out var queue))
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_16 = __this->___m_SendQueue_36;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007(L_16, L_17, (&V_2), Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_00a3;
		}
	}
	{
		// var maxCapacity = m_MaxSendQueueSize > 0 ? m_MaxSendQueueSize : m_DisconnectTimeoutMS * k_MaxReliableThroughput;
		int32_t L_19 = __this->___m_MaxSendQueueSize_15;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_20 = __this->___m_DisconnectTimeoutMS_19;
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)5376)));
		goto IL_0082;
	}

IL_007c:
	{
		int32_t L_21 = __this->___m_MaxSendQueueSize_15;
		G_B7_0 = L_21;
	}

IL_0082:
	{
		V_3 = G_B7_0;
		// queue = new BatchedSendQueue(Math.Max(maxCapacity, m_MaxPayloadSize));
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___m_MaxPayloadSize_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_22, L_23, NULL);
		BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E((&V_2), L_24, NULL);
		// m_SendQueue.Add(sendTarget, queue);
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_25 = __this->___m_SendQueue_36;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_26 = V_1;
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_27 = V_2;
		NullCheck(L_25);
		Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4(L_25, L_26, L_27, Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_RuntimeMethod_var);
	}

IL_00a3:
	{
		// if (!queue.PushMessage(payload))
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_28 = ___payload1;
		bool L_29;
		L_29 = BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA((&V_2), L_28, NULL);
		if (L_29)
		{
			goto IL_0170;
		}
	}
	{
		// if (pipeline == m_ReliableSequencedPipeline)
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_30 = V_0;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_31 = __this->___m_ReliableSequencedPipeline_32;
		bool L_32;
		L_32 = NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_0141;
		}
	}
	{
		// var ngoClientId = NetworkManager?.ConnectionManager.TransportIdToClientId(clientId) ?? clientId;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_33 = __this->___NetworkManager_34;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_34 = L_33;
		G_B11_0 = L_34;
		if (L_34)
		{
			G_B12_0 = L_34;
			goto IL_00ce;
		}
	}
	{
		uint64_t L_35 = ___clientId0;
		G_B13_0 = L_35;
		goto IL_00d9;
	}

IL_00ce:
	{
		NullCheck(G_B12_0);
		NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* L_36 = G_B12_0->___ConnectionManager_27;
		uint64_t L_37 = ___clientId0;
		NullCheck(L_36);
		uint64_t L_38;
		L_38 = NetworkConnectionManager_TransportIdToClientId_m69297481202CC42996037059EC44262CFE5FB6EC_inline(L_36, L_37, NULL);
		G_B13_0 = L_38;
	}

IL_00d9:
	{
		V_4 = G_B13_0;
		// Debug.LogError($"Couldn't add payload of size {payload.Count} to reliable send queue. " +
		//     $"Closing connection {ngoClientId} as reliability guarantees can't be maintained.");
		int32_t L_39;
		L_39 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42;
		L_42 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1812ED2F2239F62391593B71DE1096D7784E218F, L_41, NULL);
		uint64_t L_43 = V_4;
		uint64_t L_44 = L_43;
		RuntimeObject* L_45 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_44);
		String_t* L_46;
		L_46 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD5476B4D26F0D93405A47E7865C0C4B7FC148874, L_45, NULL);
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_42, L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_47, NULL);
		// if (clientId == m_ServerClientId)
		uint64_t L_48 = ___clientId0;
		uint64_t L_49 = __this->___m_ServerClientId_29;
		if ((!(((uint64_t)L_48) == ((uint64_t)L_49))))
		{
			goto IL_011c;
		}
	}
	{
		// DisconnectLocalClient();
		VirtualActionInvoker0::Invoke(11 /* System.Void Unity.Netcode.NetworkTransport::DisconnectLocalClient() */, __this);
		return;
	}

IL_011c:
	{
		// DisconnectRemoteClient(clientId);
		uint64_t L_50 = ___clientId0;
		VirtualActionInvoker1< uint64_t >::Invoke(10 /* System.Void Unity.Netcode.NetworkTransport::DisconnectRemoteClient(System.UInt64) */, __this, L_50);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Disconnect,
		//     clientId,
		//     default(ArraySegment<byte>),
		//     m_RealTimeProvider.RealTimeSinceStartup);
		uint64_t L_51 = ___clientId0;
		il2cpp_codegen_initobj((&V_5), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_52 = V_5;
		RuntimeObject* L_53 = __this->___m_RealTimeProvider_35;
		NullCheck(L_53);
		float L_54;
		L_54 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_53);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 2, L_51, L_52, L_54, NULL);
		return;
	}

IL_0141:
	{
		// m_Driver.ScheduleFlushSend(default).Complete();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_55 = (&__this->___m_Driver_27);
		il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_56 = V_6;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_57;
		L_57 = NetworkDriver_ScheduleFlushSend_mD70E667D237F0E074B7B41BB34458119043A0958(L_55, L_56, NULL);
		V_6 = L_57;
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((&V_6), NULL);
		// SendBatchedMessages(sendTarget, queue);
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_58 = V_1;
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_59 = V_2;
		UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_58, L_59, NULL);
		// queue.PushMessage(payload);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_60 = ___payload1;
		bool L_61;
		L_61 = BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA((&V_2), L_60, NULL);
	}

IL_0170:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartClient_m4FA31F88A64822EB6A76CB2CBD014C3DCA7521C0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	bool G_B5_0 = false;
	bool G_B3_0 = false;
	bool G_B4_0 = false;
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// var succeeded = ClientBindAndConnect();
		bool L_2;
		L_2 = UnityTransport_ClientBindAndConnect_m314FF705C9FCF4363F289CDD4674F179E8203BDF(__this, NULL);
		// if (!succeeded && m_Driver.IsCreated)
		bool L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0030;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_4 = (&__this->___m_Driver_27);
		bool L_5;
		L_5 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_4, NULL);
		G_B4_0 = G_B3_0;
		if (!L_5)
		{
			G_B5_0 = G_B3_0;
			goto IL_0030;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_6 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_6, NULL);
		G_B5_0 = G_B4_0;
	}

IL_0030:
	{
		// return succeeded;
		return G_B5_0;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartServer_m5612BA7D209464F20F4C78BD33DA2E52CE1E75A3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool G_B8_0 = false;
	bool G_B6_0 = false;
	bool G_B7_0 = false;
	bool G_B12_0 = false;
	bool G_B10_0 = false;
	bool G_B11_0 = false;
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// switch (m_ProtocolType)
		int32_t L_2 = __this->___m_ProtocolType_12;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_006e;
	}

IL_001f:
	{
		// succeeded = ServerBindAndListen(ConnectionData.ListenEndPoint);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* L_5 = (&__this->___ConnectionData_20);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_6;
		L_6 = ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0(L_5, NULL);
		bool L_7;
		L_7 = UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F(__this, L_6, NULL);
		// if (!succeeded && m_Driver.IsCreated)
		bool L_8 = L_7;
		G_B6_0 = L_8;
		if (L_8)
		{
			G_B8_0 = L_8;
			goto IL_004b;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_9 = (&__this->___m_Driver_27);
		bool L_10;
		L_10 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_9, NULL);
		G_B7_0 = G_B6_0;
		if (!L_10)
		{
			G_B8_0 = G_B6_0;
			goto IL_004b;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_11 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_11, NULL);
		G_B8_0 = G_B7_0;
	}

IL_004b:
	{
		// return succeeded;
		return G_B8_0;
	}

IL_004c:
	{
		// succeeded = StartRelayServer();
		bool L_12;
		L_12 = UnityTransport_StartRelayServer_m6AABA070D1F162026424AF5D7DD02FD6C9227097(__this, NULL);
		// if (!succeeded && m_Driver.IsCreated)
		bool L_13 = L_12;
		G_B10_0 = L_13;
		if (L_13)
		{
			G_B12_0 = L_13;
			goto IL_006d;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_14 = (&__this->___m_Driver_27);
		bool L_15;
		L_15 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_14, NULL);
		G_B11_0 = G_B10_0;
		if (!L_15)
		{
			G_B12_0 = G_B10_0;
			goto IL_006d;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_16 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_16, NULL);
		G_B12_0 = G_B11_0;
	}

IL_006d:
	{
		// return succeeded;
		return G_B12_0;
	}

IL_006e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Shutdown_m1621E8704F3F914888483AB0EABDACF431E158FF (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 V_1;
	memset((&V_1), 0, sizeof(V_1));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		// foreach (var kvp in m_SendQueue)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_2 = __this->___m_SendQueue_36;
		NullCheck(L_2);
		Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD L_3;
		L_3 = Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A(L_2, Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D((&V_0), Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_001b_1:
			{
				// foreach (var kvp in m_SendQueue)
				KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 L_4;
				L_4 = Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline((&V_0), Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
				V_1 = L_4;
				// SendBatchedMessages(kvp.Key, kvp.Value);
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_5;
				L_5 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_1), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_6;
				L_6 = KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline((&V_1), KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
				UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_5, L_6, NULL);
			}

IL_0037_1:
			{
				// foreach (var kvp in m_SendQueue)
				bool L_7;
				L_7 = Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94((&V_0), Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// m_Driver.ScheduleUpdate().Complete();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_8 = (&__this->___m_Driver_27);
		il2cpp_codegen_initobj((&V_2), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = V_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_10;
		L_10 = NetworkDriver_ScheduleUpdate_mBF306FD6BA96C2D1439D9322429EDFB7FF581A14(L_8, L_9, NULL);
		V_2 = L_10;
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((&V_2), NULL);
	}

IL_006c:
	{
		// DisposeInternals();
		UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303(__this, NULL);
		// m_ReliableReceiveQueues.Clear();
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_11 = __this->___m_ReliableReceiveQueues_37;
		NullCheck(L_11);
		Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B(L_11, Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B_RuntimeMethod_var);
		// m_ServerClientId = 0;
		__this->___m_ServerClientId_29 = ((int64_t)0);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ConfigureSimulatorForUtp1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ConfigureSimulatorForUtp1_mFF544D83794051D6C5FC63C364211D6A14BE01E3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	int32_t G_B2_3 = 0;
	int32_t G_B2_4 = 0;
	int32_t G_B2_5 = 0;
	int32_t G_B2_6 = 0;
	int32_t G_B2_7 = 0;
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* G_B2_8 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	int32_t G_B1_3 = 0;
	int32_t G_B1_4 = 0;
	int32_t G_B1_5 = 0;
	int32_t G_B1_6 = 0;
	int32_t G_B1_7 = 0;
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* G_B1_8 = NULL;
	uint32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	int32_t G_B3_4 = 0;
	int32_t G_B3_5 = 0;
	int32_t G_B3_6 = 0;
	int32_t G_B3_7 = 0;
	int32_t G_B3_8 = 0;
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* G_B3_9 = NULL;
	{
		// m_NetworkSettings.WithSimulatorStageParameters(
		//     maxPacketCount: 300, // TODO Is there any way to compute a better value?
		//     maxPacketSize: NetworkParameterConstants.MTU,
		//     packetDelayMs: DebugSimulator.PacketDelayMS,
		//     packetJitterMs: DebugSimulator.PacketJitterMS,
		//     packetDropPercentage: DebugSimulator.PacketDropRate,
		//     randomSeed: DebugSimulatorRandomSeed ?? (uint)System.Diagnostics.Stopwatch.GetTimestamp()
		// );
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = (&__this->___m_NetworkSettings_28);
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_1 = (&__this->___DebugSimulator_21);
		int32_t L_2 = L_1->___PacketDelayMS_0;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_3 = (&__this->___DebugSimulator_21);
		int32_t L_4 = L_3->___PacketJitterMS_1;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_5 = (&__this->___DebugSimulator_21);
		int32_t L_6 = L_5->___PacketDropRate_2;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_7;
		L_7 = UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE_inline(__this, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline((&V_0), Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		G_B1_0 = 0;
		G_B1_1 = 0;
		G_B1_2 = L_6;
		G_B1_3 = 0;
		G_B1_4 = L_4;
		G_B1_5 = L_2;
		G_B1_6 = ((int32_t)1400);
		G_B1_7 = ((int32_t)300);
		G_B1_8 = L_0;
		if (L_8)
		{
			G_B2_0 = 0;
			G_B2_1 = 0;
			G_B2_2 = L_6;
			G_B2_3 = 0;
			G_B2_4 = L_4;
			G_B2_5 = L_2;
			G_B2_6 = ((int32_t)1400);
			G_B2_7 = ((int32_t)300);
			G_B2_8 = L_0;
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		G_B3_0 = ((uint32_t)(((int32_t)(uint32_t)L_9)));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		G_B3_6 = G_B1_5;
		G_B3_7 = G_B1_6;
		G_B3_8 = G_B1_7;
		G_B3_9 = G_B1_8;
		goto IL_0053;
	}

IL_004c:
	{
		uint32_t L_10;
		L_10 = Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline((&V_0), Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
		G_B3_6 = G_B2_5;
		G_B3_7 = G_B2_6;
		G_B3_8 = G_B2_7;
		G_B3_9 = G_B2_8;
	}

IL_0053:
	{
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_11;
		L_11 = SimulatorStageParameterExtensions_WithSimulatorStageParameters_mC426EFA09868B412137F4DA2770D658A594E8B1B(G_B3_9, G_B3_8, G_B3_7, G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetServerSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetServerSecrets_m684BAAECD15C338E085AC16DB4CE73B1AA28E027 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___serverCertificate0, String_t* ___serverPrivateKey1, const RuntimeMethod* method) 
{
	{
		// m_ServerPrivateKey = serverPrivateKey;
		String_t* L_0 = ___serverPrivateKey1;
		__this->___m_ServerPrivateKey_38 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivateKey_38), (void*)L_0);
		// m_ServerCertificate = serverCertificate;
		String_t* L_1 = ___serverCertificate0;
		__this->___m_ServerCertificate_39 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificate_39), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetClientSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetClientSecrets_mEF4456DE072468B4B0F3133CA9A61B32FFD3DCC5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___serverCommonName0, String_t* ___caCertificate1, const RuntimeMethod* method) 
{
	{
		// m_ServerCommonName = serverCommonName;
		String_t* L_0 = ___serverCommonName0;
		__this->___m_ServerCommonName_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCommonName_40), (void*)L_0);
		// m_ClientCaCertificate = caCertificate;
		String_t* L_1 = ___caCertificate1;
		__this->___m_ClientCaCertificate_41 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCaCertificate_41), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::CreateDriver(Unity.Netcode.Transports.UTP.UnityTransport,Unity.Networking.Transport.NetworkDriver&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_CreateDriver_mDD45116E8912CE7A9069395A8F86894E77B9CD5C (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* ___transport0, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* ___driver1, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___unreliableFragmentedPipeline2, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___unreliableSequencedFragmentedPipeline3, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___reliableSequencedPipeline4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		//             m_NetworkSettings.WithNetworkConfigParameters(
		//                 maxConnectAttempts: transport.m_MaxConnectAttempts,
		//                 connectTimeoutMS: transport.m_ConnectTimeoutMS,
		//                 disconnectTimeoutMS: transport.m_DisconnectTimeoutMS,
		// #if UTP_TRANSPORT_2_0_ABOVE
		//                 sendQueueCapacity: m_MaxPacketQueueSize,
		//                 receiveQueueCapacity: m_MaxPacketQueueSize,
		// #endif
		//                 heartbeatTimeoutMS: transport.m_HeartbeatTimeoutMS);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = (&__this->___m_NetworkSettings_28);
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_1 = ___transport0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___m_MaxConnectAttempts_18;
		V_0 = L_2;
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_3 = ___transport0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___m_ConnectTimeoutMS_17;
		int32_t L_5 = V_0;
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_6 = ___transport0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___m_DisconnectTimeoutMS_19;
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_8 = ___transport0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___m_HeartbeatTimeoutMS_16;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_10;
		L_10 = CommonNetworkParametersExtensions_WithNetworkConfigParameters_m6EF7D65466B63D63B632D3D5BDF49CB47CD938F7(L_0, L_4, L_5, L_7, L_9, 0, 0, NULL);
		// driver = NetworkDriver.Create(m_NetworkSettings);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_11 = ___driver1;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 L_12 = __this->___m_NetworkSettings_28;
		il2cpp_codegen_runtime_class_init_inline(NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_il2cpp_TypeInfo_var);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_13;
		L_13 = NetworkDriver_Create_m28AD7ED83DAC754E2CF8605F6DC7465203B42DBE(L_12, NULL);
		*(NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036*)L_11 = L_13;
		// SetupPipelinesForUtp1(driver,
		//     out unreliableFragmentedPipeline,
		//     out unreliableSequencedFragmentedPipeline,
		//     out reliableSequencedPipeline);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_14 = ___driver1;
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_15 = (*(NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036*)L_14);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_16 = ___unreliableFragmentedPipeline2;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_17 = ___unreliableSequencedFragmentedPipeline3;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_18 = ___reliableSequencedPipeline4;
		UnityTransport_SetupPipelinesForUtp1_mBB88F9D60C339BA6D7462E30462B02BDC10A7B3D(__this, L_15, L_16, L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetupPipelinesForUtp1(Unity.Networking.Transport.NetworkDriver,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetupPipelinesForUtp1_mBB88F9D60C339BA6D7462E30462B02BDC10A7B3D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___driver0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___unreliableFragmentedPipeline1, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___unreliableSequencedFragmentedPipeline2, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___reliableSequencedPipeline3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnreliableSequencedPipelineStage_t625184725960F7CD0FC7FF99316E91B304E581AC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//                 unreliableFragmentedPipeline = driver.CreatePipeline(
		//                     typeof(FragmentationPipelineStage)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_0 = ___unreliableFragmentedPipeline1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5;
		L_5 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___driver0), L_2, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_0 = L_5;
		//                 unreliableSequencedFragmentedPipeline = driver.CreatePipeline(
		//                     typeof(FragmentationPipelineStage),
		//                     typeof(UnreliableSequencedPipelineStage)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_6 = ___unreliableSequencedFragmentedPipeline2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_10);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (UnreliableSequencedPipelineStage_t625184725960F7CD0FC7FF99316E91B304E581AC_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_13);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_14;
		L_14 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___driver0), L_11, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_6 = L_14;
		//                 reliableSequencedPipeline = driver.CreatePipeline(
		//                     typeof(ReliableSequencedPipelineStage)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_15 = ___reliableSequencedPipeline3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_19);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_20;
		L_20 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___driver0), L_17, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_15 = L_20;
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport__ctor_mEB73F6512BBAAEB46A28608909209C1479EEFA7E (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private int m_MaxPacketQueueSize = InitialMaxPacketQueueSize;
		__this->___m_MaxPacketQueueSize_13 = ((int32_t)128);
		// private int m_MaxPayloadSize = InitialMaxPayloadSize;
		__this->___m_MaxPayloadSize_14 = ((int32_t)6144);
		// private int m_HeartbeatTimeoutMS = NetworkParameterConstants.HeartbeatTimeoutMS;
		__this->___m_HeartbeatTimeoutMS_16 = ((int32_t)500);
		// private int m_ConnectTimeoutMS = NetworkParameterConstants.ConnectTimeoutMS;
		__this->___m_ConnectTimeoutMS_17 = ((int32_t)1000);
		// private int m_MaxConnectAttempts = NetworkParameterConstants.MaxConnectAttempts;
		__this->___m_MaxConnectAttempts_18 = ((int32_t)60);
		// private int m_DisconnectTimeoutMS = NetworkParameterConstants.DisconnectTimeoutMS;
		__this->___m_DisconnectTimeoutMS_19 = ((int32_t)30000);
		// public ConnectionAddressData ConnectionData = s_DefaultConnectionAddressData;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10;
		__this->___ConnectionData_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ConnectionData_20))->___Address_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ConnectionData_20))->___ServerListenAddress_2), (void*)NULL);
		#endif
		// public SimulatorParameters DebugSimulator = new SimulatorParameters
		// {
		//     PacketDelayMS = 0,
		//     PacketJitterMS = 0,
		//     PacketDropRate = 0
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67));
		(&V_0)->___PacketDelayMS_0 = 0;
		(&V_0)->___PacketJitterMS_1 = 0;
		(&V_0)->___PacketDropRate_2 = 0;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 L_1 = V_0;
		__this->___DebugSimulator_21 = L_1;
		// private readonly Dictionary<SendTarget, BatchedSendQueue> m_SendQueue = new Dictionary<SendTarget, BatchedSendQueue>();
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_2 = (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*)il2cpp_codegen_object_new(Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8(L_2, Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_RuntimeMethod_var);
		__this->___m_SendQueue_36 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SendQueue_36), (void*)L_2);
		// private readonly Dictionary<ulong, BatchedReceiveQueue> m_ReliableReceiveQueues = new Dictionary<ulong, BatchedReceiveQueue>();
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_3 = (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A*)il2cpp_codegen_object_new(Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81(L_3, Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81_RuntimeMethod_var);
		__this->___m_ReliableReceiveQueues_37 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReliableReceiveQueues_37), (void*)L_3);
		NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF(__this, NULL);
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport__cctor_m255D25B358930E8CFF3C281AE9F70A3E5AD545A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private static ConnectionAddressData s_DefaultConnectionAddressData = new ConnectionAddressData { Address = "127.0.0.1", Port = 7777, ServerListenAddress = string.Empty };
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865));
		(&V_0)->___Address_0 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Address_0), (void*)_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		(&V_0)->___Port_1 = (uint16_t)((int32_t)7777);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		(&V_0)->___ServerListenAddress_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ServerListenAddress_2), (void*)L_0);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 L_1 = V_0;
		((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10))->___Address_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10))->___ServerListenAddress_2), (void*)NULL);
		#endif
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled)
{
	marshaled.___Address_0 = il2cpp_codegen_marshal_string(unmarshaled.___Address_0);
	marshaled.___Port_1 = unmarshaled.___Port_1;
	marshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_string(unmarshaled.___ServerListenAddress_2);
}
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke_back(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled)
{
	unmarshaled.___Address_0 = il2cpp_codegen_marshal_string_result(marshaled.___Address_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Address_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Address_0));
	uint16_t unmarshaledPort_temp_1 = 0;
	unmarshaledPort_temp_1 = marshaled.___Port_1;
	unmarshaled.___Port_1 = unmarshaledPort_temp_1;
	unmarshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_string_result(marshaled.___ServerListenAddress_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerListenAddress_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerListenAddress_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke_cleanup(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Address_0);
	marshaled.___Address_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ServerListenAddress_2);
	marshaled.___ServerListenAddress_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled)
{
	marshaled.___Address_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Address_0);
	marshaled.___Port_1 = unmarshaled.___Port_1;
	marshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerListenAddress_2);
}
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com_back(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled)
{
	unmarshaled.___Address_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Address_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Address_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Address_0));
	uint16_t unmarshaledPort_temp_1 = 0;
	unmarshaledPort_temp_1 = marshaled.___Port_1;
	unmarshaled.___Port_1 = unmarshaledPort_temp_1;
	unmarshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerListenAddress_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerListenAddress_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerListenAddress_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com_cleanup(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Address_0);
	marshaled.___Address_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerListenAddress_2);
	marshaled.___ServerListenAddress_2 = NULL;
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ParseNetworkEndpoint(System.String,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_ParseNetworkEndpoint_m93C005D46E35A425F3715D7B0355A3CB49F0A828 (String_t* ___ip0, uint16_t ___port1, bool ___silent2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// NetworkEndpoint endpoint = default;
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63));
		// if (!NetworkEndpoint.TryParse(ip, port, out endpoint, NetworkFamily.Ipv4) &&
		//     !NetworkEndpoint.TryParse(ip, port, out endpoint, NetworkFamily.Ipv6))
		String_t* L_0 = ___ip0;
		uint16_t L_1 = ___port1;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E(L_0, L_1, (&V_0), 2, NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_3 = ___ip0;
		uint16_t L_4 = ___port1;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E(L_3, L_4, (&V_0), ((int32_t)23), NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// if (!silent)
		bool L_6 = ___silent2;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// Debug.LogError($"Invalid network endpoint: {ip}:{port}.");
		String_t* L_7 = ___ip0;
		uint16_t L_8 = ___port1;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4, L_7, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
	}

IL_003a:
	{
		// return endpoint;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_12 = V_0;
		return L_12;
	}
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkEndpoint ServerEndPoint => ParseNetworkEndpoint(Address, Port);
		String_t* L_0 = __this->___Address_0;
		uint16_t L_1 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_2;
		L_2 = ConnectionAddressData_ParseNetworkEndpoint_m93C005D46E35A425F3715D7B0355A3CB49F0A828(L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865*>(__this + _offset);
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 _returnValue;
	_returnValue = ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ListenEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (string.IsNullOrEmpty(ServerListenAddress))
		String_t* L_0 = __this->___ServerListenAddress_2;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// var ep = NetworkEndpoint.LoopbackIpv4;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_2;
		L_2 = NetworkEndPoint_get_LoopbackIpv4_m7189BA088DDB27DECB093343C5D4DAFE16FB1FA2(NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(Address) && ServerEndPoint.Family == NetworkFamily.Ipv6)
		String_t* L_3 = __this->___Address_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_5;
		L_5 = ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C(__this, NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E((&V_1), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0038;
		}
	}
	{
		// ep = NetworkEndpoint.LoopbackIpv6;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_7;
		L_7 = NetworkEndPoint_get_LoopbackIpv6_m35D5CA8E9B3980579CEDE256F5F8A88574A24AD8(NULL);
		V_0 = L_7;
	}

IL_0038:
	{
		// return ep.WithPort(Port);
		uint16_t L_8 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_9;
		L_9 = NetworkEndPoint_WithPort_mF8B99C061FF1575156E13643D36954B6D437094C((&V_0), L_8, NULL);
		return L_9;
	}

IL_0046:
	{
		// return ParseNetworkEndpoint(ServerListenAddress, Port);
		String_t* L_10 = __this->___ServerListenAddress_2;
		uint16_t L_11 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_12;
		L_12 = ConnectionAddressData_ParseNetworkEndpoint_m93C005D46E35A425F3715D7B0355A3CB49F0A828(L_10, L_11, (bool)0, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865*>(__this + _offset);
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 _returnValue;
	_returnValue = ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_IsIpv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionAddressData_get_IsIpv6_mE612A7E74750A01212193FD88E72B6EE53813C90 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) 
{
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public bool IsIpv6 => !string.IsNullOrEmpty(Address) && ParseNetworkEndpoint(Address, Port, true).Family == NetworkFamily.Ipv6;
		String_t* L_0 = __this->___Address_0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_2 = __this->___Address_0;
		uint16_t L_3 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_4;
		L_4 = ConnectionAddressData_ParseNetworkEndpoint_m93C005D46E35A425F3715D7B0355A3CB49F0A828(L_2, L_3, (bool)1, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E((&V_0), NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)((int32_t)23)))? 1 : 0);
	}

IL_002c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConnectionAddressData_get_IsIpv6_mE612A7E74750A01212193FD88E72B6EE53813C90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865*>(__this + _offset);
	bool _returnValue;
	_returnValue = ConnectionAddressData_get_IsIpv6_mE612A7E74750A01212193FD88E72B6EE53813C90(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_pinvoke(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke(unmarshaled.___Driver_0, marshaled.___Driver_0);
	marshaled.___Target_1 = unmarshaled.___Target_1;
	marshaled.___Queue_2 = unmarshaled.___Queue_2;
	marshaled.___ReliablePipeline_3 = unmarshaled.___ReliablePipeline_3;
}
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_pinvoke_back(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke& marshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 unmarshaledDriver_temp_0;
	memset((&unmarshaledDriver_temp_0), 0, sizeof(unmarshaledDriver_temp_0));
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_back(marshaled.___Driver_0, unmarshaledDriver_temp_0);
	unmarshaled.___Driver_0 = unmarshaledDriver_temp_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 unmarshaledTarget_temp_1;
	memset((&unmarshaledTarget_temp_1), 0, sizeof(unmarshaledTarget_temp_1));
	unmarshaledTarget_temp_1 = marshaled.___Target_1;
	unmarshaled.___Target_1 = unmarshaledTarget_temp_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 unmarshaledQueue_temp_2;
	memset((&unmarshaledQueue_temp_2), 0, sizeof(unmarshaledQueue_temp_2));
	unmarshaledQueue_temp_2 = marshaled.___Queue_2;
	unmarshaled.___Queue_2 = unmarshaledQueue_temp_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 unmarshaledReliablePipeline_temp_3;
	memset((&unmarshaledReliablePipeline_temp_3), 0, sizeof(unmarshaledReliablePipeline_temp_3));
	unmarshaledReliablePipeline_temp_3 = marshaled.___ReliablePipeline_3;
	unmarshaled.___ReliablePipeline_3 = unmarshaledReliablePipeline_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_pinvoke_cleanup(SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_pinvoke& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_pinvoke_cleanup(marshaled.___Driver_0);
}


// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_com(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com(unmarshaled.___Driver_0, marshaled.___Driver_0);
	marshaled.___Target_1 = unmarshaled.___Target_1;
	marshaled.___Queue_2 = unmarshaled.___Queue_2;
	marshaled.___ReliablePipeline_3 = unmarshaled.___ReliablePipeline_3;
}
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_com_back(const SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com& marshaled, SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC& unmarshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14 unmarshaledDriver_temp_0;
	memset((&unmarshaledDriver_temp_0), 0, sizeof(unmarshaledDriver_temp_0));
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_back(marshaled.___Driver_0, unmarshaledDriver_temp_0);
	unmarshaled.___Driver_0 = unmarshaledDriver_temp_0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 unmarshaledTarget_temp_1;
	memset((&unmarshaledTarget_temp_1), 0, sizeof(unmarshaledTarget_temp_1));
	unmarshaledTarget_temp_1 = marshaled.___Target_1;
	unmarshaled.___Target_1 = unmarshaledTarget_temp_1;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 unmarshaledQueue_temp_2;
	memset((&unmarshaledQueue_temp_2), 0, sizeof(unmarshaledQueue_temp_2));
	unmarshaledQueue_temp_2 = marshaled.___Queue_2;
	unmarshaled.___Queue_2 = unmarshaledQueue_temp_2;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 unmarshaledReliablePipeline_temp_3;
	memset((&unmarshaledReliablePipeline_temp_3), 0, sizeof(unmarshaledReliablePipeline_temp_3));
	unmarshaledReliablePipeline_temp_3 = marshaled.___ReliablePipeline_3;
	unmarshaled.___ReliablePipeline_3 = unmarshaledReliablePipeline_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob
IL2CPP_EXTERN_C void SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshal_com_cleanup(SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC_marshaled_com& marshaled)
{
	Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14_marshal_com_cleanup(marshaled.___Driver_0);
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendBatchedMessagesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7 (SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral644832CF60047B3D9FAB0A389B880AEF5B87FE70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF4ADD2D57F4BAB0951244413CF80823252C53CF);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t G_B6_0 = 0;
	{
		// var clientId = Target.ClientId;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* L_0 = (&__this->___Target_1);
		uint64_t L_1 = L_0->___ClientId_0;
		V_0 = L_1;
		// var connection = ParseClientId(clientId);
		uint64_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_3;
		L_3 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_2, NULL);
		V_1 = L_3;
		// var pipeline = Target.NetworkPipeline;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* L_4 = (&__this->___Target_1);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = L_4->___NetworkPipeline_1;
		V_2 = L_5;
		goto IL_00d0;
	}

IL_0024:
	{
		// var result = Driver.BeginSend(pipeline, connection, out var writer);
		Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* L_6 = (&__this->___Driver_0);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_7 = V_2;
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_8 = V_1;
		int32_t L_9;
		L_9 = Concurrent_BeginSend_m08F4DDE3E9503455B091B4F1CA55709107405DAC(L_6, L_7, L_8, (&V_4), 0, NULL);
		V_3 = L_9;
		// if (result != (int)Networking.Transport.Error.StatusCode.Success)
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError($"Error sending message: {ErrorUtilities.ErrorToFixedString(result, clientId)}");
		int32_t L_11 = V_3;
		uint64_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_13;
		L_13 = ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B(L_11, L_12, NULL);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_14 = L_13;
		RuntimeObject* L_15 = Box(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDF4ADD2D57F4BAB0951244413CF80823252C53CF, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
		// return;
		return;
	}

IL_0054:
	{
		// var written = pipeline == ReliablePipeline ? Queue.FillWriterWithBytes(ref writer) : Queue.FillWriterWithMessages(ref writer);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_17 = V_2;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_18 = __this->___ReliablePipeline_3;
		bool L_19;
		L_19 = NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2(L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_20 = (&__this->___Queue_2);
		int32_t L_21;
		L_21 = BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4(L_20, (&V_4), NULL);
		G_B6_0 = L_21;
		goto IL_007e;
	}

IL_0071:
	{
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_22 = (&__this->___Queue_2);
		int32_t L_23;
		L_23 = BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3(L_22, (&V_4), NULL);
		G_B6_0 = L_23;
	}

IL_007e:
	{
		V_5 = G_B6_0;
		// result = Driver.EndSend(writer);
		Concurrent_t864CA014F22D93A77EF7CF00CF48D46518DD1D14* L_24 = (&__this->___Driver_0);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA L_25 = V_4;
		int32_t L_26;
		L_26 = Concurrent_EndSend_m37CAD602AD47C3AEF56E5DAF464382CDD2A94B18(L_24, L_25, NULL);
		V_3 = L_26;
		// if (result == written)
		int32_t L_27 = V_3;
		int32_t L_28 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00a2;
		}
	}
	{
		// Queue.Consume(written);
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_29 = (&__this->___Queue_2);
		int32_t L_30 = V_5;
		BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A(L_29, L_30, NULL);
		goto IL_00d0;
	}

IL_00a2:
	{
		// if (result != (int)Networking.Transport.Error.StatusCode.NetworkSendQueueFull)
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-5))))
		{
			goto IL_00cf;
		}
	}
	{
		// Debug.LogError($"Error sending the message: {ErrorUtilities.ErrorToFixedString(result, clientId)}");
		int32_t L_32 = V_3;
		uint64_t L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84_il2cpp_TypeInfo_var);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_34;
		L_34 = ErrorUtilities_ErrorToFixedString_mC86BD2B14A72FAD11ABF8F1F7A0EF99AC45DFF3B(L_32, L_33, NULL);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_35 = L_34;
		RuntimeObject* L_36 = Box(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral644832CF60047B3D9FAB0A389B880AEF5B87FE70, L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_37, NULL);
		// Queue.Consume(written);
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_38 = (&__this->___Queue_2);
		int32_t L_39 = V_5;
		BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A(L_38, L_39, NULL);
	}

IL_00cf:
	{
		// return;
		return;
	}

IL_00d0:
	{
		// while (!Queue.IsEmpty)
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* L_40 = (&__this->___Queue_2);
		bool L_41;
		L_41 = BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C(L_40, NULL);
		if (!L_41)
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendBatchedMessagesJob_t2092CC9F6F1F63E860929839969047540C428CEC*>(__this + _offset);
	SendBatchedMessagesJob_Execute_mC7FD30CAD908F8FB1CF55850DD1778E6732B23C7(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::.ctor(System.UInt64,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, uint64_t ___clientId0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___networkPipeline1, const RuntimeMethod* method) 
{
	{
		// ClientId = clientId;
		uint64_t L_0 = ___clientId0;
		__this->___ClientId_0 = L_0;
		// NetworkPipeline = networkPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1 = ___networkPipeline1;
		__this->___NetworkPipeline_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41_AdjustorThunk (RuntimeObject* __this, uint64_t ___clientId0, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___networkPipeline1, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41(_thisAdjusted, ___clientId0, ___networkPipeline1, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___other0, const RuntimeMethod* method) 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ClientId == other.ClientId && NetworkPipeline.Equals(other.NetworkPipeline);
		uint64_t L_0 = __this->___ClientId_0;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_1 = ___other0;
		uint64_t L_2 = L_1.___ClientId_0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_3 = __this->___NetworkPipeline_1;
		V_0 = L_3;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_4 = ___other0;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = L_4.___NetworkPipeline_1;
		bool L_6;
		L_6 = NetworkPipeline_Equals_mDDEEE23DC6479D865F524372DE89B48CC06B6F14((&V_0), L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D_AdjustorThunk (RuntimeObject* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___other0, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	bool _returnValue;
	_returnValue = SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj is SendTarget other && Equals(other);
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)((SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)UnBox(L_1, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var))));
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_2 = V_0;
		bool L_3;
		L_3 = SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	bool _returnValue;
	_returnValue = SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, const RuntimeMethod* method) 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (ClientId.GetHashCode() * 397) ^ NetworkPipeline.GetHashCode();
		uint64_t* L_0 = (&__this->___ClientId_0);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_2 = __this->___NetworkPipeline_1;
		V_0 = L_2;
		int32_t L_3;
		L_3 = NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF_inline((&V_0), NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::get_ServerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_get_ServerClientId_m359544B1359E41F2FA8793037D66A004AB179767 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	{
		// public override ulong ServerClientId => GetNetcodeClientId(0, 0, true);
		uint64_t L_0;
		L_0 = UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71(__this, (uint8_t)0, (uint16_t)0, (bool)1, NULL);
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_LateUpdate_mCE7ED80C40E3D4178A5F9500F5C36731286AECA4 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* V_1 = NULL;
	{
		// if (UnityEngine.Networking.NetworkTransport.IsStarted && MessageSendMode == SendMode.Queued)
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkTransport_get_IsStarted_mB18FFFD3F8718BFE678B7460A9D5772F1B02628E(NULL);
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_1 = __this->___MessageSendMode_17;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		// if (NetworkManager != null && NetworkManager.IsServer)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = __this->___NetworkManager_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4 = __this->___NetworkManager_22;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52(L_4, NULL);
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_6;
		L_6 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = NetworkManager_get_ConnectedClientsList_mA7F66C446F46012C187EB6C41FB399C511E6EDC9(L_6, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.Netcode.NetworkClient>::GetEnumerator() */, IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_0;
					if (!L_9)
					{
						goto IL_0063;
					}
				}
				{
					RuntimeObject* L_10 = V_0;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0063:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_003d_1:
			{
				// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* L_12;
				L_12 = InterfaceFuncInvoker0< NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.Netcode.NetworkClient>::get_Current() */, IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var, L_11);
				V_1 = L_12;
				// SendQueued(targetClient.ClientId);
				NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* L_13 = V_1;
				NullCheck(L_13);
				uint64_t L_14 = L_13->___ClientId_4;
				UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA(__this, L_14, NULL);
			}

IL_0050_1:
			{
				// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
				RuntimeObject* L_15 = V_0;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// SendQueued(NetworkManager.Singleton.LocalClientId);
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_17;
		L_17 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_17);
		uint64_t L_18;
		L_18 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577(L_17, NULL);
		UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA(__this, L_18, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Send_m4C7588596E538BA0A9A22E19184B5B44A8480D11 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload1, int32_t ___networkDelivery2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// if (payload.Offset > 0)
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___payload1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		// if (m_MessageBuffer.Length >= payload.Count)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_MessageBuffer_18;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) < ((int32_t)L_3)))
		{
			goto IL_0032;
		}
	}
	{
		// buffer = m_MessageBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___m_MessageBuffer_18;
		V_2 = L_4;
		goto IL_007f;
	}

IL_0032:
	{
		// if (m_TemporaryBufferReference != null && ((bufferRef = m_TemporaryBufferReference.Target) != null) && ((byte[])bufferRef).Length >= payload.Count)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = __this->___m_TemporaryBufferReference_19;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_6);
		RuntimeObject* L_8 = L_7;
		V_4 = L_8;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_9 = V_4;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_10;
		L_10 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->max_length))) < ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		// buffer = (byte[])bufferRef;
		RuntimeObject* L_11 = V_4;
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_11, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		goto IL_007f;
	}

IL_0066:
	{
		// buffer = new byte[payload.Count];
		int32_t L_12;
		L_12 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_2 = L_13;
		// m_TemporaryBufferReference = new WeakReference(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_15, (RuntimeObject*)L_14, NULL);
		__this->___m_TemporaryBufferReference_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TemporaryBufferReference_19), (void*)L_15);
	}

IL_007f:
	{
		// Buffer.BlockCopy(payload.Array, payload.Offset, buffer, 0, payload.Count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___payload1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_17;
		L_17 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___payload1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		int32_t L_19;
		L_19 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_16, L_17, (RuntimeArray*)L_18, 0, L_19, NULL);
		goto IL_00a5;
	}

IL_009d:
	{
		// buffer = payload.Array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___payload1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		V_2 = L_20;
	}

IL_00a5:
	{
		// int channelId = -1;
		V_3 = (-1);
		int32_t L_21 = ___networkDelivery2;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00c3;
			}
			case 1:
			{
				goto IL_00cc;
			}
			case 2:
			{
				goto IL_00d5;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_00e7;
			}
		}
	}
	{
		goto IL_00ee;
	}

IL_00c3:
	{
		// channelId = m_UnreliableChannelId;
		int32_t L_22 = __this->___m_UnreliableChannelId_6;
		V_3 = L_22;
		// break;
		goto IL_00ee;
	}

IL_00cc:
	{
		// channelId = m_UnreliableSequencedChannelId;
		int32_t L_23 = __this->___m_UnreliableSequencedChannelId_7;
		V_3 = L_23;
		// break;
		goto IL_00ee;
	}

IL_00d5:
	{
		// channelId = m_ReliableChannelId;
		int32_t L_24 = __this->___m_ReliableChannelId_8;
		V_3 = L_24;
		// break;
		goto IL_00ee;
	}

IL_00de:
	{
		// channelId = m_ReliableSequencedChannelId;
		int32_t L_25 = __this->___m_ReliableSequencedChannelId_9;
		V_3 = L_25;
		// break;
		goto IL_00ee;
	}

IL_00e7:
	{
		// channelId = m_ReliableFragmentedSequencedChannelId;
		int32_t L_26 = __this->___m_ReliableFragmentedSequencedChannelId_10;
		V_3 = L_26;
	}

IL_00ee:
	{
		// if (MessageSendMode == SendMode.Queued)
		int32_t L_27 = __this->___MessageSendMode_17;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_010b;
		}
	}
	{
		// UnityEngine.Networking.NetworkTransport.QueueMessageForSending(hostId, connectionId, channelId, buffer, payload.Count, out byte error);
		uint8_t L_28 = V_0;
		uint16_t L_29 = V_1;
		int32_t L_30 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_2;
		int32_t L_32;
		L_32 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F(L_28, L_29, L_30, L_31, L_32, (&V_5), NULL);
		return;
	}

IL_010b:
	{
		// UnityEngine.Networking.NetworkTransport.Send(hostId, connectionId, channelId, buffer, payload.Count, out byte error);
		uint8_t L_34 = V_0;
		uint16_t L_35 = V_1;
		int32_t L_36 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		int32_t L_38;
		L_38 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___payload1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855(L_34, L_35, L_36, L_37, L_38, (&V_6), NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// UnityEngine.Networking.NetworkTransport.SendQueuedMessages(hostId, connectionId, out _);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E(L_1, L_2, (&V_2), NULL);
		// }
		return;
	}
}
// Unity.Netcode.NetworkEvent Unity.Netcode.Transports.UNET.UNetTransport::PollEvent(System.UInt64&,System.ArraySegment`1<System.Byte>&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_PollEvent_m2B3B3E3EFB0B448552244173F8C036C26EF49AF9 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t* ___clientId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___payload1, float* ___receiveTime2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint8_t G_B7_0 = 0x0;
	uint8_t G_B1_0 = 0x0;
	uint8_t G_B5_0 = 0x0;
	uint8_t G_B2_0 = 0x0;
	uint8_t G_B3_0 = 0x0;
	uint8_t G_B4_0 = 0x0;
	uint8_t G_B6_0 = 0x0;
	uint8_t G_B8_0 = 0x0;
	{
		// var eventType = UnityEngine.Networking.NetworkTransport.Receive(out int hostId, out int connectionId, out _, m_MessageBuffer, m_MessageBuffer.Length, out int receivedSize, out byte error);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_MessageBuffer_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___m_MessageBuffer_18;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74((&V_1), (&V_2), (&V_5), L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), (&V_3), (&V_4), NULL);
		V_0 = L_2;
		// clientId = GetNetcodeClientId((byte)hostId, (ushort)connectionId, false);
		uint64_t* L_3 = ___clientId0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		uint64_t L_6;
		L_6 = UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71(__this, (uint8_t)((int32_t)(uint8_t)L_4), (uint16_t)((int32_t)(uint16_t)L_5), (bool)0, NULL);
		*((int64_t*)L_3) = (int64_t)L_6;
		// receiveTime = NetworkManager.RealTimeProvider.RealTimeSinceStartup;
		float* L_7 = ___receiveTime2;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_8 = __this->___NetworkManager_22;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = NetworkManager_get_RealTimeProvider_mAF8EEDE4C46E0478801F0ABCFF5410F762FAF8BE_inline(L_8, NULL);
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Unity.Netcode.IRealTimeProvider::get_RealTimeSinceStartup() */, IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D_il2cpp_TypeInfo_var, L_9);
		*((float*)L_7) = (float)L_10;
		// var networkError = (NetworkError)error;
		uint8_t L_11 = V_4;
		// if (networkError == NetworkError.MessageToLong)
		uint8_t L_12 = L_11;
		G_B1_0 = L_12;
		if ((!(((uint32_t)L_12) == ((uint32_t)7))))
		{
			G_B7_0 = L_12;
			goto IL_00bd;
		}
	}
	{
		// if (m_TemporaryBufferReference != null && m_TemporaryBufferReference.IsAlive && ((byte[])m_TemporaryBufferReference.Target).Length >= receivedSize)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = __this->___m_TemporaryBufferReference_19;
		G_B2_0 = G_B1_0;
		if (!L_13)
		{
			G_B5_0 = G_B1_0;
			goto IL_0081;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_14);
		G_B3_0 = G_B2_0;
		if (!L_15)
		{
			G_B5_0 = G_B2_0;
			goto IL_0081;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_16 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_16);
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_17, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_18 = V_3;
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_17, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->max_length))) < ((int32_t)L_18)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0081;
		}
	}
	{
		// tempBuffer = (byte[])m_TemporaryBufferReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_19);
		V_6 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_20, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		G_B6_0 = G_B4_0;
		goto IL_0096;
	}

IL_0081:
	{
		// tempBuffer = new byte[receivedSize];
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_6 = L_22;
		// m_TemporaryBufferReference = new WeakReference(tempBuffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_6;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_24, (RuntimeObject*)L_23, NULL);
		__this->___m_TemporaryBufferReference_19 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TemporaryBufferReference_19), (void*)L_24);
		G_B6_0 = G_B5_0;
	}

IL_0096:
	{
		// eventType = UnityEngine.Networking.NetworkTransport.Receive(out hostId, out connectionId, out _, tempBuffer, tempBuffer.Length, out receivedSize, out error);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_6;
		NullCheck(L_26);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74((&V_1), (&V_2), (&V_5), L_25, ((int32_t)(((RuntimeArray*)L_26)->max_length)), (&V_3), (&V_4), NULL);
		V_0 = L_27;
		// payload = new ArraySegment<byte>(tempBuffer, 0, receivedSize);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_28 = ___payload1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_6;
		int32_t L_30 = V_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_31;
		memset((&L_31), 0, sizeof(L_31));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_31), L_29, 0, L_30, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_28 = L_31;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_28)->____array_1), (void*)NULL);
		G_B8_0 = G_B6_0;
		goto IL_00d0;
	}

IL_00bd:
	{
		// payload = new ArraySegment<byte>(m_MessageBuffer, 0, receivedSize);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_32 = ___payload1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___m_MessageBuffer_18;
		int32_t L_34 = V_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_35;
		memset((&L_35), 0, sizeof(L_35));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_35), L_33, 0, L_34, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_32 = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_32)->____array_1), (void*)NULL);
		G_B8_0 = G_B7_0;
	}

IL_00d0:
	{
		// if (networkError == NetworkError.Timeout)
		if ((!(((uint32_t)G_B8_0) == ((uint32_t)6))))
		{
			goto IL_00d5;
		}
	}
	{
		// eventType = NetworkEventType.DisconnectEvent;
		V_0 = 2;
	}

IL_00d5:
	{
		int32_t L_36 = V_0;
		switch (L_36)
		{
			case 0:
			{
				goto IL_00f1;
			}
			case 1:
			{
				goto IL_00f3;
			}
			case 2:
			{
				goto IL_00f5;
			}
			case 3:
			{
				goto IL_00f7;
			}
			case 4:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_00f7;
	}

IL_00f1:
	{
		// return NetworkEvent.Data;
		return (int32_t)(0);
	}

IL_00f3:
	{
		// return NetworkEvent.Connect;
		return (int32_t)(1);
	}

IL_00f5:
	{
		// return NetworkEvent.Disconnect;
		return (int32_t)(2);
	}

IL_00f7:
	{
		// return NetworkEvent.Nothing;
		return (int32_t)(4);
	}
}
// System.Boolean Unity.Netcode.Transports.UNET.UNetTransport::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UNetTransport_StartClient_m7D430B310E7E678616409CBD9DC7A62B1730471C (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// m_ServerHostId = UnityEngine.Networking.NetworkTransport.AddHost(new HostTopology(GetConfig(), 1), 0, null);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0;
		L_0 = UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64(__this, NULL);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_1 = (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)il2cpp_codegen_object_new(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13(L_1, L_0, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C(L_1, 0, (String_t*)NULL, NULL);
		__this->___m_ServerHostId_21 = L_2;
		// m_ServerConnectionId = UnityEngine.Networking.NetworkTransport.Connect(m_ServerHostId, ConnectAddress, ConnectPort, 0, out byte error);
		int32_t L_3 = __this->___m_ServerHostId_21;
		String_t* L_4 = __this->___ConnectAddress_14;
		int32_t L_5 = __this->___ConnectPort_15;
		int32_t L_6;
		L_6 = NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC(L_3, L_4, L_5, 0, (&V_0), NULL);
		__this->___m_ServerConnectionId_20 = L_6;
		// return (NetworkError)error == NetworkError.Ok;
		uint8_t L_7 = V_0;
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Netcode.Transports.UNET.UNetTransport::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UNetTransport_StartServer_mA835EB4590F0F107C20EADFB3B6A9816D6BEF7F9 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* V_0 = NULL;
	{
		// var topology = new HostTopology(GetConfig(), MaxConnections);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0;
		L_0 = UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64(__this, NULL);
		int32_t L_1 = __this->___MaxConnections_12;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_2 = (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)il2cpp_codegen_object_new(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// return -1 != UnityEngine.Networking.NetworkTransport.AddHost(topology, ServerListenPort, null);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_3 = V_0;
		int32_t L_4 = __this->___ServerListenPort_16;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C(L_3, L_4, (String_t*)NULL, NULL);
		return (bool)((((int32_t)((((int32_t)(-1)) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::DisconnectRemoteClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectRemoteClient_m6BF77B6EE4222030BEB84EE397A10C6364258DE0 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// UnityEngine.Networking.NetworkTransport.Disconnect(hostId, connectionId, out byte error);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20(L_1, L_2, (&V_2), NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::DisconnectLocalClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectLocalClient_mC6DD90DD7A10B23BA6AF74DC6CAF10F6A079ECBC (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// UnityEngine.Networking.NetworkTransport.Disconnect(m_ServerHostId, m_ServerConnectionId, out byte error);
		int32_t L_0 = __this->___m_ServerHostId_21;
		int32_t L_1 = __this->___m_ServerConnectionId_20;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20(L_0, L_1, (&V_0), NULL);
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetCurrentRtt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetCurrentRtt_m2B1E15B3E50EB2428605CCBB66F3BEFA0715B9DD (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// return (ulong)UnityEngine.Networking.NetworkTransport.GetCurrentRTT(hostId, connectionId, out byte error);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D(L_1, L_2, (&V_2), NULL);
		return ((int64_t)L_3);
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Shutdown_m7FF84172B99ED983BF242F5BF2CBDC6EF1B5104A (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Networking.NetworkTransport.Shutdown();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996(NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Initialize(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Initialize_m4FFEE72C84D864C2D8DB8C6F73A01713CDAAC265 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___networkManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager = networkManager;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ___networkManager0;
		__this->___NetworkManager_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NetworkManager_22), (void*)L_0);
		// m_MessageBuffer = new byte[MessageBufferSize];
		int32_t L_1 = __this->___MessageBufferSize_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___m_MessageBuffer_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageBuffer_18), (void*)L_2);
		// UnityEngine.Networking.NetworkTransport.Init();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE(NULL);
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetNetcodeClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint8_t ___hostId0, uint16_t ___connectionId1, bool ___isServer2, const RuntimeMethod* method) 
{
	{
		// if (isServer)
		bool L_0 = ___isServer2;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		// return 0;
		return ((int64_t)0);
	}

IL_0006:
	{
		// return (connectionId | (ulong)hostId << 16) + 1;
		uint16_t L_1 = ___connectionId1;
		uint8_t L_2 = ___hostId0;
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_1)|((int64_t)(((int64_t)(uint64_t)L_2)<<((int32_t)16))))), ((int64_t)1)));
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___clientId0, uint8_t* ___hostId1, uint16_t* ___connectionId2, const RuntimeMethod* method) 
{
	{
		// if (clientId == 0)
		uint64_t L_0 = ___clientId0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// hostId = (byte)m_ServerHostId;
		uint8_t* L_1 = ___hostId1;
		int32_t L_2 = __this->___m_ServerHostId_21;
		*((int8_t*)L_1) = (int8_t)((int32_t)(uint8_t)L_2);
		// connectionId = (ushort)m_ServerConnectionId;
		uint16_t* L_3 = ___connectionId2;
		int32_t L_4 = __this->___m_ServerConnectionId_20;
		*((int16_t*)L_3) = (int16_t)((int32_t)(uint16_t)L_4);
		return;
	}

IL_0016:
	{
		// hostId = (byte)((clientId - 1) >> 16);
		uint8_t* L_5 = ___hostId1;
		uint64_t L_6 = ___clientId0;
		*((int8_t*)L_5) = (int8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_6, ((int64_t)1)))>>((int32_t)16))));
		// connectionId = (ushort)((clientId - 1));
		uint16_t* L_7 = ___connectionId2;
		uint64_t L_8 = ___clientId0;
		*((int16_t*)L_7) = (int16_t)((int32_t)(uint16_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_8, ((int64_t)1))));
		// }
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig Unity.Netcode.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_0 = NULL;
	{
		// var connectionConfig = new ConnectionConfig();
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0 = (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)il2cpp_codegen_object_new(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113(L_0, NULL);
		V_0 = L_0;
		// m_UnreliableChannelId = connectionConfig.AddChannel(QosType.Unreliable);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_1 = V_0;
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_1, 0, NULL);
		__this->___m_UnreliableChannelId_6 = L_2;
		// m_UnreliableSequencedChannelId = connectionConfig.AddChannel(QosType.UnreliableSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_3 = V_0;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_3, 2, NULL);
		__this->___m_UnreliableSequencedChannelId_7 = L_4;
		// m_ReliableChannelId = connectionConfig.AddChannel(QosType.Reliable);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_5 = V_0;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_5, 3, NULL);
		__this->___m_ReliableChannelId_8 = L_6;
		// m_ReliableSequencedChannelId = connectionConfig.AddChannel(QosType.ReliableSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_7 = V_0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_7, 5, NULL);
		__this->___m_ReliableSequencedChannelId_9 = L_8;
		// m_ReliableFragmentedSequencedChannelId = connectionConfig.AddChannel(QosType.ReliableFragmentedSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_9 = V_0;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_9, ((int32_t)10), NULL);
		__this->___m_ReliableFragmentedSequencedChannelId_10 = L_10;
		// connectionConfig.MaxSentMessageQueueSize = (ushort)MaxSentMessageQueueSize;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_11 = V_0;
		int32_t L_12 = __this->___MaxSentMessageQueueSize_13;
		NullCheck(L_11);
		ConnectionConfig_set_MaxSentMessageQueueSize_m4EF0FBEF7C0BF9A3D28BE8577B7AA449522EDEE7(L_11, (uint16_t)((int32_t)(uint16_t)L_12), NULL);
		// return connectionConfig;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_13 = V_0;
		return L_13;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport__ctor_mF3B67C172CE0E35FB1BE70D11129B3B6C2A1447A (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MessageBufferSize = 1024 * 5;
		__this->___MessageBufferSize_11 = ((int32_t)5120);
		// public int MaxConnections = 100;
		__this->___MaxConnections_12 = ((int32_t)100);
		// public int MaxSentMessageQueueSize = 128;
		__this->___MaxSentMessageQueueSize_13 = ((int32_t)128);
		// public string ConnectAddress = "127.0.0.1";
		__this->___ConnectAddress_14 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ConnectAddress_14), (void*)_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		// public int ConnectPort = 7777;
		__this->___ConnectPort_15 = ((int32_t)7777);
		// public int ServerListenPort = 7777;
		__this->___ServerListenPort_16 = ((int32_t)7777);
		NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_inline (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___payload2, float ___receiveTime3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___eventType0, ___clientId1, ___payload2, ___receiveTime3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B_inline (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, const RuntimeMethod* method) 
{
	{
		// return m_Length;
		int32_t L_0 = __this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326_inline (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerCommonName;
		String_t* L_0 = __this->___m_ServerCommonName_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal NetworkDriver NetworkDriver => m_Driver;
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_0 = __this->___m_Driver_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___inProtocol0, const RuntimeMethod* method) 
{
	{
		// m_ProtocolType = inProtocol;
		int32_t L_0 = ___inProtocol0;
		__this->___m_ProtocolType_12 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkConnectionManager_ClientIdToTransportId_m1329EE63E4DBF4FC449E7EF214B6B0F00F7318E0_inline (NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* __this, uint64_t ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1B9C347346F5D881C6912E306B81D88C59210B8);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		// if (clientId == NetworkManager.ServerClientId)
		uint64_t L_0 = ___clientId0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return GetServerTransportId();
		uint64_t L_1;
		L_1 = NetworkConnectionManager_GetServerTransportId_mF951847AF72F8F2F0C4F6D842D32633B249A7846_inline(__this, NULL);
		return L_1;
	}

IL_000a:
	{
		// if (ClientIdToTransportIdMap.TryGetValue(clientId, out var transportClientId))
		Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* L_2 = __this->___ClientIdToTransportIdMap_10;
		uint64_t L_3 = ___clientId0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return transportClientId;
		uint64_t L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		// if (NetworkLog.CurrentLogLevel == LogLevel.Developer)
		int32_t L_6;
		L_6 = NetworkLog_get_CurrentLogLevel_m8D46ADEFC32E3AC0592F30B64B2062202A97AF9C(NULL);
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		// NetworkLog.LogWarning($"Trying to get the transport client ID map for the NGO client ID ({clientId}) but did not find the map entry! Returning default transport ID value.");
		uint64_t L_7 = ___clientId0;
		uint64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD1B9C347346F5D881C6912E306B81D88C59210B8, L_9, NULL);
		NetworkLog_LogWarning_m1A2073B527F4B95F216508B0E5A76DF71823D899(L_10, NULL);
	}

IL_0038:
	{
		// return default;
		return ((int64_t)0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_RealTimeProvider_mAF8EEDE4C46E0478801F0ABCFF5410F762FAF8BE_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// internal IRealTimeProvider RealTimeProvider { get; private set; }
		RuntimeObject* L_0 = __this->___U3CRealTimeProviderU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkConnectionManager_TransportIdToClientId_m69297481202CC42996037059EC44262CFE5FB6EC_inline (NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* __this, uint64_t ___transportId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83E6526E6CC6F86D0F81148E48FAA9BD354B446B);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		// if (transportId == GetServerTransportId())
		uint64_t L_0 = ___transportId0;
		uint64_t L_1;
		L_1 = NetworkConnectionManager_GetServerTransportId_mF951847AF72F8F2F0C4F6D842D32633B249A7846_inline(__this, NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		// return NetworkManager.ServerClientId;
		return ((int64_t)0);
	}

IL_000c:
	{
		// if (TransportIdToClientIdMap.TryGetValue(transportId, out var clientId))
		Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* L_2 = __this->___TransportIdToClientIdMap_11;
		uint64_t L_3 = ___transportId0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m9BEF32B5F0845A41B54C238225D5A4D1E7F5A3F5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return clientId;
		uint64_t L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		// if (NetworkLog.CurrentLogLevel == LogLevel.Developer)
		int32_t L_6;
		L_6 = NetworkLog_get_CurrentLogLevel_m8D46ADEFC32E3AC0592F30B64B2062202A97AF9C(NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// NetworkLog.LogWarning($"Trying to get the NGO client ID map for the transport ID ({transportId}) but did not find the map entry! Returning default transport ID value.");
		uint64_t L_7 = ___transportId0;
		uint64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral83E6526E6CC6F86D0F81148E48FAA9BD354B446B, L_9, NULL);
		NetworkLog_LogWarning_m1A2073B527F4B95F216508B0E5A76DF71823D899(L_10, NULL);
	}

IL_003a:
	{
		// return default;
		return ((int64_t)0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal uint? DebugSimulatorRandomSeed { get; set; } = null;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = __this->___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF_inline (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, const RuntimeMethod* method) 
{
	{
		// return Id;
		int32_t L_0 = __this->___Id_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager Singleton { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mD7C393AE045EF225975A8BF6B27887913C28A829_gshared_inline (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* __this, int32_t ___arg10, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_gshared_inline (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method) 
{
	{
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_0 = (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_gshared_inline (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 L_0 = (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_gshared_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method) 
{
	{
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_0 = (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_gshared_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method) 
{
	{
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_0 = (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_gshared_inline (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method) 
{
	{
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_0 = (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkConnectionManager_GetServerTransportId_mF951847AF72F8F2F0C4F6D842D32633B249A7846_inline (NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTransport_t55E07951299283974C86476F46CC977780560B64* V_0 = NULL;
	{
		// if (NetworkManager != null)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = __this->___NetworkManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// var transport = NetworkManager.NetworkConfig.NetworkTransport;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = __this->___NetworkManager_5;
		NullCheck(L_2);
		NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* L_3 = L_2->___NetworkConfig_8;
		NullCheck(L_3);
		NetworkTransport_t55E07951299283974C86476F46CC977780560B64* L_4 = L_3->___NetworkTransport_1;
		V_0 = L_4;
		// if (transport != null)
		NetworkTransport_t55E07951299283974C86476F46CC977780560B64* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// return transport.ServerClientId;
		NetworkTransport_t55E07951299283974C86476F46CC977780560B64* L_7 = V_0;
		NullCheck(L_7);
		uint64_t L_8;
		L_8 = VirtualFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Unity.Netcode.NetworkTransport::get_ServerClientId() */, L_7);
		return L_8;
	}

IL_002f:
	{
		// throw new NullReferenceException($"The transport in the active {nameof(NetworkConfig)} is null");
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_9 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9033E767C7E2FEB776CA0B4C15369E63C995C4CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkConnectionManager_GetServerTransportId_mF951847AF72F8F2F0C4F6D842D32633B249A7846_RuntimeMethod_var)));
	}

IL_003a:
	{
		// throw new Exception($"There is no {nameof(NetworkManager)} assigned to this instance!");
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6992BAB5D0DA18DBB6B8CC0786AA2CE98F091D68)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkConnectionManager_GetServerTransportId_mF951847AF72F8F2F0C4F6D842D32633B249A7846_RuntimeMethod_var)));
	}
}

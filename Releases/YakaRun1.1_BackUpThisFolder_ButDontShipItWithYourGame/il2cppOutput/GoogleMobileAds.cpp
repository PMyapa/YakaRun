#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6;
// System.Action`1<GoogleMobileAds.Api.AdInspectorError>
struct Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D;
// System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>
struct Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3;
// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF;
// System.Action`1<GoogleMobileAds.Common.AppState>
struct Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79;
// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<GoogleMobileAds.Api.LoadAdError>
struct Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC;
// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8;
// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580;
// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t6D103D50D92EED8806671DABC525008F7D560A68;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418;
// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36;
// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E;
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus>
struct Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC;
// System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo>
struct Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<GoogleMobileAds.Api.AdapterResponseInfo>
struct IEnumerable_1_t58964E13DADB1194FFFF461D582142BDCD5F273B;
// System.Collections.Generic.IEnumerable`1<GoogleMobileAds.Common.IAdapterResponseInfoClient>
struct IEnumerable_1_t7CF1501297576AD32712847485912351AF074CD8;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GoogleMobileAds.Api.AdapterStatus>
struct KeyCollection_tCC9477A5A05C7B38CA9D53DA8DD1DCC1766383CC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.AdapterResponseInfo>
struct List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GoogleMobileAds.Api.AdapterStatus>
struct ValueCollection_t21D6F5F4A0DA3FE96317F60A51550710DDBA4227;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,GoogleMobileAds.Api.AdapterStatus>[]
struct EntryU5BU5D_tD5415EB93F82D82B5CDA561F9AB65653D6DF8B00;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// GoogleMobileAds.Api.AdapterResponseInfo[]
struct AdapterResponseInfoU5BU5D_tEEB289AC087915667C3FA31A2D9ADBBC93D272B8;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// GoogleMobileAds.Common.IAdapterResponseInfoClient[]
struct IAdapterResponseInfoClientU5BU5D_t21C51D50837E15B1438F16E3C8B992FF95F4DF7F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// GoogleMobileAds.Api.AdInspectorError
struct AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D;
// GoogleMobileAds.Common.AdInspectorErrorClientEventArgs
struct AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// GoogleMobileAds.Api.AdapterResponseInfo
struct AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA;
// GoogleMobileAds.Api.AdapterStatus
struct AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0;
// GoogleMobileAds.Api.AppOpenAd
struct AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC;
// GoogleMobileAds.Api.AppStateEventNotifier
struct AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// GoogleMobileAds.Common.IAdInspectorErrorClient
struct IAdInspectorErrorClient_t014D7BDEAEADC7BFF5FF32AB1E464B5554B0CF36;
// GoogleMobileAds.Common.IAdapterResponseInfoClient
struct IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4;
// GoogleMobileAds.Common.IAppOpenAdClient
struct IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1;
// GoogleMobileAds.Common.IAppStateEventClient
struct IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// GoogleMobileAds.IClientFactory
struct IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE;
// GoogleMobileAds.Common.IRewardedInterstitialAdClient
struct IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// GoogleMobileAds.Api.MaxAdContentRating
struct MaxAdContentRating_t8F4AA13668EB7FF7A5F6F369845B5280BBE0BF17;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5;
// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB;
// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09;
// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE;
// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC;
// GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1
struct U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F;
// GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E;
// GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1
struct U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29;
// GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA;
// GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF;
// GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1
struct U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CRegisterAdEventsU3Em__0_m27A1F8B773ED5CDE8007F65DFDAFD05B60381651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CRegisterAdEventsU3Em__1_m9C4BA7627EDA74D79F3EC01511390054892404AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CRegisterAdEventsU3Em__2_m699D6740C2F6D1033E611DC12965B18B303A4B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CRegisterAdEventsU3Em__3_mB562EF2E861A7E54D09DE5A4A2A0F7157D4A0BAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CRegisterAdEventsU3Em__4_m58B88A7402B3A92907539DAD22DE4315A4821F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CRegisterAdEventsU3Em__5_mCE9D3247F89E79E93ABF6149E199EFF030934955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_m397193C0D965E2D82205D4CF028D83469912547A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_mF9C9C971C7695486D2FDE2E0553208214733AFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB6B32B23478B46CFB7D8F7265C9F79A554A4E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseInfo_U3CGetAdapterResponsesU3Em__0_m46EFEAD12D4F2D2D0B65EBEF4EEF2A3DB80A2C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CLoadAdU3Em__0_mBB8D8A10A27E619B2AC11599A2F0C1AB297065B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CLoadAdU3Em__1_m01079FF435F766BB89E2E7D497ABE45F6AB7482E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__2_m0EF93EF6A564FD9345F67C78D09543BAD0EF8ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__3_m42FE908963AFFF13DBAD5ECB22F5A0BEC0DE24E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__4_m9A2F74096E42DA056D883CCE7A3D46E5F861D5C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__5_mD8B36E79B4E1AD6DC781EFA905A039D9907FF460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__6_m0EE95E3BD583017B6101EB6307DD308175A01F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__7_m6DDAE716541683801C81BD115D5C8484CDA4A56A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRegisterAdEventsU3Em__8_m6A33A74EE1FB5D5A0C0938170D7B403666770349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRegisterAdEventsU3Em__0_m9886A4BC1AD46360532A23EEE8C50BD57F89D1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRegisterAdEventsU3Em__1_m543CC73960970B9313A63C6503E6734B824AB6D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRegisterAdEventsU3Em__2_m1B2DC3A87AC052C420FA21CD7087ED63C13CC6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRegisterAdEventsU3Em__3_m25AFB0FBFF3283D64AFC8D8598A7ED8D50565B45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRegisterAdEventsU3Em__4_m5A5F20A6DE1364C4418FC45C08523C9C60127663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRegisterAdEventsU3Em__5_mF87BA9ED7F1D60DA940B2A092DC9B89F614072EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRegisterAdEventsU3Em__6_mDA873076A460C83926EE0A2B31152F8B6833280A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_m6137CE3D3151DDE4CC31259F6AF851409E743EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_mC83774687D0BBD8030386EAC46B739EA42D9D172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_m2DDE595FD36A022B8C2CABAEEC31D9420F2247AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_mC086AA16AB7EC7D187E44822507439F40B85ECD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m4581D6C04844FB1A0AA18AB75480F7289D2B7BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m49C42950EE386C1E4C6044643D9521A264974CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m631331ABD2466F9B2AE59D8DFF7723E436983B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_mECC5EC99E7320E24831FE0BC35E73A02D534CC9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m19E293E74E612E80F6D6F1DCF39F804E35F23102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mBB7E2D5335953D85AE80D33F59EDC5B3B2A455F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mC67F1CCB4AB9D24C87624C3AC7E8672691DA5ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mCDAD16B0470ADCBA74835F69B270E5174950D92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300 
{
};

// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus>
struct Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5415EB93F82D82B5CDA561F9AB65653D6DF8B00* ____entries_1;
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
	KeyCollection_tCC9477A5A05C7B38CA9D53DA8DD1DCC1766383CC* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t21D6F5F4A0DA3FE96317F60A51550710DDBA4227* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<GoogleMobileAds.Api.AdapterResponseInfo>
struct List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AdapterResponseInfoU5BU5D_tEEB289AC087915667C3FA31A2D9ADBBC93D272B8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AdapterResponseInfoU5BU5D_tEEB289AC087915667C3FA31A2D9ADBBC93D272B8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GoogleMobileAds.Common.IAdapterResponseInfoClient>
struct List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IAdapterResponseInfoClientU5BU5D_t21C51D50837E15B1438F16E3C8B992FF95F4DF7F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IAdapterResponseInfoClientU5BU5D_t21C51D50837E15B1438F16E3C8B992FF95F4DF7F* ___s_emptyArray_5;
};

// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::_client
	RuntimeObject* ____client_0;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::_type
	int32_t ____type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::_orientation
	int32_t ____orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::_width
	int32_t ____width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::_height
	int32_t ____height_3;
};

struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};

// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::<Precision>k__BackingField
	int32_t ___U3CPrecisionU3Ek__BackingField_0;
	// System.Int64 GoogleMobileAds.Api.AdValue::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdValue::<CurrencyCode>k__BackingField
	String_t* ___U3CCurrencyCodeU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AdapterResponseInfo
struct AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdapterResponseInfoClient GoogleMobileAds.Api.AdapterResponseInfo::_client
	RuntimeObject* ____client_0;
};

// GoogleMobileAds.Api.AdapterStatus
struct AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdapterState GoogleMobileAds.Api.AdapterStatus::<InitializationState>k__BackingField
	int32_t ___U3CInitializationStateU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.AdapterStatus::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_1;
	// System.Int32 GoogleMobileAds.Api.AdapterStatus::<Latency>k__BackingField
	int32_t ___U3CLatencyU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AppOpenAd
struct AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.AppOpenAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.AppOpenAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.AppOpenAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.AppOpenAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.AppOpenAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.AppOpenAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.AppOpenAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdFailedToPresentFullScreenContent
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToPresentFullScreenContent_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdDidPresentFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidPresentFullScreenContent_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdDidDismissFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidDismissFullScreenContent_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_10;
	// GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.Api.AppOpenAd::_client
	RuntimeObject* ____client_11;
	// System.Boolean GoogleMobileAds.Api.AppOpenAd::_canShowAd
	bool ____canShowAd_12;
};

// GoogleMobileAds.Api.AppStateEventNotifier
struct AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE  : public RuntimeObject
{
};

struct AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields
{
	// GoogleMobileAds.Common.IAppStateEventClient GoogleMobileAds.Api.AppStateEventNotifier::client
	RuntimeObject* ___client_0;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// System.Action GoogleMobileAds.Api.BannerView::OnBannerAdLoaded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnBannerAdLoaded_0;
	// System.Action`1<GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.BannerView::OnBannerAdLoadFailed
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* ___OnBannerAdLoadFailed_1;
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.BannerView::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_2;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_3;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_4;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_5;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_7;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_10;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_11;
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::_client
	RuntimeObject* ____client_12;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.InterstitialAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_11;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_12;
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::_client
	RuntimeObject* ____client_13;
	// System.String GoogleMobileAds.Api.InterstitialAd::_adUnitId
	String_t* ____adUnitId_14;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::_canShowAd
	bool ____canShowAd_15;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5  : public RuntimeObject
{
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;
};

struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields
{
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* ___instance_2;
};

// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0  : public RuntimeObject
{
	// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Api.ResponseInfo::_client
	RuntimeObject* ____client_0;
};

struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_StaticFields
{
	// System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo> GoogleMobileAds.Api.ResponseInfo::<>f__am$cache0
	Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* ___U3CU3Ef__amU24cache0_1;
};

// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.RewardedAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_11;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_12;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_13;
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::_client
	RuntimeObject* ____client_14;
	// System.String GoogleMobileAds.Api.RewardedAd::_adUnitId
	String_t* ____adUnitId_15;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::_canShowAd
	bool ____canShowAd_16;
	// System.Action`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::_userRewardEarnedCallback
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ____userRewardEarnedCallback_17;
};

// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.RewardedInterstitialAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.RewardedInterstitialAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.RewardedInterstitialAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.RewardedInterstitialAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdFailedToPresentFullScreenContent
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToPresentFullScreenContent_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdDidPresentFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidPresentFullScreenContent_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdDidDismissFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidDismissFullScreenContent_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_10;
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd::_client
	RuntimeObject* ____client_11;
	// System.Boolean GoogleMobileAds.Api.RewardedInterstitialAd::_canShowAd
	bool ____canShowAd_12;
	// System.Action`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedInterstitialAd::_userRewardEarnedCallback
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ____userRewardEarnedCallback_13;
};

// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3  : public RuntimeObject
{
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<CustomData>k__BackingField
	String_t* ___U3CCustomDataU3Ek__BackingField_1;
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

// GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0::adLoadCallback
	Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1
struct U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1::adLoadCallback
	Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0::adLoadCallback
	Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction_0;
};

// GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1
struct U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdInspectorError> GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::adInspectorClosedAction
	Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* ___adInspectorClosedAction_0;
};

// GoogleMobileAds.Api.MobileAds/Utils
struct Utils_tABF51ED79C8665BBD39CC4AD306F8B5B4464CD67  : public RuntimeObject
{
};

// GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::adLoadCallback
	Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0
struct U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0::adLoadCallback
	Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1
struct U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1::adLoadCallback
	Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1::client
	RuntimeObject* ___client_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>
struct Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>
struct Nullable_1_tD9EF87DE17BC8563283D8BCB64EF209BCFE74FD3 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___U3CLoadAdErrorU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdInspectorError
struct AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
};

// GoogleMobileAds.Common.AdInspectorErrorClientEventArgs
struct AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.IAdInspectorErrorClient GoogleMobileAds.Common.AdInspectorErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
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

// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::_client
	RuntimeObject* ____client_1;
};

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB  : public RuntimeObject
{
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t8F4AA13668EB7FF7A5F6F369845B5280BBE0BF17* ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_tD9EF87DE17BC8563283D8BCB64EF209BCFE74FD3 ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::<TestDeviceIds>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CTestDeviceIdsU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration::<SameAppKeyEnabled>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CSameAppKeyEnabledU3Ek__BackingField_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.AdInspectorError>
struct Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>
struct Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Common.AppState>
struct Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.LoadAdError>
struct Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t6D103D50D92EED8806671DABC525008F7D560A68  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC  : public MulticastDelegate_t
{
};

// System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo>
struct Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Int32 GoogleMobileAds.Api.AdError::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdError_GetCode_mA116D849D016CBD0DD09858416FBDAE26A5DE211 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AppOpenAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_RegisterAdEvents_m942A3CA51674726CDD0C3F6A9BDA83C0EF721B53 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_mC3285F87E7CF1CDD7E8646879D08F71323457FFB (U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9 (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1__ctor_mAE55EECAFFFC25B7FCD9ADB855E0EA09805683FF (U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.AppOpenAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppOpenAd_CanShowAd_m822270A031DF79CB0ED3AD52240BC4100F0DFAB1 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64 (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* __this, RuntimeObject* ___sender0, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*, RuntimeObject*, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.AdError>::Invoke(T)
inline void Action_1_Invoke_m1DAFB4BD1D193364D17C992CA9C35E091BEDBA56_inline (Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*, AdError_tA3BF7518349885A73447524367693A096B3DD1AE*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::get_AdValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.AdValue>::Invoke(T)
inline void Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline (Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void GoogleMobileAds.Api.AppOpenAd::.ctor(GoogleMobileAds.Common.IAppOpenAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd__ctor_m8712CC46DE91737B91B231D8A52D26075994A20C (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.LoadAdError>::Invoke(T1,T2)
inline void Action_2_Invoke_mAE86532DDFD293355C5CB21513641064870AC86D_inline (Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580* __this, AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* ___arg10, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580*, AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(T1,T2)
inline void Action_2_Invoke_m0D4AB9693F9CC5993B5401DFE046C815BBD54CF7_inline (Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* __this, AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* ___arg10, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8*, AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*, RuntimeObject*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.LoadAdError>::Invoke(T)
inline void Action_1_Invoke_m53B66B17CE3490A35AE80626192D1662CFAF9E25_inline (Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_RegisterAdEvents_m9FB37519C9D7FB812BAA0363DEE49DA56F858309 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m86A02532C966283C1C91EEBB986FAF423FB6FC5C (U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(GoogleMobileAds.Common.IInterstitialClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_mF55A705F3B7BB445AE117E57F55A8B8D810854CA (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>::Invoke(T1,T2)
inline void Action_2_Invoke_mBEA6A0194FD6CCEAB0C00413E687A343A847BACB_inline (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* __this, InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___arg10, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68*, InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A (const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3 (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_m76A4DE8CDB2F00244DF305ACE913CDA65750ADEE (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenAdInspectorU3Ec__AnonStorey1__ctor_m735FFA3170ED94622B9C7E17D043F0B11426269F (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3A854622750D4DC48A4BA5095AE96640DBFCF39F (Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(T)
inline void Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// GoogleMobileAds.Common.IAdInspectorErrorClient GoogleMobileAds.Common.AdInspectorErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline (AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdInspectorError::.ctor(GoogleMobileAds.Common.IAdInspectorErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdInspectorError__ctor_mE93C77EEEF4D946EB574A8E22DD786CAE2071519 (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.AdInspectorError>::Invoke(T)
inline void Action_1_Invoke_mC10C27E17B39A65041E89C2ACCE108E9A6C2FD0D_inline (Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* __this, AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D*, AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void GoogleMobileAds.Api.AdapterResponseInfo::.ctor(GoogleMobileAds.Common.IAdapterResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdapterResponseInfo__ctor_m9692EF719FA2336B7A3FADA71D10D4348D8E4723 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GoogleMobileAds.Api.AdapterResponseInfo>::.ctor()
inline void List_1__ctor_mDB6B32B23478B46CFB7D8F7265C9F79A554A4E13 (List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5AA55D2B703855DCCB552F243696B1214E0C5E28 (Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_m397193C0D965E2D82205D4CF028D83469912547A (RuntimeObject* ___source0, Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<GoogleMobileAds.Api.AdapterResponseInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E* Enumerable_ToList_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_mF9C9C971C7695486D2FDE2E0553208214733AFAF (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_RegisterAdEvents_m87AD72161981214787EB23E154912B7576320C44 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m811853FCD1B2648F4113B428D255007083B1DDEA (U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.RewardedAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_CanShowAd_m6DFCA02D9029DADED78F05E9590366781FCFFBC6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146 (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m8B60E1EAE8DD8802908DF7398D18814BD5F2F903_inline (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.Reward>::Invoke(T)
inline void Action_1_Invoke_mD16ED15700A9B573C44A2A4CEF4CA51CACA79DCE_inline (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(GoogleMobileAds.Common.IRewardedAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m25C00373D1190A96D49AE296BB1F51480DAF6340 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>::Invoke(T1,T2)
inline void Action_2_Invoke_mF6DAD8C7A08A67309D74DB8AF8A22DE7C2B4D8EC_inline (Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* __this, RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* ___arg10, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418*, RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_RegisterAdEvents_mDDD067D0EA422486BB2BFC590E8D457C5F9EDCD4 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m72D0D4C8650D2D70F35636BEB5903C21DD1ECB85 (U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1__ctor_m8BE812F16F61C13810628DB2890D91353404E217 (U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.RewardedInterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedInterstitialAd_CanShowAd_m374F4E205E398A48456BEC924CAA5DDD3A443CB0 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::.ctor(GoogleMobileAds.Common.IRewardedInterstitialAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.LoadAdError>::Invoke(T1,T2)
inline void Action_2_Invoke_m0CAC4772DC502A0F8D7DE0FED1691A7CE938A069_inline (Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E* __this, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* ___arg10, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E*, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(T1,T2)
inline void Action_2_Invoke_m81A3571679D652C4F1924D55802D093169D12479_inline (Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* __this, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* ___arg10, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36*, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
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
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->____client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_0), (void*)L_0);
		return;
	}
}
// System.Int32 GoogleMobileAds.Api.AdError::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdError_GetCode_mA116D849D016CBD0DD09858416FBDAE26A5DE211 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 GoogleMobileAds.Common.IAdErrorClient::GetCode() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdError::GetDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_GetDomain_m5F044523940454684B989FEC18A398BE0B8A46CD (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String GoogleMobileAds.Common.IAdErrorClient::GetDomain() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdError::GetMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_GetMessage_m1D90CEA0A4CE678016C5D06D73C3F111D6BA370C (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String GoogleMobileAds.Common.IAdErrorClient::GetMessage() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdError::GetCause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdError_tA3BF7518349885A73447524367693A096B3DD1AE* AdError_GetCause_m6BC6B46849DC11860E4C6A172CC9C690846A2934 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.IAdErrorClient::GetCause() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		G_B3_0 = ((AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)(NULL));
		goto IL_0028;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->____client_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.IAdErrorClient::GetCause() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_3);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_5 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_5, L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		return G_B3_0;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_mD2183315C9A1F6504900AD43F22BB385765FA9F9 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::get_AdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdError_tA3BF7518349885A73447524367693A096B3DD1AE* AdErrorEventArgs_get_AdError_mDEDFB0E86705280AB359EAA0F2DA2ADD8E233EED (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = __this->___U3CAdErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___value0;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdErrorEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdErrorEventArgs_get_Message_mDB276E3541BD8EE06CCF258B58D9C436128515F5 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_Message_m91632BD975B8A4CB7C85D154346F3D993CBD805D (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_LoadAdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = __this->___U3CLoadAdErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___value0;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
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
// System.Void GoogleMobileAds.Api.AdInspectorError::.ctor(GoogleMobileAds.Common.IAdInspectorErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdInspectorError__ctor_mE93C77EEEF4D946EB574A8E22DD786CAE2071519 (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(__this, L_0, NULL);
		return;
	}
}
// GoogleMobileAds.Api.AdInspectorError/AdInspectorErrorCode GoogleMobileAds.Api.AdInspectorError::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdInspectorError_GetCode_m318A8A53348DA35D23F9B6E3E88E7C2EE6940186 (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = AdError_GetCode_mA116D849D016CBD0DD09858416FBDAE26A5DE211(__this, NULL);
		return (int32_t)(L_0);
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
// System.Void GoogleMobileAds.Api.AdapterResponseInfo::.ctor(GoogleMobileAds.Common.IAdapterResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdapterResponseInfo__ctor_m9692EF719FA2336B7A3FADA71D10D4348D8E4723 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->____client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_0), (void*)L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdapterResponseInfo::get_AdapterClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdapterResponseInfo_get_AdapterClassName_mF73BD676C31658D2026CC188F34792F6BA77B1B7 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdapterClassName() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdapterResponseInfo::get_AdSourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdapterResponseInfo_get_AdSourceId_m0AA51986A90B81EDE13524AB2FFC8D73E93AB4E8 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdSourceId() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdapterResponseInfo::get_AdSourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdapterResponseInfo_get_AdSourceName_m8735D2D7084DD2D23DABF7422626BCBB3FE69E36 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdSourceName() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdapterResponseInfo::get_AdSourceInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdapterResponseInfo_get_AdSourceInstanceId_m0594D81CD394F674F55534BB63AF8596AC1959A5 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdSourceInstanceId() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdapterResponseInfo::get_AdSourceInstanceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdapterResponseInfo_get_AdSourceInstanceName_mE9CBE67ACA7C0EFE95792487EE02460505D7A9E7 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdSourceInstanceName() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdapterResponseInfo::get_AdUnitMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* AdapterResponseInfo_get_AdUnitMapping_m9E0219076A0E3216770458CE8BD83EFF19D1CE38 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(6 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdUnitMapping() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdapterResponseInfo::get_AdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdError_tA3BF7518349885A73447524367693A096B3DD1AE* AdapterResponseInfo_get_AdError_m99DC7DB0529F58988E2CC046270B6A485DFC0DC9 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdError() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)(NULL));
		goto IL_0026;
	}

IL_0016:
	{
		RuntimeObject* L_2 = __this->____client_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.IAdapterResponseInfoClient::get_AdError() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_2);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_4 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_4, L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Int64 GoogleMobileAds.Api.AdapterResponseInfo::get_LatencyMillis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AdapterResponseInfo_get_LatencyMillis_m7B53DD305F863CC6199F63ED26BF38CAD6B46EB7 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = InterfaceFuncInvoker0< int64_t >::Invoke(7 /* System.Int64 GoogleMobileAds.Common.IAdapterResponseInfoClient::get_LatencyMillis() */, IAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdapterResponseInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdapterResponseInfo_ToString_m9F3EC4C1D5DD5A705CB1AC3914DF831B155783E8 (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.AppOpenAd::.ctor(GoogleMobileAds.Common.IAppOpenAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd__ctor_m8712CC46DE91737B91B231D8A52D26075994A20C (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____canShowAd_12 = (bool)1;
		RuntimeObject* L_0 = ___client0;
		__this->____client_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_11), (void*)L_0);
		AppOpenAd_RegisterAdEvents_m942A3CA51674726CDD0C3F6A9BDA83C0EF721B53(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdPaid_mC6A173F1C25378D51E0CA1EE26AC1D175E50918D (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdPaid_mD7AE74221EA71AA54EEAA6F6B958FE68D69087AC (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdClicked_m5AC8D58C568C6B5AAAF8916DBABFF805B62904BA (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdClicked_mE3690F2ABF82346D8945990FD02DF3BE842405DB (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdImpressionRecorded_m55A3EAAD5487C15D84F17B6BA8C74C1FDF35F971 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdImpressionRecorded_mB65E8705D943335F5833F2546FD1BEC1E8A38F4C (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdFullScreenContentOpened_m5BF498515C6EE855420C3C368C62385C2BF7F7BA (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdFullScreenContentOpened_m522500F8D3143BB63D7E6227C22BE875B4E98B6A (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdFullScreenContentClosed_m9AFCAA1DF7CF8CCD46B3E62169ADA2B02D49C2CD (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdFullScreenContentClosed_m4C89A4830D5EF6A6A51F0E163ED8048036B01546 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdFullScreenContentFailed_m4D52DC4F7D85A0DA305BAAAD27031C528006CE44 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdFullScreenContentFailed_m578143F55D37FE0B507C12EBDF506B9DC2B97570 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnPaidEvent_mB2908CB8DC8DB58F74C5706E666DF9F7B6104EF9 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_6);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnPaidEvent_mC32EB90159BE9CB58975AF5432B749896349E025 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_6);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdFailedToPresentFullScreenContent_mBF74E44D7DD28CE830BA2B7CF1F2B9DA9300D7B3 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdFailedToPresentFullScreenContent_m65D03AFC2D407959E18F5F7304BF9C14B53D9DCB (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdDidPresentFullScreenContent_mB83D5B0AA2A92898F34BB5049A02297BDC2EBA36 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdDidPresentFullScreenContent_m887A8CFDEC8A76F471A99FB82EE77892F0C7218E (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdDidDismissFullScreenContent_m469DEC3185652A48925AF5731B037D4FCFB9FA2C (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdDidDismissFullScreenContent_m95B78BFD7C7C240859B9D02873BC40C8C7B1D7F7 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdDidRecordImpression_m55C6C541D103B32BA778D168BC1E67BB5A2EE829 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdDidRecordImpression_m864A776B21D97AACE9FE4BF6838E3709D16F7546 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::Load(System.String,UnityEngine.ScreenOrientation,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_Load_mDE74F09EC49416A85B2E39A2566D0765D8C4D5E0 (String_t* ___adUnitId0, int32_t ___orientation1, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request2, Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580* ___adLoadCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m49C42950EE386C1E4C6044643D9521A264974CF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mBB7E2D5335953D85AE80D33F59EDC5B3B2A455F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* V_0 = NULL;
	{
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_0 = (U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC*)il2cpp_codegen_object_new(U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadU3Ec__AnonStorey0__ctor_mC3285F87E7CF1CDD7E8646879D08F71323457FFB(L_0, NULL);
		V_0 = L_0;
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_1 = V_0;
		Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580* L_2 = ___adLoadCallback3;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_3 = V_0;
		NullCheck(L_3);
		Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580* L_4 = L_3->___adLoadCallback_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD, NULL);
		return;
	}

IL_0023:
	{
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.IClientFactory::BuildAppOpenAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->___client_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___client_1), (void*)L_7);
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___client_1;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::CreateAppOpenAd() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_9);
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, L_12, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m49C42950EE386C1E4C6044643D9521A264974CF3_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_11, L_13);
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___client_1;
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_16 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_17 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_17, L_16, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mBB7E2D5335953D85AE80D33F59EDC5B3B2A455F3_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_15, L_17);
		U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___client_1;
		String_t* L_20 = ___adUnitId0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_21 = ___request2;
		int32_t L_22 = ___orientation1;
		NullCheck(L_19);
		InterfaceActionInvoker3< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D*, int32_t >::Invoke(17 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest,UnityEngine.ScreenOrientation) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_19, L_20, L_21, L_22);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::LoadAd(System.String,UnityEngine.ScreenOrientation,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_LoadAd_m7C5D813171D0A5587B640ADCFC830A5478759CDC (String_t* ___adUnitID0, int32_t ___orientation1, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request2, Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* ___adLoadCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_m6137CE3D3151DDE4CC31259F6AF851409E743EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_mC086AA16AB7EC7D187E44822507439F40B85ECD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* V_0 = NULL;
	{
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_0 = (U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F*)il2cpp_codegen_object_new(U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAdU3Ec__AnonStorey1__ctor_mAE55EECAFFFC25B7FCD9ADB855E0EA09805683FF(L_0, NULL);
		V_0 = L_0;
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_1 = V_0;
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_2 = ___adLoadCallback3;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_3 = V_0;
		NullCheck(L_3);
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_4 = L_3->___adLoadCallback_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD, NULL);
		return;
	}

IL_0023:
	{
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.IClientFactory::BuildAppOpenAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->___client_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___client_1), (void*)L_7);
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___client_1;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::CreateAppOpenAd() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_9);
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, L_12, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_m6137CE3D3151DDE4CC31259F6AF851409E743EF4_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_11, L_13);
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___client_1;
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_16 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_17 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_17, L_16, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_mC086AA16AB7EC7D187E44822507439F40B85ECD9_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_15, L_17);
		U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___client_1;
		String_t* L_20 = ___adUnitID0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_21 = ___request2;
		int32_t L_22 = ___orientation1;
		NullCheck(L_19);
		InterfaceActionInvoker3< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D*, int32_t >::Invoke(17 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest,UnityEngine.ScreenOrientation) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_19, L_20, L_21, L_22);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.AppOpenAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppOpenAd_CanShowAd_m822270A031DF79CB0ED3AD52240BC4100F0DFAB1 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____client_11;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->____canShowAd_12;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean GoogleMobileAds.Api.AppOpenAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppOpenAd_IsLoaded_m3AA5CE570C21FEAA4AF4939B3ABF26267F5C23FD (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AppOpenAd_CanShowAd_m822270A031DF79CB0ED3AD52240BC4100F0DFAB1(__this, NULL);
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_Show_m2037E04CE3FAE7C677CEA702F39C20390CAB9024 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AppOpenAd_CanShowAd_m822270A031DF79CB0ED3AD52240BC4100F0DFAB1(__this, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____canShowAd_12 = (bool)0;
		RuntimeObject* L_1 = __this->____client_11;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::Show() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_Destroy_mD1F8CE10A274F9681F7D7FF7A591781F6A5E5351 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____canShowAd_12 = (bool)0;
		RuntimeObject* L_0 = __this->____client_11;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_11;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(20 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::DestroyAppOpenAd() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.AppOpenAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* AppOpenAd_GetResponseInfo_m60DD8FD18D76E5454984F0DA63E6F485432898CD (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_11;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->____client_11;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(19 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IAppOpenAdClient::GetResponseInfoClient() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_1);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_3 = (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)il2cpp_codegen_object_new(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD(L_3, L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_RegisterAdEvents_m942A3CA51674726CDD0C3F6A9BDA83C0EF721B53 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CRegisterAdEventsU3Em__0_m27A1F8B773ED5CDE8007F65DFDAFD05B60381651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CRegisterAdEventsU3Em__1_m9C4BA7627EDA74D79F3EC01511390054892404AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CRegisterAdEventsU3Em__2_m699D6740C2F6D1033E611DC12965B18B303A4B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CRegisterAdEventsU3Em__3_mB562EF2E861A7E54D09DE5A4A2A0F7157D4A0BAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CRegisterAdEventsU3Em__4_m58B88A7402B3A92907539DAD22DE4315A4821F14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CRegisterAdEventsU3Em__5_mCE9D3247F89E79E93ABF6149E199EFF030934955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_11;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)AppOpenAd_U3CRegisterAdEventsU3Em__0_m27A1F8B773ED5CDE8007F65DFDAFD05B60381651_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdClicked(System.Action) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_11;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)AppOpenAd_U3CRegisterAdEventsU3Em__1_m9C4BA7627EDA74D79F3EC01511390054892404AC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_11;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)AppOpenAd_U3CRegisterAdEventsU3Em__2_m699D6740C2F6D1033E611DC12965B18B303A4B2F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_11;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)AppOpenAd_U3CRegisterAdEventsU3Em__3_mB562EF2E861A7E54D09DE5A4A2A0F7157D4A0BAE_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____client_11;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_9, __this, (intptr_t)((void*)AppOpenAd_U3CRegisterAdEventsU3Em__4_m58B88A7402B3A92907539DAD22DE4315A4821F14_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->____client_11;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_11 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_11, __this, (intptr_t)((void*)AppOpenAd_U3CRegisterAdEventsU3Em__5_mCE9D3247F89E79E93ABF6149E199EFF030934955_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<RegisterAdEvents>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CRegisterAdEventsU3Em__0_m27A1F8B773ED5CDE8007F65DFDAFD05B60381651 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdClicked_1;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<RegisterAdEvents>m__1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CRegisterAdEventsU3Em__1_m9C4BA7627EDA74D79F3EC01511390054892404AC (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidDismissFullScreenContent_9;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentClosed_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentClosed_4;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<RegisterAdEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CRegisterAdEventsU3Em__2_m699D6740C2F6D1033E611DC12965B18B303A4B2F (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidPresentFullScreenContent_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentOpened_3;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentOpened_3;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<RegisterAdEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CRegisterAdEventsU3Em__3_mB562EF2E861A7E54D09DE5A4A2A0F7157D4A0BAE (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_10;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_10;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdImpressionRecorded_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdImpressionRecorded_2;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<RegisterAdEvents>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CRegisterAdEventsU3Em__4_m58B88A7402B3A92907539DAD22DE4315A4821F14 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_0, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_2 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = __this->___OnAdFailedToPresentFullScreenContent_7;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToPresentFullScreenContent_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = __this->___OnAdFullScreenContentFailed_5;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_10 = __this->___OnAdFullScreenContentFailed_5;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m1DAFB4BD1D193364D17C992CA9C35E091BEDBA56_inline(L_10, L_11, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<RegisterAdEvents>m__5(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CRegisterAdEventsU3Em__5_mCE9D3247F89E79E93ABF6149E199EFF030934955 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_6;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = __this->___OnAdPaid_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = __this->___OnAdPaid_0;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_5 = ___args1;
		NullCheck(L_5);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6;
		L_6 = AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
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
// System.Void GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_mC3285F87E7CF1CDD7E8646879D08F71323457FFB (U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m49C42950EE386C1E4C6044643D9521A264974CF3 (U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580* L_0 = __this->___adLoadCallback_0;
		RuntimeObject* L_1 = __this->___client_1;
		AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* L_2 = (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*)il2cpp_codegen_object_new(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppOpenAd__ctor_m8712CC46DE91737B91B231D8A52D26075994A20C(L_2, L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_mAE86532DDFD293355C5CB21513641064870AC86D_inline(L_0, L_2, (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)NULL, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd/<Load>c__AnonStorey0::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mBB7E2D5335953D85AE80D33F59EDC5B3B2A455F3 (U3CLoadU3Ec__AnonStorey0_tD96E499F21AE2084827FD476E9C0D076D9A2FDCC* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___args1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		Action_2_t18685E5725B772AE298BCD6D1DC4E0B533F30580* L_3 = __this->___adLoadCallback_0;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_4 = V_0;
		NullCheck(L_3);
		Action_2_Invoke_mAE86532DDFD293355C5CB21513641064870AC86D_inline(L_3, (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*)NULL, L_4, NULL);
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
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1__ctor_mAE55EECAFFFC25B7FCD9ADB855E0EA09805683FF (U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_m6137CE3D3151DDE4CC31259F6AF851409E743EF4 (U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_0 = __this->___adLoadCallback_0;
		RuntimeObject* L_1 = __this->___client_1;
		AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* L_2 = (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*)il2cpp_codegen_object_new(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppOpenAd__ctor_m8712CC46DE91737B91B231D8A52D26075994A20C(L_2, L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_m0D4AB9693F9CC5993B5401DFE046C815BBD54CF7_inline(L_0, L_2, (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)NULL, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey1::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_mC086AA16AB7EC7D187E44822507439F40B85ECD9 (U3CLoadAdU3Ec__AnonStorey1_tDD58F8EBDA73B8041649A54A00BA438D7634229F* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___args1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_3 = __this->___adLoadCallback_0;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_4 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_4, NULL);
		V_1 = L_4;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_6 = V_0;
		NullCheck(L_5);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_5, L_6, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_7 = V_1;
		NullCheck(L_3);
		Action_2_Invoke_m0D4AB9693F9CC5993B5401DFE046C815BBD54CF7_inline(L_3, (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*)NULL, L_7, NULL);
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
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier__cctor_m741EDC54C3A65311800A5B0AC88FAFF6A93A06B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IAppStateEventClient GoogleMobileAds.IClientFactory::BuildAppStateEventClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0), (void*)L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier__ctor_m542F1A36C3B718E6CCC304B43BA9E6FAD12249A4 (AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::add_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier_add_AppStateChanged_m11DAB106CCCE3EF78F377722C46ED63BCCF36704 (Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0;
		Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IAppStateEventClient::add_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>) */, IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::remove_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier_remove_AppStateChanged_m9C6E767D608F2F692DF3BEA4DB4EA9FE615E5364 (Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0;
		Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* >::Invoke(1 /* System.Void GoogleMobileAds.Common.IAppStateEventClient::remove_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>) */, IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___position2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->____client_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_12), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_12;
		String_t* L_3 = ___adUnitId0;
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158*, int32_t >::Invoke(14 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mA9E2DB08311AE9F1D152DAE5A12B521A7C544E26 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->____client_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_12), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_12;
		String_t* L_3 = ___adUnitId0;
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_4 = ___adSize1;
		int32_t L_5 = ___x2;
		int32_t L_6 = ___y3;
		NullCheck(L_2);
		InterfaceActionInvoker4< String_t*, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158*, int32_t, int32_t >::Invoke(15 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,System.Int32,System.Int32) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
		BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnBannerAdLoaded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnBannerAdLoaded_mF3A6AA44B521D6AFF697B4FDF73C02139F1DEAE6 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnBannerAdLoaded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnBannerAdLoaded_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnBannerAdLoaded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnBannerAdLoaded_mAF3A48277FF13423864DFB8A25DB7688F51BEEA9 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnBannerAdLoaded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnBannerAdLoaded_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnBannerAdLoadFailed(System.Action`1<GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnBannerAdLoadFailed_m90B2772E9E91E19DA78644420A09DB4EC190597C (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* V_0 = NULL;
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* V_1 = NULL;
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_0 = __this->___OnBannerAdLoadFailed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C** L_2 = (&__this->___OnBannerAdLoadFailed_1);
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_3 = V_1;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_6 = V_0;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*>(L_2, ((Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*)Castclass((RuntimeObject*)L_5, Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_8 = V_0;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*)L_8) == ((RuntimeObject*)(Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnBannerAdLoadFailed(System.Action`1<GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnBannerAdLoadFailed_m3515C651D8F4110C5C4E0CD28C88478619089635 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* V_0 = NULL;
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* V_1 = NULL;
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_0 = __this->___OnBannerAdLoadFailed_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C** L_2 = (&__this->___OnBannerAdLoadFailed_1);
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_3 = V_1;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_6 = V_0;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*>(L_2, ((Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*)Castclass((RuntimeObject*)L_5, Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_8 = V_0;
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*)L_8) == ((RuntimeObject*)(Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdPaid_m858CE3149B53B281681A4E9C7C930E46D06854BE (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_2);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdPaid_m30EF6252EA371740CE1D133681938296E6DBAC18 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_2);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdClicked_m708C6DA7C5267620EC17923AE9859B8A158BA417 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdClicked_m31C5A67C10902BD8D15671F63348685895712558 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdImpressionRecorded_m1568828D2FC1CBBBECB4700C5E37D0398B485AC9 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdImpressionRecorded_m882B48F9FECF9671DFB7F6D2931E0D52F03879E4 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFullScreenContentOpened_m3577911B72568C9830D7904636CF6748D532B883 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdFullScreenContentOpened_m087AC0AAE31A262A22DC48A5A8F5BDEA8126FA9A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFullScreenContentClosed_m964338C81593C5D8D9A32E8A1AFC6103BCE99C33 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdFullScreenContentClosed_mFA7D52713809C05F1C786349F771F31AEE1F12FF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLoaded_m080F143D61034545D5375B44E3E5165CA444CCE2 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_7);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdLoaded_m02556E436A77DFA3C37CB226DA96A3B7443D65AA (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_7);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_m92D031919F382DE6C7B6C87F0DAB95AB3B8EDD50 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_8);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdFailedToLoad_m3F81D07D144343E62022DDC7DD4735A41DF90B43 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_8);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdOpening_mFF4CE382B9A9C9A9E43F68D23829440F5417459F (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdOpening_m39B2741A9E313BF92336ACE657A27ADE3BCB4891 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdClosed_m1238848F85F63AE1D5FAE380326E9FD246B5752A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdClosed_mC2DF0471CD2D376CBBA7E01D090486B934DF266F (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnPaidEvent_mD5707D472E79CC2F501A5C7FBDF465B82C76C29C (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_11);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnPaidEvent_m0A62885C2E6C8DF2584F115DD9C8FD4AB4A38023 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_11);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.BannerView::get_IsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BannerView_get_IsDestroyed_m21A1CAE85F4ECF32CB845786C65A46EA261A197C (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____client_12;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(19 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1);
		__this->____client_12 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_12), (void*)(RuntimeObject*)NULL);
	}

IL_001d:
	{
		return;
	}
}
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.BannerView::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* BannerView_GetResponseInfo_m9FB398199E74F3AB52D8BF16121E426E9FD06D4C (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(24 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IBannerClient::GetResponseInfoClient() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_3 = (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)il2cpp_codegen_object_new(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD(L_3, L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = ((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)(NULL));
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Single GoogleMobileAds.Api.BannerView::GetHeightInPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BannerView_GetHeightInPixels_m7E9AEE3A333CC8370B35DBF8E8C6ED89EFDEB4B8 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(20 /* System.Single GoogleMobileAds.Common.IBannerClient::GetHeightInPixels() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_001b:
	{
		G_B3_0 = (0.0f);
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Single GoogleMobileAds.Api.BannerView::GetWidthInPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BannerView_GetWidthInPixels_m30250357790E167D473D206B4586A6EA6792A8ED (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(21 /* System.Single GoogleMobileAds.Common.IBannerClient::GetWidthInPixels() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_001b:
	{
		G_B3_0 = (0.0f);
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = ___request0;
		NullCheck(L_1);
		InterfaceActionInvoker1< AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(16 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(17 /* System.Void GoogleMobileAds.Common.IBannerClient::ShowBannerView() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IBannerClient::HideBannerView() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::SetPosition(GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_SetPosition_m4306DC8B9B0FB81BFD3C75795416E620F955114B (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, int32_t ___adPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		int32_t L_2 = ___adPosition0;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(22 /* System.Void GoogleMobileAds.Common.IBannerClient::SetPosition(GoogleMobileAds.Api.AdPosition) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_SetPosition_m86AD73B0E4F31A2DD1B520C0CEEAE100FF23B644 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_12;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(23 /* System.Void GoogleMobileAds.Common.IBannerClient::SetPosition(System.Int32,System.Int32) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_12;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_12;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_3, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_12;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_12;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____client_12;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_9, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->____client_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClicked(System.Action) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->____client_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdImpressionRecorded(System.Action) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_12, L_13);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_7;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_7;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnBannerAdLoaded_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnBannerAdLoaded_0;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___args1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = __this->___OnAdFailedToLoad_8;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_8;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_9 = __this->___OnBannerAdLoadFailed_1;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* L_10 = __this->___OnBannerAdLoadFailed_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m53B66B17CE3490A35AE80626192D1662CFAF9E25_inline(L_10, L_11, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_9;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentOpened_5;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentOpened_5;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_10;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_10;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentClosed_6;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentClosed_6;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_11;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_11;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = __this->___OnAdPaid_2;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = __this->___OnAdPaid_2;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_5 = ___args1;
		NullCheck(L_5);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6;
		L_6 = AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__5_m16FA9EC5112461943D6912C09B316B1D0878581C (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdClicked_3;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__6_m6850799F2427F7E1098F13861874B2C678534643 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_4;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdImpressionRecorded_4;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
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
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
// GoogleMobileAds.Api.AdapterStatus GoogleMobileAds.Api.InitializationStatus::getAdapterStatusForClassName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0* InitializationStatus_getAdapterStatusForClassName_m3AF96768C6F7FDD61FEF47B87AC81024E4BB1E47 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, String_t* ___className0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		String_t* L_1 = ___className0;
		NullCheck(L_0);
		AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0* L_2;
		L_2 = InterfaceFuncInvoker1< AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0*, String_t* >::Invoke(0 /* GoogleMobileAds.Api.AdapterStatus GoogleMobileAds.Common.IInitializationStatusClient::getAdapterStatusForClassName(System.String) */, IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus> GoogleMobileAds.Api.InitializationStatus::getAdapterStatusMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D* InitializationStatus_getAdapterStatusMap_mF3F9583668620A65BB6CD61105146FEFAB32B3E8 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D* L_1;
		L_1 = InterfaceFuncInvoker0< Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D* >::Invoke(1 /* System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus> GoogleMobileAds.Common.IInitializationStatusClient::getAdapterStatusMap() */, IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___adUnitId0;
		__this->____adUnitId_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_14), (void*)L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(GoogleMobileAds.Common.IInterstitialClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_mF55A705F3B7BB445AE117E57F55A8B8D810854CA (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->____client_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_13), (void*)L_0);
		__this->____canShowAd_15 = (bool)1;
		InterstitialAd_RegisterAdEvents_m9FB37519C9D7FB812BAA0363DEE49DA56F858309(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdPaid_m3B50D1F1600BDC3552B5A4908A49F5FEA7FFD1A3 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdPaid_m718C856E51DBFBB28E130954FAE8FD20EC5301ED (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClicked_mF34B521ECA00D3A4F8E5D977E4BEC134FB95686B (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClicked_m2390E473B8A686F3A862D6DBC18F49472DD2ACBD (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdImpressionRecorded_mFB0CE6BF4F2BF99C63D231BBE9B4BF120B11679D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdImpressionRecorded_mF0CF506C63FA42DF112C20B00541DDF9B8434FA8 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFullScreenContentOpened_mB5E6127049339D2D6BB4ACB8DBBE03A68C4A09AF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFullScreenContentOpened_mC6B904E24552B94D85EF1949A475C986F0636179 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFullScreenContentClosed_m752CF051CA5A0DA7F958D5C3A1813F30D09030E7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFullScreenContentClosed_m51AAA11D9E43921F8E442BC3CC4888117AA7A0E5 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFullScreenContentFailed_m0A88B3B74B846FCA5CF7BB461E8ABF98FC269C85 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFullScreenContentFailed_mED3D4983E4BF4AA5FB76264B5BA9693C8BF3D170 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m91C35A6E06656E5654EF283678A7865C238BB4FC (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_7);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_mE3B77178758E9D191422324F4529BE71B59724C9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_7);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_m9BDE013724D1AC139CB1BA5B926342F70BF677D2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_m1ACD7753DE0DF8499C6BB968EF86274F0D57B1C2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToShow_m18C6774092B30031238243EC60776794B06989E4 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_10);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToShow_mF3FAD3D6907C027908D1A9B6C3D1CACBD0C1564C (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_10);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdDidRecordImpression_m7AE5EC0E482543630B476FDE4CA1BFB9B229E775 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdDidRecordImpression_mA2A6EC524857CD0EE43FDD33BFD5A2A855D70905 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnPaidEvent_m59DCB06E8627578CF944D5AD153D8DEE8665D92D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_12);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnPaidEvent_m505066A3D988917FCB136E193C9BC34AB372FF9F (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_12);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Load(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Load_m7582DD601991C297C7E7E61BBE53B639466A73A1 (String_t* ___adUnitId0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* ___adLoadCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m631331ABD2466F9B2AE59D8DFF7723E436983B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mCDAD16B0470ADCBA74835F69B270E5174950D92B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* V_0 = NULL;
	{
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_0 = (U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6*)il2cpp_codegen_object_new(U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadU3Ec__AnonStorey0__ctor_m86A02532C966283C1C91EEBB986FAF423FB6FC5C(L_0, NULL);
		V_0 = L_0;
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_1 = V_0;
		Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* L_2 = ___adLoadCallback2;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_3 = V_0;
		NullCheck(L_3);
		Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* L_4 = L_3->___adLoadCallback_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD, NULL);
		return;
	}

IL_0023:
	{
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->___client_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___client_1), (void*)L_7);
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___client_1;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_9);
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, L_12, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m631331ABD2466F9B2AE59D8DFF7723E436983B20_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_11, L_13);
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___client_1;
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_16 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_17 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_17, L_16, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mCDAD16B0470ADCBA74835F69B270E5174950D92B_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_15, L_17);
		U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___client_1;
		String_t* L_20 = ___adUnitId0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_21 = ___request1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(17 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->____client_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_13), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_13;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_4, __this, (intptr_t)((void*)InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = __this->____client_13;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_6, __this, (intptr_t)((void*)InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = __this->____client_13;
		String_t* L_8 = __this->____adUnitId_14;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_9 = ___request0;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(17 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____client_13;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->____canShowAd_15;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E(__this, NULL);
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E(__this, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____canShowAd_15 = (bool)0;
		RuntimeObject* L_1 = __this->____client_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_13;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____canShowAd_15 = (bool)0;
		RuntimeObject* L_1 = __this->____client_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(20 /* System.Void GoogleMobileAds.Common.IInterstitialClient::DestroyInterstitial() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.InterstitialAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* InterstitialAd_GetResponseInfo_m6F3CB969DB9E63C2DAA0E759CC83D52D31E07171 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_13;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_13;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(19 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IInterstitialClient::GetResponseInfoClient() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_1);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_3 = (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)il2cpp_codegen_object_new(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD(L_3, L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = ((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)(NULL));
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_RegisterAdEvents_m9FB37519C9D7FB812BAA0363DEE49DA56F858309 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdClicked(System.Action) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____client_13;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_9, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->____client_13;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_11 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_11, __this, (intptr_t)((void*)InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<LoadAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CLoadAdU3Em__0_mBCEAD2B5D7FE03BBCACABB9D4D3223CAF8F7C2D2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____canShowAd_15 = (bool)1;
		InterstitialAd_RegisterAdEvents_m9FB37519C9D7FB812BAA0363DEE49DA56F858309(__this, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_6;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<LoadAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CLoadAdU3Em__1_m3CC436AA3BB31E362D0D69C609FD5C52B50E20F7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = __this->___OnAdFailedToLoad_7;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_7;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__2_m40909543667D6EDCCB3BA27504286C3C3F817401 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdClicked_1;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__3_m47237067EBB70CD501CC51CB495AEF7AA00C8194 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_9;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentClosed_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentClosed_4;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__4_m41EC295C543150501E9CBC5912690B08377C9F7A (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentOpened_3;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentOpened_3;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__5_m3945AC0E913EEFC7DF10B2E1B1FAA0303F0D9090 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_11;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_11;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdImpressionRecorded_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdImpressionRecorded_2;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__6(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__6_mA7D4E21158B69464F0F468ECAC23E372AC04AAF0 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_0, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_2 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = __this->___OnAdFailedToShow_10;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_10;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = __this->___OnAdFullScreenContentFailed_5;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_10 = __this->___OnAdFullScreenContentFailed_5;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m1DAFB4BD1D193364D17C992CA9C35E091BEDBA56_inline(L_10, L_11, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<RegisterAdEvents>m__7(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CRegisterAdEventsU3Em__7_m3896A3F4FCFBA6B21B00A848528757B9AC13ECD0 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_12;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_12;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = __this->___OnAdPaid_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = __this->___OnAdPaid_0;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_5 = ___args1;
		NullCheck(L_5);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6;
		L_6 = AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
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
// System.Void GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m86A02532C966283C1C91EEBB986FAF423FB6FC5C (U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m631331ABD2466F9B2AE59D8DFF7723E436983B20 (U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* L_0 = __this->___adLoadCallback_0;
		RuntimeObject* L_1 = __this->___client_1;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_2 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)il2cpp_codegen_object_new(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InterstitialAd__ctor_mF55A705F3B7BB445AE117E57F55A8B8D810854CA(L_2, L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_mBEA6A0194FD6CCEAB0C00413E687A343A847BACB_inline(L_0, L_2, (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)NULL, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd/<Load>c__AnonStorey0::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mCDAD16B0470ADCBA74835F69B270E5174950D92B (U3CLoadU3Ec__AnonStorey0_t0A670E82EC373473D0DFD058F62D65E411B396F6* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* L_3 = __this->___adLoadCallback_0;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_4 = V_0;
		NullCheck(L_3);
		Action_2_Invoke_mBEA6A0194FD6CCEAB0C00413E687A343A847BACB_inline(L_3, (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)NULL, L_4, NULL);
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
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(__this, L_0, NULL);
		RuntimeObject* L_1 = ___client0;
		__this->____client_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_1), (void*)L_1);
		return;
	}
}
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.LoadAdError::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* LoadAdError_GetResponseInfo_m50EF140DF1B8D6E9AD02ED7EF4F0B1548A50652C (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.ILoadAdErrorClient::GetResponseInfoClient() */, ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_2 = (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)il2cpp_codegen_object_new(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD(L_2, L_1, NULL);
		return L_2;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mC2DBA6C870EEBF993492FF04A29F4AE567D45C53 (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____client_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14(NULL);
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_1 = (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5*)il2cpp_codegen_object_new(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10(L_1, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2), (void*)L_1);
	}

IL_0014:
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_2 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_0 = (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E*)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_1 = V_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->___initCompleteAction_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___initCompleteAction_0), (void*)L_2);
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_3;
		L_3 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___client_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_5 = V_0;
		Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* L_6 = (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*)il2cpp_codegen_object_new(Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3(L_6, L_5, (intptr_t)((void*)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_4, L_6);
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_m76A4DE8CDB2F00244DF305ACE913CDA65750ADEE(NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::DisableMediationInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_DisableMediationInitialization_m2ED0577236796274DDA5AB6A865669E013262821 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::DisableMediationInitialization() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetApplicationMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetApplicationMuted_m267D8100F87D613627A627DFB53E8A0D48C92C8A (bool ___muted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		bool L_2 = ___muted0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetApplicationMuted(System.Boolean) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetRequestConfiguration_m1F0110671038CF67255ADAA3CFDB4CFC6E1E7AF5 (RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* ___requestConfiguration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* L_2 = ___requestConfiguration0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* >::Invoke(7 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.MobileAds::GetRequestConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* MobileAds_GetRequestConfiguration_m8BA2E9E3186E0AA8F3D0FD6E9D643D32A995430D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* L_2;
		L_2 = InterfaceFuncInvoker0< RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* >::Invoke(8 /* GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Common.IMobileAdsClient::GetRequestConfiguration() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetApplicationVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetApplicationVolume_mB5DDE1F385743EA7E66A64ED250081A91B4C4AE1 (float ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		float L_2 = ___volume0;
		NullCheck(L_1);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetApplicationVolume(System.Single) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetiOSAppPauseOnBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetiOSAppPauseOnBackground_m2626F076EEDF748681C27AC832E79AC9E93756E7 (bool ___pause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		bool L_2 = ___pause0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetiOSAppPauseOnBackground(System.Boolean) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::OpenAdInspector(System.Action`1<GoogleMobileAds.Api.AdInspectorError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_OpenAdInspector_m82664E9F13F8B0373A8529EE41F5295C3F2ECA70 (Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* ___adInspectorClosedAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* V_0 = NULL;
	{
		U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* L_0 = (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29*)il2cpp_codegen_object_new(U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenAdInspectorU3Ec__AnonStorey1__ctor_m735FFA3170ED94622B9C7E17D043F0B11426269F(L_0, NULL);
		V_0 = L_0;
		U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* L_1 = V_0;
		Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* L_2 = ___adInspectorClosedAction0;
		NullCheck(L_1);
		L_1->___adInspectorClosedAction_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adInspectorClosedAction_0), (void*)L_2);
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_3;
		L_3 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___client_0;
		U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* L_5 = V_0;
		Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3* L_6 = (Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3*)il2cpp_codegen_object_new(Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m3A854622750D4DC48A4BA5095AE96640DBFCF39F(L_6, L_5, (intptr_t)((void*)U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3* >::Invoke(9 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::OpenAdInspector(System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_4, L_6);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = il2cpp_codegen_get_type(L_3, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var);
		V_1 = L_4;
		Type_t* L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_5, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		return L_7;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetClientFactory(GoogleMobileAds.IClientFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetClientFactory_mE0A12775193F8C030FE9AD801FB1369CDA2434BB (RuntimeObject* ___clientFactory0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___clientFactory0;
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1), (void*)L_0);
		return;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Single GoogleMobileAds.Api.MobileAds/Utils::GetDeviceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_GetDeviceScale_m7C7E5A26369A7559001C4C9B39F06587211A5C8F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single GoogleMobileAds.Common.IMobileAdsClient::GetDeviceScale() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Int32 GoogleMobileAds.Api.MobileAds/Utils::GetDeviceSafeWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetDeviceSafeWidth_m2A67365794C45FB7BE2D557C9E9CE23E3FD6B3A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 GoogleMobileAds.Common.IMobileAdsClient::GetDeviceSafeWidth() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return L_2;
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
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = __this->___initCompleteAction_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = __this->___initCompleteAction_0;
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* L_3 = (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*)il2cpp_codegen_object_new(InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15(L_3, L_2, NULL);
		NullCheck(L_1);
		Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline(L_1, L_3, NULL);
	}

IL_001c:
	{
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
// System.Void GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenAdInspectorU3Ec__AnonStorey1__ctor_m735FFA3170ED94622B9C7E17D043F0B11426269F (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::<>m__0(GoogleMobileAds.Common.AdInspectorErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* __this, AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* V_0 = NULL;
	{
		Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* L_0 = __this->___adInspectorClosedAction_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		V_0 = (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D*)NULL;
		AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* L_4 = ___args0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline(L_4, NULL);
		AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* L_6 = (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D*)il2cpp_codegen_object_new(AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AdInspectorError__ctor_mE93C77EEEF4D946EB574A8E22DD786CAE2071519(L_6, L_5, NULL);
		V_0 = L_6;
	}

IL_002a:
	{
		Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* L_7 = __this->___adInspectorClosedAction_0;
		AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* L_8 = V_0;
		NullCheck(L_7);
		Action_1_Invoke_mC10C27E17B39A65041E89C2ACCE108E9A6C2FD0D_inline(L_7, L_8, NULL);
	}

IL_0036:
	{
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
// System.Void GoogleMobileAds.Api.ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->____client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_0), (void*)L_0);
		return;
	}
}
// GoogleMobileAds.Api.AdapterResponseInfo GoogleMobileAds.Api.ResponseInfo::GetLoadedAdapterResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* ResponseInfo_GetLoadedAdapterResponseInfo_m0FDEBCC28D3CFBD7EE7C57CE320A6A56F077820E (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IAdapterResponseInfoClient GoogleMobileAds.Common.IResponseInfoClient::GetLoadedAdapterResponseInfo() */, IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var, L_0);
		AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* L_2 = (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA*)il2cpp_codegen_object_new(AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdapterResponseInfo__ctor_m9692EF719FA2336B7A3FADA71D10D4348D8E4723(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAds.Api.AdapterResponseInfo> GoogleMobileAds.Api.ResponseInfo::GetAdapterResponses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E* ResponseInfo_GetAdapterResponses_m7E32E18F1B062185FDD374F42D5C6FCC393B8D1D (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_m397193C0D965E2D82205D4CF028D83469912547A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_mF9C9C971C7695486D2FDE2E0553208214733AFAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB6B32B23478B46CFB7D8F7265C9F79A554A4E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_U3CGetAdapterResponsesU3Em__0_m46EFEAD12D4F2D2D0B65EBEF4EEF2A3DB80A2C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3* V_0 = NULL;
	List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3* G_B4_0 = NULL;
	List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3* >::Invoke(1 /* System.Collections.Generic.List`1<GoogleMobileAds.Common.IAdapterResponseInfoClient> GoogleMobileAds.Common.IResponseInfoClient::GetAdapterResponses() */, IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3* L_2 = V_0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E* L_3 = (List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E*)il2cpp_codegen_object_new(List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mDB6B32B23478B46CFB7D8F7265C9F79A554A4E13(L_3, List_1__ctor_mDB6B32B23478B46CFB7D8F7265C9F79A554A4E13_RuntimeMethod_var);
		return L_3;
	}

IL_0018:
	{
		List_1_tC42FB8115FFFB5E19CF5E2C47ACCB9F48717A7A3* L_4 = V_0;
		Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* L_5 = ((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_StaticFields*)il2cpp_codegen_static_fields_for(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_1;
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_0031;
		}
	}
	{
		Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* L_6 = (Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A*)il2cpp_codegen_object_new(Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m5AA55D2B703855DCCB552F243696B1214E0C5E28(L_6, NULL, (intptr_t)((void*)ResponseInfo_U3CGetAdapterResponsesU3Em__0_m46EFEAD12D4F2D2D0B65EBEF4EEF2A3DB80A2C43_RuntimeMethod_var), NULL);
		((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_StaticFields*)il2cpp_codegen_static_fields_for(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_StaticFields*)il2cpp_codegen_static_fields_for(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_1), (void*)L_6);
		G_B4_0 = G_B3_0;
	}

IL_0031:
	{
		Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* L_7 = ((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_StaticFields*)il2cpp_codegen_static_fields_for(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_1;
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisIAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_m397193C0D965E2D82205D4CF028D83469912547A(G_B4_0, L_7, Enumerable_Select_TisIAdapterResponseInfoClient_tE486EEDC0867E0CF12BD9E57147EFAD2336772D4_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_m397193C0D965E2D82205D4CF028D83469912547A_RuntimeMethod_var);
		List_1_t2303D1B7909F16577B3CB6652AB11709C7FBB13E* L_9;
		L_9 = Enumerable_ToList_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_mF9C9C971C7695486D2FDE2E0553208214733AFAF(L_8, Enumerable_ToList_TisAdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_mF9C9C971C7695486D2FDE2E0553208214733AFAF_RuntimeMethod_var);
		return L_9;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.ResponseInfo::GetResponseExtras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ResponseInfo_GetResponseExtras_mAD628C6E5E6A5385C5982DBAADA43EDCC3571007 (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IResponseInfoClient::GetResponseExtras() */, IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.ResponseInfo::GetMediationAdapterClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_GetMediationAdapterClassName_m53E69D42AA843A4836562538A0C48397EC8B7A8F (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String GoogleMobileAds.Common.IResponseInfoClient::GetMediationAdapterClassName() */, IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.ResponseInfo::GetResponseId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_GetResponseId_mB60B1D5F593197CE584A4FD53FC0B1F6399EA50A (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String GoogleMobileAds.Common.IResponseInfoClient::GetResponseId() */, IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.ResponseInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_ToString_m937551A7EFF5F3C279EF1FB99B59B8163C7294C6 (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// GoogleMobileAds.Api.AdapterResponseInfo GoogleMobileAds.Api.ResponseInfo::<GetAdapterResponses>m__0(GoogleMobileAds.Common.IAdapterResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* ResponseInfo_U3CGetAdapterResponsesU3Em__0_m46EFEAD12D4F2D2D0B65EBEF4EEF2A3DB80A2C43 (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA* L_1 = (AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA*)il2cpp_codegen_object_new(AdapterResponseInfo_t9EB601BF2C45E995747E624506CB85AC6A56C8CA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AdapterResponseInfo__ctor_m9692EF719FA2336B7A3FADA71D10D4348D8E4723(L_1, L_0, NULL);
		return L_1;
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
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___adUnitId0;
		__this->____adUnitId_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_15), (void*)L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(GoogleMobileAds.Common.IRewardedAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m25C00373D1190A96D49AE296BB1F51480DAF6340 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____canShowAd_16 = (bool)1;
		RuntimeObject* L_0 = ___client0;
		__this->____client_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_14), (void*)L_0);
		RewardedAd_RegisterAdEvents_m87AD72161981214787EB23E154912B7576320C44(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdPaid_m292BAC920593D4ABEBEBF931F10D642F37828048 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdPaid_m16C1A0CCC241E747DFA25B1F197CB27FACA8ED4F (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClicked_mC9CD352F1D2043D12EF3BF59F0FBC335F0A664AB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClicked_mB6C21F6EAA306A384682D43D6BD6F292449232F7 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdImpressionRecorded_mD7579F4E71DA0D356ACFBD6F332E3BE0398D581C (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdImpressionRecorded_mAB026FA98750D6C6ED75A9190D18374F73646A98 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFullScreenContentOpened_m90888ED613765C8605BB70CFE0B3C00A840666D6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFullScreenContentOpened_m42DAD1BC8CB02CC59571F4929BCB0F4919BE804B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFullScreenContentClosed_m1D80D5D072FDB7CFBB922CFED5992A1A28EB76F7 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFullScreenContentClosed_mDB17DFCE47160D1917E5282AA96D9555CB6AAF30 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFullScreenContentFailed_mFC50DBBC23574A8C6CA195F91259C699559BC0D9 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFullScreenContentFailed_m27BFDA16911CF1BA56606ACB9B7FBE810CEFF57B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_mD0B12FB2ABBDE30E8732E99B5C779433E6BAD6F6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdLoaded_mE88357C807E78FE3B707A546F9B30B3093C00DE6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_mB26D105153B1DB189E66011AABA403D89431895B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_7);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToLoad_m41BD7D8E336FF59C55E8551EF6050B73524A5304 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_7);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_mD07D6D5227A775A714601F6E5632DE6466956E57 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdOpening_m3E59A310DEA1D14AE4AAE19435A4D24869120DA5 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_mACC55256BAE633DB7C82568589572958F0EC2C50 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClosed_mC8EE3841BDB00AB65A340756A9DBD6F18A167617 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToShow_mC937D2B8125C2FBCDCED3248B6E7930E45D07574 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_10);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToShow_mE8F9758B66CA3B799D093F66876924EF8525170F (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_10);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdDidRecordImpression_m207460CA24A2C5E09C87C359E4B91A5F64DF3B2E (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdDidRecordImpression_m4AC37F2DADCA23A652440F1879C4E3F18FAC933C (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_mB60E7A9832C6D85C8F0BF788A019E684C72A6989 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_12);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnUserEarnedReward_m42D91A51C9CA31961FCE210034CAC29AF2F56254 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_12);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnPaidEvent_m297662B76404AA7695C1F29AE2B8C6F37C1B6AE0 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_13;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_13);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnPaidEvent_m798414B3D29FC6DC6AA788B06AED81BA6105BBB4 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_13;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_13);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Load(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Load_m898A7CFD8143AE42D14C47EC3EAE3CE40B0B5741 (String_t* ___adUnitId0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* ___adLoadCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m4581D6C04844FB1A0AA18AB75480F7289D2B7BE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m19E293E74E612E80F6D6F1DCF39F804E35F23102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* V_0 = NULL;
	{
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_0 = (U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA*)il2cpp_codegen_object_new(U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadU3Ec__AnonStorey0__ctor_m811853FCD1B2648F4113B428D255007083B1DDEA(L_0, NULL);
		V_0 = L_0;
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_1 = V_0;
		Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* L_2 = ___adLoadCallback2;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_3 = V_0;
		NullCheck(L_3);
		Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* L_4 = L_3->___adLoadCallback_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD, NULL);
		return;
	}

IL_0023:
	{
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->___client_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___client_1), (void*)L_7);
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___client_1;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_9);
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, L_12, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m4581D6C04844FB1A0AA18AB75480F7289D2B7BE8_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_11, L_13);
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___client_1;
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_16 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_17 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_17, L_16, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m19E293E74E612E80F6D6F1DCF39F804E35F23102_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_15, L_17);
		U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___client_1;
		String_t* L_20 = ___adUnitId0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_21 = ___request1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(19 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m47B97DF0CABB6A9C4F75D61C39149B20C5E95DDB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CLoadAdU3Em__0_mBB8D8A10A27E619B2AC11599A2F0C1AB297065B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CLoadAdU3Em__1_m01079FF435F766BB89E2E7D497ABE45F6AB7482E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->____client_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_14), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_14;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = __this->____client_14;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_4, __this, (intptr_t)((void*)RewardedAd_U3CLoadAdU3Em__0_mBB8D8A10A27E619B2AC11599A2F0C1AB297065B8_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = __this->____client_14;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_6, __this, (intptr_t)((void*)RewardedAd_U3CLoadAdU3Em__1_m01079FF435F766BB89E2E7D497ABE45F6AB7482E_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = __this->____client_14;
		String_t* L_8 = __this->____adUnitId_15;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_9 = ___request0;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(19 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = RewardedAd_CanShowAd_m6DFCA02D9029DADED78F05E9590366781FCFFBC6(__this, NULL);
		return L_0;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_CanShowAd_m6DFCA02D9029DADED78F05E9590366781FCFFBC6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____client_14;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->____canShowAd_16;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RewardedAd_CanShowAd_m6DFCA02D9029DADED78F05E9590366781FCFFBC6(__this, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____canShowAd_16 = (bool)0;
		RuntimeObject* L_1 = __this->____client_14;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(21 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show(System.Action`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_m63D6659798C98BD34A7F0A1479C0B35E8616A71F (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ___userRewardEarnedCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RewardedAd_CanShowAd_m6DFCA02D9029DADED78F05E9590366781FCFFBC6(__this, NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		__this->____canShowAd_16 = (bool)0;
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_1 = ___userRewardEarnedCallback0;
		__this->____userRewardEarnedCallback_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userRewardEarnedCallback_17), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_14;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(21 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_2);
	}

IL_0024:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_SetServerSideVerificationOptions_mCF679FC1BCA3D98F16A2E4F83391570E738B9B78 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_14;
		ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* L_1 = ___options0;
		NullCheck(L_0);
		InterfaceActionInvoker1< ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* >::Invoke(22 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// GoogleMobileAds.Api.Reward GoogleMobileAds.Api.RewardedAd::GetRewardItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* RewardedAd_GetRewardItem_m2860C01A84FBA3A530D0EABCF40E8A12B2ACD8E1 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_14;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*)(NULL));
		goto IL_001c;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->____client_14;
		NullCheck(L_1);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2;
		L_2 = InterfaceFuncInvoker0< Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* >::Invoke(20 /* GoogleMobileAds.Api.Reward GoogleMobileAds.Common.IRewardedAdClient::GetRewardItem() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Destroy_mF51E7A752A2B5C378E94553FE48482D19BDF7319 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____canShowAd_16 = (bool)0;
		RuntimeObject* L_0 = __this->____client_14;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_14;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(24 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::DestroyRewardedAd() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.RewardedAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* RewardedAd_GetResponseInfo_mEED30DA50E26CBECBC9728C53DE4F75553BC4BB1 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_14;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->____client_14;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(23 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IRewardedAdClient::GetResponseInfoClient() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_1);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_3 = (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)il2cpp_codegen_object_new(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD(L_3, L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_RegisterAdEvents_m87AD72161981214787EB23E154912B7576320C44 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__2_m0EF93EF6A564FD9345F67C78D09543BAD0EF8ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__3_m42FE908963AFFF13DBAD5ECB22F5A0BEC0DE24E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__4_m9A2F74096E42DA056D883CCE7A3D46E5F861D5C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__5_mD8B36E79B4E1AD6DC781EFA905A039D9907FF460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__6_m0EE95E3BD583017B6101EB6307DD308175A01F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__7_m6DDAE716541683801C81BD115D5C8484CDA4A56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRegisterAdEventsU3Em__8_m6A33A74EE1FB5D5A0C0938170D7B403666770349_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)RewardedAd_U3CRegisterAdEventsU3Em__2_m0EF93EF6A564FD9345F67C78D09543BAD0EF8ABA_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdClicked(System.Action) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_14;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)RewardedAd_U3CRegisterAdEventsU3Em__3_m42FE908963AFFF13DBAD5ECB22F5A0BEC0DE24E9_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_14;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)RewardedAd_U3CRegisterAdEventsU3Em__4_m9A2F74096E42DA056D883CCE7A3D46E5F861D5C4_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_14;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)RewardedAd_U3CRegisterAdEventsU3Em__5_mD8B36E79B4E1AD6DC781EFA905A039D9907FF460_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____client_14;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_9, __this, (intptr_t)((void*)RewardedAd_U3CRegisterAdEventsU3Em__6_m0EE95E3BD583017B6101EB6307DD308175A01F91_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->____client_14;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_11 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_11, __this, (intptr_t)((void*)RewardedAd_U3CRegisterAdEventsU3Em__7_m6DDAE716541683801C81BD115D5C8484CDA4A56A_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->____client_14;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_13 = (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)il2cpp_codegen_object_new(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146(L_13, __this, (intptr_t)((void*)RewardedAd_U3CRegisterAdEventsU3Em__8_m6A33A74EE1FB5D5A0C0938170D7B403666770349_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_12, L_13);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<LoadAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CLoadAdU3Em__0_mBB8D8A10A27E619B2AC11599A2F0C1AB297065B8 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____canShowAd_16 = (bool)1;
		RewardedAd_RegisterAdEvents_m87AD72161981214787EB23E154912B7576320C44(__this, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_6;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_6;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<LoadAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CLoadAdU3Em__1_m01079FF435F766BB89E2E7D497ABE45F6AB7482E (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = __this->___OnAdFailedToLoad_7;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_7;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__2_m0EF93EF6A564FD9345F67C78D09543BAD0EF8ABA (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdClicked_1;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__3_m42FE908963AFFF13DBAD5ECB22F5A0BEC0DE24E9 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_9;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentClosed_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentClosed_4;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__4_m9A2F74096E42DA056D883CCE7A3D46E5F861D5C4 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentOpened_3;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentOpened_3;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__5_mD8B36E79B4E1AD6DC781EFA905A039D9907FF460 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_11;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_11;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdImpressionRecorded_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdImpressionRecorded_2;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__6(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__6_m0EE95E3BD583017B6101EB6307DD308175A01F91 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_0, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_2 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = __this->___OnAdFailedToShow_10;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_10;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = __this->___OnAdFullScreenContentFailed_5;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_10 = __this->___OnAdFullScreenContentFailed_5;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m1DAFB4BD1D193364D17C992CA9C35E091BEDBA56_inline(L_10, L_11, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__7(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__7_m6DDAE716541683801C81BD115D5C8484CDA4A56A (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_13;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_13;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = __this->___OnAdPaid_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = __this->___OnAdPaid_0;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_5 = ___args1;
		NullCheck(L_5);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6;
		L_6 = AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RegisterAdEvents>m__8(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRegisterAdEventsU3Em__8_m6A33A74EE1FB5D5A0C0938170D7B403666770349 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_12;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = __this->___OnUserEarnedReward_12;
		RuntimeObject* L_2 = ___sender0;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_3 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m8B60E1EAE8DD8802908DF7398D18814BD5F2F903_inline(L_1, L_2, L_3, NULL);
	}

IL_0018:
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_4 = __this->____userRewardEarnedCallback_17;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_5 = __this->____userRewardEarnedCallback_17;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_6 = ___args1;
		NullCheck(L_5);
		Action_1_Invoke_mD16ED15700A9B573C44A2A4CEF4CA51CACA79DCE_inline(L_5, L_6, NULL);
		__this->____userRewardEarnedCallback_17 = (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userRewardEarnedCallback_17), (void*)(Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*)NULL);
	}

IL_0036:
	{
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
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m811853FCD1B2648F4113B428D255007083B1DDEA (U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_m4581D6C04844FB1A0AA18AB75480F7289D2B7BE8 (U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* L_0 = __this->___adLoadCallback_0;
		RuntimeObject* L_1 = __this->___client_1;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_2 = (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)il2cpp_codegen_object_new(RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RewardedAd__ctor_m25C00373D1190A96D49AE296BB1F51480DAF6340(L_2, L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_mF6DAD8C7A08A67309D74DB8AF8A22DE7C2B4D8EC_inline(L_0, L_2, (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)NULL, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd/<Load>c__AnonStorey0::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_m19E293E74E612E80F6D6F1DCF39F804E35F23102 (U3CLoadU3Ec__AnonStorey0_tE468CDD78DB81EE4DCA4E3649D82B775C9FBC3CA* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* L_3 = __this->___adLoadCallback_0;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_4 = V_0;
		NullCheck(L_3);
		Action_2_Invoke_mF6DAD8C7A08A67309D74DB8AF8A22DE7C2B4D8EC_inline(L_3, (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)NULL, L_4, NULL);
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
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::.ctor(GoogleMobileAds.Common.IRewardedInterstitialAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____canShowAd_12 = (bool)1;
		RuntimeObject* L_0 = ___client0;
		__this->____client_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_11), (void*)L_0);
		RewardedInterstitialAd_RegisterAdEvents_mDDD067D0EA422486BB2BFC590E8D457C5F9EDCD4(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdPaid_m61642D408C52ADA6C593D22FD4EE2DCC4126AB4A (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdPaid(System.Action`1<GoogleMobileAds.Api.AdValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdPaid_mEC3145923EE1CE4BE356F3D4989B7413A2776464 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_0 = NULL;
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* V_1 = NULL;
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_0 = __this->___OnAdPaid_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF** L_2 = (&__this->___OnAdPaid_0);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = V_1;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_6 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*>(L_2, ((Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)Castclass((RuntimeObject*)L_5, Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_8 = V_0;
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_8) == ((RuntimeObject*)(Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdClicked_m4DDD4B733CA39E4016F665C33D65D3147A274C3F (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdClicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdClicked_mC23EAAC325D7F5D65853B90CFAF3124F0D7E3157 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdClicked_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdImpressionRecorded_m41AA95AB9C6C78C845A6BA1DAF707A752FB14DAB (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdImpressionRecorded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdImpressionRecorded_m7AABDA1FB58B19A316A9C680223487206D01960D (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdImpressionRecorded_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdImpressionRecorded_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdFullScreenContentOpened_m96432FC5B54D014F1238FAEE85F1B7F1CFFA6C33 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdFullScreenContentOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdFullScreenContentOpened_m95AFD690EC9AAF4819A7DF600730BD73AC29A254 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentOpened_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentOpened_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdFullScreenContentClosed_m5D29C92E895DBCD5CED5F7CCB96DBFDCFF66D9AA (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdFullScreenContentClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdFullScreenContentClosed_m98FD000B830A28446F251FA10804C7B7DD1A4CD7 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdFullScreenContentClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_2 = (&__this->___OnAdFullScreenContentClosed_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_2, ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdFullScreenContentFailed_m00FC7F022CB2D11C511B6FDC5DA7E59704721191 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdFullScreenContentFailed(System.Action`1<GoogleMobileAds.Api.AdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdFullScreenContentFailed_m1530533CFA30FA9724CEEF403B526B7CB27B22AB (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_0 = NULL;
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* V_1 = NULL;
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_0 = __this->___OnAdFullScreenContentFailed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_1 = V_0;
		V_1 = L_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6** L_2 = (&__this->___OnAdFullScreenContentFailed_5);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_3 = V_1;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_6 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*>(L_2, ((Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)Castclass((RuntimeObject*)L_5, Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_8 = V_0;
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_8) == ((RuntimeObject*)(Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnPaidEvent_m4EAB67A2C74C40BBF8DE34FF882608D5F24C7473 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_6);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnPaidEvent_m6FC6CA8FDC8C170C8A3AAC8DBACFC608E909A5F4 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_6);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdFailedToPresentFullScreenContent_m360A736195BD68841370B5AD9642C44990033CC9 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdFailedToPresentFullScreenContent_mE285F8DDE04910B6C578D1AD4F78982D2FBE41A2 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidPresentFullScreenContent_m56E8CB641F64C4B20E1AF115CB1D0C99D8AB2551 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdDidPresentFullScreenContent_mBDEF370F5D373E8382A52214288E30FF90BBC62D (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidDismissFullScreenContent_m472DB7B9B7E4DB35805B416C09CE6558EAE60043 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdDidDismissFullScreenContent_m56CD8026F53AAD99B5A751EE6F841981EAAA0C0A (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidRecordImpression_mEA0C53C27FB3B25D17E7CB75EC61740DE7799B62 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdDidRecordImpression_m71C8BC2DC41AB23703AD803961B824CAA01FA626 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::Load(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_Load_m680D1B87997D82C62B04B27CFB9D40C1E0E1BC97 (String_t* ___adUnitId0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E* ___adLoadCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_mECC5EC99E7320E24831FE0BC35E73A02D534CC9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mC67F1CCB4AB9D24C87624C3AC7E8672691DA5ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* V_0 = NULL;
	{
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_0 = (U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF*)il2cpp_codegen_object_new(U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadU3Ec__AnonStorey0__ctor_m72D0D4C8650D2D70F35636BEB5903C21DD1ECB85(L_0, NULL);
		V_0 = L_0;
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_1 = V_0;
		Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E* L_2 = ___adLoadCallback2;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_3 = V_0;
		NullCheck(L_3);
		Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E* L_4 = L_3->___adLoadCallback_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD, NULL);
		return;
	}

IL_0023:
	{
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.IClientFactory::BuildRewardedInterstitialAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->___client_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___client_1), (void*)L_7);
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___client_1;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::CreateRewardedInterstitialAd() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_9);
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, L_12, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_mECC5EC99E7320E24831FE0BC35E73A02D534CC9E_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_11, L_13);
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___client_1;
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_16 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_17 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_17, L_16, (intptr_t)((void*)U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mC67F1CCB4AB9D24C87624C3AC7E8672691DA5ED8_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_15, L_17);
		U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___client_1;
		String_t* L_20 = ___adUnitId0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_21 = ___request1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(19 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::LoadAd(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_LoadAd_m9AECAE03C5A3095E5E1A3232616168A01BF8C367 (String_t* ___adUnitID0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* ___adLoadCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_mC83774687D0BBD8030386EAC46B739EA42D9D172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_m2DDE595FD36A022B8C2CABAEEC31D9420F2247AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* V_0 = NULL;
	{
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_0 = (U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB*)il2cpp_codegen_object_new(U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAdU3Ec__AnonStorey1__ctor_m8BE812F16F61C13810628DB2890D91353404E217(L_0, NULL);
		V_0 = L_0;
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_1 = V_0;
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_2 = ___adLoadCallback2;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_3 = V_0;
		NullCheck(L_3);
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_4 = L_3->___adLoadCallback_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6DDEF9D4C8C44B9B579CA38D3F9E6206030FE8CD, NULL);
		return;
	}

IL_0023:
	{
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.IClientFactory::BuildRewardedInterstitialAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		L_5->___client_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___client_1), (void*)L_7);
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___client_1;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::CreateRewardedInterstitialAd() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_9);
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, L_12, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_mC83774687D0BBD8030386EAC46B739EA42D9D172_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_11, L_13);
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___client_1;
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_16 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_17 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_17, L_16, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_m2DDE595FD36A022B8C2CABAEEC31D9420F2247AD_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_15, L_17);
		U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___client_1;
		String_t* L_20 = ___adUnitID0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_21 = ___request1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(19 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedInterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedInterstitialAd_IsLoaded_m1DA328C5FCF3D5C04CA0A28FBEFB472C157580A8 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = RewardedInterstitialAd_CanShowAd_m374F4E205E398A48456BEC924CAA5DDD3A443CB0(__this, NULL);
		return L_0;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedInterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedInterstitialAd_CanShowAd_m374F4E205E398A48456BEC924CAA5DDD3A443CB0 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____client_11;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->____canShowAd_12;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		return (bool)G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::Show(System.Action`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_Show_m94EC715CC0BB7273E1207CAD0B5D6D0E2248363E (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ___userEarnedRewardCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RewardedInterstitialAd_CanShowAd_m374F4E205E398A48456BEC924CAA5DDD3A443CB0(__this, NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		__this->____canShowAd_12 = (bool)0;
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_1 = ___userEarnedRewardCallback0;
		__this->____userRewardEarnedCallback_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userRewardEarnedCallback_13), (void*)L_1);
		RuntimeObject* L_2 = __this->____client_11;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(21 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::Show() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_2);
	}

IL_0024:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_SetServerSideVerificationOptions_m4A2DF87B2A1019C7BE35A70CFBC8600729979F70 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_11;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_11;
		ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* L_2 = ___options0;
		NullCheck(L_1);
		InterfaceActionInvoker1< ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* >::Invoke(22 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// GoogleMobileAds.Api.Reward GoogleMobileAds.Api.RewardedInterstitialAd::GetRewardItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* RewardedInterstitialAd_GetRewardItem_m6F950D81055503877135AFC3FCB7D33E946CBAAC (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_11;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*)(NULL));
		goto IL_001c;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->____client_11;
		NullCheck(L_1);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2;
		L_2 = InterfaceFuncInvoker0< Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* >::Invoke(20 /* GoogleMobileAds.Api.Reward GoogleMobileAds.Common.IRewardedInterstitialAdClient::GetRewardItem() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_Destroy_m1795BB7A135FE3D473385CD77D9D0FAD9987765E (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____canShowAd_12 = (bool)0;
		RuntimeObject* L_0 = __this->____client_11;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____client_11;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(24 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::DestroyRewardedInterstitialAd() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_1);
	}

IL_001d:
	{
		return;
	}
}
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.RewardedInterstitialAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* RewardedInterstitialAd_GetResponseInfo_mBCFD74C19F3B378AFE08A15928B4DD92FE68FC95 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____client_11;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->____client_11;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(23 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IRewardedInterstitialAdClient::GetResponseInfoClient() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_1);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_3 = (ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0*)il2cpp_codegen_object_new(ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ResponseInfo__ctor_m5CDD2ADA5EF001A9269D2A0BACF9390D0B044DFD(L_3, L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::RegisterAdEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_RegisterAdEvents_mDDD067D0EA422486BB2BFC590E8D457C5F9EDCD4 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRegisterAdEventsU3Em__0_m9886A4BC1AD46360532A23EEE8C50BD57F89D1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRegisterAdEventsU3Em__1_m543CC73960970B9313A63C6503E6734B824AB6D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRegisterAdEventsU3Em__2_m1B2DC3A87AC052C420FA21CD7087ED63C13CC6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRegisterAdEventsU3Em__3_m25AFB0FBFF3283D64AFC8D8598A7ED8D50565B45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRegisterAdEventsU3Em__4_m5A5F20A6DE1364C4418FC45C08523C9C60127663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRegisterAdEventsU3Em__5_mF87BA9ED7F1D60DA940B2A092DC9B89F614072EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRegisterAdEventsU3Em__6_mDA873076A460C83926EE0A2B31152F8B6833280A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_11;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRegisterAdEventsU3Em__0_m9886A4BC1AD46360532A23EEE8C50BD57F89D1A0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdClicked(System.Action) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_11;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRegisterAdEventsU3Em__1_m543CC73960970B9313A63C6503E6734B824AB6D6_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_11;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRegisterAdEventsU3Em__2_m1B2DC3A87AC052C420FA21CD7087ED63C13CC6D8_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_11;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRegisterAdEventsU3Em__3_m25AFB0FBFF3283D64AFC8D8598A7ED8D50565B45_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____client_11;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_9, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRegisterAdEventsU3Em__4_m5A5F20A6DE1364C4418FC45C08523C9C60127663_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->____client_11;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_11 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_11, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRegisterAdEventsU3Em__5_mF87BA9ED7F1D60DA940B2A092DC9B89F614072EC_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->____client_11;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_13 = (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)il2cpp_codegen_object_new(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146(L_13, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRegisterAdEventsU3Em__6_mDA873076A460C83926EE0A2B31152F8B6833280A_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_12, L_13);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RegisterAdEvents>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRegisterAdEventsU3Em__0_m9886A4BC1AD46360532A23EEE8C50BD57F89D1A0 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnAdClicked_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnAdClicked_1;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RegisterAdEvents>m__1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRegisterAdEventsU3Em__1_m543CC73960970B9313A63C6503E6734B824AB6D6 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidDismissFullScreenContent_9;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentClosed_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentClosed_4;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RegisterAdEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRegisterAdEventsU3Em__2_m1B2DC3A87AC052C420FA21CD7087ED63C13CC6D8 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidPresentFullScreenContent_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdFullScreenContentOpened_3;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdFullScreenContentOpened_3;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RegisterAdEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRegisterAdEventsU3Em__3_m25AFB0FBFF3283D64AFC8D8598A7ED8D50565B45 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_10;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_10;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnAdImpressionRecorded_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnAdImpressionRecorded_2;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RegisterAdEvents>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRegisterAdEventsU3Em__4_m5A5F20A6DE1364C4418FC45C08523C9C60127663 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_0 = ___error1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_0, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_2 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_2, L_1, NULL);
		V_0 = L_2;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = __this->___OnAdFailedToPresentFullScreenContent_7;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToPresentFullScreenContent_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_9 = __this->___OnAdFullScreenContentFailed_5;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* L_10 = __this->___OnAdFullScreenContentFailed_5;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m1DAFB4BD1D193364D17C992CA9C35E091BEDBA56_inline(L_10, L_11, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RegisterAdEvents>m__5(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRegisterAdEventsU3Em__5_mF87BA9ED7F1D60DA940B2A092DC9B89F614072EC (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_6;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_3 = __this->___OnAdPaid_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* L_4 = __this->___OnAdPaid_0;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_5 = ___args1;
		NullCheck(L_5);
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6;
		L_6 = AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_mD5EF5830EA6DF3B15E6D03D506CC91821D5FDC1E_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RegisterAdEvents>m__6(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRegisterAdEventsU3Em__6_mDA873076A460C83926EE0A2B31152F8B6833280A (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___args1, const RuntimeMethod* method) 
{
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_0 = __this->____userRewardEarnedCallback_13;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_1 = __this->____userRewardEarnedCallback_13;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2 = ___args1;
		NullCheck(L_1);
		Action_1_Invoke_mD16ED15700A9B573C44A2A4CEF4CA51CACA79DCE_inline(L_1, L_2, NULL);
		__this->____userRewardEarnedCallback_13 = (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userRewardEarnedCallback_13), (void*)(Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*)NULL);
	}

IL_001e:
	{
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
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0__ctor_m72D0D4C8650D2D70F35636BEB5903C21DD1ECB85 (U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__0_mECC5EC99E7320E24831FE0BC35E73A02D534CC9E (U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E* L_0 = __this->___adLoadCallback_0;
		RuntimeObject* L_1 = __this->___client_1;
		RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* L_2 = (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)il2cpp_codegen_object_new(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6(L_2, L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_m0CAC4772DC502A0F8D7DE0FED1691A7CE938A069_inline(L_0, L_2, (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)NULL, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<Load>c__AnonStorey0::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ec__AnonStorey0_U3CU3Em__1_mC67F1CCB4AB9D24C87624C3AC7E8672691DA5ED8 (U3CLoadU3Ec__AnonStorey0_t16E241D6ED7F4DF30CB9F4B87B36F170DE5CF2FF* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___args1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		Action_2_t090A3AAEE5E3D7EE1ADD68E695C78C769F95302E* L_3 = __this->___adLoadCallback_0;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_4 = V_0;
		NullCheck(L_3);
		Action_2_Invoke_m0CAC4772DC502A0F8D7DE0FED1691A7CE938A069_inline(L_3, (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)NULL, L_4, NULL);
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
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1__ctor_m8BE812F16F61C13810628DB2890D91353404E217 (U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__0_mC83774687D0BBD8030386EAC46B739EA42D9D172 (U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_0 = __this->___adLoadCallback_0;
		RuntimeObject* L_1 = __this->___client_1;
		RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* L_2 = (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)il2cpp_codegen_object_new(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6(L_2, L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_m81A3571679D652C4F1924D55802D093169D12479_inline(L_0, L_2, (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)NULL, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey1::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey1_U3CU3Em__1_m2DDE595FD36A022B8C2CABAEEC31D9420F2247AD (U3CLoadAdU3Ec__AnonStorey1_tC4D7014BAA0AE58EA76D463B2DACE865D89074CB* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = ___args1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_0, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_2, L_1, NULL);
		V_0 = L_2;
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_3 = __this->___adLoadCallback_0;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_4 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_4, NULL);
		V_1 = L_4;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_6 = V_0;
		NullCheck(L_5);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_5, L_6, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_7 = V_1;
		NullCheck(L_3);
		Action_2_Invoke_m81A3571679D652C4F1924D55802D093169D12479_inline(L_3, (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)NULL, L_7, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___value0;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* AdValueEventArgs_get_AdValue_mF26131337D0F2C1EFB3F8148EAA183724E9F0226_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, const RuntimeMethod* method) 
{
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_0 = __this->___U3CAdValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLoadAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___value0;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline (AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}

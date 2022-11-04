#include "pch-cpp.hpp"

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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<HurricaneVR.Framework.Core.HVRGrabbable>
struct Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// HurricaneVR.Framework.Shared.Utilities.CircularBuffer`1<System.Single>
struct CircularBuffer_1_tC44EFCA00F62CEE34D60D6A4B399965D836EACB7;
// HurricaneVR.Framework.Shared.Utilities.CircularBuffer`1<UnityEngine.Vector3>
struct CircularBuffer_1_t274E1E537F2160E9CFA8F4C2DE0F57452E37F122;
// System.Collections.Generic.Dictionary`2<System.Guid,HurricaneVR.Framework.Core.Utils.SFXPlayer/PlayEvent>
struct Dictionary_2_tACC2892D27DD6A7FE3B2032A871CC79BF893D21A;
// System.Collections.Generic.Dictionary`2<HurricaneVR.Framework.Shared.HVRButtons,HurricaneVR.Framework.Shared.HVRButtonState>
struct Dictionary_2_t28B501D16A428241710277D28A2AD08940F5C6B6;
// System.Collections.Generic.Dictionary`2<HurricaneVR.Framework.Core.HVRGrabbable,UnityEngine.Coroutine>
struct Dictionary_2_tB397C090758182CAAACE9ED41724A3C91FA99B58;
// System.Collections.Generic.Dictionary`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,UnityEngine.ConfigurableJoint>
struct Dictionary_2_t2E01794B24EEB6E2FCA8C4CE3AD9DA1349367D8B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Int32>
struct Dictionary_2_t2F2061C52D14CC6C406B18BFBDC99759B42984C2;
// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04;
// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber,System.Boolean>
struct Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E;
// System.Func`2<HurricaneVR.Framework.Core.HVRGrabbable,System.Boolean>
struct Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E;
// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,System.Boolean>
struct Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03;
// System.Func`2<HurricaneVR.Framework.Core.Player.HVRPlayerController,System.Boolean>
struct Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC;
// System.Func`2<HurricaneVR.Framework.Core.Player.HVRTeleporter,System.Boolean>
struct Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketFilter`1<HurricaneVR.TechDemo.Scripts.DemoSocketableItems>
struct HVREnumFlagsSocketFilter_1_t5BD870BE3A318344EBBBFABAA8BE91DF1CEFEB47;
// HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketFilter`1<System.Int32Enum>
struct HVREnumFlagsSocketFilter_1_t274B96A2BE2201D2D5F70CE451119645BDF33B5B;
// HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketable`1<HurricaneVR.TechDemo.Scripts.DemoSocketableItems>
struct HVREnumFlagsSocketable_1_t06B6DC19FF7F059A014513E60461C9BD02E49BF9;
// HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketable`1<System.Int32Enum>
struct HVREnumFlagsSocketable_1_t68C52A7902DFD39F06843A82137A23744666F1F9;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B;
// System.Collections.Generic.HashSet`1<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase>
struct HashSet_1_t1CD6136E63B00157175F347D29716DC2A43D6872;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_tFDB0B934337DF4DC2367C1B24FB3247B40F049E1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>
struct IEnumerable_1_t738A577130D5FBE55CDA8A3FF4898A00C43996CA;
// System.Collections.Generic.IEnumerable`1<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber>
struct IEnumerable_1_tB7E7CDBAD48F55DC652B290E36A3D4C580412CB2;
// System.Collections.Generic.IEnumerable`1<HurricaneVR.Framework.Core.HVRGrabbable>
struct IEnumerable_1_t3B0C2FE8641AE4A396114017FAD42324E3EEDE58;
// System.Collections.Generic.IEnumerable`1<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>
struct IEnumerable_1_t70453D753223595FC867D55D459DE2D9F415A67D;
// System.Collections.Generic.IEnumerable`1<HurricaneVR.Framework.Core.Player.HVRPlayerController>
struct IEnumerable_1_t664D3266F4E0CC7A3FD86DF8952431BD7F63A11A;
// System.Collections.Generic.IEnumerable`1<HurricaneVR.Framework.Core.Player.HVRTeleporter>
struct IEnumerable_1_t26D6384BDF574B192FB3E45F779E5FB60DAFDB4A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Guid>
struct List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable>
struct List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Bags.HVRGrabbableBag>
struct List_1_t234E29DA3D4F1D0984CE0300D5527941C1EC3994;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase>
struct List_1_t924CA14CF7714D7B89A2BB558E9EAEAF8211C930;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>
struct List_1_t0546410FB3DD901156EF02285245EBDB24982ECB;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint>
struct List_1_t4CD1B57546285E41EE806427BF79C5164BDB5B5F;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabTracker>
struct List_1_tFEEDD9A6C1C4C56F979A33152ADD95095ACF2502;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabbable>
struct List_1_tC56132CC9FBF1DED5BCC0B1EF6116DBBA1D3D931;
// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabber>
struct List_1_t045123BDB2FAD65B3BD5F8698ADF524F27BEDA8D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>
struct List_1_tA910625D0D90E7578EB9529664A9C52989FF743E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<HurricaneVR.Framework.Components.HVRPhysicsButton>
struct UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>
struct UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532;
// UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED;
// UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7;
// UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable>
struct UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<HurricaneVR.Framework.Components.HVRPhysicsButton>
struct UnityEvent_1_t5398DF5B673C8BF340E7B001503295158FF6B18E;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>
struct UnityEvent_1_t13C3A5E078C5974B6FEA4772A5FF2B2EF3319C51;
// UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityEvent_2_tCFA8BBFEAE5D89F7A1C8F8CE2AABD8A06A537D63;
// UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityEvent_2_tB914EBCCD72B43E4BDAE818B93F4FB0BC4D8F690;
// UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable>
struct UnityEvent_2_t03AD5FDC8390DF436A87E03102EA86A7E3FEB0F7;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// HurricaneVR.TechDemo.Scripts.DemoKeypadButton[]
struct DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber[]
struct HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F;
// HurricaneVR.Framework.Core.HVRGrabbable[]
struct HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2;
// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber[]
struct HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B;
// HurricaneVR.Framework.Core.Player.HVRPlayerController[]
struct HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634;
// HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint[]
struct HVRPosableGrabPointU5BU5D_tEDD8ABA4D8FABB38DF806BA5158585FE4D60021F;
// HurricaneVR.Framework.Core.Sockets.HVRSocketFilter[]
struct HVRSocketFilterU5BU5D_tE490C9FB6A30DA9C93877EE55B80D7CEDC51D2C8;
// HurricaneVR.Framework.Core.Sockets.HVRSocketHoverAction[]
struct HVRSocketHoverActionU5BU5D_tC21C3F61BBAB8FF2E3F2F4BB6D689366545AB490;
// HurricaneVR.Framework.Core.Player.HVRTeleporter[]
struct HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState[]
struct ResetStateU5BU5D_tE457A5FF5403427E495A5C02B9AFF5ACF0921A77;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// Anvil
struct Anvil_t24D2D6FC17D908B44534868B39FABAE24FC4DF4A;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// ChangeColor
struct ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Check
struct Check_t98555E4541CA6FC5875BBCF96442628FAFF675F0;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// HurricaneVR.TechDemo.Scripts.DemoBackpack
struct DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC;
// HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing
struct DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64;
// HurricaneVR.TechDemo.Scripts.DemoDummyArm
struct DemoDummyArm_tAB2AD7E697B5DB0CE23303F4EFC2DBFC9B6A27EF;
// HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti
struct DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98;
// HurricaneVR.TechDemo.Scripts.DemoGlassRotate
struct DemoGlassRotate_tE49811E14A1FF9B74C86C24493B000331AE8D2DF;
// HurricaneVR.TechDemo.Scripts.DemoHatchDoor
struct DemoHatchDoor_t2709BFF9CCDB2E23EFC7CFF1694E224B33090A70;
// HurricaneVR.TechDemo.Scripts.DemoHeavyDoor
struct DemoHeavyDoor_t310E87E094DEC7C4717C2E0D589A0FFB5D1BDD73;
// HurricaneVR.TechDemo.Scripts.DemoHelper
struct DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4;
// HurricaneVR.TechDemo.Scripts.DemoHolster
struct DemoHolster_tA7512D1D0C6D74DADAB6CCF64C6B7FD56C74DC25;
// HurricaneVR.TechDemo.Scripts.DemoHolsterOrientation
struct DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0;
// HurricaneVR.TechDemo.Scripts.DemoKeyHologram
struct DemoKeyHologram_tFC3E8A155E1BA9C1CAB774F214137B6BEAA3A47C;
// HurricaneVR.TechDemo.Scripts.DemoKeypad
struct DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144;
// HurricaneVR.TechDemo.Scripts.DemoKeypadButton
struct DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4;
// HurricaneVR.TechDemo.Scripts.DemoLeverDisplay
struct DemoLeverDisplay_t2762C179729C7EF04242CC997D3EDBB9DE01675A;
// HurricaneVR.TechDemo.Scripts.DemoLock
struct DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339;
// HurricaneVR.TechDemo.Scripts.DemoLockedDoor
struct DemoLockedDoor_tCA3885325CA417F739F7C6ED111865E68CCBAB15;
// HurricaneVR.TechDemo.Scripts.DemoManualTeleport
struct DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1;
// HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket
struct DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3;
// HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze
struct DemoPoseSqueeze_tFA3148A5165E33446ED8354D9EB07487D83B90AA;
// HurricaneVR.TechDemo.Scripts.DemoPowerUnit
struct DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2;
// HurricaneVR.TechDemo.Scripts.DemoSafeDial
struct DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E;
// HurricaneVR.TechDemo.Scripts.DemoSafeDoor
struct DemoSafeDoor_tD52081A64E4CDBA6E3365613B3432B910D996287;
// HurricaneVR.TechDemo.Scripts.DemoSlidingDoor
struct DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A;
// HurricaneVR.TechDemo.Scripts.DemoSocketFilter
struct DemoSocketFilter_t23A24FE270D4CA08D26FE3A51E49FFD4B13213E7;
// HurricaneVR.TechDemo.Scripts.DemoSocketables
struct DemoSocketables_tCA4DDE3A29399721941785DC04B6DB2681FA5037;
// HurricaneVR.TechDemo.Scripts.DemoUIManager
struct DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693;
// HurricaneVR.TechDemo.Scripts.DemoValveHologram
struct DemoValveHologram_t438B846EB94B0089D63151778AFE3EE3F49D260A;
// HurricaneVR.TechDemo.Scripts.DemoValveLock
struct DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Furnace
struct Furnace_t8F026DF0C9B18D78FF6B77676B1810DB1CB8CDB5;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HurricaneVR.Framework.Components.HVRButtonEvent
struct HVRButtonEvent_t356796E6E11193C52BC8DAFEF14D9E579210892B;
// HurricaneVR.Framework.Core.Player.HVRCameraRig
struct HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45;
// HurricaneVR.Framework.Shared.HVRController
struct HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0;
// HurricaneVR.Framework.Components.HVRControllerOffset
struct HVRControllerOffset_t1BE34A08DD3813C992A611BC8C20BED5CD2B7C75;
// HurricaneVR.Framework.Shared.HVRFingerSettings
struct HVRFingerSettings_t7C0A23C5BB635A4F8F7E3B09DD815F3E710A31A1;
// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber
struct HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191;
// HurricaneVR.Framework.Core.HVRForceGrabberLaser
struct HVRForceGrabberLaser_tABA6254ADA87FC0A4054E39D93E0CA662B49B4F6;
// HurricaneVR.Framework.Core.ScriptableObjects.HVRForcePullSettings
struct HVRForcePullSettings_tC18235BD7C7581749F6F037341AA583AA7BFC078;
// HurricaneVR.Framework.Core.Grabbers.HVRGrabArgs
struct HVRGrabArgs_t97F9557A995F4B4355D9A1C7BD04582FD79A8191;
// HurricaneVR.Framework.Core.HVRGrabbable
struct HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE;
// HurricaneVR.Framework.Core.Bags.HVRGrabbableBag
struct HVRGrabbableBag_tABC2770DFBA14CB32A857B4F3C78FD05EB3F9E34;
// HurricaneVR.Framework.Components.HVRGrabbableHoverBase
struct HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305;
// HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase
struct HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6;
// HurricaneVR.Framework.Core.HandPoser.HVRHandAnimator
struct HVRHandAnimator_tB6C3938B2457679B4B04635FEF5F080DA02CDC13;
// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber
struct HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90;
// HurricaneVR.Framework.Core.HVRHandPhysics
struct HVRHandPhysics_t843A7232A98033CC51B9236C137C8F03516D14DB;
// HurricaneVR.Framework.Core.HandPoser.HVRHandPose
struct HVRHandPose_t315CF1C747DB0B1A2B0D7EE89E317285D751CE2F;
// HurricaneVR.Framework.Core.HandPoser.Data.HVRHandPoseData
struct HVRHandPoseData_tF59F63D9C0A231B89F6EDF4FD4EC2B4C58F2DA72;
// HurricaneVR.Framework.Core.HandPoser.HVRHandPoser
struct HVRHandPoser_tCF5D301EB153B0E53954A6A759E938C6CFFC10C6;
// HurricaneVR.Framework.Core.Player.HVRHandStrengthHandler
struct HVRHandStrengthHandler_tCF023E4A90BDC98745D3EC8043DE15B3071AAD3E;
// HurricaneVR.Framework.Core.Player.HVRHeadCollision
struct HVRHeadCollision_tC79727D088C060707C86EF717802ACA8EED89A8D;
// HurricaneVR.Framework.Shared.HVRInputSettings
struct HVRInputSettings_t6D6BC322F5C18BB8947F14A6A0EC4C6F9AB615E4;
// HurricaneVR.Framework.Core.Player.HVRInvalidTeleport
struct HVRInvalidTeleport_tE5A01DF4E97BF622515A5BABFA5EA7078FAA4FD3;
// HurricaneVR.Framework.Core.Player.HVRJointHand
struct HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9;
// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings
struct HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77;
// HurricaneVR.Framework.Components.HVRPhysicsButton
struct HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394;
// HurricaneVR.Framework.Core.HandPoser.HVRPhysicsPoser
struct HVRPhysicsPoser_t303F3723DDA06C8B30C381D9E8389D514D098B9D;
// HurricaneVR.Framework.Core.Player.HVRPlayerController
struct HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0;
// HurricaneVR.Framework.ControllerInput.HVRPlayerInputs
struct HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986;
// HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint
struct HVRPosableGrabPoint_t45AD7B3827EE2CFF89742F05F9FFD2E208D9CB23;
// HurricaneVR.Framework.Core.HandPoser.HVRPosableHand
struct HVRPosableHand_t7C98C569D120765E5C36A631ED3901FCF29139A2;
// HurricaneVR.Framework.Core.HVRRequireOtherGrabbable
struct HVRRequireOtherGrabbable_t7FB979F5D265E3592339DE68A98878FCF39FFE46;
// HurricaneVR.Framework.Components.HVRRigidBodyOverrides
struct HVRRigidBodyOverrides_tEBB9AC89217974E1061008AB59BA870CB87677B6;
// HurricaneVR.Framework.Components.HVRRotationLimiter
struct HVRRotationLimiter_tF5CD8BEF6539AEF6B30DD3CC7E163EB09771C672;
// HurricaneVR.Framework.Components.HVRRotationTracker
struct HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067;
// HurricaneVR.Framework.Core.Player.HVRScreenFade
struct HVRScreenFade_t475F8309AC6BABCB4A4EEE1842BB59DF74272C2A;
// HurricaneVR.Framework.Core.HVRSettings
struct HVRSettings_tF57CCCAFB711DE66F81893E04363569A1C4AF080;
// HurricaneVR.Framework.Core.Grabbers.HVRSocket
struct HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418;
// HurricaneVR.Framework.Core.Bags.HVRSocketBag
struct HVRSocketBag_tEA607484EBFCED87606BDFF92E8F527CE3815974;
// HurricaneVR.Framework.Core.Sockets.HVRSocketable
struct HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F;
// HurricaneVR.Framework.Core.Sockets.HVRSocketableTags
struct HVRSocketableTags_tF30D12078E7D23094432A3D208E63F5484F96C21;
// HurricaneVR.Framework.Core.Stabbing.HVRStabEvent
struct HVRStabEvent_t272C60B0E7CB75467B6BD510CD7DF8E031385924;
// HurricaneVR.Framework.Core.Stabbing.HVRStabEvents
struct HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7;
// HurricaneVR.Framework.Core.Stabbing.HVRStabbable
struct HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1;
// HurricaneVR.Framework.Core.Stabbing.HVRStabbableSettings
struct HVRStabbableSettings_t84D8624ED6E1D223CDBF062528B88EA99E55D813;
// HurricaneVR.Framework.Core.Stabbing.HVRStabber
struct HVRStabber_tE60C171AECD2D5487B702E7C6C27194FFC364904;
// HurricaneVR.Framework.Core.Stabbing.HVRStabberSettings
struct HVRStabberSettings_t2414E15BD0B668FC229B060ADFB038A74BA5DEAC;
// HurricaneVR.Framework.Core.Player.HVRTeleportCollisonHandler
struct HVRTeleportCollisonHandler_t738736934B487A9F6C8CC6EC4B3B05A76EDB7AD3;
// HurricaneVR.Framework.Core.Player.HVRTeleportMarkerBase
struct HVRTeleportMarkerBase_t7044E7BF18E1006F75C906BE7A0A92B003A80961;
// HurricaneVR.Framework.Core.Player.HVRTeleporter
struct HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7;
// HurricaneVR.Framework.Components.HVRThrowingCenterOfMass
struct HVRThrowingCenterOfMass_t87945CE418DB853807916FA86CE0F7E0E350C7B1;
// HurricaneVR.Framework.ControllerInput.HVRTrackedController
struct HVRTrackedController_t9BE1CC3C3770994B7042A191F6FA6082F6D3C111;
// Hammering
struct Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE;
// Heating
struct Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A;
// UnityEngine.HingeJoint
struct HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// HurricaneVR.Framework.Components.RotationTrackerAngleEvent
struct RotationTrackerAngleEvent_tB8A14CAE85E89437191650980077BF542288BEB0;
// HurricaneVR.Framework.Components.RotationTrackerStepEvent
struct RotationTrackerStepEvent_tCB5A5C66DD94226F97B56FB0FF26145DD6481793;
// HurricaneVR.Framework.Core.Utils.SFXPlayer
struct SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SnapObjects
struct SnapObjects_t4F57E591152088E8B944F673F2C96364AC5342D4;
// HurricaneVR.Framework.Core.Grabbers.SocketSpawnEvent
struct SocketSpawnEvent_t87F4EB940ADFD998C490FFE3827581C81517627D;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// HurricaneVR.Framework.Core.Player.TeleportPositionUpdate
struct TeleportPositionUpdate_t948A184B362F6F6598D1789074CCCAE2F636617C;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// HurricaneVR.Framework.Core.VRGrabbableEvent
struct VRGrabbableEvent_t8728B02D82F580AA72BA4959489134048B8D0946;
// HurricaneVR.Framework.Core.VRGrabberEvent
struct VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C;
// HurricaneVR.Framework.Core.VRHandGrabberEvent
struct VRHandGrabberEvent_t43EC3CE57F33FAC044A3D4338C967C5831F76D16;
// HurricaneVR.Framework.Core.VRSocketEvent
struct VRSocketEvent_t0F3F156D923A9085A68893C921ACF4B8516ED357;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c
struct U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21;
// HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2
struct U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947;
// HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c
struct U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319;
// HurricaneVR.TechDemo.Scripts.DemoHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983;
// HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState
struct ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C;
// HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13
struct U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7;
// HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c
struct U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4;
// HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11
struct U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA;
// HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c
struct U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1;
// HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6
struct U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HVRAnimationParameters_tAF98DA1E9F16B24858FBF83D59E894727758B4C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HVRForceGrabActivation_t86B59B3C3DD57DAB045AB1434DA454128C566B11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HVRForceGrabMode_tDABD5D127AD11D52F73886AA8E4F1FD96771461F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HVRSitStand_tFDFC806490DC7323D9D9B9557ED7CC094C5BB80E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3B0C2FE8641AE4A396114017FAD42324E3EEDE58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5577E9DD7D1802C804736ED3574376CC135D38CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA910625D0D90E7578EB9529664A9C52989FF743E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDialState_t3ADBF0DD09E03B7544C074A80488A5FE7FCADAAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F36B5FA096FAF0933EC6881E073FCD9B3243D67;
IL2CPP_EXTERN_C String_t* _stringLiteral4780AF940655CB59AF49F6344DA95EC30E32AA8A;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral71CA9F9E0C870AADBE4EED2A581B2671DFD7E3E4;
IL2CPP_EXTERN_C String_t* _stringLiteral7F77F7A49FA6574579CAFCEB3733D4E88CFD3161;
IL2CPP_EXTERN_C String_t* _stringLiteral8178F586F104CC0037645CD4A425448975FBC818;
IL2CPP_EXTERN_C String_t* _stringLiteral9595A689E64270CE45EE143147558206643E91E6;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC97E61DC7C99029AC79834F98E1EAC491CA52091;
IL2CPP_EXTERN_C String_t* _stringLiteralC98CCCD56031E4EA86C54B1227C6D0085D3B373F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD;
IL2CPP_EXTERN_C String_t* _stringLiteralCDE9DED28C73C43C37F4AB9503FF1112289730BF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF8B948CC37BEB6D1D5A4F40084C611DB43B1E6;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisHVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45_mAA323BBD4EC43D0C753128C3A3BF6497B8464598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisHVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986_m083CCEC6EE2D5FD7BBC196F825560CDF11777460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1_m23C4777ED83C185A1F975C8D985D2521FD3053BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m323C2BB2FDC8631D5B02C57ADD07FE745C81F3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9_m2A05DE5163BD6D4F15A66FAA2B13ABEE368A90FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_mC1CF9B3206AAF0546A3745410851E6A449536CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisDemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_mE0890C51E615715459E1C94D0B355DD649B5D914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m1EE97F1F36E7A096D4D1D15C7873FB5F381A9C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m9239D7DCE3C2E41B6D106A0E0DCAA81C5A35CE10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m781A92500338780EB953852750144E25813BBAFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m2521AD4640BC1A2474A2B0595B2EE742E9E0D88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m263198B23E82499C16C66D2C3866A89A7CF85E58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoFullStabConfetti_FullStabbed_mEEFD6E8CB21BBAA83123AEE15203015760DCE882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoFullStabConfetti_Stabbed_m567E460445D6984694D7ECC121966B121E4EBFCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoFullStabConfetti_Unstabbed_mFDDD4186141B6B02926439790A5196ADDBB39C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoHelper_U3CResetGrabbablesU3Eb__11_0_mF04EC4DF0E3BD23087797C31EBDEA50C3F662BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoLock_OnKeyGrabbed_m98219C1B699E94DA9FC6B11144CD531A0F0E73D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoPoseSqueeze_OnReleased_mA13E4B74A63190C1580AB75668B72CFE214EE313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoPowerUnit_OnLeftSocketGrabbed_m4F5B4771E3CCD883336F11A0325E635DB55FBDB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoPowerUnit_OnRightSocketGrabbed_m4118D218C3C0B97C7438B0CEAF8F97210AF26831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoUIManager_OnLineGrabTriggerChanged_m320D33BB893A9EFF156AFA8A2889F868F7F9E87F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoUIManager_OnSmoothTurnChanged_m31BB570E3C5DEC2659F976DC530043158243472A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoUIManager_OnSnapTurnRateChanged_mFB0D670F5E3ED62AD52B288218CA4D8576D07F71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoUIManager_OnTurnRateChanged_m0FB692D0F19F25A5E6B71DDE83BABFC96CBB62EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoValveLock_OnValveGrabbed_m858CAF44B4B0182F26D2F27141ED695C83D613C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m36EDE03B4C61948E7224D32D08282DEDB9710BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_mC7262E1B113EC3FBA35498F1FA7BA6AE1DF9ABB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m94CA905D038827EDD303BD8AC2200A79DCCDB981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m360E62DC627DDFC71C71414CF9318032787D1B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mB91EB4DE968069766E53D2E0AA012CA2EB7DA18E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7BFB61917B6E338D5C9822851032E461130D558A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2289AB59AF46CA2A3DC7A8FE8273239FD445E89E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m291786A666CEB4AF20E71BE6C01C9C6A74357F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m59E4CA1C3FAE096A545658F5A9359D078C88A006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HVREnumFlagsSocketFilter_1__ctor_m012DED0BA9021E8926793BFB917E41B685D4007B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HVREnumFlagsSocketable_1__ctor_mE90C60D9BD634798F667995DB1271BE0E352E6CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m225B60E78468F0052D88848C072D135CBB4C2386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m0D56FE042D7C59FC573223E1ECA324B0555A7240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m67459CCB5C4097B2C230A163B97637A4AF049004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m79D8C12C64B9D4617D013980ECDDBBF91DA7303E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA9BA9798221E0A85DD20EC97EF62A005197EA8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m893C65DAF893C60A841609A7D9076B4788556837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0AB1EA3BB9A670C7949B0453F61F9CA87D85E22F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mF02811155D0F2917B1942DECA41DF5DDE60BE72F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_mCF5FB080BF2B1B25F1632446E7F8A498890AF801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_m0086B68A646A1757CB71893C89151A4C5DCF5307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m82F4FF72E5FB394E91B0D5D4C0A3B7A34BB189A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIgnoreCollidersU3Ed__2_System_Collections_IEnumerator_Reset_m8345E8544159D2E12E5BE3C511A94A92E1DAF7D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveKeyU3Ed__13_System_Collections_IEnumerator_Reset_m8B303C10C799B16E6DAAB9AEF67E3D6A94D1482E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveKeyU3Ed__6_System_Collections_IEnumerator_Reset_mBEE202005FBB72AD21B5D0D25772B6DA9BA85EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenDoorRoutineU3Ed__11_System_Collections_IEnumerator_Reset_m171EC177C67BA7A6626CA67AA3ACC3AD0761F34F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_m51415536515F7D05F8CCD5586E0D0B093567BCD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__21_0_m9792FEEA2F8FDFB1919474FE16253407475757E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__21_1_mEA168A4B643B3A9E9C38E34E44E992326D6C585D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__21_2_m6A23F5D8D3ED576D882505CC103824BF32F63195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__21_3_mE239525380D8EA93A3BB42A35E8299EF8622AED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__21_4_m01861EEACC630E93DD62AFABB77EF3E344848CB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__6_0_m885A99B97891FD7A4045E291C3965460979FF622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__7_0_mF6BF40B870BA747C3FA5158390DFB80C4C25219B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CAddResetGrabbableU3Eb__0_m53708313B1360FCCE659FF7E2C0278E6EDCF8782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m326988BDE31056C04EFE1C336A0985C954BACE74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mC6234AE0B45EAAC87E939A301DD5A34F344958C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m3B3D236026298DEB2FFA5865C91E81A91CEB7C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_mD7DB3A7C8C28B7F02CD6480126E322FF090C83CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mC76EFDB8EC97C21D69269426311A3E135CBE67A6_RuntimeMethod_var;
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com;
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD;
struct HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F;
struct HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2;
struct HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B;
struct HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634;
struct HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable>
struct List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>
struct List_1_t0546410FB3DD901156EF02285245EBDB24982ECB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0546410FB3DD901156EF02285245EBDB24982ECB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>
struct List_1_tA910625D0D90E7578EB9529664A9C52989FF743E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ResetStateU5BU5D_tE457A5FF5403427E495A5C02B9AFF5ACF0921A77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA910625D0D90E7578EB9529664A9C52989FF743E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ResetStateU5BU5D_tE457A5FF5403427E495A5C02B9AFF5ACF0921A77* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// HurricaneVR.Framework.Core.Grabbers.HVRGrabArgs
struct HVRGrabArgs_t97F9557A995F4B4355D9A1C7BD04582FD79A8191  : public RuntimeObject
{
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabArgs::Cancel
	bool ___Cancel_0;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRGrabArgs::Grabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___Grabbable_1;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabArgs::RaiseEvents
	bool ___RaiseEvents_2;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c
struct U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21  : public RuntimeObject
{
};

struct U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_StaticFields
{
	// HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c::<>9
	U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Collider,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c::<>9__1_0
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* ___U3CU3E9__1_0_1;
};

// HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2
struct U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947  : public RuntimeObject
{
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HurricaneVR.TechDemo.Scripts.DemoBackpack HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::<>4__this
	DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* ___U3CU3E4__this_2;
};

// HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c
struct U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319  : public RuntimeObject
{
};

struct U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_StaticFields
{
	// HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c::<>9
	U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319* ___U3CU3E9_0;
	// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c::<>9__7_0
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* ___U3CU3E9__7_0_1;
};

// HurricaneVR.TechDemo.Scripts.DemoHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983  : public RuntimeObject
{
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoHelper/<>c__DisplayClass6_0::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_0;
	// System.Func`2<HurricaneVR.Framework.Core.HVRGrabbable,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoHelper/<>c__DisplayClass6_0::<>9__0
	Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* ___U3CU3E9__0_1;
};

// HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c
struct U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4  : public RuntimeObject
{
};

struct U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_StaticFields
{
	// HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c::<>9
	U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4* ___U3CU3E9_0;
	// System.Func`2<HurricaneVR.Framework.Core.Player.HVRTeleporter,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c::<>9__6_0
	Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* ___U3CU3E9__6_0_1;
};

// HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11
struct U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA  : public RuntimeObject
{
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HurricaneVR.TechDemo.Scripts.DemoSlidingDoor HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::<>4__this
	DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* ___U3CU3E4__this_2;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::<elapsed>5__2
	float ___U3CelapsedU3E5__2_3;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::<LockRotateSpeed>5__3
	float ___U3CLockRotateSpeedU3E5__3_4;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::<time>5__4
	float ___U3CtimeU3E5__4_5;
};

// HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c
struct U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1  : public RuntimeObject
{
};

struct U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields
{
	// HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<>9
	U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* ___U3CU3E9_0;
	// System.Func`2<HurricaneVR.Framework.Core.Player.HVRPlayerController,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<>9__21_0
	Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* ___U3CU3E9__21_0_1;
	// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<>9__21_1
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* ___U3CU3E9__21_1_2;
	// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<>9__21_2
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* ___U3CU3E9__21_2_3;
	// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<>9__21_3
	Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* ___U3CU3E9__21_3_4;
	// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber,System.Boolean> HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<>9__21_4
	Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* ___U3CU3E9__21_4_5;
};

// System.Collections.Generic.List`1/Enumerator<HurricaneVR.Framework.Core.HVRGrabbable>
struct Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>
struct Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<HurricaneVR.Framework.Components.HVRPhysicsButton>
struct UnityEvent_1_t5398DF5B673C8BF340E7B001503295158FF6B18E  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>
struct UnityEvent_1_t13C3A5E078C5974B6FEA4772A5FF2B2EF3319C51  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityEvent_2_tCFA8BBFEAE5D89F7A1C8F8CE2AABD8A06A537D63  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityEvent_2_tB914EBCCD72B43E4BDAE818B93F4FB0BC4D8F690  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable>
struct UnityEvent_2_t03AD5FDC8390DF436A87E03102EA86A7E3FEB0F7  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// HurricaneVR.Framework.Shared.HVRButtonState
struct HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 
{
	// System.Boolean HurricaneVR.Framework.Shared.HVRButtonState::Active
	bool ___Active_0;
	// System.Boolean HurricaneVR.Framework.Shared.HVRButtonState::JustActivated
	bool ___JustActivated_1;
	// System.Boolean HurricaneVR.Framework.Shared.HVRButtonState::JustDeactivated
	bool ___JustDeactivated_2;
	// System.Single HurricaneVR.Framework.Shared.HVRButtonState::Value
	float ___Value_3;
};
// Native definition for P/Invoke marshalling of HurricaneVR.Framework.Shared.HVRButtonState
struct HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721_marshaled_pinvoke
{
	int32_t ___Active_0;
	int32_t ___JustActivated_1;
	int32_t ___JustDeactivated_2;
	float ___Value_3;
};
// Native definition for COM marshalling of HurricaneVR.Framework.Shared.HVRButtonState
struct HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721_marshaled_com
{
	int32_t ___Active_0;
	int32_t ___JustActivated_1;
	int32_t ___JustDeactivated_2;
	float ___Value_3;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.JointLimits
struct JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A 
{
	// System.Single UnityEngine.JointLimits::m_Min
	float ___m_Min_0;
	// System.Single UnityEngine.JointLimits::m_Max
	float ___m_Max_1;
	// System.Single UnityEngine.JointLimits::m_Bounciness
	float ___m_Bounciness_2;
	// System.Single UnityEngine.JointLimits::m_BounceMinVelocity
	float ___m_BounceMinVelocity_3;
	// System.Single UnityEngine.JointLimits::m_ContactDistance
	float ___m_ContactDistance_4;
	// System.Single UnityEngine.JointLimits::minBounce
	float ___minBounce_5;
	// System.Single UnityEngine.JointLimits::maxBounce
	float ___maxBounce_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// HurricaneVR.Framework.Components.HVRButtonEvent
struct HVRButtonEvent_t356796E6E11193C52BC8DAFEF14D9E579210892B  : public UnityEvent_1_t5398DF5B673C8BF340E7B001503295158FF6B18E
{
};

// HurricaneVR.Framework.Core.Stabbing.HVRStabEvent
struct HVRStabEvent_t272C60B0E7CB75467B6BD510CD7DF8E031385924  : public UnityEvent_1_t13C3A5E078C5974B6FEA4772A5FF2B2EF3319C51
{
};

// HurricaneVR.Framework.Core.Stabbing.HVRStabEvents
struct HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7  : public UnityEvent_2_t03AD5FDC8390DF436A87E03102EA86A7E3FEB0F7
{
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// HurricaneVR.Framework.Core.Stabbing.StabArgs
struct StabArgs_tF1A76988CACFAE49F574A83B0D37D414F9E3BB7D 
{
	// HurricaneVR.Framework.Core.Stabbing.HVRStabber HurricaneVR.Framework.Core.Stabbing.StabArgs::Stabber
	HVRStabber_tE60C171AECD2D5487B702E7C6C27194FFC364904* ___Stabber_0;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabbable HurricaneVR.Framework.Core.Stabbing.StabArgs::Stabbable
	HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* ___Stabbable_1;
	// UnityEngine.Collision HurricaneVR.Framework.Core.Stabbing.StabArgs::Collision
	Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___Collision_2;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Stabbing.StabArgs::Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_3;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Stabbing.StabArgs::Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal_4;
};
// Native definition for P/Invoke marshalling of HurricaneVR.Framework.Core.Stabbing.StabArgs
struct StabArgs_tF1A76988CACFAE49F574A83B0D37D414F9E3BB7D_marshaled_pinvoke
{
	HVRStabber_tE60C171AECD2D5487B702E7C6C27194FFC364904* ___Stabber_0;
	HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* ___Stabbable_1;
	Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke* ___Collision_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal_4;
};
// Native definition for COM marshalling of HurricaneVR.Framework.Core.Stabbing.StabArgs
struct StabArgs_tF1A76988CACFAE49F574A83B0D37D414F9E3BB7D_marshaled_com
{
	HVRStabber_tE60C171AECD2D5487B702E7C6C27194FFC364904* ___Stabber_0;
	HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* ___Stabbable_1;
	Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com* ___Collision_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal_4;
};

// HurricaneVR.Framework.Core.VRGrabberEvent
struct VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C  : public UnityEvent_2_tCFA8BBFEAE5D89F7A1C8F8CE2AABD8A06A537D63
{
};

// HurricaneVR.Framework.Core.VRHandGrabberEvent
struct VRHandGrabberEvent_t43EC3CE57F33FAC044A3D4338C967C5831F76D16  : public UnityEvent_2_tB914EBCCD72B43E4BDAE818B93F4FB0BC4D8F690
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState
struct ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C  : public RuntimeObject
{
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::Grabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___Grabbable_0;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::Clone
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___Clone_1;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_2;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_3;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_4;
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::Parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Parent_5;
};

// HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13
struct U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7  : public RuntimeObject
{
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::key
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key_2;
	// HurricaneVR.TechDemo.Scripts.DemoLock HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::<>4__this
	DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* ___U3CU3E4__this_3;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::<start>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartU3E5__2_4;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::<startRot>5__3
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CstartRotU3E5__3_5;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::<elapsed>5__4
	float ___U3CelapsedU3E5__4_6;
};

// HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6
struct U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20  : public RuntimeObject
{
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::key
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key_2;
	// HurricaneVR.TechDemo.Scripts.DemoValveLock HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::<>4__this
	DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* ___U3CU3E4__this_3;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::<start>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartU3E5__2_4;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::<startRot>5__3
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CstartRotU3E5__3_5;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::<elapsed>5__4
	float ___U3CelapsedU3E5__4_6;
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<HurricaneVR.Framework.Core.HVRGrabbable>
struct Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04  : public MulticastDelegate_t
{
};

// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber,System.Boolean>
struct Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E  : public MulticastDelegate_t
{
};

// System.Func`2<HurricaneVR.Framework.Core.HVRGrabbable,System.Boolean>
struct Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E  : public MulticastDelegate_t
{
};

// System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,System.Boolean>
struct Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03  : public MulticastDelegate_t
{
};

// System.Func`2<HurricaneVR.Framework.Core.Player.HVRPlayerController,System.Boolean>
struct Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC  : public MulticastDelegate_t
{
};

// System.Func`2<HurricaneVR.Framework.Core.Player.HVRTeleporter,System.Boolean>
struct Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<HurricaneVR.Framework.Components.HVRPhysicsButton>
struct UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>
struct UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,HurricaneVR.Framework.Core.HVRGrabbable>
struct UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable>
struct UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// HurricaneVR.Framework.Core.HVRSettings
struct HVRSettings_tF57CCCAFB711DE66F81893E04363569A1C4AF080  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String HurricaneVR.Framework.Core.HVRSettings::LocalEditorRootDirectory
	String_t* ___LocalEditorRootDirectory_6;
	// System.String HurricaneVR.Framework.Core.HVRSettings::LocalRootDirectory
	String_t* ___LocalRootDirectory_7;
	// System.String HurricaneVR.Framework.Core.HVRSettings::LocalResourcesDirectory
	String_t* ___LocalResourcesDirectory_8;
	// System.String HurricaneVR.Framework.Core.HVRSettings::LocalRuntimePosesDirectory
	String_t* ___LocalRuntimePosesDirectory_9;
	// System.String HurricaneVR.Framework.Core.HVRSettings::LocalPosesDirectory
	String_t* ___LocalPosesDirectory_10;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::AutoApplyGrabbableLayer
	bool ___AutoApplyGrabbableLayer_17;
	// HurricaneVR.Framework.Core.Sockets.HVRSocketableTags HurricaneVR.Framework.Core.HVRSettings::DefaultSocketableTags
	HVRSocketableTags_tF30D12078E7D23094432A3D208E63F5484F96C21* ___DefaultSocketableTags_18;
	// UnityEngine.GameObject HurricaneVR.Framework.Core.HVRSettings::LeftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LeftHand_19;
	// UnityEngine.GameObject HurricaneVR.Framework.Core.HVRSettings::RightHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RightHand_20;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::InverseKinematics
	bool ___InverseKinematics_21;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::IKHandMirroring
	bool ___IKHandMirroring_22;
	// UnityEngine.GameObject HurricaneVR.Framework.Core.HVRSettings::FullBody
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FullBody_23;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRSettings::HandPoseHandleOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HandPoseHandleOffset_24;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandPose HurricaneVR.Framework.Core.HVRSettings::OpenHandPose
	HVRHandPose_t315CF1C747DB0B1A2B0D7EE89E317285D751CE2F* ___OpenHandPose_25;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::PoserShowsOneFinger
	bool ___PoserShowsOneFinger_26;
	// HurricaneVR.Framework.Core.HandPoser.HVRFingerType HurricaneVR.Framework.Core.HVRSettings::ThumbCurlType
	int32_t ___ThumbCurlType_27;
	// HurricaneVR.Framework.Core.HandPoser.HVRFingerType HurricaneVR.Framework.Core.HVRSettings::IndexCurlType
	int32_t ___IndexCurlType_28;
	// HurricaneVR.Framework.Core.HandPoser.HVRFingerType HurricaneVR.Framework.Core.HVRSettings::MiddleCurlType
	int32_t ___MiddleCurlType_29;
	// HurricaneVR.Framework.Core.HandPoser.HVRFingerType HurricaneVR.Framework.Core.HVRSettings::RingCurlType
	int32_t ___RingCurlType_30;
	// HurricaneVR.Framework.Core.HandPoser.HVRFingerType HurricaneVR.Framework.Core.HVRSettings::PinkyCurlType
	int32_t ___PinkyCurlType_31;
	// System.Single HurricaneVR.Framework.Core.HVRSettings::ThumbStart
	float ___ThumbStart_32;
	// System.Single HurricaneVR.Framework.Core.HVRSettings::IndexStart
	float ___IndexStart_33;
	// System.Single HurricaneVR.Framework.Core.HVRSettings::MiddleStart
	float ___MiddleStart_34;
	// System.Single HurricaneVR.Framework.Core.HVRSettings::RingStart
	float ___RingStart_35;
	// System.Single HurricaneVR.Framework.Core.HVRSettings::PinkyStart
	float ___PinkyStart_36;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::UseAttachedRigidBody
	bool ___UseAttachedRigidBody_37;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::ComponentInParentFallback
	bool ___ComponentInParentFallback_38;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::LineGrabTriggerLoose
	bool ___LineGrabTriggerLoose_39;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.HVRSettings::DefaultJointSettings
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___DefaultJointSettings_40;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.HVRSettings::LineGrabSettings
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___LineGrabSettings_41;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::VerboseGrabbableEvents
	bool ___VerboseGrabbableEvents_42;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::VerboseHandGrabberEvents
	bool ___VerboseHandGrabberEvents_43;
	// System.Boolean HurricaneVR.Framework.Core.HVRSettings::DisableHaptics
	bool ___DisableHaptics_44;
};

struct HVRSettings_tF57CCCAFB711DE66F81893E04363569A1C4AF080_StaticFields
{
	// HurricaneVR.Framework.Core.HVRSettings HurricaneVR.Framework.Core.HVRSettings::_instance
	HVRSettings_tF57CCCAFB711DE66F81893E04363569A1C4AF080* ____instance_5;
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
};

// UnityEngine.HingeJoint
struct HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Anvil
struct Anvil_t24D2D6FC17D908B44534868B39FABAE24FC4DF4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ChangeColor
struct ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer ChangeColor::_cube
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____cube_4;
	// UnityEngine.Color ChangeColor::_newCubeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____newCubeColor_5;
	// System.Single ChangeColor::_random1
	float ____random1_6;
	// System.Single ChangeColor::_random2
	float ____random2_7;
	// System.Single ChangeColor::_random3
	float ____random3_8;
};

// Check
struct Check_t98555E4541CA6FC5875BBCF96442628FAFF675F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HurricaneVR.TechDemo.Scripts.DemoBackpack
struct DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Collider> HurricaneVR.TechDemo.Scripts.DemoBackpack::Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___Colliders_4;
};

// HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing
struct DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::<Grabber>k__BackingField
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___U3CGrabberU3Ek__BackingField_4;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::Grabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___Grabbable_5;
	// HurricaneVR.Framework.Shared.HVRGrabTrigger HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::GrabTrigger
	int32_t ___GrabTrigger_6;
	// HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::GrabPoint
	HVRPosableGrabPoint_t45AD7B3827EE2CFF89742F05F9FFD2E208D9CB23* ___GrabPoint_7;
};

// HurricaneVR.TechDemo.Scripts.DemoDummyArm
struct DemoDummyArm_tAB2AD7E697B5DB0CE23303F4EFC2DBFC9B6A27EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoDummyArm::Anchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Anchor_4;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoDummyArm::Length
	float ___Length_5;
	// UnityEngine.LineRenderer HurricaneVR.TechDemo.Scripts.DemoDummyArm::Rope
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___Rope_6;
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoDummyArm::ArmRopeAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ArmRopeAnchor_7;
};

// HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti
struct DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.Stabbing.HVRStabbable HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::Stabbable
	HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* ___Stabbable_4;
	// UnityEngine.ParticleSystem HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::Confetti
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___Confetti_5;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::OnFullStab
	bool ___OnFullStab_6;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_7;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_8;
};

// HurricaneVR.TechDemo.Scripts.DemoGlassRotate
struct DemoGlassRotate_tE49811E14A1FF9B74C86C24493B000331AE8D2DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HurricaneVR.TechDemo.Scripts.DemoGlassRotate::Timer
	float ___Timer_4;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoGlassRotate::Degrees
	float ___Degrees_5;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoGlassRotate::Unlocked
	bool ___Unlocked_6;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoGlassRotate::DoneRotating
	bool ___DoneRotating_7;
	// UnityEngine.AudioClip HurricaneVR.TechDemo.Scripts.DemoGlassRotate::SFXOpen
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXOpen_8;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoGlassRotate::_elapsed
	float ____elapsed_9;
};

// HurricaneVR.TechDemo.Scripts.DemoHatchDoor
struct DemoHatchDoor_t2709BFF9CCDB2E23EFC7CFF1694E224B33090A70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HurricaneVR.TechDemo.Scripts.DemoHatchDoor::Timer
	float ___Timer_4;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoHatchDoor::Degrees
	float ___Degrees_5;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoHatchDoor::Unlocked
	bool ___Unlocked_6;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoHatchDoor::DoneRotating
	bool ___DoneRotating_7;
	// UnityEngine.AudioClip HurricaneVR.TechDemo.Scripts.DemoHatchDoor::SFXOpen
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXOpen_8;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoHatchDoor::_elapsed
	float ____elapsed_9;
};

// HurricaneVR.TechDemo.Scripts.DemoHeavyDoor
struct DemoHeavyDoor_t310E87E094DEC7C4717C2E0D589A0FFB5D1BDD73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::DoorRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___DoorRigidbody_4;
	// HurricaneVR.Framework.Components.HVRRotationTracker HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::ValveTracker
	HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* ___ValveTracker_5;
	// HurricaneVR.Framework.Components.HVRRotationLimiter HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::Limiter
	HVRRotationLimiter_tF5CD8BEF6539AEF6B30DD3CC7E163EB09771C672* ___Limiter_6;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::MaxAngle
	float ___MaxAngle_7;
	// UnityEngine.AudioClip[] HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::SFX
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___SFX_8;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::SFXAngle
	float ___SFXAngle_9;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::Angle
	float ___Angle_10;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::_startRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____startRotation_11;
};

// HurricaneVR.TechDemo.Scripts.DemoHelper
struct DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Transform> HurricaneVR.TechDemo.Scripts.DemoHelper::Parents
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___Parents_4;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable> HurricaneVR.TechDemo.Scripts.DemoHelper::Grabbables
	List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* ___Grabbables_5;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoHelper::ForceReset
	bool ___ForceReset_6;
	// System.Collections.Generic.List`1<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState> HurricaneVR.TechDemo.Scripts.DemoHelper::_grabbableState
	List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* ____grabbableState_7;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable> HurricaneVR.TechDemo.Scripts.DemoHelper::_balls
	List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* ____balls_8;
};

// HurricaneVR.TechDemo.Scripts.DemoHolsterOrientation
struct DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoHolsterOrientation::Orientation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Orientation_4;
};

// HurricaneVR.TechDemo.Scripts.DemoKeyHologram
struct DemoKeyHologram_tFC3E8A155E1BA9C1CAB774F214137B6BEAA3A47C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HurricaneVR.TechDemo.Scripts.DemoKeyHologram::Interval
	float ___Interval_4;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoKeyHologram::LastMove
	float ___LastMove_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> HurricaneVR.TechDemo.Scripts.DemoKeyHologram::Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Positions_6;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoKeyHologram::Index
	int32_t ___Index_7;
};

// HurricaneVR.TechDemo.Scripts.DemoKeypad
struct DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent HurricaneVR.TechDemo.Scripts.DemoKeypad::Unlocked
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Unlocked_4;
	// System.String HurricaneVR.TechDemo.Scripts.DemoKeypad::Code
	String_t* ___Code_5;
	// TMPro.TextMeshPro HurricaneVR.TechDemo.Scripts.DemoKeypad::Display
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___Display_6;
	// System.String HurricaneVR.TechDemo.Scripts.DemoKeypad::Entry
	String_t* ___Entry_7;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoKeypad::ForceUnlock
	bool ___ForceUnlock_8;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoKeypad::_unlocked
	bool ____unlocked_9;
};

// HurricaneVR.TechDemo.Scripts.DemoLeverDisplay
struct DemoLeverDisplay_t2762C179729C7EF04242CC997D3EDBB9DE01675A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoLeverDisplay::_step
	int32_t ____step_4;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoLeverDisplay::_angle
	float ____angle_5;
	// TMPro.TextMeshPro HurricaneVR.TechDemo.Scripts.DemoLeverDisplay::_tm
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ____tm_6;
};

// HurricaneVR.TechDemo.Scripts.DemoLock
struct DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket HurricaneVR.TechDemo.Scripts.DemoLock::Socket
	DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* ___Socket_4;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoLock::FaceGrabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___FaceGrabbable_5;
	// UnityEngine.GameObject HurricaneVR.TechDemo.Scripts.DemoLock::Face
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Face_6;
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoLock::Key
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Key_7;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoLock::AnimationTime
	float ___AnimationTime_8;
	// UnityEngine.AudioClip HurricaneVR.TechDemo.Scripts.DemoLock::SFXUnlocked
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXUnlocked_9;
	// UnityEngine.AudioClip HurricaneVR.TechDemo.Scripts.DemoLock::SFXKeyInserted
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXKeyInserted_10;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoLock::LockThreshold
	float ___LockThreshold_11;
	// UnityEngine.Events.UnityEvent HurricaneVR.TechDemo.Scripts.DemoLock::Unlocked
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Unlocked_12;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoLock::_unlocked
	bool ____unlocked_13;
};

// HurricaneVR.TechDemo.Scripts.DemoLockedDoor
struct DemoLockedDoor_tCA3885325CA417F739F7C6ED111865E68CCBAB15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.HingeJoint HurricaneVR.TechDemo.Scripts.DemoLockedDoor::_hinge
	HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* ____hinge_4;
	// UnityEngine.Rigidbody HurricaneVR.TechDemo.Scripts.DemoLockedDoor::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_5;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoLockedDoor::MinAngle
	float ___MinAngle_6;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoLockedDoor::MaxAngle
	float ___MaxAngle_7;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoLockedDoor::LockOnStart
	bool ___LockOnStart_8;
};

// HurricaneVR.TechDemo.Scripts.DemoManualTeleport
struct DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoManualTeleport::PositionOne
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___PositionOne_4;
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoManualTeleport::PositionTwo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___PositionTwo_5;
	// HurricaneVR.Framework.Core.Player.HVRTeleporter HurricaneVR.TechDemo.Scripts.DemoManualTeleport::<Teleporter>k__BackingField
	HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* ___U3CTeleporterU3Ek__BackingField_6;
};

// HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze
struct DemoPoseSqueeze_tFA3148A5165E33446ED8354D9EB07487D83B90AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_4;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::ScaleTarget
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ScaleTarget_5;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::Grabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___Grabbable_6;
	// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::_scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scale_7;
};

// HurricaneVR.TechDemo.Scripts.DemoPowerUnit
struct DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent HurricaneVR.TechDemo.Scripts.DemoPowerUnit::PoweredUp
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___PoweredUp_4;
	// HurricaneVR.Framework.Core.Grabbers.HVRSocket HurricaneVR.TechDemo.Scripts.DemoPowerUnit::LeftSocket
	HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___LeftSocket_5;
	// HurricaneVR.Framework.Core.Grabbers.HVRSocket HurricaneVR.TechDemo.Scripts.DemoPowerUnit::RightSocket
	HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___RightSocket_6;
	// UnityEngine.MeshRenderer HurricaneVR.TechDemo.Scripts.DemoPowerUnit::LeftLight
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___LeftLight_7;
	// UnityEngine.MeshRenderer HurricaneVR.TechDemo.Scripts.DemoPowerUnit::RightLight
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___RightLight_8;
	// HurricaneVR.Framework.Components.HVRRotationTracker HurricaneVR.TechDemo.Scripts.DemoPowerUnit::LeverRotation
	HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* ___LeverRotation_9;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoPowerUnit::RequiredAngle
	float ___RequiredAngle_10;
	// UnityEngine.AudioClip HurricaneVR.TechDemo.Scripts.DemoPowerUnit::SFXPoweredOn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXPoweredOn_11;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoPowerUnit::RequiredCells
	int32_t ___RequiredCells_12;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoPowerUnit::SocketedCellCount
	int32_t ___SocketedCellCount_13;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoPowerUnit::Engaged
	bool ___Engaged_14;
	// UnityEngine.Material HurricaneVR.TechDemo.Scripts.DemoPowerUnit::OnMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___OnMaterial_15;
};

// HurricaneVR.TechDemo.Scripts.DemoSafeDoor
struct DemoSafeDoor_tD52081A64E4CDBA6E3365613B3432B910D996287  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HurricaneVR.TechDemo.Scripts.DemoSlidingDoor
struct DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::LeftDoor
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___LeftDoor_4;
	// UnityEngine.Rigidbody HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::RightDoor
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___RightDoor_5;
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::Lock
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Lock_6;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::LockRotateTime
	float ___LockRotateTime_7;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::LockRotateAngles
	float ___LockRotateAngles_8;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::OpenOffset
	float ___OpenOffset_9;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::Speed
	float ___Speed_10;
	// UnityEngine.AudioClip HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::OpenedClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___OpenedClip_11;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::_opened
	bool ____opened_12;
};

// HurricaneVR.TechDemo.Scripts.DemoUIManager
struct DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.Player.HVRPlayerController HurricaneVR.TechDemo.Scripts.DemoUIManager::Player
	HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* ___Player_4;
	// HurricaneVR.Framework.Core.Player.HVRCameraRig HurricaneVR.TechDemo.Scripts.DemoUIManager::CameraRig
	HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* ___CameraRig_5;
	// HurricaneVR.Framework.ControllerInput.HVRPlayerInputs HurricaneVR.TechDemo.Scripts.DemoUIManager::Inputs
	HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* ___Inputs_6;
	// TMPro.TextMeshProUGUI HurricaneVR.TechDemo.Scripts.DemoUIManager::SitStandText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___SitStandText_7;
	// TMPro.TextMeshProUGUI HurricaneVR.TechDemo.Scripts.DemoUIManager::PauseText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___PauseText_8;
	// TMPro.TextMeshProUGUI HurricaneVR.TechDemo.Scripts.DemoUIManager::ForceGrabText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ForceGrabText_9;
	// TMPro.TextMeshProUGUI HurricaneVR.TechDemo.Scripts.DemoUIManager::LeftForceText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___LeftForceText_10;
	// TMPro.TextMeshProUGUI HurricaneVR.TechDemo.Scripts.DemoUIManager::RightForceText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___RightForceText_11;
	// UnityEngine.UI.Slider HurricaneVR.TechDemo.Scripts.DemoUIManager::TurnRateSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___TurnRateSlider_12;
	// UnityEngine.UI.Slider HurricaneVR.TechDemo.Scripts.DemoUIManager::SnapTurnSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___SnapTurnSlider_13;
	// TMPro.TextMeshProUGUI HurricaneVR.TechDemo.Scripts.DemoUIManager::TurnRateText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TurnRateText_14;
	// TMPro.TextMeshProUGUI HurricaneVR.TechDemo.Scripts.DemoUIManager::SnapRateText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___SnapRateText_15;
	// UnityEngine.UI.Toggle HurricaneVR.TechDemo.Scripts.DemoUIManager::SmoothTurnToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___SmoothTurnToggle_16;
	// UnityEngine.UI.Toggle HurricaneVR.TechDemo.Scripts.DemoUIManager::LineGrabTrigger
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___LineGrabTrigger_17;
	// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber HurricaneVR.TechDemo.Scripts.DemoUIManager::LeftForce
	HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* ___LeftForce_18;
	// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber HurricaneVR.TechDemo.Scripts.DemoUIManager::RightForce
	HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* ___RightForce_19;
	// HurricaneVR.Framework.Core.Player.HVRJointHand HurricaneVR.TechDemo.Scripts.DemoUIManager::LeftHand
	HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* ___LeftHand_20;
	// HurricaneVR.Framework.Core.Player.HVRJointHand HurricaneVR.TechDemo.Scripts.DemoUIManager::RightHand
	HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* ___RightHand_21;
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoUIManager::leftparent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftparent_22;
	// UnityEngine.Transform HurricaneVR.TechDemo.Scripts.DemoUIManager::rightParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightParent_23;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoUIManager::Paused
	bool ___Paused_24;
};

// HurricaneVR.TechDemo.Scripts.DemoValveHologram
struct DemoValveHologram_t438B846EB94B0089D63151778AFE3EE3F49D260A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HurricaneVR.TechDemo.Scripts.DemoValveHologram::Interval
	float ___Interval_4;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoValveHologram::StartRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___StartRotation_5;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoValveHologram::EndRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EndRotation_6;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoValveHologram::_current
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____current_7;
	// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoValveHologram::_next
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____next_8;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoValveHologram::_elapsed
	float ____elapsed_9;
};

// HurricaneVR.TechDemo.Scripts.DemoValveLock
struct DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket HurricaneVR.TechDemo.Scripts.DemoValveLock::Socket
	DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* ___Socket_4;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.TechDemo.Scripts.DemoValveLock::FaceGrabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___FaceGrabbable_5;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoValveLock::AnimationTime
	float ___AnimationTime_6;
};

// Furnace
struct Furnace_t8F026DF0C9B18D78FF6B77676B1810DB1CB8CDB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HurricaneVR.Framework.Core.Player.HVRCameraRig
struct HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRCameraRig::Camera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Camera_5;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRCameraRig::FloorOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FloorOffset_6;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRCameraRig::CameraScale
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___CameraScale_7;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::CameraYOffset
	float ___CameraYOffset_8;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::EyeHeight
	float ___EyeHeight_9;
	// HurricaneVR.Framework.Core.Player.HVRSitStand HurricaneVR.Framework.Core.Player.HVRCameraRig::SitStanding
	int32_t ___SitStanding_10;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRCameraRig::DebugKeyboardOffset
	bool ___DebugKeyboardOffset_11;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::DebugKeyboardIncrement
	float ___DebugKeyboardIncrement_12;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRCameraRig::SaveCalibrationHeight
	bool ___SaveCalibrationHeight_13;
	// HurricaneVR.Framework.Core.Player.HVRDebugCalibrate HurricaneVR.Framework.Core.Player.HVRCameraRig::DebugCalibMode
	int32_t ___DebugCalibMode_14;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::DebugCalibMovedThreshold
	float ___DebugCalibMovedThreshold_15;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRCameraRig::DebugKeyboardRecalibrate
	bool ___DebugKeyboardRecalibrate_16;
	// UnityEngine.KeyCode HurricaneVR.Framework.Core.Player.HVRCameraRig::RecalibrateKey
	int32_t ___RecalibrateKey_17;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::PlayerControllerYOffset
	float ___PlayerControllerYOffset_18;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::AdjustedCameraHeight
	float ___AdjustedCameraHeight_19;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::SittingOffset
	float ___SittingOffset_20;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRCameraRig::_cameraStartingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____cameraStartingPosition_21;
	// System.Single HurricaneVR.Framework.Core.Player.HVRCameraRig::_scale
	float ____scale_22;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRCameraRig::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_23;
};

// HurricaneVR.Framework.Shared.HVRController
struct HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Shared.HVRHandSide HurricaneVR.Framework.Shared.HVRController::<Side>k__BackingField
	int32_t ___U3CSideU3Ek__BackingField_4;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::GripButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___GripButtonState_5;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TriggerButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TriggerButtonState_6;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::PrimaryButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___PrimaryButtonState_7;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::SecondaryButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___SecondaryButtonState_8;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::MenuButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___MenuButtonState_9;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::PrimaryTouchButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___PrimaryTouchButtonState_10;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::SecondaryTouchButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___SecondaryTouchButtonState_11;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::JoystickButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___JoystickButtonState_12;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TrackpadButtonState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TrackpadButtonState_13;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::JoystickTouchState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___JoystickTouchState_14;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TrackPadTouchState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TrackPadTouchState_15;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TriggerTouchState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TriggerTouchState_16;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::ThumbTouchState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___ThumbTouchState_17;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TriggerNearTouchState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TriggerNearTouchState_18;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::ThumbNearTouchState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___ThumbNearTouchState_19;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TrackPadUp
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TrackPadUp_20;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TrackPadLeft
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TrackPadLeft_21;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TrackPadRight
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TrackPadRight_22;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.Shared.HVRController::TrackPadDown
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___TrackPadDown_23;
	// UnityEngine.Vector2 HurricaneVR.Framework.Shared.HVRController::JoystickAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___JoystickAxis_24;
	// UnityEngine.Vector2 HurricaneVR.Framework.Shared.HVRController::TrackpadAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TrackpadAxis_25;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::PrimaryButton
	bool ___PrimaryButton_26;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::SecondaryButton
	bool ___SecondaryButton_27;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::JoystickClicked
	bool ___JoystickClicked_28;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::TrackPadClicked
	bool ___TrackPadClicked_29;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::MenuButton
	bool ___MenuButton_30;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::PrimaryTouch
	bool ___PrimaryTouch_31;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::SecondaryTouch
	bool ___SecondaryTouch_32;
	// System.Single HurricaneVR.Framework.Shared.HVRController::Grip
	float ___Grip_33;
	// System.Single HurricaneVR.Framework.Shared.HVRController::GripForce
	float ___GripForce_34;
	// System.Single HurricaneVR.Framework.Shared.HVRController::Trigger
	float ___Trigger_35;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::ThumbTouch
	bool ___ThumbTouch_36;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::TriggerTouch
	bool ___TriggerTouch_37;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::ThumbNearTouch
	bool ___ThumbNearTouch_38;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::TriggerNearTouch
	bool ___TriggerNearTouch_39;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::GripButton
	bool ___GripButton_40;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::TriggerButton
	bool ___TriggerButton_41;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::JoystickTouch
	bool ___JoystickTouch_42;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::TrackPadTouch
	bool ___TrackPadTouch_43;
	// System.Single[] HurricaneVR.Framework.Shared.HVRController::FingerCurls
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___FingerCurls_44;
	// System.Single HurricaneVR.Framework.Shared.HVRController::ThumbCurl
	float ___ThumbCurl_45;
	// System.Single HurricaneVR.Framework.Shared.HVRController::IndexCurl
	float ___IndexCurl_46;
	// System.Single HurricaneVR.Framework.Shared.HVRController::MiddleCurl
	float ___MiddleCurl_47;
	// System.Single HurricaneVR.Framework.Shared.HVRController::RingCurl
	float ___RingCurl_48;
	// System.Single HurricaneVR.Framework.Shared.HVRController::PinkyCurl
	float ___PinkyCurl_49;
	// UnityEngine.Vector3 HurricaneVR.Framework.Shared.HVRController::Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity_50;
	// UnityEngine.Vector3 HurricaneVR.Framework.Shared.HVRController::AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AngularVelocity_51;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_52;
	// UnityEngine.XR.XRNode HurricaneVR.Framework.Shared.HVRController::XRNode
	int32_t ___XRNode_53;
	// UnityEngine.XR.InputDevice HurricaneVR.Framework.Shared.HVRController::_device
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____device_54;
	// UnityEngine.Vector2 HurricaneVR.Framework.Shared.HVRController::<ThumbstickDeadZone>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CThumbstickDeadZoneU3Ek__BackingField_55;
	// HurricaneVR.Framework.Shared.HVRInputSettings HurricaneVR.Framework.Shared.HVRController::<InputMap>k__BackingField
	HVRInputSettings_t6D6BC322F5C18BB8947F14A6A0EC4C6F9AB615E4* ___U3CInputMapU3Ek__BackingField_56;
	// HurricaneVR.Framework.Shared.HVRFingerSettings HurricaneVR.Framework.Shared.HVRController::<FingerSettings>k__BackingField
	HVRFingerSettings_t7C0A23C5BB635A4F8F7E3B09DD815F3E710A31A1* ___U3CFingerSettingsU3Ek__BackingField_57;
	// HurricaneVR.Framework.Shared.HVRControllerType HurricaneVR.Framework.Shared.HVRController::<ControllerType>k__BackingField
	int32_t ___U3CControllerTypeU3Ek__BackingField_62;
	// System.Single HurricaneVR.Framework.Shared.HVRController::AngularVelocityMagnitude
	float ___AngularVelocityMagnitude_63;
	// System.Single HurricaneVR.Framework.Shared.HVRController::VelocityMagnitude
	float ___VelocityMagnitude_64;
	// HurricaneVR.Framework.Shared.Utilities.CircularBuffer`1<System.Single> HurricaneVR.Framework.Shared.HVRController::RecentVelocities
	CircularBuffer_1_tC44EFCA00F62CEE34D60D6A4B399965D836EACB7* ___RecentVelocities_65;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::_triggerLowerReset
	bool ____triggerLowerReset_66;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::_triggerUpperReset
	bool ____triggerUpperReset_67;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::_gripLowerReset
	bool ____gripLowerReset_68;
	// System.Boolean HurricaneVR.Framework.Shared.HVRController::_gripUpperReset
	bool ____gripUpperReset_69;
};

struct HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0_StaticFields
{
	// System.Collections.Generic.Dictionary`2<HurricaneVR.Framework.Shared.HVRButtons,HurricaneVR.Framework.Shared.HVRButtonState> HurricaneVR.Framework.Shared.HVRController::_leftButtonStates
	Dictionary_2_t28B501D16A428241710277D28A2AD08940F5C6B6* ____leftButtonStates_58;
	// System.Collections.Generic.Dictionary`2<HurricaneVR.Framework.Shared.HVRButtons,HurricaneVR.Framework.Shared.HVRButtonState> HurricaneVR.Framework.Shared.HVRController::_rightButtonStates
	Dictionary_2_t28B501D16A428241710277D28A2AD08940F5C6B6* ____rightButtonStates_59;
	// System.Single[] HurricaneVR.Framework.Shared.HVRController::LeftFingerCurls
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___LeftFingerCurls_60;
	// System.Single[] HurricaneVR.Framework.Shared.HVRController::RightFingerCurls
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___RightFingerCurls_61;
};

// HurricaneVR.Framework.Core.HVRGrabbable
struct HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.GrabBehaviour HurricaneVR.Framework.Core.HVRGrabbable::GrabBehaviour
	int32_t ___GrabBehaviour_5;
	// HurricaneVR.Framework.Shared.PoseType HurricaneVR.Framework.Core.HVRGrabbable::PoseType
	int32_t ___PoseType_6;
	// HurricaneVR.Framework.Shared.HVRGrabTracking HurricaneVR.Framework.Core.HVRGrabbable::TrackingType
	int32_t ___TrackingType_7;
	// HurricaneVR.Framework.Shared.HVRHoldType HurricaneVR.Framework.Core.HVRGrabbable::HoldType
	int32_t ___HoldType_8;
	// HurricaneVR.Framework.Shared.HVRGrabControls HurricaneVR.Framework.Core.HVRGrabbable::GrabControl
	int32_t ___GrabControl_9;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::OverrideGrabTrigger
	bool ___OverrideGrabTrigger_10;
	// HurricaneVR.Framework.Shared.HVRGrabTrigger HurricaneVR.Framework.Core.HVRGrabbable::GrabTrigger
	int32_t ___GrabTrigger_11;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::RequireLineOfSight
	bool ___RequireLineOfSight_12;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::PoseImmediately
	bool ___PoseImmediately_13;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::ParentHandModel
	bool ___ParentHandModel_14;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::BreakDistance
	float ___BreakDistance_15;
	// HurricaneVR.Framework.Core.BreakDistanceSource HurricaneVR.Framework.Core.HVRGrabbable::BreakDistanceSource
	int32_t ___BreakDistanceSource_16;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::Stationary
	bool ___Stationary_17;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::ReleasedAngularConversionFactor
	float ___ReleasedAngularConversionFactor_18;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::ReleasedVelocityFactor
	float ___ReleasedVelocityFactor_19;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::ReleasedAngularFactor
	float ___ReleasedAngularFactor_20;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.HVRGrabbable::GrabIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ___GrabIndicator_21;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.HVRGrabbable::ForceGrabIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ___ForceGrabIndicator_22;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::ShowGrabIndicator
	bool ___ShowGrabIndicator_23;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::ShowTriggerGrabIndicator
	bool ___ShowTriggerGrabIndicator_24;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::ShowForceGrabIndicator
	bool ___ShowForceGrabIndicator_25;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::ForceGrabbable
	bool ___ForceGrabbable_26;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRForcePullSettings HurricaneVR.Framework.Core.HVRGrabbable::ForcePullOverride
	HVRForcePullSettings_tC18235BD7C7581749F6F037341AA583AA7BFC078* ___ForcePullOverride_27;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.HVRGrabbable::JointOverride
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___JointOverride_28;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.HVRGrabbable::OneHandJointSettings
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___OneHandJointSettings_29;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.HVRGrabbable::TwoHandJointSettings
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___TwoHandJointSettings_30;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.HVRGrabbable::PullingSettingsOverride
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___PullingSettingsOverride_31;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::PalmCenterOfMass
	bool ___PalmCenterOfMass_32;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.HVRGrabbable::HandGrabbedClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___HandGrabbedClip_33;
	// HurricaneVR.Framework.Core.Grabbers.HVRSocket HurricaneVR.Framework.Core.HVRGrabbable::StartingSocket
	HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___StartingSocket_34;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::LinkStartingSocket
	bool ___LinkStartingSocket_35;
	// HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint[] HurricaneVR.Framework.Core.HVRGrabbable::SocketGrabPoints
	HVRPosableGrabPointU5BU5D_tEDD8ABA4D8FABB38DF806BA5158585FE4D60021F* ___SocketGrabPoints_36;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.HVRGrabbable::Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___Rigidbody_37;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::AutoApplyLayer
	bool ___AutoApplyLayer_38;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::RequireOverlapClearance
	bool ___RequireOverlapClearance_39;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::OverlapTimeout
	float ___OverlapTimeout_40;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::FinalJointMaxAngle
	float ___FinalJointMaxAngle_41;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::FinalJointTimeout
	float ___FinalJointTimeout_42;
	// System.Collections.Generic.List`1<UnityEngine.Transform> HurricaneVR.Framework.Core.HVRGrabbable::CollisionParents
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___CollisionParents_43;
	// System.Collections.Generic.List`1<UnityEngine.Transform> HurricaneVR.Framework.Core.HVRGrabbable::ExtraIgnoreCollisionParents
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___ExtraIgnoreCollisionParents_44;
	// UnityEngine.Collider[] HurricaneVR.Framework.Core.HVRGrabbable::GrabColliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___GrabColliders_45;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::ConsiderGrabPointAngle
	bool ___ConsiderGrabPointAngle_46;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::UseColliderClosestPoint
	bool ___UseColliderClosestPoint_47;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::DisableHandCollision
	bool ___DisableHandCollision_48;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::AllowMultiplayerSwap
	bool ___AllowMultiplayerSwap_49;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.HVRGrabbable::MasterGrabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___MasterGrabbable_50;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable> HurricaneVR.Framework.Core.HVRGrabbable::LinkedGrabbables
	List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* ___LinkedGrabbables_51;
	// UnityEngine.CollisionDetectionMode HurricaneVR.Framework.Core.HVRGrabbable::CollisionDetection
	int32_t ___CollisionDetection_52;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::PhysicsPoserFallback
	bool ___PhysicsPoserFallback_53;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::OverrideMaxDistanceBehaviour
	bool ___OverrideMaxDistanceBehaviour_54;
	// HurricaneVR.Framework.Core.Player.MaxDistanceBehaviour HurricaneVR.Framework.Core.HVRGrabbable::MaxDistanceBehaviour
	int32_t ___MaxDistanceBehaviour_55;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::ShowBoundingBox
	bool ___ShowBoundingBox_56;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::DrawCenterOfMass
	bool ___DrawCenterOfMass_57;
	// System.Collections.Generic.List`1<UnityEngine.Transform> HurricaneVR.Framework.Core.HVRGrabbable::GrabPoints
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___GrabPoints_58;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> HurricaneVR.Framework.Core.HVRGrabbable::<GrabCollidersSet>k__BackingField
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ___U3CGrabCollidersSetU3Ek__BackingField_59;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<FilterGrabColliders>k__BackingField
	bool ___U3CFilterGrabCollidersU3Ek__BackingField_60;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::Deactivated
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___Deactivated_61;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::Activated
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___Activated_62;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::Grabbed
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___Grabbed_63;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::Released
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___Released_64;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::HoverEnter
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___HoverEnter_65;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::HoverExit
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___HoverExit_66;
	// HurricaneVR.Framework.Core.VRGrabbableEvent HurricaneVR.Framework.Core.HVRGrabbable::Collided
	VRGrabbableEvent_t8728B02D82F580AA72BA4959489134048B8D0946* ___Collided_67;
	// HurricaneVR.Framework.Core.VRGrabbableEvent HurricaneVR.Framework.Core.HVRGrabbable::Destroyed
	VRGrabbableEvent_t8728B02D82F580AA72BA4959489134048B8D0946* ___Destroyed_68;
	// HurricaneVR.Framework.Core.VRHandGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::HandGrabbed
	VRHandGrabberEvent_t43EC3CE57F33FAC044A3D4338C967C5831F76D16* ___HandGrabbed_69;
	// HurricaneVR.Framework.Core.VRHandGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::HandReleased
	VRHandGrabberEvent_t43EC3CE57F33FAC044A3D4338C967C5831F76D16* ___HandReleased_70;
	// HurricaneVR.Framework.Core.VRHandGrabberEvent HurricaneVR.Framework.Core.HVRGrabbable::HandFullReleased
	VRHandGrabberEvent_t43EC3CE57F33FAC044A3D4338C967C5831F76D16* ___HandFullReleased_71;
	// HurricaneVR.Framework.Core.VRSocketEvent HurricaneVR.Framework.Core.HVRGrabbable::Socketed
	VRSocketEvent_t0F3F156D923A9085A68893C921ACF4B8516ED357* ___Socketed_72;
	// HurricaneVR.Framework.Core.VRSocketEvent HurricaneVR.Framework.Core.HVRGrabbable::UnSocketed
	VRSocketEvent_t0F3F156D923A9085A68893C921ACF4B8516ED357* ___UnSocketed_73;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_74;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::<ElapsedSinceReleased>k__BackingField
	float ___U3CElapsedSinceReleasedU3Ek__BackingField_75;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<IsSocketed>k__BackingField
	bool ___U3CIsSocketedU3Ek__BackingField_76;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<IsBeingForcedGrabbed>k__BackingField
	bool ___U3CIsBeingForcedGrabbedU3Ek__BackingField_77;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<IsClimbable>k__BackingField
	bool ___U3CIsClimbableU3Ek__BackingField_78;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<CanBeGrabbed>k__BackingField
	bool ___U3CCanBeGrabbedU3Ek__BackingField_79;
	// System.Collections.Generic.List`1<UnityEngine.Collider> HurricaneVR.Framework.Core.HVRGrabbable::<Colliders>k__BackingField
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___U3CCollidersU3Ek__BackingField_80;
	// System.Collections.Generic.List`1<UnityEngine.Collider> HurricaneVR.Framework.Core.HVRGrabbable::<AdditionalIgnoreColliders>k__BackingField
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___U3CAdditionalIgnoreCollidersU3Ek__BackingField_81;
	// System.Collections.Generic.List`1<UnityEngine.Collider> HurricaneVR.Framework.Core.HVRGrabbable::<Triggers>k__BackingField
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___U3CTriggersU3Ek__BackingField_82;
	// UnityEngine.CollisionDetectionMode HurricaneVR.Framework.Core.HVRGrabbable::<OriginalCollisionMode>k__BackingField
	int32_t ___U3COriginalCollisionModeU3Ek__BackingField_83;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<WasGravity>k__BackingField
	bool ___U3CWasGravityU3Ek__BackingField_84;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint> HurricaneVR.Framework.Core.HVRGrabbable::GrabPointsMeta
	List_1_t4CD1B57546285E41EE806427BF79C5164BDB5B5F* ___GrabPointsMeta_85;
	// HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase HurricaneVR.Framework.Core.HVRGrabbable::<PrimaryGrabber>k__BackingField
	HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* ___U3CPrimaryGrabberU3Ek__BackingField_86;
	// HurricaneVR.Framework.Core.Grabbers.HVRSocket HurricaneVR.Framework.Core.HVRGrabbable::<SocketHoverer>k__BackingField
	HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___U3CSocketHovererU3Ek__BackingField_87;
	// HurricaneVR.Framework.Core.Sockets.HVRSocketable HurricaneVR.Framework.Core.HVRGrabbable::<Socketable>k__BackingField
	HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F* ___U3CSocketableU3Ek__BackingField_88;
	// HurricaneVR.Framework.Core.Grabbers.HVRSocket HurricaneVR.Framework.Core.HVRGrabbable::<LinkedSocket>k__BackingField
	HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___U3CLinkedSocketU3Ek__BackingField_89;
	// HurricaneVR.Framework.Core.Grabbers.HVRSocket HurricaneVR.Framework.Core.HVRGrabbable::<Socket>k__BackingField
	HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___U3CSocketU3Ek__BackingField_90;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.HVRGrabbable::<LeftHandGrabber>k__BackingField
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___U3CLeftHandGrabberU3Ek__BackingField_91;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.HVRGrabbable::<RightHandGrabber>k__BackingField
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___U3CRightHandGrabberU3Ek__BackingField_92;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<IsLeftHandGrabbed>k__BackingField
	bool ___U3CIsLeftHandGrabbedU3Ek__BackingField_93;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<IsRightHandGrabbed>k__BackingField
	bool ___U3CIsRightHandGrabbedU3Ek__BackingField_94;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<HasConcaveColliders>k__BackingField
	bool ___U3CHasConcaveCollidersU3Ek__BackingField_95;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<HasWheelCollider>k__BackingField
	bool ___U3CHasWheelColliderU3Ek__BackingField_96;
	// HurricaneVR.Framework.Core.HVRRequireOtherGrabbable HurricaneVR.Framework.Core.HVRGrabbable::<RequiredGrabbableComponent>k__BackingField
	HVRRequireOtherGrabbable_t7FB979F5D265E3592339DE68A98878FCF39FFE46* ___U3CRequiredGrabbableComponentU3Ek__BackingField_97;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase> HurricaneVR.Framework.Core.HVRGrabbable::Grabbers
	List_1_t924CA14CF7714D7B89A2BB558E9EAEAF8211C930* ___Grabbers_98;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber> HurricaneVR.Framework.Core.HVRGrabbable::HandGrabbers
	List_1_t0546410FB3DD901156EF02285245EBDB24982ECB* ___HandGrabbers_99;
	// System.Collections.Generic.HashSet`1<UnityEngine.Transform> HurricaneVR.Framework.Core.HVRGrabbable::HeldGrabPoints
	HashSet_1_t6B520BE007F93255A29F2DE446E4A1875E30190D* ___HeldGrabPoints_100;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabber> HurricaneVR.Framework.Core.HVRGrabbable::Stabbers
	List_1_t045123BDB2FAD65B3BD5F8698ADF524F27BEDA8D* ___Stabbers_101;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabbable HurricaneVR.Framework.Core.HVRGrabbable::Stabbable
	HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* ___Stabbable_102;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<IsStabbing>k__BackingField
	bool ___U3CIsStabbingU3Ek__BackingField_103;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::<BeingDestroyed>k__BackingField
	bool ___U3CBeingDestroyedU3Ek__BackingField_104;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.HVRGrabbable::_previousRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____previousRotation_105;
	// System.Collections.Generic.Dictionary`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,UnityEngine.ConfigurableJoint> HurricaneVR.Framework.Core.HVRGrabbable::_joints
	Dictionary_2_t2E01794B24EEB6E2FCA8C4CE3AD9DA1349367D8B* ____joints_106;
	// HurricaneVR.Framework.Shared.Utilities.CircularBuffer`1<UnityEngine.Vector3> HurricaneVR.Framework.Core.HVRGrabbable::_recentVelocities
	CircularBuffer_1_t274E1E537F2160E9CFA8F4C2DE0F57452E37F122* ____recentVelocities_107;
	// HurricaneVR.Framework.Shared.Utilities.CircularBuffer`1<UnityEngine.Vector3> HurricaneVR.Framework.Core.HVRGrabbable::_recentAngularVelocities
	CircularBuffer_1_t274E1E537F2160E9CFA8F4C2DE0F57452E37F122* ____recentAngularVelocities_108;
	// System.Collections.Generic.HashSet`1<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase> HurricaneVR.Framework.Core.HVRGrabbable::_distinctGrabbers
	HashSet_1_t1CD6136E63B00157175F347D29716DC2A43D6872* ____distinctGrabbers_109;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase> HurricaneVR.Framework.Core.HVRGrabbable::_releaseGrabbers
	List_1_t924CA14CF7714D7B89A2BB558E9EAEAF8211C930* ____releaseGrabbers_110;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::_forceTwoHandSettings
	bool ____forceTwoHandSettings_111;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::_centerOfMass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____centerOfMass_112;
	// UnityEngine.RigidbodyInterpolation HurricaneVR.Framework.Core.HVRGrabbable::_rbInterpolation
	int32_t ____rbInterpolation_113;
	// System.Single HurricaneVR.Framework.Core.HVRGrabbable::_mass
	float ____mass_114;
	// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::_waitingForColDetectionReset
	bool ____waitingForColDetectionReset_115;
	// UnityEngine.Coroutine HurricaneVR.Framework.Core.HVRGrabbable::_resetCollisionDetectionRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____resetCollisionDetectionRoutine_116;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> HurricaneVR.Framework.Core.HVRGrabbable::_ignoredColliders
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ____ignoredColliders_117;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3FrontTopLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3FrontTopLeft_118;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3FrontTopRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3FrontTopRight_119;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3FrontBottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3FrontBottomLeft_120;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3FrontBottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3FrontBottomRight_121;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3BackTopLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3BackTopLeft_122;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3BackTopRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3BackTopRight_123;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3BackBottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3BackBottomLeft_124;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HVRGrabbable::v3BackBottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v3BackBottomRight_125;
};

// HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase
struct HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::BeforeGrabbed
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___BeforeGrabbed_4;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::Grabbed
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___Grabbed_5;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::Released
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___Released_6;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::BeforeHoverEnter
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___BeforeHoverEnter_7;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::HoverEnter
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___HoverEnter_8;
	// HurricaneVR.Framework.Core.VRGrabberEvent HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::HoverExit
	VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* ___HoverExit_9;
	// HurricaneVR.Framework.Core.Bags.HVRGrabbableBag HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::_grabBag
	HVRGrabbableBag_tABC2770DFBA14CB32A857B4F3C78FD05EB3F9E34* ____grabBag_10;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Bags.HVRGrabbableBag> HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::GrabBags
	List_1_t234E29DA3D4F1D0984CE0300D5527941C1EC3994* ___GrabBags_11;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<ControllerRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CControllerRotationU3Ek__BackingField_12;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<AllowHovering>k__BackingField
	bool ___U3CAllowHoveringU3Ek__BackingField_13;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<AllowGrabbing>k__BackingField
	bool ___U3CAllowGrabbingU3Ek__BackingField_14;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<IsGrabbing>k__BackingField
	bool ___U3CIsGrabbingU3Ek__BackingField_15;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<IsHovering>k__BackingField
	bool ___U3CIsHoveringU3Ek__BackingField_16;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<IsGrabActivated>k__BackingField
	bool ___U3CIsGrabActivatedU3Ek__BackingField_17;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<IsHoldActive>k__BackingField
	bool ___U3CIsHoldActiveU3Ek__BackingField_18;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<Rigidbody>k__BackingField
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CRigidbodyU3Ek__BackingField_19;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::_grabPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____grabPoint_20;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<JointAnchorWorldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CJointAnchorWorldPositionU3Ek__BackingField_21;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_22;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<PerformUpdate>k__BackingField
	bool ___U3CPerformUpdateU3Ek__BackingField_23;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::<PullingGrabbable>k__BackingField
	bool ___U3CPullingGrabbableU3Ek__BackingField_24;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::_grabbedTarget
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ____grabbedTarget_25;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::_hoveredTarget
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ____hoveredTarget_26;
	// UnityEngine.Ray HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::_lineOfSightRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____lineOfSightRay_27;
};

// HurricaneVR.Framework.Core.Player.HVRJointHand
struct HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.Player.HVRJointHand::JointSettings
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___JointSettings_4;
	// System.Int32 HurricaneVR.Framework.Core.Player.HVRJointHand::SolverIterations
	int32_t ___SolverIterations_5;
	// System.Int32 HurricaneVR.Framework.Core.Player.HVRJointHand::SolverVelocityIterations
	int32_t ___SolverVelocityIterations_6;
	// System.Single HurricaneVR.Framework.Core.Player.HVRJointHand::ReturnSpeed
	float ___ReturnSpeed_7;
	// System.Single HurricaneVR.Framework.Core.Player.HVRJointHand::MaxTargetDistance
	float ___MaxTargetDistance_8;
	// HurricaneVR.Framework.Core.Player.MaxDistanceBehaviour HurricaneVR.Framework.Core.Player.HVRJointHand::MaxDistanceBehaviour
	int32_t ___MaxDistanceBehaviour_9;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRJointHand::Anchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Anchor_10;
	// System.Single HurricaneVR.Framework.Core.Player.HVRJointHand::ArmLength
	float ___ArmLength_11;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRJointHand::Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_12;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.Player.HVRJointHand::ParentRigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___ParentRigidBody_13;
	// HurricaneVR.Framework.Core.Player.HVRHandStrengthHandler HurricaneVR.Framework.Core.Player.HVRJointHand::StrengthHandler
	HVRHandStrengthHandler_tCF023E4A90BDC98745D3EC8043DE15B3071AAD3E* ___StrengthHandler_14;
	// HurricaneVR.Framework.Core.Player.HVRTeleporter HurricaneVR.Framework.Core.Player.HVRJointHand::Teleporter
	HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* ___Teleporter_15;
	// UnityEngine.Events.UnityEvent HurricaneVR.Framework.Core.Player.HVRJointHand::MaxDistanceReached
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___MaxDistanceReached_16;
	// UnityEngine.Events.UnityEvent HurricaneVR.Framework.Core.Player.HVRJointHand::ReturnedToController
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___ReturnedToController_17;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRJointHand::IsReturningToController
	bool ___IsReturningToController_18;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.Player.HVRJointHand::<RigidBody>k__BackingField
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CRigidBodyU3Ek__BackingField_19;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Core.Player.HVRJointHand::<Joint>k__BackingField
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___U3CJointU3Ek__BackingField_20;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.Player.HVRJointHand::<Grabber>k__BackingField
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___U3CGrabberU3Ek__BackingField_21;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRJointHand::_previousControllerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousControllerPosition_22;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Player.HVRJointHand::_previousRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____previousRotation_23;
	// System.Single HurricaneVR.Framework.Core.Player.HVRJointHand::_timer
	float ____timer_24;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRJointHand::_hasTeleporter
	bool ____hasTeleporter_25;
};

// HurricaneVR.Framework.Components.HVRPhysicsButton
struct HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Shared.HVRAxis HurricaneVR.Framework.Components.HVRPhysicsButton::Axis
	int32_t ___Axis_4;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Components.HVRPhysicsButton::ConnectedBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___ConnectedBody_5;
	// System.Single HurricaneVR.Framework.Components.HVRPhysicsButton::Spring
	float ___Spring_6;
	// System.Single HurricaneVR.Framework.Components.HVRPhysicsButton::Damper
	float ___Damper_7;
	// System.Single HurricaneVR.Framework.Components.HVRPhysicsButton::DownThreshold
	float ___DownThreshold_8;
	// System.Single HurricaneVR.Framework.Components.HVRPhysicsButton::ResetThreshold
	float ___ResetThreshold_9;
	// UnityEngine.Vector3 HurricaneVR.Framework.Components.HVRPhysicsButton::StartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___StartPosition_10;
	// UnityEngine.Vector3 HurricaneVR.Framework.Components.HVRPhysicsButton::EndPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EndPosition_11;
	// UnityEngine.AudioClip HurricaneVR.Framework.Components.HVRPhysicsButton::SFXButtonDown
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXButtonDown_12;
	// UnityEngine.AudioClip HurricaneVR.Framework.Components.HVRPhysicsButton::SFXButtonUp
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXButtonUp_13;
	// HurricaneVR.Framework.Components.HVRButtonEvent HurricaneVR.Framework.Components.HVRPhysicsButton::ButtonDown
	HVRButtonEvent_t356796E6E11193C52BC8DAFEF14D9E579210892B* ___ButtonDown_14;
	// HurricaneVR.Framework.Components.HVRButtonEvent HurricaneVR.Framework.Components.HVRPhysicsButton::ButtonUp
	HVRButtonEvent_t356796E6E11193C52BC8DAFEF14D9E579210892B* ___ButtonUp_15;
	// System.Boolean HurricaneVR.Framework.Components.HVRPhysicsButton::IsPressed
	bool ___IsPressed_16;
	// System.Boolean HurricaneVR.Framework.Components.HVRPhysicsButton::InvokeButtonDown
	bool ___InvokeButtonDown_17;
	// System.Boolean HurricaneVR.Framework.Components.HVRPhysicsButton::UpdateSpring
	bool ___UpdateSpring_18;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Components.HVRPhysicsButton::<Rigidbody>k__BackingField
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CRigidbodyU3Ek__BackingField_19;
	// UnityEngine.Vector3 HurricaneVR.Framework.Components.HVRPhysicsButton::_axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____axis_20;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Components.HVRPhysicsButton::_joint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ____joint_21;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Components.HVRPhysicsButton::_limitJoint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ____limitJoint_22;
};

// HurricaneVR.Framework.Core.Player.HVRPlayerController
struct HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::CanJump
	bool ___CanJump_4;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::CanSteerWhileJumping
	bool ___CanSteerWhileJumping_5;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::CanSprint
	bool ___CanSprint_6;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::CanCrouch
	bool ___CanCrouch_7;
	// HurricaneVR.Framework.Core.Player.PlayerDirectionMode HurricaneVR.Framework.Core.Player.HVRPlayerController::DirectionStyle
	int32_t ___DirectionStyle_8;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::InitialHMDAdjustment
	bool ___InitialHMDAdjustment_9;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Player.HVRPlayerController::GroundedLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GroundedLayerMask_10;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::GroundedDistance
	float ___GroundedDistance_11;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::MinHeight
	float ___MinHeight_12;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::InstantAcceleration
	bool ___InstantAcceleration_13;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::Acceleration
	float ___Acceleration_14;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::Deacceleration
	float ___Deacceleration_15;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::MoveSpeed
	float ___MoveSpeed_16;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::SprintAcceleration
	float ___SprintAcceleration_17;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::RunSpeed
	float ___RunSpeed_18;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::Gravity
	float ___Gravity_19;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::MaxFallSpeed
	float ___MaxFallSpeed_20;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::JumpVelocity
	float ___JumpVelocity_21;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::DoubleClickThreshold
	float ___DoubleClickThreshold_22;
	// HurricaneVR.Framework.Core.Player.RotationType HurricaneVR.Framework.Core.Player.HVRPlayerController::RotationType
	int32_t ___RotationType_23;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::SmoothTurnSpeed
	float ___SmoothTurnSpeed_24;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::SmoothTurnThreshold
	float ___SmoothTurnThreshold_25;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::SnapAmount
	float ___SnapAmount_26;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::SnapThreshold
	float ___SnapThreshold_27;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::RotateWhileTeleportAiming
	bool ___RotateWhileTeleportAiming_28;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::CrouchMinHeight
	float ___CrouchMinHeight_29;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::CrouchHeight
	float ___CrouchHeight_30;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::CrouchSpeed
	float ___CrouchSpeed_31;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRPlayerController::Camera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Camera_32;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRPlayerController::NeckPivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___NeckPivot_33;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRPlayerController::Root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Root_34;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRPlayerController::FloorOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FloorOffset_35;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRPlayerController::LeftControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LeftControllerTransform_36;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRPlayerController::RightControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RightControllerTransform_37;
	// HurricaneVR.Framework.Core.Player.HVRCameraRig HurricaneVR.Framework.Core.Player.HVRPlayerController::CameraRig
	HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* ___CameraRig_38;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.Player.HVRPlayerController::LeftHand
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___LeftHand_39;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.Player.HVRPlayerController::RightHand
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___RightHand_40;
	// HurricaneVR.Framework.Core.Player.HVRJointHand HurricaneVR.Framework.Core.Player.HVRPlayerController::LeftJointHand
	HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* ___LeftJointHand_41;
	// HurricaneVR.Framework.Core.Player.HVRJointHand HurricaneVR.Framework.Core.Player.HVRPlayerController::RightJointHand
	HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* ___RightJointHand_42;
	// HurricaneVR.Framework.Core.Player.HVRScreenFade HurricaneVR.Framework.Core.Player.HVRPlayerController::ScreenFader
	HVRScreenFade_t475F8309AC6BABCB4A4EEE1842BB59DF74272C2A* ___ScreenFader_43;
	// HurricaneVR.Framework.Core.Player.HVRHeadCollision HurricaneVR.Framework.Core.Player.HVRPlayerController::HeadCollision
	HVRHeadCollision_tC79727D088C060707C86EF717802ACA8EED89A8D* ___HeadCollision_44;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::HeadCollisionFadeSpeed
	float ___HeadCollisionFadeSpeed_45;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::HeadCollisionPushesBack
	bool ___HeadCollisionPushesBack_46;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::LimitHeadDistance
	bool ___LimitHeadDistance_47;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::MaxLean
	float ___MaxLean_48;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::FadeFromLean
	bool ___FadeFromLean_49;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::MouseTurning
	bool ___MouseTurning_50;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::MouseSensitivityX
	float ___MouseSensitivityX_51;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.Player.HVRPlayerController::<RigidBody>k__BackingField
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CRigidBodyU3Ek__BackingField_52;
	// UnityEngine.CharacterController HurricaneVR.Framework.Core.Player.HVRPlayerController::<CharacterController>k__BackingField
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___U3CCharacterControllerU3Ek__BackingField_53;
	// HurricaneVR.Framework.Core.Player.HVRTeleporter HurricaneVR.Framework.Core.Player.HVRPlayerController::<Teleporter>k__BackingField
	HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* ___U3CTeleporterU3Ek__BackingField_54;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::<Sprinting>k__BackingField
	bool ___U3CSprintingU3Ek__BackingField_55;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::IsGrounded
	bool ___IsGrounded_56;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::<MovementEnabled>k__BackingField
	bool ___U3CMovementEnabledU3Ek__BackingField_57;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::<RotationEnabled>k__BackingField
	bool ___U3CRotationEnabledU3Ek__BackingField_58;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRPlayerController::<Neck>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CNeckU3Ek__BackingField_59;
	// HurricaneVR.Framework.ControllerInput.HVRPlayerInputs HurricaneVR.Framework.Core.Player.HVRPlayerController::<Inputs>k__BackingField
	HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* ___U3CInputsU3Ek__BackingField_60;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRPlayerController::<PreviousPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPreviousPositionU3Ek__BackingField_61;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRPlayerController::_previousLeftControllerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousLeftControllerPosition_62;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRPlayerController::_previousRightControllerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousRightControllerPosition_63;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::_waitingForCameraMovement
	bool ____waitingForCameraMovement_64;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRPlayerController::_cameraStartingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____cameraStartingPosition_65;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::_timeSinceLastPress
	float ____timeSinceLastPress_66;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::_awaitingSecondClick
	bool ____awaitingSecondClick_67;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::_crouchInProgress
	bool ____crouchInProgress_68;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::_cameraBelowCrouchHeight
	bool ____cameraBelowCrouchHeight_69;
	// UnityEngine.Coroutine HurricaneVR.Framework.Core.Player.HVRPlayerController::_crouchRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____crouchRoutine_70;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::_previousTurnAxis
	float ____previousTurnAxis_71;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::_crouchOffset
	float ____crouchOffset_72;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::_isCrouchingToggled
	bool ____isCrouchingToggled_73;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::_isCameraCorrecting
	bool ____isCameraCorrecting_74;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRPlayerController::_hasTeleporter
	bool ____hasTeleporter_75;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRPlayerController::_previousVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousVelocity_76;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::yVelocity
	float ___yVelocity_77;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRPlayerController::xzVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___xzVelocity_78;
	// System.Single HurricaneVR.Framework.Core.Player.HVRPlayerController::_actualVelocity
	float ____actualVelocity_79;
};

// HurricaneVR.Framework.ControllerInput.HVRPlayerInputs
struct HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::CanDistanceGrab
	bool ___CanDistanceGrab_4;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::CanTriggerGrab
	bool ___CanTriggerGrab_5;
	// HurricaneVR.Framework.ControllerInput.HVRForceGrabActivation HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::ForceGrabActivation
	int32_t ___ForceGrabActivation_6;
	// System.Single HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::TriggerGrabThreshold
	float ___TriggerGrabThreshold_7;
	// UnityEngine.Vector2 HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::MovementAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___MovementAxis_8;
	// UnityEngine.Vector2 HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::TurnAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TurnAxis_9;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsTeleportActivated
	bool ___IsTeleportActivated_10;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsTeleportDeactivated
	bool ___IsTeleportDeactivated_11;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsSprintingActivated
	bool ___IsSprintingActivated_12;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::SprintRequiresDoubleClick
	bool ___SprintRequiresDoubleClick_13;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsCrouchActivated
	bool ___IsCrouchActivated_14;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsStandActivated
	bool ___IsStandActivated_15;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::JumpState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___JumpState_16;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::CrouchState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___CrouchState_17;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::StandState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___StandState_18;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::LeftTriggerGrabState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___LeftTriggerGrabState_19;
	// HurricaneVR.Framework.Shared.HVRButtonState HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::RightTriggerGrabState
	HVRButtonState_tCB5D53E840C8C49D87352E392D207FFC275FA721 ___RightTriggerGrabState_20;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsLeftGrabActivated
	bool ___IsLeftGrabActivated_21;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsLeftHoldActive
	bool ___IsLeftHoldActive_22;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsLeftGripHoldActive
	bool ___IsLeftGripHoldActive_23;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsLeftTriggerHoldActive
	bool ___IsLeftTriggerHoldActive_24;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsRightGrabActivated
	bool ___IsRightGrabActivated_25;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsRightHoldActive
	bool ___IsRightHoldActive_26;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsRightGripHoldActive
	bool ___IsRightGripHoldActive_27;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsRightTriggerHoldActive
	bool ___IsRightTriggerHoldActive_28;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsLeftForceGrabActive
	bool ___IsLeftForceGrabActive_29;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsRightForceGrabActive
	bool ___IsRightForceGrabActive_30;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsLeftForceGrabActivated
	bool ___IsLeftForceGrabActivated_31;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsRightForceGrabActivated
	bool ___IsRightForceGrabActivated_32;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsJumpActivated
	bool ___IsJumpActivated_33;
	// HurricaneVR.Framework.Shared.HVRHandSide HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::TeleportHandSide
	int32_t ___TeleportHandSide_34;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::SwapMovementAxis
	bool ___SwapMovementAxis_35;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::UseWASD
	bool ___UseWASD_36;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::IsMouseDown
	bool ___IsMouseDown_37;
	// UnityEngine.Vector2 HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::MouseAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___MouseAxis_38;
	// System.Boolean HurricaneVR.Framework.ControllerInput.HVRPlayerInputs::<UpdateInputs>k__BackingField
	bool ___U3CUpdateInputsU3Ek__BackingField_39;
};

// HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint
struct HVRPosableGrabPoint_t45AD7B3827EE2CFF89742F05F9FFD2E208D9CB23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::PoserIndex
	int32_t ___PoserIndex_4;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::IsJointAnchor
	bool ___IsJointAnchor_5;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::IsForceGrabbable
	bool ___IsForceGrabbable_6;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::OneHandOnly
	bool ___OneHandOnly_7;
	// System.Single HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::AllowedAngleDifference
	float ___AllowedAngleDifference_8;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::CheckDistance
	bool ___CheckDistance_9;
	// System.Single HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::MaxDistance
	float ___MaxDistance_10;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LeftHand
	bool ___LeftHand_11;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::RightHand
	bool ___RightHand_12;
	// System.Int32 HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::Group
	int32_t ___Group_13;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::HandRotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HandRotationOffset_14;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::HandPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HandPositionOffset_15;
	// UnityEngine.Transform HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::GrabIndicatorPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GrabIndicatorPosition_16;
	// UnityEngine.Transform HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::VisualGrabPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___VisualGrabPoint_17;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandPoser HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::HandPoser
	HVRHandPoser_tCF5D301EB153B0E53954A6A759E938C6CFFC10C6* ___HandPoser_18;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::Grabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___Grabbable_19;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::IsLineGrab
	bool ___IsLineGrab_20;
	// UnityEngine.Transform HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LineStart
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LineStart_21;
	// UnityEngine.Transform HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LineEnd
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LineEnd_22;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::CanLineFlip
	bool ___CanLineFlip_23;
	// System.Single HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LooseDamper
	float ___LooseDamper_24;
	// System.Single HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LooseAngularDamper
	float ___LooseAngularDamper_25;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LineCanReposition
	bool ___LineCanReposition_26;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LineInitialCanReposition
	bool ___LineInitialCanReposition_27;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LineCanRotate
	bool ___LineCanRotate_28;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LineFreeRotation
	bool ___LineFreeRotation_29;
	// System.Boolean HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::LineInitialCanRotate
	bool ___LineInitialCanRotate_30;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::<LeftPoseOffset>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CLeftPoseOffsetU3Ek__BackingField_31;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::<RightPoseOffset>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRightPoseOffsetU3Ek__BackingField_32;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::<LeftPosePositionOffset>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLeftPosePositionOffsetU3Ek__BackingField_33;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::<RightPosePositionOffset>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CRightPosePositionOffsetU3Ek__BackingField_34;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint> HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint::Others
	List_1_t4CD1B57546285E41EE806427BF79C5164BDB5B5F* ___Others_35;
};

// HurricaneVR.Framework.Components.HVRRotationLimiter
struct HVRRotationLimiter_tF5CD8BEF6539AEF6B30DD3CC7E163EB09771C672  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody HurricaneVR.Framework.Components.HVRRotationLimiter::ConnectedBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___ConnectedBody_5;
	// System.Int32 HurricaneVR.Framework.Components.HVRRotationLimiter::MinAngle
	int32_t ___MinAngle_6;
	// System.Int32 HurricaneVR.Framework.Components.HVRRotationLimiter::MaxAngle
	int32_t ___MaxAngle_7;
	// System.Single HurricaneVR.Framework.Components.HVRRotationLimiter::JointResetThreshold
	float ___JointResetThreshold_8;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Components.HVRRotationLimiter::<Rigidbody>k__BackingField
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CRigidbodyU3Ek__BackingField_9;
	// HurricaneVR.Framework.Components.HVRRotationTracker HurricaneVR.Framework.Components.HVRRotationLimiter::<Tracker>k__BackingField
	HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* ___U3CTrackerU3Ek__BackingField_10;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Components.HVRRotationLimiter::_joint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ____joint_11;
	// System.Single HurricaneVR.Framework.Components.HVRRotationLimiter::_angleAtCreation
	float ____angleAtCreation_12;
	// System.Single HurricaneVR.Framework.Components.HVRRotationLimiter::maxDelta
	float ___maxDelta_13;
	// System.Single HurricaneVR.Framework.Components.HVRRotationLimiter::minDelta
	float ___minDelta_14;
};

// HurricaneVR.Framework.Components.HVRRotationTracker
struct HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Shared.HVRAxis HurricaneVR.Framework.Components.HVRRotationTracker::Axis
	int32_t ___Axis_4;
	// System.Int32 HurricaneVR.Framework.Components.HVRRotationTracker::Steps
	int32_t ___Steps_5;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::AngleThreshold
	float ___AngleThreshold_6;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::MaximumAngle
	float ___MaximumAngle_7;
	// HurricaneVR.Framework.Components.RotationTrackerStepEvent HurricaneVR.Framework.Components.HVRRotationTracker::StepChanged
	RotationTrackerStepEvent_tCB5A5C66DD94226F97B56FB0FF26145DD6481793* ___StepChanged_8;
	// HurricaneVR.Framework.Components.RotationTrackerAngleEvent HurricaneVR.Framework.Components.HVRRotationTracker::AngleChanged
	RotationTrackerAngleEvent_tB8A14CAE85E89437191650980077BF542288BEB0* ___AngleChanged_9;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::StepSize
	float ___StepSize_10;
	// System.Int32 HurricaneVR.Framework.Components.HVRRotationTracker::Step
	int32_t ___Step_11;
	// UnityEngine.Vector3 HurricaneVR.Framework.Components.HVRRotationTracker::_angleVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____angleVector_12;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::_previousAngle
	float ____previousAngle_13;
	// UnityEngine.Vector3 HurricaneVR.Framework.Components.HVRRotationTracker::_trackAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____trackAxis_14;
	// UnityEngine.Vector3 HurricaneVR.Framework.Components.HVRRotationTracker::_startVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startVector_15;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::_clampedAngle
	float ____clampedAngle_16;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::_angleFromStart
	float ____angleFromStart_17;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::<ClampedAngle>k__BackingField
	float ___U3CClampedAngleU3Ek__BackingField_18;
	// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::<Angle>k__BackingField
	float ___U3CAngleU3Ek__BackingField_19;
	// UnityEngine.Vector3 HurricaneVR.Framework.Components.HVRRotationTracker::<AxisOfRotation>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CAxisOfRotationU3Ek__BackingField_20;
};

// HurricaneVR.Framework.Core.Sockets.HVRSocketFilter
struct HVRSocketFilter_t473580ED4B9730A48F09C95722B651F915A87319  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HurricaneVR.Framework.Core.Sockets.HVRSocketable
struct HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Sockets.HVRSocketable::<Grabbable>k__BackingField
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___U3CGrabbableU3Ek__BackingField_4;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Sockets.HVRSocketable::SocketOrientation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SocketOrientation_5;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Sockets.HVRSocketable::CounterScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CounterScale_6;
	// System.Boolean HurricaneVR.Framework.Core.Sockets.HVRSocketable::UseRendererBounds
	bool ___UseRendererBounds_7;
	// System.Single HurricaneVR.Framework.Core.Sockets.HVRSocketable::ScaleSize
	float ___ScaleSize_8;
	// System.Single HurricaneVR.Framework.Core.Sockets.HVRSocketable::SocketScale
	float ___SocketScale_9;
	// UnityEngine.BoxCollider HurricaneVR.Framework.Core.Sockets.HVRSocketable::ScaleOverride
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___ScaleOverride_10;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.Sockets.HVRSocketable::SocketedClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SocketedClip_11;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.Sockets.HVRSocketable::UnsocketedClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___UnsocketedClip_12;
	// HurricaneVR.Framework.Core.HVRGrabbable[] HurricaneVR.Framework.Core.Sockets.HVRSocketable::LinkedGrabbables
	HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* ___LinkedGrabbables_13;
};

// HurricaneVR.Framework.Core.Stabbing.HVRStabbable
struct HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.Stabbing.HVRStabbableSettings HurricaneVR.Framework.Core.Stabbing.HVRStabbable::Settings
	HVRStabbableSettings_t84D8624ED6E1D223CDBF062528B88EA99E55D813* ___Settings_4;
	// System.Collections.Generic.List`1<UnityEngine.Collider> HurricaneVR.Framework.Core.Stabbing.HVRStabbable::Ignorecolliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___Ignorecolliders_5;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabEvent HurricaneVR.Framework.Core.Stabbing.HVRStabbable::Stabbed
	HVRStabEvent_t272C60B0E7CB75467B6BD510CD7DF8E031385924* ___Stabbed_6;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabEvents HurricaneVR.Framework.Core.Stabbing.HVRStabbable::UnStabbed
	HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7* ___UnStabbed_7;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabEvents HurricaneVR.Framework.Core.Stabbing.HVRStabbable::FullStabbed
	HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7* ___FullStabbed_8;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabber> HurricaneVR.Framework.Core.Stabbing.HVRStabbable::Stabbers
	List_1_t045123BDB2FAD65B3BD5F8698ADF524F27BEDA8D* ___Stabbers_9;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Stabbing.HVRStabbable::<Velocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Stabbing.HVRStabbable::_previousPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousPosition_11;
};

// HurricaneVR.Framework.Core.Stabbing.HVRStabber
struct HVRStabber_tE60C171AECD2D5487B702E7C6C27194FFC364904  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HurricaneVR.Framework.Core.Stabbing.HVRStabber::Tip
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Tip_4;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Stabbing.HVRStabber::Base
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Base_5;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabberSettings HurricaneVR.Framework.Core.Stabbing.HVRStabber::Settings
	HVRStabberSettings_t2414E15BD0B668FC229B060ADFB038A74BA5DEAC* ___Settings_6;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::StabAnything
	bool ___StabAnything_7;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::IgnoreVelocityCheck
	bool ___IgnoreVelocityCheck_8;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabbableSettings HurricaneVR.Framework.Core.Stabbing.HVRStabber::FallbackSettings
	HVRStabbableSettings_t84D8624ED6E1D223CDBF062528B88EA99E55D813* ___FallbackSettings_9;
	// UnityEngine.JointProjectionMode HurricaneVR.Framework.Core.Stabbing.HVRStabber::ProjectionMode
	int32_t ___ProjectionMode_10;
	// System.Single HurricaneVR.Framework.Core.Stabbing.HVRStabber::ProjectionDistance
	float ___ProjectionDistance_11;
	// System.Single HurricaneVR.Framework.Core.Stabbing.HVRStabber::ProjectionAngle
	float ___ProjectionAngle_12;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::IsDualStabber
	bool ___IsDualStabber_13;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::CanRunThrough
	bool ___CanRunThrough_14;
	// UnityEngine.Collider[] HurricaneVR.Framework.Core.Stabbing.HVRStabber::CollidersToIgnore
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___CollidersToIgnore_15;
	// UnityEngine.Collider[] HurricaneVR.Framework.Core.Stabbing.HVRStabber::StabbingColliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___StabbingColliders_16;
	// System.Single HurricaneVR.Framework.Core.Stabbing.HVRStabber::ContactOffset
	float ___ContactOffset_17;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::DrawGizmos
	bool ___DrawGizmos_18;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::VerboseDebugging
	bool ___VerboseDebugging_19;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::LogFailedAngle
	bool ___LogFailedAngle_20;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::LogFailedVelocity
	bool ___LogFailedVelocity_21;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::LogJointLock
	bool ___LogJointLock_22;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::LogJointUnlock
	bool ___LogJointUnlock_23;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::LogJointForce
	bool ___LogJointForce_24;
	// System.Single HurricaneVR.Framework.Core.Stabbing.HVRStabber::LogJointForceThreshold
	float ___LogJointForceThreshold_25;
	// System.Single HurricaneVR.Framework.Core.Stabbing.HVRStabber::Depth
	float ___Depth_26;
	// System.Single HurricaneVR.Framework.Core.Stabbing.HVRStabber::DepthPercent
	float ___DepthPercent_27;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabEvent HurricaneVR.Framework.Core.Stabbing.HVRStabber::Stabbed
	HVRStabEvent_t272C60B0E7CB75467B6BD510CD7DF8E031385924* ___Stabbed_28;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabEvents HurricaneVR.Framework.Core.Stabbing.HVRStabber::UnStabbed
	HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7* ___UnStabbed_29;
	// HurricaneVR.Framework.Core.Stabbing.HVRStabEvents HurricaneVR.Framework.Core.Stabbing.HVRStabber::FullStabbed
	HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7* ___FullStabbed_30;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.Stabbing.HVRStabber::<Rigidbody>k__BackingField
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CRigidbodyU3Ek__BackingField_31;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabTracker> HurricaneVR.Framework.Core.Stabbing.HVRStabber::_trackers
	List_1_tFEEDD9A6C1C4C56F979A33152ADD95095ACF2502* ____trackers_32;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabTracker> HurricaneVR.Framework.Core.Stabbing.HVRStabber::_cleanup
	List_1_tFEEDD9A6C1C4C56F979A33152ADD95095ACF2502* ____cleanup_33;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HurricaneVR.Framework.Core.Stabbing.HVRStabber::<StabbedObjects>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CStabbedObjectsU3Ek__BackingField_34;
	// System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Stabbing.HVRStabbable> HurricaneVR.Framework.Core.Stabbing.HVRStabber::<StabbedStabbables>k__BackingField
	List_1_tC56132CC9FBF1DED5BCC0B1EF6116DBBA1D3D931* ___U3CStabbedStabbablesU3Ek__BackingField_35;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Stabbing.HVRStabber::_velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____velocity_36;
	// System.Boolean HurricaneVR.Framework.Core.Stabbing.HVRStabber::<ManuallyLocked>k__BackingField
	bool ___U3CManuallyLockedU3Ek__BackingField_37;
};

// HurricaneVR.Framework.Core.Player.HVRTeleporter
struct HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRTeleporter::Camera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Camera_4;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRTeleporter::TeleportLineSourceLeft
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TeleportLineSourceLeft_5;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Player.HVRTeleporter::TeleportLineSourceRight
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TeleportLineSourceRight_6;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.Player.HVRTeleporter::LeftHand
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___LeftHand_7;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.Player.HVRTeleporter::RightHand
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___RightHand_8;
	// HurricaneVR.Framework.Core.Player.HVRPlayerController HurricaneVR.Framework.Core.Player.HVRTeleporter::Player
	HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* ___Player_9;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::PlayerRotateCheck
	bool ___PlayerRotateCheck_10;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::PlayerGroundedCheck
	bool ___PlayerGroundedCheck_11;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::PlayerClimbingCheck
	bool ___PlayerClimbingCheck_12;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::RotationTeleportThreshold
	float ___RotationTeleportThreshold_13;
	// UnityEngine.Color HurricaneVR.Framework.Core.Player.HVRTeleporter::ValidColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ValidColor_14;
	// UnityEngine.Color HurricaneVR.Framework.Core.Player.HVRTeleporter::InvalidColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___InvalidColor_15;
	// UnityEngine.LineRenderer HurricaneVR.Framework.Core.Player.HVRTeleporter::LineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___LineRenderer_16;
	// UnityEngine.LineRenderer HurricaneVR.Framework.Core.Player.HVRTeleporter::DownRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___DownRenderer_17;
	// HurricaneVR.Framework.Core.Player.HVRTeleportMarkerBase HurricaneVR.Framework.Core.Player.HVRTeleporter::TeleportMarker
	HVRTeleportMarkerBase_t7044E7BF18E1006F75C906BE7A0A92B003A80961* ___TeleportMarker_18;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::DownLineMinLength
	float ___DownLineMinLength_19;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::DownLineMaxLength
	float ___DownLineMaxLength_20;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::DisableMarkerWhenInvalid
	bool ___DisableMarkerWhenInvalid_21;
	// HurricaneVR.Framework.Core.Player.HVRTeleportCurve HurricaneVR.Framework.Core.Player.HVRTeleporter::CurveType
	int32_t ___CurveType_22;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::MaxAngle
	float ___MaxAngle_23;
	// System.Int32 HurricaneVR.Framework.Core.Player.HVRTeleporter::LineSegments
	int32_t ___LineSegments_24;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::CollisionBuffer
	float ___CollisionBuffer_25;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Player.HVRTeleporter::LayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___LayerMask_26;
	// UnityEngine.QueryTriggerInteraction HurricaneVR.Framework.Core.Player.HVRTeleporter::LayerMaskTriggerInteraction
	int32_t ___LayerMaskTriggerInteraction_27;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::Speed
	float ___Speed_28;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::TimeStep
	float ___TimeStep_29;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::BezierAngleOffset
	float ___BezierAngleOffset_30;
	// UnityEngine.AnimationCurve HurricaneVR.Framework.Core.Player.HVRTeleporter::BezierAngleOffsetCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___BezierAngleOffsetCurve_31;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::TeleportDistance
	float ___TeleportDistance_32;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::DownRayLength
	float ___DownRayLength_33;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Player.HVRTeleporter::DownRayIgnoreMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___DownRayIgnoreMask_34;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::Dash
	bool ___Dash_35;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::DashSpeed
	float ___DashSpeed_36;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::RequireOriginLineOfSight
	bool ___RequireOriginLineOfSight_37;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Player.HVRTeleporter::OriginIgnoreLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___OriginIgnoreLayerMask_38;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::RequireDestinationLineOfSight
	bool ___RequireDestinationLineOfSight_39;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::DestinationHeight
	float ___DestinationHeight_40;
	// System.Int32 HurricaneVR.Framework.Core.Player.HVRTeleporter::DestinationIntervals
	int32_t ___DestinationIntervals_41;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Player.HVRTeleporter::DestinationIgnoreLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___DestinationIgnoreLayerMask_42;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::CheckDropDistance
	bool ___CheckDropDistance_43;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::MaxDropDistance
	float ___MaxDropDistance_44;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::CheckJumpDistance
	bool ___CheckJumpDistance_45;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::MaxJumpDistance
	float ___MaxJumpDistance_46;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Player.HVRTeleporter::PlayerFitIgnoreLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___PlayerFitIgnoreLayerMask_47;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Player.HVRTeleporter::TeleportableLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___TeleportableLayers_48;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::MaxSurfaceAngle
	float ___MaxSurfaceAngle_49;
	// UnityEngine.CapsuleCollider HurricaneVR.Framework.Core.Player.HVRTeleporter::Capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___Capsule_50;
	// HurricaneVR.Framework.Core.Player.TeleportPositionUpdate HurricaneVR.Framework.Core.Player.HVRTeleporter::BeforeTeleport
	TeleportPositionUpdate_t948A184B362F6F6598D1789074CCCAE2F636617C* ___BeforeTeleport_51;
	// UnityEngine.Events.UnityEvent HurricaneVR.Framework.Core.Player.HVRTeleporter::AfterTeleport
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___AfterTeleport_52;
	// HurricaneVR.Framework.Core.Player.TeleportPositionUpdate HurricaneVR.Framework.Core.Player.HVRTeleporter::PositionUpdate
	TeleportPositionUpdate_t948A184B362F6F6598D1789074CCCAE2F636617C* ___PositionUpdate_53;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRTeleporter::DownHitNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DownHitNormal_54;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::SurfaceAngle
	float ___SurfaceAngle_55;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::IsDropDistanceValid
	bool ___IsDropDistanceValid_56;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::IsSurfaceAngleValid
	bool ___IsSurfaceAngleValid_57;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::IsDestinationInLineOfSight
	bool ___IsDestinationInLineOfSight_58;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::IsOnlyDropDistanceInvalid
	bool ___IsOnlyDropDistanceInvalid_59;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::IsOriginInLineOfSight
	bool ___IsOriginInLineOfSight_60;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::IsJumpDistanceValid
	bool ___IsJumpDistanceValid_61;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::DoesPlayerFit
	bool ___DoesPlayerFit_62;
	// HurricaneVR.Framework.Core.Player.TeleportState HurricaneVR.Framework.Core.Player.HVRTeleporter::TeleportState
	int32_t ___TeleportState_63;
	// UnityEngine.Collider HurricaneVR.Framework.Core.Player.HVRTeleporter::<HitCollider>k__BackingField
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___U3CHitColliderU3Ek__BackingField_64;
	// UnityEngine.Collider HurricaneVR.Framework.Core.Player.HVRTeleporter::<DownHitCollider>k__BackingField
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___U3CDownHitColliderU3Ek__BackingField_65;
	// UnityEngine.Vector3[] HurricaneVR.Framework.Core.Player.HVRTeleporter::<LineRendererPoints>k__BackingField
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CLineRendererPointsU3Ek__BackingField_66;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRTeleporter::<TeleportDestination>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTeleportDestinationU3Ek__BackingField_67;
	// HurricaneVR.Framework.ControllerInput.HVRPlayerInputs HurricaneVR.Framework.Core.Player.HVRTeleporter::<PlayerInputs>k__BackingField
	HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* ___U3CPlayerInputsU3Ek__BackingField_68;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRTeleporter::<HitPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CHitPositionU3Ek__BackingField_69;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRTeleporter::<LastDownwardPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLastDownwardPointU3Ek__BackingField_70;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRTeleporter::<LastValidDownwardPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLastValidDownwardPointU3Ek__BackingField_71;
	// System.Int32 HurricaneVR.Framework.Core.Player.HVRTeleporter::<LastValidIndex>k__BackingField
	int32_t ___U3CLastValidIndexU3Ek__BackingField_72;
	// System.Int32 HurricaneVR.Framework.Core.Player.HVRTeleporter::<LastIndex>k__BackingField
	int32_t ___U3CLastIndexU3Ek__BackingField_73;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<IsRaycastValid>k__BackingField
	bool ___U3CIsRaycastValidU3Ek__BackingField_74;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Player.HVRTeleporter::<SurfaceNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CSurfaceNormalU3Ek__BackingField_75;
	// UnityEngine.CharacterController HurricaneVR.Framework.Core.Player.HVRTeleporter::<CharacterController>k__BackingField
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___U3CCharacterControllerU3Ek__BackingField_76;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<CanTeleport>k__BackingField
	bool ___U3CCanTeleportU3Ek__BackingField_77;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<IsTeleporting>k__BackingField
	bool ___U3CIsTeleportingU3Ek__BackingField_78;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<LeftHandPrevents>k__BackingField
	bool ___U3CLeftHandPreventsU3Ek__BackingField_79;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<RightHandPrevents>k__BackingField
	bool ___U3CRightHandPreventsU3Ek__BackingField_80;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<IsTeleportPreviouslyValid>k__BackingField
	bool ___U3CIsTeleportPreviouslyValidU3Ek__BackingField_81;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<IsTeleportValid>k__BackingField
	bool ___U3CIsTeleportValidU3Ek__BackingField_82;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<IsAiming>k__BackingField
	bool ___U3CIsAimingU3Ek__BackingField_83;
	// System.Boolean HurricaneVR.Framework.Core.Player.HVRTeleporter::<PreviousAiming>k__BackingField
	bool ___U3CPreviousAimingU3Ek__BackingField_84;
	// UnityEngine.Collider[] HurricaneVR.Framework.Core.Player.HVRTeleporter::_dummy
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____dummy_85;
	// HurricaneVR.Framework.Core.Player.HVRInvalidTeleport HurricaneVR.Framework.Core.Player.HVRTeleporter::_dummyInvalid
	HVRInvalidTeleport_tE5A01DF4E97BF622515A5BABFA5EA7078FAA4FD3* ____dummyInvalid_86;
	// System.Single HurricaneVR.Framework.Core.Player.HVRTeleporter::_timeSinceLastRotation
	float ____timeSinceLastRotation_87;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Player.HVRTeleporter::_previousPlayerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____previousPlayerRotation_88;
};

// Hammering
struct Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Hammering::_onAnvil
	bool ____onAnvil_4;
	// System.Boolean Hammering::_changed
	bool ____changed_5;
	// System.Int32 Hammering::_hits
	int32_t ____hits_6;
	// UnityEngine.Renderer Hammering::_ingot
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____ingot_7;
	// Heating Hammering::_heating
	Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* ____heating_8;
};

// Heating
struct Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Heating::_heating
	bool ____heating_4;
	// System.Boolean Heating::_heated
	bool ____heated_5;
	// System.Single Heating::_timer
	float ____timer_6;
	// UnityEngine.Renderer Heating::_ingot
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____ingot_7;
};

// HurricaneVR.Framework.Core.Utils.SFXPlayer
struct SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource HurricaneVR.Framework.Core.Utils.SFXPlayer::SFXReferenceSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___SFXReferenceSource_6;
	// System.Int32 HurricaneVR.Framework.Core.Utils.SFXPlayer::SFXSourceCount
	int32_t ___SFXSourceCount_7;
	// System.Boolean HurricaneVR.Framework.Core.Utils.SFXPlayer::SetClipName
	bool ___SetClipName_8;
	// System.Collections.Generic.Dictionary`2<System.Guid,HurricaneVR.Framework.Core.Utils.SFXPlayer/PlayEvent> HurricaneVR.Framework.Core.Utils.SFXPlayer::m_PlayEvents
	Dictionary_2_tACC2892D27DD6A7FE3B2032A871CC79BF893D21A* ___m_PlayEvents_9;
	// System.Collections.Generic.List`1<System.Int32> HurricaneVR.Framework.Core.Utils.SFXPlayer::m_PlayingSources
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_PlayingSources_10;
	// UnityEngine.AudioSource[] HurricaneVR.Framework.Core.Utils.SFXPlayer::m_SFXSourcePool
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___m_SFXSourcePool_11;
	// System.Int32 HurricaneVR.Framework.Core.Utils.SFXPlayer::m_UsedSource
	int32_t ___m_UsedSource_12;
	// System.Collections.Generic.List`1<System.Guid> HurricaneVR.Framework.Core.Utils.SFXPlayer::IDToRemove
	List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* ___IDToRemove_13;
};

struct SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165_StaticFields
{
	// HurricaneVR.Framework.Core.Utils.SFXPlayer HurricaneVR.Framework.Core.Utils.SFXPlayer::s_Instance
	SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* ___s_Instance_4;
	// System.Int32 HurricaneVR.Framework.Core.Utils.SFXPlayer::id
	int32_t ___id_5;
};

// SnapObjects
struct SnapObjects_t4F57E591152088E8B944F673F2C96364AC5342D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HurricaneVR.Framework.Core.HVRGrabbable SnapObjects::grabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketFilter`1<HurricaneVR.TechDemo.Scripts.DemoSocketableItems>
struct HVREnumFlagsSocketFilter_1_t5BD870BE3A318344EBBBFABAA8BE91DF1CEFEB47  : public HVRSocketFilter_t473580ED4B9730A48F09C95722B651F915A87319
{
	// TEnum HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketFilter`1::SocketType
	int32_t ___SocketType_4;
};

// HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketable`1<HurricaneVR.TechDemo.Scripts.DemoSocketableItems>
struct HVREnumFlagsSocketable_1_t06B6DC19FF7F059A014513E60461C9BD02E49BF9  : public HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F
{
	// TEnum HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketable`1::SocketType
	int32_t ___SocketType_14;
};

// HurricaneVR.TechDemo.Scripts.DemoKeypadButton
struct DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4  : public HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394
{
	// System.Char HurricaneVR.TechDemo.Scripts.DemoKeypadButton::Key
	Il2CppChar ___Key_23;
	// TMPro.TextMeshPro HurricaneVR.TechDemo.Scripts.DemoKeypadButton::TextMeshPro
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextMeshPro_24;
};

// HurricaneVR.TechDemo.Scripts.DemoSafeDial
struct DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E  : public HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067
{
	// TMPro.TextMeshPro HurricaneVR.TechDemo.Scripts.DemoSafeDial::NumberLabel
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___NumberLabel_21;
	// TMPro.TextMeshPro HurricaneVR.TechDemo.Scripts.DemoSafeDial::DebugLabel
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___DebugLabel_22;
	// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSafeDial::DisplayDebug
	bool ___DisplayDebug_23;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSafeDial::First
	int32_t ___First_24;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSafeDial::Second
	int32_t ___Second_25;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSafeDial::Third
	int32_t ___Third_26;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSafeDial::CurrentNumber
	int32_t ___CurrentNumber_27;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSafeDial::CamDistance
	float ___CamDistance_28;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSafeDial::PreviousDistance
	float ___PreviousDistance_29;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSafeDial::Tolerance
	float ___Tolerance_30;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSafeDial::LowerBound
	float ___LowerBound_31;
	// System.Single HurricaneVR.TechDemo.Scripts.DemoSafeDial::UpperBound
	float ___UpperBound_32;
	// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSafeDial::AccuracyAllowance
	int32_t ___AccuracyAllowance_33;
	// UnityEngine.Events.UnityEvent HurricaneVR.TechDemo.Scripts.DemoSafeDial::Unlocked
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Unlocked_34;
	// HurricaneVR.TechDemo.Scripts.SafeDialState HurricaneVR.TechDemo.Scripts.DemoSafeDial::_state
	int32_t ____state_35;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber
struct HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191  : public HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6
{
	// HurricaneVR.Framework.Core.HVRForceGrabberLaser HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::Laser
	HVRForceGrabberLaser_tABA6254ADA87FC0A4054E39D93E0CA662B49B4F6* ___Laser_28;
	// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::HandGrabber
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___HandGrabber_29;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::GrabIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ___GrabIndicator_30;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandPoser HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::GrabPoser
	HVRHandPoser_tCF5D301EB153B0E53954A6A759E938C6CFFC10C6* ___GrabPoser_31;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandPoser HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::HoverPoser
	HVRHandPoser_tCF5D301EB153B0E53954A6A759E938C6CFFC10C6* ___HoverPoser_32;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::RequireLineOfSight
	bool ___RequireLineOfSight_33;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::RaycastOrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RaycastOrigin_34;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::UseClosestPoint
	bool ___UseClosestPoint_35;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::UseHandLayerMask
	bool ___UseHandLayerMask_36;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::RaycastLayermask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___RaycastLayermask_37;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::MaxRayCastDistance
	float ___MaxRayCastDistance_38;
	// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabMode HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::GrabStyle
	int32_t ___GrabStyle_39;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::SFXGrab
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SFXGrab_40;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRForcePullSettings HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::ForcePullSettings
	HVRForcePullSettings_tC18235BD7C7581749F6F037341AA583AA7BFC078* ___ForcePullSettings_41;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::RequiresFlick
	bool ___RequiresFlick_42;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::ForceTime
	float ___ForceTime_43;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::YOffset
	float ___YOffset_44;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::FlickStartThreshold
	float ___FlickStartThreshold_45;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::FlickEndThreshold
	float ___FlickEndThreshold_46;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::QuickMoveThreshold
	float ___QuickMoveThreshold_47;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::QuickMoveResetThreshold
	float ___QuickMoveResetThreshold_48;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::MaximumVelocityPostCollision
	float ___MaximumVelocityPostCollision_49;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::MaximumVelocityAutoGrab
	float ___MaximumVelocityAutoGrab_50;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::AutoGrab
	bool ___AutoGrab_51;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::AdditionalAutoGrabTime
	float ___AdditionalAutoGrabTime_52;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::AutoGrabDistance
	float ___AutoGrabDistance_53;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::SlowMo
	bool ___SlowMo_54;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::TimeScale
	float ___TimeScale_55;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::_grabbableCollided
	bool ____grabbableCollided_56;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::_canFlick
	bool ____canFlick_57;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::_canQuickStart
	bool ____canQuickStart_58;
	// UnityEngine.Coroutine HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::_additionalGrabRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____additionalGrabRoutine_59;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::_grabIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ____grabIndicator_60;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::_anchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____anchor_61;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::_forceRB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____forceRB_62;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::<IsForceGrabbing>k__BackingField
	bool ___U3CIsForceGrabbingU3Ek__BackingField_63;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::<IsAiming>k__BackingField
	bool ___U3CIsAimingU3Ek__BackingField_64;
};

// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber
struct HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90  : public HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6
{
	// HurricaneVR.Framework.Core.Bags.HVRSocketBag HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::SocketBag
	HVRSocketBag_tEA607484EBFCED87606BDFF92E8F527CE3815974* ___SocketBag_29;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::InverseKinematics
	bool ___InverseKinematics_30;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ApplyHandLayer
	bool ___ApplyHandLayer_31;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HandGrabs
	bool ___HandGrabs_32;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HandGrabSpeed
	float ___HandGrabSpeed_33;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::DynamicGrabPalmAdjust
	bool ___DynamicGrabPalmAdjust_34;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::AllowMultiplayerSwap
	bool ___AllowMultiplayerSwap_35;
	// HurricaneVR.Framework.Shared.HVRGrabTrigger HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::GrabTrigger
	int32_t ___GrabTrigger_36;
	// HurricaneVR.Framework.Shared.HVRHandSide HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HandSide
	int32_t ___HandSide_37;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandPoser HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::GrabPoser
	HVRHandPoser_tCF5D301EB153B0E53954A6A759E938C6CFFC10C6* ___GrabPoser_38;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandPoser HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HoverPoser
	HVRHandPoser_tCF5D301EB153B0E53954A6A759E938C6CFFC10C6* ___HoverPoser_39;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::CloneHandModel
	bool ___CloneHandModel_40;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::IgnoreParentingDistance
	bool ___IgnoreParentingDistance_41;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::IgnoreParentingAngle
	bool ___IgnoreParentingAngle_42;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ParentingMaxAngleDelta
	float ___ParentingMaxAngleDelta_43;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ParentingMaxDistance
	float ___ParentingMaxDistance_44;
	// HurricaneVR.Framework.Core.ScriptableObjects.HVRJointSettings HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::PullingSettings
	HVRJointSettings_t813A34466578F1299BC384C988793A89A98BFB77* ___PullingSettings_45;
	// UnityEngine.LayerMask HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::RaycastLayermask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___RaycastLayermask_46;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::PushoutTime
	float ___PushoutTime_47;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::PullLerpTime
	float ___PullLerpTime_48;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::MoveThreshold
	float ___MoveThreshold_49;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandAnimator HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HandAnimator
	HVRHandAnimator_tB6C3938B2457679B4B04635FEF5F080DA02CDC13* ___HandAnimator_50;
	// HurricaneVR.Framework.Core.HVRHandPhysics HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HandPhysics
	HVRHandPhysics_t843A7232A98033CC51B9236C137C8F03516D14DB* ___HandPhysics_51;
	// HurricaneVR.Framework.ControllerInput.HVRPlayerInputs HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::Inputs
	HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* ___Inputs_52;
	// HurricaneVR.Framework.Core.HandPoser.HVRPhysicsPoser HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::PhysicsPoser
	HVRPhysicsPoser_t303F3723DDA06C8B30C381D9E8389D514D098B9D* ___PhysicsPoser_53;
	// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ForceGrabber
	HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* ___ForceGrabber_54;
	// HurricaneVR.Framework.Components.HVRControllerOffset HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ControllerOffset
	HVRControllerOffset_t1BE34A08DD3813C992A611BC8C20BED5CD2B7C75* ___ControllerOffset_55;
	// HurricaneVR.Framework.Core.Player.HVRTeleportCollisonHandler HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::CollisionHandler
	HVRTeleportCollisonHandler_t738736934B487A9F6C8CC6EC4B3B05A76EDB7AD3* ___CollisionHandler_56;
	// UnityEngine.BoxCollider HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::Pusher
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___Pusher_57;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::GrabIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ___GrabIndicator_58;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::TriggerGrabIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ___TriggerGrabIndicator_59;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::DynamicPoseIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ___DynamicPoseIndicator_60;
	// HurricaneVR.Framework.Core.Grabbers.DynamicPoseGrabIndicator HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::DynamicPoseIndicatorMode
	int32_t ___DynamicPoseIndicatorMode_61;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandPoser HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::FallbackPoser
	HVRHandPoser_tCF5D301EB153B0E53954A6A759E938C6CFFC10C6* ___FallbackPoser_62;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HandModel
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___HandModel_63;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::JointAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___JointAnchor_64;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::RaycastOrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RaycastOrigin_65;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::TrackedController
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TrackedController_66;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::OverlapSizer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___OverlapSizer_67;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ReleasedVelocityFactor
	float ___ReleasedVelocityFactor_68;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ReleasedAngularConversionFactor
	float ___ReleasedAngularConversionFactor_69;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ReleasedAngularThreshold
	float ___ReleasedAngularThreshold_70;
	// System.Int32 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ThrowLookback
	int32_t ___ThrowLookback_71;
	// System.Int32 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ThrowLookbackStart
	int32_t ___ThrowLookbackStart_72;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::TakePeakVelocities
	bool ___TakePeakVelocities_73;
	// System.Int32 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::CountPeakVelocities
	int32_t ___CountPeakVelocities_74;
	// HurricaneVR.Framework.Components.HVRThrowingCenterOfMass HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::ThrowingCenterOfMass
	HVRThrowingCenterOfMass_t87945CE418DB853807916FA86CE0F7E0E350C7B1* ___ThrowingCenterOfMass_75;
	// HurricaneVR.Framework.Core.VRHandGrabberEvent HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::BreakDistanceReached
	VRHandGrabberEvent_t43EC3CE57F33FAC044A3D4338C967C5831F76D16* ___BreakDistanceReached_76;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::DrawCenterOfMass
	bool ___DrawCenterOfMass_77;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::GrabToggleActive
	bool ___GrabToggleActive_78;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_triggerHoverTarget
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ____triggerHoverTarget_79;
	// HurricaneVR.Framework.Core.Grabbers.HVRSocket HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::HoveredSocket
	HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___HoveredSocket_80;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_hoverTarget
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ____hoverTarget_81;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_dynamicIndicatorEnabled
	bool ____dynamicIndicatorEnabled_82;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_grabIndicatorEnabled
	bool ____grabIndicatorEnabled_83;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_grabIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ____grabIndicator_84;
	// HurricaneVR.Framework.Components.HVRGrabbableHoverBase HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_triggerIndicator
	HVRGrabbableHoverBase_tCDCDDC8416D1E65D6796381383593F7693F78305* ____triggerIndicator_85;
	// HurricaneVR.Framework.Core.Player.HVRHandStrengthHandler HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<StrengthHandler>k__BackingField
	HVRHandStrengthHandler_tCF023E4A90BDC98745D3EC8043DE15B3071AAD3E* ___U3CStrengthHandlerU3Ek__BackingField_86;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<HandModelParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CHandModelParentU3Ek__BackingField_87;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<HandModelPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CHandModelPositionU3Ek__BackingField_88;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<HandModelRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CHandModelRotationU3Ek__BackingField_89;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<HandModelScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CHandModelScaleU3Ek__BackingField_90;
	// HurricaneVR.Framework.Components.HVRRigidBodyOverrides HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<RigidOverrides>k__BackingField
	HVRRigidBodyOverrides_tEBB9AC89217974E1061008AB59BA870CB87677B6* ___U3CRigidOverridesU3Ek__BackingField_91;
	// System.Collections.Generic.Dictionary`2<HurricaneVR.Framework.Core.HVRGrabbable,UnityEngine.Coroutine> HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::OverlappingGrabbables
	Dictionary_2_tB397C090758182CAAACE9ED41724A3C91FA99B58* ___OverlappingGrabbables_92;
	// UnityEngine.GameObject HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<TempGrabPoint>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CTempGrabPointU3Ek__BackingField_93;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<IsLineGrab>k__BackingField
	bool ___U3CIsLineGrabU3Ek__BackingField_94;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<IsTriggerHovering>k__BackingField
	bool ___U3CIsTriggerHoveringU3Ek__BackingField_95;
	// HurricaneVR.Framework.ControllerInput.HVRTrackedController HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<HVRTrackedController>k__BackingField
	HVRTrackedController_t9BE1CC3C3770994B7042A191F6FA6082F6D3C111* ___U3CHVRTrackedControllerU3Ek__BackingField_96;
	// HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<PosableGrabPoint>k__BackingField
	HVRPosableGrabPoint_t45AD7B3827EE2CFF89742F05F9FFD2E208D9CB23* ___U3CPosableGrabPointU3Ek__BackingField_97;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_triggerGrabPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____triggerGrabPoint_98;
	// HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<TriggerPosableGrabPoint>k__BackingField
	HVRPosableGrabPoint_t45AD7B3827EE2CFF89742F05F9FFD2E208D9CB23* ___U3CTriggerPosableGrabPointU3Ek__BackingField_99;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<PoseLocalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CPoseLocalRotationU3Ek__BackingField_100;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<PhysicsHandPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPhysicsHandPositionU3Ek__BackingField_101;
	// System.Byte[] HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<PhysicsPoseBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CPhysicsPoseBytesU3Ek__BackingField_102;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<IsClimbing>k__BackingField
	bool ___U3CIsClimbingU3Ek__BackingField_103;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<IsPhysicsPose>k__BackingField
	bool ___U3CIsPhysicsPoseU3Ek__BackingField_104;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<GrabAnchorLocal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGrabAnchorLocalU3Ek__BackingField_105;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<HandAnchorLocal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CHandAnchorLocalU3Ek__BackingField_106;
	// HurricaneVR.Framework.Shared.Utilities.CircularBuffer`1<UnityEngine.Vector3> HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::RecentVelocities
	CircularBuffer_1_t274E1E537F2160E9CFA8F4C2DE0F57452E37F122* ___RecentVelocities_107;
	// HurricaneVR.Framework.Shared.Utilities.CircularBuffer`1<UnityEngine.Vector3> HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::RecentAngularVelocities
	CircularBuffer_1_t274E1E537F2160E9CFA8F4C2DE0F57452E37F122* ___RecentAngularVelocities_108;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<CanActivate>k__BackingField
	bool ___U3CCanActivateU3Ek__BackingField_109;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<CanRelease>k__BackingField
	bool ___U3CCanReleaseU3Ek__BackingField_110;
	// UnityEngine.SphereCollider HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_overlapCollider
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ____overlapCollider_111;
	// UnityEngine.Collider[] HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_overlapColliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____overlapColliders_112;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_hasPosed
	bool ____hasPosed_113;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_handMoving
	bool ____handMoving_114;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_previousRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____previousRotation_115;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_pullingTimer
	float ____pullingTimer_116;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_collisionTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____collisionTransform_117;
	// HurricaneVR.Framework.Core.HandPoser.HVRHandAnimator HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_collisionAnimator
	HVRHandAnimator_tB6C3938B2457679B4B04635FEF5F080DA02CDC13* ____collisionAnimator_118;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::<Joint>k__BackingField
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___U3CJointU3Ek__BackingField_119;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_fakeHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____fakeHand_120;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_fakeHandAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____fakeHandAnchor_121;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_isForceAutoGrab
	bool ____isForceAutoGrab_122;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_lineOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lineOffset_123;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_tightlyHeld
	bool ____tightlyHeld_124;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_flippedLinePose
	bool ____flippedLinePose_125;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_startRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____startRotation_126;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_primaryGrabPointGrab
	bool ____primaryGrabPointGrab_127;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_socketGrab
	bool ____socketGrab_128;
	// HurricaneVR.Framework.Core.HandPoser.HVRPosableHand HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_posableHand
	HVRPosableHand_t7C98C569D120765E5C36A631ED3901FCF29139A2* ____posableHand_129;
	// HurricaneVR.Framework.Core.HandPoser.HVRPosableHand HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_collisionHand
	HVRPosableHand_t7C98C569D120765E5C36A631ED3901FCF29139A2* ____collisionHand_130;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_hasForceGrabber
	bool ____hasForceGrabber_131;
	// HurricaneVR.Framework.Core.HandPoser.Data.HVRHandPoseData HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_physicsPose
	HVRHandPoseData_tF59F63D9C0A231B89F6EDF4FD4EC2B4C58F2DA72* ____physicsPose_132;
	// HurricaneVR.Framework.Core.HandPoser.Data.HVRHandPoseData HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_savedPose
	HVRHandPoseData_tF59F63D9C0A231B89F6EDF4FD4EC2B4C58F2DA72* ____savedPose_133;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_lineGrabHandRelativeDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lineGrabHandRelativeDirection_134;
	// UnityEngine.WaitForFixedUpdate HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_wffu
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ____wffu_135;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_moveGrab
	bool ____moveGrab_136;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::IsGripGrabActivated
	bool ___IsGripGrabActivated_137;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::IsTriggerGrabActivated
	bool ___IsTriggerGrabActivated_138;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::IsGripGrabActive
	bool ___IsGripGrabActive_139;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::IsTriggerGrabActive
	bool ___IsTriggerGrabActive_140;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_checkingSwap
	bool ____checkingSwap_141;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_checkingEnableCollision
	bool ____checkingEnableCollision_142;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_forceFullyGrabbed
	bool ____forceFullyGrabbed_143;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_pusherSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pusherSize_144;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_pushing
	bool ____pushing_145;
	// UnityEngine.GameObject HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_anchor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____anchor_146;
	// UnityEngine.Rigidbody HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_forceRB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____forceRB_147;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_swappingGrabPoint
	bool ____swappingGrabPoint_148;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_finalJointCreated
	bool ____finalJointCreated_149;
	// HurricaneVR.Framework.Shared.HVRGrabControls HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_currentGrabControl
	int32_t ____currentGrabControl_150;
	// HurricaneVR.Framework.Shared.HVRGrabControls HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_grabbableControl
	int32_t ____grabbableControl_151;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_distanceComplete
	bool ____distanceComplete_152;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_posJoint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ____posJoint_153;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_rotJoint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ____rotJoint_154;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_breakDistanceNext
	float ____breakDistanceNext_155;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Int32> HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_layerCache
	Dictionary_2_t2F2061C52D14CC6C406B18BFBDC99759B42984C2* ____layerCache_158;
	// System.Collections.Generic.List`1<UnityEngine.Transform> HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_layerKeys
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____layerKeys_159;
	// UnityEngine.ConfigurableJoint HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::PullJoint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___PullJoint_160;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startPos_161;
	// UnityEngine.Quaternion HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_startRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____startRot_162;
};

struct HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_peakVelocities
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____peakVelocities_156;
	// System.Collections.Generic.IComparer`1<UnityEngine.Vector3> HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::_velocityComparer
	RuntimeObject* ____velocityComparer_157;
};

// HurricaneVR.Framework.Core.Grabbers.HVRSocket
struct HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418  : public HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6
{
	// HurricaneVR.Framework.Shared.HVRGrabControls HurricaneVR.Framework.Core.Grabbers.HVRSocket::GrabControl
	int32_t ___GrabControl_28;
	// HurricaneVR.Framework.Shared.HVRGrabDetection HurricaneVR.Framework.Core.Grabbers.HVRSocket::GrabDetectionType
	int32_t ___GrabDetectionType_29;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::CheckHandOverlap
	bool ___CheckHandOverlap_30;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::ReleasesOnHover
	bool ___ReleasesOnHover_31;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::InstantHandPose
	bool ___InstantHandPose_32;
	// HurricaneVR.Framework.Core.Grabbers.SocketHoldType HurricaneVR.Framework.Core.Grabbers.HVRSocket::HoldType
	int32_t ___HoldType_33;
	// UnityEngine.GameObject HurricaneVR.Framework.Core.Grabbers.HVRSocket::AutoSpawnPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AutoSpawnPrefab_34;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRSocket::GrabTimeout
	float ___GrabTimeout_35;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::GrabbableMustBeHeld
	bool ___GrabbableMustBeHeld_36;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::GrabsFromHand
	bool ___GrabsFromHand_37;
	// HurricaneVR.Framework.Core.Sockets.HVRSocketHoverAction[] HurricaneVR.Framework.Core.Grabbers.HVRSocket::HoverActions
	HVRSocketHoverActionU5BU5D_tC21C3F61BBAB8FF2E3F2F4BB6D689366545AB490* ___HoverActions_38;
	// HurricaneVR.Framework.Core.Sockets.HVRSocketHoverAction[] HurricaneVR.Framework.Core.Grabbers.HVRSocket::HandGrabActions
	HVRSocketHoverActionU5BU5D_tC21C3F61BBAB8FF2E3F2F4BB6D689366545AB490* ___HandGrabActions_39;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::ParentDisablesGrab
	bool ___ParentDisablesGrab_40;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRSocket::ParentGrabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___ParentGrabbable_41;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::CanRemoveGrabbable
	bool ___CanRemoveGrabbable_42;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::ScaleGrabbable
	bool ___ScaleGrabbable_43;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRSocket::Size
	float ___Size_44;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::CanGrabStabbingGrabbable
	bool ___CanGrabStabbingGrabbable_45;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.Grabbers.HVRSocket::AudioGrabbedOverride
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___AudioGrabbedOverride_46;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.Grabbers.HVRSocket::AudioReleasedOverride
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___AudioReleasedOverride_47;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.Grabbers.HVRSocket::AudioGrabbedFallback
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___AudioGrabbedFallback_48;
	// UnityEngine.AudioClip HurricaneVR.Framework.Core.Grabbers.HVRSocket::AudioReleasedFallback
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___AudioReleasedFallback_49;
	// HurricaneVR.Framework.Core.Sockets.HVRSocketFilter[] HurricaneVR.Framework.Core.Grabbers.HVRSocket::SocketFilters
	HVRSocketFilterU5BU5D_tE490C9FB6A30DA9C93877EE55B80D7CEDC51D2C8* ___SocketFilters_50;
	// HurricaneVR.Framework.Core.Grabbers.SocketCondition HurricaneVR.Framework.Core.Grabbers.HVRSocket::FilterCondition
	int32_t ___FilterCondition_51;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRSocket::DistanceSource
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DistanceSource_52;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::DisableCollision
	bool ___DisableCollision_53;
	// HurricaneVR.Framework.Core.Grabbers.SocketSpawnEvent HurricaneVR.Framework.Core.Grabbers.HVRSocket::SpawnedPrefab
	SocketSpawnEvent_t87F4EB940ADFD998C490FFE3827581C81517627D* ___SpawnedPrefab_54;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::DebugScale
	bool ___DebugScale_55;
	// UnityEngine.Transform HurricaneVR.Framework.Core.Grabbers.HVRSocket::_previousParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____previousParent_56;
	// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRSocket::_previousScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousScale_57;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::_appQuitting
	bool ____appQuitting_58;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRSocket::_timeoutGrabbable
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ____timeoutGrabbable_59;
	// System.Single HurricaneVR.Framework.Core.Grabbers.HVRSocket::_mass
	float ____mass_60;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::_hadRigidBody
	bool ____hadRigidBody_61;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::_ignoreGrabSFX
	bool ____ignoreGrabSFX_62;
	// UnityEngine.Coroutine HurricaneVR.Framework.Core.Grabbers.HVRSocket::_fixPositionRoutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____fixPositionRoutine_63;
	// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRSocket::<LinkedGrabbable>k__BackingField
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___U3CLinkedGrabbableU3Ek__BackingField_64;
	// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRSocket::<CanInteract>k__BackingField
	bool ___U3CCanInteractU3Ek__BackingField_65;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// HurricaneVR.TechDemo.Scripts.DemoHolster
struct DemoHolster_tA7512D1D0C6D74DADAB6CCF64C6B7FD56C74DC25  : public HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418
{
};

// HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket
struct DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3  : public HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418
{
};

// HurricaneVR.TechDemo.Scripts.DemoSocketFilter
struct DemoSocketFilter_t23A24FE270D4CA08D26FE3A51E49FFD4B13213E7  : public HVREnumFlagsSocketFilter_1_t5BD870BE3A318344EBBBFABAA8BE91DF1CEFEB47
{
};

// HurricaneVR.TechDemo.Scripts.DemoSocketables
struct DemoSocketables_tCA4DDE3A29399721941785DC04B6DB2681FA5037  : public HVREnumFlagsSocketable_1_t06B6DC19FF7F059A014513E60461C9BD02E49BF9
{
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HurricaneVR.Framework.Core.HVRGrabbable[]
struct HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2  : public RuntimeArray
{
	ALIGN_FIELD (8) HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* m_Items[1];

	inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber[]
struct HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B  : public RuntimeArray
{
	ALIGN_FIELD (8) HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* m_Items[1];

	inline HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HurricaneVR.TechDemo.Scripts.DemoKeypadButton[]
struct DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD  : public RuntimeArray
{
	ALIGN_FIELD (8) DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* m_Items[1];

	inline DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HurricaneVR.Framework.Core.Player.HVRTeleporter[]
struct HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A  : public RuntimeArray
{
	ALIGN_FIELD (8) HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* m_Items[1];

	inline HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HurricaneVR.Framework.Core.Player.HVRPlayerController[]
struct HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634  : public RuntimeArray
{
	ALIGN_FIELD (8) HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* m_Items[1];

	inline HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber[]
struct HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F  : public RuntimeArray
{
	ALIGN_FIELD (8) HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* m_Items[1];

	inline HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared (UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5DEB67150607F5DFF19EBB14D067D0868FE0C469_gshared (UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m326988BDE31056C04EFE1C336A0985C954BACE74_gshared (UnityEvent_1_t13C3A5E078C5974B6FEA4772A5FF2B2EF3319C51* __this, UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532* ___call0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketable`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVREnumFlagsSocketable_1__ctor_m945A3ABBB878340515075C0D90206FEC2A86F9F3_gshared (HVREnumFlagsSocketable_1_t68C52A7902DFD39F06843A82137A23744666F1F9* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketFilter`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVREnumFlagsSocketFilter_1__ctor_mF54521C72A40D864B659937AC020A691BB4954A9_gshared (HVREnumFlagsSocketFilter_1_t274B96A2BE2201D2D5F70CE451119645BDF33B5B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Hammering>()
inline Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Hammering::OnAnvil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering_OnAnvil_m0E891F549110D3225A6B26FD432E240609823D49 (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) ;
// System.Void Hammering::OffAnvil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering_OffAnvil_m8D8EE36331FA9374363797EE9421E279BFCDD90E (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Boolean Hammering::getChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Hammering_getChanged_m0F51E45D74986D76151601E6239A87F18BACFA3A_inline (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Heating>()
inline Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Heating::OnFurnace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heating_OnFurnace_mF74670DD2E631EABAA5496A5361E3B4077EA5994 (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) ;
// System.Void Heating::OffFurnace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heating_OffFurnace_mEE8DBD8565A33282F44639641A1CE791E734F2FE (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Heating>()
inline Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* Component_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_mC1CF9B3206AAF0546A3745410851E6A449536CDF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Boolean Heating::getHeated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Heating_getHeated_mA46EE152E905F784C1DADD913883BA84D51B67E3_inline (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HurricaneVR.Framework.Core.HVRGrabbable>()
inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* Component_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m323C2BB2FDC8631D5B02C57ADD07FE745C81F3C0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean HurricaneVR.Framework.Core.HVRGrabbable::get_IsBeingHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HVRGrabbable_get_IsBeingHeld_m0B737930A391CA6689D4F4B1B8703F4F5A26F08D (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<HurricaneVR.Framework.Core.HVRGrabbable>(T&)
inline bool Component_TryGetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m2521AD4640BC1A2474A2B0595B2EE742E9E0D88C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,HurricaneVR.Framework.Core.HVRGrabbable>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m00B1484F64043D0CF1F6DDF9E9EC65F663FA6607 (UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,HurricaneVR.Framework.Core.HVRGrabbable>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_mD7DB3A7C8C28B7F02CD6480126E322FF090C83CA (UnityEvent_2_tB914EBCCD72B43E4BDAE818B93F4FB0BC4D8F690* __this, UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tB914EBCCD72B43E4BDAE818B93F4FB0BC4D8F690*, UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.HandPoser.HVRAnimationParameters::ClearFloatParameter(HurricaneVR.Framework.Shared.HVRHandSide,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRAnimationParameters_ClearFloatParameter_mB82817C9DA64D598783DC5B9921C1C4342C17012 (int32_t ___side0, String_t* ___parameter1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>::get_Count()
inline int32_t List_1_get_Count_m893C65DAF893C60A841609A7D9076B4788556837_inline (List_1_t0546410FB3DD901156EF02285245EBDB24982ECB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0546410FB3DD901156EF02285245EBDB24982ECB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>::get_Item(System.Int32)
inline HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* List_1_get_Item_m0AB1EA3BB9A670C7949B0453F61F9CA87D85E22F (List_1_t0546410FB3DD901156EF02285245EBDB24982ECB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* (*) (List_1_t0546410FB3DD901156EF02285245EBDB24982ECB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// HurricaneVR.Framework.Shared.HVRController HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0* HVRHandGrabber_get_Controller_mB0B048B8AAFDCD95D7FE70862E6A94B65E2AA64C (HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* __this, const RuntimeMethod* method) ;
// HurricaneVR.Framework.Shared.HVRControllerType HurricaneVR.Framework.Shared.HVRController::get_ControllerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HVRController_get_ControllerType_m6E21BCC53B5C1541DF09925B8827F25C51C97F19_inline (HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.HandPoser.HVRAnimationParameters::SetFloatParameter(HurricaneVR.Framework.Shared.HVRHandSide,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRAnimationParameters_SetFloatParameter_mA60DACD7B35034FB0F83DFF6D20AF55EA0ED8509 (int32_t ___side0, String_t* ___parameter1, float ___value2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Func`2<UnityEngine.Collider,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m864A52B06CBC2998220EBC26DE6F9AF4FC6BF864 (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.Collider>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786 (RuntimeObject* ___source0, Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Collider>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* Enumerable_ToList_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m360E62DC627DDFC71C71414CF9318032787D1B62 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoBackpack::IgnoreColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoBackpack_IgnoreColliders_m412EE0EC2BCD816032B75D14BFA5E33ED6DCA7A8 (DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIgnoreCollidersU3Ed__2__ctor_m1A8B9106969C6C08A1793399C8AFBD76C63AB037 (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Collider> HurricaneVR.Framework.Core.HVRGrabbable::get_Colliders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* HVRGrabbable_get_Colliders_m9FAECB873DAB546F07C20FA1F9B358B827E8BE56_inline (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_mFBAAD9B91D488802086C1A1C96447CE4C869211D (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider10, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39E3849B326EB0855B92B2AFB4C98988C03F9E2B (U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* Stopwatch_StartNew_mF813F15E68604C7734FECC301B7042A521041259 (const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<HurricaneVR.Framework.Core.HVRGrabbable>()
inline HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* Object_FindObjectsOfType_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mF02811155D0F2917B1942DECA41DF5DDE60BE72F (const RuntimeMethod* method)
{
	return ((  HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack::IgnoreCollision(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoBackpack_IgnoreCollision_m925E0E8CB45A712CE95137CB94005F2738CBB875 (DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>()
inline HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* Object_FindObjectsOfType_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_mCF5FB080BF2B1B25F1632446E7F8A498890AF801 (const RuntimeMethod* method)
{
	return ((  HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m644C40A901702D19B041828F2E854855C51DFD0D (Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80 (RuntimeObject* ___source0, Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* ___predicate1, const RuntimeMethod* method)
{
	return ((  HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* (*) (RuntimeObject*, Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::set_Grabber(HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoCodeGrabbing_set_Grabber_m581F72DD78C4C851E89CE9F1A54B8FD1267F2DA2_inline (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___value0, const RuntimeMethod* method) ;
// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::get_Grabber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, const RuntimeMethod* method) ;
// HurricaneVR.Framework.Core.HVRGrabbable HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::get_GrabbedTarget()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* HVRGrabberBase_get_GrabbedTarget_mFDB57924F7548AC8F61E68367260AE10AC4360C8_inline (HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::get_IsGrabbing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HVRGrabberBase_get_IsGrabbing_mD75101D8BCF25BFF7DC3B3F0B99458621AEA76D1_inline (HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DD462FD149274D20C1E59507DF747121539E59F (U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ConfigurableJoint>()
inline ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HurricaneVR.Framework.Core.Utils.HVRJointUtilities::SetLinearLimit(UnityEngine.ConfigurableJoint,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRJointUtilities_SetLinearLimit_mB708F0A8DE1EFE00A19DE36E4E5C84E70A4C34E4 (ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___joint0, float ___limit1, float ___bounciness2, float ___contactDistance3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_autoConfigureConnectedAnchor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_autoConfigureConnectedAnchor_mF61D716174DE67CD94FF042881E9052357679E02 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_connectedAnchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<HurricaneVR.Framework.Core.Stabbing.HVRStabbable>()
inline HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* Component_GetComponentInParent_TisHVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1_m23C4777ED83C185A1F975C8D985D2521FD3053BC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.ParticleSystem>(T&)
inline bool Component_TryGetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m263198B23E82499C16C66D2C3866A89A7CF85E58 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m5DEB67150607F5DFF19EBB14D067D0868FE0C469 (UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5DEB67150607F5DFF19EBB14D067D0868FE0C469_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<HurricaneVR.Framework.Core.Stabbing.StabArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m326988BDE31056C04EFE1C336A0985C954BACE74 (UnityEvent_1_t13C3A5E078C5974B6FEA4772A5FF2B2EF3319C51* __this, UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t13C3A5E078C5974B6FEA4772A5FF2B2EF3319C51*, UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532*, const RuntimeMethod*))UnityEvent_1_AddListener_m326988BDE31056C04EFE1C336A0985C954BACE74_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE4DF0A065740438D14723BCD54F8E6D8F08D277A (UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_m3B3D236026298DEB2FFA5865C91E81A91CEB7C40 (UnityEvent_2_t03AD5FDC8390DF436A87E03102EA86A7E3FEB0F7* __this, UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t03AD5FDC8390DF436A87E03102EA86A7E3FEB0F7*, UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::PopConfetti(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoFullStabConfetti_PopConfetti_m1BC20131923ADBBD876CD8523DD35F5B2597FFD4 (DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// HurricaneVR.Framework.Core.Utils.SFXPlayer HurricaneVR.Framework.Core.Utils.SFXPlayer::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline (const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Utils.SFXPlayer::PlaySFX(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84 (SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Single HurricaneVR.Framework.Components.HVRRotationTracker::get_Angle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HVRRotationTracker_get_Angle_m1D919D4DEF1339D92F6907FE246C8990C7444AD0_inline (HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* __this, const RuntimeMethod* method) ;
// System.Single HurricaneVR.Framework.Core.Utils.HVRUtilities::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HVRUtilities_Remap_m59CDAA232C38224F8ADAEF003E3E962D66288ADB (float ___num0, float ___lowVal1, float ___highVal2, float ___min3, float ___max4, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::AddResetGrabbable(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_AddResetGrabbable_m6D2F4C183F533146F3F5F2C82D5B9156CC880BFC (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable>::GetEnumerator()
inline Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924 List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924 (*) (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<HurricaneVR.Framework.Core.HVRGrabbable>::Dispose()
inline void Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B (Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<HurricaneVR.Framework.Core.HVRGrabbable>::get_Current()
inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_inline (Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924* __this, const RuntimeMethod* method)
{
	return ((  HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* (*) (Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::SaveResetGrabbable(UnityEngine.Transform,HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_SaveResetGrabbable_mA1FEF17FF84DA8CA5AE9AA9DB58B800395BC482E (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<HurricaneVR.Framework.Core.HVRGrabbable>::MoveNext()
inline bool Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127 (Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m46F5E36C10B7146B3933A23E51B0A701511F8C55 (U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<HurricaneVR.Framework.Core.HVRGrabbable>()
inline HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* Component_GetComponentsInChildren_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m9239D7DCE3C2E41B6D106A0E0DCAA81C5A35CE10 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Func`2<HurricaneVR.Framework.Core.HVRGrabbable,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m71C7D9E7FD543B6F6AF91CE5DFD8669D01124218 (Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<HurricaneVR.Framework.Core.HVRGrabbable>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mB91EB4DE968069766E53D2E0AA012CA2EB7DA18E (RuntimeObject* ___source0, Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// T UnityEngine.Object::Instantiate<HurricaneVR.Framework.Core.HVRGrabbable>(T)
inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775 (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___original0, const RuntimeMethod* method)
{
	return ((  HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* (*) (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetState__ctor_m969421855515D5E2A7CB34DC1A09DCAC0E9C6EED (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::set_Scale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResetState_set_Scale_mFB3593A7EABD55C5324569C5C2A902E13B32CFD4_inline (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>::Add(T)
inline void List_1_Add_m225B60E78468F0052D88848C072D135CBB4C2386_inline (List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* __this, ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA910625D0D90E7578EB9529664A9C52989FF743E*, ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::ResetGrabbables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_ResetGrabbables_m509D6A7CDB79878F76C06B043EF772FE5AB560B1 (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<HurricaneVR.Framework.Core.HVRGrabbable>()
inline HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* GameObject_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m59E4CA1C3FAE096A545658F5A9359D078C88A006 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable>::Add(T)
inline void List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_inline (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>::GetEnumerator()
inline Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF List_1_GetEnumerator_m67459CCB5C4097B2C230A163B97637A4AF049004 (List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF (*) (List_1_tA910625D0D90E7578EB9529664A9C52989FF743E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>::Dispose()
inline void Enumerator_Dispose_m7BFB61917B6E338D5C9822851032E461130D558A (Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>::get_Current()
inline ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* Enumerator_get_Current_m291786A666CEB4AF20E71BE6C01C9C6A74357F35_inline (Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF* __this, const RuntimeMethod* method)
{
	return ((  ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* (*) (Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::get_Scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ResetState_get_Scale_m7197835938A1846CB38BC5F2E81F51CEC5B82847_inline (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>::MoveNext()
inline bool Enumerator_MoveNext_m2289AB59AF46CA2A3DC7A8FE8273239FD445E89E (Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable>::.ctor()
inline void List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499 (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Action`1<HurricaneVR.Framework.Core.HVRGrabbable>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6E0052C7F0853BACBEF8CED7C6AAC8A9CC7F60D5 (Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_m0D56FE042D7C59FC573223E1ECA324B0555A7240 (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* __this, Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*, Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState>::.ctor()
inline void List_1__ctor_mA9BA9798221E0A85DD20EC97EF62A005197EA8AF (List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA910625D0D90E7578EB9529664A9C52989FF743E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<HurricaneVR.Framework.Core.HVRGrabbable>::Remove(T)
inline bool List_1_Remove_m79D8C12C64B9D4617D013980ECDDBBF91DA7303E (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T UnityEngine.Component::GetComponent<HurricaneVR.TechDemo.Scripts.DemoHolsterOrientation>()
inline DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Quaternion HurricaneVR.Framework.Core.Grabbers.HVRSocket::GetRotationOffset(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HVRSocket_GetRotationOffset_m584C8348AEAEE6AF8AE94042895CFC060BE0AE75 (HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 HurricaneVR.Framework.Core.Grabbers.HVRSocket::GetPositionOffset(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HVRSocket_GetPositionOffset_m2B19D4F5F070D6DE5E9BD7738FD79B7D9750924E (HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Grabbers.HVRSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRSocket__ctor_m6421902E11150566A29F8E326410867CF943FEC7 (HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<HurricaneVR.TechDemo.Scripts.DemoKeypadButton>()
inline DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD* Component_GetComponentsInChildren_TisDemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_mE0890C51E615715459E1C94D0B355DD649B5D914 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<HurricaneVR.Framework.Components.HVRPhysicsButton>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m4D84BE19DA246F6481A6934DBF8C40FFD5D0BCA4 (UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<HurricaneVR.Framework.Components.HVRPhysicsButton>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mC6234AE0B45EAAC87E939A301DD5A34F344958C0 (UnityEvent_1_t5398DF5B673C8BF340E7B001503295158FF6B18E* __this, UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5398DF5B673C8BF340E7B001503295158FF6B18E*, UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Int32 HurricaneVR.TechDemo.Scripts.DemoKeypad::get_MaxLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DemoKeypad_get_MaxLength_m42FC18F8AC9F8D5746470D940152AA6B59CE2E88 (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 HurricaneVR.TechDemo.Scripts.DemoKeypad::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DemoKeypad_get_Index_mDC9B223A3B9FCA0FFDC8F65D746604F077EF6C8F (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void HurricaneVR.Framework.Components.HVRPhysicsButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRPhysicsButton_Awake_m134263BF37B3A0A2FCFDB771D7B3385381F4EDC1 (HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Components.HVRPhysicsButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRPhysicsButton__ctor_mAC2CB590F4256DA1FA7D78B562DB8CBB5F48B019 (HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket>()
inline DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mF45134DBC67C479BA0F32E844D3400071AF4205D (UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626 (UnityEvent_2_tCFA8BBFEAE5D89F7A1C8F8CE2AABD8A06A537D63* __this, UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCFA8BBFEAE5D89F7A1C8F8CE2AABD8A06A537D63*, UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.HVRGrabbable::ForceRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRGrabbable_ForceRelease_mB3D47F3A4835B4A470C8132E09D3FE756C704E75 (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.HVRGrabbable::set_CanBeGrabbed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HVRGrabbable_set_CanBeGrabbed_mFBBB3A580517AF2FFE98469BF542624776E6DB52_inline (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoLock::MoveKey(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoLock_MoveKey_m8941269B9F051AF924BB896B0DCE177A9A747370 (DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__13__ctor_m0787379FB6273A61E7D0C35DF7F283EDBAC271E7 (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.HingeJoint>()
inline HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLockedDoor::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLockedDoor_Lock_m338E5554ACA9854D3678321A3E5165C41490120F (DemoLockedDoor_tCA3885325CA417F739F7C6ED111865E68CCBAB15* __this, const RuntimeMethod* method) ;
// UnityEngine.JointLimits UnityEngine.HingeJoint::get_limits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A HingeJoint_get_limits_mD0E3FDF10D6AEF4D539711C0DE418C20930B6433 (HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.JointLimits::set_min(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointLimits_set_min_m6DCC6F92E715577794E36CD524989509D2A001AF (JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.JointLimits::set_max(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointLimits_set_max_m192F8B77417D548BF0162E651049DB1C4C1D81A0 (JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.HingeJoint::set_limits(UnityEngine.JointLimits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HingeJoint_set_limits_m5B9B968EF88FFC9ABA1777FFEFA13433F9BE08D8 (HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* __this, JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<HurricaneVR.Framework.Core.Player.HVRTeleporter>()
inline HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A* Object_FindObjectsOfType_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m82F4FF72E5FB394E91B0D5D4C0A3B7A34BB189A2 (const RuntimeMethod* method)
{
	return ((  HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void System.Func`2<HurricaneVR.Framework.Core.Player.HVRTeleporter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mACA125F5AF1DA7D4E07D9BCD8954008A4BE30481 (Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<HurricaneVR.Framework.Core.Player.HVRTeleporter>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* Enumerable_FirstOrDefault_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m94CA905D038827EDD303BD8AC2200A79DCCDB981 (RuntimeObject* ___source0, Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* ___predicate1, const RuntimeMethod* method)
{
	return ((  HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* (*) (RuntimeObject*, Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport::set_Teleporter(HurricaneVR.Framework.Core.Player.HVRTeleporter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoManualTeleport_set_Teleporter_mA1E248E8F552FB0D684491E246633CB446CA8170_inline (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* ___value0, const RuntimeMethod* method) ;
// HurricaneVR.Framework.Core.Player.HVRTeleporter HurricaneVR.TechDemo.Scripts.DemoManualTeleport::get_Teleporter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* DemoManualTeleport_get_Teleporter_m44158E0CD2821BD9ECAA179A993234BDC3DD31FA_inline (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA69C05157AC0EC1D96016127C7C04BF69FB6149E (U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Grabbers.HVRSocket::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRSocket_Start_m25A5779F1F122307EB23AB39A9A4DE215B663BBE (HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::set_AllowHovering(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HVRGrabberBase_set_AllowHovering_m54544F6D19C71F8BF7213D1EA52C7FBA9D46B30D_inline (HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mC76EFDB8EC97C21D69269426311A3E135CBE67A6 (UnityEvent_2_tCFA8BBFEAE5D89F7A1C8F8CE2AABD8A06A537D63* __this, HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* ___arg00, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCFA8BBFEAE5D89F7A1C8F8CE2AABD8A06A537D63*, HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6*, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// HurricaneVR.Framework.Core.Sockets.HVRSocketable HurricaneVR.Framework.Core.HVRGrabbable::get_Socketable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F* HVRGrabbable_get_Socketable_mEA601564D88587F9F74134E84A7EBBCB97A367E9_inline (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoPowerUnit::get_IsPoweredUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoPowerUnit_get_IsPoweredUp_m281A2F7F63FF1326672C8D57FA9BAD1FC48E8753 (DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::ComputeBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_ComputeBounds_m439F6C39B7B35966C45AEEC2BAE62694A5032F71 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Components.HVRRotationTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRRotationTracker_Start_m1F7003A715C1FC51F6993790E2184AFD2F049C8B (HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::ResetLockState(HurricaneVR.TechDemo.Scripts.SafeDialState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_ResetLockState_m8DAE9C9D37734E9B7443B6717BAE1C437A745173 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, int32_t ___state0, const RuntimeMethod* method) ;
// HurricaneVR.TechDemo.Scripts.SafeDialState HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Components.HVRRotationTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRRotationTracker_Update_m4E8892E2F7FEDBC33AB1943266BAE2F4EDEAF56A (HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::set_State(HurricaneVR.TechDemo.Scripts.SafeDialState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_set_State_m9D680F1285B0014A3D387F64A4641B8E16C48705 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Components.HVRRotationTracker::OnStepChanged(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRRotationTracker_OnStepChanged_m0970488803754B9F7C161EBCFBE1A46D78A49553 (HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* __this, int32_t ___step0, bool ___raiseEvents1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_NumberOfRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DemoSafeDial_get_NumberOfRotations_m23C4A6DAC342DB7AC857A7741FB1A75A1E39A6F0 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) ;
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_IsFirstInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoSafeDial_get_IsFirstInRange_mA3CA090B1D8605DC5E91B3EE895675932F3525D6 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) ;
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_IsSecondInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoSafeDial_get_IsSecondInRange_m5BFFF02234033714F4E88D135216214148686DEF (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) ;
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_IsThirdInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoSafeDial_get_IsThirdInRange_m89C0CA63CFE4621A2A191F39F0C77BEA4CD67A44 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Components.HVRRotationTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRRotationTracker__ctor_mFCDB2930B145ACFF5B27C00D69DCB8AD18C0C32D (HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::OpenDoorRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoSlidingDoor_OpenDoorRoutine_mEF0F3A6C7AD468CCF6D0C97161CF3B5A12746303 (DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorRoutineU3Ed__11__ctor_m1DD86EE25D3CD51180E4DE9116E8C287B380C4E5 (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7 (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketable`1<HurricaneVR.TechDemo.Scripts.DemoSocketableItems>::.ctor()
inline void HVREnumFlagsSocketable_1__ctor_mE90C60D9BD634798F667995DB1271BE0E352E6CB (HVREnumFlagsSocketable_1_t06B6DC19FF7F059A014513E60461C9BD02E49BF9* __this, const RuntimeMethod* method)
{
	((  void (*) (HVREnumFlagsSocketable_1_t06B6DC19FF7F059A014513E60461C9BD02E49BF9*, const RuntimeMethod*))HVREnumFlagsSocketable_1__ctor_m945A3ABBB878340515075C0D90206FEC2A86F9F3_gshared)(__this, method);
}
// System.Void HurricaneVR.Framework.Core.Sockets.HVREnumFlagsSocketFilter`1<HurricaneVR.TechDemo.Scripts.DemoSocketableItems>::.ctor()
inline void HVREnumFlagsSocketFilter_1__ctor_m012DED0BA9021E8926793BFB917E41B685D4007B (HVREnumFlagsSocketFilter_1_t5BD870BE3A318344EBBBFABAA8BE91DF1CEFEB47* __this, const RuntimeMethod* method)
{
	((  void (*) (HVREnumFlagsSocketFilter_1_t5BD870BE3A318344EBBBFABAA8BE91DF1CEFEB47*, const RuntimeMethod*))HVREnumFlagsSocketFilter_1__ctor_mF54521C72A40D864B659937AC020A691BB4954A9_gshared)(__this, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<HurricaneVR.Framework.Core.Player.HVRPlayerController>()
inline HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634* Object_FindObjectsOfType_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_m0086B68A646A1757CB71893C89151A4C5DCF5307 (const RuntimeMethod* method)
{
	return ((  HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void System.Func`2<HurricaneVR.Framework.Core.Player.HVRPlayerController,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m883FF32C17B33B25F335F327B1965CFD323CC3DE (Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<HurricaneVR.Framework.Core.Player.HVRPlayerController>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* Enumerable_FirstOrDefault_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_mC7262E1B113EC3FBA35498F1FA7BA6AE1DF9ABB1 (RuntimeObject* ___source0, Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* ___predicate1, const RuntimeMethod* method)
{
	return ((  HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* (*) (RuntimeObject*, Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// T UnityEngine.Component::GetComponentInChildren<HurricaneVR.Framework.Core.Player.HVRCameraRig>()
inline HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* Component_GetComponentInChildren_TisHVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45_mAA323BBD4EC43D0C753128C3A3BF6497B8464598 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<HurricaneVR.Framework.ControllerInput.HVRPlayerInputs>()
inline HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* Component_GetComponentInChildren_TisHVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986_m083CCEC6EE2D5FD7BBC196F825560CDF11777460 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber>()
inline HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* Component_GetComponentsInChildren_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m781A92500338780EB953852750144E25813BBAFA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<HurricaneVR.Framework.Core.Player.HVRJointHand>()
inline HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* Component_GetComponent_TisHVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9_m2A05DE5163BD6D4F15A66FAA2B13ABEE368A90FB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateSitStandButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateSitStandButton_m0DE12D8AF5E2CE56C8E076DBE79DB626BAD63B15 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateForceGrabButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateForceGrabButton_m5B4402A1501763E429323DEB30FC37C37C0AA4FC (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// HurricaneVR.Framework.Core.HVRSettings HurricaneVR.Framework.Core.HVRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HVRSettings_tF57CCCAFB711DE66F81893E04363569A1C4AF080* HVRSettings_get_Instance_m48BF8E761F7F920DA4546A918D14A06E65F3FC51 (const RuntimeMethod* method) ;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber>()
inline HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* Component_GetComponentsInChildren_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m1EE97F1F36E7A096D4D1D15C7873FB5F381A9C04 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Func`2<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m886F1A4339DB7700A4EF7F7C8829EDCF0100D003 (Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* Enumerable_FirstOrDefault_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m36EDE03B4C61948E7224D32D08282DEDB9710BF6 (RuntimeObject* ___source0, Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* ___predicate1, const RuntimeMethod* method)
{
	return ((  HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* (*) (RuntimeObject*, Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateLeftForceButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateLeftForceButton_m8B9C4ABB28889D5AF5A5C50538D72D9B61D45EA8 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateRightForceButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateRightForceButton_m6DFF444F15F15FFAE593DFEC3D2810A079C82487 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Player.HVRCameraRig::Calibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRCameraRig_Calibrate_mBB0F2396A68FDC2D77AD91C9D7BAED4D79FC8EEF (HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* __this, const RuntimeMethod* method) ;
// System.Void HurricaneVR.Framework.Core.Player.HVRCameraRig::SetSitStandMode(HurricaneVR.Framework.Core.Player.HVRSitStand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HVRCameraRig_SetSitStandMode_mB608B71B6B30A7E15AB2A677148EC3890159A428 (HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* __this, int32_t ___sitStand0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E8EFC8F80166E84CE42AFE1D865356E6AC47FB0 (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* __this, const RuntimeMethod* method) ;
// HurricaneVR.Framework.Shared.HVRHandSide HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber::get_HandSide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HVRForceGrabber_get_HandSide_mFC290484308210AD0F96C4503F5CCB494A609185 (HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoValveLock::MoveKey(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoValveLock_MoveKey_mDB1EA1EB573A2719F6663D32BE405EB355BC0A0B (DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key0, const RuntimeMethod* method) ;
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__6__ctor_m525627C5077A09DC20DB497E86A608DE0717C5A1 (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void Anvil::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Anvil_OnCollisionStay_m99FEA4292F0FAB7794E04097C9D2BD8F2571B821 (Anvil_t24D2D6FC17D908B44534868B39FABAE24FC4DF4A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9595A689E64270CE45EE143147558206643E91E6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var objectColision = collisionInfo.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		V_0 = L_1;
		// if (objectColision.CompareTag("Ingot")){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral9595A689E64270CE45EE143147558206643E91E6, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// objectColision.GetComponent<Hammering>().OnAnvil();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* L_5;
		L_5 = GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC(L_4, GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC_RuntimeMethod_var);
		NullCheck(L_5);
		Hammering_OnAnvil_m0E891F549110D3225A6B26FD432E240609823D49(L_5, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Anvil::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Anvil_OnCollisionExit_m408B9413FEEB6C0DF038B1E74B1CD6EA53989DFD (Anvil_t24D2D6FC17D908B44534868B39FABAE24FC4DF4A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9595A689E64270CE45EE143147558206643E91E6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var objectColision = collisionInfo.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		V_0 = L_1;
		// if (objectColision.CompareTag("Ingot")){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral9595A689E64270CE45EE143147558206643E91E6, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// objectColision.GetComponent<Hammering>().OffAnvil();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* L_5;
		L_5 = GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC(L_4, GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC_RuntimeMethod_var);
		NullCheck(L_5);
		Hammering_OffAnvil_m8D8EE36331FA9374363797EE9421E279BFCDD90E(L_5, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Anvil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Anvil__ctor_m1E249585C9C828449245E001FD38BD4E4981DAF8 (Anvil_t24D2D6FC17D908B44534868B39FABAE24FC4DF4A* __this, const RuntimeMethod* method) 
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
// System.Void ChangeColor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_Awake_m20ED44F6DA1A63802ECB11FCFAB959AB1F782DF2 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cube = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____cube_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cube_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ChangeColor::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_OnCollisionEnter_m68EE585C2B560838F9D82B24F334F26301E6A8D0 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _random1 = Random.Range(0f, 1f);
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		__this->____random1_6 = L_0;
		// _random2 = Random.Range(0f, 1f);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		__this->____random2_7 = L_1;
		// _random3 = Random.Range(0f, 1f);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		__this->____random3_8 = L_2;
		// _newCubeColor = new Color(_random1, _random2, _random3);
		float L_3 = __this->____random1_6;
		float L_4 = __this->____random2_7;
		float L_5 = __this->____random3_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->____newCubeColor_5 = L_6;
		// _cube.material.SetColor("_Color", _newCubeColor);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->____cube_4;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->____newCubeColor_5;
		NullCheck(L_8);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_8, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_9, NULL);
		// }
		return;
	}
}
// System.Void ChangeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor__ctor_m8BB1B19B1A2961B218222DF5C104ECAE825C8EA1 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
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
// System.Void Check::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OnCollisionStay_mCED5D4231011302828A94863E39903E9A89A543C (Check_t98555E4541CA6FC5875BBCF96442628FAFF675F0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9595A689E64270CE45EE143147558206643E91E6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var objectColision = collisionInfo.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		V_0 = L_1;
		// if (objectColision.CompareTag("Ingot")){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral9595A689E64270CE45EE143147558206643E91E6, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (objectColision.GetComponent<Hammering>().getChanged()){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* L_5;
		L_5 = GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC(L_4, GameObject_GetComponent_TisHammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE_mD454F99D68A9AEBC567368778F3FDF253DEC3EBC_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = Hammering_getChanged_m0F51E45D74986D76151601E6239A87F18BACFA3A_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		// Destroy(objectColision);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Check::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check__ctor_m03F24D9254B5A3EA0A36C828BE2D6736AE653380 (Check_t98555E4541CA6FC5875BBCF96442628FAFF675F0* __this, const RuntimeMethod* method) 
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
// System.Void Furnace::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Furnace_OnCollisionStay_m323A03B67A3194FE8070C5DDB567148D00F75E19 (Furnace_t8F026DF0C9B18D78FF6B77676B1810DB1CB8CDB5* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9595A689E64270CE45EE143147558206643E91E6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var objectColision = collisionInfo.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		V_0 = L_1;
		// if (objectColision.CompareTag("Ingot")){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral9595A689E64270CE45EE143147558206643E91E6, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// objectColision.GetComponent<Heating>().OnFurnace();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* L_5;
		L_5 = GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D(L_4, GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D_RuntimeMethod_var);
		NullCheck(L_5);
		Heating_OnFurnace_mF74670DD2E631EABAA5496A5361E3B4077EA5994(L_5, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Furnace::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Furnace_OnCollisionExit_m5DA010F864A6916229365E0F6309F783901121FB (Furnace_t8F026DF0C9B18D78FF6B77676B1810DB1CB8CDB5* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collisionInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9595A689E64270CE45EE143147558206643E91E6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var objectColision = collisionInfo.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collisionInfo0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		V_0 = L_1;
		// if (objectColision.CompareTag("Ingot")){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral9595A689E64270CE45EE143147558206643E91E6, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// objectColision.GetComponent<Heating>().OffFurnace();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* L_5;
		L_5 = GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D(L_4, GameObject_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_m5CF3B524CA10A361CC960E8FF45B9E1B782F143D_RuntimeMethod_var);
		NullCheck(L_5);
		Heating_OffFurnace_mEE8DBD8565A33282F44639641A1CE791E734F2FE(L_5, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Furnace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Furnace__ctor_m12FC1AA3A275FE263EE52FE8471C7533932C37E2 (Furnace_t8F026DF0C9B18D78FF6B77676B1810DB1CB8CDB5* __this, const RuntimeMethod* method) 
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
// System.Void Hammering::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering_Awake_mC6405AA2BF1BFC12202E3C015923FB94503695E7 (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_mC1CF9B3206AAF0546A3745410851E6A449536CDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ingot = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____ingot_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ingot_7), (void*)L_0);
		// _heating = GetComponent<Heating>();
		Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* L_1;
		L_1 = Component_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_mC1CF9B3206AAF0546A3745410851E6A449536CDF(__this, Component_GetComponent_TisHeating_tE32D620156345A5AE72C36939DD196BA1F6D320A_mC1CF9B3206AAF0546A3745410851E6A449536CDF_RuntimeMethod_var);
		__this->____heating_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____heating_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void Hammering::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering_Update_m2D4FF64E6C9494EEDC02731ED6A70A709A345032 (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hits == 0 && !_changed){
		int32_t L_0 = __this->____hits_6;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->____changed_5;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		// _changed = true;
		__this->____changed_5 = (bool)1;
		// _hits = 0;
		__this->____hits_6 = 0;
		// _ingot.material.SetColor("_Color", Color.green);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->____ingot_7;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_3);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_3, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_4, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Hammering::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering_OnCollisionEnter_m50A21C7D03D6CC5202D9CBCD9E54ACE9F5946234 (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F36B5FA096FAF0933EC6881E073FCD9B3243D67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var objectColision = collision.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		// if (objectColision.CompareTag("Hammer")){
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral1F36B5FA096FAF0933EC6881E073FCD9B3243D67, NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// if (_hits > 0 && _onAnvil && _heating.getHeated()){
		int32_t L_3 = __this->____hits_6;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = __this->____onAnvil_4;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* L_5 = __this->____heating_8;
		NullCheck(L_5);
		bool L_6;
		L_6 = Heating_getHeated_mA46EE152E905F784C1DADD913883BA84D51B67E3_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// _hits--;
		int32_t L_7 = __this->____hits_6;
		__this->____hits_6 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Hammering::OnAnvil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering_OnAnvil_m0E891F549110D3225A6B26FD432E240609823D49 (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) 
{
	{
		// _onAnvil = true;
		__this->____onAnvil_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Hammering::OffAnvil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering_OffAnvil_m8D8EE36331FA9374363797EE9421E279BFCDD90E (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) 
{
	{
		// _onAnvil = false;
		__this->____onAnvil_4 = (bool)0;
		// }
		return;
	}
}
// System.Boolean Hammering::getChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hammering_getChanged_m0F51E45D74986D76151601E6239A87F18BACFA3A (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) 
{
	{
		// return _changed;
		bool L_0 = __this->____changed_5;
		return L_0;
	}
}
// System.Void Hammering::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hammering__ctor_m02854DD66D9BA1F05A95D1982652ED1CA9BF8EC3 (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) 
{
	{
		// private int _hits = 2;
		__this->____hits_6 = 2;
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
// System.Void Heating::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heating_Awake_mEB23C128F6BF3E2E775BB4FBD0754DDD8B12DAC1 (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ingot = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____ingot_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ingot_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Heating::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heating_Update_m3B39C36D727FF87BDAB4400799B1B3AF5B456CB4 (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_heating){
		bool L_0 = __this->____heating_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// _timer -= Time.deltaTime;
		float L_1 = __this->____timer_6;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____timer_6 = ((float)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_001a:
	{
		// if (_timer <= 2.5f && !_heated){
		float L_3 = __this->____timer_6;
		if ((!(((float)L_3) <= ((float)(2.5f)))))
		{
			goto IL_0049;
		}
	}
	{
		bool L_4 = __this->____heated_5;
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		// _ingot.material.SetColor("_Color", Color.yellow);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____ingot_7;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_6);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_6, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_7, NULL);
	}

IL_0049:
	{
		// if (_timer <= 0 && _heating && !_heated){
		float L_8 = __this->____timer_6;
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		bool L_9 = __this->____heating_4;
		if (!L_9)
		{
			goto IL_0099;
		}
	}
	{
		bool L_10 = __this->____heated_5;
		if (L_10)
		{
			goto IL_0099;
		}
	}
	{
		// _heating = false;
		__this->____heating_4 = (bool)0;
		// _heated = true;
		__this->____heated_5 = (bool)1;
		// _timer = 0;
		__this->____timer_6 = (0.0f);
		// _ingot.material.SetColor("_Color", Color.red);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11 = __this->____ingot_7;
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_12);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_12, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_13, NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void Heating::OnFurnace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heating_OnFurnace_mF74670DD2E631EABAA5496A5361E3B4077EA5994 (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) 
{
	{
		// _heating = true;
		__this->____heating_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Heating::OffFurnace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heating_OffFurnace_mEE8DBD8565A33282F44639641A1CE791E734F2FE (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) 
{
	{
		// _heating = false;
		__this->____heating_4 = (bool)0;
		// }
		return;
	}
}
// System.Boolean Heating::getHeated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Heating_getHeated_mA46EE152E905F784C1DADD913883BA84D51B67E3 (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) 
{
	{
		// return _heated;
		bool L_0 = __this->____heated_5;
		return L_0;
	}
}
// System.Void Heating::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heating__ctor_mA41B9A31BF82999F8B1ACBA369752080C0A6FC33 (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) 
{
	{
		// private float _timer = 5f;
		__this->____timer_6 = (5.0f);
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
// System.Void SnapObjects::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapObjects_Awake_m38E0FA77B1C3DB022698A5D373C96C469C96FA40 (SnapObjects_t4F57E591152088E8B944F673F2C96364AC5342D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m323C2BB2FDC8631D5B02C57ADD07FE745C81F3C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grabbable = GetComponent<HVRGrabbable>();
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0;
		L_0 = Component_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m323C2BB2FDC8631D5B02C57ADD07FE745C81F3C0(__this, Component_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m323C2BB2FDC8631D5B02C57ADD07FE745C81F3C0_RuntimeMethod_var);
		__this->___grabbable_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabbable_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SnapObjects::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapObjects_OnTriggerStay_m3CF4E21E6EDB79A4C0092699128FA3F08B327FB5 (SnapObjects_t4F57E591152088E8B944F673F2C96364AC5342D4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC98CCCD56031E4EA86C54B1227C6D0085D3B373F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (other.gameObject.CompareTag("FornalhaPosition")){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralC98CCCD56031E4EA86C54B1227C6D0085D3B373F, NULL);
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		// if (!grabbable.IsBeingHeld){
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_3 = __this->___grabbable_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = HVRGrabbable_get_IsBeingHeld_m0B737930A391CA6689D4F4B1B8703F4F5A26F08D(L_3, NULL);
		if (L_4)
		{
			goto IL_006e;
		}
	}
	{
		// Vector3 ingotP = other.gameObject.transform.position;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_0 = L_8;
		// Quaternion ingotR = other.gameObject.transform.rotation;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = ___other0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		V_1 = L_12;
		// transform.position = ingotP;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// transform.rotation = Quaternion.Lerp(transform.rotation, ingotR, Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_17, L_18, L_19, NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_20, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void SnapObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapObjects__ctor_m2BAEF1F69B7EEB05067F378C04045DBFC5E48959 (SnapObjects_t4F57E591152088E8B944F673F2C96364AC5342D4* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPoseSqueeze_Start_m3434D3AD6F2644E232895992100B0FC329DA5C7C (DemoPoseSqueeze_tFA3148A5165E33446ED8354D9EB07487D83B90AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m2521AD4640BC1A2474A2B0595B2EE742E9E0D88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoPoseSqueeze_OnReleased_mA13E4B74A63190C1580AB75668B72CFE214EE313_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_mD7DB3A7C8C28B7F02CD6480126E322FF090C83CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryGetComponent(out Grabbable);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE** L_0 = (&__this->___Grabbable_6);
		bool L_1;
		L_1 = Component_TryGetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m2521AD4640BC1A2474A2B0595B2EE742E9E0D88C(__this, L_0, Component_TryGetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m2521AD4640BC1A2474A2B0595B2EE742E9E0D88C_RuntimeMethod_var);
		// Grabbable.HandReleased.AddListener(OnReleased);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_2 = __this->___Grabbable_6;
		NullCheck(L_2);
		VRHandGrabberEvent_t43EC3CE57F33FAC044A3D4338C967C5831F76D16* L_3 = L_2->___HandReleased_70;
		UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7* L_4 = (UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7*)il2cpp_codegen_object_new(UnityAction_2_t9DBF33037A680DA0A12EFA2304C36681A7E3C0B7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_2__ctor_m00B1484F64043D0CF1F6DDF9E9EC65F663FA6607(L_4, __this, (intptr_t)((void*)DemoPoseSqueeze_OnReleased_mA13E4B74A63190C1580AB75668B72CFE214EE313_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_2_AddListener_mD7DB3A7C8C28B7F02CD6480126E322FF090C83CA(L_3, L_4, UnityEvent_2_AddListener_mD7DB3A7C8C28B7F02CD6480126E322FF090C83CA_RuntimeMethod_var);
		// _scale = Target.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___Target_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		__this->____scale_7 = L_6;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::OnReleased(HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber,HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPoseSqueeze_OnReleased_mA13E4B74A63190C1580AB75668B72CFE214EE313 (DemoPoseSqueeze_tFA3148A5165E33446ED8354D9EB07487D83B90AA* __this, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___arg00, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVRAnimationParameters_tAF98DA1E9F16B24858FBF83D59E894727758B4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HVRAnimationParameters.ClearFloatParameter(arg0.HandSide, "Squeeze");
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = ___arg00;
		NullCheck(L_0);
		int32_t L_1 = L_0->___HandSide_37;
		il2cpp_codegen_runtime_class_init_inline(HVRAnimationParameters_tAF98DA1E9F16B24858FBF83D59E894727758B4C3_il2cpp_TypeInfo_var);
		HVRAnimationParameters_ClearFloatParameter_mB82817C9DA64D598783DC5B9921C1C4342C17012(L_1, _stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD, NULL);
		// Target.localScale = _scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____scale_7;
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPoseSqueeze_Update_m20876CBDA3E7DC267DC2486D0EB70E8F5449052D (DemoPoseSqueeze_tFA3148A5165E33446ED8354D9EB07487D83B90AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVRAnimationParameters_tAF98DA1E9F16B24858FBF83D59E894727758B4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m893C65DAF893C60A841609A7D9076B4788556837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0AB1EA3BB9A670C7949B0453F61F9CA87D85E22F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD);
		s_Il2CppMethodInitialized = true;
	}
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* V_0 = NULL;
	float V_1 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (Grabbable.HandGrabbers.Count > 0)
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = __this->___Grabbable_6;
		NullCheck(L_0);
		List_1_t0546410FB3DD901156EF02285245EBDB24982ECB* L_1 = L_0->___HandGrabbers_99;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m893C65DAF893C60A841609A7D9076B4788556837_inline(L_1, List_1_get_Count_m893C65DAF893C60A841609A7D9076B4788556837_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		// var hand = Grabbable.HandGrabbers[0];
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_3 = __this->___Grabbable_6;
		NullCheck(L_3);
		List_1_t0546410FB3DD901156EF02285245EBDB24982ECB* L_4 = L_3->___HandGrabbers_99;
		NullCheck(L_4);
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_5;
		L_5 = List_1_get_Item_m0AB1EA3BB9A670C7949B0453F61F9CA87D85E22F(L_4, 0, List_1_get_Item_m0AB1EA3BB9A670C7949B0453F61F9CA87D85E22F_RuntimeMethod_var);
		V_0 = L_5;
		// var value = hand.Controller.ControllerType == HVRControllerType.Knuckles ? hand.Controller.GripForce : hand.Controller.Trigger;
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_6 = V_0;
		NullCheck(L_6);
		HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0* L_7;
		L_7 = HVRHandGrabber_get_Controller_mB0B048B8AAFDCD95D7FE70862E6A94B65E2AA64C(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = HVRController_get_ControllerType_m6E21BCC53B5C1541DF09925B8827F25C51C97F19_inline(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0040;
		}
	}
	{
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_9 = V_0;
		NullCheck(L_9);
		HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0* L_10;
		L_10 = HVRHandGrabber_get_Controller_mB0B048B8AAFDCD95D7FE70862E6A94B65E2AA64C(L_9, NULL);
		NullCheck(L_10);
		float L_11 = L_10->___Trigger_35;
		G_B4_0 = L_11;
		goto IL_004b;
	}

IL_0040:
	{
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_12 = V_0;
		NullCheck(L_12);
		HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0* L_13;
		L_13 = HVRHandGrabber_get_Controller_mB0B048B8AAFDCD95D7FE70862E6A94B65E2AA64C(L_12, NULL);
		NullCheck(L_13);
		float L_14 = L_13->___GripForce_34;
		G_B4_0 = L_14;
	}

IL_004b:
	{
		V_1 = G_B4_0;
		// HVRAnimationParameters.SetFloatParameter(hand.HandSide, "Squeeze", value);
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___HandSide_37;
		float L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(HVRAnimationParameters_tAF98DA1E9F16B24858FBF83D59E894727758B4C3_il2cpp_TypeInfo_var);
		HVRAnimationParameters_SetFloatParameter_mA60DACD7B35034FB0F83DFF6D20AF55EA0ED8509(L_16, _stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD, L_17, NULL);
		// Target.localScale = Vector3.Lerp(_scale, ScaleTarget, value);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->____scale_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___ScaleTarget_5;
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_19, L_20, L_21, NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_22, NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPoseSqueeze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPoseSqueeze__ctor_m5B78F84CADA1E50778BE5C0211F1468630C76C5A (DemoPoseSqueeze_tFA3148A5165E33446ED8354D9EB07487D83B90AA* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoBackpack_Start_m52893338367818DB86D2D33705EB17F2C05659EA (DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m360E62DC627DDFC71C71414CF9318032787D1B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_m51415536515F7D05F8CCD5586E0D0B093567BCD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* G_B4_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* G_B4_1 = NULL;
	DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* G_B4_2 = NULL;
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* G_B3_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* G_B3_1 = NULL;
	DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* G_B3_2 = NULL;
	{
		// if (Colliders == null || Colliders.Count == 0)
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = __this->___Colliders_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_1 = __this->___Colliders_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_1, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_004a;
		}
	}

IL_0015:
	{
		// Colliders = GetComponentsInChildren<Collider>().Where(e=>!e.isTrigger).ToList();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var);
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_4 = ((U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = L_3;
		G_B3_2 = __this;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_3;
			G_B4_2 = __this;
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var);
		U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21* L_6 = ((U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_7 = (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*)il2cpp_codegen_object_new(Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m864A52B06CBC2998220EBC26DE6F9AF4FC6BF864(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_m51415536515F7D05F8CCD5586E0D0B093567BCD3_RuntimeMethod_var), NULL);
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_8 = L_7;
		((U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_8);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_003b:
	{
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_Where_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m7BABC61375EC3967C05129799DCA3C44560E3786_RuntimeMethod_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_10;
		L_10 = Enumerable_ToList_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m360E62DC627DDFC71C71414CF9318032787D1B62(L_9, Enumerable_ToList_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m360E62DC627DDFC71C71414CF9318032787D1B62_RuntimeMethod_var);
		NullCheck(G_B4_2);
		G_B4_2->___Colliders_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___Colliders_4), (void*)L_10);
	}

IL_004a:
	{
		// if (Colliders.Count > 0)
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_11 = __this->___Colliders_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_11, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		// StartCoroutine(IgnoreColliders());
		RuntimeObject* L_13;
		L_13 = DemoBackpack_IgnoreColliders_m412EE0EC2BCD816032B75D14BFA5E33ED6DCA7A8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoBackpack::IgnoreColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoBackpack_IgnoreColliders_m412EE0EC2BCD816032B75D14BFA5E33ED6DCA7A8 (DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* L_0 = (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947*)il2cpp_codegen_object_new(U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIgnoreCollidersU3Ed__2__ctor_m1A8B9106969C6C08A1793399C8AFBD76C63AB037(L_0, 0, NULL);
		U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack::IgnoreCollision(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoBackpack_IgnoreCollision_m925E0E8CB45A712CE95137CB94005F2738CBB875 (DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_1 = NULL;
	int32_t V_2 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_3 = NULL;
	{
		// for (var i = 0; i < grabbable.Colliders.Count; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_0004:
	{
		// var c = grabbable.Colliders[i];
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = ___grabbable0;
		NullCheck(L_0);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_1;
		L_1 = HVRGrabbable_get_Colliders_m9FAECB873DAB546F07C20FA1F9B358B827E8BE56_inline(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_1, L_2, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		V_1 = L_3;
		// if (!c)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// for (var j = 0; j < Colliders.Count; j++)
		V_2 = 0;
		goto IL_003d;
	}

IL_001d:
	{
		// var ourCollider = Colliders[j];
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_6 = __this->___Colliders_4;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_6, L_7, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		V_3 = L_8;
		// if (ourCollider.isTrigger)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87(L_9, NULL);
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		// Physics.IgnoreCollision(c, ourCollider);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = V_1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = V_3;
		Physics_IgnoreCollision_mFBAAD9B91D488802086C1A1C96447CE4C869211D(L_11, L_12, NULL);
	}

IL_0039:
	{
		// for (var j = 0; j < Colliders.Count; j++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		// for (var j = 0; j < Colliders.Count; j++)
		int32_t L_14 = V_2;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_15 = __this->___Colliders_4;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_15, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_001d;
		}
	}

IL_004b:
	{
		// for (var i = 0; i < grabbable.Colliders.Count; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004f:
	{
		// for (var i = 0; i < grabbable.Colliders.Count; i++)
		int32_t L_18 = V_0;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_19 = ___grabbable0;
		NullCheck(L_19);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_20;
		L_20 = HVRGrabbable_get_Colliders_m9FAECB873DAB546F07C20FA1F9B358B827E8BE56_inline(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_20, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_21)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoBackpack__ctor_m68F041C5297B6E4405B8495CDAA0516FABF320D2 (DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Collider> Colliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_0, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		__this->___Colliders_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Colliders_4), (void*)L_0);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB46AC62868B14D81D165D01E2E8969B11495F20A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21* L_0 = (U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21*)il2cpp_codegen_object_new(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m39E3849B326EB0855B92B2AFB4C98988C03F9E2B(L_0, NULL);
		((U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39E3849B326EB0855B92B2AFB4C98988C03F9E2B (U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoBackpack/<>c::<Start>b__1_0(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__1_0_m51415536515F7D05F8CCD5586E0D0B093567BCD3 (U3CU3Ec_t243CBE26B19D7E8A60155402D7348916CE6F2B21* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___e0, const RuntimeMethod* method) 
{
	{
		// Colliders = GetComponentsInChildren<Collider>().Where(e=>!e.isTrigger).ToList();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___e0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIgnoreCollidersU3Ed__2__ctor_m1A8B9106969C6C08A1793399C8AFBD76C63AB037 (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIgnoreCollidersU3Ed__2_System_IDisposable_Dispose_m892F9D066E0D3599051D2CBF2F44A9753124AEBE (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIgnoreCollidersU3Ed__2_MoveNext_m77183DA615A9E67801C59076B14C05950ECD1FBD (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mF02811155D0F2917B1942DECA41DF5DDE60BE72F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* V_1 = NULL;
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* V_2 = NULL;
	HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* V_3 = NULL;
	int32_t V_4 = 0;
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* V_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var watch = Stopwatch.StartNew();
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4;
		L_4 = Stopwatch_StartNew_mF813F15E68604C7734FECC301B7042A521041259(NULL);
		V_2 = L_4;
		// var grabbables = FindObjectsOfType<HVRGrabbable>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* L_5;
		L_5 = Object_FindObjectsOfType_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mF02811155D0F2917B1942DECA41DF5DDE60BE72F(Object_FindObjectsOfType_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mF02811155D0F2917B1942DECA41DF5DDE60BE72F_RuntimeMethod_var);
		// foreach (var grabbable in grabbables)
		V_3 = L_5;
		V_4 = 0;
		goto IL_005a;
	}

IL_0046:
	{
		// foreach (var grabbable in grabbables)
		HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = L_9;
		// IgnoreCollision(grabbable);
		DemoBackpack_t9A0BE46F33C84C926839B5142877071E3E1B7BCC* L_10 = V_1;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_11 = V_5;
		NullCheck(L_10);
		DemoBackpack_IgnoreCollision_m925E0E8CB45A712CE95137CB94005F2738CBB875(L_10, L_11, NULL);
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005a:
	{
		// foreach (var grabbable in grabbables)
		int32_t L_13 = V_4;
		HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// watch.Stop();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_15 = V_2;
		NullCheck(L_15);
		Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIgnoreCollidersU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2A95531D3A0DFD1804B069D769E8FD67CB19A783 (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIgnoreCollidersU3Ed__2_System_Collections_IEnumerator_Reset_m8345E8544159D2E12E5BE3C511A94A92E1DAF7D0 (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIgnoreCollidersU3Ed__2_System_Collections_IEnumerator_Reset_m8345E8544159D2E12E5BE3C511A94A92E1DAF7D0_RuntimeMethod_var)));
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoBackpack/<IgnoreColliders>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIgnoreCollidersU3Ed__2_System_Collections_IEnumerator_get_Current_mC8DFC03D798CD420FEC5F83C5D67E73E46A5AF79 (U3CIgnoreCollidersU3Ed__2_tE7EF424BB4147FDFD3A55396FF6D78F7BC4BB947* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::get_Grabber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115 (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, const RuntimeMethod* method) 
{
	{
		// public HVRHandGrabber Grabber { get; set; }
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = __this->___U3CGrabberU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::set_Grabber(HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCodeGrabbing_set_Grabber_m581F72DD78C4C851E89CE9F1A54B8FD1267F2DA2 (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___value0, const RuntimeMethod* method) 
{
	{
		// public HVRHandGrabber Grabber { get; set; }
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = ___value0;
		__this->___U3CGrabberU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGrabberU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCodeGrabbing_Start_m967148C126C61AA1DA59F45EE85820E804B7581A (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_mCF5FB080BF2B1B25F1632446E7F8A498890AF801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__7_0_mF6BF40B870BA747C3FA5158390DFB80C4C25219B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* G_B2_0 = NULL;
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* G_B2_1 = NULL;
	DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* G_B2_2 = NULL;
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* G_B1_0 = NULL;
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* G_B1_1 = NULL;
	DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* G_B1_2 = NULL;
	{
		// Grabber = GameObject.FindObjectsOfType<HVRHandGrabber>().FirstOrDefault(e => e.gameObject.activeInHierarchy);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* L_0;
		L_0 = Object_FindObjectsOfType_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_mCF5FB080BF2B1B25F1632446E7F8A498890AF801(Object_FindObjectsOfType_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_mCF5FB080BF2B1B25F1632446E7F8A498890AF801_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var);
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_1 = ((U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319* L_3 = ((U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_4 = (Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03*)il2cpp_codegen_object_new(Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m644C40A901702D19B041828F2E854855C51DFD0D(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__7_0_mF6BF40B870BA747C3FA5158390DFB80C4C25219B_RuntimeMethod_var), NULL);
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_5 = L_4;
		((U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_6;
		L_6 = Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80_RuntimeMethod_var);
		NullCheck(G_B2_2);
		DemoCodeGrabbing_set_Grabber_m581F72DD78C4C851E89CE9F1A54B8FD1267F2DA2_inline(G_B2_2, L_6, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::Grab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCodeGrabbing_Grab_m07AF9DDC1F457D48B9A267CC7EEC3A3A42E1859F (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Grabbable && Grabber)
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = __this->___Grabbable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_2;
		L_2 = DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (GrabTrigger == HVRGrabTrigger.ManualRelease && Grabber.GrabbedTarget == Grabbable)
		int32_t L_4 = __this->___GrabTrigger_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0047;
		}
	}
	{
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_5;
		L_5 = DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline(__this, NULL);
		NullCheck(L_5);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_6;
		L_6 = HVRGrabberBase_get_GrabbedTarget_mFDB57924F7548AC8F61E68367260AE10AC4360C8_inline(L_5, NULL);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_7 = __this->___Grabbable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// Grabber.ForceRelease();
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_9;
		L_9 = DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline(__this, NULL);
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(30 /* System.Void HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::ForceRelease() */, L_9);
		// return;
		return;
	}

IL_0047:
	{
		// if(Grabber.IsGrabbing)
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_10;
		L_10 = DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline(__this, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = HVRGrabberBase_get_IsGrabbing_mD75101D8BCF25BFF7DC3B3F0B99458621AEA76D1_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// Grabber.ForceRelease();
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_12;
		L_12 = DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline(__this, NULL);
		NullCheck(L_12);
		VirtualActionInvoker0::Invoke(30 /* System.Void HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::ForceRelease() */, L_12);
	}

IL_005f:
	{
		// Grabber.Grab(Grabbable, GrabTrigger, GrabPoint);
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_13;
		L_13 = DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline(__this, NULL);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_14 = __this->___Grabbable_5;
		int32_t L_15 = __this->___GrabTrigger_6;
		HVRPosableGrabPoint_t45AD7B3827EE2CFF89742F05F9FFD2E208D9CB23* L_16 = __this->___GrabPoint_7;
		NullCheck(L_13);
		VirtualActionInvoker3< HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE*, int32_t, HVRPosableGrabPoint_t45AD7B3827EE2CFF89742F05F9FFD2E208D9CB23* >::Invoke(86 /* System.Void HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber::Grab(HurricaneVR.Framework.Core.HVRGrabbable,HurricaneVR.Framework.Shared.HVRGrabTrigger,HurricaneVR.Framework.Core.HandPoser.HVRPosableGrabPoint) */, L_13, L_14, L_15, L_16);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCodeGrabbing__ctor_m9A524280A3A357A57536ABB3B2B92AFD54E80D66 (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0F7473C4DC2B6F088FCCFE229F92F4B2360816C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319* L_0 = (U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319*)il2cpp_codegen_object_new(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1DD462FD149274D20C1E59507DF747121539E59F(L_0, NULL);
		((U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DD462FD149274D20C1E59507DF747121539E59F (U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoCodeGrabbing/<>c::<Start>b__7_0(HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__7_0_mF6BF40B870BA747C3FA5158390DFB80C4C25219B (U3CU3Ec_tFF9F53A992A854A40F1679EC7E95AE4D7CE58319* __this, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___e0, const RuntimeMethod* method) 
{
	{
		// Grabber = GameObject.FindObjectsOfType<HVRHandGrabber>().FirstOrDefault(e => e.gameObject.activeInHierarchy);
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = ___e0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoDummyArm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoDummyArm_Start_mEA3F97C89C813B02A133930F2E73DDE297BB8BF5 (DemoDummyArm_tAB2AD7E697B5DB0CE23303F4EFC2DBFC9B6A27EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var joint = GetComponent<ConfigurableJoint>();
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_0;
		L_0 = Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1(__this, Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var);
		// joint.SetLinearLimit(Length);
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_1 = L_0;
		float L_2 = __this->___Length_5;
		HVRJointUtilities_SetLinearLimit_mB708F0A8DE1EFE00A19DE36E4E5C84E70A4C34E4(L_1, L_2, (0.0f), (0.00999999978f), NULL);
		// joint.anchor = ArmRopeAnchor.localPosition;
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_3 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___ArmRopeAnchor_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		NullCheck(L_3);
		Joint_set_anchor_m89447EF25E0FC6DB9D22562BAF3BDA3E6D04029C(L_3, L_5, NULL);
		// joint.autoConfigureConnectedAnchor = false;
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_6 = L_3;
		NullCheck(L_6);
		Joint_set_autoConfigureConnectedAnchor_mF61D716174DE67CD94FF042881E9052357679E02(L_6, (bool)0, NULL);
		// joint.connectedAnchor = Anchor.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___Anchor_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90(L_6, L_8, NULL);
		// Rope.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___Rope_6;
		NullCheck(L_9);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_9, 2, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoDummyArm::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoDummyArm_Update_mD00BBD8597288177AB0F77B215683769664B9B10 (DemoDummyArm_tAB2AD7E697B5DB0CE23303F4EFC2DBFC9B6A27EF* __this, const RuntimeMethod* method) 
{
	{
		// Rope.SetPosition(0, Anchor.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___Rope_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___Anchor_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 0, L_2, NULL);
		// Rope.SetPosition(1, ArmRopeAnchor.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___Rope_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___ArmRopeAnchor_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_3, 1, L_5, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoDummyArm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoDummyArm__ctor_m2465DAC48E157D01FDAF65598D52F783BCE251ED (DemoDummyArm_tAB2AD7E697B5DB0CE23303F4EFC2DBFC9B6A27EF* __this, const RuntimeMethod* method) 
{
	{
		// public float Length = .5f;
		__this->___Length_5 = (0.5f);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoFullStabConfetti_Start_m1EC9873C7B7D36168FE50D0708CFE86E360B443C (DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1_m23C4777ED83C185A1F975C8D985D2521FD3053BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m263198B23E82499C16C66D2C3866A89A7CF85E58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoFullStabConfetti_FullStabbed_mEEFD6E8CB21BBAA83123AEE15203015760DCE882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoFullStabConfetti_Stabbed_m567E460445D6984694D7ECC121966B121E4EBFCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoFullStabConfetti_Unstabbed_mFDDD4186141B6B02926439790A5196ADDBB39C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m326988BDE31056C04EFE1C336A0985C954BACE74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m3B3D236026298DEB2FFA5865C91E81A91CEB7C40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stabbable = GetComponentInParent<HVRStabbable>();
		HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* L_0;
		L_0 = Component_GetComponentInParent_TisHVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1_m23C4777ED83C185A1F975C8D985D2521FD3053BC(__this, Component_GetComponentInParent_TisHVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1_m23C4777ED83C185A1F975C8D985D2521FD3053BC_RuntimeMethod_var);
		__this->___Stabbable_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stabbable_4), (void*)L_0);
		// TryGetComponent(out Confetti);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** L_1 = (&__this->___Confetti_5);
		bool L_2;
		L_2 = Component_TryGetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m263198B23E82499C16C66D2C3866A89A7CF85E58(__this, L_1, Component_TryGetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m263198B23E82499C16C66D2C3866A89A7CF85E58_RuntimeMethod_var);
		// if (Stabbable)
		HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* L_3 = __this->___Stabbable_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		// Stabbable.Stabbed.AddListener(Stabbed);
		HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* L_5 = __this->___Stabbable_4;
		NullCheck(L_5);
		HVRStabEvent_t272C60B0E7CB75467B6BD510CD7DF8E031385924* L_6 = L_5->___Stabbed_6;
		UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532* L_7 = (UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532*)il2cpp_codegen_object_new(UnityAction_1_tD612239A41EF1A9A220EEB9D1B342E591B12C532_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_m5DEB67150607F5DFF19EBB14D067D0868FE0C469(L_7, __this, (intptr_t)((void*)DemoFullStabConfetti_Stabbed_m567E460445D6984694D7ECC121966B121E4EBFCE_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m326988BDE31056C04EFE1C336A0985C954BACE74(L_6, L_7, UnityEvent_1_AddListener_m326988BDE31056C04EFE1C336A0985C954BACE74_RuntimeMethod_var);
		// Stabbable.UnStabbed.AddListener(Unstabbed);
		HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* L_8 = __this->___Stabbable_4;
		NullCheck(L_8);
		HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7* L_9 = L_8->___UnStabbed_7;
		UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2* L_10 = (UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2*)il2cpp_codegen_object_new(UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_2__ctor_mE4DF0A065740438D14723BCD54F8E6D8F08D277A(L_10, __this, (intptr_t)((void*)DemoFullStabConfetti_Unstabbed_mFDDD4186141B6B02926439790A5196ADDBB39C1A_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_2_AddListener_m3B3D236026298DEB2FFA5865C91E81A91CEB7C40(L_9, L_10, UnityEvent_2_AddListener_m3B3D236026298DEB2FFA5865C91E81A91CEB7C40_RuntimeMethod_var);
		// Stabbable.FullStabbed.AddListener(FullStabbed);
		HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* L_11 = __this->___Stabbable_4;
		NullCheck(L_11);
		HVRStabEvents_t4BD45936E5EE6EF18DA79B435EE60091353A98B7* L_12 = L_11->___FullStabbed_8;
		UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2* L_13 = (UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2*)il2cpp_codegen_object_new(UnityAction_2_t42F29791A4A2EA9954ABC904B6C9166B04242AC2_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_2__ctor_mE4DF0A065740438D14723BCD54F8E6D8F08D277A(L_13, __this, (intptr_t)((void*)DemoFullStabConfetti_FullStabbed_mEEFD6E8CB21BBAA83123AEE15203015760DCE882_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_2_AddListener_m3B3D236026298DEB2FFA5865C91E81A91CEB7C40(L_12, L_13, UnityEvent_2_AddListener_m3B3D236026298DEB2FFA5865C91E81A91CEB7C40_RuntimeMethod_var);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::FullStabbed(HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoFullStabConfetti_FullStabbed_mEEFD6E8CB21BBAA83123AEE15203015760DCE882 (DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98* __this, HVRStabber_tE60C171AECD2D5487B702E7C6C27194FFC364904* ___arg00, HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* ___arg11, const RuntimeMethod* method) 
{
	{
		// if (OnFullStab)
		bool L_0 = __this->___OnFullStab_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// PopConfetti(normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___normal_8;
		DemoFullStabConfetti_PopConfetti_m1BC20131923ADBBD876CD8523DD35F5B2597FFD4(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::PopConfetti(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoFullStabConfetti_PopConfetti_m1BC20131923ADBBD876CD8523DD35F5B2597FFD4 (DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, const RuntimeMethod* method) 
{
	{
		// Confetti.transform.position = Stabbable.transform.TransformPoint(point);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___Confetti_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* L_2 = __this->___Stabbable_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___point_7;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_4, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// Confetti.transform.rotation = Quaternion.FromToRotation(Confetti.transform.up, dir) * Confetti.transform.rotation;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = __this->___Confetti_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___Confetti_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___dir0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_10, L_11, NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = __this->___Confetti_5;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_12, L_15, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_16, NULL);
		// Confetti.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = __this->___Confetti_5;
		NullCheck(L_17);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_17, NULL);
		// Confetti.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18 = __this->___Confetti_5;
		NullCheck(L_18);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_18, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::Unstabbed(HurricaneVR.Framework.Core.Stabbing.HVRStabber,HurricaneVR.Framework.Core.Stabbing.HVRStabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoFullStabConfetti_Unstabbed_mFDDD4186141B6B02926439790A5196ADDBB39C1A (DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98* __this, HVRStabber_tE60C171AECD2D5487B702E7C6C27194FFC364904* ___arg00, HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* ___arg11, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::Stabbed(HurricaneVR.Framework.Core.Stabbing.StabArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoFullStabConfetti_Stabbed_m567E460445D6984694D7ECC121966B121E4EBFCE (DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98* __this, StabArgs_tF1A76988CACFAE49F574A83B0D37D414F9E3BB7D ___stabArgs0, const RuntimeMethod* method) 
{
	{
		// normal = stabArgs.Normal;
		StabArgs_tF1A76988CACFAE49F574A83B0D37D414F9E3BB7D L_0 = ___stabArgs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___Normal_4;
		__this->___normal_8 = L_1;
		// point = Stabbable.transform.InverseTransformPoint(stabArgs.Point);
		HVRStabbable_t71A2D16350A6CAB51630D1314BE9C10870FE29E1* L_2 = __this->___Stabbable_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		StabArgs_tF1A76988CACFAE49F574A83B0D37D414F9E3BB7D L_4 = ___stabArgs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___Point_3;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_5, NULL);
		__this->___point_7 = L_6;
		// if (!OnFullStab)
		bool L_7 = __this->___OnFullStab_6;
		if (L_7)
		{
			goto IL_003c;
		}
	}
	{
		// PopConfetti(normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___normal_8;
		DemoFullStabConfetti_PopConfetti_m1BC20131923ADBBD876CD8523DD35F5B2597FFD4(__this, L_8, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoFullStabConfetti::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoFullStabConfetti__ctor_m9BFB4CF83FAC2A851CC0619009E76B18AE7FD11D (DemoFullStabConfetti_t2351D081B59A69B608314F770C72AAE149EFFA98* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoGlassRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoGlassRotate_Start_mC47176DF41473100749641C9E2E64E2DA2C6BB20 (DemoGlassRotate_tE49811E14A1FF9B74C86C24493B000331AE8D2DF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoGlassRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoGlassRotate_Update_m795E555F06342ABBCB2C92970B123E6BF5170CDF (DemoGlassRotate_tE49811E14A1FF9B74C86C24493B000331AE8D2DF* __this, const RuntimeMethod* method) 
{
	{
		// if (!Unlocked || DoneRotating)
		bool L_0 = __this->___Unlocked_6;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___DoneRotating_7;
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// _elapsed += UnityEngine.Time.deltaTime;
		float L_2 = __this->____elapsed_9;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____elapsed_9 = ((float)il2cpp_codegen_add(L_2, L_3));
		// transform.localRotation = transform.localRotation * Quaternion.Euler(new Vector3(-Degrees / Timer * Time.deltaTime, 0f, 0f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		float L_7 = __this->___Degrees_5;
		float L_8 = __this->___Timer_4;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)il2cpp_codegen_multiply(((float)(((-L_7))/L_8)), L_9)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_6, L_11, NULL);
		NullCheck(L_4);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_12, NULL);
		// if (_elapsed > Timer)
		float L_13 = __this->____elapsed_9;
		float L_14 = __this->___Timer_4;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0086;
		}
	}
	{
		// _elapsed = 0f;
		__this->____elapsed_9 = (0.0f);
		// DoneRotating = true;
		__this->___DoneRotating_7 = (bool)1;
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoGlassRotate::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoGlassRotate_Unlock_m029ADD1F20568D5A7A1E6D51BAAE41160A21D2B1 (DemoGlassRotate_tE49811E14A1FF9B74C86C24493B000331AE8D2DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Unlocked)
		bool L_0 = __this->___Unlocked_6;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXOpen, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_1;
		L_1 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXOpen, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_3;
		L_3 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___SFXOpen_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_3);
		SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84(L_3, L_4, L_6, NULL);
	}

IL_002f:
	{
		// Unlocked = true;
		__this->___Unlocked_6 = (bool)1;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoGlassRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoGlassRotate__ctor_mFD30A3E42887F5AFA7D47A2CD695D1B46A90B25C (DemoGlassRotate_tE49811E14A1FF9B74C86C24493B000331AE8D2DF* __this, const RuntimeMethod* method) 
{
	{
		// public float Timer = 5f;
		__this->___Timer_4 = (5.0f);
		// public float Degrees = 135;
		__this->___Degrees_5 = (135.0f);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoHatchDoor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHatchDoor_Update_mAD2335DCABC136AE5B89513AC6A7798C5049E0DD (DemoHatchDoor_t2709BFF9CCDB2E23EFC7CFF1694E224B33090A70* __this, const RuntimeMethod* method) 
{
	{
		// if (!Unlocked || DoneRotating)
		bool L_0 = __this->___Unlocked_6;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___DoneRotating_7;
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// _elapsed += UnityEngine.Time.deltaTime;
		float L_2 = __this->____elapsed_9;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____elapsed_9 = ((float)il2cpp_codegen_add(L_2, L_3));
		// transform.localRotation = transform.localRotation * Quaternion.Euler(new Vector3(-Degrees / Timer * Time.deltaTime, 0f, 0f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		float L_7 = __this->___Degrees_5;
		float L_8 = __this->___Timer_4;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)il2cpp_codegen_multiply(((float)(((-L_7))/L_8)), L_9)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_6, L_11, NULL);
		NullCheck(L_4);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_12, NULL);
		// if (_elapsed > Timer)
		float L_13 = __this->____elapsed_9;
		float L_14 = __this->___Timer_4;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0086;
		}
	}
	{
		// _elapsed = 0f;
		__this->____elapsed_9 = (0.0f);
		// DoneRotating = true;
		__this->___DoneRotating_7 = (bool)1;
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHatchDoor::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHatchDoor_Unlock_m7DCA7BF50E464F1489D86299AC70A59C05762B72 (DemoHatchDoor_t2709BFF9CCDB2E23EFC7CFF1694E224B33090A70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Unlocked)
		bool L_0 = __this->___Unlocked_6;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXOpen, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_1;
		L_1 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXOpen, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_3;
		L_3 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___SFXOpen_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_3);
		SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84(L_3, L_4, L_6, NULL);
	}

IL_002f:
	{
		// Unlocked = true;
		__this->___Unlocked_6 = (bool)1;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHatchDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHatchDoor__ctor_m2ECE21932FD3258112DBF2862C8D22E4C7B1939F (DemoHatchDoor_t2709BFF9CCDB2E23EFC7CFF1694E224B33090A70* __this, const RuntimeMethod* method) 
{
	{
		// public float Timer = 5f;
		__this->___Timer_4 = (5.0f);
		// public float Degrees = 180;
		__this->___Degrees_5 = (180.0f);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHeavyDoor_Start_m3B5E606259E9189A0F38CAB3713E56B954D562DE (DemoHeavyDoor_t310E87E094DEC7C4717C2E0D589A0FFB5D1BDD73* __this, const RuntimeMethod* method) 
{
	{
		// _startRotation = DoorRigidbody.transform.rotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___DoorRigidbody_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		__this->____startRotation_11 = L_2;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHeavyDoor_FixedUpdate_m158E326A2297A70E37304B18E421A2B60AB40FC1 (DemoHeavyDoor_t310E87E094DEC7C4717C2E0D589A0FFB5D1BDD73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_2 = NULL;
	{
		// var angle = HVRUtilities.Remap(ValveTracker.Angle, Limiter.MinAngle, Limiter.MaxAngle, 0f, MaxAngle);
		HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* L_0 = __this->___ValveTracker_5;
		NullCheck(L_0);
		float L_1;
		L_1 = HVRRotationTracker_get_Angle_m1D919D4DEF1339D92F6907FE246C8990C7444AD0_inline(L_0, NULL);
		HVRRotationLimiter_tF5CD8BEF6539AEF6B30DD3CC7E163EB09771C672* L_2 = __this->___Limiter_6;
		NullCheck(L_2);
		int32_t L_3 = L_2->___MinAngle_6;
		HVRRotationLimiter_tF5CD8BEF6539AEF6B30DD3CC7E163EB09771C672* L_4 = __this->___Limiter_6;
		NullCheck(L_4);
		int32_t L_5 = L_4->___MaxAngle_7;
		float L_6 = __this->___MaxAngle_7;
		float L_7;
		L_7 = HVRUtilities_Remap_m59CDAA232C38224F8ADAEF003E3E962D66288ADB(L_1, ((float)L_3), ((float)L_5), (0.0f), L_6, NULL);
		V_0 = L_7;
		// DoorRigidbody.MoveRotation(_startRotation * Quaternion.Euler(0f, angle, 0f));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___DoorRigidbody_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->____startRotation_11;
		float L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_10, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_11, NULL);
		NullCheck(L_8);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_8, L_12, NULL);
		// if (SFX != null && SFX.Length > 0)
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_13 = __this->___SFX_8;
		if (!L_13)
		{
			goto IL_00ed;
		}
	}
	{
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_14 = __this->___SFX_8;
		NullCheck(L_14);
		if (!(((RuntimeArray*)L_14)->max_length))
		{
			goto IL_00ed;
		}
	}
	{
		// if (ValveTracker.Angle > Angle + SFXAngle || ValveTracker.Angle < Angle - SFXAngle)
		HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* L_15 = __this->___ValveTracker_5;
		NullCheck(L_15);
		float L_16;
		L_16 = HVRRotationTracker_get_Angle_m1D919D4DEF1339D92F6907FE246C8990C7444AD0_inline(L_15, NULL);
		float L_17 = __this->___Angle_10;
		float L_18 = __this->___SFXAngle_9;
		if ((((float)L_16) > ((float)((float)il2cpp_codegen_add(L_17, L_18)))))
		{
			goto IL_00a2;
		}
	}
	{
		HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* L_19 = __this->___ValveTracker_5;
		NullCheck(L_19);
		float L_20;
		L_20 = HVRRotationTracker_get_Angle_m1D919D4DEF1339D92F6907FE246C8990C7444AD0_inline(L_19, NULL);
		float L_21 = __this->___Angle_10;
		float L_22 = __this->___SFXAngle_9;
		if ((!(((float)L_20) < ((float)((float)il2cpp_codegen_subtract(L_21, L_22))))))
		{
			goto IL_00ed;
		}
	}

IL_00a2:
	{
		// var index = Random.Range(0, SFX.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_23 = __this->___SFX_8;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_23)->max_length)), NULL);
		V_1 = L_24;
		// var sfx = SFX[index];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_25 = __this->___SFX_8;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_2 = L_28;
		// Angle = ValveTracker.Angle;
		HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* L_29 = __this->___ValveTracker_5;
		NullCheck(L_29);
		float L_30;
		L_30 = HVRRotationTracker_get_Angle_m1D919D4DEF1339D92F6907FE246C8990C7444AD0_inline(L_29, NULL);
		__this->___Angle_10 = L_30;
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(sfx, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_31;
		L_31 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		if (!L_32)
		{
			goto IL_00ed;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(sfx, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_33;
		L_33 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_34 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		NullCheck(L_33);
		SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84(L_33, L_34, L_36, NULL);
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHeavyDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHeavyDoor__ctor_m44B9B812B635F3E31BD507F14D38C324D024B9BB (DemoHeavyDoor_t310E87E094DEC7C4717C2E0D589A0FFB5D1BDD73* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxAngle = 130f;
		__this->___MaxAngle_7 = (130.0f);
		// public float SFXAngle = 10f;
		__this->___SFXAngle_9 = (10.0f);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_Start_m36DB45A56F29FDA62B9B35C4C1DDA5FAE47714F7 (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924 V_2;
	memset((&V_2), 0, sizeof(V_2));
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* V_3 = NULL;
	{
		// foreach (var parent in Parents)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___Parents_4;
		NullCheck(L_0);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_1;
		L_1 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_0, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_0), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_000e_1:
			{
				// foreach (var parent in Parents)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
				L_2 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_0), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				V_1 = L_2;
				// if (parent)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
				if (!L_4)
				{
					goto IL_0025_1;
				}
			}
			{
				// AddResetGrabbable(parent);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_1;
				DemoHelper_AddResetGrabbable_m6D2F4C183F533146F3F5F2C82D5B9156CC880BFC(__this, L_5, NULL);
			}

IL_0025_1:
			{
				// foreach (var parent in Parents)
				bool L_6;
				L_6 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_0), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// foreach (var grabbable in Grabbables)
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_7 = __this->___Grabbables_5;
		NullCheck(L_7);
		Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924 L_8;
		L_8 = List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D(L_7, List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D_RuntimeMethod_var);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B((&V_2), Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0066_1;
			}

IL_004c_1:
			{
				// foreach (var grabbable in Grabbables)
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_9;
				L_9 = Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_inline((&V_2), Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_RuntimeMethod_var);
				V_3 = L_9;
				// SaveResetGrabbable(grabbable.transform.parent, grabbable);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_10 = V_3;
				NullCheck(L_10);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
				NullCheck(L_11);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
				L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_13 = V_3;
				DemoHelper_SaveResetGrabbable_mA1FEF17FF84DA8CA5AE9AA9DB58B800395BC482E(__this, L_12, L_13, NULL);
			}

IL_0066_1:
			{
				// foreach (var grabbable in Grabbables)
				bool L_14;
				L_14 = Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127((&V_2), Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::AddResetGrabbable(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_AddResetGrabbable_m6D2F4C183F533146F3F5F2C82D5B9156CC880BFC (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m9239D7DCE3C2E41B6D106A0E0DCAA81C5A35CE10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mB91EB4DE968069766E53D2E0AA012CA2EB7DA18E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3B0C2FE8641AE4A396114017FAD42324E3EEDE58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5577E9DD7D1802C804736ED3574376CC135D38CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CAddResetGrabbableU3Eb__0_m53708313B1360FCCE659FF7E2C0278E6EDCF8782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* V_2 = NULL;
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* V_3 = NULL;
	Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* G_B2_0 = NULL;
	HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* G_B2_1 = NULL;
	Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* G_B1_0 = NULL;
	HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* L_0 = (U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m46F5E36C10B7146B3933A23E51B0A701511F8C55(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___parent0;
		NullCheck(L_1);
		L_1->___parent_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___parent_0), (void*)L_2);
		// foreach (var grabbable in parent.GetComponentsInChildren<HVRGrabbable>().Where(e => e.transform.parent == parent))
		U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___parent_0;
		NullCheck(L_4);
		HVRGrabbableU5BU5D_tEDB0FBD4FD1418A2823FA20AF3A194F42B2D71D2* L_5;
		L_5 = Component_GetComponentsInChildren_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m9239D7DCE3C2E41B6D106A0E0DCAA81C5A35CE10(L_4, Component_GetComponentsInChildren_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m9239D7DCE3C2E41B6D106A0E0DCAA81C5A35CE10_RuntimeMethod_var);
		U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* L_6 = V_0;
		NullCheck(L_6);
		Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* L_7 = L_6->___U3CU3E9__0_1;
		Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_5;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_5;
			goto IL_0037;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* L_9 = V_0;
		U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* L_10 = V_0;
		Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* L_11 = (Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E*)il2cpp_codegen_object_new(Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m71C7D9E7FD543B6F6AF91CE5DFD8669D01124218(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CAddResetGrabbableU3Eb__0_m53708313B1360FCCE659FF7E2C0278E6EDCF8782_RuntimeMethod_var), NULL);
		Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* L_12 = L_11;
		V_2 = L_12;
		NullCheck(L_9);
		L_9->___U3CU3E9__0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___U3CU3E9__0_1), (void*)L_12);
		Func_2_t1E2EB90025FC97E3CD498C2B465D1BDAC438B49E* L_13 = V_2;
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
	}

IL_0037:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Where_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mB91EB4DE968069766E53D2E0AA012CA2EB7DA18E((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_mB91EB4DE968069766E53D2E0AA012CA2EB7DA18E_RuntimeMethod_var);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<HurricaneVR.Framework.Core.HVRGrabbable>::GetEnumerator() */, IEnumerable_1_t3B0C2FE8641AE4A396114017FAD42324E3EEDE58_il2cpp_TypeInfo_var, L_14);
		V_1 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_16 = V_1;
					if (!L_16)
					{
						goto IL_006b;
					}
				}
				{
					RuntimeObject* L_17 = V_1;
					NullCheck(L_17);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
				}

IL_006b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_0044_1:
			{
				// foreach (var grabbable in parent.GetComponentsInChildren<HVRGrabbable>().Where(e => e.transform.parent == parent))
				RuntimeObject* L_18 = V_1;
				NullCheck(L_18);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_19;
				L_19 = InterfaceFuncInvoker0< HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<HurricaneVR.Framework.Core.HVRGrabbable>::get_Current() */, IEnumerator_1_t5577E9DD7D1802C804736ED3574376CC135D38CA_il2cpp_TypeInfo_var, L_18);
				V_3 = L_19;
				// SaveResetGrabbable(parent, grabbable);
				U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* L_20 = V_0;
				NullCheck(L_20);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20->___parent_0;
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_22 = V_3;
				DemoHelper_SaveResetGrabbable_mA1FEF17FF84DA8CA5AE9AA9DB58B800395BC482E(__this, L_21, L_22, NULL);
			}

IL_0058_1:
			{
				// foreach (var grabbable in parent.GetComponentsInChildren<HVRGrabbable>().Where(e => e.transform.parent == parent))
				RuntimeObject* L_23 = V_1;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::SaveResetGrabbable(UnityEngine.Transform,HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_SaveResetGrabbable_mA1FEF17FF84DA8CA5AE9AA9DB58B800395BC482E (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m225B60E78468F0052D88848C072D135CBB4C2386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* V_0 = NULL;
	ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* V_1 = NULL;
	{
		// var clone = Instantiate(grabbable);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = ___grabbable1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_1;
		L_1 = Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775(L_0, Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775_RuntimeMethod_var);
		V_0 = L_1;
		// clone.gameObject.SetActive(false);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_2 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// clone.gameObject.hideFlags = HideFlags.HideInHierarchy;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, 1, NULL);
		// var state = new ResetState()
		// {
		//     Grabbable = grabbable,
		//     Clone = clone,
		//     Position = grabbable.transform.position,
		//     Rotation = grabbable.transform.rotation,
		//     Scale = grabbable.transform.localScale,
		//     Parent = parent
		// };
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_6 = (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C*)il2cpp_codegen_object_new(ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ResetState__ctor_m969421855515D5E2A7CB34DC1A09DCAC0E9C6EED(L_6, NULL);
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_7 = L_6;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_8 = ___grabbable1;
		NullCheck(L_7);
		L_7->___Grabbable_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___Grabbable_0), (void*)L_8);
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_9 = L_7;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_10 = V_0;
		NullCheck(L_9);
		L_9->___Clone_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___Clone_1), (void*)L_10);
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_11 = L_9;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_12 = ___grabbable1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_11);
		L_11->___Position_2 = L_14;
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_15 = L_11;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_16 = ___grabbable1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		NullCheck(L_15);
		L_15->___Rotation_3 = L_18;
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_19 = L_15;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_20 = ___grabbable1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_21, NULL);
		NullCheck(L_19);
		ResetState_set_Scale_mFB3593A7EABD55C5324569C5C2A902E13B32CFD4_inline(L_19, L_22, NULL);
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_23 = L_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___parent0;
		NullCheck(L_23);
		L_23->___Parent_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___Parent_5), (void*)L_24);
		V_1 = L_23;
		// _grabbableState.Add(state);
		List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* L_25 = __this->____grabbableState_7;
		ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_26 = V_1;
		NullCheck(L_25);
		List_1_Add_m225B60E78468F0052D88848C072D135CBB4C2386_inline(L_25, L_26, List_1_Add_m225B60E78468F0052D88848C072D135CBB4C2386_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_Update_mCAE941DC739806D905CDA720FD1C360DA70EA9F6 (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, const RuntimeMethod* method) 
{
	{
		// if (ForceReset)
		bool L_0 = __this->___ForceReset_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// ResetGrabbables();
		DemoHelper_ResetGrabbables_m509D6A7CDB79878F76C06B043EF772FE5AB560B1(__this, NULL);
		// ForceReset = false;
		__this->___ForceReset_6 = (bool)0;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::BallSpawned(HurricaneVR.Framework.Core.Grabbers.HVRSocket,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_BallSpawned_mEFE00CB19E48ACD4C23D2BC278F9A8C7CA1DF706 (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* ___socket0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ball1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m59E4CA1C3FAE096A545658F5A9359D078C88A006_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* V_0 = NULL;
	{
		// var grabbable = ball.GetComponent<HVRGrabbable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___ball1;
		NullCheck(L_0);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_1;
		L_1 = GameObject_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m59E4CA1C3FAE096A545658F5A9359D078C88A006(L_0, GameObject_GetComponent_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m59E4CA1C3FAE096A545658F5A9359D078C88A006_RuntimeMethod_var);
		V_0 = L_1;
		// _balls.Add(grabbable);
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_2 = __this->____balls_8;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_inline(L_2, L_3, List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::ResetGrabbables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_ResetGrabbables_m509D6A7CDB79878F76C06B043EF772FE5AB560B1 (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoHelper_U3CResetGrabbablesU3Eb__11_0_mF04EC4DF0E3BD23087797C31EBDEA50C3F662BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7BFB61917B6E338D5C9822851032E461130D558A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2289AB59AF46CA2A3DC7A8FE8273239FD445E89E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m291786A666CEB4AF20E71BE6C01C9C6A74357F35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m0D56FE042D7C59FC573223E1ECA324B0555A7240_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m67459CCB5C4097B2C230A163B97637A4AF049004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* V_0 = NULL;
	Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* V_2 = NULL;
	Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924 V_3;
	memset((&V_3), 0, sizeof(V_3));
	HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* V_4 = NULL;
	{
		// foreach (var state in _grabbableState)
		List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* L_0 = __this->____grabbableState_7;
		NullCheck(L_0);
		Enumerator_tDD1D74BF3C25AFCB9C8714979C53871CE7BE48EF L_1;
		L_1 = List_1_GetEnumerator_m67459CCB5C4097B2C230A163B97637A4AF049004(L_0, List_1_GetEnumerator_m67459CCB5C4097B2C230A163B97637A4AF049004_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7BFB61917B6E338D5C9822851032E461130D558A((&V_1), Enumerator_Dispose_m7BFB61917B6E338D5C9822851032E461130D558A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011e_1;
			}

IL_0011_1:
			{
				// foreach (var state in _grabbableState)
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_2;
				L_2 = Enumerator_get_Current_m291786A666CEB4AF20E71BE6C01C9C6A74357F35_inline((&V_1), Enumerator_get_Current_m291786A666CEB4AF20E71BE6C01C9C6A74357F35_RuntimeMethod_var);
				V_2 = L_2;
				// if (!state.Grabbable)
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_3 = V_2;
				NullCheck(L_3);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_4 = L_3->___Grabbable_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
				if (L_5)
				{
					goto IL_008c_1;
				}
			}
			{
				// state.Grabbable = state.Clone;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_6 = V_2;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_7 = V_2;
				NullCheck(L_7);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_8 = L_7->___Clone_1;
				NullCheck(L_6);
				L_6->___Grabbable_0 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&L_6->___Grabbable_0), (void*)L_8);
				// state.Grabbable.gameObject.SetActive(true);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_9 = V_2;
				NullCheck(L_9);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_10 = L_9->___Grabbable_0;
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
				// state.Clone = Instantiate(state.Clone);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_12 = V_2;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_13 = V_2;
				NullCheck(L_13);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_14 = L_13->___Clone_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_15;
				L_15 = Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775(L_14, Object_Instantiate_TisHVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE_m29DD65F27113029C6902003E17FAD19F1B74E775_RuntimeMethod_var);
				NullCheck(L_12);
				L_12->___Clone_1 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&L_12->___Clone_1), (void*)L_15);
				// state.Clone.gameObject.SetActive(false);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_16 = V_2;
				NullCheck(L_16);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_17 = L_16->___Clone_1;
				NullCheck(L_17);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
				L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
				NullCheck(L_18);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
				// state.Clone.gameObject.hideFlags = HideFlags.HideInHierarchy;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_19 = V_2;
				NullCheck(L_19);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_20 = L_19->___Clone_1;
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
				NullCheck(L_21);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 1, NULL);
				// state.Grabbable.transform.parent = state.Parent;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_22 = V_2;
				NullCheck(L_22);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_23 = L_22->___Grabbable_0;
				NullCheck(L_23);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_25 = V_2;
				NullCheck(L_25);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25->___Parent_5;
				NullCheck(L_24);
				Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_24, L_26, NULL);
			}

IL_008c_1:
			{
				// if (!state.Grabbable.IsBeingHeld)
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_27 = V_2;
				NullCheck(L_27);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_28 = L_27->___Grabbable_0;
				NullCheck(L_28);
				bool L_29;
				L_29 = HVRGrabbable_get_IsBeingHeld_m0B737930A391CA6689D4F4B1B8703F4F5A26F08D(L_28, NULL);
				if (L_29)
				{
					goto IL_011e_1;
				}
			}
			{
				// state.Grabbable.transform.parent = state.Parent;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_30 = V_2;
				NullCheck(L_30);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_31 = L_30->___Grabbable_0;
				NullCheck(L_31);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
				L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_33 = V_2;
				NullCheck(L_33);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33->___Parent_5;
				NullCheck(L_32);
				Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_32, L_34, NULL);
				// state.Grabbable.transform.position = state.Position;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_35 = V_2;
				NullCheck(L_35);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_36 = L_35->___Grabbable_0;
				NullCheck(L_36);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
				L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_38 = V_2;
				NullCheck(L_38);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = L_38->___Position_2;
				NullCheck(L_37);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_39, NULL);
				// state.Grabbable.transform.rotation = state.Rotation;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_40 = V_2;
				NullCheck(L_40);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_41 = L_40->___Grabbable_0;
				NullCheck(L_41);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
				L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_43 = V_2;
				NullCheck(L_43);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = L_43->___Rotation_3;
				NullCheck(L_42);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_42, L_44, NULL);
				// state.Grabbable.transform.localScale = state.Scale;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_45 = V_2;
				NullCheck(L_45);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_46 = L_45->___Grabbable_0;
				NullCheck(L_46);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
				L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_48 = V_2;
				NullCheck(L_48);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
				L_49 = ResetState_get_Scale_m7197835938A1846CB38BC5F2E81F51CEC5B82847_inline(L_48, NULL);
				NullCheck(L_47);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_47, L_49, NULL);
				// state.Grabbable.Rigidbody.velocity = Vector3.zero;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_50 = V_2;
				NullCheck(L_50);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_51 = L_50->___Grabbable_0;
				NullCheck(L_51);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_52 = L_51->___Rigidbody_37;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
				L_53 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				NullCheck(L_52);
				Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_52, L_53, NULL);
				// state.Grabbable.Rigidbody.angularVelocity = Vector3.zero;
				ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* L_54 = V_2;
				NullCheck(L_54);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_55 = L_54->___Grabbable_0;
				NullCheck(L_55);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_56 = L_55->___Rigidbody_37;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
				L_57 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				NullCheck(L_56);
				Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_56, L_57, NULL);
			}

IL_011e_1:
			{
				// foreach (var state in _grabbableState)
				bool L_58;
				L_58 = Enumerator_MoveNext_m2289AB59AF46CA2A3DC7A8FE8273239FD445E89E((&V_1), Enumerator_MoveNext_m2289AB59AF46CA2A3DC7A8FE8273239FD445E89E_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_013a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013a:
	{
		// var remove = new List<HVRGrabbable>();
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_59 = (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*)il2cpp_codegen_object_new(List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499(L_59, List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499_RuntimeMethod_var);
		V_0 = L_59;
		// foreach (var ball in _balls)
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_60 = __this->____balls_8;
		NullCheck(L_60);
		Enumerator_t5C43ED86B9A4A73114C19F223FAFB2B6D6BE2924 L_61;
		L_61 = List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D(L_60, List_1_GetEnumerator_mDBDA909366EE1C9C6C8701AABD56CE0475C59B4D_RuntimeMethod_var);
		V_3 = L_61;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B((&V_3), Enumerator_Dispose_m42364265F285AAD5774FF62F5D7DF6505A645C1B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0174_1;
			}

IL_014e_1:
			{
				// foreach (var ball in _balls)
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_62;
				L_62 = Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_inline((&V_3), Enumerator_get_Current_m5474C06E69B72A7FEADC871C3E559B4D0634C377_RuntimeMethod_var);
				V_4 = L_62;
				// if (ball.IsBeingHeld)
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_63 = V_4;
				NullCheck(L_63);
				bool L_64;
				L_64 = HVRGrabbable_get_IsBeingHeld_m0B737930A391CA6689D4F4B1B8703F4F5A26F08D(L_63, NULL);
				if (L_64)
				{
					goto IL_0174_1;
				}
			}
			{
				// Destroy(ball.gameObject);
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_65 = V_4;
				NullCheck(L_65);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
				L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_66, NULL);
				// remove.Add(ball);
				List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_67 = V_0;
				HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_68 = V_4;
				NullCheck(L_67);
				List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_inline(L_67, L_68, List_1_Add_mF820C277FFDC90EBB8C833CBFFD2894EDBC4E916_RuntimeMethod_var);
			}

IL_0174_1:
			{
				// foreach (var ball in _balls)
				bool L_69;
				L_69 = Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127((&V_3), Enumerator_MoveNext_m3DFE65306620DDD966C712A219D9079FA081C127_RuntimeMethod_var);
				if (L_69)
				{
					goto IL_014e_1;
				}
			}
			{
				goto IL_018d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_018d:
	{
		// remove.ForEach(grabbable => _balls.Remove(grabbable));
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_70 = V_0;
		Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92* L_71 = (Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92*)il2cpp_codegen_object_new(Action_1_tBFAE38A24F010F1E15E7D9123A5509C1AA1E7E92_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Action_1__ctor_m6E0052C7F0853BACBEF8CED7C6AAC8A9CC7F60D5(L_71, __this, (intptr_t)((void*)DemoHelper_U3CResetGrabbablesU3Eb__11_0_mF04EC4DF0E3BD23087797C31EBDEA50C3F662BD1_RuntimeMethod_var), NULL);
		NullCheck(L_70);
		List_1_ForEach_m0D56FE042D7C59FC573223E1ECA324B0555A7240(L_70, L_71, List_1_ForEach_m0D56FE042D7C59FC573223E1ECA324B0555A7240_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper__ctor_mF642ABFF327D1D00523614C857FF3FDD501CC2A9 (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA9BA9798221E0A85DD20EC97EF62A005197EA8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA910625D0D90E7578EB9529664A9C52989FF743E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Transform> Parents = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___Parents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Parents_4), (void*)L_0);
		// public List<HVRGrabbable> Grabbables = new List<HVRGrabbable>();
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_1 = (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*)il2cpp_codegen_object_new(List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499(L_1, List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499_RuntimeMethod_var);
		__this->___Grabbables_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Grabbables_5), (void*)L_1);
		// private readonly List<ResetState> _grabbableState = new List<ResetState>();
		List_1_tA910625D0D90E7578EB9529664A9C52989FF743E* L_2 = (List_1_tA910625D0D90E7578EB9529664A9C52989FF743E*)il2cpp_codegen_object_new(List_1_tA910625D0D90E7578EB9529664A9C52989FF743E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mA9BA9798221E0A85DD20EC97EF62A005197EA8AF(L_2, List_1__ctor_mA9BA9798221E0A85DD20EC97EF62A005197EA8AF_RuntimeMethod_var);
		__this->____grabbableState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____grabbableState_7), (void*)L_2);
		// private List<HVRGrabbable> _balls = new List<HVRGrabbable>();
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_3 = (List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78*)il2cpp_codegen_object_new(List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499(L_3, List_1__ctor_m44A5546905E2DA996CAE6B7E686190562E209499_RuntimeMethod_var);
		__this->____balls_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____balls_8), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper::<ResetGrabbables>b__11_0(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHelper_U3CResetGrabbablesU3Eb__11_0_mF04EC4DF0E3BD23087797C31EBDEA50C3F662BD1 (DemoHelper_t18AEBF87CA83CDE95B32DEF6D22C8DFFA986C4C4* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m79D8C12C64B9D4617D013980ECDDBBF91DA7303E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove.ForEach(grabbable => _balls.Remove(grabbable));
		List_1_t22B6AE59B095268F44B72F67D547A0C9A244CA78* L_0 = __this->____balls_8;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_1 = ___grabbable0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m79D8C12C64B9D4617D013980ECDDBBF91DA7303E(L_0, L_1, List_1_Remove_m79D8C12C64B9D4617D013980ECDDBBF91DA7303E_RuntimeMethod_var);
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
// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ResetState_get_Scale_m7197835938A1846CB38BC5F2E81F51CEC5B82847 (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CScaleU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetState_set_Scale_mFB3593A7EABD55C5324569C5C2A902E13B32CFD4 (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CScaleU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper/ResetState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetState__ctor_m969421855515D5E2A7CB34DC1A09DCAC0E9C6EED (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m46F5E36C10B7146B3933A23E51B0A701511F8C55 (U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoHelper/<>c__DisplayClass6_0::<AddResetGrabbable>b__0(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CAddResetGrabbableU3Eb__0_m53708313B1360FCCE659FF7E2C0278E6EDCF8782 (U3CU3Ec__DisplayClass6_0_t31FEB7A1E09BC380FAF4FEA503E6D5CADE405983* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach (var grabbable in parent.GetComponentsInChildren<HVRGrabbable>().Where(e => e.transform.parent == parent))
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = ___e0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___parent_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		return L_4;
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
// UnityEngine.Quaternion HurricaneVR.TechDemo.Scripts.DemoHolster::GetRotationOffset(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 DemoHolster_GetRotationOffset_mF56AC149CE95571A66B51CEB738AB135E1984F0B (DemoHolster_tA7512D1D0C6D74DADAB6CCF64C6B7FD56C74DC25* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* V_0 = NULL;
	{
		// var orientation = grabbable.GetComponent<DemoHolsterOrientation>();
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = ___grabbable0;
		NullCheck(L_0);
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_1;
		L_1 = Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D(L_0, Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D_RuntimeMethod_var);
		V_0 = L_1;
		// if (orientation && orientation.Orientation)
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___Orientation_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return orientation.Orientation.localRotation;
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___Orientation_4;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_8, NULL);
		return L_9;
	}

IL_0028:
	{
		// return base.GetRotationOffset(grabbable);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_10 = ___grabbable0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = HVRSocket_GetRotationOffset_m584C8348AEAEE6AF8AE94042895CFC060BE0AE75(__this, L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 HurricaneVR.TechDemo.Scripts.DemoHolster::GetPositionOffset(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DemoHolster_GetPositionOffset_m94CA40AB454636C2B2FE9EA9068DCEF8475E1187 (DemoHolster_tA7512D1D0C6D74DADAB6CCF64C6B7FD56C74DC25* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___grabbable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* V_0 = NULL;
	{
		// var orientation = grabbable.GetComponent<DemoHolsterOrientation>();
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = ___grabbable0;
		NullCheck(L_0);
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_1;
		L_1 = Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D(L_0, Component_GetComponent_TisDemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0_m8CDF3094E350AD46333B90F21E897DC833DD9C6D_RuntimeMethod_var);
		V_0 = L_1;
		// if (orientation && orientation.Orientation)
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___Orientation_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return orientation.Orientation.localPosition;
		DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___Orientation_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		return L_9;
	}

IL_0028:
	{
		// return base.GetPositionOffset(grabbable);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_10 = ___grabbable0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = HVRSocket_GetPositionOffset_m2B19D4F5F070D6DE5E9BD7738FD79B7D9750924E(__this, L_10, NULL);
		return L_11;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoHolster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHolster__ctor_mF7A4C019DBF422A1F100CA6E6FD7C442C5A31902 (DemoHolster_tA7512D1D0C6D74DADAB6CCF64C6B7FD56C74DC25* __this, const RuntimeMethod* method) 
{
	{
		HVRSocket__ctor_m6421902E11150566A29F8E326410867CF943FEC7(__this, NULL);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoHolsterOrientation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoHolsterOrientation__ctor_m4041D9B6A7492640D2AFEC8CD23DC4FBAA3A1CAA (DemoHolsterOrientation_t13F4399A5F837542FC31B09006CD899773EEBEA0* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeyHologram::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeyHologram_Start_mDD545699F9430972310E5C7993E8A482FE49601D (DemoKeyHologram_tFC3E8A155E1BA9C1CAB774F214137B6BEAA3A47C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeyHologram::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeyHologram_Update_mAC8CAFF54B7348238DAF2B8016521E0BEF471FFF (DemoKeyHologram_tFC3E8A155E1BA9C1CAB774F214137B6BEAA3A47C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.time > LastMove && Time.time - LastMove > Interval && Positions.Count > 0)
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___LastMove_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_007e;
		}
	}
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___LastMove_5;
		float L_4 = __this->___Interval_4;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_2, L_3))) > ((float)L_4))))
		{
			goto IL_007e;
		}
	}
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = __this->___Positions_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_5, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		// if (Index >= Positions.Count)
		int32_t L_7 = __this->___Index_7;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = __this->___Positions_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_8, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0049;
		}
	}
	{
		// Index = 0;
		__this->___Index_7 = 0;
	}

IL_0049:
	{
		// transform.localPosition = Positions[Index];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = __this->___Positions_6;
		int32_t L_12 = __this->___Index_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_11, L_12, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_13, NULL);
		// Index++;
		int32_t L_14 = __this->___Index_7;
		__this->___Index_7 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// LastMove = Time.time;
		float L_15;
		L_15 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___LastMove_5 = L_15;
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeyHologram::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeyHologram_Destroy_m7CE2CC0A14A47A1C92D90E7D39B87820468E1C0B (DemoKeyHologram_tFC3E8A155E1BA9C1CAB774F214137B6BEAA3A47C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeyHologram::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeyHologram__ctor_m15F3339B50FB6F7555A8A99A81A7A141CEEC41AE (DemoKeyHologram_tFC3E8A155E1BA9C1CAB774F214137B6BEAA3A47C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float Interval = .2f;
		__this->___Interval_4 = (0.200000003f);
		// public List<Vector3> Positions = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___Positions_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Positions_6), (void*)L_0);
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
// System.Int32 HurricaneVR.TechDemo.Scripts.DemoKeypad::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DemoKeypad_get_Index_mDC9B223A3B9FCA0FFDC8F65D746604F077EF6C8F (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// public int Index => Entry?.Length ?? 0;
		String_t* L_0 = __this->___Entry_7;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B2_0, NULL);
		return L_2;
	}
}
// System.Int32 HurricaneVR.TechDemo.Scripts.DemoKeypad::get_MaxLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DemoKeypad_get_MaxLength_m42FC18F8AC9F8D5746470D940152AA6B59CE2E88 (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// public int MaxLength => Code?.Length ?? 0;
		String_t* L_0 = __this->___Code_5;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B2_0, NULL);
		return L_2;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeypad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeypad_Start_m0BB52146A2E0114BB880C64E41E9E72CF20A8A13 (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisDemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_mE0890C51E615715459E1C94D0B355DD649B5D914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mC6234AE0B45EAAC87E939A301DD5A34F344958C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD* V_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_1 = NULL;
	int32_t V_2 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_3 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* V_7 = NULL;
	{
		// var buttons = GetComponentsInChildren<DemoKeypadButton>();
		DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD* L_0;
		L_0 = Component_GetComponentsInChildren_TisDemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_mE0890C51E615715459E1C94D0B355DD649B5D914(__this, Component_GetComponentsInChildren_TisDemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_mE0890C51E615715459E1C94D0B355DD649B5D914_RuntimeMethod_var);
		V_0 = L_0;
		// var colliders = GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1;
		L_1 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		// foreach (var keyCollider in colliders)
		V_1 = L_1;
		V_2 = 0;
		goto IL_0040;
	}

IL_0012:
	{
		// foreach (var keyCollider in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// foreach (var ourCollider in GetComponents<Collider>())
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6;
		L_6 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C(__this, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0034;
	}

IL_0023:
	{
		// foreach (var ourCollider in GetComponents<Collider>())
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// Physics.IgnoreCollision(ourCollider, keyCollider);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = V_3;
		Physics_IgnoreCollision_mFBAAD9B91D488802086C1A1C96447CE4C869211D(L_10, L_11, NULL);
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0034:
	{
		// foreach (var ourCollider in GetComponents<Collider>())
		int32_t L_13 = V_5;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_14 = V_4;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0040:
	{
		// foreach (var keyCollider in colliders)
		int32_t L_16 = V_2;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// for (int i = 0; i < buttons.Length; i++)
		V_6 = 0;
		goto IL_00da;
	}

IL_004e:
	{
		// var button = buttons[i];
		DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD* L_18 = V_0;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		// button.ButtonDown.AddListener(OnButtonDown);
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_22 = V_7;
		NullCheck(L_22);
		HVRButtonEvent_t356796E6E11193C52BC8DAFEF14D9E579210892B* L_23 = ((HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394*)L_22)->___ButtonDown_14;
		UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3* L_24 = (UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3*)il2cpp_codegen_object_new(UnityAction_1_tC8223A39814F713AEC230D8AAE076123D777C6A3_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_1__ctor_m4D84BE19DA246F6481A6934DBF8C40FFD5D0BCA4(L_24, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_23);
		UnityEvent_1_AddListener_mC6234AE0B45EAAC87E939A301DD5A34F344958C0(L_23, L_24, UnityEvent_1_AddListener_mC6234AE0B45EAAC87E939A301DD5A34F344958C0_RuntimeMethod_var);
		// if (i >= 0 && i <= 9)
		int32_t L_25 = V_6;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_26 = V_6;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)9))))
		{
			goto IL_008e;
		}
	}
	{
		// button.Key = i.ToString()[0];
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_27 = V_7;
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		NullCheck(L_28);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, 0, NULL);
		NullCheck(L_27);
		L_27->___Key_23 = L_29;
		goto IL_00ae;
	}

IL_008e:
	{
		// else if (i == 10)
		int32_t L_30 = V_6;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009f;
		}
	}
	{
		// button.Key = '<';
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_31 = V_7;
		NullCheck(L_31);
		L_31->___Key_23 = ((int32_t)60);
		goto IL_00ae;
	}

IL_009f:
	{
		// else if (i == 11)
		int32_t L_32 = V_6;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00ae;
		}
	}
	{
		// button.Key = '+';
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_33 = V_7;
		NullCheck(L_33);
		L_33->___Key_23 = ((int32_t)43);
	}

IL_00ae:
	{
		// if (button.TextMeshPro)
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_34 = V_7;
		NullCheck(L_34);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_35 = L_34->___TextMeshPro_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_35, NULL);
		if (!L_36)
		{
			goto IL_00d4;
		}
	}
	{
		// button.TextMeshPro.text = button.Key.ToString();
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_37 = V_7;
		NullCheck(L_37);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_38 = L_37->___TextMeshPro_24;
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_39 = V_7;
		NullCheck(L_39);
		Il2CppChar* L_40 = (&L_39->___Key_23);
		String_t* L_41;
		L_41 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_40, NULL);
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_38, L_41);
	}

IL_00d4:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00da:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_43 = V_6;
		DemoKeypadButtonU5BU5D_t9C05770486C2B2F1F955E3F5C7099D24CC0239BD* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		// Entry = "";
		__this->___Entry_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entry_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if (Display)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_45 = __this->___Display_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_45, NULL);
		if (!L_46)
		{
			goto IL_011a;
		}
	}
	{
		// Display.text = Entry.PadLeft(MaxLength, '*');
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_47 = __this->___Display_6;
		String_t* L_48 = __this->___Entry_7;
		int32_t L_49;
		L_49 = DemoKeypad_get_MaxLength_m42FC18F8AC9F8D5746470D940152AA6B59CE2E88(__this, NULL);
		NullCheck(L_48);
		String_t* L_50;
		L_50 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_48, L_49, ((int32_t)42), NULL);
		NullCheck(L_47);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_47, L_50);
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeypad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeypad_Update_m66244AC79B5DB501F30876DBEACA892EE369BB45 (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) 
{
	{
		// if (ForceUnlock)
		bool L_0 = __this->___ForceUnlock_8;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// ForceUnlock = false;
		__this->___ForceUnlock_8 = (bool)0;
		// Unlock();
		VirtualActionInvoker0::Invoke(7 /* System.Void HurricaneVR.TechDemo.Scripts.DemoKeypad::Unlock() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeypad::OnButtonDown(HurricaneVR.Framework.Components.HVRPhysicsButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeypad_OnButtonDown_mCD285E0AD569312D9CDD98F06528E9CBFC255C7A (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* V_0 = NULL;
	{
		// var keyPadButton = button as DemoKeypadButton;
		HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394* L_0 = ___button0;
		V_0 = ((DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4*)IsInstClass((RuntimeObject*)L_0, DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4_il2cpp_TypeInfo_var));
		// if (keyPadButton.Key == '<')
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_1 = V_0;
		NullCheck(L_1);
		Il2CppChar L_2 = L_1->___Key_23;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0041;
		}
	}
	{
		// if (Entry.Length > 0)
		String_t* L_3 = __this->___Entry_7;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// Entry = Entry.Substring(0, Entry.Length - 1);
		String_t* L_5 = __this->___Entry_7;
		String_t* L_6 = __this->___Entry_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NULL);
		__this->___Entry_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entry_7), (void*)L_8);
		goto IL_0099;
	}

IL_0040:
	{
		// return;
		return;
	}

IL_0041:
	{
		// else if (keyPadButton.Key == '+')
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar L_10 = L_9->___Key_23;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0066;
		}
	}
	{
		// if (Code == Entry)
		String_t* L_11 = __this->___Code_5;
		String_t* L_12 = __this->___Entry_7;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		// Unlock();
		VirtualActionInvoker0::Invoke(7 /* System.Void HurricaneVR.TechDemo.Scripts.DemoKeypad::Unlock() */, __this);
		goto IL_0099;
	}

IL_0066:
	{
		// else if (Index >= 0 && Index < MaxLength)
		int32_t L_14;
		L_14 = DemoKeypad_get_Index_mDC9B223A3B9FCA0FFDC8F65D746604F077EF6C8F(__this, NULL);
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_15;
		L_15 = DemoKeypad_get_Index_mDC9B223A3B9FCA0FFDC8F65D746604F077EF6C8F(__this, NULL);
		int32_t L_16;
		L_16 = DemoKeypad_get_MaxLength_m42FC18F8AC9F8D5746470D940152AA6B59CE2E88(__this, NULL);
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0099;
		}
	}
	{
		// Entry += keyPadButton.Key;
		String_t* L_17 = __this->___Entry_7;
		DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* L_18 = V_0;
		NullCheck(L_18);
		Il2CppChar* L_19 = (&L_18->___Key_23);
		String_t* L_20;
		L_20 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, L_20, NULL);
		__this->___Entry_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entry_7), (void*)L_21);
	}

IL_0099:
	{
		// if (Display)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_22 = __this->___Display_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_22, NULL);
		if (!L_23)
		{
			goto IL_00c4;
		}
	}
	{
		// Display.text = Entry.PadLeft(MaxLength, '*');
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_24 = __this->___Display_6;
		String_t* L_25 = __this->___Entry_7;
		int32_t L_26;
		L_26 = DemoKeypad_get_MaxLength_m42FC18F8AC9F8D5746470D940152AA6B59CE2E88(__this, NULL);
		NullCheck(L_25);
		String_t* L_27;
		L_27 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_25, L_26, ((int32_t)42), NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_27);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeypad::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeypad_Unlock_m5BFD341E37FF5A54F9B2E6E8B8322AC77C5AE4E8 (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC97E61DC7C99029AC79834F98E1EAC491CA52091);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_unlocked)
		bool L_0 = __this->____unlocked_9;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Unlocked.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___Unlocked_4;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
	}

IL_0013:
	{
		// _unlocked = true;
		__this->____unlocked_9 = (bool)1;
		// Debug.Log($"unlocked!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC97E61DC7C99029AC79834F98E1EAC491CA52091, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeypad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeypad__ctor_mF4A7FD4B2A00FD30DA7C0A67F21365CBD28B57C4 (DemoKeypad_t196DD4F50D8C1503A4AFCD61F5DD388163513144* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent Unlocked = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___Unlocked_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Unlocked_4), (void*)L_0);
		// public string Entry = "";
		__this->___Entry_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entry_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeypadButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeypadButton_Awake_m11A6F66F54590DB8D2E2A3FCEA76A4DE32ED3DF7 (DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConnectedBody = transform.parent.GetComponentInParent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D(L_1, Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		((HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394*)__this)->___ConnectedBody_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HVRPhysicsButton_t80891DF826AD611D7495EADD02687F7BBDF3B394*)__this)->___ConnectedBody_5), (void*)L_2);
		// base.Awake();
		HVRPhysicsButton_Awake_m134263BF37B3A0A2FCFDB771D7B3385381F4EDC1(__this, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoKeypadButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoKeypadButton__ctor_m6133D89F6E4E2F163F4FD9908D1B6C1BD32104CE (DemoKeypadButton_tEF389A5AA56147E4556DD2DDADC034975BF0D8F4* __this, const RuntimeMethod* method) 
{
	{
		HVRPhysicsButton__ctor_mAC2CB590F4256DA1FA7D78B562DB8CBB5F48B019(__this, NULL);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoLeverDisplay::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLeverDisplay_Awake_m0B9D14A47DAB1FA31C9C4CB80689DE09427B9A43 (DemoLeverDisplay_t2762C179729C7EF04242CC997D3EDBB9DE01675A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tm = GetComponent<TextMeshPro>();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0;
		L_0 = Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E(__this, Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		__this->____tm_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tm_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLeverDisplay::OnStepChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLeverDisplay_OnStepChanged_m4D6D518D0714CA4D6AA18481477121D85DC40350 (DemoLeverDisplay_t2762C179729C7EF04242CC997D3EDBB9DE01675A* __this, int32_t ___step0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8178F586F104CC0037645CD4A425448975FBC818);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _step = step;
		int32_t L_0 = ___step0;
		__this->____step_4 = L_0;
		// _tm.text = $"{_step}/{_angle:f0}";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->____tm_6;
		int32_t L_2 = __this->____step_4;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		float L_5 = __this->____angle_5;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8178F586F104CC0037645CD4A425448975FBC818, L_4, L_7, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_8);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLeverDisplay::OnAngleChanged(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLeverDisplay_OnAngleChanged_m237591637A76C4529E83AAFB9849DEE80C39A7FB (DemoLeverDisplay_t2762C179729C7EF04242CC997D3EDBB9DE01675A* __this, float ___angle0, float ___delta1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8178F586F104CC0037645CD4A425448975FBC818);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _angle = angle;
		float L_0 = ___angle0;
		__this->____angle_5 = L_0;
		// _tm.text = $"{_step}/{_angle:f0}";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->____tm_6;
		int32_t L_2 = __this->____step_4;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		float L_5 = __this->____angle_5;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8178F586F104CC0037645CD4A425448975FBC818, L_4, L_7, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_8);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLeverDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLeverDisplay__ctor_m8E68EB867805E86488731163C5544F3720178036 (DemoLeverDisplay_t2762C179729C7EF04242CC997D3EDBB9DE01675A* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLock_Start_mD740E4D54520C22B47C94CCD5A5A93712E802954 (DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoLock_OnKeyGrabbed_m98219C1B699E94DA9FC6B11144CD531A0F0E73D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Socket = GetComponent<DemoPassthroughSocket>();
		DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* L_0;
		L_0 = Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8(__this, Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8_RuntimeMethod_var);
		__this->___Socket_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Socket_4), (void*)L_0);
		// Socket.Grabbed.AddListener(OnKeyGrabbed);
		DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* L_1 = __this->___Socket_4;
		NullCheck(L_1);
		VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* L_2 = ((HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6*)L_1)->___Grabbed_5;
		UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED* L_3 = (UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED*)il2cpp_codegen_object_new(UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_2__ctor_mF45134DBC67C479BA0F32E844D3400071AF4205D(L_3, __this, (intptr_t)((void*)DemoLock_OnKeyGrabbed_m98219C1B699E94DA9FC6B11144CD531A0F0E73D8_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626(L_2, L_3, UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLock_Update_m36666D98FEE86AD846EE87C49CDDA20C596595A9 (DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF8B948CC37BEB6D1D5A4F40084C611DB43B1E6);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!_unlocked && FaceGrabbable.transform.localRotation.eulerAngles.x > LockThreshold)
		bool L_0 = __this->____unlocked_13;
		if (L_0)
		{
			goto IL_00c8;
		}
	}
	{
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_1 = __this->___FaceGrabbable_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_5 = L_4.___x_2;
		float L_6 = __this->___LockThreshold_11;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_00c8;
		}
	}
	{
		// _unlocked = true;
		__this->____unlocked_13 = (bool)1;
		// Unlocked.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = __this->___Unlocked_12;
		NullCheck(L_7);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_7, NULL);
		// Debug.Log($"lock unlocked!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDFF8B948CC37BEB6D1D5A4F40084C611DB43B1E6, NULL);
		// FaceGrabbable.ForceRelease();
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_8 = __this->___FaceGrabbable_5;
		NullCheck(L_8);
		HVRGrabbable_ForceRelease_mB3D47F3A4835B4A470C8132E09D3FE756C704E75(L_8, NULL);
		// FaceGrabbable.Rigidbody.constraints = RigidbodyConstraints.FreezeAll;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_9 = __this->___FaceGrabbable_5;
		NullCheck(L_9);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = L_9->___Rigidbody_37;
		NullCheck(L_10);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_10, ((int32_t)126), NULL);
		// FaceGrabbable.CanBeGrabbed = false;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_11 = __this->___FaceGrabbable_5;
		NullCheck(L_11);
		HVRGrabbable_set_CanBeGrabbed_mFBBB3A580517AF2FFE98469BF542624776E6DB52_inline(L_11, (bool)0, NULL);
		// FaceGrabbable.transform.localRotation = Quaternion.Euler(90f, 0f, 0f);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_12 = __this->___FaceGrabbable_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((90.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_13);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_13, L_14, NULL);
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXUnlocked, FaceGrabbable.transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_15;
		L_15 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_00c8;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXUnlocked, FaceGrabbable.transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_17;
		L_17 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18 = __this->___SFXUnlocked_9;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_19 = __this->___FaceGrabbable_5;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		NullCheck(L_17);
		SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84(L_17, L_18, L_21, NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock::OnKeyGrabbed(HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLock_OnKeyGrabbed_m98219C1B699E94DA9FC6B11144CD531A0F0E73D8 (DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* __this, HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* ___grabber0, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key1, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(MoveKey(key));
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = ___key1;
		RuntimeObject* L_1;
		L_1 = DemoLock_MoveKey_m8941269B9F051AF924BB896B0DCE177A9A747370(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoLock::MoveKey(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoLock_MoveKey_m8941269B9F051AF924BB896B0DCE177A9A747370 (DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* L_0 = (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7*)il2cpp_codegen_object_new(U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveKeyU3Ed__13__ctor_m0787379FB6273A61E7D0C35DF7F283EDBAC271E7(L_0, 0, NULL);
		U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* L_2 = L_1;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_3 = ___key0;
		NullCheck(L_2);
		L_2->___key_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___key_2), (void*)L_3);
		return L_2;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLock__ctor_m4AA6E41829D90570868018E5102C7720F5F1B80E (DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float AnimationTime = 1f;
		__this->___AnimationTime_8 = (1.0f);
		// public float LockThreshold = 89f;
		__this->___LockThreshold_11 = (89.0f);
		// public UnityEvent Unlocked = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___Unlocked_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Unlocked_12), (void*)L_0);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__13__ctor_m0787379FB6273A61E7D0C35DF7F283EDBAC271E7 (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__13_System_IDisposable_Dispose_m8C99BF839C56E3955F9F5C9ABD000DBD3C452600 (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveKeyU3Ed__13_MoveNext_mED8E6E3C8D9D6D3D858CB33DEB566C2F56B17A81 (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var start = key.transform.position;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_4 = __this->___key_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___U3CstartU3E5__2_4 = L_6;
		// var startRot = key.transform.rotation;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_7 = __this->___key_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		__this->___U3CstartRotU3E5__3_5 = L_9;
		// var elapsed = 0f;
		__this->___U3CelapsedU3E5__4_6 = (0.0f);
		goto IL_00ec;
	}

IL_005d:
	{
		// key.transform.position = Vector3.Lerp(start, Key.position, elapsed / AnimationTime);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_10 = __this->___key_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___U3CstartU3E5__2_4;
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13->___Key_7;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = __this->___U3CelapsedU3E5__4_6;
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->___AnimationTime_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_12, L_15, ((float)(L_16/L_18)), NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_19, NULL);
		// key.transform.rotation = Quaternion.Lerp(startRot, Key.rotation, elapsed / AnimationTime);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_20 = __this->___key_2;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = __this->___U3CstartRotU3E5__3_5;
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___Key_7;
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		float L_26 = __this->___U3CelapsedU3E5__4_6;
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->___AnimationTime_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_22, L_25, ((float)(L_26/L_28)), NULL);
		NullCheck(L_21);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_29, NULL);
		// elapsed += Time.deltaTime;
		float L_30 = __this->___U3CelapsedU3E5__4_6;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__4_6 = ((float)il2cpp_codegen_add(L_30, L_31));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ec:
	{
		// while (elapsed < AnimationTime)
		float L_32 = __this->___U3CelapsedU3E5__4_6;
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_33 = V_1;
		NullCheck(L_33);
		float L_34 = L_33->___AnimationTime_8;
		if ((((float)L_32) < ((float)L_34)))
		{
			goto IL_005d;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXKeyInserted, FaceGrabbable.transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_35;
		L_35 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_35, NULL);
		if (!L_36)
		{
			goto IL_0129;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXKeyInserted, FaceGrabbable.transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_37;
		L_37 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_38 = V_1;
		NullCheck(L_38);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_39 = L_38->___SFXKeyInserted_10;
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_40 = V_1;
		NullCheck(L_40);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_41 = L_40->___FaceGrabbable_5;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		NullCheck(L_37);
		SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84(L_37, L_39, L_43, NULL);
	}

IL_0129:
	{
		// FaceGrabbable.gameObject.SetActive(true);
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_44 = V_1;
		NullCheck(L_44);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_45 = L_44->___FaceGrabbable_5;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// Face.SetActive(false);
		DemoLock_t9A1D128BD0551C2F7C2C4A4088A6FA6669004339* L_47 = V_1;
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___Face_6;
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
		// Destroy(key.gameObject);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_49 = __this->___key_2;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_50, NULL);
		// }
		return (bool)0;
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveKeyU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0792D2434F6115D27EA26EEA18AEEDE9684AD709 (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__13_System_Collections_IEnumerator_Reset_m8B303C10C799B16E6DAAB9AEF67E3D6A94D1482E (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveKeyU3Ed__13_System_Collections_IEnumerator_Reset_m8B303C10C799B16E6DAAB9AEF67E3D6A94D1482E_RuntimeMethod_var)));
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoLock/<MoveKey>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveKeyU3Ed__13_System_Collections_IEnumerator_get_Current_m35C6879333613CD39F6A914771FBA4F449837C8B (U3CMoveKeyU3Ed__13_tF26A6491321014A2CC03422E692234DCE0D7D0D7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoLockedDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLockedDoor_Start_mBCA775FF1FE3CEA2FAB3B01DCED73124B097D934 (DemoLockedDoor_tCA3885325CA417F739F7C6ED111865E68CCBAB15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hinge = GetComponent<HingeJoint>();
		HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* L_0;
		L_0 = Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F(__this, Component_GetComponent_TisHingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7_mD226E906030A0E16CE9EEDAAA902B0CD7CA4B45F_RuntimeMethod_var);
		__this->____hinge_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hinge_4), (void*)L_0);
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidbody_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_5), (void*)L_1);
		// if (LockOnStart)
		bool L_2 = __this->___LockOnStart_8;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Lock();
		DemoLockedDoor_Lock_m338E5554ACA9854D3678321A3E5165C41490120F(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLockedDoor::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLockedDoor_Lock_m338E5554ACA9854D3678321A3E5165C41490120F (DemoLockedDoor_tCA3885325CA417F739F7C6ED111865E68CCBAB15* __this, const RuntimeMethod* method) 
{
	JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var limit = _hinge.limits;
		HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* L_0 = __this->____hinge_4;
		NullCheck(L_0);
		JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A L_1;
		L_1 = HingeJoint_get_limits_mD0E3FDF10D6AEF4D539711C0DE418C20930B6433(L_0, NULL);
		V_0 = L_1;
		// limit.min = 0f;
		JointLimits_set_min_m6DCC6F92E715577794E36CD524989509D2A001AF((&V_0), (0.0f), NULL);
		// limit.max = 0f;
		JointLimits_set_max_m192F8B77417D548BF0162E651049DB1C4C1D81A0((&V_0), (0.0f), NULL);
		// _hinge.limits = limit;
		HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* L_2 = __this->____hinge_4;
		JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A L_3 = V_0;
		NullCheck(L_2);
		HingeJoint_set_limits_m5B9B968EF88FFC9ABA1777FFEFA13433F9BE08D8(L_2, L_3, NULL);
		// _rigidbody.constraints = RigidbodyConstraints.FreezeAll;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->____rigidbody_5;
		NullCheck(L_4);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_4, ((int32_t)126), NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLockedDoor::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLockedDoor_Unlock_m77EC47B399105C8E994E5C538F27794AF39E9756 (DemoLockedDoor_tCA3885325CA417F739F7C6ED111865E68CCBAB15* __this, const RuntimeMethod* method) 
{
	JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var limits = _hinge.limits;
		HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* L_0 = __this->____hinge_4;
		NullCheck(L_0);
		JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A L_1;
		L_1 = HingeJoint_get_limits_mD0E3FDF10D6AEF4D539711C0DE418C20930B6433(L_0, NULL);
		V_0 = L_1;
		// limits.min = MinAngle;
		float L_2 = __this->___MinAngle_6;
		JointLimits_set_min_m6DCC6F92E715577794E36CD524989509D2A001AF((&V_0), L_2, NULL);
		// limits.max = MaxAngle;
		float L_3 = __this->___MaxAngle_7;
		JointLimits_set_max_m192F8B77417D548BF0162E651049DB1C4C1D81A0((&V_0), L_3, NULL);
		// _hinge.limits = limits;
		HingeJoint_t70A95A9F77881D06B0A7BE99B7B16EA40332D2D7* L_4 = __this->____hinge_4;
		JointLimits_tB79BCEF381B77F069150A1A961C05DD9838B998A L_5 = V_0;
		NullCheck(L_4);
		HingeJoint_set_limits_m5B9B968EF88FFC9ABA1777FFEFA13433F9BE08D8(L_4, L_5, NULL);
		// _rigidbody.constraints = RigidbodyConstraints.None;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->____rigidbody_5;
		NullCheck(L_6);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_6, 0, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoLockedDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLockedDoor__ctor_m5F063290F089D3CB9BB1C52C74A13FCFE176D437 (DemoLockedDoor_tCA3885325CA417F739F7C6ED111865E68CCBAB15* __this, const RuntimeMethod* method) 
{
	{
		// public bool LockOnStart = true;
		__this->___LockOnStart_8 = (bool)1;
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
// HurricaneVR.Framework.Core.Player.HVRTeleporter HurricaneVR.TechDemo.Scripts.DemoManualTeleport::get_Teleporter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* DemoManualTeleport_get_Teleporter_m44158E0CD2821BD9ECAA179A993234BDC3DD31FA (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, const RuntimeMethod* method) 
{
	{
		// public HVRTeleporter Teleporter { get; set; }
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_0 = __this->___U3CTeleporterU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport::set_Teleporter(HurricaneVR.Framework.Core.Player.HVRTeleporter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoManualTeleport_set_Teleporter_mA1E248E8F552FB0D684491E246633CB446CA8170 (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* ___value0, const RuntimeMethod* method) 
{
	{
		// public HVRTeleporter Teleporter { get; set; }
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_0 = ___value0;
		__this->___U3CTeleporterU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTeleporterU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoManualTeleport_Start_mB06F913E2DDCD303DD6347B9BC5CB9B59C834861 (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m94CA905D038827EDD303BD8AC2200A79DCCDB981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m82F4FF72E5FB394E91B0D5D4C0A3B7A34BB189A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__6_0_m885A99B97891FD7A4045E291C3965460979FF622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* G_B2_0 = NULL;
	HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A* G_B2_1 = NULL;
	DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* G_B2_2 = NULL;
	Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* G_B1_0 = NULL;
	HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A* G_B1_1 = NULL;
	DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* G_B1_2 = NULL;
	{
		// Teleporter = GameObject.FindObjectsOfType<HVRTeleporter>().FirstOrDefault(e => e.gameObject.activeInHierarchy);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		HVRTeleporterU5BU5D_t1856C5897E868ACEC58861D7B36D10AE69A7BA5A* L_0;
		L_0 = Object_FindObjectsOfType_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m82F4FF72E5FB394E91B0D5D4C0A3B7A34BB189A2(Object_FindObjectsOfType_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m82F4FF72E5FB394E91B0D5D4C0A3B7A34BB189A2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var);
		Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* L_1 = ((U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var);
		U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4* L_3 = ((U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* L_4 = (Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664*)il2cpp_codegen_object_new(Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mACA125F5AF1DA7D4E07D9BCD8954008A4BE30481(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__6_0_m885A99B97891FD7A4045E291C3965460979FF622_RuntimeMethod_var), NULL);
		Func_2_tF91963B39D3FCFD7D91016D3153F74224BDE8664* L_5 = L_4;
		((U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_6;
		L_6 = Enumerable_FirstOrDefault_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m94CA905D038827EDD303BD8AC2200A79DCCDB981((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisHVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7_m94CA905D038827EDD303BD8AC2200A79DCCDB981_RuntimeMethod_var);
		NullCheck(G_B2_2);
		DemoManualTeleport_set_Teleporter_mA1E248E8F552FB0D684491E246633CB446CA8170_inline(G_B2_2, L_6, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport::GoToOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoManualTeleport_GoToOne_mBCF8FAB645624F43D1E8B3D84A1D75289DF2CCFD (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Teleporter && PositionOne)
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_0;
		L_0 = DemoManualTeleport_get_Teleporter_m44158E0CD2821BD9ECAA179A993234BDC3DD31FA_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___PositionOne_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// Teleporter.Teleport(PositionOne.position, PositionOne.forward);
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_4;
		L_4 = DemoManualTeleport_get_Teleporter_m44158E0CD2821BD9ECAA179A993234BDC3DD31FA_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___PositionOne_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___PositionOne_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		NullCheck(L_4);
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(62 /* System.Void HurricaneVR.Framework.Core.Player.HVRTeleporter::Teleport(UnityEngine.Vector3,UnityEngine.Vector3) */, L_4, L_6, L_8);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport::GoToTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoManualTeleport_GoToTwo_mB2B5AFD7D9F91AD144650E24C309973BF55DBD07 (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Teleporter && PositionTwo)
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_0;
		L_0 = DemoManualTeleport_get_Teleporter_m44158E0CD2821BD9ECAA179A993234BDC3DD31FA_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___PositionTwo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// Teleporter.Teleport(PositionTwo.position, PositionTwo.forward);
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_4;
		L_4 = DemoManualTeleport_get_Teleporter_m44158E0CD2821BD9ECAA179A993234BDC3DD31FA_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___PositionTwo_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___PositionTwo_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		NullCheck(L_4);
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(62 /* System.Void HurricaneVR.Framework.Core.Player.HVRTeleporter::Teleport(UnityEngine.Vector3,UnityEngine.Vector3) */, L_4, L_6, L_8);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoManualTeleport__ctor_mAA9DA422FBE24B1D2EC57D8D5346CA1D15B7807D (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC5304AAC074C8A0F9BFBDD0D4F3FE224FFFC27BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4* L_0 = (U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4*)il2cpp_codegen_object_new(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA69C05157AC0EC1D96016127C7C04BF69FB6149E(L_0, NULL);
		((U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA69C05157AC0EC1D96016127C7C04BF69FB6149E (U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoManualTeleport/<>c::<Start>b__6_0(HurricaneVR.Framework.Core.Player.HVRTeleporter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__6_0_m885A99B97891FD7A4045E291C3965460979FF622 (U3CU3Ec_t7B2746BEC29BF1AC326B01D8F384A221C78CA7B4* __this, HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* ___e0, const RuntimeMethod* method) 
{
	{
		// Teleporter = GameObject.FindObjectsOfType<HVRTeleporter>().FirstOrDefault(e => e.gameObject.activeInHierarchy);
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_0 = ___e0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPassthroughSocket_Start_m9C414A640AC6D88CA8E9E08F6A893F32670B268E (DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		HVRSocket_Start_m25A5779F1F122307EB23AB39A9A4DE215B663BBE(__this, NULL);
		// ScaleGrabbable = false;
		((HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418*)__this)->___ScaleGrabbable_43 = (bool)0;
		// GrabbableMustBeHeld = true;
		((HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418*)__this)->___GrabbableMustBeHeld_36 = (bool)1;
		// GrabsFromHand = true;
		((HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418*)__this)->___GrabsFromHand_37 = (bool)1;
		// CanRemoveGrabbable = false;
		((HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418*)__this)->___CanRemoveGrabbable_42 = (bool)0;
		// ParentDisablesGrab = true;
		((HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418*)__this)->___ParentDisablesGrab_40 = (bool)1;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket::OnGrabbed(HurricaneVR.Framework.Core.Grabbers.HVRGrabArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPassthroughSocket_OnGrabbed_m7018E3655D496732CA628B79F61284AE204862E1 (DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* __this, HVRGrabArgs_t97F9557A995F4B4355D9A1C7BD04582FD79A8191* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mC76EFDB8EC97C21D69269426311A3E135CBE67A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllowGrabbing = false;
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::set_AllowGrabbing(System.Boolean) */, __this, (bool)0);
		// AllowHovering = false;
		HVRGrabberBase_set_AllowHovering_m54544F6D19C71F8BF7213D1EA52C7FBA9D46B30D_inline(__this, (bool)0, NULL);
		// args.Cancel = true;
		HVRGrabArgs_t97F9557A995F4B4355D9A1C7BD04582FD79A8191* L_0 = ___args0;
		NullCheck(L_0);
		L_0->___Cancel_0 = (bool)1;
		// Grabbed.Invoke(this, args.Grabbable);
		VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* L_1 = ((HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6*)__this)->___Grabbed_5;
		HVRGrabArgs_t97F9557A995F4B4355D9A1C7BD04582FD79A8191* L_2 = ___args0;
		NullCheck(L_2);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_3 = L_2->___Grabbable_1;
		NullCheck(L_1);
		UnityEvent_2_Invoke_mC76EFDB8EC97C21D69269426311A3E135CBE67A6(L_1, __this, L_3, UnityEvent_2_Invoke_mC76EFDB8EC97C21D69269426311A3E135CBE67A6_RuntimeMethod_var);
		// ForceRelease();
		VirtualActionInvoker0::Invoke(30 /* System.Void HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase::ForceRelease() */, __this);
		// PlaySocketedSFX(args.Grabbable.Socketable);
		HVRGrabArgs_t97F9557A995F4B4355D9A1C7BD04582FD79A8191* L_4 = ___args0;
		NullCheck(L_4);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_5 = L_4->___Grabbable_1;
		NullCheck(L_5);
		HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F* L_6;
		L_6 = HVRGrabbable_get_Socketable_mEA601564D88587F9F74134E84A7EBBCB97A367E9_inline(L_5, NULL);
		VirtualActionInvoker1< HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F* >::Invoke(72 /* System.Void HurricaneVR.Framework.Core.Grabbers.HVRSocket::PlaySocketedSFX(HurricaneVR.Framework.Core.Sockets.HVRSocketable) */, __this, L_6);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPassthroughSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPassthroughSocket__ctor_mCF0907691C16C944459CE282ADFBDF360E3D1894 (DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* __this, const RuntimeMethod* method) 
{
	{
		HVRSocket__ctor_m6421902E11150566A29F8E326410867CF943FEC7(__this, NULL);
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
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoPowerUnit::get_IsPoweredUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoPowerUnit_get_IsPoweredUp_m281A2F7F63FF1326672C8D57FA9BAD1FC48E8753 (DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPoweredUp => SocketedCellCount == RequiredCells;
		int32_t L_0 = __this->___SocketedCellCount_13;
		int32_t L_1 = __this->___RequiredCells_12;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPowerUnit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPowerUnit_Start_m13D5E62E5C461AABB0EAC699D8F597C12F6014EF (DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoPowerUnit_OnLeftSocketGrabbed_m4F5B4771E3CCD883336F11A0325E635DB55FBDB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoPowerUnit_OnRightSocketGrabbed_m4118D218C3C0B97C7438B0CEAF8F97210AF26831_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeftSocket.Grabbed.AddListener(OnLeftSocketGrabbed);
		HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* L_0 = __this->___LeftSocket_5;
		NullCheck(L_0);
		VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* L_1 = ((HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6*)L_0)->___Grabbed_5;
		UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED* L_2 = (UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED*)il2cpp_codegen_object_new(UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_2__ctor_mF45134DBC67C479BA0F32E844D3400071AF4205D(L_2, __this, (intptr_t)((void*)DemoPowerUnit_OnLeftSocketGrabbed_m4F5B4771E3CCD883336F11A0325E635DB55FBDB6_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626(L_1, L_2, UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var);
		// RightSocket.Grabbed.AddListener(OnRightSocketGrabbed);
		HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* L_3 = __this->___RightSocket_6;
		NullCheck(L_3);
		VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* L_4 = ((HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6*)L_3)->___Grabbed_5;
		UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED* L_5 = (UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED*)il2cpp_codegen_object_new(UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_2__ctor_mF45134DBC67C479BA0F32E844D3400071AF4205D(L_5, __this, (intptr_t)((void*)DemoPowerUnit_OnRightSocketGrabbed_m4118D218C3C0B97C7438B0CEAF8F97210AF26831_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626(L_4, L_5, UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPowerUnit::OnRightSocketGrabbed(HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPowerUnit_OnRightSocketGrabbed_m4118D218C3C0B97C7438B0CEAF8F97210AF26831 (DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2* __this, HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* ___arg00, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___arg11, const RuntimeMethod* method) 
{
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	{
		// SocketedCellCount++;
		int32_t L_0 = __this->___SocketedCellCount_13;
		__this->___SocketedCellCount_13 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// var mats = RightLight.materials;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___RightLight_8;
		NullCheck(L_1);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2;
		L_2 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_1, NULL);
		V_0 = L_2;
		// mats[0] = OnMaterial;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___OnMaterial_15;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_4);
		// RightLight.materials = mats;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->___RightLight_8;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6 = V_0;
		NullCheck(L_5);
		Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPowerUnit::OnLeftSocketGrabbed(HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPowerUnit_OnLeftSocketGrabbed_m4F5B4771E3CCD883336F11A0325E635DB55FBDB6 (DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2* __this, HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* ___arg00, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___arg11, const RuntimeMethod* method) 
{
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	{
		// SocketedCellCount++;
		int32_t L_0 = __this->___SocketedCellCount_13;
		__this->___SocketedCellCount_13 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// var mats = LeftLight.materials;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___LeftLight_7;
		NullCheck(L_1);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2;
		L_2 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_1, NULL);
		V_0 = L_2;
		// mats[0] = OnMaterial;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___OnMaterial_15;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_4);
		// LeftLight.materials = mats;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->___LeftLight_7;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6 = V_0;
		NullCheck(L_5);
		Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPowerUnit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPowerUnit_Update_m13B8187312D56D0D84A4328B88CABCA637F77BD2 (DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71CA9F9E0C870AADBE4EED2A581B2671DFD7E3E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LeverRotation.Angle > RequiredAngle && IsPoweredUp && !Engaged)
		HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* L_0 = __this->___LeverRotation_9;
		NullCheck(L_0);
		float L_1;
		L_1 = HVRRotationTracker_get_Angle_m1D919D4DEF1339D92F6907FE246C8990C7444AD0_inline(L_0, NULL);
		float L_2 = __this->___RequiredAngle_10;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_006b;
		}
	}
	{
		bool L_3;
		L_3 = DemoPowerUnit_get_IsPoweredUp_m281A2F7F63FF1326672C8D57FA9BAD1FC48E8753(__this, NULL);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		bool L_4 = __this->___Engaged_14;
		if (L_4)
		{
			goto IL_006b;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXPoweredOn, LeftSocket.transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_5;
		L_5 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(SFXPoweredOn, LeftSocket.transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_7;
		L_7 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___SFXPoweredOn_11;
		HVRSocket_t863A2296A651DF5DF7F79E91E87DD1FA9C49C418* L_9 = __this->___LeftSocket_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_7);
		SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84(L_7, L_8, L_11, NULL);
	}

IL_004f:
	{
		// Engaged = true;
		__this->___Engaged_14 = (bool)1;
		// PoweredUp.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___PoweredUp_4;
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
		// Debug.Log($"poweredup!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral71CA9F9E0C870AADBE4EED2A581B2671DFD7E3E4, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoPowerUnit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPowerUnit__ctor_mFE0F2C1EE2885492185FD6C61ADE5F5F4CC1BD1F (DemoPowerUnit_t18277FBCF1AB022673D8C1E71F808916230680D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent PoweredUp = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___PoweredUp_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoweredUp_4), (void*)L_0);
		// public float RequiredAngle = 175f;
		__this->___RequiredAngle_10 = (175.0f);
		// public int RequiredCells = 2;
		__this->___RequiredCells_12 = 2;
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
// HurricaneVR.TechDemo.Scripts.SafeDialState HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	{
		// get { return _state; }
		int32_t L_0 = __this->____state_35;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::set_State(HurricaneVR.TechDemo.Scripts.SafeDialState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_set_State_m9D680F1285B0014A3D387F64A4641B8E16C48705 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _state = value;
		int32_t L_0 = ___value0;
		__this->____state_35 = L_0;
		// ComputeBounds();
		DemoSafeDial_ComputeBounds_m439F6C39B7B35966C45AEEC2BAE62694A5032F71(__this, NULL);
		// }
		return;
	}
}
// System.Int32 HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_NumberOfRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DemoSafeDial_get_NumberOfRotations_m23C4A6DAC342DB7AC857A7741FB1A75A1E39A6F0 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	{
		// return ((int)Mathf.Abs(CamDistance)) / 355;
		float L_0 = __this->___CamDistance_28;
		float L_1;
		L_1 = fabsf(L_0);
		return ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_1)/((int32_t)355)));
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_Start_m8C3CC2A202BCF53BF77FD7D54828B5FAB343DFCB (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDialState_t3ADBF0DD09E03B7544C074A80488A5FE7FCADAAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE9DED28C73C43C37F4AB9503FF1112289730BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		HVRRotationTracker_Start_m1F7003A715C1FC51F6993790E2184AFD2F049C8B(__this, NULL);
		// ResetLockState(SafeDialState.CamOne);
		DemoSafeDial_ResetLockState_m8DAE9C9D37734E9B7443B6717BAE1C437A745173(__this, 0, NULL);
		// if (DebugLabel)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___DebugLabel_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00a8;
		}
	}
	{
		// DebugLabel.text = $"Code:{First},{Second},{Third}\r\n Dist: {CamDistance:f0}\r\nState: {State}\r\nTolerance: {Tolerance:f0}\r\nL_Bound: {LowerBound:f0}\r\nU_Bound: {UpperBound:f0}";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_2 = __this->___DebugLabel_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = __this->___First_24;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = __this->___Second_25;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = __this->___Third_26;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		float L_17 = __this->___CamDistance_28;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		int32_t L_21;
		L_21 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(SafeDialState_t3ADBF0DD09E03B7544C074A80488A5FE7FCADAAF_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		float L_25 = __this->___Tolerance_30;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		float L_29 = __this->___LowerBound_31;
		float L_30 = L_29;
		RuntimeObject* L_31 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_28;
		float L_33 = __this->___UpperBound_32;
		float L_34 = L_33;
		RuntimeObject* L_35 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_35);
		String_t* L_36;
		L_36 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralCDE9DED28C73C43C37F4AB9503FF1112289730BF, L_32, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_36);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::ComputeBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_ComputeBounds_m439F6C39B7B35966C45AEEC2BAE62694A5032F71 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (State)
		int32_t L_0;
		L_0 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_00c9;
			}
		}
	}
	{
		goto IL_00c9;
	}

IL_0022:
	{
		// LowerBound = 0f;
		__this->___LowerBound_31 = (0.0f);
		// UpperBound = 1080f;
		__this->___UpperBound_32 = (1080.0f);
		// break;
		goto IL_00c9;
	}

IL_003d:
	{
		// LowerBound = -360f - (360 - Second * StepSize);
		int32_t L_2 = __this->___Second_25;
		float L_3 = ((HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067*)__this)->___StepSize_10;
		__this->___LowerBound_31 = ((float)il2cpp_codegen_subtract((-360.0f), ((float)il2cpp_codegen_subtract((360.0f), ((float)il2cpp_codegen_multiply(((float)L_2), L_3))))));
		// UpperBound = 0f + Tolerance;
		float L_4 = __this->___Tolerance_30;
		__this->___UpperBound_32 = ((float)il2cpp_codegen_add((0.0f), L_4));
		// break;
		goto IL_00c9;
	}

IL_0071:
	{
		// if (Third < Second)
		int32_t L_5 = __this->___Third_26;
		int32_t L_6 = __this->___Second_25;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_00a3;
		}
	}
	{
		// UpperBound = (Steps - Second + Third) * StepSize;
		int32_t L_7 = ((HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067*)__this)->___Steps_5;
		int32_t L_8 = __this->___Second_25;
		int32_t L_9 = __this->___Third_26;
		float L_10 = ((HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067*)__this)->___StepSize_10;
		__this->___UpperBound_32 = ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_7, L_8)), L_9))), L_10));
		goto IL_00be;
	}

IL_00a3:
	{
		// UpperBound = (Third - Second) * StepSize;
		int32_t L_11 = __this->___Third_26;
		int32_t L_12 = __this->___Second_25;
		float L_13 = ((HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067*)__this)->___StepSize_10;
		__this->___UpperBound_32 = ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_11, L_12))), L_13));
	}

IL_00be:
	{
		// LowerBound = 0f;
		__this->___LowerBound_31 = (0.0f);
	}

IL_00c9:
	{
		// LowerBound -= Tolerance;
		float L_14 = __this->___LowerBound_31;
		float L_15 = __this->___Tolerance_30;
		__this->___LowerBound_31 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// UpperBound += Tolerance;
		float L_16 = __this->___UpperBound_32;
		float L_17 = __this->___Tolerance_30;
		__this->___UpperBound_32 = ((float)il2cpp_codegen_add(L_16, L_17));
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_Update_mB72EC2408AF6F70DF932875368817E3217EDAE2D (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		HVRRotationTracker_Update_m4E8892E2F7FEDBC33AB1943266BAE2F4EDEAF56A(__this, NULL);
		// }
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_IsFirstInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoSafeDial_get_IsFirstInRange_mA3CA090B1D8605DC5E91B3EE895675932F3525D6 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsFirstInRange => CurrentNumber >= First - AccuracyAllowance && CurrentNumber <= First + AccuracyAllowance;
		int32_t L_0 = __this->___CurrentNumber_27;
		int32_t L_1 = __this->___First_24;
		int32_t L_2 = __this->___AccuracyAllowance_33;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2)))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___CurrentNumber_27;
		int32_t L_4 = __this->___First_24;
		int32_t L_5 = __this->___AccuracyAllowance_33;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_IsSecondInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoSafeDial_get_IsSecondInRange_m5BFFF02234033714F4E88D135216214148686DEF (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSecondInRange => CurrentNumber >= Second - AccuracyAllowance && CurrentNumber <= Second + AccuracyAllowance;
		int32_t L_0 = __this->___CurrentNumber_27;
		int32_t L_1 = __this->___Second_25;
		int32_t L_2 = __this->___AccuracyAllowance_33;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2)))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___CurrentNumber_27;
		int32_t L_4 = __this->___Second_25;
		int32_t L_5 = __this->___AccuracyAllowance_33;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSafeDial::get_IsThirdInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoSafeDial_get_IsThirdInRange_m89C0CA63CFE4621A2A191F39F0C77BEA4CD67A44 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsThirdInRange => CurrentNumber >= Third - AccuracyAllowance && CurrentNumber <= Third + AccuracyAllowance;
		int32_t L_0 = __this->___CurrentNumber_27;
		int32_t L_1 = __this->___Third_26;
		int32_t L_2 = __this->___AccuracyAllowance_33;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2)))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___CurrentNumber_27;
		int32_t L_4 = __this->___Third_26;
		int32_t L_5 = __this->___AccuracyAllowance_33;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::ResetLockState(HurricaneVR.TechDemo.Scripts.SafeDialState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_ResetLockState_m8DAE9C9D37734E9B7443B6717BAE1C437A745173 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		// State = state;
		int32_t L_0 = ___state0;
		DemoSafeDial_set_State_m9D680F1285B0014A3D387F64A4641B8E16C48705(__this, L_0, NULL);
		// CamDistance = 0f;
		__this->___CamDistance_28 = (0.0f);
		// PreviousDistance = 0f;
		__this->___PreviousDistance_29 = (0.0f);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::OnStepChanged(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_OnStepChanged_m34851F206698F68023BF2DDAF6A75CF8D0374DC0 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, int32_t ___step0, bool ___raiseEvents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDialState_t3ADBF0DD09E03B7544C074A80488A5FE7FCADAAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F77F7A49FA6574579CAFCEB3733D4E88CFD3161);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE9DED28C73C43C37F4AB9503FF1112289730BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnStepChanged(step, raiseEvents);
		int32_t L_0 = ___step0;
		bool L_1 = ___raiseEvents1;
		HVRRotationTracker_OnStepChanged_m0970488803754B9F7C161EBCFBE1A46D78A49553(__this, L_0, L_1, NULL);
		// CurrentNumber = step;
		int32_t L_2 = ___step0;
		__this->___CurrentNumber_27 = L_2;
		// if (NumberLabel)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___NumberLabel_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// NumberLabel.text = CurrentNumber.ToString("n0");
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_5 = __this->___NumberLabel_21;
		int32_t* L_6 = (&__this->___CurrentNumber_27);
		String_t* L_7;
		L_7 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_6, _stringLiteral7F77F7A49FA6574579CAFCEB3733D4E88CFD3161, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_7);
	}

IL_0037:
	{
		// if (DebugLabel)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_8 = __this->___DebugLabel_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_00d2;
		}
	}
	{
		// DebugLabel.text = $"Code:{First},{Second},{Third}\r\n Dist: {CamDistance:f0}\r\nState: {State}\r\nTolerance: {Tolerance:f0}\r\nL_Bound: {LowerBound:f0}\r\nU_Bound: {UpperBound:f0}";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_10 = __this->___DebugLabel_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		int32_t L_13 = __this->___First_24;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = __this->___Second_25;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		int32_t L_21 = __this->___Third_26;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		float L_25 = __this->___CamDistance_28;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		int32_t L_29;
		L_29 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(SafeDialState_t3ADBF0DD09E03B7544C074A80488A5FE7FCADAAF_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_28;
		float L_33 = __this->___Tolerance_30;
		float L_34 = L_33;
		RuntimeObject* L_35 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
		float L_37 = __this->___LowerBound_31;
		float L_38 = L_37;
		RuntimeObject* L_39 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_36;
		float L_41 = __this->___UpperBound_32;
		float L_42 = L_41;
		RuntimeObject* L_43 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_43);
		String_t* L_44;
		L_44 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralCDE9DED28C73C43C37F4AB9503FF1112289730BF, L_40, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_44);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::OnAngleChanged(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial_OnAngleChanged_m4F2FAC8E9F8462C0393E499063109C04D6E74DB0 (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, float ___angle0, float ___delta1, const RuntimeMethod* method) 
{
	{
		// CamDistance += delta;
		float L_0 = __this->___CamDistance_28;
		float L_1 = ___delta1;
		__this->___CamDistance_28 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (CamDistance < LowerBound)
		float L_2 = __this->___CamDistance_28;
		float L_3 = __this->___LowerBound_31;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0025;
		}
	}
	{
		// ResetLockState(SafeDialState.CamOne);
		DemoSafeDial_ResetLockState_m8DAE9C9D37734E9B7443B6717BAE1C437A745173(__this, 0, NULL);
		goto IL_005f;
	}

IL_0025:
	{
		// else if (CamDistance > UpperBound && State != SafeDialState.CamOne)
		float L_4 = __this->___CamDistance_28;
		float L_5 = __this->___UpperBound_32;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_6;
		L_6 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// if (State == SafeDialState.CamTwo)
		int32_t L_7;
		L_7 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		// CamDistance = 1080f;
		__this->___CamDistance_28 = (1080.0f);
		// State = SafeDialState.CamOne;
		DemoSafeDial_set_State_m9D680F1285B0014A3D387F64A4641B8E16C48705(__this, 0, NULL);
		goto IL_005f;
	}

IL_0058:
	{
		// ResetLockState(SafeDialState.CamOne);
		DemoSafeDial_ResetLockState_m8DAE9C9D37734E9B7443B6717BAE1C437A745173(__this, 0, NULL);
	}

IL_005f:
	{
		// if (State == SafeDialState.CamOne && NumberOfRotations >= 3 && IsFirstInRange)
		int32_t L_8;
		L_8 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		if (L_8)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_9;
		L_9 = DemoSafeDial_get_NumberOfRotations_m23C4A6DAC342DB7AC857A7741FB1A75A1E39A6F0(__this, NULL);
		if ((((int32_t)L_9) < ((int32_t)3)))
		{
			goto IL_0080;
		}
	}
	{
		bool L_10;
		L_10 = DemoSafeDial_get_IsFirstInRange_mA3CA090B1D8605DC5E91B3EE895675932F3525D6(__this, NULL);
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		// ResetLockState(SafeDialState.CamTwo);
		DemoSafeDial_ResetLockState_m8DAE9C9D37734E9B7443B6717BAE1C437A745173(__this, 1, NULL);
		return;
	}

IL_0080:
	{
		// else if (State == SafeDialState.CamTwo && NumberOfRotations == 1 && IsSecondInRange)
		int32_t L_11;
		L_11 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_12;
		L_12 = DemoSafeDial_get_NumberOfRotations_m23C4A6DAC342DB7AC857A7741FB1A75A1E39A6F0(__this, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_00a2;
		}
	}
	{
		bool L_13;
		L_13 = DemoSafeDial_get_IsSecondInRange_m5BFFF02234033714F4E88D135216214148686DEF(__this, NULL);
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		// ResetLockState(SafeDialState.CamThree);
		DemoSafeDial_ResetLockState_m8DAE9C9D37734E9B7443B6717BAE1C437A745173(__this, 2, NULL);
		return;
	}

IL_00a2:
	{
		// else if (State == SafeDialState.CamThree && IsThirdInRange)
		int32_t L_14;
		L_14 = DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline(__this, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_00c5;
		}
	}
	{
		bool L_15;
		L_15 = DemoSafeDial_get_IsThirdInRange_m89C0CA63CFE4621A2A191F39F0C77BEA4CD67A44(__this, NULL);
		if (!L_15)
		{
			goto IL_00c5;
		}
	}
	{
		// State = SafeDialState.Unlocked;
		DemoSafeDial_set_State_m9D680F1285B0014A3D387F64A4641B8E16C48705(__this, 3, NULL);
		// Unlocked.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = __this->___Unlocked_34;
		NullCheck(L_16);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_16, NULL);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDial__ctor_m75317E9F573DED09F2A809E2009E07997D45399C (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int First = 30;
		__this->___First_24 = ((int32_t)30);
		// public int Second = 15;
		__this->___Second_25 = ((int32_t)15);
		// public int Third = 01;
		__this->___Third_26 = 1;
		// public float Tolerance = 40f;
		__this->___Tolerance_30 = (40.0f);
		// public int AccuracyAllowance = 1;
		__this->___AccuracyAllowance_33 = 1;
		// public UnityEvent Unlocked = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___Unlocked_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Unlocked_34), (void*)L_0);
		HVRRotationTracker__ctor_mFCDB2930B145ACFF5B27C00D69DCB8AD18C0C32D(__this, NULL);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoSafeDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSafeDoor__ctor_mD9CCFA35EF726D630BC7F90457E57376DC83D40B (DemoSafeDoor_tD52081A64E4CDBA6E3365613B3432B910D996287* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSlidingDoor_Start_m92BE28990B66ABF66CC6D9FD24D5240A983A6218 (DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::OpenDoors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSlidingDoor_OpenDoors_m76E6F2CF1C9753DE76F973A4A06543C2F88AE411 (DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_opened)
		bool L_0 = __this->____opened_12;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _opened = true;
		__this->____opened_12 = (bool)1;
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(OpenedClip, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_1;
		L_1 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// if(SFXPlayer.Instance) SFXPlayer.Instance.PlaySFX(OpenedClip, transform.position);
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_3;
		L_3 = SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___OpenedClip_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_3);
		SFXPlayer_PlaySFX_m84A045DF30FB03269C08AB8BB787365190207A84(L_3, L_4, L_6, NULL);
	}

IL_0037:
	{
		// StartCoroutine(OpenDoorRoutine());
		RuntimeObject* L_7;
		L_7 = DemoSlidingDoor_OpenDoorRoutine_mEF0F3A6C7AD468CCF6D0C97161CF3B5A12746303(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::OpenDoorRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoSlidingDoor_OpenDoorRoutine_mEF0F3A6C7AD468CCF6D0C97161CF3B5A12746303 (DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* L_0 = (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA*)il2cpp_codegen_object_new(U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenDoorRoutineU3Ed__11__ctor_m1DD86EE25D3CD51180E4DE9116E8C287B380C4E5(L_0, 0, NULL);
		U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSlidingDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSlidingDoor__ctor_m8B1CFDB4C71FBA99A9E5D860398D2C4FF4CA1B10 (DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* __this, const RuntimeMethod* method) 
{
	{
		// public float LockRotateTime = 1;
		__this->___LockRotateTime_7 = (1.0f);
		// public float LockRotateAngles = 360;
		__this->___LockRotateAngles_8 = (360.0f);
		// public float OpenOffset = .5f;
		__this->___OpenOffset_9 = (0.5f);
		// public float Speed = 1f;
		__this->___Speed_10 = (1.0f);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorRoutineU3Ed__11__ctor_m1DD86EE25D3CD51180E4DE9116E8C287B380C4E5 (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorRoutineU3Ed__11_System_IDisposable_Dispose_m8EBA50BBEEA8E19AF6176BF531FF2D5F98A76EA1 (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenDoorRoutineU3Ed__11_MoveNext_m960FB22D98EC22962234AD7B5E474689F228CE17 (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var elapsed = 0f;
		__this->___U3CelapsedU3E5__2_3 = (0.0f);
		// var LockRotateSpeed = LockRotateAngles / LockRotateTime * Time.deltaTime;
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_3 = V_1;
		NullCheck(L_3);
		float L_4 = L_3->___LockRotateAngles_8;
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->___LockRotateTime_7;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CLockRotateSpeedU3E5__3_4 = ((float)il2cpp_codegen_multiply(((float)(L_4/L_6)), L_7));
		goto IL_00a3;
	}

IL_004f:
	{
		// Lock.localRotation *= Quaternion.Euler(0f, 0f, LockRotateSpeed);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___Lock_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9;
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_10, NULL);
		float L_12 = __this->___U3CLockRotateSpeedU3E5__3_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_11, L_13, NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// elapsed += Time.deltaTime;
		float L_15 = __this->___U3CelapsedU3E5__2_3;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__2_3 = ((float)il2cpp_codegen_add(L_15, L_16));
	}

IL_00a3:
	{
		// while (elapsed < LockRotateTime)
		float L_17 = __this->___U3CelapsedU3E5__2_3;
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___LockRotateTime_7;
		if ((((float)L_17) < ((float)L_19)))
		{
			goto IL_004f;
		}
	}
	{
		// elapsed = 0f;
		__this->___U3CelapsedU3E5__2_3 = (0.0f);
		// var time = OpenOffset / Speed + (2 * Time.fixedDeltaTime);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->___OpenOffset_9;
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___Speed_10;
		float L_24;
		L_24 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->___U3CtimeU3E5__4_5 = ((float)il2cpp_codegen_add(((float)(L_21/L_23)), ((float)il2cpp_codegen_multiply((2.0f), L_24))));
		goto IL_01be;
	}

IL_00e0:
	{
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_25 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_25, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var next = Vector3.MoveTowards(LeftDoor.transform.position, LeftDoor.transform.parent.TransformPoint(new Vector3(-OpenOffset, 0f, 0f)), Speed * Time.fixedDeltaTime);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_26 = V_1;
		NullCheck(L_26);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27 = L_26->___LeftDoor_4;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_30 = V_1;
		NullCheck(L_30);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_31 = L_30->___LeftDoor_4;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_32, NULL);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_34 = V_1;
		NullCheck(L_34);
		float L_35 = L_34->___OpenOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), ((-L_35)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_33, L_36, NULL);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_38 = V_1;
		NullCheck(L_38);
		float L_39 = L_38->___Speed_10;
		float L_40;
		L_40 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_29, L_37, ((float)il2cpp_codegen_multiply(L_39, L_40)), NULL);
		V_2 = L_41;
		// LeftDoor.MovePosition(next);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_42 = V_1;
		NullCheck(L_42);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_43 = L_42->___LeftDoor_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_2;
		NullCheck(L_43);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_43, L_44, NULL);
		// next = Vector3.MoveTowards(RightDoor.transform.position, RightDoor.transform.parent.TransformPoint(new Vector3(OpenOffset, 0f, 0f)), Speed * Time.fixedDeltaTime);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_45 = V_1;
		NullCheck(L_45);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = L_45->___RightDoor_5;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_49 = V_1;
		NullCheck(L_49);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = L_49->___RightDoor_5;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_51, NULL);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_53 = V_1;
		NullCheck(L_53);
		float L_54 = L_53->___OpenOffset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), L_54, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_52, L_55, NULL);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_57 = V_1;
		NullCheck(L_57);
		float L_58 = L_57->___Speed_10;
		float L_59;
		L_59 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_48, L_56, ((float)il2cpp_codegen_multiply(L_58, L_59)), NULL);
		V_2 = L_60;
		// RightDoor.MovePosition(next);
		DemoSlidingDoor_t340C772E062B6F55FFEDB595EF640DC6A362C32A* L_61 = V_1;
		NullCheck(L_61);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_62 = L_61->___RightDoor_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_2;
		NullCheck(L_62);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_62, L_63, NULL);
		// elapsed += Time.fixedDeltaTime;
		float L_64 = __this->___U3CelapsedU3E5__2_3;
		float L_65;
		L_65 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->___U3CelapsedU3E5__2_3 = ((float)il2cpp_codegen_add(L_64, L_65));
	}

IL_01be:
	{
		// while (elapsed < time)
		float L_66 = __this->___U3CelapsedU3E5__2_3;
		float L_67 = __this->___U3CtimeU3E5__4_5;
		if ((((float)L_66) < ((float)L_67)))
		{
			goto IL_00e0;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenDoorRoutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3C4B1E876F144915782168D4A654845DD12ABB83 (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDoorRoutineU3Ed__11_System_Collections_IEnumerator_Reset_m171EC177C67BA7A6626CA67AA3ACC3AD0761F34F (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenDoorRoutineU3Ed__11_System_Collections_IEnumerator_Reset_m171EC177C67BA7A6626CA67AA3ACC3AD0761F34F_RuntimeMethod_var)));
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoSlidingDoor/<OpenDoorRoutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenDoorRoutineU3Ed__11_System_Collections_IEnumerator_get_Current_mA778F7AFFCDBA03C30B44492632F38ED0979D828 (U3COpenDoorRoutineU3Ed__11_tC55B703D3DF6294E6C8A2E1C5D1B77B6E2A709EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoSocketables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSocketables__ctor_m416BD6EC15D0DB4780D49DDA91D8D23D8D82CA3A (DemoSocketables_tCA4DDE3A29399721941785DC04B6DB2681FA5037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVREnumFlagsSocketable_1__ctor_mE90C60D9BD634798F667995DB1271BE0E352E6CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HVREnumFlagsSocketable_1__ctor_mE90C60D9BD634798F667995DB1271BE0E352E6CB(__this, HVREnumFlagsSocketable_1__ctor_mE90C60D9BD634798F667995DB1271BE0E352E6CB_RuntimeMethod_var);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoSocketFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSocketFilter__ctor_m33D0AC44D31ACBBA764ADD1E048BA7D6A2058299 (DemoSocketFilter_t23A24FE270D4CA08D26FE3A51E49FFD4B13213E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVREnumFlagsSocketFilter_1__ctor_m012DED0BA9021E8926793BFB917E41B685D4007B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HVREnumFlagsSocketFilter_1__ctor_m012DED0BA9021E8926793BFB917E41B685D4007B(__this, HVREnumFlagsSocketFilter_1__ctor_m012DED0BA9021E8926793BFB917E41B685D4007B_RuntimeMethod_var);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_Start_m13BC9F07279EDCE386384D07F76126BFC0890452 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisHVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45_mAA323BBD4EC43D0C753128C3A3BF6497B8464598_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisHVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986_m083CCEC6EE2D5FD7BBC196F825560CDF11777460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9_m2A05DE5163BD6D4F15A66FAA2B13ABEE368A90FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m1EE97F1F36E7A096D4D1D15C7873FB5F381A9C04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m781A92500338780EB953852750144E25813BBAFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoUIManager_OnLineGrabTriggerChanged_m320D33BB893A9EFF156AFA8A2889F868F7F9E87F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoUIManager_OnSmoothTurnChanged_m31BB570E3C5DEC2659F976DC530043158243472A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoUIManager_OnSnapTurnRateChanged_mFB0D670F5E3ED62AD52B288218CA4D8576D07F71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoUIManager_OnTurnRateChanged_m0FB692D0F19F25A5E6B71DDE83BABFC96CBB62EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m36EDE03B4C61948E7224D32D08282DEDB9710BF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_mC7262E1B113EC3FBA35498F1FA7BA6AE1DF9ABB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_m0086B68A646A1757CB71893C89151A4C5DCF5307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__21_0_m9792FEEA2F8FDFB1919474FE16253407475757E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__21_1_mEA168A4B643B3A9E9C38E34E44E992326D6C585D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__21_2_m6A23F5D8D3ED576D882505CC103824BF32F63195_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__21_3_mE239525380D8EA93A3BB42A35E8299EF8622AED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__21_4_m01861EEACC630E93DD62AFABB77EF3E344848CB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* G_B3_0 = NULL;
	HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634* G_B3_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B3_2 = NULL;
	Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* G_B2_0 = NULL;
	HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634* G_B2_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B2_2 = NULL;
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* G_B12_0 = NULL;
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* G_B12_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B12_2 = NULL;
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* G_B11_0 = NULL;
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* G_B11_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B11_2 = NULL;
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* G_B14_0 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B14_1 = NULL;
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* G_B13_0 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B13_1 = NULL;
	HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* G_B15_0 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B15_1 = NULL;
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* G_B19_0 = NULL;
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* G_B19_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B19_2 = NULL;
	Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* G_B18_0 = NULL;
	HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* G_B18_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B18_2 = NULL;
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* G_B21_0 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B21_1 = NULL;
	HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* G_B20_0 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B20_1 = NULL;
	HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* G_B22_0 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B22_1 = NULL;
	Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* G_B29_0 = NULL;
	HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* G_B29_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B29_2 = NULL;
	Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* G_B28_0 = NULL;
	HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* G_B28_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B28_2 = NULL;
	Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* G_B31_0 = NULL;
	HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* G_B31_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B31_2 = NULL;
	Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* G_B30_0 = NULL;
	HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* G_B30_1 = NULL;
	DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* G_B30_2 = NULL;
	{
		// if (!Player)
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_0 = __this->___Player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_003c;
		}
	}
	{
		// Player = GameObject.FindObjectsOfType<HVRPlayerController>().FirstOrDefault(e => e.gameObject.activeInHierarchy);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		HVRPlayerControllerU5BU5D_t3EA80674A4130B342F6CED94A632B46A9AB21634* L_2;
		L_2 = Object_FindObjectsOfType_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_m0086B68A646A1757CB71893C89151A4C5DCF5307(Object_FindObjectsOfType_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_m0086B68A646A1757CB71893C89151A4C5DCF5307_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* L_3 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1;
		Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		G_B2_2 = __this;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			G_B3_2 = __this;
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* L_5 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* L_6 = (Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC*)il2cpp_codegen_object_new(Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m883FF32C17B33B25F335F327B1965CFD323CC3DE(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__21_0_m9792FEEA2F8FDFB1919474FE16253407475757E4_RuntimeMethod_var), NULL);
		Func_2_t4AFCE779302A8CAA62B700488FD9BBB464E1D4FC* L_7 = L_6;
		((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0032:
	{
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_8;
		L_8 = Enumerable_FirstOrDefault_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_mC7262E1B113EC3FBA35498F1FA7BA6AE1DF9ABB1((RuntimeObject*)G_B3_1, G_B3_0, Enumerable_FirstOrDefault_TisHVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0_mC7262E1B113EC3FBA35498F1FA7BA6AE1DF9ABB1_RuntimeMethod_var);
		NullCheck(G_B3_2);
		G_B3_2->___Player_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_2->___Player_4), (void*)L_8);
	}

IL_003c:
	{
		// if (Player)
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_9 = __this->___Player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_012e;
		}
	}
	{
		// if (!CameraRig)
		HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* L_11 = __this->___CameraRig_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		// CameraRig = Player.GetComponentInChildren<HVRCameraRig>();
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_13 = __this->___Player_4;
		NullCheck(L_13);
		HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* L_14;
		L_14 = Component_GetComponentInChildren_TisHVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45_mAA323BBD4EC43D0C753128C3A3BF6497B8464598(L_13, Component_GetComponentInChildren_TisHVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45_mAA323BBD4EC43D0C753128C3A3BF6497B8464598_RuntimeMethod_var);
		__this->___CameraRig_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CameraRig_5), (void*)L_14);
	}

IL_006a:
	{
		// if (!Inputs)
		HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* L_15 = __this->___Inputs_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (L_16)
		{
			goto IL_0088;
		}
	}
	{
		// Inputs = Player.GetComponentInChildren<HVRPlayerInputs>();
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_17 = __this->___Player_4;
		NullCheck(L_17);
		HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* L_18;
		L_18 = Component_GetComponentInChildren_TisHVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986_m083CCEC6EE2D5FD7BBC196F825560CDF11777460(L_17, Component_GetComponentInChildren_TisHVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986_m083CCEC6EE2D5FD7BBC196F825560CDF11777460_RuntimeMethod_var);
		__this->___Inputs_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Inputs_6), (void*)L_18);
	}

IL_0088:
	{
		// if (!LeftHand) LeftHand = Player.Root.GetComponentsInChildren<HVRHandGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Left)?.GetComponent<HVRJointHand>();
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_19 = __this->___LeftHand_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_19, NULL);
		if (L_20)
		{
			goto IL_00db;
		}
	}
	{
		// if (!LeftHand) LeftHand = Player.Root.GetComponentsInChildren<HVRHandGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Left)?.GetComponent<HVRJointHand>();
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_21 = __this->___Player_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___Root_34;
		NullCheck(L_22);
		HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* L_23;
		L_23 = Component_GetComponentsInChildren_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m781A92500338780EB953852750144E25813BBAFA(L_22, Component_GetComponentsInChildren_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m781A92500338780EB953852750144E25813BBAFA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_24 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_1_2;
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_25 = L_24;
		G_B11_0 = L_25;
		G_B11_1 = L_23;
		G_B11_2 = __this;
		if (L_25)
		{
			G_B12_0 = L_25;
			G_B12_1 = L_23;
			G_B12_2 = __this;
			goto IL_00c5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* L_26 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_27 = (Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03*)il2cpp_codegen_object_new(Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m644C40A901702D19B041828F2E854855C51DFD0D(L_27, L_26, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__21_1_mEA168A4B643B3A9E9C38E34E44E992326D6C585D_RuntimeMethod_var), NULL);
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_28 = L_27;
		((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_1_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_1_2), (void*)L_28);
		G_B12_0 = L_28;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00c5:
	{
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_29;
		L_29 = Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80((RuntimeObject*)G_B12_1, G_B12_0, Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80_RuntimeMethod_var);
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_30 = L_29;
		G_B13_0 = L_30;
		G_B13_1 = G_B12_2;
		if (L_30)
		{
			G_B14_0 = L_30;
			G_B14_1 = G_B12_2;
			goto IL_00d1;
		}
	}
	{
		G_B15_0 = ((HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9*)(NULL));
		G_B15_1 = G_B13_1;
		goto IL_00d6;
	}

IL_00d1:
	{
		NullCheck(G_B14_0);
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_31;
		L_31 = Component_GetComponent_TisHVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9_m2A05DE5163BD6D4F15A66FAA2B13ABEE368A90FB(G_B14_0, Component_GetComponent_TisHVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9_m2A05DE5163BD6D4F15A66FAA2B13ABEE368A90FB_RuntimeMethod_var);
		G_B15_0 = L_31;
		G_B15_1 = G_B14_1;
	}

IL_00d6:
	{
		NullCheck(G_B15_1);
		G_B15_1->___LeftHand_20 = G_B15_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___LeftHand_20), (void*)G_B15_0);
	}

IL_00db:
	{
		// if (!RightHand) RightHand = Player.Root.GetComponentsInChildren<HVRHandGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Right)?.GetComponent<HVRJointHand>();
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_32 = __this->___RightHand_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_32, NULL);
		if (L_33)
		{
			goto IL_012e;
		}
	}
	{
		// if (!RightHand) RightHand = Player.Root.GetComponentsInChildren<HVRHandGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Right)?.GetComponent<HVRJointHand>();
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_34 = __this->___Player_4;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34->___Root_34;
		NullCheck(L_35);
		HVRHandGrabberU5BU5D_t690658B28276350833B942BC75EBCD9010FBFD0B* L_36;
		L_36 = Component_GetComponentsInChildren_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m781A92500338780EB953852750144E25813BBAFA(L_35, Component_GetComponentsInChildren_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m781A92500338780EB953852750144E25813BBAFA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_37 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_2_3;
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_38 = L_37;
		G_B18_0 = L_38;
		G_B18_1 = L_36;
		G_B18_2 = __this;
		if (L_38)
		{
			G_B19_0 = L_38;
			G_B19_1 = L_36;
			G_B19_2 = __this;
			goto IL_0118;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* L_39 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_40 = (Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03*)il2cpp_codegen_object_new(Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Func_2__ctor_m644C40A901702D19B041828F2E854855C51DFD0D(L_40, L_39, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__21_2_m6A23F5D8D3ED576D882505CC103824BF32F63195_RuntimeMethod_var), NULL);
		Func_2_tB2A9F71AE59470C627302BA30D19BF0F83EE9D03* L_41 = L_40;
		((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_2_3 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_2_3), (void*)L_41);
		G_B19_0 = L_41;
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
	}

IL_0118:
	{
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_42;
		L_42 = Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80((RuntimeObject*)G_B19_1, G_B19_0, Enumerable_FirstOrDefault_TisHVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90_m6F363CC91DC42A93D0F467C552C46C42561CBA80_RuntimeMethod_var);
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_43 = L_42;
		G_B20_0 = L_43;
		G_B20_1 = G_B19_2;
		if (L_43)
		{
			G_B21_0 = L_43;
			G_B21_1 = G_B19_2;
			goto IL_0124;
		}
	}
	{
		G_B22_0 = ((HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9*)(NULL));
		G_B22_1 = G_B20_1;
		goto IL_0129;
	}

IL_0124:
	{
		NullCheck(G_B21_0);
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_44;
		L_44 = Component_GetComponent_TisHVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9_m2A05DE5163BD6D4F15A66FAA2B13ABEE368A90FB(G_B21_0, Component_GetComponent_TisHVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9_m2A05DE5163BD6D4F15A66FAA2B13ABEE368A90FB_RuntimeMethod_var);
		G_B22_0 = L_44;
		G_B22_1 = G_B21_1;
	}

IL_0129:
	{
		NullCheck(G_B22_1);
		G_B22_1->___RightHand_21 = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___RightHand_21), (void*)G_B22_0);
	}

IL_012e:
	{
		// if(LeftHand) leftparent = LeftHand.transform.parent;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_45 = __this->___LeftHand_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_45, NULL);
		if (!L_46)
		{
			goto IL_0151;
		}
	}
	{
		// if(LeftHand) leftparent = LeftHand.transform.parent;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_47 = __this->___LeftHand_20;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_48, NULL);
		__this->___leftparent_22 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftparent_22), (void*)L_49);
	}

IL_0151:
	{
		// if(RightHand)rightParent = RightHand.transform.parent;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_50 = __this->___RightHand_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_50, NULL);
		if (!L_51)
		{
			goto IL_0174;
		}
	}
	{
		// if(RightHand)rightParent = RightHand.transform.parent;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_52 = __this->___RightHand_21;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_52, NULL);
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_53, NULL);
		__this->___rightParent_23 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightParent_23), (void*)L_54);
	}

IL_0174:
	{
		// UpdateSitStandButton();
		DemoUIManager_UpdateSitStandButton_m0DE12D8AF5E2CE56C8E076DBE79DB626BAD63B15(__this, NULL);
		// UpdateForceGrabButton();
		DemoUIManager_UpdateForceGrabButton_m5B4402A1501763E429323DEB30FC37C37C0AA4FC(__this, NULL);
		// TurnRateSlider.value = Player.SmoothTurnSpeed;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_55 = __this->___TurnRateSlider_12;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_56 = __this->___Player_4;
		NullCheck(L_56);
		float L_57 = L_56->___SmoothTurnSpeed_24;
		NullCheck(L_55);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_55, L_57);
		// SnapTurnSlider.value = Player.SnapAmount;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_58 = __this->___SnapTurnSlider_13;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_59 = __this->___Player_4;
		NullCheck(L_59);
		float L_60 = L_59->___SnapAmount_26;
		NullCheck(L_58);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_58, L_60);
		// TurnRateText.text = Player.SmoothTurnSpeed.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_61 = __this->___TurnRateText_14;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_62 = __this->___Player_4;
		NullCheck(L_62);
		float* L_63 = (&L_62->___SmoothTurnSpeed_24);
		String_t* L_64;
		L_64 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_63, NULL);
		NullCheck(L_61);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_61, L_64);
		// SnapRateText.text = Player.SnapAmount.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_65 = __this->___SnapRateText_15;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_66 = __this->___Player_4;
		NullCheck(L_66);
		float* L_67 = (&L_66->___SnapAmount_26);
		String_t* L_68;
		L_68 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_67, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_65, L_68);
		// SmoothTurnToggle.isOn = Player.RotationType == RotationType.Smooth;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_69 = __this->___SmoothTurnToggle_16;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_70 = __this->___Player_4;
		NullCheck(L_70);
		int32_t L_71 = L_70->___RotationType_23;
		NullCheck(L_69);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_69, (bool)((((int32_t)L_71) == ((int32_t)0))? 1 : 0), NULL);
		// LineGrabTrigger.isOn = HVRSettings.Instance.LineGrabTriggerLoose;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_72 = __this->___LineGrabTrigger_17;
		HVRSettings_tF57CCCAFB711DE66F81893E04363569A1C4AF080* L_73;
		L_73 = HVRSettings_get_Instance_m48BF8E761F7F920DA4546A918D14A06E65F3FC51(NULL);
		NullCheck(L_73);
		bool L_74 = L_73->___LineGrabTriggerLoose_39;
		NullCheck(L_72);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_72, L_74, NULL);
		// TurnRateSlider.onValueChanged.AddListener(OnTurnRateChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_75 = __this->___TurnRateSlider_12;
		NullCheck(L_75);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_76;
		L_76 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_75, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_77 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_77, __this, (intptr_t)((void*)DemoUIManager_OnTurnRateChanged_m0FB692D0F19F25A5E6B71DDE83BABFC96CBB62EC_RuntimeMethod_var), NULL);
		NullCheck(L_76);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_76, L_77, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// SnapTurnSlider.onValueChanged.AddListener(OnSnapTurnRateChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_78 = __this->___SnapTurnSlider_13;
		NullCheck(L_78);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_79;
		L_79 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_78, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_80 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_80, __this, (intptr_t)((void*)DemoUIManager_OnSnapTurnRateChanged_mFB0D670F5E3ED62AD52B288218CA4D8576D07F71_RuntimeMethod_var), NULL);
		NullCheck(L_79);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_79, L_80, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// SmoothTurnToggle.onValueChanged.AddListener(OnSmoothTurnChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_81 = __this->___SmoothTurnToggle_16;
		NullCheck(L_81);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_82 = L_81->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_83 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_83, __this, (intptr_t)((void*)DemoUIManager_OnSmoothTurnChanged_m31BB570E3C5DEC2659F976DC530043158243472A_RuntimeMethod_var), NULL);
		NullCheck(L_82);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_82, L_83, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// LineGrabTrigger.onValueChanged.AddListener(OnLineGrabTriggerChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_84 = __this->___LineGrabTrigger_17;
		NullCheck(L_84);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_85 = L_84->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_86 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_86, __this, (intptr_t)((void*)DemoUIManager_OnLineGrabTriggerChanged_m320D33BB893A9EFF156AFA8A2889F868F7F9E87F_RuntimeMethod_var), NULL);
		NullCheck(L_85);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_85, L_86, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// LeftForce = Player.transform.root.GetComponentsInChildren<HVRForceGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Left);
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_87 = __this->___Player_4;
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_87, NULL);
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_88, NULL);
		NullCheck(L_89);
		HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* L_90;
		L_90 = Component_GetComponentsInChildren_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m1EE97F1F36E7A096D4D1D15C7873FB5F381A9C04(L_89, Component_GetComponentsInChildren_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m1EE97F1F36E7A096D4D1D15C7873FB5F381A9C04_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_91 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_3_4;
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_92 = L_91;
		G_B28_0 = L_92;
		G_B28_1 = L_90;
		G_B28_2 = __this;
		if (L_92)
		{
			G_B29_0 = L_92;
			G_B29_1 = L_90;
			G_B29_2 = __this;
			goto IL_02b5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* L_93 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_94 = (Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E*)il2cpp_codegen_object_new(Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E_il2cpp_TypeInfo_var);
		NullCheck(L_94);
		Func_2__ctor_m886F1A4339DB7700A4EF7F7C8829EDCF0100D003(L_94, L_93, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__21_3_mE239525380D8EA93A3BB42A35E8299EF8622AED0_RuntimeMethod_var), NULL);
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_95 = L_94;
		((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_3_4 = L_95;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_3_4), (void*)L_95);
		G_B29_0 = L_95;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
	}

IL_02b5:
	{
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_96;
		L_96 = Enumerable_FirstOrDefault_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m36EDE03B4C61948E7224D32D08282DEDB9710BF6((RuntimeObject*)G_B29_1, G_B29_0, Enumerable_FirstOrDefault_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m36EDE03B4C61948E7224D32D08282DEDB9710BF6_RuntimeMethod_var);
		NullCheck(G_B29_2);
		G_B29_2->___LeftForce_18 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&G_B29_2->___LeftForce_18), (void*)L_96);
		// RightForce = Player.transform.root.GetComponentsInChildren<HVRForceGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Right);
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_97 = __this->___Player_4;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_97, NULL);
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_98, NULL);
		NullCheck(L_99);
		HVRForceGrabberU5BU5D_tE763F25BD52821C3C7C1EE06428E6C240A379C1F* L_100;
		L_100 = Component_GetComponentsInChildren_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m1EE97F1F36E7A096D4D1D15C7873FB5F381A9C04(L_99, Component_GetComponentsInChildren_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m1EE97F1F36E7A096D4D1D15C7873FB5F381A9C04_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_101 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_4_5;
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_102 = L_101;
		G_B30_0 = L_102;
		G_B30_1 = L_100;
		G_B30_2 = __this;
		if (L_102)
		{
			G_B31_0 = L_102;
			G_B31_1 = L_100;
			G_B31_2 = __this;
			goto IL_02f4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* L_103 = ((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_104 = (Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E*)il2cpp_codegen_object_new(Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		Func_2__ctor_m886F1A4339DB7700A4EF7F7C8829EDCF0100D003(L_104, L_103, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__21_4_m01861EEACC630E93DD62AFABB77EF3E344848CB0_RuntimeMethod_var), NULL);
		Func_2_t3CF3F6D9C2FA092FC6168FBFC2585A4CD683A16E* L_105 = L_104;
		((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_4_5 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9__21_4_5), (void*)L_105);
		G_B31_0 = L_105;
		G_B31_1 = G_B30_1;
		G_B31_2 = G_B30_2;
	}

IL_02f4:
	{
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_106;
		L_106 = Enumerable_FirstOrDefault_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m36EDE03B4C61948E7224D32D08282DEDB9710BF6((RuntimeObject*)G_B31_1, G_B31_0, Enumerable_FirstOrDefault_TisHVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191_m36EDE03B4C61948E7224D32D08282DEDB9710BF6_RuntimeMethod_var);
		NullCheck(G_B31_2);
		G_B31_2->___RightForce_19 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&G_B31_2->___RightForce_19), (void*)L_106);
		// UpdateLeftForceButton();
		DemoUIManager_UpdateLeftForceButton_m8B9C4ABB28889D5AF5A5C50538D72D9B61D45EA8(__this, NULL);
		// UpdateRightForceButton();
		DemoUIManager_UpdateRightForceButton_m6DFF444F15F15FFAE593DFEC3D2810A079C82487(__this, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnLineGrabTriggerChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnLineGrabTriggerChanged_m320D33BB893A9EFF156AFA8A2889F868F7F9E87F (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, bool ___arg00, const RuntimeMethod* method) 
{
	{
		// HVRSettings.Instance.LineGrabTriggerLoose = arg0;
		HVRSettings_tF57CCCAFB711DE66F81893E04363569A1C4AF080* L_0;
		L_0 = HVRSettings_get_Instance_m48BF8E761F7F920DA4546A918D14A06E65F3FC51(NULL);
		bool L_1 = ___arg00;
		NullCheck(L_0);
		L_0->___LineGrabTriggerLoose_39 = L_1;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::CalibrateHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_CalibrateHeight_m70FBEE639DC3417A639E401F771A1B07F08FFF65 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CameraRig)
		HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* L_0 = __this->___CameraRig_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CameraRig.Calibrate();
		HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* L_2 = __this->___CameraRig_5;
		NullCheck(L_2);
		HVRCameraRig_Calibrate_mBB0F2396A68FDC2D77AD91C9D7BAED4D79FC8EEF(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnSitStandClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnSitStandClicked_m4DD264BD6DEFFC191F7357BC2CBCB70F3EEDE4B5 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var index = (int)CameraRig.SitStanding;
		HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* L_0 = __this->___CameraRig_5;
		NullCheck(L_0);
		int32_t L_1 = L_0->___SitStanding_10;
		V_0 = L_1;
		// index++;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// if (index > 2)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		// index = 0;
		V_0 = 0;
	}

IL_0016:
	{
		// CameraRig.SetSitStandMode((HVRSitStand)index);
		HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* L_4 = __this->___CameraRig_5;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		HVRCameraRig_SetSitStandMode_mB608B71B6B30A7E15AB2A677148EC3890159A428(L_4, L_5, NULL);
		// UpdateSitStandButton();
		DemoUIManager_UpdateSitStandButton_m0DE12D8AF5E2CE56C8E076DBE79DB626BAD63B15(__this, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnForceGrabClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnForceGrabClicked_m48E839FFDE63A86B527D26FF16E40436D9D6BCDD (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var index = (int)Inputs.ForceGrabActivation;
		HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* L_0 = __this->___Inputs_6;
		NullCheck(L_0);
		int32_t L_1 = L_0->___ForceGrabActivation_6;
		V_0 = L_1;
		// index++;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// if (index > 1)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// index = 0;
		V_0 = 0;
	}

IL_0016:
	{
		// Inputs.ForceGrabActivation = (HVRForceGrabActivation)index;
		HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* L_4 = __this->___Inputs_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		L_4->___ForceGrabActivation_6 = L_5;
		// UpdateForceGrabButton();
		DemoUIManager_UpdateForceGrabButton_m5B4402A1501763E429323DEB30FC37C37C0AA4FC(__this, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateForceGrabButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateForceGrabButton_m5B4402A1501763E429323DEB30FC37C37C0AA4FC (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVRForceGrabActivation_t86B59B3C3DD57DAB045AB1434DA454128C566B11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ForceGrabText.text = Inputs.ForceGrabActivation.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___ForceGrabText_9;
		HVRPlayerInputs_t5FC827A4ADE172D3A9B53AAEB7D8C327D750D986* L_1 = __this->___Inputs_6;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___ForceGrabActivation_6);
		Il2CppFakeBox<int32_t> L_3(HVRForceGrabActivation_t86B59B3C3DD57DAB045AB1434DA454128C566B11_il2cpp_TypeInfo_var, L_2);
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateSitStandButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateSitStandButton_m0DE12D8AF5E2CE56C8E076DBE79DB626BAD63B15 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVRSitStand_tFDFC806490DC7323D9D9B9557ED7CC094C5BB80E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SitStandText.text = CameraRig.SitStanding.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___SitStandText_7;
		HVRCameraRig_tC98FBD46ACC6012DBA2DB94BD0D9E93E35AADC45* L_1 = __this->___CameraRig_5;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___SitStanding_10);
		Il2CppFakeBox<int32_t> L_3(HVRSitStand_tFDFC806490DC7323D9D9B9557ED7CC094C5BB80E_il2cpp_TypeInfo_var, L_2);
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnTurnRateChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnTurnRateChanged_m0FB692D0F19F25A5E6B71DDE83BABFC96CBB62EC (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, float ___rate0, const RuntimeMethod* method) 
{
	{
		// Player.SmoothTurnSpeed = rate;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_0 = __this->___Player_4;
		float L_1 = ___rate0;
		NullCheck(L_0);
		L_0->___SmoothTurnSpeed_24 = L_1;
		// TurnRateText.text = Player.SmoothTurnSpeed.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___TurnRateText_14;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_3 = __this->___Player_4;
		NullCheck(L_3);
		float* L_4 = (&L_3->___SmoothTurnSpeed_24);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnSnapTurnRateChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnSnapTurnRateChanged_mFB0D670F5E3ED62AD52B288218CA4D8576D07F71 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, float ___rate0, const RuntimeMethod* method) 
{
	{
		// Player.SnapAmount = rate;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_0 = __this->___Player_4;
		float L_1 = ___rate0;
		NullCheck(L_0);
		L_0->___SnapAmount_26 = L_1;
		// SnapRateText.text = Player.SnapAmount.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___SnapRateText_15;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_3 = __this->___Player_4;
		NullCheck(L_3);
		float* L_4 = (&L_3->___SnapAmount_26);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnSmoothTurnChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnSmoothTurnChanged_m31BB570E3C5DEC2659F976DC530043158243472A (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, bool ___smooth0, const RuntimeMethod* method) 
{
	HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* G_B2_0 = NULL;
	HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* G_B3_1 = NULL;
	{
		// Player.RotationType = smooth ? RotationType.Smooth : RotationType.Snap;
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_0 = __this->___Player_4;
		bool L_1 = ___smooth0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___RotationType_23 = G_B3_0;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnLeftForceGrabModeClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnLeftForceGrabModeClicked_m121A125D95C325B93C24B097E791C4BDB517D7C5 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LeftForce)
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_0 = __this->___LeftForce_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if (LeftForce.GrabStyle == HVRForceGrabMode.ForcePull)
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_2 = __this->___LeftForce_18;
		NullCheck(L_2);
		int32_t L_3 = L_2->___GrabStyle_39;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		// LeftForce.GrabStyle = HVRForceGrabMode.GravityGloves;
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_4 = __this->___LeftForce_18;
		NullCheck(L_4);
		L_4->___GrabStyle_39 = 0;
		goto IL_0035;
	}

IL_0029:
	{
		// LeftForce.GrabStyle = HVRForceGrabMode.ForcePull;
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_5 = __this->___LeftForce_18;
		NullCheck(L_5);
		L_5->___GrabStyle_39 = 1;
	}

IL_0035:
	{
		// UpdateLeftForceButton();
		DemoUIManager_UpdateLeftForceButton_m8B9C4ABB28889D5AF5A5C50538D72D9B61D45EA8(__this, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::OnRightForceGrabModeClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_OnRightForceGrabModeClicked_m1F88509523AAE9B488D5186A73417C26CD6E1C52 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RightForce)
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_0 = __this->___RightForce_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if (RightForce.GrabStyle == HVRForceGrabMode.ForcePull)
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_2 = __this->___RightForce_19;
		NullCheck(L_2);
		int32_t L_3 = L_2->___GrabStyle_39;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		// RightForce.GrabStyle = HVRForceGrabMode.GravityGloves;
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_4 = __this->___RightForce_19;
		NullCheck(L_4);
		L_4->___GrabStyle_39 = 0;
		goto IL_0035;
	}

IL_0029:
	{
		// RightForce.GrabStyle = HVRForceGrabMode.ForcePull;
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_5 = __this->___RightForce_19;
		NullCheck(L_5);
		L_5->___GrabStyle_39 = 1;
	}

IL_0035:
	{
		// UpdateRightForceButton();
		DemoUIManager_UpdateRightForceButton_m6DFF444F15F15FFAE593DFEC3D2810A079C82487(__this, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateLeftForceButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateLeftForceButton_m8B9C4ABB28889D5AF5A5C50538D72D9B61D45EA8 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVRForceGrabMode_tDABD5D127AD11D52F73886AA8E4F1FD96771461F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeftForceText.text = LeftForce.GrabStyle.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___LeftForceText_10;
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_1 = __this->___LeftForce_18;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___GrabStyle_39);
		Il2CppFakeBox<int32_t> L_3(HVRForceGrabMode_tDABD5D127AD11D52F73886AA8E4F1FD96771461F_il2cpp_TypeInfo_var, L_2);
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::UpdateRightForceButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_UpdateRightForceButton_m6DFF444F15F15FFAE593DFEC3D2810A079C82487 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HVRForceGrabMode_tDABD5D127AD11D52F73886AA8E4F1FD96771461F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RightForceText.text = RightForce.GrabStyle.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___RightForceText_11;
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_1 = __this->___RightForce_19;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___GrabStyle_39);
		Il2CppFakeBox<int32_t> L_3(HVRForceGrabMode_tDABD5D127AD11D52F73886AA8E4F1FD96771461F_il2cpp_TypeInfo_var, L_2);
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager_TogglePause_m2854B253EC8B7E5D429DDB691EE7F6BE33C13AEE (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4780AF940655CB59AF49F6344DA95EC30E32AA8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LeftHand && RightHand)
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_0 = __this->___LeftHand_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00cf;
		}
	}
	{
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_2 = __this->___RightHand_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_00cf;
		}
	}
	{
		// if (Paused)
		bool L_4 = __this->___Paused_24;
		if (!L_4)
		{
			goto IL_0070;
		}
	}
	{
		// PauseText.text = "Pause";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___PauseText_8;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// LeftHand.transform.parent = leftparent;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_6 = __this->___LeftHand_20;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___leftparent_22;
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// RightHand.transform.parent = rightParent;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_9 = __this->___RightHand_21;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___rightParent_23;
		NullCheck(L_10);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_10, L_11, NULL);
		goto IL_00c0;
	}

IL_0070:
	{
		// PauseText.text = "Unpause";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___PauseText_8;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, _stringLiteral4780AF940655CB59AF49F6344DA95EC30E32AA8A);
		// Time.timeScale = .00000001f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((9.99999994E-09f), NULL);
		// LeftHand.transform.parent = LeftHand.Target;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_13 = __this->___LeftHand_20;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_15 = __this->___LeftHand_20;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->___Target_12;
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, L_16, NULL);
		// RightHand.transform.parent = RightHand.Target;
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_17 = __this->___RightHand_21;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		HVRJointHand_t18F1F4E0DE4EFF6FA03D8EB3D9598F354EE0F7B9* L_19 = __this->___RightHand_21;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19->___Target_12;
		NullCheck(L_18);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_18, L_20, NULL);
	}

IL_00c0:
	{
		// Paused = !Paused;
		bool L_21 = __this->___Paused_24;
		__this->___Paused_24 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUIManager__ctor_m3ECDB0BDA62977CB377C4E5C760EC1E3038036C0 (DemoUIManager_t6995DD81E7EC02E55B74C24BE0A4BB5911D99693* __this, const RuntimeMethod* method) 
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7C7D850C79E25828E10785D313444B1044AAF315 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* L_0 = (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1*)il2cpp_codegen_object_new(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m7E8EFC8F80166E84CE42AFE1D865356E6AC47FB0(L_0, NULL);
		((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E8EFC8F80166E84CE42AFE1D865356E6AC47FB0 (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<Start>b__21_0(HurricaneVR.Framework.Core.Player.HVRPlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__21_0_m9792FEEA2F8FDFB1919474FE16253407475757E4 (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* __this, HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* ___e0, const RuntimeMethod* method) 
{
	{
		// Player = GameObject.FindObjectsOfType<HVRPlayerController>().FirstOrDefault(e => e.gameObject.activeInHierarchy);
		HVRPlayerController_t26A1DD9C40E8FC728A9145B43AA248B87DF528F0* L_0 = ___e0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
		return L_2;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<Start>b__21_1(HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__21_1_mEA168A4B643B3A9E9C38E34E44E992326D6C585D (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* __this, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___e0, const RuntimeMethod* method) 
{
	{
		// if (!LeftHand) LeftHand = Player.Root.GetComponentsInChildren<HVRHandGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Left)?.GetComponent<HVRJointHand>();
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___HandSide_37;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<Start>b__21_2(HurricaneVR.Framework.Core.Grabbers.HVRHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__21_2_m6A23F5D8D3ED576D882505CC103824BF32F63195 (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* __this, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___e0, const RuntimeMethod* method) 
{
	{
		// if (!RightHand) RightHand = Player.Root.GetComponentsInChildren<HVRHandGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Right)?.GetComponent<HVRJointHand>();
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___HandSide_37;
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<Start>b__21_3(HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__21_3_mE239525380D8EA93A3BB42A35E8299EF8622AED0 (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* __this, HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* ___e0, const RuntimeMethod* method) 
{
	{
		// LeftForce = Player.transform.root.GetComponentsInChildren<HVRForceGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Left);
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HVRForceGrabber_get_HandSide_mFC290484308210AD0F96C4503F5CCB494A609185(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoUIManager/<>c::<Start>b__21_4(HurricaneVR.Framework.Core.Grabbers.HVRForceGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__21_4_m01861EEACC630E93DD62AFABB77EF3E344848CB0 (U3CU3Ec_t383D1F8AB9C6F69CD3AF74822EE855A3F1B1E4D1* __this, HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* ___e0, const RuntimeMethod* method) 
{
	{
		// RightForce = Player.transform.root.GetComponentsInChildren<HVRForceGrabber>().FirstOrDefault(e => e.HandSide == HVRHandSide.Right);
		HVRForceGrabber_tD4C962011452998F4F3C4C7BC5FC6BF36A56B191* L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HVRForceGrabber_get_HandSide_mFC290484308210AD0F96C4503F5CCB494A609185(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveHologram::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveHologram_Start_mA42F8E98B2EA7364DD433ED09E6766C1CB36BDFF (DemoValveHologram_t438B846EB94B0089D63151778AFE3EE3F49D260A* __this, const RuntimeMethod* method) 
{
	{
		// _current = StartRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___StartRotation_5;
		__this->____current_7 = L_0;
		// _next = EndRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = __this->___EndRotation_6;
		__this->____next_8 = L_1;
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveHologram::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveHologram_Update_m6FC36AB4B208A3FB803ECA7C8D9520590D75945D (DemoValveHologram_t438B846EB94B0089D63151778AFE3EE3F49D260A* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _elapsed += Time.deltaTime;
		float L_0 = __this->____elapsed_9;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____elapsed_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (_elapsed > Interval)
		float L_2 = __this->____elapsed_9;
		float L_3 = __this->___Interval_4;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0045;
		}
	}
	{
		// var temp = _current;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->____current_7;
		V_0 = L_4;
		// _current = _next;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->____next_8;
		__this->____current_7 = L_5;
		// _next = temp;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		__this->____next_8 = L_6;
		// _elapsed = 0f;
		__this->____elapsed_9 = (0.0f);
	}

IL_0045:
	{
		// transform.localRotation = Quaternion.Lerp(_current, _next, _elapsed / Interval);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->____current_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->____next_8;
		float L_10 = __this->____elapsed_9;
		float L_11 = __this->___Interval_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_8, L_9, ((float)(L_10/L_11)), NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_12, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveHologram::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveHologram_Destroy_m4BBF6DAC6D7D00C66583B0245C1F0E6727BB9EF5 (DemoValveHologram_t438B846EB94B0089D63151778AFE3EE3F49D260A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveHologram::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveHologram__ctor_mBC7CEE3C09CBF978673357DEF56419BD002D4E2F (DemoValveHologram_t438B846EB94B0089D63151778AFE3EE3F49D260A* __this, const RuntimeMethod* method) 
{
	{
		// public float Interval = .2f;
		__this->___Interval_4 = (0.200000003f);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveLock_Start_m23D4F9D8419B9001DDB358169889E1736C72BFF6 (DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoValveLock_OnValveGrabbed_m858CAF44B4B0182F26D2F27141ED695C83D613C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Socket = GetComponent<DemoPassthroughSocket>();
		DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* L_0;
		L_0 = Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8(__this, Component_GetComponent_TisDemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3_m3F66B774E9139F21C1B324DA26A053E849E360F8_RuntimeMethod_var);
		__this->___Socket_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Socket_4), (void*)L_0);
		// Socket.Grabbed.AddListener(OnValveGrabbed);
		DemoPassthroughSocket_t24713938A3C6DCD858E22F671E74963B3274ADF3* L_1 = __this->___Socket_4;
		NullCheck(L_1);
		VRGrabberEvent_t2713C2DF3B8DA12A163C59D07B42A39AEA560F6C* L_2 = ((HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6*)L_1)->___Grabbed_5;
		UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED* L_3 = (UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED*)il2cpp_codegen_object_new(UnityAction_2_tEB35C2416BBA906661E576A7D262CF6460145EED_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_2__ctor_mF45134DBC67C479BA0F32E844D3400071AF4205D(L_3, __this, (intptr_t)((void*)DemoValveLock_OnValveGrabbed_m858CAF44B4B0182F26D2F27141ED695C83D613C2_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626(L_2, L_3, UnityEvent_2_AddListener_m5712BF8841CA269C2837A109B704B284484F0626_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveLock_Update_m6F6AEE3F5D5BE1D8F5372222F6E195A72C96A673 (DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock::OnValveGrabbed(HurricaneVR.Framework.Core.Grabbers.HVRGrabberBase,HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveLock_OnValveGrabbed_m858CAF44B4B0182F26D2F27141ED695C83D613C2 (DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* __this, HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* ___grabber0, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key1, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(MoveKey(key));
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = ___key1;
		RuntimeObject* L_1;
		L_1 = DemoValveLock_MoveKey_mDB1EA1EB573A2719F6663D32BE405EB355BC0A0B(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator HurricaneVR.TechDemo.Scripts.DemoValveLock::MoveKey(HurricaneVR.Framework.Core.HVRGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoValveLock_MoveKey_mDB1EA1EB573A2719F6663D32BE405EB355BC0A0B (DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* __this, HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* L_0 = (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20*)il2cpp_codegen_object_new(U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveKeyU3Ed__6__ctor_m525627C5077A09DC20DB497E86A608DE0717C5A1(L_0, 0, NULL);
		U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* L_2 = L_1;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_3 = ___key0;
		NullCheck(L_2);
		L_2->___key_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___key_2), (void*)L_3);
		return L_2;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoValveLock__ctor_m6D539C9EB6909BBD7E3F03DAD061D87F917F991D (DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* __this, const RuntimeMethod* method) 
{
	{
		// public float AnimationTime = 1f;
		__this->___AnimationTime_6 = (1.0f);
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
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__6__ctor_m525627C5077A09DC20DB497E86A608DE0717C5A1 (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__6_System_IDisposable_Dispose_m4FCD6D77239898146856B737F565C6EC9C3E25A6 (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveKeyU3Ed__6_MoveNext_m3B6B78E626B52E4A29C471414E842F2D22D75B77 (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ef;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var start = key.transform.position;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_4 = __this->___key_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___U3CstartU3E5__2_4 = L_6;
		// var startRot = key.transform.rotation;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_7 = __this->___key_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		__this->___U3CstartRotU3E5__3_5 = L_9;
		// var elapsed = 0f;
		__this->___U3CelapsedU3E5__4_6 = (0.0f);
		goto IL_00f6;
	}

IL_005d:
	{
		// key.transform.position = Vector3.Lerp(start, FaceGrabbable.transform.position, elapsed / AnimationTime);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_10 = __this->___key_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___U3CstartU3E5__2_4;
		DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* L_13 = V_1;
		NullCheck(L_13);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_14 = L_13->___FaceGrabbable_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = __this->___U3CelapsedU3E5__4_6;
		DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___AnimationTime_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_12, L_16, ((float)(L_17/L_19)), NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_20, NULL);
		// key.transform.rotation = Quaternion.Lerp(startRot, FaceGrabbable.transform.rotation, elapsed / AnimationTime);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_21 = __this->___key_2;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = __this->___U3CstartRotU3E5__3_5;
		DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* L_24 = V_1;
		NullCheck(L_24);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_25 = L_24->___FaceGrabbable_5;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_26, NULL);
		float L_28 = __this->___U3CelapsedU3E5__4_6;
		DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->___AnimationTime_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_23, L_27, ((float)(L_28/L_30)), NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_31, NULL);
		// elapsed += Time.deltaTime;
		float L_32 = __this->___U3CelapsedU3E5__4_6;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__4_6 = ((float)il2cpp_codegen_add(L_32, L_33));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ef:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f6:
	{
		// while (elapsed < AnimationTime)
		float L_34 = __this->___U3CelapsedU3E5__4_6;
		DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* L_35 = V_1;
		NullCheck(L_35);
		float L_36 = L_35->___AnimationTime_6;
		if ((((float)L_34) < ((float)L_36)))
		{
			goto IL_005d;
		}
	}
	{
		// FaceGrabbable.gameObject.SetActive(true);
		DemoValveLock_t614BF58051BB6627977C0524283D78F489E238D5* L_37 = V_1;
		NullCheck(L_37);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_38 = L_37->___FaceGrabbable_5;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
		// Destroy(key.gameObject);
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_40 = __this->___key_2;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_41, NULL);
		// }
		return (bool)0;
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveKeyU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDF884E598E40B64CC27BE1C7632DCACE92ED815E (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__6_System_Collections_IEnumerator_Reset_mBEE202005FBB72AD21B5D0D25772B6DA9BA85EB8 (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveKeyU3Ed__6_System_Collections_IEnumerator_Reset_mBEE202005FBB72AD21B5D0D25772B6DA9BA85EB8_RuntimeMethod_var)));
	}
}
// System.Object HurricaneVR.TechDemo.Scripts.DemoValveLock/<MoveKey>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveKeyU3Ed__6_System_Collections_IEnumerator_get_Current_mDBD4DC293BD59038AE18D2B25A4A4EDFAB935398 (U3CMoveKeyU3Ed__6_tF24BF8BC7CCB38713BE7449AECD1759D9E590E20* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Hammering_getChanged_m0F51E45D74986D76151601E6239A87F18BACFA3A_inline (Hammering_t07AC5774208B07A6AB7A4CF92906ACE25FCE16AE* __this, const RuntimeMethod* method) 
{
	{
		// return _changed;
		bool L_0 = __this->____changed_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Heating_getHeated_mA46EE152E905F784C1DADD913883BA84D51B67E3_inline (Heating_tE32D620156345A5AE72C36939DD196BA1F6D320A* __this, const RuntimeMethod* method) 
{
	{
		// return _heated;
		bool L_0 = __this->____heated_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HVRController_get_ControllerType_m6E21BCC53B5C1541DF09925B8827F25C51C97F19_inline (HVRController_t586C2855136C920C1DA9C7BE1B4EF89EF2EA6CF0* __this, const RuntimeMethod* method) 
{
	{
		// public HVRControllerType ControllerType { get; set; }
		int32_t L_0 = __this->___U3CControllerTypeU3Ek__BackingField_62;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* HVRGrabbable_get_Colliders_m9FAECB873DAB546F07C20FA1F9B358B827E8BE56_inline (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, const RuntimeMethod* method) 
{
	{
		// public List<Collider> Colliders { get; private set; } = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = __this->___U3CCollidersU3Ek__BackingField_80;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoCodeGrabbing_set_Grabber_m581F72DD78C4C851E89CE9F1A54B8FD1267F2DA2_inline (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* ___value0, const RuntimeMethod* method) 
{
	{
		// public HVRHandGrabber Grabber { get; set; }
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = ___value0;
		__this->___U3CGrabberU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGrabberU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* DemoCodeGrabbing_get_Grabber_mCE609B4588CEFD6499A88FACA739510214C45115_inline (DemoCodeGrabbing_t46EA9C851EC8245D4E49E0C4554C2F8D29EBDA64* __this, const RuntimeMethod* method) 
{
	{
		// public HVRHandGrabber Grabber { get; set; }
		HVRHandGrabber_t9CB7C31300D3D84C4E564C643D0BF501EBB16B90* L_0 = __this->___U3CGrabberU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* HVRGrabberBase_get_GrabbedTarget_mFDB57924F7548AC8F61E68367260AE10AC4360C8_inline (HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* __this, const RuntimeMethod* method) 
{
	{
		// get => _grabbedTarget;
		HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* L_0 = __this->____grabbedTarget_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HVRGrabberBase_get_IsGrabbing_mD75101D8BCF25BFF7DC3B3F0B99458621AEA76D1_inline (HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGrabbing { get; private set; }
		bool L_0 = __this->___U3CIsGrabbingU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* SFXPlayer_get_Instance_m4D3AE1620BA42D46607328B25EAA0569B49CCBD5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SFXPlayer Instance => s_Instance;
		SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165* L_0 = ((SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165_StaticFields*)il2cpp_codegen_static_fields_for(SFXPlayer_t6916F8692A74B19A33C44C40C773635DF91B5165_il2cpp_TypeInfo_var))->___s_Instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HVRRotationTracker_get_Angle_m1D919D4DEF1339D92F6907FE246C8990C7444AD0_inline (HVRRotationTracker_tF6E4B67021F9D4DDF5D3C949CDA8DD2B8B24B067* __this, const RuntimeMethod* method) 
{
	{
		// public float Angle { get; private set; }
		float L_0 = __this->___U3CAngleU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResetState_set_Scale_mFB3593A7EABD55C5324569C5C2A902E13B32CFD4_inline (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CScaleU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ResetState_get_Scale_m7197835938A1846CB38BC5F2E81F51CEC5B82847_inline (ResetState_tAFBAB543240EB46509B0E797F634967E31055A9C* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Scale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CScaleU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HVRGrabbable_set_CanBeGrabbed_mFBBB3A580517AF2FFE98469BF542624776E6DB52_inline (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanBeGrabbed { get; set; } = true;
		bool L_0 = ___value0;
		__this->___U3CCanBeGrabbedU3Ek__BackingField_79 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoManualTeleport_set_Teleporter_mA1E248E8F552FB0D684491E246633CB446CA8170_inline (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* ___value0, const RuntimeMethod* method) 
{
	{
		// public HVRTeleporter Teleporter { get; set; }
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_0 = ___value0;
		__this->___U3CTeleporterU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTeleporterU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* DemoManualTeleport_get_Teleporter_m44158E0CD2821BD9ECAA179A993234BDC3DD31FA_inline (DemoManualTeleport_t894CA65F72D5C43AADAB63A8E4AEB4A2C543F9B1* __this, const RuntimeMethod* method) 
{
	{
		// public HVRTeleporter Teleporter { get; set; }
		HVRTeleporter_t4FEDF3056BB66BE634DBCE3F3E6AD75C460F63B7* L_0 = __this->___U3CTeleporterU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HVRGrabberBase_set_AllowHovering_m54544F6D19C71F8BF7213D1EA52C7FBA9D46B30D_inline (HVRGrabberBase_tBEE8D8D0A2D3CBC0BB8DDA86DAB5B34CF3A4CEF6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AllowHovering { get; set; }
		bool L_0 = ___value0;
		__this->___U3CAllowHoveringU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F* HVRGrabbable_get_Socketable_mEA601564D88587F9F74134E84A7EBBCB97A367E9_inline (HVRGrabbable_tC5E7380624392C1F4EB5BEA99BF9C187D151C0DE* __this, const RuntimeMethod* method) 
{
	{
		// public HVRSocketable Socketable { get; private set; }
		HVRSocketable_t0CCE2C7710A7C7F66EC05482831E56FB949A094F* L_0 = __this->___U3CSocketableU3Ek__BackingField_88;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DemoSafeDial_get_State_mEE79B1B788CEEC95CD248FBE8C9E4D8ED0848F02_inline (DemoSafeDial_tF6E48E30C762162DD0F1DD958CA9A22EA497D83E* __this, const RuntimeMethod* method) 
{
	{
		// get { return _state; }
		int32_t L_0 = __this->____state_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

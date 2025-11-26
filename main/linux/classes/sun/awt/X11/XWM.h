#ifndef _sun_awt_X11_XWM_h_
#define _sun_awt_X11_XWM_h_
//$ class sun.awt.X11.XWM
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AWT_NET_N_KNOWN_STATES")
#undef AWT_NET_N_KNOWN_STATES
#pragma push_macro("CDE_WM")
#undef CDE_WM
#pragma push_macro("COMPIZ_WM")
#undef COMPIZ_WM
#pragma push_macro("CWM_WM")
#undef CWM_WM
#pragma push_macro("ENLIGHTEN_WM")
#undef ENLIGHTEN_WM
#pragma push_macro("ICE_WM")
#undef ICE_WM
#pragma push_macro("KDE2_WM")
#undef KDE2_WM
#pragma push_macro("LG3D_WM")
#undef LG3D_WM
#pragma push_macro("METACITY_WM")
#undef METACITY_WM
#pragma push_macro("MOTIF_WM")
#undef MOTIF_WM
#pragma push_macro("MUTTER_WM")
#undef MUTTER_WM
#pragma push_macro("NO_WM")
#undef NO_WM
#pragma push_macro("OPENLOOK_WM")
#undef OPENLOOK_WM
#pragma push_macro("OTHER_WM")
#undef OTHER_WM
#pragma push_macro("SAWFISH_WM")
#undef SAWFISH_WM
#pragma push_macro("UNDETERMINED_WM")
#undef UNDETERMINED_WM
#pragma push_macro("UNITY_COMPIZ_WM")
#undef UNITY_COMPIZ_WM
#pragma push_macro("WMID")
#undef WMID
#pragma push_macro("XA_DT_SM_STATE_INFO")
#undef XA_DT_SM_STATE_INFO
#pragma push_macro("XA_DT_SM_WINDOW_INFO")
#undef XA_DT_SM_WINDOW_INFO
#pragma push_macro("XA_DT_WORKSPACE_CURRENT")
#undef XA_DT_WORKSPACE_CURRENT
#pragma push_macro("XA_ENLIGHTENMENT_COMMS")
#undef XA_ENLIGHTENMENT_COMMS
#pragma push_macro("XA_E_FRAME_SIZE")
#undef XA_E_FRAME_SIZE
#pragma push_macro("XA_ICEWM_WINOPTHINT")
#undef XA_ICEWM_WINOPTHINT
#pragma push_macro("XA_KDE_NET_WM_FRAME_STRUT")
#undef XA_KDE_NET_WM_FRAME_STRUT
#pragma push_macro("XA_KWM_WIN_ICONIFIED")
#undef XA_KWM_WIN_ICONIFIED
#pragma push_macro("XA_KWM_WIN_MAXIMIZED")
#undef XA_KWM_WIN_MAXIMIZED
#pragma push_macro("XA_MOTIF_WM_INFO")
#undef XA_MOTIF_WM_INFO
#pragma push_macro("XA_MWM_HINTS")
#undef XA_MWM_HINTS
#pragma push_macro("XA_NET_FRAME_EXTENTS")
#undef XA_NET_FRAME_EXTENTS
#pragma push_macro("XA_NET_REQUEST_FRAME_EXTENTS")
#undef XA_NET_REQUEST_FRAME_EXTENTS
#pragma push_macro("XA_OL_DECOR_CLOSE")
#undef XA_OL_DECOR_CLOSE
#pragma push_macro("XA_OL_DECOR_DEL")
#undef XA_OL_DECOR_DEL
#pragma push_macro("XA_OL_DECOR_HEADER")
#undef XA_OL_DECOR_HEADER
#pragma push_macro("XA_OL_DECOR_PIN")
#undef XA_OL_DECOR_PIN
#pragma push_macro("XA_OL_DECOR_RESIZE")
#undef XA_OL_DECOR_RESIZE
#pragma push_macro("XA_SUN_WM_PROTOCOLS")
#undef XA_SUN_WM_PROTOCOLS
#pragma push_macro("XA_UTF8_STRING")
#undef XA_UTF8_STRING
#pragma push_macro("XA_WM_STATE")
#undef XA_WM_STATE
#pragma push_macro("XWM")
#undef XWM

namespace java {
	namespace awt {
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class WindowDimensions;
			class XAtom;
			class XDecoratedPeer;
			class XErrorHandler;
			class XNETProtocol;
			class XPropertyEvent;
			class XWINProtocol;
			class XWindow;
			class XWindowAttributes;
			class XWindowPeer;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWM : public ::java::lang::Object {
	$class(XWM, 0, ::java::lang::Object)
public:
	XWM();
	void init$(int32_t WMID);
	void addProtocol($Class* protocolInterface, Object$* protocol);
	static bool configureGravityBuggy();
	static int64_t getECommsWindowIDProperty(int64_t window);
	int32_t getExtendedState(::sun::awt::X11::XWindowPeer* window);
	int32_t getID();
	::java::awt::Insets* getInsets(::sun::awt::X11::XDecoratedPeer* win, int64_t window, int64_t parent);
	static ::java::awt::Insets* getInsetsFromExtents(int64_t window);
	static ::java::awt::Insets* getInsetsFromProp(int64_t window, ::sun::awt::X11::XAtom* atom);
	::sun::awt::X11::XNETProtocol* getNETProtocol();
	::java::util::Collection* getProtocols($Class* protocolInterface);
	int32_t getState(::sun::awt::X11::XDecoratedPeer* window);
	static ::sun::awt::X11::XWM* getWM();
	static int32_t getWMID();
	::java::awt::Insets* guessInsets(::sun::awt::X11::XDecoratedPeer* window);
	static void init();
	static void initAtoms();
	void initializeProtocols();
	static bool isCDE();
	static bool isCWM();
	static bool isCompiz();
	bool isDesktopWindow(int64_t w);
	static bool isEnlightenment();
	static bool isIceWM();
	static bool isKDE2();
	static bool isLookingGlass();
	static bool isMetacity();
	static bool isMotif();
	static bool isMutter();
	static bool isNetWMName($String* name);
	static bool isNoWM();
	static bool isNonReparentingWM();
	static bool isOpenLook();
	static bool isSawfish();
	bool isStateChange(::sun::awt::X11::XDecoratedPeer* window, ::sun::awt::X11::XPropertyEvent* e);
	static bool isUnityCompiz();
	static bool needRemap(::sun::awt::X11::XDecoratedPeer* window);
	static ::java::awt::Insets* normalize(::java::awt::Insets* insets);
	static int32_t normalizeMotifDecor(int32_t decorations);
	static int32_t normalizeMotifFunc(int32_t functions);
	static bool prepareIsIceWM();
	static void removeSizeHints(::sun::awt::X11::XDecoratedPeer* window, int64_t mask);
	static void requestWMExtents(int64_t window);
	void setExtendedState(::sun::awt::X11::XWindowPeer* window, int32_t state);
	void setLayer(::sun::awt::X11::XWindowPeer* window, int32_t layer);
	static void setMotifDecor(::sun::awt::X11::XWindow* window, bool resizable, int32_t decorations, int32_t functions);
	bool setNetWMIcon(::sun::awt::X11::XWindowPeer* window, ::java::util::List* icons);
	static void setOLDecor(::sun::awt::X11::XWindow* window, bool resizable, int32_t decorations);
	static void setShellDecor(::sun::awt::X11::XDecoratedPeer* window);
	static void setShellNotResizable(::sun::awt::X11::XDecoratedPeer* window, ::sun::awt::X11::WindowDimensions* newDimensions, ::java::awt::Rectangle* shellBounds, bool justChangeSize);
	static void setShellResizable(::sun::awt::X11::XDecoratedPeer* window);
	bool supportsDynamicLayout();
	bool supportsExtendedState(int32_t state);
	bool syncTopLevelPos(int64_t window, ::sun::awt::X11::XWindowAttributes* attrs);
	virtual $String* toString() override;
	void unshadeKludge(::sun::awt::X11::XDecoratedPeer* window);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* insLog;
	static ::sun::util::logging::PlatformLogger* stateLog;
	static ::sun::awt::X11::XAtom* XA_MWM_HINTS;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static ::sun::awt::X11::XAtom* XA_WM_STATE;
	::sun::awt::X11::XAtom* XA_UTF8_STRING = nullptr;
	static const int32_t AWT_NET_N_KNOWN_STATES = 2;
	static ::sun::awt::X11::XAtom* XA_E_FRAME_SIZE;
	static ::sun::awt::X11::XAtom* XA_KDE_NET_WM_FRAME_STRUT;
	static ::sun::awt::X11::XAtom* XA_KWM_WIN_ICONIFIED;
	static ::sun::awt::X11::XAtom* XA_KWM_WIN_MAXIMIZED;
	static ::sun::awt::X11::XAtom* XA_OL_DECOR_DEL;
	static ::sun::awt::X11::XAtom* XA_OL_DECOR_HEADER;
	static ::sun::awt::X11::XAtom* XA_OL_DECOR_RESIZE;
	static ::sun::awt::X11::XAtom* XA_OL_DECOR_PIN;
	static ::sun::awt::X11::XAtom* XA_OL_DECOR_CLOSE;
	static ::sun::awt::X11::XAtom* XA_NET_FRAME_EXTENTS;
	static ::sun::awt::X11::XAtom* XA_NET_REQUEST_FRAME_EXTENTS;
	static const int32_t UNDETERMINED_WM = 1;
	static const int32_t NO_WM = 2;
	static const int32_t OTHER_WM = 3;
	static const int32_t OPENLOOK_WM = 4;
	static const int32_t MOTIF_WM = 5;
	static const int32_t CDE_WM = 6;
	static const int32_t ENLIGHTEN_WM = 7;
	static const int32_t KDE2_WM = 8;
	static const int32_t SAWFISH_WM = 9;
	static const int32_t ICE_WM = 10;
	static const int32_t METACITY_WM = 11;
	static const int32_t COMPIZ_WM = 12;
	static const int32_t LG3D_WM = 13;
	static const int32_t CWM_WM = 14;
	static const int32_t MUTTER_WM = 15;
	static const int32_t UNITY_COMPIZ_WM = 16;
	int32_t WMID = 0;
	static ::java::awt::Insets* zeroInsets;
	static ::java::awt::Insets* defaultInsets;
	static ::sun::awt::X11::XNETProtocol* g_net_protocol;
	static ::sun::awt::X11::XWINProtocol* g_win_protocol;
	static ::sun::awt::X11::XAtom* XA_ENLIGHTENMENT_COMMS;
	static ::sun::awt::X11::XAtom* XA_DT_SM_WINDOW_INFO;
	static ::sun::awt::X11::XAtom* XA_DT_SM_STATE_INFO;
	static ::sun::awt::X11::XAtom* XA_MOTIF_WM_INFO;
	static ::sun::awt::X11::XAtom* XA_DT_WORKSPACE_CURRENT;
	static int32_t awtWMNonReparenting;
	static ::sun::awt::X11::XAtom* XA_ICEWM_WINOPTHINT;
	static $chars* opt;
	static ::sun::awt::X11::XAtom* XA_SUN_WM_PROTOCOLS;
	static bool winmgr_running;
	static ::sun::awt::X11::XErrorHandler* detectWMHandler;
	static int32_t awt_wmgr;
	static ::sun::awt::X11::XWM* wm;
	::java::util::HashMap* protocolsMap = nullptr;
	static bool inited;
	::java::util::HashMap* storedInsets = nullptr;
	static int32_t awtWMStaticGravity;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("AWT_NET_N_KNOWN_STATES")
#pragma pop_macro("CDE_WM")
#pragma pop_macro("COMPIZ_WM")
#pragma pop_macro("CWM_WM")
#pragma pop_macro("ENLIGHTEN_WM")
#pragma pop_macro("ICE_WM")
#pragma pop_macro("KDE2_WM")
#pragma pop_macro("LG3D_WM")
#pragma pop_macro("METACITY_WM")
#pragma pop_macro("MOTIF_WM")
#pragma pop_macro("MUTTER_WM")
#pragma pop_macro("NO_WM")
#pragma pop_macro("OPENLOOK_WM")
#pragma pop_macro("OTHER_WM")
#pragma pop_macro("SAWFISH_WM")
#pragma pop_macro("UNDETERMINED_WM")
#pragma pop_macro("UNITY_COMPIZ_WM")
#pragma pop_macro("WMID")
#pragma pop_macro("XA_DT_SM_STATE_INFO")
#pragma pop_macro("XA_DT_SM_WINDOW_INFO")
#pragma pop_macro("XA_DT_WORKSPACE_CURRENT")
#pragma pop_macro("XA_ENLIGHTENMENT_COMMS")
#pragma pop_macro("XA_E_FRAME_SIZE")
#pragma pop_macro("XA_ICEWM_WINOPTHINT")
#pragma pop_macro("XA_KDE_NET_WM_FRAME_STRUT")
#pragma pop_macro("XA_KWM_WIN_ICONIFIED")
#pragma pop_macro("XA_KWM_WIN_MAXIMIZED")
#pragma pop_macro("XA_MOTIF_WM_INFO")
#pragma pop_macro("XA_MWM_HINTS")
#pragma pop_macro("XA_NET_FRAME_EXTENTS")
#pragma pop_macro("XA_NET_REQUEST_FRAME_EXTENTS")
#pragma pop_macro("XA_OL_DECOR_CLOSE")
#pragma pop_macro("XA_OL_DECOR_DEL")
#pragma pop_macro("XA_OL_DECOR_HEADER")
#pragma pop_macro("XA_OL_DECOR_PIN")
#pragma pop_macro("XA_OL_DECOR_RESIZE")
#pragma pop_macro("XA_SUN_WM_PROTOCOLS")
#pragma pop_macro("XA_UTF8_STRING")
#pragma pop_macro("XA_WM_STATE")
#pragma pop_macro("XWM")

#endif // _sun_awt_X11_XWM_h_
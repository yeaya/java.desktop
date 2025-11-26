#ifndef _sun_awt_X11_XNETProtocol_h_
#define _sun_awt_X11_XNETProtocol_h_
//$ class sun.awt.X11.XNETProtocol
//$ extends sun.awt.X11.XProtocol
//$ implements sun.awt.X11.XStateProtocol,sun.awt.X11.XLayerProtocol

#include <sun/awt/X11/XLayerProtocol.h>
#include <sun/awt/X11/XProtocol.h>
#include <sun/awt/X11/XStateProtocol.h>

#pragma push_macro("XA_NET_ACTIVE_WINDOW")
#undef XA_NET_ACTIVE_WINDOW
#pragma push_macro("XA_NET_SUPPORTED")
#undef XA_NET_SUPPORTED
#pragma push_macro("XA_NET_SUPPORTING_WM_CHECK")
#undef XA_NET_SUPPORTING_WM_CHECK
#pragma push_macro("XA_NET_WM_NAME")
#undef XA_NET_WM_NAME
#pragma push_macro("XA_NET_WM_STATE")
#undef XA_NET_WM_STATE
#pragma push_macro("XA_NET_WM_STATE_ABOVE")
#undef XA_NET_WM_STATE_ABOVE
#pragma push_macro("XA_NET_WM_STATE_BELOW")
#undef XA_NET_WM_STATE_BELOW
#pragma push_macro("XA_NET_WM_STATE_FULLSCREEN")
#undef XA_NET_WM_STATE_FULLSCREEN
#pragma push_macro("XA_NET_WM_STATE_HIDDEN")
#undef XA_NET_WM_STATE_HIDDEN
#pragma push_macro("XA_NET_WM_STATE_MAXIMIZED_HORZ")
#undef XA_NET_WM_STATE_MAXIMIZED_HORZ
#pragma push_macro("XA_NET_WM_STATE_MAXIMIZED_VERT")
#undef XA_NET_WM_STATE_MAXIMIZED_VERT
#pragma push_macro("XA_NET_WM_STATE_MODAL")
#undef XA_NET_WM_STATE_MODAL
#pragma push_macro("XA_NET_WM_STATE_SHADED")
#undef XA_NET_WM_STATE_SHADED
#pragma push_macro("XA_NET_WM_STATE_SKIP_PAGER")
#undef XA_NET_WM_STATE_SKIP_PAGER
#pragma push_macro("XA_NET_WM_STATE_SKIP_TASKBAR")
#undef XA_NET_WM_STATE_SKIP_TASKBAR
#pragma push_macro("XA_NET_WM_WINDOW_OPACITY")
#undef XA_NET_WM_WINDOW_OPACITY
#pragma push_macro("XA_NET_WM_WINDOW_TYPE")
#undef XA_NET_WM_WINDOW_TYPE
#pragma push_macro("XA_NET_WM_WINDOW_TYPE_DIALOG")
#undef XA_NET_WM_WINDOW_TYPE_DIALOG
#pragma push_macro("XA_NET_WM_WINDOW_TYPE_NORMAL")
#undef XA_NET_WM_WINDOW_TYPE_NORMAL
#pragma push_macro("XA_NET_WM_WINDOW_TYPE_POPUP_MENU")
#undef XA_NET_WM_WINDOW_TYPE_POPUP_MENU
#pragma push_macro("XA_NET_WM_WINDOW_TYPE_UTILITY")
#undef XA_NET_WM_WINDOW_TYPE_UTILITY
#pragma push_macro("XA_UTF8_STRING")
#undef XA_UTF8_STRING
#pragma push_macro("_NET_WM_STATE_ADD")
#undef _NET_WM_STATE_ADD
#pragma push_macro("_NET_WM_STATE_REMOVE")
#undef _NET_WM_STATE_REMOVE
#pragma push_macro("_NET_WM_STATE_TOGGLE")
#undef _NET_WM_STATE_TOGGLE

namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XPropertyEvent;
			class XWindow;
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

class XNETProtocol : public ::sun::awt::X11::XProtocol, public ::sun::awt::X11::XStateProtocol, public ::sun::awt::X11::XLayerProtocol {
	$class(XNETProtocol, 0, ::sun::awt::X11::XProtocol, ::sun::awt::X11::XStateProtocol, ::sun::awt::X11::XLayerProtocol)
public:
	XNETProtocol();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	bool active();
	void detect();
	bool doLayerProtocol();
	bool doModalityProtocol();
	bool doOpacityProtocol();
	bool doStateProtocol();
	virtual int32_t getState(::sun::awt::X11::XWindowPeer* window) override;
	int32_t getStateImpl(::sun::awt::X11::XWindowPeer* window);
	$String* getWMName();
	virtual bool isStateChange(::sun::awt::X11::XPropertyEvent* e) override;
	bool isWMName($String* name);
	bool isWMStateNetHidden(::sun::awt::X11::XWindowPeer* window);
	void requestState(::sun::awt::X11::XWindowPeer* window, int32_t state);
	void requestState(::sun::awt::X11::XWindow* window, ::sun::awt::X11::XAtom* state, bool isAdd);
	void setActiveWindow(int64_t window);
	void setInitialState(::sun::awt::X11::XWindowPeer* window, int32_t state);
	virtual void setLayer(::sun::awt::X11::XWindowPeer* window, int32_t layer) override;
	virtual void setState(::sun::awt::X11::XWindowPeer* window, int32_t state) override;
	void setStateHelper(::sun::awt::X11::XWindowPeer* window, ::sun::awt::X11::XAtom* state, bool set);
	void setWMIcons(::sun::awt::X11::XWindowPeer* window, ::java::util::List* icons);
	virtual bool supportsLayer(int32_t layer) override;
	virtual bool supportsState(int32_t state) override;
	virtual $String* toString() override;
	virtual void unshadeKludge(::sun::awt::X11::XWindowPeer* window) override;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* iconLog;
	static ::sun::util::logging::PlatformLogger* stateLog;
	::sun::awt::X11::XAtom* XA_UTF8_STRING = nullptr;
	::sun::awt::X11::XAtom* XA_NET_SUPPORTING_WM_CHECK = nullptr;
	::sun::awt::X11::XAtom* XA_NET_SUPPORTED = nullptr;
	::sun::awt::X11::XAtom* XA_NET_ACTIVE_WINDOW = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_NAME = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_MAXIMIZED_HORZ = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_MAXIMIZED_VERT = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_SHADED = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_ABOVE = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_MODAL = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_FULLSCREEN = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_BELOW = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_HIDDEN = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_SKIP_TASKBAR = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_STATE_SKIP_PAGER = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_WINDOW_TYPE = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_WINDOW_TYPE_NORMAL = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_WINDOW_TYPE_DIALOG = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_WINDOW_TYPE_UTILITY = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_WINDOW_TYPE_POPUP_MENU = nullptr;
	::sun::awt::X11::XAtom* XA_NET_WM_WINDOW_OPACITY = nullptr;
	static const int32_t _NET_WM_STATE_REMOVE = 0;
	static const int32_t _NET_WM_STATE_ADD = 1;
	static const int32_t _NET_WM_STATE_TOGGLE = 2;
	bool supportChecked = false;
	int64_t NetWindow = 0;
	$String* net_wm_name_cache = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("XA_NET_ACTIVE_WINDOW")
#pragma pop_macro("XA_NET_SUPPORTED")
#pragma pop_macro("XA_NET_SUPPORTING_WM_CHECK")
#pragma pop_macro("XA_NET_WM_NAME")
#pragma pop_macro("XA_NET_WM_STATE")
#pragma pop_macro("XA_NET_WM_STATE_ABOVE")
#pragma pop_macro("XA_NET_WM_STATE_BELOW")
#pragma pop_macro("XA_NET_WM_STATE_FULLSCREEN")
#pragma pop_macro("XA_NET_WM_STATE_HIDDEN")
#pragma pop_macro("XA_NET_WM_STATE_MAXIMIZED_HORZ")
#pragma pop_macro("XA_NET_WM_STATE_MAXIMIZED_VERT")
#pragma pop_macro("XA_NET_WM_STATE_MODAL")
#pragma pop_macro("XA_NET_WM_STATE_SHADED")
#pragma pop_macro("XA_NET_WM_STATE_SKIP_PAGER")
#pragma pop_macro("XA_NET_WM_STATE_SKIP_TASKBAR")
#pragma pop_macro("XA_NET_WM_WINDOW_OPACITY")
#pragma pop_macro("XA_NET_WM_WINDOW_TYPE")
#pragma pop_macro("XA_NET_WM_WINDOW_TYPE_DIALOG")
#pragma pop_macro("XA_NET_WM_WINDOW_TYPE_NORMAL")
#pragma pop_macro("XA_NET_WM_WINDOW_TYPE_POPUP_MENU")
#pragma pop_macro("XA_NET_WM_WINDOW_TYPE_UTILITY")
#pragma pop_macro("XA_UTF8_STRING")
#pragma pop_macro("_NET_WM_STATE_ADD")
#pragma pop_macro("_NET_WM_STATE_REMOVE")
#pragma pop_macro("_NET_WM_STATE_TOGGLE")

#endif // _sun_awt_X11_XNETProtocol_h_
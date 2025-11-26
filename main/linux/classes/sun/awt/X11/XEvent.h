#ifndef _sun_awt_X11_XEvent_h_
#define _sun_awt_X11_XEvent_h_
//$ class sun.awt.X11.XEvent
//$ extends sun.awt.X11.XWrapperBase

#include <sun/awt/X11/XWrapperBase.h>

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
			class XAnyEvent;
			class XButtonEvent;
			class XCirculateEvent;
			class XCirculateRequestEvent;
			class XClientMessageEvent;
			class XColormapEvent;
			class XConfigureEvent;
			class XConfigureRequestEvent;
			class XCreateWindowEvent;
			class XCrossingEvent;
			class XDestroyWindowEvent;
			class XErrorEvent;
			class XExposeEvent;
			class XFocusChangeEvent;
			class XGraphicsExposeEvent;
			class XGravityEvent;
			class XKeyEvent;
			class XKeymapEvent;
			class XMapEvent;
			class XMapRequestEvent;
			class XMappingEvent;
			class XMotionEvent;
			class XNoExposeEvent;
			class XPropertyEvent;
			class XReparentEvent;
			class XResizeRequestEvent;
			class XSelectionClearEvent;
			class XSelectionEvent;
			class XSelectionRequestEvent;
			class XUnmapEvent;
			class XVisibilityEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XEvent();
	void init$(int64_t addr);
	void init$();
	virtual ::sun::awt::X11::XEvent* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_pad(int32_t index);
	virtual int64_t get_pad();
	virtual int32_t get_type();
	virtual ::sun::awt::X11::XAnyEvent* get_xany();
	virtual ::sun::awt::X11::XButtonEvent* get_xbutton();
	virtual ::sun::awt::X11::XCirculateEvent* get_xcirculate();
	virtual ::sun::awt::X11::XCirculateRequestEvent* get_xcirculaterequest();
	virtual ::sun::awt::X11::XClientMessageEvent* get_xclient();
	virtual ::sun::awt::X11::XColormapEvent* get_xcolormap();
	virtual ::sun::awt::X11::XConfigureEvent* get_xconfigure();
	virtual ::sun::awt::X11::XConfigureRequestEvent* get_xconfigurerequest();
	virtual ::sun::awt::X11::XCreateWindowEvent* get_xcreatewindow();
	virtual ::sun::awt::X11::XCrossingEvent* get_xcrossing();
	virtual ::sun::awt::X11::XDestroyWindowEvent* get_xdestroywindow();
	virtual ::sun::awt::X11::XErrorEvent* get_xerror();
	virtual ::sun::awt::X11::XExposeEvent* get_xexpose();
	virtual ::sun::awt::X11::XFocusChangeEvent* get_xfocus();
	virtual ::sun::awt::X11::XGraphicsExposeEvent* get_xgraphicsexpose();
	virtual ::sun::awt::X11::XGravityEvent* get_xgravity();
	virtual ::sun::awt::X11::XKeyEvent* get_xkey();
	virtual ::sun::awt::X11::XKeymapEvent* get_xkeymap();
	virtual ::sun::awt::X11::XMapEvent* get_xmap();
	virtual ::sun::awt::X11::XMappingEvent* get_xmapping();
	virtual ::sun::awt::X11::XMapRequestEvent* get_xmaprequest();
	virtual ::sun::awt::X11::XMotionEvent* get_xmotion();
	virtual ::sun::awt::X11::XNoExposeEvent* get_xnoexpose();
	virtual ::sun::awt::X11::XPropertyEvent* get_xproperty();
	virtual ::sun::awt::X11::XReparentEvent* get_xreparent();
	virtual ::sun::awt::X11::XResizeRequestEvent* get_xresizerequest();
	virtual ::sun::awt::X11::XSelectionEvent* get_xselection();
	virtual ::sun::awt::X11::XSelectionClearEvent* get_xselectionclear();
	virtual ::sun::awt::X11::XSelectionRequestEvent* get_xselectionrequest();
	virtual ::sun::awt::X11::XUnmapEvent* get_xunmap();
	virtual ::sun::awt::X11::XVisibilityEvent* get_xvisibility();
	virtual void set_pad(int32_t index, int64_t v);
	virtual void set_type(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEvent_h_
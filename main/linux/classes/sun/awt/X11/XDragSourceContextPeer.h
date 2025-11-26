#ifndef _sun_awt_X11_XDragSourceContextPeer_h_
#define _sun_awt_X11_XDragSourceContextPeer_h_
//$ class sun.awt.X11.XDragSourceContextPeer
//$ extends sun.awt.dnd.SunDragSourceContextPeer
//$ implements sun.awt.X11.XDragSourceProtocolListener

#include <java/lang/Array.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDragSourceProtocolListener.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>

#pragma push_macro("GRAB_EVENT_MASK")
#undef GRAB_EVENT_MASK
#pragma push_macro("ROOT_EVENT_MASK")
#undef ROOT_EVENT_MASK

namespace java {
	namespace awt {
		class Cursor;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureEvent;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XButtonEvent;
			class XClientMessageEvent;
			class XDragSourceProtocol;
			class XEvent;
			class XMotionEvent;
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

class XDragSourceContextPeer : public ::sun::awt::dnd::SunDragSourceContextPeer, public ::sun::awt::X11::XDragSourceProtocolListener {
	$class(XDragSourceContextPeer, 0, ::sun::awt::dnd::SunDragSourceContextPeer, ::sun::awt::X11::XDragSourceProtocolListener)
public:
	XDragSourceContextPeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::dnd::DragGestureEvent* dge);
	virtual void cleanup(int64_t time) override;
	void cleanupTargetInfo();
	static ::sun::awt::X11::XDragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge);
	bool doProcessEvent(::sun::awt::X11::XEvent* ev);
	void doUpdateTargetWindow(int64_t subwindow, int64_t time);
	static int64_t findClientWindow(int64_t window);
	int64_t getProxyModeSourceWindow();
	static ::sun::awt::X11::XDragSourceProtocolListener* getXDragSourceProtocolListener();
	virtual void handleDragFinished() override;
	virtual void handleDragFinished(bool success) override;
	virtual void handleDragFinished(bool success, int32_t action) override;
	virtual void handleDragFinished(bool success, int32_t action, int32_t x, int32_t y) override;
	virtual void handleDragReply(int32_t action) override;
	virtual void handleDragReply(int32_t action, int32_t x, int32_t y) override;
	virtual void handleDragReply(int32_t action, int32_t x, int32_t y, int32_t modifiers) override;
	bool needsBogusExitBeforeDrop();
	bool processClientMessage(::sun::awt::X11::XClientMessageEvent* xclient);
	void processDrop(::sun::awt::X11::XButtonEvent* xbutton);
	static bool processEvent(::sun::awt::X11::XEvent* ev);
	void processMouseMove(::sun::awt::X11::XMotionEvent* xmotion);
	bool processProxyModeEvent(::sun::awt::X11::XEvent* ev);
	void removeDnDGrab(int64_t time);
	int32_t scaleDown(int32_t x);
	int32_t scaleUp(int32_t x);
	virtual void setCursor(::java::awt::Cursor* c) override;
	virtual void setNativeCursor(int64_t nativeCtxt, ::java::awt::Cursor* c, int32_t cType) override;
	static void setProxyModeSourceWindow(int64_t window);
	void setProxyModeSourceWindowImpl(int64_t window);
	using ::sun::awt::dnd::SunDragSourceContextPeer::startDrag;
	virtual void startDrag(::java::awt::datatransfer::Transferable* transferable, $longs* formats, ::java::util::Map* formatMap) override;
	void throwGrabFailureException($String* msg, int32_t grabStatus);
	virtual $String* toString() override;
	bool updateSourceAction(int32_t state);
	void updateTargetWindow(::sun::awt::X11::XMotionEvent* xmotion);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* logger;
	static const int32_t ROOT_EVENT_MASK = 8195; // (int32_t)::sun::awt::X11::XConstants::ButtonMotionMask | (int32_t)::sun::awt::X11::XConstants::KeyPressMask | (int32_t)::sun::awt::X11::XConstants::KeyReleaseMask
	static const int32_t GRAB_EVENT_MASK = 8204; // (int32_t)::sun::awt::X11::XConstants::ButtonPressMask | (int32_t)::sun::awt::X11::XConstants::ButtonMotionMask | (int32_t)::sun::awt::X11::XConstants::ButtonReleaseMask
	int64_t rootEventMask = 0;
	bool dndInProgress = false;
	bool dragInProgress = false;
	int64_t dragRootWindow = 0;
	::sun::awt::X11::XDragSourceProtocol* dragProtocol = nullptr;
	int32_t targetAction = 0;
	int32_t sourceActions = 0;
	int32_t sourceAction = 0;
	$longs* sourceFormats = nullptr;
	int64_t targetRootSubwindow = 0;
	int32_t windowScale = 0;
	int32_t xRoot = 0;
	int32_t yRoot = 0;
	int32_t eventState = 0;
	int64_t proxyModeSourceWindow = 0;
	static ::sun::awt::X11::XDragSourceContextPeer* theInstance;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("GRAB_EVENT_MASK")
#pragma pop_macro("ROOT_EVENT_MASK")

#endif // _sun_awt_X11_XDragSourceContextPeer_h_
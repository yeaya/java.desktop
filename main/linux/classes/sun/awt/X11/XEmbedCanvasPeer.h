#ifndef _sun_awt_X11_XEmbedCanvasPeer_h_
#define _sun_awt_X11_XEmbedCanvasPeer_h_
//$ class sun.awt.X11.XEmbedCanvasPeer
//$ extends sun.awt.X11.XCanvasPeer
//$ implements java.awt.event.WindowFocusListener,java.awt.KeyEventPostProcessor,sun.awt.ModalityListener,sun.awt.WindowIDProvider

#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/lang/Array.h>
#include <sun/awt/ModalityListener.h>
#include <sun/awt/WindowIDProvider.h>
#include <sun/awt/X11/XCanvasPeer.h>

#pragma push_macro("ACCEL_LOCK")
#undef ACCEL_LOCK
#pragma push_macro("GRAB_LOCK")
#undef GRAB_LOCK

namespace java {
	namespace awt {
		class AWTEvent;
		class AWTKeyStroke;
		class Component;
		class Dimension;
		class GraphicsConfiguration;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class KeyEvent;
			class WindowEvent;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace sun {
	namespace awt {
		class ModalityEvent;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
			class XEmbedCanvasPeer$XEmbedServer;
			class XEvent;
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

class XEmbedCanvasPeer : public ::sun::awt::X11::XCanvasPeer, public ::java::awt::event::WindowFocusListener, public ::java::awt::KeyEventPostProcessor, public ::sun::awt::ModalityListener, public ::sun::awt::WindowIDProvider {
	$class(XEmbedCanvasPeer, 0, ::sun::awt::X11::XCanvasPeer, ::java::awt::event::WindowFocusListener, ::java::awt::KeyEventPostProcessor, ::sun::awt::ModalityListener, ::sun::awt::WindowIDProvider)
public:
	XEmbedCanvasPeer();
	using ::sun::awt::X11::XCanvasPeer::getGraphics;
	using ::sun::awt::X11::XCanvasPeer::handleKeyPress;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int64_t getWindow() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	void init$(::java::awt::Component* target);
	virtual void canvasFocusGained(::java::awt::event::FocusEvent* e);
	virtual void canvasFocusLost(::java::awt::event::FocusEvent* e);
	virtual void childDestroyed();
	virtual void childResized();
	virtual void deinstallAcceleratorListener();
	virtual void deinstallActivateListener();
	virtual void deinstallModalityListener();
	virtual void detachChild();
	virtual void disableBackgroundErase() override;
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	virtual void dispose() override;
	virtual void embedChild(int64_t child);
	virtual void endDispatching();
	virtual void focusNext();
	virtual void focusPrev();
	virtual void forwardKeyEvent(::java::awt::event::KeyEvent* e);
	virtual ::java::awt::GraphicsConfiguration* getAppropriateGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc) override;
	static $bytes* getBData(::java::awt::event::KeyEvent* e);
	virtual ::java::awt::Rectangle* getClientBounds();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::java::awt::Window* getTopLevel(::java::awt::Component* comp);
	virtual void grabKey(int64_t keysym, int64_t modifiers);
	virtual void handleClientMessage(::sun::awt::X11::XEvent* xev) override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void initDispatching();
	virtual void installAcceleratorListener();
	virtual void installActivateListener();
	virtual void installModalityListener();
	virtual bool isApplicationActive();
	virtual bool isFocusable() override;
	virtual bool isXEmbedActive();
	virtual void modalityPopped(::sun::awt::ModalityEvent* ev) override;
	virtual void modalityPushed(::sun::awt::ModalityEvent* ev) override;
	virtual void notifyChildEmbedded();
	using ::sun::awt::X11::XCanvasPeer::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual bool postProcessKeyEvent(::java::awt::event::KeyEvent* e) override;
	using ::sun::awt::X11::XCanvasPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual bool processXEmbedDnDEvent(int64_t ctxt, int32_t eventID);
	virtual void propogateRegisterAccelerator(::java::awt::AWTKeyStroke* stroke);
	virtual void propogateUnRegisterAccelerator(::java::awt::AWTKeyStroke* stroke);
	virtual void registerAccelerator(int64_t accel_id, int64_t keysym, int64_t modifiers);
	virtual void removeXEmbedDropTarget();
	virtual void requestXEmbedFocus();
	virtual void setXEmbedDropTarget();
	virtual $String* toString() override;
	virtual void ungrabKey(int64_t keysym, int64_t modifiers);
	virtual void unregisterAccelerator(int64_t accel_id);
	virtual void windowGainedFocus(::java::awt::event::WindowEvent* e) override;
	virtual void windowLostFocus(::java::awt::event::WindowEvent* e) override;
	static ::sun::util::logging::PlatformLogger* xembedLog;
	bool applicationActive = false;
	::sun::awt::X11::XEmbedCanvasPeer$XEmbedServer* xembed = nullptr;
	::java::util::Map* accelerators = nullptr;
	::java::util::Map* accel_lookup = nullptr;
	::java::util::Set* grabbed_keys = nullptr;
	$Object* ACCEL_LOCK = nullptr;
	$Object* GRAB_LOCK = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("ACCEL_LOCK")
#pragma pop_macro("GRAB_LOCK")

#endif // _sun_awt_X11_XEmbedCanvasPeer_h_
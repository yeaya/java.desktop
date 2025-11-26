#ifndef _sun_awt_AWTAccessor$ComponentAccessor_h_
#define _sun_awt_AWTAccessor$ComponentAccessor_h_
//$ interface sun.awt.AWTAccessor$ComponentAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class Color;
		class Component;
		class Container;
		class Cursor;
		class Font;
		class GraphicsConfiguration;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
		class RequestFocusController;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$ComponentAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$ComponentAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool canBeFocusOwner(::java::awt::Component* comp) {return false;}
	virtual void createBufferStrategy(::java::awt::Component* comp, int32_t numBuffers, ::java::awt::BufferCapabilities* caps) {}
	virtual ::java::security::AccessControlContext* getAccessControlContext(::java::awt::Component* comp) {return nullptr;}
	virtual ::sun::awt::AppContext* getAppContext(::java::awt::Component* comp) {return nullptr;}
	virtual ::java::awt::Color* getBackground(::java::awt::Component* comp) {return nullptr;}
	virtual bool getBackgroundEraseDisabled(::java::awt::Component* comp) {return false;}
	virtual ::java::awt::Rectangle* getBounds(::java::awt::Component* comp) {return nullptr;}
	virtual ::java::awt::image::BufferStrategy* getBufferStrategy(::java::awt::Component* comp) {return nullptr;}
	virtual ::java::awt::Cursor* getCursor(::java::awt::Component* comp) {return nullptr;}
	virtual ::java::awt::Font* getFont(::java::awt::Component* comp) {return nullptr;}
	virtual ::java::awt::Color* getForeground(::java::awt::Component* comp) {return nullptr;}
	virtual int32_t getHeight(::java::awt::Component* comp) {return 0;}
	virtual bool getIgnoreRepaint(::java::awt::Component* comp) {return false;}
	virtual ::java::awt::Point* getLocation(::java::awt::Component* comp) {return nullptr;}
	virtual ::java::awt::Container* getParent(::java::awt::Component* comp) {return nullptr;}
	virtual ::java::awt::peer::ComponentPeer* getPeer(::java::awt::Component* comp) {return nullptr;}
	virtual int32_t getWidth(::java::awt::Component* comp) {return 0;}
	virtual int32_t getX(::java::awt::Component* comp) {return 0;}
	virtual int32_t getY(::java::awt::Component* comp) {return 0;}
	virtual bool isDisplayable(::java::awt::Component* comp) {return false;}
	virtual bool isEnabled(::java::awt::Component* comp) {return false;}
	virtual bool isLightweight(::java::awt::Component* comp) {return false;}
	virtual bool isVisible(::java::awt::Component* comp) {return false;}
	virtual void processEvent(::java::awt::Component* comp, ::java::awt::AWTEvent* e) {}
	virtual void requestFocus(::java::awt::Component* comp, ::java::awt::event::FocusEvent$Cause* cause) {}
	virtual void revalidateSynchronously(::java::awt::Component* comp) {}
	virtual void setAppContext(::java::awt::Component* comp, ::sun::awt::AppContext* appContext) {}
	virtual void setBackground(::java::awt::Component* comp, ::java::awt::Color* background) {}
	virtual void setBackgroundEraseDisabled(::java::awt::Component* comp, bool disabled) {}
	virtual void setGraphicsConfiguration(::java::awt::Component* comp, ::java::awt::GraphicsConfiguration* gc) {}
	virtual void setLocation(::java::awt::Component* comp, int32_t x, int32_t y) {}
	virtual void setParent(::java::awt::Component* comp, ::java::awt::Container* parent) {}
	virtual void setPeer(::java::awt::Component* comp, ::java::awt::peer::ComponentPeer* peer) {}
	virtual void setRequestFocusController(::sun::awt::RequestFocusController* requestController) {}
	virtual void setSize(::java::awt::Component* comp, int32_t width, int32_t height) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$ComponentAccessor_h_
#ifndef _java_awt_Component$1_h_
#define _java_awt_Component$1_h_
//$ class java.awt.Component$1
//$ extends sun.awt.AWTAccessor$ComponentAccessor

#include <sun/awt/AWTAccessor$ComponentAccessor.h>

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

namespace java {
	namespace awt {

class Component$1 : public ::sun::awt::AWTAccessor$ComponentAccessor {
	$class(Component$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$ComponentAccessor)
public:
	Component$1();
	void init$();
	virtual bool canBeFocusOwner(::java::awt::Component* comp) override;
	virtual void createBufferStrategy(::java::awt::Component* comp, int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::security::AccessControlContext* getAccessControlContext(::java::awt::Component* comp) override;
	virtual ::sun::awt::AppContext* getAppContext(::java::awt::Component* comp) override;
	virtual ::java::awt::Color* getBackground(::java::awt::Component* comp) override;
	virtual bool getBackgroundEraseDisabled(::java::awt::Component* comp) override;
	virtual ::java::awt::Rectangle* getBounds(::java::awt::Component* comp) override;
	virtual ::java::awt::image::BufferStrategy* getBufferStrategy(::java::awt::Component* comp) override;
	virtual ::java::awt::Cursor* getCursor(::java::awt::Component* comp) override;
	virtual ::java::awt::Font* getFont(::java::awt::Component* comp) override;
	virtual ::java::awt::Color* getForeground(::java::awt::Component* comp) override;
	virtual int32_t getHeight(::java::awt::Component* comp) override;
	virtual bool getIgnoreRepaint(::java::awt::Component* comp) override;
	virtual ::java::awt::Point* getLocation(::java::awt::Component* comp) override;
	virtual ::java::awt::Container* getParent(::java::awt::Component* comp) override;
	virtual ::java::awt::peer::ComponentPeer* getPeer(::java::awt::Component* comp) override;
	virtual int32_t getWidth(::java::awt::Component* comp) override;
	virtual int32_t getX(::java::awt::Component* comp) override;
	virtual int32_t getY(::java::awt::Component* comp) override;
	virtual bool isDisplayable(::java::awt::Component* comp) override;
	virtual bool isEnabled(::java::awt::Component* comp) override;
	virtual bool isLightweight(::java::awt::Component* comp) override;
	virtual bool isVisible(::java::awt::Component* comp) override;
	virtual void processEvent(::java::awt::Component* comp, ::java::awt::AWTEvent* e) override;
	virtual void requestFocus(::java::awt::Component* comp, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void revalidateSynchronously(::java::awt::Component* comp) override;
	virtual void setAppContext(::java::awt::Component* comp, ::sun::awt::AppContext* appContext) override;
	virtual void setBackground(::java::awt::Component* comp, ::java::awt::Color* background) override;
	virtual void setBackgroundEraseDisabled(::java::awt::Component* comp, bool disabled) override;
	virtual void setGraphicsConfiguration(::java::awt::Component* comp, ::java::awt::GraphicsConfiguration* gc) override;
	virtual void setLocation(::java::awt::Component* comp, int32_t x, int32_t y) override;
	virtual void setParent(::java::awt::Component* comp, ::java::awt::Container* parent) override;
	virtual void setPeer(::java::awt::Component* comp, ::java::awt::peer::ComponentPeer* peer) override;
	virtual void setRequestFocusController(::sun::awt::RequestFocusController* requestController) override;
	virtual void setSize(::java::awt::Component* comp, int32_t width, int32_t height) override;
};

	} // awt
} // java

#endif // _java_awt_Component$1_h_
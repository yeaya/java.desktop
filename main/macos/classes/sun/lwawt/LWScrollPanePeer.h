#ifndef _sun_lwawt_LWScrollPanePeer_h_
#define _sun_lwawt_LWScrollPanePeer_h_
//$ class sun.lwawt.LWScrollPanePeer
//$ extends sun.lwawt.LWContainerPeer
//$ implements java.awt.peer.ScrollPanePeer,javax.swing.event.ChangeListener

#include <java/awt/peer/ScrollPanePeer.h>
#include <javax/swing/event/ChangeListener.h>
#include <sun/lwawt/LWContainerPeer.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Adjustable;
		class Rectangle;
		class ScrollPane;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
		class PlatformComponent;
	}
}

namespace sun {
	namespace lwawt {

class LWScrollPanePeer : public ::sun::lwawt::LWContainerPeer, public ::java::awt::peer::ScrollPanePeer, public ::javax::swing::event::ChangeListener {
	$class(LWScrollPanePeer, $NO_CLASS_INIT, ::sun::lwawt::LWContainerPeer, ::java::awt::peer::ScrollPanePeer, ::javax::swing::event::ChangeListener)
public:
	LWScrollPanePeer();
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t w, int32_t h) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::ScrollPane* target, ::sun::lwawt::PlatformComponent* platformComponent);
	virtual void childResized(int32_t w, int32_t h) override;
	static int32_t convertHPolicy(int32_t policy);
	static int32_t convertVPolicy(int32_t policy);
	virtual ::javax::swing::JComponent* createDelegate() override;
	virtual ::java::awt::Rectangle* getContentSize() override;
	virtual int32_t getHScrollbarHeight() override;
	virtual int32_t getVScrollbarWidth() override;
	::sun::lwawt::LWComponentPeer* getViewPeer();
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void initializeImpl() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	using ::sun::lwawt::LWContainerPeer::repaintPeer;
	using ::sun::lwawt::LWContainerPeer::setBounds;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setScrollPosition(int32_t x, int32_t y) override;
	virtual void setUnitIncrement(::java::awt::Adjustable* adj, int32_t u) override;
	virtual void setValue(::java::awt::Adjustable* adj, int32_t v) override;
	virtual void setVisible(bool v) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWScrollPanePeer_h_
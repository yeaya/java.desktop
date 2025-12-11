#ifndef _sun_lwawt_LWContainerPeer_h_
#define _sun_lwawt_LWContainerPeer_h_
//$ class sun.lwawt.LWContainerPeer
//$ extends sun.lwawt.LWCanvasPeer
//$ implements java.awt.peer.ContainerPeer

#include <java/awt/peer/ContainerPeer.h>
#include <sun/lwawt/LWCanvasPeer.h>

namespace java {
	namespace awt {
		class Color;
		class Container;
		class Font;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
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

class LWContainerPeer : public ::sun::lwawt::LWCanvasPeer, public ::java::awt::peer::ContainerPeer {
	$class(LWContainerPeer, $NO_CLASS_INIT, ::sun::lwawt::LWCanvasPeer, ::java::awt::peer::ContainerPeer)
public:
	LWContainerPeer();
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t w, int32_t h) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Container* target, ::sun::lwawt::PlatformComponent* platformComponent);
	void addChildPeer(::sun::lwawt::LWComponentPeer* child);
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	::sun::java2d::pipe::Region* cutChildren(::sun::java2d::pipe::Region* r, ::sun::lwawt::LWComponentPeer* above);
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual ::sun::lwawt::LWComponentPeer* findPeerAt(int32_t x, int32_t y) override;
	::java::util::List* getChildren();
	virtual ::java::awt::Rectangle* getContentSize();
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::sun::java2d::pipe::Region* getVisibleRegion() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	void removeChildPeer(::sun::lwawt::LWComponentPeer* child);
	void repaintChildren(::java::awt::Rectangle* r);
	using ::sun::lwawt::LWCanvasPeer::repaintPeer;
	virtual void repaintPeer(::java::awt::Rectangle* r) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	using ::sun::lwawt::LWCanvasPeer::setBounds;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	void setChildPeerZOrder(::sun::lwawt::LWComponentPeer* peer, ::sun::lwawt::LWComponentPeer* above);
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setVisible(bool v) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	::java::util::List* childPeers = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWContainerPeer_h_
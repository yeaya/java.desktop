#ifndef _sun_awt_windows_WScrollPanePeer_h_
#define _sun_awt_windows_WScrollPanePeer_h_
//$ class sun.awt.windows.WScrollPanePeer
//$ extends sun.awt.windows.WPanelPeer
//$ implements java.awt.peer.ScrollPanePeer

#include <java/awt/peer/ScrollPanePeer.h>
#include <sun/awt/windows/WPanelPeer.h>

namespace java {
	namespace awt {
		class Adjustable;
		class Component;
		class Point;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
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
		namespace windows {

class WScrollPanePeer : public ::sun::awt::windows::WPanelPeer, public ::java::awt::peer::ScrollPanePeer {
	$class(WScrollPanePeer, 0, ::sun::awt::windows::WPanelPeer, ::java::awt::peer::ScrollPanePeer)
public:
	WScrollPanePeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::windows::WPanelPeer::getColorModel;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::Component* target);
	int32_t _getHScrollbarHeight();
	int32_t _getVScrollbarWidth();
	virtual void childResized(int32_t width, int32_t height) override;
	virtual void create(::sun::awt::windows::WComponentPeer* parent) override;
	virtual int32_t getHScrollbarHeight() override;
	int32_t getOffset(int32_t orient);
	::java::awt::Component* getScrollChild();
	::java::awt::Point* getScrollOffset();
	virtual int32_t getVScrollbarWidth() override;
	static void initIDs();
	virtual void initialize() override;
	virtual void paint(::java::awt::Graphics* g) override;
	void postScrollEvent(int32_t orient, int32_t type, int32_t pos, bool isAdjusting);
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	void setInsets();
	virtual void setScrollPosition(int32_t x, int32_t y) override;
	void setSpans(int32_t viewWidth, int32_t viewHeight, int32_t childWidth, int32_t childHeight);
	virtual void setUnitIncrement(::java::awt::Adjustable* adj, int32_t p) override;
	virtual void setValue(::java::awt::Adjustable* adj, int32_t v) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	static ::sun::util::logging::PlatformLogger* log;
	int32_t scrollbarWidth = 0;
	int32_t scrollbarHeight = 0;
	int32_t prevx = 0;
	int32_t prevy = 0;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WScrollPanePeer_h_
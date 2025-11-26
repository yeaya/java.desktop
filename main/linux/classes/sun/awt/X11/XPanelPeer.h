#ifndef _sun_awt_X11_XPanelPeer_h_
#define _sun_awt_X11_XPanelPeer_h_
//$ class sun.awt.X11.XPanelPeer
//$ extends sun.awt.X11.XCanvasPeer
//$ implements java.awt.peer.PanelPeer

#include <java/awt/peer/PanelPeer.h>
#include <sun/awt/X11/XCanvasPeer.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
		class Graphics;
		class GraphicsConfiguration;
		class Insets;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
			class XEmbeddingContainer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XPanelPeer : public ::sun::awt::X11::XCanvasPeer, public ::java::awt::peer::PanelPeer {
	$class(XPanelPeer, $NO_CLASS_INIT, ::sun::awt::X11::XCanvasPeer, ::java::awt::peer::PanelPeer)
public:
	XPanelPeer();
	using ::sun::awt::X11::XCanvasPeer::handleKeyPress;
	using ::sun::awt::X11::XCanvasPeer::getColorModel;
	using ::sun::awt::X11::XCanvasPeer::getGraphics;
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
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::sun::awt::X11::XCreateWindowParams* params);
	void init$(::java::awt::Component* target);
	virtual void disableBackgroundErase() override;
	virtual void dispose() override;
	virtual ::java::awt::GraphicsConfiguration* getAppropriateGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc) override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XCanvasPeer::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XCanvasPeer::preInit;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	void setForegroundForHierarchy(::java::awt::Container* cont, ::java::awt::Color* c);
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual bool shouldFocusOnClick() override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void xembed(int64_t window);
	::sun::awt::X11::XEmbeddingContainer* embedder = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XPanelPeer_h_
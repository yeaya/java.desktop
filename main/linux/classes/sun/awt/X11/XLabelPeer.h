#ifndef _sun_awt_X11_XLabelPeer_h_
#define _sun_awt_X11_XLabelPeer_h_
//$ class sun.awt.X11.XLabelPeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.LabelPeer

#include <java/awt/peer/LabelPeer.h>
#include <sun/awt/X11/XComponentPeer.h>

#pragma push_macro("TEXT_XPAD")
#undef TEXT_XPAD
#pragma push_macro("TEXT_YPAD")
#undef TEXT_YPAD

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class Label;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XLabelPeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::LabelPeer {
	$class(XLabelPeer, $NO_CLASS_INIT, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::LabelPeer)
public:
	XLabelPeer();
	using ::sun::awt::X11::XComponentPeer::handleKeyPress;
	using ::sun::awt::X11::XComponentPeer::getColorModel;
	using ::sun::awt::X11::XComponentPeer::getGraphics;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Label* target);
	virtual ::java::awt::FontMetrics* getFontMetrics();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintPeer(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XComponentPeer::postInit;
	using ::sun::awt::X11::XComponentPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setAlignment(int32_t alignment) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setText($String* label) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	static const int32_t TEXT_XPAD = 8;
	static const int32_t TEXT_YPAD = 6;
	$String* label = nullptr;
	int32_t alignment = 0;
	::java::awt::FontMetrics* cachedFontMetrics = nullptr;
	::java::awt::Font* oldfont = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("TEXT_XPAD")
#pragma pop_macro("TEXT_YPAD")

#endif // _sun_awt_X11_XLabelPeer_h_
#ifndef _sun_awt_X11_XDialogPeer_h_
#define _sun_awt_X11_XDialogPeer_h_
//$ class sun.awt.X11.XDialogPeer
//$ extends sun.awt.X11.XDecoratedPeer
//$ implements java.awt.peer.DialogPeer

#include <java/awt/peer/DialogPeer.h>
#include <sun/awt/X11/XDecoratedPeer.h>

namespace java {
	namespace awt {
		class Dialog;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class List;
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

class XDialogPeer : public ::sun::awt::X11::XDecoratedPeer, public ::java::awt::peer::DialogPeer {
	$class(XDialogPeer, $NO_CLASS_INIT, ::sun::awt::X11::XDecoratedPeer, ::java::awt::peer::DialogPeer)
public:
	XDialogPeer();
	using ::sun::awt::X11::XDecoratedPeer::addDropTarget;
	using ::sun::awt::X11::XDecoratedPeer::handleKeyPress;
	using ::sun::awt::X11::XDecoratedPeer::getColorModel;
	using ::sun::awt::X11::XDecoratedPeer::getGraphics;
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
	void init$(::java::awt::Dialog* target);
	virtual void blockWindows(::java::util::List* toBlock) override;
	virtual int32_t getDecorations() override;
	virtual int32_t getFunctions() override;
	virtual bool isFocusable() override;
	virtual bool isFocusedWindowModalBlocker() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual bool isTargetUndecorated() override;
	using ::sun::awt::X11::XDecoratedPeer::postInit;
	using ::sun::awt::X11::XDecoratedPeer::preInit;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XDecoratedPeer::requestXFocus;
	using ::sun::awt::X11::XDecoratedPeer::requestWindowFocus;
	using ::sun::awt::X11::XDecoratedPeer::setModalBlocked;
	using ::sun::awt::X11::XDecoratedPeer::removeDropTarget;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool vis) override;
	using ::sun::awt::X11::XDecoratedPeer::updateSizeHints;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	virtual void updateWindow() override;
	::java::lang::Boolean* undecorated = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDialogPeer_h_
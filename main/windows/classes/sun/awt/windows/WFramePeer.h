#ifndef _sun_awt_windows_WFramePeer_h_
#define _sun_awt_windows_WFramePeer_h_
//$ class sun.awt.windows.WFramePeer
//$ extends sun.awt.windows.WWindowPeer
//$ implements java.awt.peer.FramePeer

#include <java/awt/peer/FramePeer.h>
#include <sun/awt/windows/WWindowPeer.h>

namespace java {
	namespace awt {
		class Dimension;
		class Frame;
		class GraphicsConfiguration;
		class MenuBar;
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
			class WMenuBarPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WFramePeer : public ::sun::awt::windows::WWindowPeer, public ::java::awt::peer::FramePeer {
	$class(WFramePeer, 0, ::sun::awt::windows::WWindowPeer, ::java::awt::peer::FramePeer)
public:
	WFramePeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::windows::WWindowPeer::getColorModel;
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
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::Frame* target);
	::java::awt::Rectangle* adjustMaximizedBounds(::java::awt::Rectangle* bounds);
	void clearMaximizedBounds();
	virtual void create(::sun::awt::windows::WComponentPeer* parent) override;
	virtual void createAwtFrame(::sun::awt::windows::WComponentPeer* parent);
	virtual void emulateActivation(bool activate) override;
	virtual ::java::awt::Rectangle* getBoundsPrivate() override;
	virtual int32_t getExtendedState();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual int32_t getState() override;
	static int32_t getSysMenuHeight();
	static void initIDs();
	virtual void initialize() override;
	virtual bool isTargetUndecorated() override;
	virtual void notifyIMMOptionChange();
	virtual void pSetIMMOption($String* option);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setEnabled(bool b) override;
	virtual void setExtendedState(int32_t state);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	void setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setMaximizedBounds(::java::awt::Rectangle* b) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	void setMenuBar0(::sun::awt::windows::WMenuBarPeer* mbPeer);
	virtual void setModalBlocked(::java::awt::Dialog* dialog, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setState(int32_t state) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	void synthesizeWmActivate(bool activate);
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
	static bool keepOnMinimize;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WFramePeer_h_
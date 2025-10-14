#ifndef _sun_awt_windows_WButtonPeer_h_
#define _sun_awt_windows_WButtonPeer_h_
//$ class sun.awt.windows.WButtonPeer
//$ extends sun.awt.windows.WComponentPeer
//$ implements java.awt.peer.ButtonPeer

#include <java/awt/peer/ButtonPeer.h>
#include <sun/awt/windows/WComponentPeer.h>

namespace java {
	namespace awt {
		class Button;
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WButtonPeer : public ::sun::awt::windows::WComponentPeer, public ::java::awt::peer::ButtonPeer {
	$class(WButtonPeer, 0, ::sun::awt::windows::WComponentPeer, ::java::awt::peer::ButtonPeer)
public:
	WButtonPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::windows::WComponentPeer::getColorModel;
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
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::Button* target);
	virtual void create(::sun::awt::windows::WComponentPeer* peer) override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	void handleAction(int64_t when, int32_t modifiers);
	virtual bool handleJavaKeyEvent(::java::awt::event::KeyEvent* e) override;
	static void initIDs();
	virtual bool isFocusable() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLabel($String* label) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual bool shouldClearRectBeforePaint() override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WButtonPeer_h_
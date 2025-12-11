#ifndef _sun_lwawt_LWButtonPeer_h_
#define _sun_lwawt_LWButtonPeer_h_
//$ class sun.lwawt.LWButtonPeer
//$ extends sun.lwawt.LWComponentPeer
//$ implements java.awt.peer.ButtonPeer,java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/peer/ButtonPeer.h>
#include <sun/lwawt/LWComponentPeer.h>

namespace java {
	namespace awt {
		class Button;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace sun {
	namespace lwawt {
		class PlatformComponent;
	}
}

namespace sun {
	namespace lwawt {

class LWButtonPeer : public ::sun::lwawt::LWComponentPeer, public ::java::awt::peer::ButtonPeer, public ::java::awt::event::ActionListener {
	$class(LWButtonPeer, $NO_CLASS_INIT, ::sun::lwawt::LWComponentPeer, ::java::awt::peer::ButtonPeer, ::java::awt::event::ActionListener)
public:
	LWButtonPeer();
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
	void init$(::java::awt::Button* target, ::sun::lwawt::PlatformComponent* platformComponent);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual ::javax::swing::JComponent* createDelegate() override;
	virtual void initializeImpl() override;
	virtual bool isFocusable() override;
	using ::sun::lwawt::LWComponentPeer::setBounds;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLabel($String* label) override;
	virtual void setVisible(bool v) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWButtonPeer_h_
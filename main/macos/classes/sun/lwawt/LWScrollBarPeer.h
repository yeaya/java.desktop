#ifndef _sun_lwawt_LWScrollBarPeer_h_
#define _sun_lwawt_LWScrollBarPeer_h_
//$ class sun.lwawt.LWScrollBarPeer
//$ extends sun.lwawt.LWComponentPeer
//$ implements java.awt.peer.ScrollbarPeer,java.awt.event.AdjustmentListener

#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/peer/ScrollbarPeer.h>
#include <sun/lwawt/LWComponentPeer.h>

namespace java {
	namespace awt {
		class Scrollbar;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class AdjustmentEvent;
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

class LWScrollBarPeer : public ::sun::lwawt::LWComponentPeer, public ::java::awt::peer::ScrollbarPeer, public ::java::awt::event::AdjustmentListener {
	$class(LWScrollBarPeer, $NO_CLASS_INIT, ::sun::lwawt::LWComponentPeer, ::java::awt::peer::ScrollbarPeer, ::java::awt::event::AdjustmentListener)
public:
	LWScrollBarPeer();
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
	void init$(::java::awt::Scrollbar* target, ::sun::lwawt::PlatformComponent* platformComponent);
	virtual void adjustmentValueChanged(::java::awt::event::AdjustmentEvent* e) override;
	virtual ::javax::swing::JComponent* createDelegate() override;
	virtual void initializeImpl() override;
	using ::sun::lwawt::LWComponentPeer::setBounds;
	virtual bool isFocusable() override;
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
	virtual void setLineIncrement(int32_t l) override;
	virtual void setPageIncrement(int32_t l) override;
	virtual void setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) override;
	virtual void setVisible(bool v) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	int32_t currentValue = 0;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWScrollBarPeer_h_
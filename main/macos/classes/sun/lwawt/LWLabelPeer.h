#ifndef _sun_lwawt_LWLabelPeer_h_
#define _sun_lwawt_LWLabelPeer_h_
//$ class sun.lwawt.LWLabelPeer
//$ extends sun.lwawt.LWComponentPeer
//$ implements java.awt.peer.LabelPeer

#include <java/awt/peer/LabelPeer.h>
#include <sun/lwawt/LWComponentPeer.h>

namespace java {
	namespace awt {
		class Label;
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

class LWLabelPeer : public ::sun::lwawt::LWComponentPeer, public ::java::awt::peer::LabelPeer {
	$class(LWLabelPeer, $NO_CLASS_INIT, ::sun::lwawt::LWComponentPeer, ::java::awt::peer::LabelPeer)
public:
	LWLabelPeer();
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
	void init$(::java::awt::Label* target, ::sun::lwawt::PlatformComponent* platformComponent);
	static int32_t convertAlignment(int32_t alignment);
	virtual ::javax::swing::JComponent* createDelegate() override;
	virtual void initializeImpl() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setAlignment(int32_t alignment) override;
	using ::sun::lwawt::LWComponentPeer::setBounds;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setText($String* label) override;
	virtual void setVisible(bool v) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWLabelPeer_h_
#ifndef _sun_lwawt_LWListPeer_h_
#define _sun_lwawt_LWListPeer_h_
//$ class sun.lwawt.LWListPeer
//$ extends sun.lwawt.LWComponentPeer
//$ implements java.awt.peer.ListPeer

#include <java/awt/peer/ListPeer.h>
#include <java/lang/Array.h>
#include <sun/lwawt/LWComponentPeer.h>

#pragma push_macro("DEFAULT_VISIBLE_ROWS")
#undef DEFAULT_VISIBLE_ROWS
#pragma push_macro("TEXT")
#undef TEXT

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class List;
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

class LWListPeer : public ::sun::lwawt::LWComponentPeer, public ::java::awt::peer::ListPeer {
	$class(LWListPeer, 0, ::sun::lwawt::LWComponentPeer, ::java::awt::peer::ListPeer)
public:
	LWListPeer();
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
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::List* target, ::sun::lwawt::PlatformComponent* platformComponent);
	virtual void add($String* item, int32_t index) override;
	virtual ::javax::swing::JComponent* createDelegate() override;
	virtual void delItems(int32_t start, int32_t end) override;
	virtual void deselect(int32_t index) override;
	::java::awt::Dimension* getCellSize();
	virtual ::java::awt::Component* getDelegateFocusOwner() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows) override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows) override;
	virtual $ints* getSelectedIndexes() override;
	virtual void initializeImpl() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void makeVisible(int32_t index) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void removeAll() override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	void revalidate();
	virtual void select(int32_t index) override;
	using ::sun::lwawt::LWComponentPeer::setBounds;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setEnabled(bool e) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setMultipleMode(bool m) override;
	virtual void setVisible(bool v) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	static const int32_t DEFAULT_VISIBLE_ROWS = 4;
	static $String* TEXT;
};

	} // lwawt
} // sun

#pragma pop_macro("DEFAULT_VISIBLE_ROWS")
#pragma pop_macro("TEXT")

#endif // _sun_lwawt_LWListPeer_h_
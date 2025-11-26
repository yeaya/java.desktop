#ifndef _sun_awt_X11_XChoicePeer_h_
#define _sun_awt_X11_XChoicePeer_h_
//$ class sun.awt.X11.XChoicePeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.ChoicePeer,sun.awt.X11.ToplevelStateListener

#include <java/awt/peer/ChoicePeer.h>
#include <sun/awt/X11/ToplevelStateListener.h>
#include <sun/awt/X11/XComponentPeer.h>

#pragma push_macro("BORDER_WIDTH")
#undef BORDER_WIDTH
#pragma push_macro("ITEM_MARGIN")
#undef ITEM_MARGIN
#pragma push_macro("MAX_UNFURLED_ITEMS")
#undef MAX_UNFURLED_ITEMS
#pragma push_macro("SCROLLBAR_WIDTH")
#undef SCROLLBAR_WIDTH
#pragma push_macro("TEXT_SPACE")
#undef TEXT_SPACE
#pragma push_macro("TEXT_XPAD")
#undef TEXT_XPAD
#pragma push_macro("TEXT_YPAD")
#undef TEXT_YPAD
#pragma push_macro("WIDGET_OFFSET")
#undef WIDGET_OFFSET

namespace java {
	namespace awt {
		class AWTEvent;
		class Choice;
		class Color;
		class Component;
		class Dimension;
		class Font;
		class Graphics;
		class Insets;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class KeyEvent;
			class MouseEvent;
			class MouseWheelEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class ListHelper;
			class XChoicePeer$UnfurledChoice;
			class XChoicePeerListener;
			class XCreateWindowParams;
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
		namespace X11 {

class XChoicePeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::ChoicePeer, public ::sun::awt::X11::ToplevelStateListener {
	$class(XChoicePeer, 0, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::ChoicePeer, ::sun::awt::X11::ToplevelStateListener)
public:
	XChoicePeer();
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
	virtual int32_t hashCode() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	void init$(::java::awt::Choice* target);
	virtual void add($String* item, int32_t index) override;
	void addXChoicePeerListener(::sun::awt::X11::XChoicePeerListener* l);
	virtual void dispose() override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual void handleJavaKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e) override;
	virtual void handleJavaMouseWheelEvent(::java::awt::event::MouseWheelEvent* e) override;
	bool handleMouseEventByChoice(::java::awt::event::MouseEvent* me);
	virtual bool handlesWheelScrolling() override;
	void hidePopdownMenu();
	virtual void initGraphicsConfiguration() override;
	virtual bool isFocusable() override;
	bool isMouseEventInChoice(::java::awt::event::MouseEvent* e);
	bool isUnfurled();
	void keyPressed(::java::awt::event::KeyEvent* e);
	virtual void layout() override;
	void mouseDragged(::java::awt::event::MouseEvent* e);
	void mousePressed(::java::awt::event::MouseEvent* e);
	void mouseReleased(::java::awt::event::MouseEvent* e);
	virtual void paint(::java::awt::Graphics* g) override;
	void paintFocus(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintPeer(::java::awt::Graphics* g) override;
	using ::sun::awt::X11::XComponentPeer::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XComponentPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual bool prePostEvent(::java::awt::AWTEvent* e) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void remove(int32_t index) override;
	virtual void removeAll() override;
	void removeXChoicePeerListener();
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void select(int32_t index) override;
	void setAlignUnder(::java::awt::Component* comp);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	void setDrawSelectedItem(bool value);
	virtual void setEnabled(bool value) override;
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void stateChangedICCCM(int32_t oldState, int32_t newState) override;
	virtual void stateChangedJava(int32_t oldState, int32_t newState) override;
	virtual $String* toString() override;
	virtual void ungrabInputImpl() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t MAX_UNFURLED_ITEMS = 10;
	static const int32_t TEXT_SPACE = 1;
	static const int32_t BORDER_WIDTH = 1;
	static const int32_t ITEM_MARGIN = 1;
	static const int32_t SCROLLBAR_WIDTH = 15;
	static ::java::awt::Insets* focusInsets;
	static const int32_t WIDGET_OFFSET = 18;
	static const int32_t TEXT_XPAD = 8;
	static const int32_t TEXT_YPAD = 6;
	static ::java::awt::Color* focusColor;
	bool unfurled = false;
	bool dragging = false;
	bool mouseInSB = false;
	bool firstPress = false;
	bool wasDragged = false;
	::sun::awt::X11::ListHelper* helper = nullptr;
	::sun::awt::X11::XChoicePeer$UnfurledChoice* unfurledChoice = nullptr;
	bool drawSelectedItem = false;
	::java::awt::Component* alignUnder = nullptr;
	int32_t dragStartIdx = 0;
	::sun::awt::X11::XChoicePeerListener* choiceListener = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BORDER_WIDTH")
#pragma pop_macro("ITEM_MARGIN")
#pragma pop_macro("MAX_UNFURLED_ITEMS")
#pragma pop_macro("SCROLLBAR_WIDTH")
#pragma pop_macro("TEXT_SPACE")
#pragma pop_macro("TEXT_XPAD")
#pragma pop_macro("TEXT_YPAD")
#pragma pop_macro("WIDGET_OFFSET")

#endif // _sun_awt_X11_XChoicePeer_h_
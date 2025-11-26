#ifndef _sun_awt_X11_XListPeer_h_
#define _sun_awt_X11_XListPeer_h_
//$ class sun.awt.X11.XListPeer
//$ extends sun.awt.X11.XComponentPeer
//$ implements java.awt.peer.ListPeer,sun.awt.X11.XScrollbarClient

#include <java/awt/peer/ListPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XScrollbarClient.h>

#pragma push_macro("COPY_AREA")
#undef COPY_AREA
#pragma push_macro("DEFAULT_VISIBLE_ROWS")
#undef DEFAULT_VISIBLE_ROWS
#pragma push_macro("HORIZ_SCROLL_AMT")
#undef HORIZ_SCROLL_AMT
#pragma push_macro("HORSCROLLBAR")
#undef HORSCROLLBAR
#pragma push_macro("MARGIN")
#undef MARGIN
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("PAINT_ALL")
#undef PAINT_ALL
#pragma push_macro("PAINT_BACKGROUND")
#undef PAINT_BACKGROUND
#pragma push_macro("PAINT_FOCUS")
#undef PAINT_FOCUS
#pragma push_macro("PAINT_HIDEFOCUS")
#undef PAINT_HIDEFOCUS
#pragma push_macro("PAINT_HSCROLL")
#undef PAINT_HSCROLL
#pragma push_macro("PAINT_ITEMS")
#undef PAINT_ITEMS
#pragma push_macro("PAINT_VSCROLL")
#undef PAINT_VSCROLL
#pragma push_macro("SCROLLBAR_AREA")
#undef SCROLLBAR_AREA
#pragma push_macro("SCROLLBAR_WIDTH")
#undef SCROLLBAR_WIDTH
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("VERSCROLLBAR")
#undef VERSCROLLBAR
#pragma push_macro("WINDOW")
#undef WINDOW

namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
		class Dimension;
		class Font;
		class Graphics;
		class List;
		class Point;
		class Rectangle;
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
namespace java {
	namespace util {
		class Vector;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
			class XEvent;
			class XHorizontalScrollbar;
			class XListPeer$ListPainter;
			class XScrollbar;
			class XVerticalScrollbar;
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

class XListPeer : public ::sun::awt::X11::XComponentPeer, public ::java::awt::peer::ListPeer, public ::sun::awt::X11::XScrollbarClient {
	$class(XListPeer, 0, ::sun::awt::X11::XComponentPeer, ::java::awt::peer::ListPeer, ::sun::awt::X11::XScrollbarClient)
public:
	XListPeer();
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
	virtual ::java::awt::Component* getEventSource() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual int32_t hashCode() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	void init$(::java::awt::List* target);
	virtual void add($String* item, int32_t index) override;
	virtual void addItem($String* item, int32_t i);
	virtual void clear();
	virtual void createHorScrollbar();
	virtual void createVerScrollbar();
	virtual void delItems(int32_t s, int32_t e) override;
	virtual void deselect(int32_t index) override;
	void deselectAllItems();
	virtual void deselectItem(int32_t index);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual int32_t getFirstVisibleItem();
	virtual int32_t getFocusIndex();
	virtual ::java::awt::Rectangle* getFocusRect();
	virtual ::java::awt::Rectangle* getHScrollBarRec();
	virtual int32_t getItemHeight();
	virtual int32_t getItemWidth(int32_t i);
	virtual int32_t getItemWidth();
	virtual int32_t getItemX();
	virtual int32_t getItemY(int32_t item);
	virtual int32_t getLastVisibleItem();
	::java::awt::Color* getListBackground($Array<::java::awt::Color>* colors);
	::java::awt::Color* getListForeground($Array<::java::awt::Color>* colors);
	virtual int32_t getListWidth();
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows) override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows) override;
	virtual $ints* getSelectedIndexes() override;
	virtual ::java::awt::Rectangle* getVScrollBarRec();
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleJavaKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void handleJavaMouseEvent(::java::awt::event::MouseEvent* e) override;
	virtual void handleJavaMouseEventOnEDT(::java::awt::event::MouseEvent* me);
	virtual void handleJavaMouseWheelEvent(::java::awt::event::MouseWheelEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual bool hsbIsVisible(bool vsbVisible);
	virtual bool inHorizontalScrollbar(int32_t x, int32_t y);
	virtual bool inVerticalScrollbar(int32_t x, int32_t y);
	virtual bool inWindow(int32_t x, int32_t y);
	virtual int32_t index2y(int32_t index);
	virtual void initFontMetrics();
	virtual bool isFocusable() override;
	virtual bool isIndexDisplayed(int32_t idx);
	virtual bool isItemHidden(int32_t index);
	virtual bool isSelected(int32_t index);
	virtual int32_t itemsDisplayed();
	virtual int32_t itemsInWindow(bool scrollbarVisible);
	virtual int32_t itemsInWindow();
	virtual void keyPressed(::java::awt::event::KeyEvent* e);
	virtual int32_t lastItemDisplayed();
	virtual void layout() override;
	virtual void makeVisible(int32_t index) override;
	virtual int32_t maxLength();
	virtual void mouseDragged(::java::awt::event::MouseEvent* mouseEvent);
	virtual void mousePressed(::java::awt::event::MouseEvent* mouseEvent);
	virtual void mouseReleased(::java::awt::event::MouseEvent* mouseEvent);
	virtual void notifyValue(::sun::awt::X11::XScrollbar* obj, int32_t type, int32_t v, bool isAdjusting) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintPeer(::java::awt::Graphics* g) override;
	virtual int32_t posInSel(int32_t index);
	using ::sun::awt::X11::XComponentPeer::postInit;
	virtual void postInit(::sun::awt::X11::XCreateWindowParams* params) override;
	using ::sun::awt::X11::XComponentPeer::preInit;
	virtual void preInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual bool prePostEvent(::java::awt::AWTEvent* e) override;
	virtual bool prePostMouseEvent(::java::awt::event::MouseEvent* me);
	virtual void print(::java::awt::Graphics* g) override;
	virtual void removeAll() override;
	using ::sun::awt::X11::XComponentPeer::repaint;
	virtual void repaint() override;
	void repaint(int32_t options);
	void repaint(int32_t firstItem, int32_t lastItem, int32_t options);
	void repaint(int32_t firstItem, int32_t lastItem, int32_t options, ::java::awt::Rectangle* source, ::java::awt::Point* distance);
	virtual void repaintScrollbarRequest(::sun::awt::X11::XScrollbar* scrollbar) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void scrollHorizontal(int32_t x);
	virtual void scrollVertical(int32_t y);
	virtual void select(int32_t index) override;
	virtual void selectItem(int32_t index);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool value) override;
	virtual void setFocusIndex(int32_t value);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setMultipleMode(bool b) override;
	virtual void setMultipleSelections(bool v);
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual int32_t stringLength($String* str);
	virtual $String* toString() override;
	virtual void trackMouseDraggedScroll(::java::awt::event::MouseEvent* mouseEvent);
	virtual void trackMouseReleasedScroll();
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual bool validY(int32_t y);
	virtual bool vsbIsVisible(bool hsbVisible);
	virtual int32_t y2index(int32_t y);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t MARGIN = 2;
	static const int32_t SPACE = 1;
	static const int32_t SCROLLBAR_AREA = 17;
	static const int32_t SCROLLBAR_WIDTH = 13;
	static const int32_t NONE = (-1);
	static const int32_t WINDOW = 0;
	static const int32_t VERSCROLLBAR = 1;
	static const int32_t HORSCROLLBAR = 2;
	static const int32_t DEFAULT_VISIBLE_ROWS = 4;
	static const int32_t HORIZ_SCROLL_AMT = 10;
	static const int32_t PAINT_VSCROLL = 2;
	static const int32_t PAINT_HSCROLL = 4;
	static const int32_t PAINT_ITEMS = 8;
	static const int32_t PAINT_FOCUS = 16;
	static const int32_t PAINT_BACKGROUND = 32;
	static const int32_t PAINT_HIDEFOCUS = 64;
	static const int32_t PAINT_ALL = 62; // PAINT_VSCROLL | PAINT_HSCROLL | PAINT_ITEMS | PAINT_FOCUS | PAINT_BACKGROUND
	static const int32_t COPY_AREA = 128;
	::sun::awt::X11::XVerticalScrollbar* vsb = nullptr;
	::sun::awt::X11::XHorizontalScrollbar* hsb = nullptr;
	::sun::awt::X11::XListPeer$ListPainter* painter = nullptr;
	::java::util::Vector* items = nullptr;
	bool multipleSelections = false;
	int32_t active = 0;
	$ints* selected = nullptr;
	int32_t fontHeight = 0;
	int32_t fontAscent = 0;
	int32_t fontLeading = 0;
	int32_t currentIndex = 0;
	int32_t eventIndex = 0;
	int32_t eventType = 0;
	int32_t focusIndex = 0;
	int32_t maxLength$ = 0;
	bool vsbVis = false;
	bool hsbVis = false;
	int32_t listWidth = 0;
	int32_t listHeight = 0;
	int32_t firstTimeVisibleIndex = 0;
	bool bgColorSet = false;
	bool fgColorSet = false;
	bool mouseDraggedOutHorizontally = false;
	bool mouseDraggedOutVertically = false;
	bool isScrollBarOriginated = false;
	bool isMousePressed = false;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("COPY_AREA")
#pragma pop_macro("DEFAULT_VISIBLE_ROWS")
#pragma pop_macro("HORIZ_SCROLL_AMT")
#pragma pop_macro("HORSCROLLBAR")
#pragma pop_macro("MARGIN")
#pragma pop_macro("NONE")
#pragma pop_macro("PAINT_ALL")
#pragma pop_macro("PAINT_BACKGROUND")
#pragma pop_macro("PAINT_FOCUS")
#pragma pop_macro("PAINT_HIDEFOCUS")
#pragma pop_macro("PAINT_HSCROLL")
#pragma pop_macro("PAINT_ITEMS")
#pragma pop_macro("PAINT_VSCROLL")
#pragma pop_macro("SCROLLBAR_AREA")
#pragma pop_macro("SCROLLBAR_WIDTH")
#pragma pop_macro("SPACE")
#pragma pop_macro("VERSCROLLBAR")
#pragma pop_macro("WINDOW")

#endif // _sun_awt_X11_XListPeer_h_
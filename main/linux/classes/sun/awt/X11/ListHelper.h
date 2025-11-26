#ifndef _sun_awt_X11_ListHelper_h_
#define _sun_awt_X11_ListHelper_h_
//$ class sun.awt.X11.ListHelper
//$ extends sun.awt.X11.XScrollbarClient

#include <java/lang/Array.h>
#include <sun/awt/X11/XScrollbarClient.h>

#pragma push_macro("BORDER")
#undef BORDER
#pragma push_macro("BORDER_WIDTH")
#undef BORDER_WIDTH
#pragma push_macro("FOCUS_INSET")
#undef FOCUS_INSET
#pragma push_macro("ITEM_MARGIN")
#undef ITEM_MARGIN
#pragma push_macro("MARGIN")
#undef MARGIN
#pragma push_macro("SCROLLBAR")
#undef SCROLLBAR
#pragma push_macro("SCROLLBAR_WIDTH")
#undef SCROLLBAR_WIDTH
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("TEXT_SPACE")
#undef TEXT_SPACE

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Font;
		class FontMetrics;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
			class MouseWheelEvent;
		}
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
			class XHorizontalScrollbar;
			class XScrollbar;
			class XVerticalScrollbar;
			class XWindow;
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

class ListHelper : public ::sun::awt::X11::XScrollbarClient {
	$class(ListHelper, 0, ::sun::awt::X11::XScrollbarClient)
public:
	ListHelper();
	void init$(::sun::awt::X11::XWindow* peer, $Array<::java::awt::Color>* colors, int32_t initialSize, bool multiSelect, bool scrollVert, bool scrollHoriz, ::java::awt::Font* font, int32_t maxVisItems, int32_t SPACE, int32_t MARGIN, int32_t BORDER, int32_t SCROLLBAR);
	void add($String* item);
	void add($String* item, int32_t index);
	bool checkVsbVisibilityChangedAndReset();
	void deselect(int32_t index);
	static bool doWheelScroll(::sun::awt::X11::XVerticalScrollbar* vsb, ::sun::awt::X11::XHorizontalScrollbar* hsb, ::java::awt::event::MouseWheelEvent* e);
	void down();
	void end();
	int32_t firstDisplayedIndex();
	virtual ::java::awt::Component* getEventSource() override;
	::sun::awt::X11::XHorizontalScrollbar* getHSB();
	$String* getItem(int32_t index);
	int32_t getItemCount();
	int32_t getItemHeight();
	int32_t getMaxItemWidth();
	int32_t getNumItemsDisplayed();
	int32_t getSelectedIndex();
	$ints* getSelectedIndexes();
	::sun::awt::X11::XVerticalScrollbar* getVSB();
	void handleVSBEvent(::java::awt::event::MouseEvent* e, ::java::awt::Rectangle* bounds, int32_t x, int32_t y);
	void home();
	bool isEmpty();
	bool isFocusedIndex(int32_t index);
	bool isHSBVisible();
	bool isInHorizSB(::java::awt::Rectangle* bounds, int32_t x, int32_t y);
	bool isInVertSB(::java::awt::Rectangle* bounds, int32_t x, int32_t y);
	bool isItemSelected(int32_t index);
	bool isVSBVisible();
	int32_t lastDisplayedIndex();
	void makeVisible(int32_t index);
	virtual void notifyValue(::sun::awt::X11::XScrollbar* obj, int32_t type, int32_t v, bool isAdjusting) override;
	void pageDown();
	void pageUp();
	void paintAllItems(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, ::java::awt::Rectangle* bounds);
	void paintHSB(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, ::java::awt::Rectangle* bounds);
	void paintItem(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, $String* string, int32_t x, int32_t y, int32_t width, int32_t height, bool selected, bool focused);
	void paintItems(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, ::java::awt::Rectangle* bounds);
	void paintItems(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, ::java::awt::Rectangle* bounds, int32_t first, int32_t last);
	void paintVSB(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, ::java::awt::Rectangle* bounds);
	void remove($String* item);
	void remove(int32_t index);
	void removeAll();
	virtual void repaintScrollbarRequest(::sun::awt::X11::XScrollbar* sb) override;
	void select(int32_t index);
	void setFocusedIndex(int32_t index);
	void setFont(::java::awt::Font* newFont);
	void setMultiSelect(bool ms);
	void trackMouseDraggedScroll(int32_t mouseX, int32_t mouseY, int32_t listWidth, int32_t listHeight);
	void trackMouseReleasedScroll();
	void up();
	void updateColors($Array<::java::awt::Color>* newColors);
	void updateScrollbars();
	int32_t y2index(int32_t y);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t FOCUS_INSET = 1;
	int32_t BORDER_WIDTH = 0;
	int32_t ITEM_MARGIN = 0;
	int32_t TEXT_SPACE = 0;
	int32_t SCROLLBAR_WIDTH = 0;
	::java::util::List* items = nullptr;
	::java::util::List* selected = nullptr;
	bool multiSelect = false;
	int32_t focusedIndex = 0;
	int32_t maxVisItems = 0;
	::sun::awt::X11::XVerticalScrollbar* vsb = nullptr;
	bool vsbVis = false;
	::sun::awt::X11::XHorizontalScrollbar* hsb = nullptr;
	bool hsbVis = false;
	::java::awt::Font* font = nullptr;
	::java::awt::FontMetrics* fm = nullptr;
	::sun::awt::X11::XWindow* peer = nullptr;
	$Array<::java::awt::Color>* colors = nullptr;
	bool mouseDraggedOutVertically = false;
	$volatile(bool) vsbVisibilityChanged = false;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BORDER")
#pragma pop_macro("BORDER_WIDTH")
#pragma pop_macro("FOCUS_INSET")
#pragma pop_macro("ITEM_MARGIN")
#pragma pop_macro("MARGIN")
#pragma pop_macro("SCROLLBAR")
#pragma pop_macro("SCROLLBAR_WIDTH")
#pragma pop_macro("SPACE")
#pragma pop_macro("TEXT_SPACE")

#endif // _sun_awt_X11_ListHelper_h_
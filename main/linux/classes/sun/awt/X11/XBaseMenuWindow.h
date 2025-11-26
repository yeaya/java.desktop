#ifndef _sun_awt_X11_XBaseMenuWindow_h_
#define _sun_awt_X11_XBaseMenuWindow_h_
//$ class sun.awt.X11.XBaseMenuWindow
//$ extends sun.awt.X11.XWindow

#include <java/lang/Array.h>
#include <sun/awt/X11/XWindow.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
		class Component;
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class MenuItem;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
			class PaintEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Vector;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class AwtGraphicsConfigData;
			class PropMwmHints;
			class XBaseMenuWindow$MappingData;
			class XCreateWindowParams;
			class XEvent;
			class XMenuItemPeer;
			class XMenuPeer;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
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

class XBaseMenuWindow : public ::sun::awt::X11::XWindow {
	$class(XBaseMenuWindow, 0, ::sun::awt::X11::XWindow)
public:
	XBaseMenuWindow();
	using ::sun::awt::X11::XWindow::getGraphics;
	using ::sun::awt::X11::XWindow::handleKeyPress;
	void init$();
	virtual void addItem(::java::awt::MenuItem* item);
	virtual $Array<::sun::awt::X11::XMenuItemPeer>* copyItems();
	virtual void delItem(int32_t index);
	virtual void dispose() override;
	virtual void doDispose();
	virtual void doHandleJavaKeyEvent(::java::awt::event::KeyEvent* event);
	virtual void doHandleJavaMouseEvent(::java::awt::event::MouseEvent* mouseEvent);
	virtual void doHandleJavaPaintEvent(::java::awt::event::PaintEvent* event);
	virtual void doLayout(int32_t x, int32_t y, int32_t width, int32_t height) override;
	void doShowSubmenu(::sun::awt::X11::XMenuPeer* submenuToShow);
	virtual void draw3DRect(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, bool raised);
	virtual ::java::awt::Rectangle* fitWindowAbove(::java::awt::Rectangle* itemBounds, ::java::awt::Dimension* windowSize, ::java::awt::Rectangle* screenBounds);
	virtual ::java::awt::Rectangle* fitWindowBelow(::java::awt::Rectangle* itemBounds, ::java::awt::Dimension* windowSize, ::java::awt::Rectangle* screenBounds);
	virtual ::java::awt::Rectangle* fitWindowLeft(::java::awt::Rectangle* itemBounds, ::java::awt::Dimension* windowSize, ::java::awt::Rectangle* screenBounds);
	virtual ::java::awt::Rectangle* fitWindowRight(::java::awt::Rectangle* itemBounds, ::java::awt::Dimension* windowSize, ::java::awt::Rectangle* screenBounds);
	virtual ::java::awt::Rectangle* fitWindowToScreen(::java::awt::Dimension* windowSize, ::java::awt::Rectangle* screenBounds);
	virtual ::java::awt::Color* getBackgroundColor();
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	virtual ::java::awt::GraphicsConfiguration* getCurrentGraphicsConfiguration();
	virtual ::java::awt::Color* getDarkShadowColor();
	virtual ::java::awt::Color* getDisabledColor();
	virtual ::java::awt::Component* getEventSource() override;
	virtual ::sun::awt::X11::XMenuItemPeer* getFirstSelectableItem();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Color* getForegroundColor();
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::sun::awt::X11::AwtGraphicsConfigData* getGraphicsConfigurationData() override;
	virtual ::sun::awt::X11::XMenuItemPeer* getItem(int32_t index);
	virtual ::sun::awt::X11::XMenuItemPeer* getItemFromPoint(::java::awt::Point* pt);
	virtual ::java::awt::Color* getLightShadowColor();
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::sun::awt::X11::PropMwmHints* getMWMHints() override;
	virtual ::sun::awt::X11::XBaseMenuWindow$MappingData* getMappingData();
	static $Object* getMenuTreeLock();
	virtual ::sun::awt::X11::XBaseMenuWindow* getMenuWindowFromPoint(::java::awt::Point* pt);
	virtual ::sun::awt::X11::XMenuItemPeer* getNextSelectableItem();
	virtual ::sun::awt::X11::XBaseMenuWindow* getParentMenuWindow() {return nullptr;}
	virtual ::sun::awt::X11::XMenuItemPeer* getPrevSelectableItem();
	virtual ::sun::awt::X11::XBaseMenuWindow* getRootMenuWindow();
	virtual ::java::awt::Color* getSelectedColor();
	virtual ::sun::awt::X11::XMenuItemPeer* getSelectedItem();
	virtual ::sun::awt::X11::XBaseMenuWindow* getShowingLeaf();
	virtual ::sun::awt::X11::XMenuPeer* getShowingSubmenu();
	virtual ::java::awt::Rectangle* getSubmenuBounds(::java::awt::Rectangle* itemBounds, ::java::awt::Dimension* windowSize) {return nullptr;}
	virtual ::sun::java2d::SurfaceData* getSurfaceData() override;
	virtual $Object* getTarget() override;
	virtual ::java::awt::Rectangle* getTargetBounds() override;
	virtual ::java::awt::Color* getWinBackground() override;
	virtual bool grabInput() override;
	virtual void handleButtonPressRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleEvent(::java::awt::AWTEvent* event);
	virtual void handleExposeEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev) override;
	virtual void handleKeyRelease(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleMotionNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev) override;
	virtual void handleUnmapNotifyEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleXCrossingEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void instantPreInit(::sun::awt::X11::XCreateWindowParams* params) override;
	virtual bool isEmbedded() override;
	virtual bool isEventDisabled(::sun::awt::X11::XEvent* e) override;
	virtual bool isMouseAbove() override;
	virtual void layout() override;
	virtual ::sun::awt::X11::XBaseMenuWindow$MappingData* map() {return nullptr;}
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void popup(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void postEvent(::java::awt::AWTEvent* event) override;
	virtual void postEventToEventQueue(::java::awt::AWTEvent* event) override;
	using ::sun::awt::X11::XWindow::postInit;
	virtual void postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode) override;
	virtual void postPaintEvent();
	virtual void postPaintEvent(::java::awt::Component* target, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::sun::awt::X11::XWindow::preInit;
	virtual void reloadItems(::java::util::Vector* items);
	virtual void replaceColors(::java::awt::Color* backgroundColor);
	virtual void resetColors();
	virtual void resetMapping();
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void reshape(::java::awt::Rectangle* bounds) override;
	virtual void selectItem(::sun::awt::X11::XMenuItemPeer* item, bool showWindowIfMenu);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setFullScreenExclusiveModeState(bool state) override;
	void setItemsFont(::java::awt::Font* font);
	virtual void setMWMHints(::sun::awt::X11::PropMwmHints* hints) override;
	virtual void updateSize() {}
	static ::sun::util::logging::PlatformLogger* log;
	::java::awt::Color* backgroundColor = nullptr;
	::java::awt::Color* foregroundColor = nullptr;
	::java::awt::Color* lightShadowColor = nullptr;
	::java::awt::Color* darkShadowColor = nullptr;
	::java::awt::Color* selectedColor = nullptr;
	::java::awt::Color* disabledColor = nullptr;
	::java::util::ArrayList* items = nullptr;
	int32_t selectedIndex = 0;
	::sun::awt::X11::XMenuPeer* showingSubmenu = nullptr;
	static $Object* menuTreeLock;
	::sun::awt::X11::XMenuPeer* showingMousePressedSubmenu = nullptr;
	::java::awt::Point* grabInputPoint = nullptr;
	bool hasPointerMoved = false;
	::sun::awt::AppContext* disposeAppContext = nullptr;
	::sun::awt::X11::XBaseMenuWindow$MappingData* mappingData = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XBaseMenuWindow_h_
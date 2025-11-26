#ifndef _sun_awt_X11_XMenuItemPeer_h_
#define _sun_awt_X11_XMenuItemPeer_h_
//$ class sun.awt.X11.XMenuItemPeer
//$ extends java.awt.peer.MenuItemPeer

#include <java/awt/peer/MenuItemPeer.h>

#pragma push_macro("SEPARATOR_HEIGHT")
#undef SEPARATOR_HEIGHT
#pragma push_macro("SEPARATOR_WIDTH")
#undef SEPARATOR_WIDTH

namespace java {
	namespace awt {
		class Font;
		class MenuItem;
		class MenuShortcut;
		class Point;
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XBaseMenuWindow;
			class XMenuItemPeer$TextMetrics;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMenuItemPeer : public ::java::awt::peer::MenuItemPeer {
	$class(XMenuItemPeer, $NO_CLASS_INIT, ::java::awt::peer::MenuItemPeer)
public:
	XMenuItemPeer();
	void init$(::java::awt::MenuItem* target);
	virtual void action(int64_t when, int32_t modifiers);
	virtual ::sun::awt::X11::XMenuItemPeer$TextMetrics* calcTextMetrics();
	virtual void dispose() override;
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::sun::awt::X11::XBaseMenuWindow* getContainer();
	virtual $String* getShortcutText();
	virtual ::java::awt::MenuItem* getTarget();
	virtual $String* getTargetActionCommand();
	virtual ::java::awt::Font* getTargetFont();
	virtual $String* getTargetLabel();
	virtual ::java::awt::MenuShortcut* getTargetShortcut();
	virtual ::sun::awt::X11::XMenuItemPeer$TextMetrics* getTextMetrics();
	virtual ::java::awt::Point* getTextOrigin();
	virtual bool isContainerShowing();
	virtual bool isSeparator();
	virtual bool isTargetEnabled();
	virtual bool isTargetItemEnabled();
	virtual void map(::java::awt::Rectangle* bounds, ::java::awt::Point* textOrigin);
	virtual void repaintIfShowing();
	virtual void resetTextMetrics();
	virtual void setContainer(::sun::awt::X11::XBaseMenuWindow* container);
	virtual void setEnabled(bool enabled) override;
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setLabel($String* label) override;
	::sun::awt::X11::XBaseMenuWindow* container = nullptr;
	::java::awt::MenuItem* target = nullptr;
	::java::awt::Rectangle* bounds = nullptr;
	::java::awt::Point* textOrigin = nullptr;
	static const int32_t SEPARATOR_WIDTH = 20;
	static const int32_t SEPARATOR_HEIGHT = 5;
	::sun::awt::X11::XMenuItemPeer$TextMetrics* textMetrics = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("SEPARATOR_HEIGHT")
#pragma pop_macro("SEPARATOR_WIDTH")

#endif // _sun_awt_X11_XMenuItemPeer_h_
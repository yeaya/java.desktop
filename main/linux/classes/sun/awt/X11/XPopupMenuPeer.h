#ifndef _sun_awt_X11_XPopupMenuPeer_h_
#define _sun_awt_X11_XPopupMenuPeer_h_
//$ class sun.awt.X11.XPopupMenuPeer
//$ extends sun.awt.X11.XMenuWindow
//$ implements java.awt.peer.PopupMenuPeer

#include <java/awt/peer/PopupMenuPeer.h>
#include <sun/awt/X11/XMenuWindow.h>

#pragma push_macro("CAPTION_MARGIN_TOP")
#undef CAPTION_MARGIN_TOP
#pragma push_macro("CAPTION_SEPARATOR_HEIGHT")
#undef CAPTION_SEPARATOR_HEIGHT

namespace java {
	namespace awt {
		class AWTEvent;
		class Dimension;
		class Event;
		class Font;
		class Graphics;
		class Point;
		class PopupMenu;
		class Rectangle;
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
			class XComponentPeer;
			class XEvent;
			class XMenuPeer;
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

class XPopupMenuPeer : public ::sun::awt::X11::XMenuWindow, public ::java::awt::peer::PopupMenuPeer {
	$class(XPopupMenuPeer, 0, ::sun::awt::X11::XMenuWindow, ::java::awt::peer::PopupMenuPeer)
public:
	XPopupMenuPeer();
	using ::sun::awt::X11::XMenuWindow::getGraphics;
	using ::sun::awt::X11::XMenuWindow::handleKeyPress;
	virtual void addItem(::java::awt::MenuItem* item) override;
	virtual $Object* clone() override;
	virtual void delItem(int32_t index) override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::PopupMenu* target);
	virtual void doDispose() override;
	virtual ::java::awt::Dimension* getCaptionSize() override;
	virtual ::java::util::Vector* getMenuTargetItems() override;
	virtual ::java::awt::Font* getTargetFont();
	virtual $String* getTargetLabel();
	virtual ::java::awt::Rectangle* getWindowBounds(::java::awt::Point* origin, ::java::awt::Dimension* windowSize);
	virtual void handleEvent(::java::awt::AWTEvent* event) override;
	virtual void handleKeyPress(::sun::awt::X11::XEvent* xev) override;
	virtual bool isTargetEnabled();
	virtual void paintCaption(::java::awt::Graphics* g, ::java::awt::Rectangle* rect) override;
	using ::sun::awt::X11::XMenuWindow::postInit;
	using ::sun::awt::X11::XMenuWindow::preInit;
	virtual void setEnabled(bool enabled) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLabel($String* label) override;
	using ::sun::awt::X11::XMenuWindow::show;
	virtual void show(::java::awt::Event* e) override;
	virtual $String* toString() override;
	virtual void ungrabInputImpl() override;
	static ::sun::util::logging::PlatformLogger* log;
	::sun::awt::X11::XComponentPeer* componentPeer = nullptr;
	::java::awt::PopupMenu* popupMenuTarget = nullptr;
	::sun::awt::X11::XMenuPeer* showingMousePressedSubmenu = nullptr;
	static const int32_t CAPTION_MARGIN_TOP = 4;
	static const int32_t CAPTION_SEPARATOR_HEIGHT = 6;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("CAPTION_MARGIN_TOP")
#pragma pop_macro("CAPTION_SEPARATOR_HEIGHT")

#endif // _sun_awt_X11_XPopupMenuPeer_h_
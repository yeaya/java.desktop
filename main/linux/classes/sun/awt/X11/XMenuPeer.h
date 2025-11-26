#ifndef _sun_awt_X11_XMenuPeer_h_
#define _sun_awt_X11_XMenuPeer_h_
//$ class sun.awt.X11.XMenuPeer
//$ extends sun.awt.X11.XMenuItemPeer
//$ implements java.awt.peer.MenuPeer

#include <java/awt/peer/MenuPeer.h>
#include <sun/awt/X11/XMenuItemPeer.h>

namespace java {
	namespace awt {
		class Font;
		class Menu;
		class MenuItem;
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
			class XBaseMenuWindow;
			class XMenuWindow;
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

class XMenuPeer : public ::sun::awt::X11::XMenuItemPeer, public ::java::awt::peer::MenuPeer {
	$class(XMenuPeer, 0, ::sun::awt::X11::XMenuItemPeer, ::java::awt::peer::MenuPeer)
public:
	XMenuPeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Menu* target);
	virtual void addItem(::java::awt::MenuItem* item) override;
	virtual void delItem(int32_t index) override;
	virtual void dispose() override;
	virtual ::sun::awt::X11::XMenuWindow* getMenuWindow();
	virtual $String* getShortcutText() override;
	virtual ::java::util::Vector* getTargetItems();
	virtual bool isSeparator() override;
	virtual void setContainer(::sun::awt::X11::XBaseMenuWindow* container) override;
	virtual void setEnabled(bool enabled) override;
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setLabel($String* label) override;
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	::sun::awt::X11::XMenuWindow* menuWindow = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMenuPeer_h_
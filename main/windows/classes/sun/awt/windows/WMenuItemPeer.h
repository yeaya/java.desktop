#ifndef _sun_awt_windows_WMenuItemPeer_h_
#define _sun_awt_windows_WMenuItemPeer_h_
//$ class sun.awt.windows.WMenuItemPeer
//$ extends sun.awt.windows.WObjectPeer
//$ implements java.awt.peer.MenuItemPeer

#include <java/awt/peer/MenuItemPeer.h>
#include <sun/awt/windows/WObjectPeer.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Font;
		class MenuItem;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WMenuPeer;
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
		namespace windows {

class WMenuItemPeer : public ::sun::awt::windows::WObjectPeer, public ::java::awt::peer::MenuItemPeer {
	$class(WMenuItemPeer, 0, ::sun::awt::windows::WObjectPeer, ::java::awt::peer::MenuItemPeer)
public:
	WMenuItemPeer();
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::MenuItem* target);
	void init$(::java::awt::MenuItem* target, bool isCheckbox);
	void _dispose();
	void _setFont(::java::awt::Font* f);
	virtual void _setLabel($String* label);
	virtual void checkMenuCreation();
	virtual void create(::sun::awt::windows::WMenuPeer* parent);
	virtual void disposeImpl() override;
	virtual void enable(bool e);
	static ::java::awt::Font* getDefaultFont();
	virtual void handleAction(int64_t when, int32_t modifiers);
	static void initIDs();
	virtual void postEvent(::java::awt::AWTEvent* event);
	void readShortcutLabel();
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLabel($String* label) override;
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	$String* shortcutLabel = nullptr;
	::sun::awt::windows::WMenuPeer* parent = nullptr;
	bool isCheckbox = false;
	static ::java::awt::Font* defaultMenuFont;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WMenuItemPeer_h_
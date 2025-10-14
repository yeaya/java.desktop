#ifndef _sun_awt_windows_WMenuPeer_h_
#define _sun_awt_windows_WMenuPeer_h_
//$ class sun.awt.windows.WMenuPeer
//$ extends sun.awt.windows.WMenuItemPeer
//$ implements java.awt.peer.MenuPeer

#include <java/awt/peer/MenuPeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>

namespace java {
	namespace awt {
		class Menu;
		class MenuItem;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WMenuBarPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WMenuPeer : public ::sun::awt::windows::WMenuItemPeer, public ::java::awt::peer::MenuPeer {
	$class(WMenuPeer, $NO_CLASS_INIT, ::sun::awt::windows::WMenuItemPeer, ::java::awt::peer::MenuPeer)
public:
	WMenuPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::Menu* target);
	virtual void addItem(::java::awt::MenuItem* item) override;
	virtual void createMenu(::sun::awt::windows::WMenuBarPeer* parent);
	virtual void createSubMenu(::sun::awt::windows::WMenuPeer* parent);
	virtual void delItem(int32_t index) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLabel($String* label) override;
	virtual $String* toString() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WMenuPeer_h_
#ifndef _sun_lwawt_macosx_CPopupMenu_h_
#define _sun_lwawt_macosx_CPopupMenu_h_
//$ class sun.lwawt.macosx.CPopupMenu
//$ extends sun.lwawt.macosx.CMenu
//$ implements java.awt.peer.PopupMenuPeer

#include <java/awt/peer/PopupMenuPeer.h>
#include <sun/lwawt/macosx/CMenu.h>

namespace java {
	namespace awt {
		class Event;
		class PopupMenu;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPopupMenu : public ::sun::lwawt::macosx::CMenu, public ::java::awt::peer::PopupMenuPeer {
	$class(CPopupMenu, $NO_CLASS_INIT, ::sun::lwawt::macosx::CMenu, ::java::awt::peer::PopupMenuPeer)
public:
	CPopupMenu();
	virtual void addItem(::java::awt::MenuItem* item) override;
	virtual $Object* clone() override;
	virtual void delItem(int32_t index) override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::PopupMenu* target);
	virtual int64_t createModel() override;
	void lambda$show$0(::java::awt::Event* e, int64_t ptr);
	int64_t nativeCreatePopupMenu();
	int64_t nativeShowPopupMenu(int64_t modelPtr, int32_t x, int32_t y);
	using ::sun::lwawt::macosx::CMenu::setLabel;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLabel($String* label) override;
	virtual void show(::java::awt::Event* e) override;
	virtual $String* toString() override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPopupMenu_h_
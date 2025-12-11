#ifndef _sun_lwawt_macosx_CMenu_h_
#define _sun_lwawt_macosx_CMenu_h_
//$ class sun.lwawt.macosx.CMenu
//$ extends sun.lwawt.macosx.CMenuItem
//$ implements java.awt.peer.MenuPeer

#include <java/awt/peer/MenuPeer.h>
#include <sun/lwawt/macosx/CMenuItem.h>

namespace java {
	namespace awt {
		class Menu;
		class MenuItem;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenu : public ::sun::lwawt::macosx::CMenuItem, public ::java::awt::peer::MenuPeer {
	$class(CMenu, $NO_CLASS_INIT, ::sun::lwawt::macosx::CMenuItem, ::java::awt::peer::MenuPeer)
public:
	CMenu();
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Menu* target);
	virtual void addItem(::java::awt::MenuItem* item) override;
	virtual int64_t createModel() override;
	virtual void delItem(int32_t index) override;
	int64_t getNativeMenu();
	virtual void initialize(::java::awt::MenuItem* target) override;
	int64_t lambda$createModel$0(bool isHelpMenu, int32_t insertionLocation, int64_t ptr);
	void lambda$delItem$1(int32_t index, int64_t ptr);
	void lambda$setLabel$2($String* label, int64_t ptr);
	int64_t nativeCreateMenu(int64_t parentMenuPtr, bool isHelpMenu, int32_t insertionLocation);
	int64_t nativeCreateSubMenu(int64_t parentMenuPtr);
	void nativeDeleteItem(int64_t menuPtr, int32_t index);
	int64_t nativeGetNSMenu(int64_t menuPtr);
	void nativeSetMenuTitle(int64_t menuPtr, $String* title);
	virtual void setEnabled(bool b) override;
	using ::sun::lwawt::macosx::CMenuItem::setLabel;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLabel($String* label) override;
	virtual $String* toString() override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CMenu_h_
#ifndef _sun_lwawt_macosx_CMenuBar_h_
#define _sun_lwawt_macosx_CMenuBar_h_
//$ class sun.lwawt.macosx.CMenuBar
//$ extends sun.lwawt.macosx.CMenuComponent
//$ implements java.awt.peer.MenuBarPeer

#include <java/awt/peer/MenuBarPeer.h>
#include <sun/lwawt/macosx/CMenuComponent.h>

namespace java {
	namespace awt {
		class Menu;
		class MenuBar;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CMenu;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenuBar : public ::sun::lwawt::macosx::CMenuComponent, public ::java::awt::peer::MenuBarPeer {
	$class(CMenuBar, $NO_CLASS_INIT, ::sun::lwawt::macosx::CMenuComponent, ::java::awt::peer::MenuBarPeer)
public:
	CMenuBar();
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MenuBar* target);
	virtual void addHelpMenu(::java::awt::Menu* m) override;
	virtual void addMenu(::java::awt::Menu* m) override;
	virtual int64_t createModel() override;
	virtual void delMenu(int32_t index) override;
	int32_t getNextInsertionIndex();
	void lambda$addHelpMenu$0(int64_t parentPtr, int64_t menuPtr);
	void lambda$addHelpMenu$1(::sun::lwawt::macosx::CMenu* cMenu, int64_t parentPtr);
	void lambda$delMenu$2(int32_t index, int64_t ptr);
	int64_t nativeCreateMenuBar();
	void nativeDelMenu(int64_t menuBarPtr, int32_t index);
	void nativeSetHelpMenu(int64_t menuBarPtr, int64_t menuPtr);
	virtual void setFont(::java::awt::Font* f) override;
	void setNextInsertionIndex(int32_t index);
	virtual $String* toString() override;
	int32_t nextInsertionIndex = 0;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CMenuBar_h_
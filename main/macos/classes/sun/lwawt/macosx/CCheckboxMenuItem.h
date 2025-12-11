#ifndef _sun_lwawt_macosx_CCheckboxMenuItem_h_
#define _sun_lwawt_macosx_CCheckboxMenuItem_h_
//$ class sun.lwawt.macosx.CCheckboxMenuItem
//$ extends sun.lwawt.macosx.CMenuItem
//$ implements java.awt.peer.CheckboxMenuItemPeer

#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <sun/lwawt/macosx/CMenuItem.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CCheckboxMenuItem : public ::sun::lwawt::macosx::CMenuItem, public ::java::awt::peer::CheckboxMenuItemPeer {
	$class(CCheckboxMenuItem, $NO_CLASS_INIT, ::sun::lwawt::macosx::CMenuItem, ::java::awt::peer::CheckboxMenuItemPeer)
public:
	CCheckboxMenuItem();
	using ::sun::lwawt::macosx::CMenuItem::handleAction;
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::CheckboxMenuItem* target);
	virtual void handleAction(bool state);
	bool isAutoToggle();
	void lambda$setState$0(bool state, int64_t ptr);
	void nativeSetIsCheckbox(int64_t modelPtr);
	void nativeSetState(int64_t modelPtr, bool state);
	virtual void setAutoToggle(bool b);
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setIsIndeterminate(bool indeterminate);
	using ::sun::lwawt::macosx::CMenuItem::setLabel;
	virtual void setLabel($String* label) override;
	virtual void setState(bool state) override;
	virtual $String* toString() override;
	$volatile(bool) fAutoToggle = false;
	$volatile(bool) fIsIndeterminate = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CCheckboxMenuItem_h_
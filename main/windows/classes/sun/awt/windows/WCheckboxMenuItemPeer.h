#ifndef _sun_awt_windows_WCheckboxMenuItemPeer_h_
#define _sun_awt_windows_WCheckboxMenuItemPeer_h_
//$ class sun.awt.windows.WCheckboxMenuItemPeer
//$ extends sun.awt.windows.WMenuItemPeer
//$ implements java.awt.peer.CheckboxMenuItemPeer

#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WCheckboxMenuItemPeer : public ::sun::awt::windows::WMenuItemPeer, public ::java::awt::peer::CheckboxMenuItemPeer {
	$class(WCheckboxMenuItemPeer, $NO_CLASS_INIT, ::sun::awt::windows::WMenuItemPeer, ::java::awt::peer::CheckboxMenuItemPeer)
public:
	WCheckboxMenuItemPeer();
	using ::sun::awt::windows::WMenuItemPeer::handleAction;
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::CheckboxMenuItem* target);
	void handleAction(bool state);
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLabel($String* label) override;
	virtual void setState(bool t) override;
	virtual $String* toString() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WCheckboxMenuItemPeer_h_
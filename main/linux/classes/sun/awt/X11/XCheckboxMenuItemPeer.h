#ifndef _sun_awt_X11_XCheckboxMenuItemPeer_h_
#define _sun_awt_X11_XCheckboxMenuItemPeer_h_
//$ class sun.awt.X11.XCheckboxMenuItemPeer
//$ extends sun.awt.X11.XMenuItemPeer
//$ implements java.awt.peer.CheckboxMenuItemPeer

#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <sun/awt/X11/XMenuItemPeer.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XCheckboxMenuItemPeer : public ::sun::awt::X11::XMenuItemPeer, public ::java::awt::peer::CheckboxMenuItemPeer {
	$class(XCheckboxMenuItemPeer, $NO_CLASS_INIT, ::sun::awt::X11::XMenuItemPeer, ::java::awt::peer::CheckboxMenuItemPeer)
public:
	XCheckboxMenuItemPeer();
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::CheckboxMenuItem* target);
	virtual void action(int64_t when, int32_t modifiers) override;
	void doToggleState(int64_t when);
	bool getTargetState();
	virtual void setEnabled(bool enabled) override;
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setLabel($String* label) override;
	virtual void setState(bool t) override;
	virtual $String* toString() override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XCheckboxMenuItemPeer_h_
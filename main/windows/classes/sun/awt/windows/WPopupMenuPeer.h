#ifndef _sun_awt_windows_WPopupMenuPeer_h_
#define _sun_awt_windows_WPopupMenuPeer_h_
//$ class sun.awt.windows.WPopupMenuPeer
//$ extends sun.awt.windows.WMenuPeer
//$ implements java.awt.peer.PopupMenuPeer

#include <java/awt/peer/PopupMenuPeer.h>
#include <sun/awt/windows/WMenuPeer.h>

namespace java {
	namespace awt {
		class Component;
		class Event;
		class Point;
		class PopupMenu;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WPopupMenuPeer : public ::sun::awt::windows::WMenuPeer, public ::java::awt::peer::PopupMenuPeer {
	$class(WPopupMenuPeer, $NO_CLASS_INIT, ::sun::awt::windows::WMenuPeer, ::java::awt::peer::PopupMenuPeer)
public:
	WPopupMenuPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::windows::WMenuPeer::createMenu;
	virtual void addItem(::java::awt::MenuItem* item) override;
	virtual $Object* clone() override;
	virtual void delItem(int32_t index) override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::PopupMenu* target);
	void _show(::java::awt::Event* e);
	void createMenu(::sun::awt::windows::WComponentPeer* parent);
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setLabel($String* label) override;
	virtual void show(::java::awt::Event* e) override;
	void show(::java::awt::Component* origin, ::java::awt::Point* p);
	virtual $String* toString() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WPopupMenuPeer_h_
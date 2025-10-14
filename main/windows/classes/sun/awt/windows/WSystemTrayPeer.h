#ifndef _sun_awt_windows_WSystemTrayPeer_h_
#define _sun_awt_windows_WSystemTrayPeer_h_
//$ class sun.awt.windows.WSystemTrayPeer
//$ extends sun.awt.windows.WObjectPeer
//$ implements java.awt.peer.SystemTrayPeer

#include <java/awt/peer/SystemTrayPeer.h>
#include <sun/awt/windows/WObjectPeer.h>

namespace java {
	namespace awt {
		class Dimension;
		class SystemTray;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WSystemTrayPeer : public ::sun::awt::windows::WObjectPeer, public ::java::awt::peer::SystemTrayPeer {
	$class(WSystemTrayPeer, $NO_CLASS_INIT, ::sun::awt::windows::WObjectPeer, ::java::awt::peer::SystemTrayPeer)
public:
	WSystemTrayPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::SystemTray* target);
	virtual void disposeImpl() override;
	virtual ::java::awt::Dimension* getTrayIconSize() override;
	bool isSupported();
	virtual $String* toString() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WSystemTrayPeer_h_
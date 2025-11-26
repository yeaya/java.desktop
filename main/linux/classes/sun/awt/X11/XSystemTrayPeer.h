#ifndef _sun_awt_X11_XSystemTrayPeer_h_
#define _sun_awt_X11_XSystemTrayPeer_h_
//$ class sun.awt.X11.XSystemTrayPeer
//$ extends java.awt.peer.SystemTrayPeer
//$ implements sun.awt.X11.XMSelectionListener

#include <java/awt/peer/SystemTrayPeer.h>
#include <sun/awt/X11/XMSelectionListener.h>

#pragma push_macro("SCREEN")
#undef SCREEN
#pragma push_macro("SYSTEM_TRAY_PROPERTY_NAME")
#undef SYSTEM_TRAY_PROPERTY_NAME
#pragma push_macro("SYSTEM_TRAY_REQUEST_DOCK")
#undef SYSTEM_TRAY_REQUEST_DOCK
#pragma push_macro("_NET_SYSTEM_TRAY")
#undef _NET_SYSTEM_TRAY
#pragma push_macro("_NET_SYSTEM_TRAY_OPCODE")
#undef _NET_SYSTEM_TRAY_OPCODE
#pragma push_macro("_NET_WM_ICON")
#undef _NET_WM_ICON
#pragma push_macro("_XEMBED_INFO")
#undef _XEMBED_INFO

namespace java {
	namespace awt {
		class Dimension;
		class SystemTray;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XMSelection;
			class XPropertyEvent;
			class XTrayIconPeer;
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
		namespace X11 {

class XSystemTrayPeer : public ::java::awt::peer::SystemTrayPeer, public ::sun::awt::X11::XMSelectionListener {
	$class(XSystemTrayPeer, 0, ::java::awt::peer::SystemTrayPeer, ::sun::awt::X11::XMSelectionListener)
public:
	XSystemTrayPeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::SystemTray* target);
	virtual void addTrayIcon(::sun::awt::X11::XTrayIconPeer* tiPeer);
	void createTrayPeers();
	virtual void dispose();
	void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	static ::sun::awt::X11::XSystemTrayPeer* getPeerInstance();
	virtual ::java::awt::Dimension* getTrayIconSize() override;
	void invokeOnEachAppContext(::java::lang::Runnable* runnable);
	virtual bool isAvailable();
	virtual void ownerChanged(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t newOwner, int64_t data, int64_t timestamp) override;
	virtual void ownerDeath(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t deadOwner) override;
	void removeTrayPeers();
	virtual void selectionChanged(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t owner, ::sun::awt::X11::XPropertyEvent* event) override;
	virtual void sendMessage(int64_t win, int64_t msg, int64_t data1, int64_t data2, int64_t data3);
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	::java::awt::SystemTray* target = nullptr;
	static ::sun::awt::X11::XSystemTrayPeer* peerInstance;
	$volatile(bool) available = false;
	::sun::awt::X11::XMSelection* selection = nullptr;
	static const int32_t SCREEN = 0;
	static $String* SYSTEM_TRAY_PROPERTY_NAME;
	static ::sun::awt::X11::XAtom* _NET_SYSTEM_TRAY;
	static ::sun::awt::X11::XAtom* _XEMBED_INFO;
	static ::sun::awt::X11::XAtom* _NET_SYSTEM_TRAY_OPCODE;
	static ::sun::awt::X11::XAtom* _NET_WM_ICON;
	static const int64_t SYSTEM_TRAY_REQUEST_DOCK = 0;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("SCREEN")
#pragma pop_macro("SYSTEM_TRAY_PROPERTY_NAME")
#pragma pop_macro("SYSTEM_TRAY_REQUEST_DOCK")
#pragma pop_macro("_NET_SYSTEM_TRAY")
#pragma pop_macro("_NET_SYSTEM_TRAY_OPCODE")
#pragma pop_macro("_NET_WM_ICON")
#pragma pop_macro("_XEMBED_INFO")

#endif // _sun_awt_X11_XSystemTrayPeer_h_
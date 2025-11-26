#ifndef _sun_awt_X11_XTaskbarPeer_h_
#define _sun_awt_X11_XTaskbarPeer_h_
//$ class sun.awt.X11.XTaskbarPeer
//$ extends java.awt.peer.TaskbarPeer

#include <java/awt/peer/TaskbarPeer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class MenuItem;
		class PopupMenu;
		class Taskbar$Feature;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTaskbarPeer : public ::java::awt::peer::TaskbarPeer {
	$class(XTaskbarPeer, 0, ::java::awt::peer::TaskbarPeer)
public:
	XTaskbarPeer();
	void init$();
	virtual ::java::awt::PopupMenu* getMenu() override;
	static bool init($String* name, int32_t version, bool verbose);
	static void initWithLock();
	virtual bool isSupported(::java::awt::Taskbar$Feature* feature) override;
	static bool isTaskbarSupported();
	static void lambda$initWithLock$1();
	static $String* lambda$static$0();
	static void menuItemCallback(::java::awt::MenuItem* mi);
	virtual void requestUserAttention(bool enabled, bool critical) override;
	static void runloop();
	void setBadge(int64_t value, bool visible);
	virtual void setIconBadge($String* badge) override;
	virtual void setMenu(::java::awt::PopupMenu* m) override;
	void setNativeMenu($Array<::java::awt::MenuItem>* items);
	virtual void setProgressValue(int32_t value) override;
	void setUrgent(bool urgent);
	void updateProgress(double value, bool visible);
	static bool nativeLibraryLoaded;
	static bool initExecuted;
	::java::awt::PopupMenu* menu = nullptr;
	static bool isUnity;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTaskbarPeer_h_
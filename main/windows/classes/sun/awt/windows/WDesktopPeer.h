#ifndef _sun_awt_windows_WDesktopPeer_h_
#define _sun_awt_windows_WDesktopPeer_h_
//$ class sun.awt.windows.WDesktopPeer
//$ extends java.awt.peer.DesktopPeer

#include <java/awt/peer/DesktopPeer.h>

#pragma push_macro("ACTION_EDIT_VERB")
#undef ACTION_EDIT_VERB
#pragma push_macro("ACTION_OPEN_VERB")
#undef ACTION_OPEN_VERB
#pragma push_macro("ACTION_PRINT_VERB")
#undef ACTION_PRINT_VERB

namespace java {
	namespace awt {
		class Desktop$Action;
	}
}
namespace java {
	namespace awt {
		namespace desktop {
			class SystemEventListener;
			class SystemSleepListener;
			class UserSessionEvent$Reason;
			class UserSessionListener;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WDesktopPeer : public ::java::awt::peer::DesktopPeer {
	$class(WDesktopPeer, 0, ::java::awt::peer::DesktopPeer)
public:
	WDesktopPeer();
	void init$();
	void ShellExecute(::java::io::File* file, $String* verb);
	void ShellExecute(::java::net::URI* uri, $String* verb);
	static $String* ShellExecute($String* fileOrUri, $String* verb);
	virtual void addAppEventListener(::java::awt::desktop::SystemEventListener* listener) override;
	virtual void browse(::java::net::URI* uri) override;
	virtual void disableSuddenTermination() override;
	virtual void edit(::java::io::File* file) override;
	virtual void enableSuddenTermination() override;
	static void init();
	virtual bool isSupported(::java::awt::Desktop$Action* action) override;
	static void lambda$systemSleepCallback$1(bool resumed, ::java::awt::desktop::SystemSleepListener* ssl);
	static void lambda$userSessionCallback$0(bool activated, ::java::awt::desktop::UserSessionListener* use, ::java::awt::desktop::UserSessionEvent$Reason* reason);
	virtual void mail(::java::net::URI* uri) override;
	virtual bool moveToTrash(::java::io::File* file) override;
	static bool moveToTrash($String* file);
	virtual void open(::java::io::File* file) override;
	virtual void print(::java::io::File* file) override;
	virtual void removeAppEventListener(::java::awt::desktop::SystemEventListener* listener) override;
	static void setSuddenTerminationEnabled(bool enable);
	static void systemSleepCallback(bool resumed);
	static void userSessionCallback(bool activated, ::java::awt::desktop::UserSessionEvent$Reason* reason);
	static $String* ACTION_OPEN_VERB;
	static $String* ACTION_EDIT_VERB;
	static $String* ACTION_PRINT_VERB;
	static ::javax::swing::event::EventListenerList* listenerList;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("ACTION_EDIT_VERB")
#pragma pop_macro("ACTION_OPEN_VERB")
#pragma pop_macro("ACTION_PRINT_VERB")

#endif // _sun_awt_windows_WDesktopPeer_h_
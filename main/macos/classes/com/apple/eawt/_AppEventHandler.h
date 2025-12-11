#ifndef _com_apple_eawt__AppEventHandler_h_
#define _com_apple_eawt__AppEventHandler_h_
//$ class com.apple.eawt._AppEventHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NOTIFY_ABOUT")
#undef NOTIFY_ABOUT
#pragma push_macro("NOTIFY_ACTIVE_APP_GAINED")
#undef NOTIFY_ACTIVE_APP_GAINED
#pragma push_macro("NOTIFY_ACTIVE_APP_LOST")
#undef NOTIFY_ACTIVE_APP_LOST
#pragma push_macro("NOTIFY_APP_HIDDEN")
#undef NOTIFY_APP_HIDDEN
#pragma push_macro("NOTIFY_APP_SHOWN")
#undef NOTIFY_APP_SHOWN
#pragma push_macro("NOTIFY_OPEN_APP")
#undef NOTIFY_OPEN_APP
#pragma push_macro("NOTIFY_PREFS")
#undef NOTIFY_PREFS
#pragma push_macro("NOTIFY_QUIT")
#undef NOTIFY_QUIT
#pragma push_macro("NOTIFY_REOPEN_APP")
#undef NOTIFY_REOPEN_APP
#pragma push_macro("NOTIFY_SCREEN_SLEEP")
#undef NOTIFY_SCREEN_SLEEP
#pragma push_macro("NOTIFY_SCREEN_WAKE")
#undef NOTIFY_SCREEN_WAKE
#pragma push_macro("NOTIFY_SHUTDOWN")
#undef NOTIFY_SHUTDOWN
#pragma push_macro("NOTIFY_SYSTEM_SLEEP")
#undef NOTIFY_SYSTEM_SLEEP
#pragma push_macro("NOTIFY_SYSTEM_WAKE")
#undef NOTIFY_SYSTEM_WAKE
#pragma push_macro("NOTIFY_USER_SESSION_ACTIVE")
#undef NOTIFY_USER_SESSION_ACTIVE
#pragma push_macro("NOTIFY_USER_SESSION_INACTIVE")
#undef NOTIFY_USER_SESSION_INACTIVE
#pragma push_macro("REGISTER_SCREEN_SLEEP")
#undef REGISTER_SCREEN_SLEEP
#pragma push_macro("REGISTER_SYSTEM_SLEEP")
#undef REGISTER_SYSTEM_SLEEP
#pragma push_macro("REGISTER_USER_SESSION")
#undef REGISTER_USER_SESSION

namespace com {
	namespace apple {
		namespace eawt {
			class MacQuitResponse;
			class _AppEventHandler$_AboutDispatcher;
			class _AppEventHandler$_AppForegroundDispatcher;
			class _AppEventHandler$_AppReOpenedDispatcher;
			class _AppEventHandler$_HiddenAppDispatcher;
			class _AppEventHandler$_OpenAppDispatcher;
			class _AppEventHandler$_OpenFileDispatcher;
			class _AppEventHandler$_OpenURIDispatcher;
			class _AppEventHandler$_PreferencesDispatcher;
			class _AppEventHandler$_PrintFileDispatcher;
			class _AppEventHandler$_QuitDispatcher;
			class _AppEventHandler$_ScreenSleepDispatcher;
			class _AppEventHandler$_SystemSleepDispatcher;
			class _AppEventHandler$_UserSessionDispatcher;
		}
	}
}
namespace java {
	namespace awt {
		namespace desktop {
			class QuitStrategy;
			class SystemEventListener;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler : public ::java::lang::Object {
	$class(_AppEventHandler, 0, ::java::lang::Object)
public:
	_AppEventHandler();
	void init$();
	virtual void addListener(::java::awt::desktop::SystemEventListener* listener);
	virtual void cancelQuit();
	static ::com::apple::eawt::_AppEventHandler* getInstance();
	static void handleNativeNotification(int32_t code);
	static void handleOpenFiles(::java::util::List* filenames, $String* searchTerm);
	static void handleOpenURI($String* uri);
	static void handlePrintFiles(::java::util::List* filenames);
	static void nativeOpenCocoaAboutWindow();
	static void nativeRegisterForNotification(int32_t notification);
	static void nativeReplyToAppShouldTerminate(bool shouldTerminate);
	virtual ::com::apple::eawt::MacQuitResponse* obtainQuitResponse();
	virtual void openCocoaAboutWindow();
	virtual void performQuit();
	virtual void removeListener(::java::awt::desktop::SystemEventListener* listener);
	virtual void setDefaultQuitStrategy(::java::awt::desktop::QuitStrategy* defaultQuitAction);
	static const int32_t NOTIFY_ABOUT = 1;
	static const int32_t NOTIFY_PREFS = 2;
	static const int32_t NOTIFY_OPEN_APP = 3;
	static const int32_t NOTIFY_REOPEN_APP = 4;
	static const int32_t NOTIFY_QUIT = 5;
	static const int32_t NOTIFY_SHUTDOWN = 6;
	static const int32_t NOTIFY_ACTIVE_APP_GAINED = 7;
	static const int32_t NOTIFY_ACTIVE_APP_LOST = 8;
	static const int32_t NOTIFY_APP_HIDDEN = 9;
	static const int32_t NOTIFY_APP_SHOWN = 10;
	static const int32_t NOTIFY_USER_SESSION_ACTIVE = 11;
	static const int32_t NOTIFY_USER_SESSION_INACTIVE = 12;
	static const int32_t NOTIFY_SCREEN_SLEEP = 13;
	static const int32_t NOTIFY_SCREEN_WAKE = 14;
	static const int32_t NOTIFY_SYSTEM_SLEEP = 15;
	static const int32_t NOTIFY_SYSTEM_WAKE = 16;
	static const int32_t REGISTER_USER_SESSION = 1;
	static const int32_t REGISTER_SCREEN_SLEEP = 2;
	static const int32_t REGISTER_SYSTEM_SLEEP = 3;
	static ::com::apple::eawt::_AppEventHandler* instance;
	::com::apple::eawt::_AppEventHandler$_AboutDispatcher* aboutDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_PreferencesDispatcher* preferencesDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_OpenFileDispatcher* openFilesDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_PrintFileDispatcher* printFilesDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_OpenURIDispatcher* openURIDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_QuitDispatcher* quitDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_OpenAppDispatcher* openAppDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_AppReOpenedDispatcher* reOpenAppDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_AppForegroundDispatcher* foregroundAppDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_HiddenAppDispatcher* hiddenAppDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_UserSessionDispatcher* userSessionDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_ScreenSleepDispatcher* screenSleepDispatcher = nullptr;
	::com::apple::eawt::_AppEventHandler$_SystemSleepDispatcher* systemSleepDispatcher = nullptr;
	::java::awt::desktop::QuitStrategy* defaultQuitAction = nullptr;
	::com::apple::eawt::MacQuitResponse* currentQuitResponse = nullptr;
};

		} // eawt
	} // apple
} // com

#pragma pop_macro("NOTIFY_ABOUT")
#pragma pop_macro("NOTIFY_ACTIVE_APP_GAINED")
#pragma pop_macro("NOTIFY_ACTIVE_APP_LOST")
#pragma pop_macro("NOTIFY_APP_HIDDEN")
#pragma pop_macro("NOTIFY_APP_SHOWN")
#pragma pop_macro("NOTIFY_OPEN_APP")
#pragma pop_macro("NOTIFY_PREFS")
#pragma pop_macro("NOTIFY_QUIT")
#pragma pop_macro("NOTIFY_REOPEN_APP")
#pragma pop_macro("NOTIFY_SCREEN_SLEEP")
#pragma pop_macro("NOTIFY_SCREEN_WAKE")
#pragma pop_macro("NOTIFY_SHUTDOWN")
#pragma pop_macro("NOTIFY_SYSTEM_SLEEP")
#pragma pop_macro("NOTIFY_SYSTEM_WAKE")
#pragma pop_macro("NOTIFY_USER_SESSION_ACTIVE")
#pragma pop_macro("NOTIFY_USER_SESSION_INACTIVE")
#pragma pop_macro("REGISTER_SCREEN_SLEEP")
#pragma pop_macro("REGISTER_SYSTEM_SLEEP")
#pragma pop_macro("REGISTER_USER_SESSION")

#endif // _com_apple_eawt__AppEventHandler_h_
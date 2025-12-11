#include <com/apple/eawt/_AppEventHandler.h>

#include <com/apple/eawt/MacQuitResponse.h>
#include <com/apple/eawt/_AppEventHandler$1.h>
#include <com/apple/eawt/_AppEventHandler$_AboutDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_AppForegroundDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_AppReOpenedDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_HiddenAppDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler$_OpenAppDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_OpenFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_OpenURIDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_PreferencesDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_PrintFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_QuitDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_ScreenSleepDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_SystemSleepDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_UserSessionDispatcher.h>
#include <com/apple/eawt/_AppMiscHandlers.h>
#include <java/awt/EventQueue.h>
#include <java/awt/desktop/AppForegroundListener.h>
#include <java/awt/desktop/AppHiddenListener.h>
#include <java/awt/desktop/AppReopenedListener.h>
#include <java/awt/desktop/QuitStrategy.h>
#include <java/awt/desktop/ScreenSleepListener.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/awt/desktop/SystemSleepListener.h>
#include <java/awt/desktop/UserSessionListener.h>
#include <java/lang/Runnable.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CLOSE_ALL_WINDOWS
#undef FALSE
#undef NORMAL_EXIT
#undef NOTIFY_ABOUT
#undef NOTIFY_ACTIVE_APP_GAINED
#undef NOTIFY_ACTIVE_APP_LOST
#undef NOTIFY_APP_HIDDEN
#undef NOTIFY_APP_SHOWN
#undef NOTIFY_OPEN_APP
#undef NOTIFY_PREFS
#undef NOTIFY_QUIT
#undef NOTIFY_REOPEN_APP
#undef NOTIFY_SCREEN_SLEEP
#undef NOTIFY_SCREEN_WAKE
#undef NOTIFY_SHUTDOWN
#undef NOTIFY_SYSTEM_SLEEP
#undef NOTIFY_SYSTEM_WAKE
#undef NOTIFY_USER_SESSION_ACTIVE
#undef NOTIFY_USER_SESSION_INACTIVE
#undef REGISTER_SCREEN_SLEEP
#undef REGISTER_SYSTEM_SLEEP
#undef REGISTER_USER_SESSION
#undef TRUE

using $MacQuitResponse = ::com::apple::eawt::MacQuitResponse;
using $_AppEventHandler$1 = ::com::apple::eawt::_AppEventHandler$1;
using $_AppEventHandler$_AboutDispatcher = ::com::apple::eawt::_AppEventHandler$_AboutDispatcher;
using $_AppEventHandler$_AppForegroundDispatcher = ::com::apple::eawt::_AppEventHandler$_AppForegroundDispatcher;
using $_AppEventHandler$_AppReOpenedDispatcher = ::com::apple::eawt::_AppEventHandler$_AppReOpenedDispatcher;
using $_AppEventHandler$_HiddenAppDispatcher = ::com::apple::eawt::_AppEventHandler$_HiddenAppDispatcher;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppEventHandler$_OpenAppDispatcher = ::com::apple::eawt::_AppEventHandler$_OpenAppDispatcher;
using $_AppEventHandler$_OpenFileDispatcher = ::com::apple::eawt::_AppEventHandler$_OpenFileDispatcher;
using $_AppEventHandler$_OpenURIDispatcher = ::com::apple::eawt::_AppEventHandler$_OpenURIDispatcher;
using $_AppEventHandler$_PreferencesDispatcher = ::com::apple::eawt::_AppEventHandler$_PreferencesDispatcher;
using $_AppEventHandler$_PrintFileDispatcher = ::com::apple::eawt::_AppEventHandler$_PrintFileDispatcher;
using $_AppEventHandler$_QuitDispatcher = ::com::apple::eawt::_AppEventHandler$_QuitDispatcher;
using $_AppEventHandler$_ScreenSleepDispatcher = ::com::apple::eawt::_AppEventHandler$_ScreenSleepDispatcher;
using $_AppEventHandler$_SystemSleepDispatcher = ::com::apple::eawt::_AppEventHandler$_SystemSleepDispatcher;
using $_AppEventHandler$_UserSessionDispatcher = ::com::apple::eawt::_AppEventHandler$_UserSessionDispatcher;
using $_AppMiscHandlers = ::com::apple::eawt::_AppMiscHandlers;
using $EventQueue = ::java::awt::EventQueue;
using $AppForegroundListener = ::java::awt::desktop::AppForegroundListener;
using $AppHiddenListener = ::java::awt::desktop::AppHiddenListener;
using $AppReopenedListener = ::java::awt::desktop::AppReopenedListener;
using $QuitStrategy = ::java::awt::desktop::QuitStrategy;
using $ScreenSleepListener = ::java::awt::desktop::ScreenSleepListener;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $SystemSleepListener = ::java::awt::desktop::SystemSleepListener;
using $UserSessionListener = ::java::awt::desktop::UserSessionListener;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler_FieldInfo_[] = {
	{"NOTIFY_ABOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_ABOUT)},
	{"NOTIFY_PREFS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_PREFS)},
	{"NOTIFY_OPEN_APP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_OPEN_APP)},
	{"NOTIFY_REOPEN_APP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_REOPEN_APP)},
	{"NOTIFY_QUIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_QUIT)},
	{"NOTIFY_SHUTDOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_SHUTDOWN)},
	{"NOTIFY_ACTIVE_APP_GAINED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_ACTIVE_APP_GAINED)},
	{"NOTIFY_ACTIVE_APP_LOST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_ACTIVE_APP_LOST)},
	{"NOTIFY_APP_HIDDEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_APP_HIDDEN)},
	{"NOTIFY_APP_SHOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_APP_SHOWN)},
	{"NOTIFY_USER_SESSION_ACTIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_USER_SESSION_ACTIVE)},
	{"NOTIFY_USER_SESSION_INACTIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_USER_SESSION_INACTIVE)},
	{"NOTIFY_SCREEN_SLEEP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_SCREEN_SLEEP)},
	{"NOTIFY_SCREEN_WAKE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_SCREEN_WAKE)},
	{"NOTIFY_SYSTEM_SLEEP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_SYSTEM_SLEEP)},
	{"NOTIFY_SYSTEM_WAKE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, NOTIFY_SYSTEM_WAKE)},
	{"REGISTER_USER_SESSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, REGISTER_USER_SESSION)},
	{"REGISTER_SCREEN_SLEEP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, REGISTER_SCREEN_SLEEP)},
	{"REGISTER_SYSTEM_SLEEP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(_AppEventHandler, REGISTER_SYSTEM_SLEEP)},
	{"instance", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $STATIC | $FINAL, $staticField(_AppEventHandler, instance)},
	{"aboutDispatcher", "Lcom/apple/eawt/_AppEventHandler$_AboutDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, aboutDispatcher)},
	{"preferencesDispatcher", "Lcom/apple/eawt/_AppEventHandler$_PreferencesDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, preferencesDispatcher)},
	{"openFilesDispatcher", "Lcom/apple/eawt/_AppEventHandler$_OpenFileDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, openFilesDispatcher)},
	{"printFilesDispatcher", "Lcom/apple/eawt/_AppEventHandler$_PrintFileDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, printFilesDispatcher)},
	{"openURIDispatcher", "Lcom/apple/eawt/_AppEventHandler$_OpenURIDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, openURIDispatcher)},
	{"quitDispatcher", "Lcom/apple/eawt/_AppEventHandler$_QuitDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, quitDispatcher)},
	{"openAppDispatcher", "Lcom/apple/eawt/_AppEventHandler$_OpenAppDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, openAppDispatcher)},
	{"reOpenAppDispatcher", "Lcom/apple/eawt/_AppEventHandler$_AppReOpenedDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, reOpenAppDispatcher)},
	{"foregroundAppDispatcher", "Lcom/apple/eawt/_AppEventHandler$_AppForegroundDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, foregroundAppDispatcher)},
	{"hiddenAppDispatcher", "Lcom/apple/eawt/_AppEventHandler$_HiddenAppDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, hiddenAppDispatcher)},
	{"userSessionDispatcher", "Lcom/apple/eawt/_AppEventHandler$_UserSessionDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, userSessionDispatcher)},
	{"screenSleepDispatcher", "Lcom/apple/eawt/_AppEventHandler$_ScreenSleepDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, screenSleepDispatcher)},
	{"systemSleepDispatcher", "Lcom/apple/eawt/_AppEventHandler$_SystemSleepDispatcher;", nullptr, $FINAL, $field(_AppEventHandler, systemSleepDispatcher)},
	{"defaultQuitAction", "Ljava/awt/desktop/QuitStrategy;", nullptr, 0, $field(_AppEventHandler, defaultQuitAction)},
	{"currentQuitResponse", "Lcom/apple/eawt/MacQuitResponse;", nullptr, 0, $field(_AppEventHandler, currentQuitResponse)},
	{}
};

$MethodInfo __AppEventHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(_AppEventHandler::*)()>(&_AppEventHandler::init$))},
	{"addListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, 0},
	{"cancelQuit", "()V", nullptr, $SYNCHRONIZED},
	{"getInstance", "()Lcom/apple/eawt/_AppEventHandler;", nullptr, $STATIC, $method(static_cast<_AppEventHandler*(*)()>(&_AppEventHandler::getInstance))},
	{"handleNativeNotification", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&_AppEventHandler::handleNativeNotification))},
	{"handleOpenFiles", "(Ljava/util/List;Ljava/lang/String;)V", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$String*)>(&_AppEventHandler::handleOpenFiles))},
	{"handleOpenURI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&_AppEventHandler::handleOpenURI))},
	{"handlePrintFiles", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*)>(&_AppEventHandler::handlePrintFiles))},
	{"nativeOpenCocoaAboutWindow", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&_AppEventHandler::nativeOpenCocoaAboutWindow))},
	{"nativeRegisterForNotification", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&_AppEventHandler::nativeRegisterForNotification))},
	{"nativeReplyToAppShouldTerminate", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&_AppEventHandler::nativeReplyToAppShouldTerminate))},
	{"obtainQuitResponse", "()Lcom/apple/eawt/MacQuitResponse;", nullptr, $SYNCHRONIZED},
	{"openCocoaAboutWindow", "()V", nullptr, 0},
	{"performQuit", "()V", nullptr, $SYNCHRONIZED},
	{"removeListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, 0},
	{"setDefaultQuitStrategy", "(Ljava/awt/desktop/QuitStrategy;)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_nativeOpenCocoaAboutWindow 8
#define _METHOD_INDEX_nativeRegisterForNotification 9
#define _METHOD_INDEX_nativeReplyToAppShouldTerminate 10

$InnerClassInfo __AppEventHandler_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher", "com.apple.eawt._AppEventHandler", "_QueuingAppEventDispatcher", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_AppEventDispatcher", "com.apple.eawt._AppEventHandler", "_AppEventDispatcher", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_AppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_AppEventMultiplexor", $ABSTRACT},
	{"com.apple.eawt._AppEventHandler$_NativeEvent", "com.apple.eawt._AppEventHandler", "_NativeEvent", $STATIC},
	{"com.apple.eawt._AppEventHandler$_QuitDispatcher", "com.apple.eawt._AppEventHandler", "_QuitDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_OpenURIDispatcher", "com.apple.eawt._AppEventHandler", "_OpenURIDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_PrintFileDispatcher", "com.apple.eawt._AppEventHandler", "_PrintFileDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_OpenFileDispatcher", "com.apple.eawt._AppEventHandler", "_OpenFileDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_SystemSleepDispatcher", "com.apple.eawt._AppEventHandler", "_SystemSleepDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_ScreenSleepDispatcher", "com.apple.eawt._AppEventHandler", "_ScreenSleepDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_UserSessionDispatcher", "com.apple.eawt._AppEventHandler", "_UserSessionDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_HiddenAppDispatcher", "com.apple.eawt._AppEventHandler", "_HiddenAppDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_AppForegroundDispatcher", "com.apple.eawt._AppEventHandler", "_AppForegroundDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_AppReOpenedDispatcher", "com.apple.eawt._AppEventHandler", "_AppReOpenedDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_OpenAppDispatcher", "com.apple.eawt._AppEventHandler", "_OpenAppDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_PreferencesDispatcher", "com.apple.eawt._AppEventHandler", "_PreferencesDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_AboutDispatcher", "com.apple.eawt._AppEventHandler", "_AboutDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo __AppEventHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler",
	"java.lang.Object",
	nullptr,
	__AppEventHandler_FieldInfo_,
	__AppEventHandler_MethodInfo_,
	nullptr,
	nullptr,
	__AppEventHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher,com.apple.eawt._AppEventHandler$_AppEventDispatcher,com.apple.eawt._AppEventHandler$_AppEventDispatcher$1,com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor,com.apple.eawt._AppEventHandler$_AppEventMultiplexor,com.apple.eawt._AppEventHandler$_AppEventMultiplexor$1,com.apple.eawt._AppEventHandler$_NativeEvent,com.apple.eawt._AppEventHandler$_QuitDispatcher,com.apple.eawt._AppEventHandler$_OpenURIDispatcher,com.apple.eawt._AppEventHandler$_PrintFileDispatcher,com.apple.eawt._AppEventHandler$_OpenFileDispatcher,com.apple.eawt._AppEventHandler$_SystemSleepDispatcher,com.apple.eawt._AppEventHandler$_ScreenSleepDispatcher,com.apple.eawt._AppEventHandler$_UserSessionDispatcher,com.apple.eawt._AppEventHandler$_HiddenAppDispatcher,com.apple.eawt._AppEventHandler$_AppForegroundDispatcher,com.apple.eawt._AppEventHandler$_AppReOpenedDispatcher,com.apple.eawt._AppEventHandler$_OpenAppDispatcher,com.apple.eawt._AppEventHandler$_PreferencesDispatcher,com.apple.eawt._AppEventHandler$_AboutDispatcher,com.apple.eawt._AppEventHandler$1"
};

$Object* allocate$_AppEventHandler($Class* clazz) {
	return $of($alloc(_AppEventHandler));
}

_AppEventHandler* _AppEventHandler::instance = nullptr;

void _AppEventHandler::nativeOpenCocoaAboutWindow() {
	$init(_AppEventHandler);
	$prepareNativeStatic(_AppEventHandler, nativeOpenCocoaAboutWindow, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void _AppEventHandler::nativeReplyToAppShouldTerminate(bool shouldTerminate) {
	$init(_AppEventHandler);
	$prepareNativeStatic(_AppEventHandler, nativeReplyToAppShouldTerminate, void, bool shouldTerminate);
	$invokeNativeStatic(shouldTerminate);
	$finishNativeStatic();
}

void _AppEventHandler::nativeRegisterForNotification(int32_t notification) {
	$init(_AppEventHandler);
	$prepareNativeStatic(_AppEventHandler, nativeRegisterForNotification, void, int32_t notification);
	$invokeNativeStatic(notification);
	$finishNativeStatic();
}

_AppEventHandler* _AppEventHandler::getInstance() {
	$init(_AppEventHandler);
	return _AppEventHandler::instance;
}

void _AppEventHandler::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, aboutDispatcher, $new($_AppEventHandler$_AboutDispatcher, this));
	$set(this, preferencesDispatcher, $new($_AppEventHandler$_PreferencesDispatcher, this));
	$set(this, openFilesDispatcher, $new($_AppEventHandler$_OpenFileDispatcher, this));
	$set(this, printFilesDispatcher, $new($_AppEventHandler$_PrintFileDispatcher, this));
	$set(this, openURIDispatcher, $new($_AppEventHandler$_OpenURIDispatcher, this));
	$set(this, quitDispatcher, $new($_AppEventHandler$_QuitDispatcher, this));
	$set(this, openAppDispatcher, $new($_AppEventHandler$_OpenAppDispatcher, this));
	$set(this, reOpenAppDispatcher, $new($_AppEventHandler$_AppReOpenedDispatcher, this));
	$set(this, foregroundAppDispatcher, $new($_AppEventHandler$_AppForegroundDispatcher, this));
	$set(this, hiddenAppDispatcher, $new($_AppEventHandler$_HiddenAppDispatcher, this));
	$set(this, userSessionDispatcher, $new($_AppEventHandler$_UserSessionDispatcher, this));
	$set(this, screenSleepDispatcher, $new($_AppEventHandler$_ScreenSleepDispatcher, this));
	$set(this, systemSleepDispatcher, $new($_AppEventHandler$_SystemSleepDispatcher, this));
	$init($QuitStrategy);
	$set(this, defaultQuitAction, $QuitStrategy::NORMAL_EXIT);
	$var($String, strategyProp, $System::getProperty("apple.eawt.quitStrategy"_s));
	if (strategyProp == nullptr) {
		return;
	}
	if ("CLOSE_ALL_WINDOWS"_s->equals(strategyProp)) {
		setDefaultQuitStrategy($QuitStrategy::CLOSE_ALL_WINDOWS);
	} else {
		bool var$1 = "SYSTEM_EXIT_O"_s->equals(strategyProp);
		if (var$1 || "NORMAL_EXIT"_s->equals(strategyProp)) {
			setDefaultQuitStrategy($QuitStrategy::NORMAL_EXIT);
		} else {
			$nc($System::err)->println($$str({"unrecognized apple.eawt.quitStrategy: "_s, strategyProp}));
		}
	}
}

void _AppEventHandler::addListener($SystemEventListener* listener) {
	if ($instanceOf($AppReopenedListener, listener)) {
		$nc(this->reOpenAppDispatcher)->addListener($cast($AppReopenedListener, listener));
	}
	if ($instanceOf($AppForegroundListener, listener)) {
		$nc(this->foregroundAppDispatcher)->addListener($cast($AppForegroundListener, listener));
	}
	if ($instanceOf($AppHiddenListener, listener)) {
		$nc(this->hiddenAppDispatcher)->addListener($cast($AppHiddenListener, listener));
	}
	if ($instanceOf($UserSessionListener, listener)) {
		$nc(this->userSessionDispatcher)->addListener($cast($UserSessionListener, listener));
	}
	if ($instanceOf($ScreenSleepListener, listener)) {
		$nc(this->screenSleepDispatcher)->addListener($cast($ScreenSleepListener, listener));
	}
	if ($instanceOf($SystemSleepListener, listener)) {
		$nc(this->systemSleepDispatcher)->addListener($cast($SystemSleepListener, listener));
	}
}

void _AppEventHandler::removeListener($SystemEventListener* listener) {
	if ($instanceOf($AppReopenedListener, listener)) {
		$nc(this->reOpenAppDispatcher)->removeListener($cast($AppReopenedListener, listener));
	}
	if ($instanceOf($AppForegroundListener, listener)) {
		$nc(this->foregroundAppDispatcher)->removeListener($cast($AppForegroundListener, listener));
	}
	if ($instanceOf($AppHiddenListener, listener)) {
		$nc(this->hiddenAppDispatcher)->removeListener($cast($AppHiddenListener, listener));
	}
	if ($instanceOf($UserSessionListener, listener)) {
		$nc(this->userSessionDispatcher)->removeListener($cast($UserSessionListener, listener));
	}
	if ($instanceOf($ScreenSleepListener, listener)) {
		$nc(this->screenSleepDispatcher)->removeListener($cast($ScreenSleepListener, listener));
	}
	if ($instanceOf($SystemSleepListener, listener)) {
		$nc(this->systemSleepDispatcher)->removeListener($cast($SystemSleepListener, listener));
	}
}

void _AppEventHandler::openCocoaAboutWindow() {
	nativeOpenCocoaAboutWindow();
}

void _AppEventHandler::setDefaultQuitStrategy($QuitStrategy* defaultQuitAction) {
	$set(this, defaultQuitAction, defaultQuitAction);
}

$MacQuitResponse* _AppEventHandler::obtainQuitResponse() {
	$synchronized(this) {
		if (this->currentQuitResponse != nullptr) {
			return this->currentQuitResponse;
		}
		return $set(this, currentQuitResponse, $new($MacQuitResponse, this));
	}
}

void _AppEventHandler::cancelQuit() {
	$synchronized(this) {
		$set(this, currentQuitResponse, nullptr);
		nativeReplyToAppShouldTerminate(false);
	}
}

void _AppEventHandler::performQuit() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$set(this, currentQuitResponse, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$init($QuitStrategy);
				if (this->defaultQuitAction == $QuitStrategy::NORMAL_EXIT || $_AppMiscHandlers::isSuddenTerminationEnbaled()) {
					$System::exit(0);
				}
				if (this->defaultQuitAction != $QuitStrategy::CLOSE_ALL_WINDOWS) {
					$throwNew($RuntimeException, "Unknown quit action"_s);
				}
				$EventQueue::invokeLater($$new($_AppEventHandler$1, this));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				nativeReplyToAppShouldTerminate(false);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void _AppEventHandler::handlePrintFiles($List* filenames) {
	$init(_AppEventHandler);
	$useLocalCurrentObjectStackCache();
	$nc($nc(_AppEventHandler::instance)->printFilesDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of(filenames)})));
}

void _AppEventHandler::handleOpenFiles($List* filenames, $String* searchTerm) {
	$init(_AppEventHandler);
	$useLocalCurrentObjectStackCache();
	$nc($nc(_AppEventHandler::instance)->openFilesDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {
		$of(filenames),
		$of(searchTerm)
	})));
}

void _AppEventHandler::handleOpenURI($String* uri) {
	$init(_AppEventHandler);
	$useLocalCurrentObjectStackCache();
	$nc($nc(_AppEventHandler::instance)->openURIDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of(uri)})));
}

void _AppEventHandler::handleNativeNotification(int32_t code) {
	$init(_AppEventHandler);
	$useLocalCurrentObjectStackCache();
	switch (code) {
	case _AppEventHandler::NOTIFY_ABOUT:
		{
			$nc($nc(_AppEventHandler::instance)->aboutDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, 0)));
			break;
		}
	case _AppEventHandler::NOTIFY_PREFS:
		{
			$nc($nc(_AppEventHandler::instance)->preferencesDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, 0)));
			break;
		}
	case _AppEventHandler::NOTIFY_OPEN_APP:
		{
			$nc($nc(_AppEventHandler::instance)->openAppDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, 0)));
			break;
		}
	case _AppEventHandler::NOTIFY_REOPEN_APP:
		{
			$nc($nc(_AppEventHandler::instance)->reOpenAppDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, 0)), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_QUIT:
		{
			$nc($nc(_AppEventHandler::instance)->quitDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, 0)));
			break;
		}
	case _AppEventHandler::NOTIFY_SHUTDOWN:
		{
			break;
		}
	case _AppEventHandler::NOTIFY_ACTIVE_APP_GAINED:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->foregroundAppDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::TRUE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_ACTIVE_APP_LOST:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->foregroundAppDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::FALSE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_APP_HIDDEN:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->hiddenAppDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::TRUE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_APP_SHOWN:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->hiddenAppDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::FALSE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_USER_SESSION_ACTIVE:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->userSessionDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::TRUE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_USER_SESSION_INACTIVE:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->userSessionDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::FALSE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_SCREEN_SLEEP:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->screenSleepDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::TRUE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_SCREEN_WAKE:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->screenSleepDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::FALSE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_SYSTEM_SLEEP:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->systemSleepDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::TRUE)})), $$new($ObjectArray, 0));
			break;
		}
	case _AppEventHandler::NOTIFY_SYSTEM_WAKE:
		{
			$init($Boolean);
			$nc($nc(_AppEventHandler::instance)->systemSleepDispatcher)->dispatch($$new($_AppEventHandler$_NativeEvent, $$new($ObjectArray, {$of($Boolean::FALSE)})), $$new($ObjectArray, 0));
			break;
		}
	default:
		{
			$nc($System::err)->println($$str({"EAWT unknown native notification: "_s, $$str(code)}));
			break;
		}
	}
}

void clinit$_AppEventHandler($Class* class$) {
	$assignStatic(_AppEventHandler::instance, $new(_AppEventHandler));
}

_AppEventHandler::_AppEventHandler() {
}

$Class* _AppEventHandler::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler, name, initialize, &__AppEventHandler_ClassInfo_, clinit$_AppEventHandler, allocate$_AppEventHandler);
	return class$;
}

$Class* _AppEventHandler::class$ = nullptr;

		} // eawt
	} // apple
} // com
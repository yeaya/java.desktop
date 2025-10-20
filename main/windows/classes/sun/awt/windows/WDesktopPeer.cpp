#include <sun/awt/windows/WDesktopPeer.h>

#include <java/awt/Desktop$Action.h>
#include <java/awt/EventQueue.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/awt/desktop/SystemSleepEvent.h>
#include <java/awt/desktop/SystemSleepListener.h>
#include <java/awt/desktop/UserSessionEvent$Reason.h>
#include <java/awt/desktop/UserSessionEvent.h>
#include <java/awt/desktop/UserSessionListener.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/util/EventListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <sun/awt/windows/WDesktopPeer$1.h>
#include <jcpp.h>

#undef ACTION_EDIT_VERB
#undef ACTION_OPEN_VERB
#undef ACTION_PRINT_VERB

using $SystemSleepListenerArray = $Array<::java::awt::desktop::SystemSleepListener>;
using $UserSessionListenerArray = $Array<::java::awt::desktop::UserSessionListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $Desktop$Action = ::java::awt::Desktop$Action;
using $EventQueue = ::java::awt::EventQueue;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $SystemSleepEvent = ::java::awt::desktop::SystemSleepEvent;
using $SystemSleepListener = ::java::awt::desktop::SystemSleepListener;
using $UserSessionEvent = ::java::awt::desktop::UserSessionEvent;
using $UserSessionEvent$Reason = ::java::awt::desktop::UserSessionEvent$Reason;
using $UserSessionListener = ::java::awt::desktop::UserSessionListener;
using $DesktopPeer = ::java::awt::peer::DesktopPeer;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $EventListener = ::java::util::EventListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $WDesktopPeer$1 = ::sun::awt::windows::WDesktopPeer$1;

namespace sun {
	namespace awt {
		namespace windows {

class WDesktopPeer$$Lambda$lambda$userSessionCallback$0 : public $Runnable {
	$class(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool activated, $UserSessionListener* use, $UserSessionEvent$Reason* reason) {
		this->activated = activated;
		$set(this, use, use);
		$set(this, reason, reason);
	}
	virtual void run() override {
		WDesktopPeer::lambda$userSessionCallback$0(activated, use, reason);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WDesktopPeer$$Lambda$lambda$userSessionCallback$0>());
	}
	bool activated = false;
	$UserSessionListener* use = nullptr;
	$UserSessionEvent$Reason* reason = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WDesktopPeer$$Lambda$lambda$userSessionCallback$0::fieldInfos[4] = {
	{"activated", "Z", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, activated)},
	{"use", "Ljava/awt/desktop/UserSessionListener;", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, use)},
	{"reason", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, reason)},
	{}
};
$MethodInfo WDesktopPeer$$Lambda$lambda$userSessionCallback$0::methodInfos[3] = {
	{"<init>", "(ZLjava/awt/desktop/UserSessionListener;Ljava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PUBLIC, $method(static_cast<void(WDesktopPeer$$Lambda$lambda$userSessionCallback$0::*)(bool,$UserSessionListener*,$UserSessionEvent$Reason*)>(&WDesktopPeer$$Lambda$lambda$userSessionCallback$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WDesktopPeer$$Lambda$lambda$userSessionCallback$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WDesktopPeer$$Lambda$lambda$userSessionCallback$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WDesktopPeer$$Lambda$lambda$userSessionCallback$0::load$($String* name, bool initialize) {
	$loadClass(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WDesktopPeer$$Lambda$lambda$userSessionCallback$0::class$ = nullptr;

class WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1 : public $Runnable {
	$class(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool resumed, $SystemSleepListener* ssl) {
		this->resumed = resumed;
		$set(this, ssl, ssl);
	}
	virtual void run() override {
		WDesktopPeer::lambda$systemSleepCallback$1(resumed, ssl);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1>());
	}
	bool resumed = false;
	$SystemSleepListener* ssl = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::fieldInfos[3] = {
	{"resumed", "Z", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, resumed)},
	{"ssl", "Ljava/awt/desktop/SystemSleepListener;", nullptr, $PUBLIC, $field(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, ssl)},
	{}
};
$MethodInfo WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::methodInfos[3] = {
	{"<init>", "(ZLjava/awt/desktop/SystemSleepListener;)V", nullptr, $PUBLIC, $method(static_cast<void(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::*)(bool,$SystemSleepListener*)>(&WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::load$($String* name, bool initialize) {
	$loadClass(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::class$ = nullptr;

$FieldInfo _WDesktopPeer_FieldInfo_[] = {
	{"ACTION_OPEN_VERB", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WDesktopPeer, ACTION_OPEN_VERB)},
	{"ACTION_EDIT_VERB", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WDesktopPeer, ACTION_EDIT_VERB)},
	{"ACTION_PRINT_VERB", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WDesktopPeer, ACTION_PRINT_VERB)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDesktopPeer, listenerList)},
	{}
};

$MethodInfo _WDesktopPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WDesktopPeer::*)()>(&WDesktopPeer::init$))},
	{"ShellExecute", "(Ljava/io/File;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WDesktopPeer::*)($File*,$String*)>(&WDesktopPeer::ShellExecute)), "java.io.IOException"},
	{"ShellExecute", "(Ljava/net/URI;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WDesktopPeer::*)($URI*,$String*)>(&WDesktopPeer::ShellExecute)), "java.io.IOException"},
	{"ShellExecute", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*,$String*)>(&WDesktopPeer::ShellExecute))},
	{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC},
	{"browse", "(Ljava/net/URI;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"disableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"edit", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"enableSuddenTermination", "()V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WDesktopPeer::init))},
	{"isSupported", "(Ljava/awt/Desktop$Action;)Z", nullptr, $PUBLIC},
	{"lambda$systemSleepCallback$1", "(ZLjava/awt/desktop/SystemSleepListener;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,$SystemSleepListener*)>(&WDesktopPeer::lambda$systemSleepCallback$1))},
	{"lambda$userSessionCallback$0", "(ZLjava/awt/desktop/UserSessionListener;Ljava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,$UserSessionListener*,$UserSessionEvent$Reason*)>(&WDesktopPeer::lambda$userSessionCallback$0))},
	{"mail", "(Ljava/net/URI;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"moveToTrash", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*)>(&WDesktopPeer::moveToTrash))},
	{"open", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"print", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"removeAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC},
	{"setSuddenTerminationEnabled", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&WDesktopPeer::setSuddenTerminationEnabled))},
	{"systemSleepCallback", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&WDesktopPeer::systemSleepCallback))},
	{"userSessionCallback", "(ZLjava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,$UserSessionEvent$Reason*)>(&WDesktopPeer::userSessionCallback))},
	{}
};

#define _METHOD_INDEX_ShellExecute 3
#define _METHOD_INDEX_init 9
#define _METHOD_INDEX_moveToTrash 15
#define _METHOD_INDEX_setSuddenTerminationEnabled 19

$InnerClassInfo _WDesktopPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WDesktopPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WDesktopPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDesktopPeer",
	"java.lang.Object",
	"java.awt.peer.DesktopPeer",
	_WDesktopPeer_FieldInfo_,
	_WDesktopPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WDesktopPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WDesktopPeer$1"
};

$Object* allocate$WDesktopPeer($Class* clazz) {
	return $of($alloc(WDesktopPeer));
}

$String* WDesktopPeer::ACTION_OPEN_VERB = nullptr;
$String* WDesktopPeer::ACTION_EDIT_VERB = nullptr;
$String* WDesktopPeer::ACTION_PRINT_VERB = nullptr;
$EventListenerList* WDesktopPeer::listenerList = nullptr;

void WDesktopPeer::init() {
	$init(WDesktopPeer);
	$prepareNativeStatic(WDesktopPeer, init, void);
	$invokeNativeStatic(WDesktopPeer, init);
	$finishNativeStatic();
}

void WDesktopPeer::init$() {
	init();
}

bool WDesktopPeer::isSupported($Desktop$Action* action) {
	$init($WDesktopPeer$1);
	switch ($nc($WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action)->get($nc((action))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{}
	case 8:
		{}
	case 9:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void WDesktopPeer::open($File* file) {
	this->ShellExecute(file, WDesktopPeer::ACTION_OPEN_VERB);
}

void WDesktopPeer::edit($File* file) {
	this->ShellExecute(file, WDesktopPeer::ACTION_EDIT_VERB);
}

void WDesktopPeer::print($File* file) {
	this->ShellExecute(file, WDesktopPeer::ACTION_PRINT_VERB);
}

void WDesktopPeer::mail($URI* uri) {
	this->ShellExecute(uri, WDesktopPeer::ACTION_OPEN_VERB);
}

void WDesktopPeer::browse($URI* uri) {
	this->ShellExecute(uri, WDesktopPeer::ACTION_OPEN_VERB);
}

void WDesktopPeer::ShellExecute($File* file, $String* verb) {
	$useLocalCurrentObjectStackCache();
	$var($String, errMsg, ShellExecute($($nc(file)->getAbsolutePath()), verb));
	if (errMsg != nullptr) {
		$throwNew($IOException, $$str({"Failed to "_s, verb, " "_s, file, ". Error message: "_s, errMsg}));
	}
}

void WDesktopPeer::ShellExecute($URI* uri, $String* verb) {
	$useLocalCurrentObjectStackCache();
	$var($String, errmsg, ShellExecute($($nc(uri)->toString()), verb));
	if (errmsg != nullptr) {
		$throwNew($IOException, $$str({"Failed to "_s, verb, " "_s, uri, ". Error message: "_s, errmsg}));
	}
}

$String* WDesktopPeer::ShellExecute($String* fileOrUri, $String* verb) {
	$init(WDesktopPeer);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(WDesktopPeer, ShellExecute, $String*, $String* fileOrUri, $String* verb);
	$assign($ret, $invokeNativeStatic(WDesktopPeer, ShellExecute, fileOrUri, verb));
	$finishNativeStatic();
	return $ret;
}

void WDesktopPeer::disableSuddenTermination() {
	setSuddenTerminationEnabled(false);
}

void WDesktopPeer::enableSuddenTermination() {
	setSuddenTerminationEnabled(true);
}

void WDesktopPeer::setSuddenTerminationEnabled(bool enable) {
	$init(WDesktopPeer);
	$prepareNativeStatic(WDesktopPeer, setSuddenTerminationEnabled, void, bool enable);
	$invokeNativeStatic(WDesktopPeer, setSuddenTerminationEnabled, enable);
	$finishNativeStatic();
}

void WDesktopPeer::addAppEventListener($SystemEventListener* listener) {
	if ($instanceOf($UserSessionListener, listener)) {
		$load($UserSessionListener);
		$nc(WDesktopPeer::listenerList)->add($UserSessionListener::class$, $cast($UserSessionListener, listener));
	}
	if ($instanceOf($SystemSleepListener, listener)) {
		$load($SystemSleepListener);
		$nc(WDesktopPeer::listenerList)->add($SystemSleepListener::class$, $cast($SystemSleepListener, listener));
	}
}

void WDesktopPeer::removeAppEventListener($SystemEventListener* listener) {
	if ($instanceOf($UserSessionListener, listener)) {
		$load($UserSessionListener);
		$nc(WDesktopPeer::listenerList)->remove($UserSessionListener::class$, $cast($UserSessionListener, listener));
	}
	if ($instanceOf($SystemSleepListener, listener)) {
		$load($SystemSleepListener);
		$nc(WDesktopPeer::listenerList)->remove($SystemSleepListener::class$, $cast($SystemSleepListener, listener));
	}
}

void WDesktopPeer::userSessionCallback(bool activated, $UserSessionEvent$Reason* reason) {
	$init(WDesktopPeer);
	$useLocalCurrentObjectStackCache();
	$load($UserSessionListener);
	$var($UserSessionListenerArray, listeners, $fcast($UserSessionListenerArray, $nc(WDesktopPeer::listenerList)->getListeners($UserSessionListener::class$)));
	{
		$var($UserSessionListenerArray, arr$, listeners);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UserSessionListener, use, arr$->get(i$));
			{
				$EventQueue::invokeLater(static_cast<$Runnable*>($$new(WDesktopPeer$$Lambda$lambda$userSessionCallback$0, activated, use, reason)));
			}
		}
	}
}

void WDesktopPeer::systemSleepCallback(bool resumed) {
	$init(WDesktopPeer);
	$useLocalCurrentObjectStackCache();
	$load($SystemSleepListener);
	$var($SystemSleepListenerArray, listeners, $fcast($SystemSleepListenerArray, $nc(WDesktopPeer::listenerList)->getListeners($SystemSleepListener::class$)));
	{
		$var($SystemSleepListenerArray, arr$, listeners);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($SystemSleepListener, ssl, arr$->get(i$));
			{
				$EventQueue::invokeLater(static_cast<$Runnable*>($$new(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1, resumed, ssl)));
			}
		}
	}
}

bool WDesktopPeer::moveToTrash($File* file) {
	return moveToTrash($($nc(file)->getAbsolutePath()));
}

bool WDesktopPeer::moveToTrash($String* file) {
	$init(WDesktopPeer);
	bool $ret = false;
	$prepareNativeStatic(WDesktopPeer, moveToTrash, bool, $String* file);
	$ret = $invokeNativeStatic(WDesktopPeer, moveToTrash, file);
	$finishNativeStatic();
	return $ret;
}

void WDesktopPeer::lambda$systemSleepCallback$1(bool resumed, $SystemSleepListener* ssl) {
	$init(WDesktopPeer);
	$useLocalCurrentObjectStackCache();
	if (resumed) {
		$nc(ssl)->systemAwoke($$new($SystemSleepEvent));
	} else {
		$nc(ssl)->systemAboutToSleep($$new($SystemSleepEvent));
	}
}

void WDesktopPeer::lambda$userSessionCallback$0(bool activated, $UserSessionListener* use, $UserSessionEvent$Reason* reason) {
	$init(WDesktopPeer);
	$useLocalCurrentObjectStackCache();
	if (activated) {
		$nc(use)->userSessionActivated($$new($UserSessionEvent, reason));
	} else {
		$nc(use)->userSessionDeactivated($$new($UserSessionEvent, reason));
	}
}

void clinit$WDesktopPeer($Class* class$) {
	$assignStatic(WDesktopPeer::ACTION_OPEN_VERB, "open"_s);
	$assignStatic(WDesktopPeer::ACTION_EDIT_VERB, "edit"_s);
	$assignStatic(WDesktopPeer::ACTION_PRINT_VERB, "print"_s);
	$assignStatic(WDesktopPeer::listenerList, $new($EventListenerList));
}

WDesktopPeer::WDesktopPeer() {
}

$Class* WDesktopPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WDesktopPeer$$Lambda$lambda$userSessionCallback$0::classInfo$.name)) {
			return WDesktopPeer$$Lambda$lambda$userSessionCallback$0::load$(name, initialize);
		}
		if (name->equals(WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::classInfo$.name)) {
			return WDesktopPeer$$Lambda$lambda$systemSleepCallback$1$1::load$(name, initialize);
		}
	}
	$loadClass(WDesktopPeer, name, initialize, &_WDesktopPeer_ClassInfo_, clinit$WDesktopPeer, allocate$WDesktopPeer);
	return class$;
}

$Class* WDesktopPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun
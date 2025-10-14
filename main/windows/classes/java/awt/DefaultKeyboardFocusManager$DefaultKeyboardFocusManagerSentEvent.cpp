#include <java/awt/DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $SentEvent = ::java::awt::SentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

$FieldInfo _DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, serialVersionUID)},
	{}
};

$MethodInfo _DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/AWTEvent;Lsun/awt/AppContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::*)($AWTEvent*,$AppContext*)>(&DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::init$))},
	{"dispatch", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_InnerClassesInfo_[] = {
	{"java.awt.DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent", "java.awt.DefaultKeyboardFocusManager", "DefaultKeyboardFocusManagerSentEvent", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent",
	"java.awt.SentEvent",
	nullptr,
	_DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_FieldInfo_,
	_DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.DefaultKeyboardFocusManager"
};

$Object* allocate$DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent($Class* clazz) {
	return $of($alloc(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent));
}

void DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::init$($AWTEvent* nested, $AppContext* toNotify) {
	$SentEvent::init$(nested, toNotify);
}

void DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::dispatch() {
	$var($KeyboardFocusManager, manager, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$var($DefaultKeyboardFocusManager, defaultManager, ($instanceOf($DefaultKeyboardFocusManager, manager)) ? $cast($DefaultKeyboardFocusManager, manager) : ($DefaultKeyboardFocusManager*)nullptr);
	if (defaultManager != nullptr) {
		$synchronized(defaultManager) {
			++defaultManager->inSendMessage;
		}
	}
	$SentEvent::dispatch();
	if (defaultManager != nullptr) {
		$synchronized(defaultManager) {
			--defaultManager->inSendMessage;
		}
	}
}

DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent() {
}

$Class* DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::load$($String* name, bool initialize) {
	$loadClass(DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent, name, initialize, &_DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent_ClassInfo_, allocate$DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent);
	return class$;
}

$Class* DefaultKeyboardFocusManager$DefaultKeyboardFocusManagerSentEvent::class$ = nullptr;

	} // awt
} // java
#include <sun/awt/im/InputMethodManager.h>

#include <java/awt/Component.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/Locale.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <jcpp.h>

#undef LOCK
#undef NORM_PRIORITY

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Locale = ::java::util::Locale;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputMethodManager_FieldInfo_[] = {
	{"threadName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputMethodManager, threadName)},
	{"LOCK", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputMethodManager, LOCK)},
	{"inputMethodManager", "Lsun/awt/im/InputMethodManager;", nullptr, $PRIVATE | $STATIC, $staticField(InputMethodManager, inputMethodManager)},
	{}
};

$MethodInfo _InputMethodManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodManager::*)()>(&InputMethodManager::init$))},
	{"findInputMethod", "(Ljava/util/Locale;)Lsun/awt/im/InputMethodLocator;", nullptr, $ABSTRACT},
	{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, $ABSTRACT},
	{"getInstance", "()Lsun/awt/im/InputMethodManager;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<InputMethodManager*(*)()>(&InputMethodManager::getInstance))},
	{"getTriggerMenuString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasMultipleInputMethods", "()Z", nullptr, $ABSTRACT},
	{"notifyChangeRequest", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"notifyChangeRequestByHotKey", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setInputContext", "(Lsun/awt/im/InputContext;)V", nullptr, $ABSTRACT},
	{}
};

$ClassInfo _InputMethodManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.im.InputMethodManager",
	"java.lang.Object",
	nullptr,
	_InputMethodManager_FieldInfo_,
	_InputMethodManager_MethodInfo_
};

$Object* allocate$InputMethodManager($Class* clazz) {
	return $of($alloc(InputMethodManager));
}

$String* InputMethodManager::threadName = nullptr;
$Object* InputMethodManager::LOCK = nullptr;
InputMethodManager* InputMethodManager::inputMethodManager = nullptr;

void InputMethodManager::init$() {
}

InputMethodManager* InputMethodManager::getInstance() {
	$init(InputMethodManager);
	$useLocalCurrentObjectStackCache();
	if (InputMethodManager::inputMethodManager != nullptr) {
		return InputMethodManager::inputMethodManager;
	}
	$synchronized(InputMethodManager::LOCK) {
		if (InputMethodManager::inputMethodManager == nullptr) {
			$var($ExecutableInputMethodManager, imm, $new($ExecutableInputMethodManager));
			if (imm->hasMultipleInputMethods()) {
				imm->initialize();
				$var($Thread, immThread, $new($Thread, nullptr, imm, InputMethodManager::threadName, 0, false));
				immThread->setDaemon(true);
				immThread->setPriority($Thread::NORM_PRIORITY + 1);
				immThread->start();
			}
			$assignStatic(InputMethodManager::inputMethodManager, imm);
		}
	}
	return InputMethodManager::inputMethodManager;
}

void clinit$InputMethodManager($Class* class$) {
	$assignStatic(InputMethodManager::threadName, "AWT-InputMethodManager"_s);
	$assignStatic(InputMethodManager::LOCK, $new($Object));
}

InputMethodManager::InputMethodManager() {
}

$Class* InputMethodManager::load$($String* name, bool initialize) {
	$loadClass(InputMethodManager, name, initialize, &_InputMethodManager_ClassInfo_, clinit$InputMethodManager, allocate$InputMethodManager);
	return class$;
}

$Class* InputMethodManager::class$ = nullptr;

		} // im
	} // awt
} // sun
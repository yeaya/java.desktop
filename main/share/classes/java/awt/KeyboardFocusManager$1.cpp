#include <java/awt/KeyboardFocusManager$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

$MethodInfo _KeyboardFocusManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyboardFocusManager$1::*)()>(&KeyboardFocusManager$1::init$))},
	{"getCurrentFocusCycleRoot", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getCurrentKeyboardFocusManager", "(Lsun/awt/AppContext;)Ljava/awt/KeyboardFocusManager;", nullptr, $PUBLIC},
	{"getMostRecentFocusOwner", "(Ljava/awt/Window;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"processSynchronousLightweightTransfer", "(Ljava/awt/Component;Ljava/awt/Component;ZZJ)Z", nullptr, $PUBLIC},
	{"removeLastFocusRequest", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setMostRecentFocusOwner", "(Ljava/awt/Window;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"shouldNativelyFocusHeavyweight", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyboardFocusManager$1_EnclosingMethodInfo_ = {
	"java.awt.KeyboardFocusManager",
	nullptr,
	nullptr
};

$InnerClassInfo _KeyboardFocusManager$1_InnerClassesInfo_[] = {
	{"java.awt.KeyboardFocusManager$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$KeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "KeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyboardFocusManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.KeyboardFocusManager$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$KeyboardFocusManagerAccessor",
	nullptr,
	_KeyboardFocusManager$1_MethodInfo_,
	nullptr,
	&_KeyboardFocusManager$1_EnclosingMethodInfo_,
	_KeyboardFocusManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.KeyboardFocusManager"
};

$Object* allocate$KeyboardFocusManager$1($Class* clazz) {
	return $of($alloc(KeyboardFocusManager$1));
}

void KeyboardFocusManager$1::init$() {
}

int32_t KeyboardFocusManager$1::shouldNativelyFocusHeavyweight($Component* heavyweight, $Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	return $KeyboardFocusManager::shouldNativelyFocusHeavyweight(heavyweight, descendant, temporary, focusedWindowChangeAllowed, time, cause);
}

bool KeyboardFocusManager$1::processSynchronousLightweightTransfer($Component* heavyweight, $Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time) {
	return $KeyboardFocusManager::processSynchronousLightweightTransfer(heavyweight, descendant, temporary, focusedWindowChangeAllowed, time);
}

void KeyboardFocusManager$1::removeLastFocusRequest($Component* heavyweight) {
	$KeyboardFocusManager::removeLastFocusRequest(heavyweight);
}

$Component* KeyboardFocusManager$1::getMostRecentFocusOwner($Window* window) {
	return $KeyboardFocusManager::getMostRecentFocusOwner(window);
}

void KeyboardFocusManager$1::setMostRecentFocusOwner($Window* window, $Component* component) {
	$KeyboardFocusManager::setMostRecentFocusOwner(window, component);
}

$KeyboardFocusManager* KeyboardFocusManager$1::getCurrentKeyboardFocusManager($AppContext* ctx) {
	return $KeyboardFocusManager::getCurrentKeyboardFocusManager(ctx);
}

$Container* KeyboardFocusManager$1::getCurrentFocusCycleRoot() {
	$init($KeyboardFocusManager);
	return $KeyboardFocusManager::currentFocusCycleRoot;
}

KeyboardFocusManager$1::KeyboardFocusManager$1() {
}

$Class* KeyboardFocusManager$1::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManager$1, name, initialize, &_KeyboardFocusManager$1_ClassInfo_, allocate$KeyboardFocusManager$1);
	return class$;
}

$Class* KeyboardFocusManager$1::class$ = nullptr;

	} // awt
} // java
#include <java/awt/Component$DummyRequestFocusController.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RequestFocusController = ::sun::awt::RequestFocusController;

namespace java {
	namespace awt {

$MethodInfo _Component$DummyRequestFocusController_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Component$DummyRequestFocusController::*)()>(&Component$DummyRequestFocusController::init$))},
	{"acceptRequestFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Component$DummyRequestFocusController_InnerClassesInfo_[] = {
	{"java.awt.Component$DummyRequestFocusController", "java.awt.Component", "DummyRequestFocusController", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Component$DummyRequestFocusController_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$DummyRequestFocusController",
	"java.lang.Object",
	"sun.awt.RequestFocusController",
	nullptr,
	_Component$DummyRequestFocusController_MethodInfo_,
	nullptr,
	nullptr,
	_Component$DummyRequestFocusController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$DummyRequestFocusController($Class* clazz) {
	return $of($alloc(Component$DummyRequestFocusController));
}

void Component$DummyRequestFocusController::init$() {
}

bool Component$DummyRequestFocusController::acceptRequestFocus($Component* from, $Component* to, bool temporary, bool focusedWindowChangeAllowed, $FocusEvent$Cause* cause) {
	return true;
}

Component$DummyRequestFocusController::Component$DummyRequestFocusController() {
}

$Class* Component$DummyRequestFocusController::load$($String* name, bool initialize) {
	$loadClass(Component$DummyRequestFocusController, name, initialize, &_Component$DummyRequestFocusController_ClassInfo_, allocate$Component$DummyRequestFocusController);
	return class$;
}

$Class* Component$DummyRequestFocusController::class$ = nullptr;

	} // awt
} // java
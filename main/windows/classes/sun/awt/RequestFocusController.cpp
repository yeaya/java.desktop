#include <sun/awt/RequestFocusController.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _RequestFocusController_MethodInfo_[] = {
	{"acceptRequestFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RequestFocusController_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.RequestFocusController",
	nullptr,
	nullptr,
	nullptr,
	_RequestFocusController_MethodInfo_
};

$Object* allocate$RequestFocusController($Class* clazz) {
	return $of($alloc(RequestFocusController));
}

$Class* RequestFocusController::load$($String* name, bool initialize) {
	$loadClass(RequestFocusController, name, initialize, &_RequestFocusController_ClassInfo_, allocate$RequestFocusController);
	return class$;
}

$Class* RequestFocusController::class$ = nullptr;

	} // awt
} // sun
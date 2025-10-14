#include <javax/accessibility/AccessibleAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CLICK
#undef DECREMENT
#undef INCREMENT
#undef TOGGLE_EXPAND
#undef TOGGLE_POPUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleAction_FieldInfo_[] = {
	{"TOGGLE_EXPAND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, TOGGLE_EXPAND)},
	{"INCREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, INCREMENT)},
	{"DECREMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, DECREMENT)},
	{"CLICK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, CLICK)},
	{"TOGGLE_POPUP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleAction, TOGGLE_POPUP)},
	{}
};

$MethodInfo _AccessibleAction_MethodInfo_[] = {
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleAction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleAction",
	nullptr,
	nullptr,
	_AccessibleAction_FieldInfo_,
	_AccessibleAction_MethodInfo_
};

$Object* allocate$AccessibleAction($Class* clazz) {
	return $of($alloc(AccessibleAction));
}


$String* AccessibleAction::TOGGLE_EXPAND = nullptr;

$String* AccessibleAction::INCREMENT = nullptr;

$String* AccessibleAction::DECREMENT = nullptr;

$String* AccessibleAction::CLICK = nullptr;

$String* AccessibleAction::TOGGLE_POPUP = nullptr;

void clinit$AccessibleAction($Class* class$) {
	$assignStatic(AccessibleAction::TOGGLE_EXPAND, $new($String, "toggleexpand"_s));
	$assignStatic(AccessibleAction::INCREMENT, $new($String, "increment"_s));
	$assignStatic(AccessibleAction::DECREMENT, $new($String, "decrement"_s));
	$assignStatic(AccessibleAction::CLICK, $new($String, "click"_s));
	$assignStatic(AccessibleAction::TOGGLE_POPUP, $new($String, "toggle popup"_s));
}

$Class* AccessibleAction::load$($String* name, bool initialize) {
	$loadClass(AccessibleAction, name, initialize, &_AccessibleAction_ClassInfo_, clinit$AccessibleAction, allocate$AccessibleAction);
	return class$;
}

$Class* AccessibleAction::class$ = nullptr;

	} // accessibility
} // javax
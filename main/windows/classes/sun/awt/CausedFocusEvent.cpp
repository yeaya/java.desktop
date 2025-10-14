#include <sun/awt/CausedFocusEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/CausedFocusEvent$1.h>
#include <sun/awt/CausedFocusEvent$2.h>
#include <sun/awt/CausedFocusEvent$3.h>
#include <sun/awt/CausedFocusEvent$Cause.h>
#include <jcpp.h>

#undef ACTIVATION
#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef MOUSE_EVENT
#undef ROLLBACK
#undef TRAVERSAL
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_UP
#undef UNEXPECTED
#undef UNKNOWN

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $Field = ::java::lang::reflect::Field;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $CausedFocusEvent$1 = ::sun::awt::CausedFocusEvent$1;
using $CausedFocusEvent$2 = ::sun::awt::CausedFocusEvent$2;
using $CausedFocusEvent$3 = ::sun::awt::CausedFocusEvent$3;
using $CausedFocusEvent$Cause = ::sun::awt::CausedFocusEvent$Cause;

namespace sun {
	namespace awt {

$FieldInfo _CausedFocusEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CausedFocusEvent, serialVersionUID)},
	{"dummy", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CausedFocusEvent, dummy)},
	{"cause", "Lsun/awt/CausedFocusEvent$Cause;", nullptr, $PRIVATE | $FINAL, $field(CausedFocusEvent, cause)},
	{}
};

$MethodInfo _CausedFocusEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IZLjava/awt/Component;Lsun/awt/CausedFocusEvent$Cause;)V", nullptr, $PRIVATE, $method(static_cast<void(CausedFocusEvent::*)($Component*,int32_t,bool,$Component*,$CausedFocusEvent$Cause*)>(&CausedFocusEvent::init$))},
	{"access$000", "(Lsun/awt/CausedFocusEvent;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(CausedFocusEvent*)>(&CausedFocusEvent::access$000))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, 0, nullptr, "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _CausedFocusEvent_InnerClassesInfo_[] = {
	{"sun.awt.CausedFocusEvent$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.awt.CausedFocusEvent$Cause", "sun.awt.CausedFocusEvent", "Cause", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"sun.awt.CausedFocusEvent$2", nullptr, nullptr, 0},
	{"sun.awt.CausedFocusEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CausedFocusEvent_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.CausedFocusEvent",
	"java.awt.event.FocusEvent",
	nullptr,
	_CausedFocusEvent_FieldInfo_,
	_CausedFocusEvent_MethodInfo_,
	nullptr,
	nullptr,
	_CausedFocusEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.CausedFocusEvent$3,sun.awt.CausedFocusEvent$Cause,sun.awt.CausedFocusEvent$2,sun.awt.CausedFocusEvent$1"
};

$Object* allocate$CausedFocusEvent($Class* clazz) {
	return $of($alloc(CausedFocusEvent));
}

$Component* CausedFocusEvent::dummy = nullptr;

bool CausedFocusEvent::access$000(CausedFocusEvent* x0) {
	$init(CausedFocusEvent);
	return $nc(x0)->consumed;
}

void CausedFocusEvent::init$($Component* source, int32_t id, bool temporary, $Component* opposite, $CausedFocusEvent$Cause* cause) {
	$FocusEvent::init$(source, id, temporary, opposite);
	$throwNew($IllegalStateException);
}

$Object* CausedFocusEvent::readResolve() {
	$beforeCallerSensitive();
	$FocusEvent$Cause* newCause = nullptr;
	$init($CausedFocusEvent$3);
	switch ($nc($CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->get((this->cause)->ordinal())) {
	case 1:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::UNKNOWN;
			break;
		}
	case 2:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::MOUSE_EVENT;
			break;
		}
	case 3:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::TRAVERSAL;
			break;
		}
	case 4:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::TRAVERSAL_UP;
			break;
		}
	case 5:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::TRAVERSAL_DOWN;
			break;
		}
	case 6:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::TRAVERSAL_FORWARD;
			break;
		}
	case 7:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::TRAVERSAL_BACKWARD;
			break;
		}
	case 8:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::ROLLBACK;
			break;
		}
	case 9:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::UNEXPECTED;
			break;
		}
	case 10:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::ACTIVATION;
			break;
		}
	case 11:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER;
			break;
		}
	default:
		{
			$init($FocusEvent$Cause);
			newCause = $FocusEvent$Cause::UNKNOWN;
		}
	}
	$var($Component, var$0, CausedFocusEvent::dummy);
	int32_t var$1 = getID();
	bool var$2 = isTemporary();
	$var($FocusEvent, focusEvent, $new($FocusEvent, var$0, var$1, var$2, $(getOppositeComponent()), newCause));
	focusEvent->setSource(nullptr);
	try {
		$var($Field, consumedField, $FocusEvent::class$->getField("consumed"_s));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CausedFocusEvent$2, this, consumedField, focusEvent)));
	} catch ($NoSuchFieldException&) {
		$catch();
	}
	$var($AWTAccessor$AWTEventAccessor, accessor, $AWTAccessor::getAWTEventAccessor());
	$nc(accessor)->setBData(focusEvent, $(accessor->getBData(this)));
	return $of(focusEvent);
}

void clinit$CausedFocusEvent($Class* class$) {
	$assignStatic(CausedFocusEvent::dummy, $new($CausedFocusEvent$1));
}

CausedFocusEvent::CausedFocusEvent() {
}

$Class* CausedFocusEvent::load$($String* name, bool initialize) {
	$loadClass(CausedFocusEvent, name, initialize, &_CausedFocusEvent_ClassInfo_, clinit$CausedFocusEvent, allocate$CausedFocusEvent);
	return class$;
}

$Class* CausedFocusEvent::class$ = nullptr;

	} // awt
} // sun
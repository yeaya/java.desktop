#include <java/awt/event/FocusEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$1.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef FOCUS_FIRST
#undef FOCUS_GAINED
#undef FOCUS_LAST
#undef FOCUS_LOST
#undef UNKNOWN

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent$1 = ::java::awt::event::FocusEvent$1;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _FocusEvent_FieldInfo_[] = {
	{"FOCUS_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FocusEvent, FOCUS_FIRST)},
	{"FOCUS_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FocusEvent, FOCUS_LAST)},
	{"FOCUS_GAINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FocusEvent, FOCUS_GAINED)},
	{"FOCUS_LOST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FocusEvent, FOCUS_LOST)},
	{"cause", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $PRIVATE | $FINAL, $field(FocusEvent, cause)},
	{"temporary", "Z", nullptr, 0, $field(FocusEvent, temporary)},
	{"opposite", "Ljava/awt/Component;", nullptr, $TRANSIENT, $field(FocusEvent, opposite)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FocusEvent, serialVersionUID)},
	{}
};

$MethodInfo _FocusEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IZLjava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(FocusEvent::*)($Component*,int32_t,bool,$Component*)>(&FocusEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IZLjava/awt/Component;Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PUBLIC, $method(static_cast<void(FocusEvent::*)($Component*,int32_t,bool,$Component*,$FocusEvent$Cause*)>(&FocusEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(FocusEvent::*)($Component*,int32_t,bool)>(&FocusEvent::init$))},
	{"<init>", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC, $method(static_cast<void(FocusEvent::*)($Component*,int32_t)>(&FocusEvent::init$))},
	{"getCause", "()Ljava/awt/event/FocusEvent$Cause;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$FocusEvent$Cause*(FocusEvent::*)()>(&FocusEvent::getCause))},
	{"getOppositeComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"isTemporary", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, 0, nullptr, "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _FocusEvent_InnerClassesInfo_[] = {
	{"java.awt.event.FocusEvent$Cause", "java.awt.event.FocusEvent", "Cause", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.awt.event.FocusEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FocusEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.FocusEvent",
	"java.awt.event.ComponentEvent",
	nullptr,
	_FocusEvent_FieldInfo_,
	_FocusEvent_MethodInfo_,
	nullptr,
	nullptr,
	_FocusEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.event.FocusEvent$Cause,java.awt.event.FocusEvent$1"
};

$Object* allocate$FocusEvent($Class* clazz) {
	return $of($alloc(FocusEvent));
}

void FocusEvent::init$($Component* source, int32_t id, bool temporary, $Component* opposite) {
	$init($FocusEvent$Cause);
	FocusEvent::init$(source, id, temporary, opposite, $FocusEvent$Cause::UNKNOWN);
}

void FocusEvent::init$($Component* source, int32_t id, bool temporary, $Component* opposite, $FocusEvent$Cause* cause) {
	$ComponentEvent::init$(source, id);
	if (cause == nullptr) {
		$throwNew($IllegalArgumentException, "null cause"_s);
	}
	this->temporary = temporary;
	$set(this, opposite, opposite);
	$set(this, cause, cause);
}

void FocusEvent::init$($Component* source, int32_t id, bool temporary) {
	FocusEvent::init$(source, id, temporary, nullptr);
}

void FocusEvent::init$($Component* source, int32_t id) {
	FocusEvent::init$(source, id, false);
}

bool FocusEvent::isTemporary() {
	return this->temporary;
}

$Component* FocusEvent::getOppositeComponent() {
	if (this->opposite == nullptr) {
		return nullptr;
	}
	return ($SunToolkit::targetToAppContext(this->opposite) == $AppContext::getAppContext()) ? this->opposite : ($Component*)nullptr;
}

$String* FocusEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case FocusEvent::FOCUS_GAINED:
		{
			$assign(typeStr, "FOCUS_GAINED"_s);
			break;
		}
	case FocusEvent::FOCUS_LOST:
		{
			$assign(typeStr, "FOCUS_LOST"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	$var($String, var$0, $$str({typeStr, (this->temporary ? ",temporary"_s : ",permanent"_s), ",opposite="_s, $(getOppositeComponent()), ",cause="_s}));
	return $concat(var$0, $(getCause()));
}

$FocusEvent$Cause* FocusEvent::getCause() {
	return this->cause;
}

$Object* FocusEvent::readResolve() {
	if (this->cause != nullptr) {
		return $of(this);
	}
	$var($Component, var$0, static_cast<$Component*>($new($FocusEvent$1, this)));
	int32_t var$1 = getID();
	bool var$2 = isTemporary();
	$var(FocusEvent, focusEvent, $new(FocusEvent, var$0, var$1, var$2, $(getOppositeComponent())));
	focusEvent->setSource(nullptr);
	focusEvent->consumed = this->consumed;
	$var($AWTAccessor$AWTEventAccessor, accessor, $AWTAccessor::getAWTEventAccessor());
	$nc(accessor)->setBData(focusEvent, $(accessor->getBData(this)));
	return $of(focusEvent);
}

FocusEvent::FocusEvent() {
}

$Class* FocusEvent::load$($String* name, bool initialize) {
	$loadClass(FocusEvent, name, initialize, &_FocusEvent_ClassInfo_, allocate$FocusEvent);
	return class$;
}

$Class* FocusEvent::class$ = nullptr;

		} // event
	} // awt
} // java
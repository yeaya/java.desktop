#include <sun/awt/UngrabEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef UNGRAB_EVENT_ID

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _UngrabEvent_FieldInfo_[] = {
	{"UNGRAB_EVENT_ID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UngrabEvent, UNGRAB_EVENT_ID)},
	{}
};

$MethodInfo _UngrabEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(UngrabEvent::*)($Component*)>(&UngrabEvent::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UngrabEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.UngrabEvent",
	"java.awt.AWTEvent",
	nullptr,
	_UngrabEvent_FieldInfo_,
	_UngrabEvent_MethodInfo_
};

$Object* allocate$UngrabEvent($Class* clazz) {
	return $of($alloc(UngrabEvent));
}

void UngrabEvent::init$($Component* source) {
	$AWTEvent::init$(source, UngrabEvent::UNGRAB_EVENT_ID);
}

$String* UngrabEvent::toString() {
	return $str({"sun.awt.UngrabEvent["_s, $(getSource()), "]"_s});
}

UngrabEvent::UngrabEvent() {
}

$Class* UngrabEvent::load$($String* name, bool initialize) {
	$loadClass(UngrabEvent, name, initialize, &_UngrabEvent_ClassInfo_, allocate$UngrabEvent);
	return class$;
}

$Class* UngrabEvent::class$ = nullptr;

	} // awt
} // sun
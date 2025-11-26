#include <java/awt/ActiveEvent.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _ActiveEvent_MethodInfo_[] = {
	{"dispatch", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ActiveEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.ActiveEvent",
	nullptr,
	nullptr,
	nullptr,
	_ActiveEvent_MethodInfo_
};

$Object* allocate$ActiveEvent($Class* clazz) {
	return $of($alloc(ActiveEvent));
}

$Class* ActiveEvent::load$($String* name, bool initialize) {
	$loadClass(ActiveEvent, name, initialize, &_ActiveEvent_ClassInfo_, allocate$ActiveEvent);
	return class$;
}

$Class* ActiveEvent::class$ = nullptr;

	} // awt
} // java
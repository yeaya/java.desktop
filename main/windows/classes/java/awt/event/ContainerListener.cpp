#include <java/awt/event/ContainerListener.h>

#include <java/awt/event/ContainerEvent.h>
#include <jcpp.h>

using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _ContainerListener_MethodInfo_[] = {
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ContainerListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.ContainerListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ContainerListener_MethodInfo_
};

$Object* allocate$ContainerListener($Class* clazz) {
	return $of($alloc(ContainerListener));
}

$Class* ContainerListener::load$($String* name, bool initialize) {
	$loadClass(ContainerListener, name, initialize, &_ContainerListener_ClassInfo_, allocate$ContainerListener);
	return class$;
}

$Class* ContainerListener::class$ = nullptr;

		} // event
	} // awt
} // java
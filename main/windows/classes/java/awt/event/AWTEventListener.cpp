#include <java/awt/event/AWTEventListener.h>

#include <java/awt/AWTEvent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _AWTEventListener_MethodInfo_[] = {
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AWTEventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.AWTEventListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_AWTEventListener_MethodInfo_
};

$Object* allocate$AWTEventListener($Class* clazz) {
	return $of($alloc(AWTEventListener));
}

$Class* AWTEventListener::load$($String* name, bool initialize) {
	$loadClass(AWTEventListener, name, initialize, &_AWTEventListener_ClassInfo_, allocate$AWTEventListener);
	return class$;
}

$Class* AWTEventListener::class$ = nullptr;

		} // event
	} // awt
} // java
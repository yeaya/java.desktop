#include <java/awt/event/MouseWheelListener.h>

#include <java/awt/event/MouseWheelEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _MouseWheelListener_MethodInfo_[] = {
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MouseWheelListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.MouseWheelListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MouseWheelListener_MethodInfo_
};

$Object* allocate$MouseWheelListener($Class* clazz) {
	return $of($alloc(MouseWheelListener));
}

$Class* MouseWheelListener::load$($String* name, bool initialize) {
	$loadClass(MouseWheelListener, name, initialize, &_MouseWheelListener_ClassInfo_, allocate$MouseWheelListener);
	return class$;
}

$Class* MouseWheelListener::class$ = nullptr;

		} // event
	} // awt
} // java
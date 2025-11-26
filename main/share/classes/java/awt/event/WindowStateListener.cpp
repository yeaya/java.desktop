#include <java/awt/event/WindowStateListener.h>

#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _WindowStateListener_MethodInfo_[] = {
	{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WindowStateListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.WindowStateListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_WindowStateListener_MethodInfo_
};

$Object* allocate$WindowStateListener($Class* clazz) {
	return $of($alloc(WindowStateListener));
}

$Class* WindowStateListener::load$($String* name, bool initialize) {
	$loadClass(WindowStateListener, name, initialize, &_WindowStateListener_ClassInfo_, allocate$WindowStateListener);
	return class$;
}

$Class* WindowStateListener::class$ = nullptr;

		} // event
	} // awt
} // java
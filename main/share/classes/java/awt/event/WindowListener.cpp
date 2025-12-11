#include <java/awt/event/WindowListener.h>

#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _WindowListener_MethodInfo_[] = {
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WindowListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.WindowListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_WindowListener_MethodInfo_
};

$Object* allocate$WindowListener($Class* clazz) {
	return $of($alloc(WindowListener));
}

$Class* WindowListener::load$($String* name, bool initialize) {
	$loadClass(WindowListener, name, initialize, &_WindowListener_ClassInfo_, allocate$WindowListener);
	return class$;
}

$Class* WindowListener::class$ = nullptr;

		} // event
	} // awt
} // java
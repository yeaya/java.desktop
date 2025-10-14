#include <java/awt/event/WindowListener.h>

#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

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
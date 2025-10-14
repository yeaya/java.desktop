#include <java/awt/event/WindowFocusListener.h>

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

$MethodInfo _WindowFocusListener_MethodInfo_[] = {
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WindowFocusListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.WindowFocusListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_WindowFocusListener_MethodInfo_
};

$Object* allocate$WindowFocusListener($Class* clazz) {
	return $of($alloc(WindowFocusListener));
}

$Class* WindowFocusListener::load$($String* name, bool initialize) {
	$loadClass(WindowFocusListener, name, initialize, &_WindowFocusListener_ClassInfo_, allocate$WindowFocusListener);
	return class$;
}

$Class* WindowFocusListener::class$ = nullptr;

		} // event
	} // awt
} // java
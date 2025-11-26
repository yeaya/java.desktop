#include <java/awt/event/MouseMotionListener.h>

#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _MouseMotionListener_MethodInfo_[] = {
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MouseMotionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.MouseMotionListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MouseMotionListener_MethodInfo_
};

$Object* allocate$MouseMotionListener($Class* clazz) {
	return $of($alloc(MouseMotionListener));
}

$Class* MouseMotionListener::load$($String* name, bool initialize) {
	$loadClass(MouseMotionListener, name, initialize, &_MouseMotionListener_ClassInfo_, allocate$MouseMotionListener);
	return class$;
}

$Class* MouseMotionListener::class$ = nullptr;

		} // event
	} // awt
} // java
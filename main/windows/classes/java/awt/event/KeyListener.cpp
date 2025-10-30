#include <java/awt/event/KeyListener.h>

#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _KeyListener_MethodInfo_[] = {
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.KeyListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_KeyListener_MethodInfo_
};

$Object* allocate$KeyListener($Class* clazz) {
	return $of($alloc(KeyListener));
}

$Class* KeyListener::load$($String* name, bool initialize) {
	$loadClass(KeyListener, name, initialize, &_KeyListener_ClassInfo_, allocate$KeyListener);
	return class$;
}

$Class* KeyListener::class$ = nullptr;

		} // event
	} // awt
} // java
#include <java/awt/event/MouseListener.h>

#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _MouseListener_MethodInfo_[] = {
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MouseListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.MouseListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MouseListener_MethodInfo_
};

$Object* allocate$MouseListener($Class* clazz) {
	return $of($alloc(MouseListener));
}

$Class* MouseListener::load$($String* name, bool initialize) {
	$loadClass(MouseListener, name, initialize, &_MouseListener_ClassInfo_, allocate$MouseListener);
	return class$;
}

$Class* MouseListener::class$ = nullptr;

		} // event
	} // awt
} // java
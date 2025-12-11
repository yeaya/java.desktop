#include <java/awt/event/ComponentListener.h>

#include <java/awt/event/ComponentEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _ComponentListener_MethodInfo_[] = {
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ComponentListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.ComponentListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ComponentListener_MethodInfo_
};

$Object* allocate$ComponentListener($Class* clazz) {
	return $of($alloc(ComponentListener));
}

$Class* ComponentListener::load$($String* name, bool initialize) {
	$loadClass(ComponentListener, name, initialize, &_ComponentListener_ClassInfo_, allocate$ComponentListener);
	return class$;
}

$Class* ComponentListener::class$ = nullptr;

		} // event
	} // awt
} // java
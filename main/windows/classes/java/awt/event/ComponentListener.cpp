#include <java/awt/event/ComponentListener.h>

#include <java/awt/event/ComponentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

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
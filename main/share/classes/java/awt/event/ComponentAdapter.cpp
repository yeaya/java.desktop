#include <java/awt/event/ComponentAdapter.h>

#include <java/awt/event/ComponentEvent.h>
#include <jcpp.h>

using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _ComponentAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ComponentAdapter::*)()>(&ComponentAdapter::init$))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ComponentAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.ComponentAdapter",
	"java.lang.Object",
	"java.awt.event.ComponentListener",
	nullptr,
	_ComponentAdapter_MethodInfo_
};

$Object* allocate$ComponentAdapter($Class* clazz) {
	return $of($alloc(ComponentAdapter));
}

void ComponentAdapter::init$() {
}

void ComponentAdapter::componentResized($ComponentEvent* e) {
}

void ComponentAdapter::componentMoved($ComponentEvent* e) {
}

void ComponentAdapter::componentShown($ComponentEvent* e) {
}

void ComponentAdapter::componentHidden($ComponentEvent* e) {
}

ComponentAdapter::ComponentAdapter() {
}

$Class* ComponentAdapter::load$($String* name, bool initialize) {
	$loadClass(ComponentAdapter, name, initialize, &_ComponentAdapter_ClassInfo_, allocate$ComponentAdapter);
	return class$;
}

$Class* ComponentAdapter::class$ = nullptr;

		} // event
	} // awt
} // java
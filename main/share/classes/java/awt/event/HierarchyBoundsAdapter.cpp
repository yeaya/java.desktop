#include <java/awt/event/HierarchyBoundsAdapter.h>

#include <java/awt/event/HierarchyEvent.h>
#include <jcpp.h>

using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _HierarchyBoundsAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(HierarchyBoundsAdapter::*)()>(&HierarchyBoundsAdapter::init$))},
	{"ancestorMoved", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{"ancestorResized", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HierarchyBoundsAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.HierarchyBoundsAdapter",
	"java.lang.Object",
	"java.awt.event.HierarchyBoundsListener",
	nullptr,
	_HierarchyBoundsAdapter_MethodInfo_
};

$Object* allocate$HierarchyBoundsAdapter($Class* clazz) {
	return $of($alloc(HierarchyBoundsAdapter));
}

void HierarchyBoundsAdapter::init$() {
}

void HierarchyBoundsAdapter::ancestorMoved($HierarchyEvent* e) {
}

void HierarchyBoundsAdapter::ancestorResized($HierarchyEvent* e) {
}

HierarchyBoundsAdapter::HierarchyBoundsAdapter() {
}

$Class* HierarchyBoundsAdapter::load$($String* name, bool initialize) {
	$loadClass(HierarchyBoundsAdapter, name, initialize, &_HierarchyBoundsAdapter_ClassInfo_, allocate$HierarchyBoundsAdapter);
	return class$;
}

$Class* HierarchyBoundsAdapter::class$ = nullptr;

		} // event
	} // awt
} // java
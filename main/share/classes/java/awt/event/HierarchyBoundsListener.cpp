#include <java/awt/event/HierarchyBoundsListener.h>

#include <java/awt/event/HierarchyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _HierarchyBoundsListener_MethodInfo_[] = {
	{"ancestorMoved", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"ancestorResized", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HierarchyBoundsListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.HierarchyBoundsListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_HierarchyBoundsListener_MethodInfo_
};

$Object* allocate$HierarchyBoundsListener($Class* clazz) {
	return $of($alloc(HierarchyBoundsListener));
}

$Class* HierarchyBoundsListener::load$($String* name, bool initialize) {
	$loadClass(HierarchyBoundsListener, name, initialize, &_HierarchyBoundsListener_ClassInfo_, allocate$HierarchyBoundsListener);
	return class$;
}

$Class* HierarchyBoundsListener::class$ = nullptr;

		} // event
	} // awt
} // java
#include <java/awt/event/HierarchyListener.h>

#include <java/awt/event/HierarchyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _HierarchyListener_MethodInfo_[] = {
	{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HierarchyListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.HierarchyListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_HierarchyListener_MethodInfo_
};

$Object* allocate$HierarchyListener($Class* clazz) {
	return $of($alloc(HierarchyListener));
}

$Class* HierarchyListener::load$($String* name, bool initialize) {
	$loadClass(HierarchyListener, name, initialize, &_HierarchyListener_ClassInfo_, allocate$HierarchyListener);
	return class$;
}

$Class* HierarchyListener::class$ = nullptr;

		} // event
	} // awt
} // java
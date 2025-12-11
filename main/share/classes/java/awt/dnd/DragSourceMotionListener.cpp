#include <java/awt/dnd/DragSourceMotionListener.h>

#include <java/awt/dnd/DragSourceDragEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DragSourceMotionListener_MethodInfo_[] = {
	{"dragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DragSourceMotionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.DragSourceMotionListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_DragSourceMotionListener_MethodInfo_
};

$Object* allocate$DragSourceMotionListener($Class* clazz) {
	return $of($alloc(DragSourceMotionListener));
}

$Class* DragSourceMotionListener::load$($String* name, bool initialize) {
	$loadClass(DragSourceMotionListener, name, initialize, &_DragSourceMotionListener_ClassInfo_, allocate$DragSourceMotionListener);
	return class$;
}

$Class* DragSourceMotionListener::class$ = nullptr;

		} // dnd
	} // awt
} // java
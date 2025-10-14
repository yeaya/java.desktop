#include <java/awt/dnd/DragGestureListener.h>

#include <java/awt/dnd/DragGestureEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DragGestureListener_MethodInfo_[] = {
	{"dragGestureRecognized", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DragGestureListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.DragGestureListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_DragGestureListener_MethodInfo_
};

$Object* allocate$DragGestureListener($Class* clazz) {
	return $of($alloc(DragGestureListener));
}

$Class* DragGestureListener::load$($String* name, bool initialize) {
	$loadClass(DragGestureListener, name, initialize, &_DragGestureListener_ClassInfo_, allocate$DragGestureListener);
	return class$;
}

$Class* DragGestureListener::class$ = nullptr;

		} // dnd
	} // awt
} // java
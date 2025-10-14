#include <java/awt/dnd/DragSourceMotionListener.h>

#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

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
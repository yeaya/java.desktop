#include <java/awt/event/AdjustmentListener.h>

#include <java/awt/event/AdjustmentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _AdjustmentListener_MethodInfo_[] = {
	{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AdjustmentListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.AdjustmentListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_AdjustmentListener_MethodInfo_
};

$Object* allocate$AdjustmentListener($Class* clazz) {
	return $of($alloc(AdjustmentListener));
}

$Class* AdjustmentListener::load$($String* name, bool initialize) {
	$loadClass(AdjustmentListener, name, initialize, &_AdjustmentListener_ClassInfo_, allocate$AdjustmentListener);
	return class$;
}

$Class* AdjustmentListener::class$ = nullptr;

		} // event
	} // awt
} // java
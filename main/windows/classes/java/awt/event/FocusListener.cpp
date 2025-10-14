#include <java/awt/event/FocusListener.h>

#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _FocusListener_MethodInfo_[] = {
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FocusListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.FocusListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_FocusListener_MethodInfo_
};

$Object* allocate$FocusListener($Class* clazz) {
	return $of($alloc(FocusListener));
}

$Class* FocusListener::load$($String* name, bool initialize) {
	$loadClass(FocusListener, name, initialize, &_FocusListener_ClassInfo_, allocate$FocusListener);
	return class$;
}

$Class* FocusListener::class$ = nullptr;

		} // event
	} // awt
} // java
#include <java/awt/event/InputMethodListener.h>

#include <java/awt/event/InputMethodEvent.h>
#include <jcpp.h>

using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _InputMethodListener_MethodInfo_[] = {
	{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InputMethodListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.InputMethodListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_InputMethodListener_MethodInfo_
};

$Object* allocate$InputMethodListener($Class* clazz) {
	return $of($alloc(InputMethodListener));
}

$Class* InputMethodListener::load$($String* name, bool initialize) {
	$loadClass(InputMethodListener, name, initialize, &_InputMethodListener_ClassInfo_, allocate$InputMethodListener);
	return class$;
}

$Class* InputMethodListener::class$ = nullptr;

		} // event
	} // awt
} // java
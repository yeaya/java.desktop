#include <javax/swing/event/ChangeListener.h>

#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _ChangeListener_MethodInfo_[] = {
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ChangeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.ChangeListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ChangeListener_MethodInfo_
};

$Object* allocate$ChangeListener($Class* clazz) {
	return $of($alloc(ChangeListener));
}

$Class* ChangeListener::load$($String* name, bool initialize) {
	$loadClass(ChangeListener, name, initialize, &_ChangeListener_ClassInfo_, allocate$ChangeListener);
	return class$;
}

$Class* ChangeListener::class$ = nullptr;

		} // event
	} // swing
} // javax
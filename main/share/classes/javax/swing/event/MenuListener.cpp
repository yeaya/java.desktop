#include <javax/swing/event/MenuListener.h>

#include <javax/swing/event/MenuEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MenuListener_MethodInfo_[] = {
	{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.MenuListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MenuListener_MethodInfo_
};

$Object* allocate$MenuListener($Class* clazz) {
	return $of($alloc(MenuListener));
}

$Class* MenuListener::load$($String* name, bool initialize) {
	$loadClass(MenuListener, name, initialize, &_MenuListener_ClassInfo_, allocate$MenuListener);
	return class$;
}

$Class* MenuListener::class$ = nullptr;

		} // event
	} // swing
} // javax
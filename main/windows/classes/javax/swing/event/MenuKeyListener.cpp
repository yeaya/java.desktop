#include <javax/swing/event/MenuKeyListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MenuKeyListener_MethodInfo_[] = {
	{"menuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"menuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"menuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuKeyListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.MenuKeyListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MenuKeyListener_MethodInfo_
};

$Object* allocate$MenuKeyListener($Class* clazz) {
	return $of($alloc(MenuKeyListener));
}

$Class* MenuKeyListener::load$($String* name, bool initialize) {
	$loadClass(MenuKeyListener, name, initialize, &_MenuKeyListener_ClassInfo_, allocate$MenuKeyListener);
	return class$;
}

$Class* MenuKeyListener::class$ = nullptr;

		} // event
	} // swing
} // javax
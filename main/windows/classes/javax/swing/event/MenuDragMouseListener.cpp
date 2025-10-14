#include <javax/swing/event/MenuDragMouseListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MenuDragMouseListener_MethodInfo_[] = {
	{"menuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"menuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"menuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"menuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuDragMouseListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.MenuDragMouseListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_MenuDragMouseListener_MethodInfo_
};

$Object* allocate$MenuDragMouseListener($Class* clazz) {
	return $of($alloc(MenuDragMouseListener));
}

$Class* MenuDragMouseListener::load$($String* name, bool initialize) {
	$loadClass(MenuDragMouseListener, name, initialize, &_MenuDragMouseListener_ClassInfo_, allocate$MenuDragMouseListener);
	return class$;
}

$Class* MenuDragMouseListener::class$ = nullptr;

		} // event
	} // swing
} // javax
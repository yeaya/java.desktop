#include <javax/swing/event/PopupMenuListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _PopupMenuListener_MethodInfo_[] = {
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PopupMenuListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.PopupMenuListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_PopupMenuListener_MethodInfo_
};

$Object* allocate$PopupMenuListener($Class* clazz) {
	return $of($alloc(PopupMenuListener));
}

$Class* PopupMenuListener::load$($String* name, bool initialize) {
	$loadClass(PopupMenuListener, name, initialize, &_PopupMenuListener_ClassInfo_, allocate$PopupMenuListener);
	return class$;
}

$Class* PopupMenuListener::class$ = nullptr;

		} // event
	} // swing
} // javax
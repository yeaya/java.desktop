#include <javax/swing/event/AncestorListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/AncestorEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _AncestorListener_MethodInfo_[] = {
	{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AncestorListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.AncestorListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_AncestorListener_MethodInfo_
};

$Object* allocate$AncestorListener($Class* clazz) {
	return $of($alloc(AncestorListener));
}

$Class* AncestorListener::load$($String* name, bool initialize) {
	$loadClass(AncestorListener, name, initialize, &_AncestorListener_ClassInfo_, allocate$AncestorListener);
	return class$;
}

$Class* AncestorListener::class$ = nullptr;

		} // event
	} // swing
} // javax
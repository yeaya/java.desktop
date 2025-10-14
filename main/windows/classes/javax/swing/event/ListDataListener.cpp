#include <javax/swing/event/ListDataListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListDataEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _ListDataListener_MethodInfo_[] = {
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ListDataListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.ListDataListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ListDataListener_MethodInfo_
};

$Object* allocate$ListDataListener($Class* clazz) {
	return $of($alloc(ListDataListener));
}

$Class* ListDataListener::load$($String* name, bool initialize) {
	$loadClass(ListDataListener, name, initialize, &_ListDataListener_ClassInfo_, allocate$ListDataListener);
	return class$;
}

$Class* ListDataListener::class$ = nullptr;

		} // event
	} // swing
} // javax
#include <javax/swing/event/ListSelectionListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _ListSelectionListener_MethodInfo_[] = {
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ListSelectionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.ListSelectionListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ListSelectionListener_MethodInfo_
};

$Object* allocate$ListSelectionListener($Class* clazz) {
	return $of($alloc(ListSelectionListener));
}

$Class* ListSelectionListener::load$($String* name, bool initialize) {
	$loadClass(ListSelectionListener, name, initialize, &_ListSelectionListener_ClassInfo_, allocate$ListSelectionListener);
	return class$;
}

$Class* ListSelectionListener::class$ = nullptr;

		} // event
	} // swing
} // javax
#include <javax/swing/event/RowSorterListener.h>

#include <javax/swing/event/RowSorterEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $RowSorterEvent = ::javax::swing::event::RowSorterEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _RowSorterListener_MethodInfo_[] = {
	{"sorterChanged", "(Ljavax/swing/event/RowSorterEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RowSorterListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.RowSorterListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_RowSorterListener_MethodInfo_
};

$Object* allocate$RowSorterListener($Class* clazz) {
	return $of($alloc(RowSorterListener));
}

$Class* RowSorterListener::load$($String* name, bool initialize) {
	$loadClass(RowSorterListener, name, initialize, &_RowSorterListener_ClassInfo_, allocate$RowSorterListener);
	return class$;
}

$Class* RowSorterListener::class$ = nullptr;

		} // event
	} // swing
} // javax
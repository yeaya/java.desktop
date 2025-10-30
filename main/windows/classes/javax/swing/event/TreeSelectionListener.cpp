#include <javax/swing/event/TreeSelectionListener.h>

#include <javax/swing/event/TreeSelectionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _TreeSelectionListener_MethodInfo_[] = {
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeSelectionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.TreeSelectionListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_TreeSelectionListener_MethodInfo_
};

$Object* allocate$TreeSelectionListener($Class* clazz) {
	return $of($alloc(TreeSelectionListener));
}

$Class* TreeSelectionListener::load$($String* name, bool initialize) {
	$loadClass(TreeSelectionListener, name, initialize, &_TreeSelectionListener_ClassInfo_, allocate$TreeSelectionListener);
	return class$;
}

$Class* TreeSelectionListener::class$ = nullptr;

		} // event
	} // swing
} // javax
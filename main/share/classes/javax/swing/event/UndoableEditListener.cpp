#include <javax/swing/event/UndoableEditListener.h>

#include <javax/swing/event/UndoableEditEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _UndoableEditListener_MethodInfo_[] = {
	{"undoableEditHappened", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UndoableEditListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.UndoableEditListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_UndoableEditListener_MethodInfo_
};

$Object* allocate$UndoableEditListener($Class* clazz) {
	return $of($alloc(UndoableEditListener));
}

$Class* UndoableEditListener::load$($String* name, bool initialize) {
	$loadClass(UndoableEditListener, name, initialize, &_UndoableEditListener_ClassInfo_, allocate$UndoableEditListener);
	return class$;
}

$Class* UndoableEditListener::class$ = nullptr;

		} // event
	} // swing
} // javax
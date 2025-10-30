#include <javax/swing/event/UndoableEditEvent.h>

#include <java/util/EventObject.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _UndoableEditEvent_FieldInfo_[] = {
	{"myEdit", "Ljavax/swing/undo/UndoableEdit;", nullptr, $PRIVATE, $field(UndoableEditEvent, myEdit)},
	{}
};

$MethodInfo _UndoableEditEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/undo/UndoableEdit;)V", nullptr, $PUBLIC, $method(static_cast<void(UndoableEditEvent::*)(Object$*,$UndoableEdit*)>(&UndoableEditEvent::init$))},
	{"getEdit", "()Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UndoableEditEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.UndoableEditEvent",
	"java.util.EventObject",
	nullptr,
	_UndoableEditEvent_FieldInfo_,
	_UndoableEditEvent_MethodInfo_
};

$Object* allocate$UndoableEditEvent($Class* clazz) {
	return $of($alloc(UndoableEditEvent));
}

void UndoableEditEvent::init$(Object$* source, $UndoableEdit* edit) {
	$EventObject::init$(source);
	$set(this, myEdit, edit);
}

$UndoableEdit* UndoableEditEvent::getEdit() {
	return this->myEdit;
}

UndoableEditEvent::UndoableEditEvent() {
}

$Class* UndoableEditEvent::load$($String* name, bool initialize) {
	$loadClass(UndoableEditEvent, name, initialize, &_UndoableEditEvent_ClassInfo_, allocate$UndoableEditEvent);
	return class$;
}

$Class* UndoableEditEvent::class$ = nullptr;

		} // event
	} // swing
} // javax
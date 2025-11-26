#include <javax/swing/event/RowSorterEvent.h>

#include <java/util/EventObject.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/event/RowSorterEvent$Type.h>
#include <jcpp.h>

#undef SORT_ORDER_CHANGED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $RowSorter = ::javax::swing::RowSorter;
using $RowSorterEvent$Type = ::javax::swing::event::RowSorterEvent$Type;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _RowSorterEvent_FieldInfo_[] = {
	{"type", "Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PRIVATE, $field(RowSorterEvent, type)},
	{"oldViewToModel", "[I", nullptr, $PRIVATE, $field(RowSorterEvent, oldViewToModel)},
	{}
};

$MethodInfo _RowSorterEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RowSorter;)V", "(Ljavax/swing/RowSorter<*>;)V", $PUBLIC, $method(static_cast<void(RowSorterEvent::*)($RowSorter*)>(&RowSorterEvent::init$))},
	{"<init>", "(Ljavax/swing/RowSorter;Ljavax/swing/event/RowSorterEvent$Type;[I)V", "(Ljavax/swing/RowSorter<*>;Ljavax/swing/event/RowSorterEvent$Type;[I)V", $PUBLIC, $method(static_cast<void(RowSorterEvent::*)($RowSorter*,$RowSorterEvent$Type*,$ints*)>(&RowSorterEvent::init$))},
	{"convertPreviousRowIndexToModel", "(I)I", nullptr, $PUBLIC},
	{"getPreviousRowCount", "()I", nullptr, $PUBLIC},
	{"getSource", "()Ljavax/swing/RowSorter;", "()Ljavax/swing/RowSorter<*>;", $PUBLIC},
	{"getType", "()Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RowSorterEvent_InnerClassesInfo_[] = {
	{"javax.swing.event.RowSorterEvent$Type", "javax.swing.event.RowSorterEvent", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RowSorterEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.RowSorterEvent",
	"java.util.EventObject",
	nullptr,
	_RowSorterEvent_FieldInfo_,
	_RowSorterEvent_MethodInfo_,
	nullptr,
	nullptr,
	_RowSorterEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.event.RowSorterEvent$Type"
};

$Object* allocate$RowSorterEvent($Class* clazz) {
	return $of($alloc(RowSorterEvent));
}

void RowSorterEvent::init$($RowSorter* source) {
	$init($RowSorterEvent$Type);
	RowSorterEvent::init$(source, $RowSorterEvent$Type::SORT_ORDER_CHANGED, nullptr);
}

void RowSorterEvent::init$($RowSorter* source, $RowSorterEvent$Type* type, $ints* previousRowIndexToModel) {
	$EventObject::init$(source);
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "type must be non-null"_s);
	}
	$set(this, type, type);
	$set(this, oldViewToModel, previousRowIndexToModel);
}

$Object* RowSorterEvent::getSource() {
	return $of($cast($RowSorter, $EventObject::getSource()));
}

$RowSorterEvent$Type* RowSorterEvent::getType() {
	return this->type;
}

int32_t RowSorterEvent::convertPreviousRowIndexToModel(int32_t index) {
	if (this->oldViewToModel != nullptr && index >= 0 && index < $nc(this->oldViewToModel)->length) {
		return $nc(this->oldViewToModel)->get(index);
	}
	return -1;
}

int32_t RowSorterEvent::getPreviousRowCount() {
	return (this->oldViewToModel == nullptr) ? 0 : $nc(this->oldViewToModel)->length;
}

RowSorterEvent::RowSorterEvent() {
}

$Class* RowSorterEvent::load$($String* name, bool initialize) {
	$loadClass(RowSorterEvent, name, initialize, &_RowSorterEvent_ClassInfo_, allocate$RowSorterEvent);
	return class$;
}

$Class* RowSorterEvent::class$ = nullptr;

		} // event
	} // swing
} // javax
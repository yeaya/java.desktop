#include <javax/swing/event/TableColumnModelEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _TableColumnModelEvent_FieldInfo_[] = {
	{"fromIndex", "I", nullptr, $PROTECTED, $field(TableColumnModelEvent, fromIndex)},
	{"toIndex", "I", nullptr, $PROTECTED, $field(TableColumnModelEvent, toIndex)},
	{}
};

$MethodInfo _TableColumnModelEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/table/TableColumnModel;II)V", nullptr, $PUBLIC, $method(static_cast<void(TableColumnModelEvent::*)($TableColumnModel*,int32_t,int32_t)>(&TableColumnModelEvent::init$))},
	{"getFromIndex", "()I", nullptr, $PUBLIC},
	{"getToIndex", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TableColumnModelEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.TableColumnModelEvent",
	"java.util.EventObject",
	nullptr,
	_TableColumnModelEvent_FieldInfo_,
	_TableColumnModelEvent_MethodInfo_
};

$Object* allocate$TableColumnModelEvent($Class* clazz) {
	return $of($alloc(TableColumnModelEvent));
}

void TableColumnModelEvent::init$($TableColumnModel* source, int32_t from, int32_t to) {
	$EventObject::init$(source);
	this->fromIndex = from;
	this->toIndex = to;
}

int32_t TableColumnModelEvent::getFromIndex() {
	return this->fromIndex;
}

int32_t TableColumnModelEvent::getToIndex() {
	return this->toIndex;
}

TableColumnModelEvent::TableColumnModelEvent() {
}

$Class* TableColumnModelEvent::load$($String* name, bool initialize) {
	$loadClass(TableColumnModelEvent, name, initialize, &_TableColumnModelEvent_ClassInfo_, allocate$TableColumnModelEvent);
	return class$;
}

$Class* TableColumnModelEvent::class$ = nullptr;

		} // event
	} // swing
} // javax
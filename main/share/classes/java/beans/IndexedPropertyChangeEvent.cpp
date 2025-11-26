#include <java/beans/IndexedPropertyChangeEvent.h>

#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _IndexedPropertyChangeEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexedPropertyChangeEvent, serialVersionUID)},
	{"index", "I", nullptr, $PRIVATE, $field(IndexedPropertyChangeEvent, index)},
	{}
};

$MethodInfo _IndexedPropertyChangeEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(IndexedPropertyChangeEvent::*)(Object$*,$String*,Object$*,Object$*,int32_t)>(&IndexedPropertyChangeEvent::init$))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IndexedPropertyChangeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.IndexedPropertyChangeEvent",
	"java.beans.PropertyChangeEvent",
	nullptr,
	_IndexedPropertyChangeEvent_FieldInfo_,
	_IndexedPropertyChangeEvent_MethodInfo_
};

$Object* allocate$IndexedPropertyChangeEvent($Class* clazz) {
	return $of($alloc(IndexedPropertyChangeEvent));
}

void IndexedPropertyChangeEvent::init$(Object$* source, $String* propertyName, Object$* oldValue, Object$* newValue, int32_t index) {
	$PropertyChangeEvent::init$(source, propertyName, oldValue, newValue);
	this->index = index;
}

int32_t IndexedPropertyChangeEvent::getIndex() {
	return this->index;
}

void IndexedPropertyChangeEvent::appendTo($StringBuilder* sb) {
	$nc(sb)->append("; index="_s)->append(getIndex());
}

IndexedPropertyChangeEvent::IndexedPropertyChangeEvent() {
}

$Class* IndexedPropertyChangeEvent::load$($String* name, bool initialize) {
	$loadClass(IndexedPropertyChangeEvent, name, initialize, &_IndexedPropertyChangeEvent_ClassInfo_, allocate$IndexedPropertyChangeEvent);
	return class$;
}

$Class* IndexedPropertyChangeEvent::class$ = nullptr;

	} // beans
} // java
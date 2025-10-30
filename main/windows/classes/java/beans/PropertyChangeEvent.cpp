#include <java/beans/PropertyChangeEvent.h>

#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace beans {

$FieldInfo _PropertyChangeEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyChangeEvent, serialVersionUID)},
	{"propertyName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PropertyChangeEvent, propertyName)},
	{"newValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyChangeEvent, newValue)},
	{"oldValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyChangeEvent, oldValue)},
	{"propagationId", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyChangeEvent, propagationId)},
	{}
};

$MethodInfo _PropertyChangeEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyChangeEvent::*)(Object$*,$String*,Object$*,Object$*)>(&PropertyChangeEvent::init$))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"getNewValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getOldValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPropagationId", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPropertyName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setPropagationId", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PropertyChangeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyChangeEvent",
	"java.util.EventObject",
	nullptr,
	_PropertyChangeEvent_FieldInfo_,
	_PropertyChangeEvent_MethodInfo_
};

$Object* allocate$PropertyChangeEvent($Class* clazz) {
	return $of($alloc(PropertyChangeEvent));
}

void PropertyChangeEvent::init$(Object$* source, $String* propertyName, Object$* oldValue, Object$* newValue) {
	$EventObject::init$(source);
	$set(this, propertyName, propertyName);
	$set(this, newValue, newValue);
	$set(this, oldValue, oldValue);
}

$String* PropertyChangeEvent::getPropertyName() {
	return this->propertyName;
}

$Object* PropertyChangeEvent::getNewValue() {
	return $of(this->newValue);
}

$Object* PropertyChangeEvent::getOldValue() {
	return $of(this->oldValue);
}

void PropertyChangeEvent::setPropagationId(Object$* propagationId) {
	$set(this, propagationId, propagationId);
}

$Object* PropertyChangeEvent::getPropagationId() {
	return $of(this->propagationId);
}

$String* PropertyChangeEvent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $($of(this)->getClass()->getName())));
	sb->append("[propertyName="_s)->append($(getPropertyName()));
	appendTo(sb);
	sb->append("; oldValue="_s)->append($(getOldValue()));
	sb->append("; newValue="_s)->append($(getNewValue()));
	sb->append("; propagationId="_s)->append($(getPropagationId()));
	sb->append("; source="_s)->append($(getSource()));
	return sb->append("]"_s)->toString();
}

void PropertyChangeEvent::appendTo($StringBuilder* sb) {
}

PropertyChangeEvent::PropertyChangeEvent() {
}

$Class* PropertyChangeEvent::load$($String* name, bool initialize) {
	$loadClass(PropertyChangeEvent, name, initialize, &_PropertyChangeEvent_ClassInfo_, allocate$PropertyChangeEvent);
	return class$;
}

$Class* PropertyChangeEvent::class$ = nullptr;

	} // beans
} // java
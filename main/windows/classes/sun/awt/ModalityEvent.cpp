#include <sun/awt/ModalityEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/lang/Error.h>
#include <sun/awt/ModalityListener.h>
#include <jcpp.h>

#undef MODALITY_POPPED
#undef MODALITY_PUSHED

using $AWTEvent = ::java::awt::AWTEvent;
using $ActiveEvent = ::java::awt::ActiveEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModalityListener = ::sun::awt::ModalityListener;

namespace sun {
	namespace awt {

$FieldInfo _ModalityEvent_FieldInfo_[] = {
	{"MODALITY_PUSHED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModalityEvent, MODALITY_PUSHED)},
	{"MODALITY_POPPED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModalityEvent, MODALITY_POPPED)},
	{"listener", "Lsun/awt/ModalityListener;", nullptr, $PRIVATE, $field(ModalityEvent, listener)},
	{}
};

$MethodInfo _ModalityEvent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Lsun/awt/ModalityListener;I)V", nullptr, $PUBLIC, $method(static_cast<void(ModalityEvent::*)(Object$*,$ModalityListener*,int32_t)>(&ModalityEvent::init$))},
	{"dispatch", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModalityEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.ModalityEvent",
	"java.awt.AWTEvent",
	"java.awt.ActiveEvent",
	_ModalityEvent_FieldInfo_,
	_ModalityEvent_MethodInfo_
};

$Object* allocate$ModalityEvent($Class* clazz) {
	return $of($alloc(ModalityEvent));
}

$String* ModalityEvent::toString() {
	 return this->$AWTEvent::toString();
}

int32_t ModalityEvent::hashCode() {
	 return this->$AWTEvent::hashCode();
}

bool ModalityEvent::equals(Object$* arg0) {
	 return this->$AWTEvent::equals(arg0);
}

$Object* ModalityEvent::clone() {
	 return this->$AWTEvent::clone();
}

void ModalityEvent::finalize() {
	this->$AWTEvent::finalize();
}

void ModalityEvent::init$(Object$* source, $ModalityListener* listener, int32_t id) {
	$AWTEvent::init$(source, id);
	$set(this, listener, listener);
}

void ModalityEvent::dispatch() {
	switch (getID()) {
	case ModalityEvent::MODALITY_PUSHED:
		{
			$nc(this->listener)->modalityPushed(this);
			break;
		}
	case ModalityEvent::MODALITY_POPPED:
		{
			$nc(this->listener)->modalityPopped(this);
			break;
		}
	default:
		{
			$throwNew($Error, "Invalid event id."_s);
		}
	}
}

ModalityEvent::ModalityEvent() {
}

$Class* ModalityEvent::load$($String* name, bool initialize) {
	$loadClass(ModalityEvent, name, initialize, &_ModalityEvent_ClassInfo_, allocate$ModalityEvent);
	return class$;
}

$Class* ModalityEvent::class$ = nullptr;

	} // awt
} // sun
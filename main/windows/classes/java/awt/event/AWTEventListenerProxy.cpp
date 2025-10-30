#include <java/awt/event/AWTEventListenerProxy.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/util/EventListener.h>
#include <java/util/EventListenerProxy.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventListenerProxy = ::java::util::EventListenerProxy;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _AWTEventListenerProxy_FieldInfo_[] = {
	{"eventMask", "J", nullptr, $PRIVATE | $FINAL, $field(AWTEventListenerProxy, eventMask)},
	{}
};

$MethodInfo _AWTEventListenerProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLjava/awt/event/AWTEventListener;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTEventListenerProxy::*)(int64_t,$AWTEventListener*)>(&AWTEventListenerProxy::init$))},
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"getEventMask", "()J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AWTEventListenerProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.AWTEventListenerProxy",
	"java.util.EventListenerProxy",
	"java.awt.event.AWTEventListener",
	_AWTEventListenerProxy_FieldInfo_,
	_AWTEventListenerProxy_MethodInfo_,
	"Ljava/util/EventListenerProxy<Ljava/awt/event/AWTEventListener;>;Ljava/awt/event/AWTEventListener;"
};

$Object* allocate$AWTEventListenerProxy($Class* clazz) {
	return $of($alloc(AWTEventListenerProxy));
}

int32_t AWTEventListenerProxy::hashCode() {
	 return this->$EventListenerProxy::hashCode();
}

bool AWTEventListenerProxy::equals(Object$* arg0) {
	 return this->$EventListenerProxy::equals(arg0);
}

$Object* AWTEventListenerProxy::clone() {
	 return this->$EventListenerProxy::clone();
}

$String* AWTEventListenerProxy::toString() {
	 return this->$EventListenerProxy::toString();
}

void AWTEventListenerProxy::finalize() {
	this->$EventListenerProxy::finalize();
}

void AWTEventListenerProxy::init$(int64_t eventMask, $AWTEventListener* listener) {
	$EventListenerProxy::init$(listener);
	this->eventMask = eventMask;
}

void AWTEventListenerProxy::eventDispatched($AWTEvent* event) {
	$nc(($cast($AWTEventListener, $(getListener()))))->eventDispatched(event);
}

int64_t AWTEventListenerProxy::getEventMask() {
	return this->eventMask;
}

AWTEventListenerProxy::AWTEventListenerProxy() {
}

$Class* AWTEventListenerProxy::load$($String* name, bool initialize) {
	$loadClass(AWTEventListenerProxy, name, initialize, &_AWTEventListenerProxy_ClassInfo_, allocate$AWTEventListenerProxy);
	return class$;
}

$Class* AWTEventListenerProxy::class$ = nullptr;

		} // event
	} // awt
} // java
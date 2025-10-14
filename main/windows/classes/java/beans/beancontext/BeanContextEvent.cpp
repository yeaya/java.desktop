#include <java/beans/beancontext/BeanContextEvent.h>

#include <java/beans/beancontext/BeanContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextEvent, serialVersionUID)},
	{"propagatedFrom", "Ljava/beans/beancontext/BeanContext;", nullptr, $PROTECTED, $field(BeanContextEvent, propagatedFrom)},
	{}
};

$MethodInfo _BeanContextEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PROTECTED, $method(static_cast<void(BeanContextEvent::*)($BeanContext*)>(&BeanContextEvent::init$))},
	{"getBeanContext", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC},
	{"getPropagatedFrom", "()Ljava/beans/beancontext/BeanContext;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isPropagated", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setPropagatedFrom", "(Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _BeanContextEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.beans.beancontext.BeanContextEvent",
	"java.util.EventObject",
	nullptr,
	_BeanContextEvent_FieldInfo_,
	_BeanContextEvent_MethodInfo_
};

$Object* allocate$BeanContextEvent($Class* clazz) {
	return $of($alloc(BeanContextEvent));
}

void BeanContextEvent::init$($BeanContext* bc) {
	$EventObject::init$(bc);
}

$BeanContext* BeanContextEvent::getBeanContext() {
	return $cast($BeanContext, getSource());
}

void BeanContextEvent::setPropagatedFrom($BeanContext* bc) {
	$synchronized(this) {
		$set(this, propagatedFrom, bc);
	}
}

$BeanContext* BeanContextEvent::getPropagatedFrom() {
	$synchronized(this) {
		return this->propagatedFrom;
	}
}

bool BeanContextEvent::isPropagated() {
	$synchronized(this) {
		return this->propagatedFrom != nullptr;
	}
}

BeanContextEvent::BeanContextEvent() {
}

$Class* BeanContextEvent::load$($String* name, bool initialize) {
	$loadClass(BeanContextEvent, name, initialize, &_BeanContextEvent_ClassInfo_, allocate$BeanContextEvent);
	return class$;
}

$Class* BeanContextEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java
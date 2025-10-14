#include <java/beans/PropertyVetoException.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _PropertyVetoException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyVetoException, serialVersionUID)},
	{"evt", "Ljava/beans/PropertyChangeEvent;", nullptr, $PRIVATE, $field(PropertyVetoException, evt)},
	{}
};

$MethodInfo _PropertyVetoException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyVetoException::*)($String*,$PropertyChangeEvent*)>(&PropertyVetoException::init$))},
	{"getPropertyChangeEvent", "()Ljava/beans/PropertyChangeEvent;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PropertyVetoException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyVetoException",
	"java.lang.Exception",
	nullptr,
	_PropertyVetoException_FieldInfo_,
	_PropertyVetoException_MethodInfo_
};

$Object* allocate$PropertyVetoException($Class* clazz) {
	return $of($alloc(PropertyVetoException));
}

void PropertyVetoException::init$($String* mess, $PropertyChangeEvent* evt) {
	$Exception::init$(mess);
	$set(this, evt, evt);
}

$PropertyChangeEvent* PropertyVetoException::getPropertyChangeEvent() {
	return this->evt;
}

PropertyVetoException::PropertyVetoException() {
}

PropertyVetoException::PropertyVetoException(const PropertyVetoException& e) {
}

PropertyVetoException PropertyVetoException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PropertyVetoException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PropertyVetoException::load$($String* name, bool initialize) {
	$loadClass(PropertyVetoException, name, initialize, &_PropertyVetoException_ClassInfo_, allocate$PropertyVetoException);
	return class$;
}

$Class* PropertyVetoException::class$ = nullptr;

	} // beans
} // java
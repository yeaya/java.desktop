#include <sun/awt/im/InputMethodAdapter.h>

#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputMethodAdapter_FieldInfo_[] = {
	{"clientComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(InputMethodAdapter, clientComponent)},
	{}
};

$MethodInfo _InputMethodAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodAdapter::*)()>(&InputMethodAdapter::init$))},
	{"disableInputMethod", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getClientComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getNativeInputMethodInfo", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"haveActiveClient", "()Z", nullptr, $PROTECTED},
	{"notifyClientWindowChange", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"reconvert", "()V", nullptr, $PUBLIC},
	{"setAWTFocussedComponent", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setClientComponent", "(Ljava/awt/Component;)V", nullptr, 0},
	{"stopListening", "()V", nullptr, $PROTECTED},
	{"supportsBelowTheSpot", "()Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InputMethodAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.im.InputMethodAdapter",
	"java.lang.Object",
	"java.awt.im.spi.InputMethod",
	_InputMethodAdapter_FieldInfo_,
	_InputMethodAdapter_MethodInfo_
};

$Object* allocate$InputMethodAdapter($Class* clazz) {
	return $of($alloc(InputMethodAdapter));
}

void InputMethodAdapter::init$() {
}

void InputMethodAdapter::setClientComponent($Component* client) {
	$set(this, clientComponent, client);
}

$Component* InputMethodAdapter::getClientComponent() {
	return this->clientComponent;
}

bool InputMethodAdapter::haveActiveClient() {
	return this->clientComponent != nullptr && $nc(this->clientComponent)->getInputMethodRequests() != nullptr;
}

void InputMethodAdapter::setAWTFocussedComponent($Component* component) {
}

bool InputMethodAdapter::supportsBelowTheSpot() {
	return false;
}

void InputMethodAdapter::stopListening() {
}

void InputMethodAdapter::notifyClientWindowChange($Rectangle* location) {
}

void InputMethodAdapter::reconvert() {
	$throwNew($UnsupportedOperationException);
}

InputMethodAdapter::InputMethodAdapter() {
}

$Class* InputMethodAdapter::load$($String* name, bool initialize) {
	$loadClass(InputMethodAdapter, name, initialize, &_InputMethodAdapter_ClassInfo_, allocate$InputMethodAdapter);
	return class$;
}

$Class* InputMethodAdapter::class$ = nullptr;

		} // im
	} // awt
} // sun
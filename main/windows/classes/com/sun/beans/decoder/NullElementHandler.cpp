#include <com/sun/beans/decoder/NullElementHandler.h>

#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _NullElementHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NullElementHandler::*)()>(&NullElementHandler::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $FINAL},
	{"isVoid", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NullElementHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.decoder.NullElementHandler",
	"com.sun.beans.decoder.ElementHandler",
	"com.sun.beans.decoder.ValueObject",
	nullptr,
	_NullElementHandler_MethodInfo_
};

$Object* allocate$NullElementHandler($Class* clazz) {
	return $of($alloc(NullElementHandler));
}

int32_t NullElementHandler::hashCode() {
	 return this->$ElementHandler::hashCode();
}

bool NullElementHandler::equals(Object$* arg0) {
	 return this->$ElementHandler::equals(arg0);
}

$Object* NullElementHandler::clone() {
	 return this->$ElementHandler::clone();
}

$String* NullElementHandler::toString() {
	 return this->$ElementHandler::toString();
}

void NullElementHandler::finalize() {
	this->$ElementHandler::finalize();
}

void NullElementHandler::init$() {
	$ElementHandler::init$();
}

$ValueObject* NullElementHandler::getValueObject() {
	return this;
}

$Object* NullElementHandler::getValue() {
	return $of(nullptr);
}

bool NullElementHandler::isVoid() {
	return false;
}

NullElementHandler::NullElementHandler() {
}

$Class* NullElementHandler::load$($String* name, bool initialize) {
	$loadClass(NullElementHandler, name, initialize, &_NullElementHandler_ClassInfo_, allocate$NullElementHandler);
	return class$;
}

$Class* NullElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com
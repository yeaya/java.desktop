#include <javax/imageio/metadata/IIODOMException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIODOMException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IIODOMException, serialVersionUID)},
	{}
};

$MethodInfo _IIODOMException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IIODOMException::*)(int16_t,$String*)>(&IIODOMException::init$))},
	{}
};

$ClassInfo _IIODOMException_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.metadata.IIODOMException",
	"org.w3c.dom.DOMException",
	nullptr,
	_IIODOMException_FieldInfo_,
	_IIODOMException_MethodInfo_
};

$Object* allocate$IIODOMException($Class* clazz) {
	return $of($alloc(IIODOMException));
}

void IIODOMException::init$(int16_t code, $String* message) {
	$DOMException::init$(code, message);
}

IIODOMException::IIODOMException() {
}

IIODOMException::IIODOMException(const IIODOMException& e) {
}

IIODOMException IIODOMException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IIODOMException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IIODOMException::load$($String* name, bool initialize) {
	$loadClass(IIODOMException, name, initialize, &_IIODOMException_ClassInfo_, allocate$IIODOMException);
	return class$;
}

$Class* IIODOMException::class$ = nullptr;

		} // metadata
	} // imageio
} // javax
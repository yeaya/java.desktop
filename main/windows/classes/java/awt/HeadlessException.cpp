#include <java/awt/HeadlessException.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace awt {

$FieldInfo _HeadlessException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HeadlessException, serialVersionUID)},
	{}
};

$MethodInfo _HeadlessException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessException::*)()>(&HeadlessException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessException::*)($String*)>(&HeadlessException::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeadlessException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.HeadlessException",
	"java.lang.UnsupportedOperationException",
	nullptr,
	_HeadlessException_FieldInfo_,
	_HeadlessException_MethodInfo_
};

$Object* allocate$HeadlessException($Class* clazz) {
	return $of($alloc(HeadlessException));
}

void HeadlessException::init$() {
	$UnsupportedOperationException::init$();
}

void HeadlessException::init$($String* msg) {
	$UnsupportedOperationException::init$(msg);
}

$String* HeadlessException::getMessage() {
	$useLocalCurrentObjectStackCache();
	$var($String, superMessage, $UnsupportedOperationException::getMessage());
	$var($String, headlessMessage, $GraphicsEnvironment::getHeadlessMessage());
	if (superMessage == nullptr) {
		return headlessMessage;
	} else if (headlessMessage == nullptr) {
		return superMessage;
	} else {
		return $str({superMessage, headlessMessage});
	}
}

HeadlessException::HeadlessException() {
}

HeadlessException::HeadlessException(const HeadlessException& e) {
}

HeadlessException HeadlessException::wrapper$() {
	$pendingException(this);
	return *this;
}

void HeadlessException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* HeadlessException::load$($String* name, bool initialize) {
	$loadClass(HeadlessException, name, initialize, &_HeadlessException_ClassInfo_, allocate$HeadlessException);
	return class$;
}

$Class* HeadlessException::class$ = nullptr;

	} // awt
} // java
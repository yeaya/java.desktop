#include <sun/awt/X11/XException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XException::*)()>(&XException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XException::*)($String*)>(&XException::init$))},
	{}
};

$ClassInfo _XException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_XException_MethodInfo_
};

$Object* allocate$XException($Class* clazz) {
	return $of($alloc(XException));
}

void XException::init$() {
	$RuntimeException::init$();
}

void XException::init$($String* message) {
	$RuntimeException::init$(message);
}

XException::XException() {
}

XException::XException(const XException& e) : $RuntimeException(e) {
}

void XException::throw$() {
	throw *this;
}

$Class* XException::load$($String* name, bool initialize) {
	$loadClass(XException, name, initialize, &_XException_ClassInfo_, allocate$XException);
	return class$;
}

$Class* XException::class$ = nullptr;

		} // X11
	} // awt
} // sun
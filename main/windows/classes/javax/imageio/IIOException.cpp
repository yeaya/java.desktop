#include <javax/imageio/IIOException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {

$FieldInfo _IIOException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IIOException, serialVersionUID)},
	{}
};

$MethodInfo _IIOException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IIOException::*)($String*)>(&IIOException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IIOException::*)($String*,$Throwable*)>(&IIOException::init$))},
	{}
};

$ClassInfo _IIOException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.IIOException",
	"java.io.IOException",
	nullptr,
	_IIOException_FieldInfo_,
	_IIOException_MethodInfo_
};

$Object* allocate$IIOException($Class* clazz) {
	return $of($alloc(IIOException));
}

void IIOException::init$($String* message) {
	$IOException::init$(message);
}

void IIOException::init$($String* message, $Throwable* cause) {
	$IOException::init$(message);
	initCause(cause);
}

IIOException::IIOException() {
}

IIOException::IIOException(const IIOException& e) : $IOException(e) {
}

void IIOException::throw$() {
	throw *this;
}

$Class* IIOException::load$($String* name, bool initialize) {
	$loadClass(IIOException, name, initialize, &_IIOException_ClassInfo_, allocate$IIOException);
	return class$;
}

$Class* IIOException::class$ = nullptr;

	} // imageio
} // javax
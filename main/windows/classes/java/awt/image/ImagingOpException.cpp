#include <java/awt/image/ImagingOpException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ImagingOpException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImagingOpException, serialVersionUID)},
	{}
};

$MethodInfo _ImagingOpException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImagingOpException::*)($String*)>(&ImagingOpException::init$))},
	{}
};

$ClassInfo _ImagingOpException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ImagingOpException",
	"java.lang.RuntimeException",
	nullptr,
	_ImagingOpException_FieldInfo_,
	_ImagingOpException_MethodInfo_
};

$Object* allocate$ImagingOpException($Class* clazz) {
	return $of($alloc(ImagingOpException));
}

void ImagingOpException::init$($String* s) {
	$RuntimeException::init$(s);
}

ImagingOpException::ImagingOpException() {
}

ImagingOpException::ImagingOpException(const ImagingOpException& e) {
}

ImagingOpException ImagingOpException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ImagingOpException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ImagingOpException::load$($String* name, bool initialize) {
	$loadClass(ImagingOpException, name, initialize, &_ImagingOpException_ClassInfo_, allocate$ImagingOpException);
	return class$;
}

$Class* ImagingOpException::class$ = nullptr;

		} // image
	} // awt
} // java
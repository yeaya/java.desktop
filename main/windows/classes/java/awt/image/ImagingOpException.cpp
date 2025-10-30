#include <java/awt/image/ImagingOpException.h>

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

ImagingOpException::ImagingOpException(const ImagingOpException& e) : $RuntimeException(e) {
}

void ImagingOpException::throw$() {
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
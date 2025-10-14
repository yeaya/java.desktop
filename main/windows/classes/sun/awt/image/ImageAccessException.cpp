#include <sun/awt/image/ImageAccessException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _ImageAccessException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageAccessException::*)($String*)>(&ImageAccessException::init$))},
	{}
};

$ClassInfo _ImageAccessException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ImageAccessException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_ImageAccessException_MethodInfo_
};

$Object* allocate$ImageAccessException($Class* clazz) {
	return $of($alloc(ImageAccessException));
}

void ImageAccessException::init$($String* s) {
	$Exception::init$(s);
}

ImageAccessException::ImageAccessException() {
}

ImageAccessException::ImageAccessException(const ImageAccessException& e) {
}

ImageAccessException ImageAccessException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ImageAccessException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ImageAccessException::load$($String* name, bool initialize) {
	$loadClass(ImageAccessException, name, initialize, &_ImageAccessException_ClassInfo_, allocate$ImageAccessException);
	return class$;
}

$Class* ImageAccessException::class$ = nullptr;

		} // image
	} // awt
} // sun
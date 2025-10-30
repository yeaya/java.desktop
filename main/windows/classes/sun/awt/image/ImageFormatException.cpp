#include <sun/awt/image/ImageFormatException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _ImageFormatException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageFormatException::*)($String*)>(&ImageFormatException::init$))},
	{}
};

$ClassInfo _ImageFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ImageFormatException",
	"java.lang.Exception",
	nullptr,
	nullptr,
	_ImageFormatException_MethodInfo_
};

$Object* allocate$ImageFormatException($Class* clazz) {
	return $of($alloc(ImageFormatException));
}

void ImageFormatException::init$($String* s) {
	$Exception::init$(s);
}

ImageFormatException::ImageFormatException() {
}

ImageFormatException::ImageFormatException(const ImageFormatException& e) : $Exception(e) {
}

void ImageFormatException::throw$() {
	throw *this;
}

$Class* ImageFormatException::load$($String* name, bool initialize) {
	$loadClass(ImageFormatException, name, initialize, &_ImageFormatException_ClassInfo_, allocate$ImageFormatException);
	return class$;
}

$Class* ImageFormatException::class$ = nullptr;

		} // image
	} // awt
} // sun
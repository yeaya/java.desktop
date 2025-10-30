#include <java/awt/image/RasterFormatException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _RasterFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RasterFormatException, serialVersionUID)},
	{}
};

$MethodInfo _RasterFormatException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RasterFormatException::*)($String*)>(&RasterFormatException::init$))},
	{}
};

$ClassInfo _RasterFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.RasterFormatException",
	"java.lang.RuntimeException",
	nullptr,
	_RasterFormatException_FieldInfo_,
	_RasterFormatException_MethodInfo_
};

$Object* allocate$RasterFormatException($Class* clazz) {
	return $of($alloc(RasterFormatException));
}

void RasterFormatException::init$($String* s) {
	$RuntimeException::init$(s);
}

RasterFormatException::RasterFormatException() {
}

RasterFormatException::RasterFormatException(const RasterFormatException& e) : $RuntimeException(e) {
}

void RasterFormatException::throw$() {
	throw *this;
}

$Class* RasterFormatException::load$($String* name, bool initialize) {
	$loadClass(RasterFormatException, name, initialize, &_RasterFormatException_ClassInfo_, allocate$RasterFormatException);
	return class$;
}

$Class* RasterFormatException::class$ = nullptr;

		} // image
	} // awt
} // java
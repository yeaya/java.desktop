#include <java/awt/image/RasterFormatException.h>

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

RasterFormatException::RasterFormatException(const RasterFormatException& e) {
}

RasterFormatException RasterFormatException::wrapper$() {
	$pendingException(this);
	return *this;
}

void RasterFormatException::throwWrapper$() {
	$pendingException(this);
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
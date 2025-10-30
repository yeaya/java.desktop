#include <sun/awt/image/PNGImageDecoder$PNGException.h>

#include <java/io/IOException.h>
#include <sun/awt/image/PNGImageDecoder.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PNGImageDecoder = ::sun::awt::image::PNGImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PNGImageDecoder$PNGException_FieldInfo_[] = {
	{"this$0", "Lsun/awt/image/PNGImageDecoder;", nullptr, $FINAL | $SYNTHETIC, $field(PNGImageDecoder$PNGException, this$0)},
	{}
};

$MethodInfo _PNGImageDecoder$PNGException_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/PNGImageDecoder;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(PNGImageDecoder$PNGException::*)($PNGImageDecoder*,$String*)>(&PNGImageDecoder$PNGException::init$))},
	{}
};

$InnerClassInfo _PNGImageDecoder$PNGException_InnerClassesInfo_[] = {
	{"sun.awt.image.PNGImageDecoder$PNGException", "sun.awt.image.PNGImageDecoder", "PNGException", $PUBLIC},
	{}
};

$ClassInfo _PNGImageDecoder$PNGException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PNGImageDecoder$PNGException",
	"java.io.IOException",
	nullptr,
	_PNGImageDecoder$PNGException_FieldInfo_,
	_PNGImageDecoder$PNGException_MethodInfo_,
	nullptr,
	nullptr,
	_PNGImageDecoder$PNGException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.PNGImageDecoder"
};

$Object* allocate$PNGImageDecoder$PNGException($Class* clazz) {
	return $of($alloc(PNGImageDecoder$PNGException));
}

void PNGImageDecoder$PNGException::init$($PNGImageDecoder* this$0, $String* s) {
	$set(this, this$0, this$0);
	$IOException::init$(s);
}

PNGImageDecoder$PNGException::PNGImageDecoder$PNGException() {
}

PNGImageDecoder$PNGException::PNGImageDecoder$PNGException(const PNGImageDecoder$PNGException& e) : $IOException(e) {
}

void PNGImageDecoder$PNGException::throw$() {
	throw *this;
}

$Class* PNGImageDecoder$PNGException::load$($String* name, bool initialize) {
	$loadClass(PNGImageDecoder$PNGException, name, initialize, &_PNGImageDecoder$PNGException_ClassInfo_, allocate$PNGImageDecoder$PNGException);
	return class$;
}

$Class* PNGImageDecoder$PNGException::class$ = nullptr;

		} // image
	} // awt
} // sun
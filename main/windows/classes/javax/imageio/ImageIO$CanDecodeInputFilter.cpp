#include <javax/imageio/ImageIO$CanDecodeInputFilter.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$CanDecodeInputFilter_FieldInfo_[] = {
	{"input", "Ljava/lang/Object;", nullptr, 0, $field(ImageIO$CanDecodeInputFilter, input)},
	{}
};

$MethodInfo _ImageIO$CanDecodeInputFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIO$CanDecodeInputFilter::*)(Object$*)>(&ImageIO$CanDecodeInputFilter::init$))},
	{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$CanDecodeInputFilter_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$CanDecodeInputFilter", "javax.imageio.ImageIO", "CanDecodeInputFilter", $STATIC},
	{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageIO$CanDecodeInputFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$CanDecodeInputFilter",
	"java.lang.Object",
	"javax.imageio.spi.ServiceRegistry$Filter",
	_ImageIO$CanDecodeInputFilter_FieldInfo_,
	_ImageIO$CanDecodeInputFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIO$CanDecodeInputFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$CanDecodeInputFilter($Class* clazz) {
	return $of($alloc(ImageIO$CanDecodeInputFilter));
}

void ImageIO$CanDecodeInputFilter::init$(Object$* input) {
	$set(this, input, input);
}

bool ImageIO$CanDecodeInputFilter::filter(Object$* elt) {
	try {
		$var($ImageReaderSpi, spi, $cast($ImageReaderSpi, elt));
		$var($ImageInputStream, stream, nullptr);
		if ($instanceOf($ImageInputStream, this->input)) {
			$assign(stream, $cast($ImageInputStream, this->input));
		}
		bool canDecode = false;
		if (stream != nullptr) {
			stream->mark();
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				canDecode = $nc(spi)->canDecodeInput(this->input);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (stream != nullptr) {
					stream->reset();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		return canDecode;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

ImageIO$CanDecodeInputFilter::ImageIO$CanDecodeInputFilter() {
}

$Class* ImageIO$CanDecodeInputFilter::load$($String* name, bool initialize) {
	$loadClass(ImageIO$CanDecodeInputFilter, name, initialize, &_ImageIO$CanDecodeInputFilter_ClassInfo_, allocate$ImageIO$CanDecodeInputFilter);
	return class$;
}

$Class* ImageIO$CanDecodeInputFilter::class$ = nullptr;

	} // imageio
} // javax
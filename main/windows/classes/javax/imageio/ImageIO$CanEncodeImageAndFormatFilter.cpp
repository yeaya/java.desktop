#include <javax/imageio/ImageIO$CanEncodeImageAndFormatFilter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$CanEncodeImageAndFormatFilter_FieldInfo_[] = {
	{"type", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, 0, $field(ImageIO$CanEncodeImageAndFormatFilter, type)},
	{"formatName", "Ljava/lang/String;", nullptr, 0, $field(ImageIO$CanEncodeImageAndFormatFilter, formatName)},
	{}
};

$MethodInfo _ImageIO$CanEncodeImageAndFormatFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/ImageTypeSpecifier;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIO$CanEncodeImageAndFormatFilter::*)($ImageTypeSpecifier*,$String*)>(&ImageIO$CanEncodeImageAndFormatFilter::init$))},
	{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$CanEncodeImageAndFormatFilter_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$CanEncodeImageAndFormatFilter", "javax.imageio.ImageIO", "CanEncodeImageAndFormatFilter", $STATIC},
	{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageIO$CanEncodeImageAndFormatFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$CanEncodeImageAndFormatFilter",
	"java.lang.Object",
	"javax.imageio.spi.ServiceRegistry$Filter",
	_ImageIO$CanEncodeImageAndFormatFilter_FieldInfo_,
	_ImageIO$CanEncodeImageAndFormatFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIO$CanEncodeImageAndFormatFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$CanEncodeImageAndFormatFilter($Class* clazz) {
	return $of($alloc(ImageIO$CanEncodeImageAndFormatFilter));
}

void ImageIO$CanEncodeImageAndFormatFilter::init$($ImageTypeSpecifier* type, $String* formatName) {
	$set(this, type, type);
	$set(this, formatName, formatName);
}

bool ImageIO$CanEncodeImageAndFormatFilter::filter(Object$* elt) {
	$var($ImageWriterSpi, spi, $cast($ImageWriterSpi, elt));
	bool var$0 = $nc($($Arrays::asList($($nc(spi)->getFormatNames()))))->contains(this->formatName);
	return var$0 && $nc(spi)->canEncodeImage(this->type);
}

ImageIO$CanEncodeImageAndFormatFilter::ImageIO$CanEncodeImageAndFormatFilter() {
}

$Class* ImageIO$CanEncodeImageAndFormatFilter::load$($String* name, bool initialize) {
	$loadClass(ImageIO$CanEncodeImageAndFormatFilter, name, initialize, &_ImageIO$CanEncodeImageAndFormatFilter_ClassInfo_, allocate$ImageIO$CanEncodeImageAndFormatFilter);
	return class$;
}

$Class* ImageIO$CanEncodeImageAndFormatFilter::class$ = nullptr;

	} // imageio
} // javax
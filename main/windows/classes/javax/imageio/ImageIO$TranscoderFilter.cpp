#include <javax/imageio/ImageIO$TranscoderFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$TranscoderFilter_FieldInfo_[] = {
	{"readerSpiName", "Ljava/lang/String;", nullptr, 0, $field(ImageIO$TranscoderFilter, readerSpiName)},
	{"writerSpiName", "Ljava/lang/String;", nullptr, 0, $field(ImageIO$TranscoderFilter, writerSpiName)},
	{}
};

$MethodInfo _ImageIO$TranscoderFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIO$TranscoderFilter::*)($ImageReaderSpi*,$ImageWriterSpi*)>(&ImageIO$TranscoderFilter::init$))},
	{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$TranscoderFilter_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$TranscoderFilter", "javax.imageio.ImageIO", "TranscoderFilter", $STATIC},
	{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageIO$TranscoderFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$TranscoderFilter",
	"java.lang.Object",
	"javax.imageio.spi.ServiceRegistry$Filter",
	_ImageIO$TranscoderFilter_FieldInfo_,
	_ImageIO$TranscoderFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIO$TranscoderFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$TranscoderFilter($Class* clazz) {
	return $of($alloc(ImageIO$TranscoderFilter));
}

void ImageIO$TranscoderFilter::init$($ImageReaderSpi* readerSpi, $ImageWriterSpi* writerSpi) {
	$set(this, readerSpiName, $nc($of(readerSpi))->getClass()->getName());
	$set(this, writerSpiName, $nc($of(writerSpi))->getClass()->getName());
}

bool ImageIO$TranscoderFilter::filter(Object$* elt) {
	$useLocalCurrentObjectStackCache();
	$var($ImageTranscoderSpi, spi, $cast($ImageTranscoderSpi, elt));
	$var($String, readerName, $nc(spi)->getReaderServiceProviderName());
	$var($String, writerName, spi->getWriterServiceProviderName());
	bool var$0 = $nc(readerName)->equals(this->readerSpiName);
	return (var$0 && $nc(writerName)->equals(this->writerSpiName));
}

ImageIO$TranscoderFilter::ImageIO$TranscoderFilter() {
}

$Class* ImageIO$TranscoderFilter::load$($String* name, bool initialize) {
	$loadClass(ImageIO$TranscoderFilter, name, initialize, &_ImageIO$TranscoderFilter_ClassInfo_, allocate$ImageIO$TranscoderFilter);
	return class$;
}

$Class* ImageIO$TranscoderFilter::class$ = nullptr;

	} // imageio
} // javax
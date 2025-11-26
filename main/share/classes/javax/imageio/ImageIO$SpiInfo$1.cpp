#include <javax/imageio/ImageIO$SpiInfo$1.h>

#include <javax/imageio/ImageIO$SpiInfo.h>
#include <javax/imageio/spi/ImageReaderWriterSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIO$SpiInfo = ::javax::imageio::ImageIO$SpiInfo;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;

namespace javax {
	namespace imageio {

$MethodInfo _ImageIO$SpiInfo$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(ImageIO$SpiInfo$1::*)($String*,int32_t)>(&ImageIO$SpiInfo$1::init$))},
	{"info", "(Ljavax/imageio/spi/ImageReaderWriterSpi;)[Ljava/lang/String;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _ImageIO$SpiInfo$1_EnclosingMethodInfo_ = {
	"javax.imageio.ImageIO$SpiInfo",
	nullptr,
	nullptr
};

$InnerClassInfo _ImageIO$SpiInfo$1_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$SpiInfo", "javax.imageio.ImageIO", "SpiInfo", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"javax.imageio.ImageIO$SpiInfo$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _ImageIO$SpiInfo$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.imageio.ImageIO$SpiInfo$1",
	"javax.imageio.ImageIO$SpiInfo",
	nullptr,
	nullptr,
	_ImageIO$SpiInfo$1_MethodInfo_,
	nullptr,
	&_ImageIO$SpiInfo$1_EnclosingMethodInfo_,
	_ImageIO$SpiInfo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$SpiInfo$1($Class* clazz) {
	return $of($alloc(ImageIO$SpiInfo$1));
}

void ImageIO$SpiInfo$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$ImageIO$SpiInfo::init$($enum$name, $enum$ordinal);
}

$StringArray* ImageIO$SpiInfo$1::info($ImageReaderWriterSpi* spi) {
	return $nc(spi)->getFormatNames();
}

ImageIO$SpiInfo$1::ImageIO$SpiInfo$1() {
}

$Class* ImageIO$SpiInfo$1::load$($String* name, bool initialize) {
	$loadClass(ImageIO$SpiInfo$1, name, initialize, &_ImageIO$SpiInfo$1_ClassInfo_, allocate$ImageIO$SpiInfo$1);
	return class$;
}

$Class* ImageIO$SpiInfo$1::class$ = nullptr;

	} // imageio
} // javax
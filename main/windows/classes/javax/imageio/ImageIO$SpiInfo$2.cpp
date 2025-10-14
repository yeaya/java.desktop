#include <javax/imageio/ImageIO$SpiInfo$2.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _ImageIO$SpiInfo$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(ImageIO$SpiInfo$2::*)($String*,int32_t)>(&ImageIO$SpiInfo$2::init$))},
	{"info", "(Ljavax/imageio/spi/ImageReaderWriterSpi;)[Ljava/lang/String;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _ImageIO$SpiInfo$2_EnclosingMethodInfo_ = {
	"javax.imageio.ImageIO$SpiInfo",
	nullptr,
	nullptr
};

$InnerClassInfo _ImageIO$SpiInfo$2_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$SpiInfo", "javax.imageio.ImageIO", "SpiInfo", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"javax.imageio.ImageIO$SpiInfo$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _ImageIO$SpiInfo$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.imageio.ImageIO$SpiInfo$2",
	"javax.imageio.ImageIO$SpiInfo",
	nullptr,
	nullptr,
	_ImageIO$SpiInfo$2_MethodInfo_,
	nullptr,
	&_ImageIO$SpiInfo$2_EnclosingMethodInfo_,
	_ImageIO$SpiInfo$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$SpiInfo$2($Class* clazz) {
	return $of($alloc(ImageIO$SpiInfo$2));
}

void ImageIO$SpiInfo$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$ImageIO$SpiInfo::init$($enum$name, $enum$ordinal);
}

$StringArray* ImageIO$SpiInfo$2::info($ImageReaderWriterSpi* spi) {
	return $nc(spi)->getMIMETypes();
}

ImageIO$SpiInfo$2::ImageIO$SpiInfo$2() {
}

$Class* ImageIO$SpiInfo$2::load$($String* name, bool initialize) {
	$loadClass(ImageIO$SpiInfo$2, name, initialize, &_ImageIO$SpiInfo$2_ClassInfo_, allocate$ImageIO$SpiInfo$2);
	return class$;
}

$Class* ImageIO$SpiInfo$2::class$ = nullptr;

	} // imageio
} // javax
#include <sun/awt/IconInfo.h>

#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef ALLBITS
#undef TYPE_INT

using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Hashtable = ::java::util::Hashtable;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {

$FieldInfo _IconInfo_FieldInfo_[] = {
	{"intIconData", "[I", nullptr, $PRIVATE, $field(IconInfo, intIconData)},
	{"longIconData", "[J", nullptr, $PRIVATE, $field(IconInfo, longIconData)},
	{"image", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(IconInfo, image)},
	{"width", "I", nullptr, $PRIVATE | $FINAL, $field(IconInfo, width)},
	{"height", "I", nullptr, $PRIVATE | $FINAL, $field(IconInfo, height)},
	{"scaledWidth", "I", nullptr, $PRIVATE, $field(IconInfo, scaledWidth)},
	{"scaledHeight", "I", nullptr, $PRIVATE, $field(IconInfo, scaledHeight)},
	{"rawLength", "I", nullptr, $PRIVATE, $field(IconInfo, rawLength)},
	{}
};

$MethodInfo _IconInfo_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(IconInfo::*)($ints*)>(&IconInfo::init$))},
	{"<init>", "([J)V", nullptr, $PUBLIC, $method(static_cast<void(IconInfo::*)($longs*)>(&IconInfo::init$))},
	{"<init>", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(IconInfo::*)($Image*)>(&IconInfo::init$))},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getIntData", "()[I", nullptr, $PUBLIC},
	{"getLongData", "()[J", nullptr, $PUBLIC},
	{"getRawLength", "()I", nullptr, $PUBLIC},
	{"getScaledRawLength", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(IconInfo::*)(int32_t,int32_t)>(&IconInfo::getScaledRawLength))},
	{"getScaledWidthAndHeight", "(II)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(int32_t,int32_t)>(&IconInfo::getScaledWidthAndHeight))},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"imageToIntArray", "(Ljava/awt/Image;II)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Image*,int32_t,int32_t)>(&IconInfo::imageToIntArray))},
	{"intArrayToImage", "([I)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)($ints*)>(&IconInfo::intArrayToImage))},
	{"intArrayToLongArray", "([I)[J", nullptr, $PRIVATE | $STATIC, $method(static_cast<$longs*(*)($ints*)>(&IconInfo::intArrayToLongArray))},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"longArrayToIntArray", "([J)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($longs*)>(&IconInfo::longArrayToIntArray))},
	{"setScaledSize", "(II)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IconInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.IconInfo",
	"java.lang.Object",
	nullptr,
	_IconInfo_FieldInfo_,
	_IconInfo_MethodInfo_
};

$Object* allocate$IconInfo($Class* clazz) {
	return $of($alloc(IconInfo));
}

void IconInfo::init$($ints* intIconData) {
	$set(this, intIconData, (nullptr == intIconData) ? ($ints*)nullptr : $Arrays::copyOf(intIconData, $nc(intIconData)->length));
	this->width = $nc(intIconData)->get(0);
	this->height = intIconData->get(1);
	this->scaledWidth = this->width;
	this->scaledHeight = this->height;
	this->rawLength = this->width * this->height + 2;
}

void IconInfo::init$($longs* longIconData) {
	$set(this, longIconData, (nullptr == longIconData) ? ($longs*)nullptr : $Arrays::copyOf(longIconData, $nc(longIconData)->length));
	this->width = (int32_t)$nc(longIconData)->get(0);
	this->height = (int32_t)longIconData->get(1);
	this->scaledWidth = this->width;
	this->scaledHeight = this->height;
	this->rawLength = this->width * this->height + 2;
}

void IconInfo::init$($Image* image) {
	$set(this, image, image);
	if ($instanceOf($ToolkitImage, image)) {
		$var($ImageRepresentation, ir, $nc(($cast($ToolkitImage, image)))->getImageRep());
		$nc(ir)->reconstruct($ImageObserver::ALLBITS);
		this->width = ir->getWidth();
		this->height = ir->getHeight();
	} else {
		this->width = $nc(image)->getWidth(nullptr);
		this->height = image->getHeight(nullptr);
	}
	this->scaledWidth = this->width;
	this->scaledHeight = this->height;
	this->rawLength = getScaledRawLength(this->width, this->height);
}

void IconInfo::setScaledSize(int32_t width, int32_t height) {
	this->scaledWidth = width;
	this->scaledHeight = height;
	this->rawLength = getScaledRawLength(width, height);
}

int32_t IconInfo::getScaledRawLength(int32_t w, int32_t h) {
	$var($ints, scaledWidthAndHeight, getScaledWidthAndHeight(w, h));
	return $nc(scaledWidthAndHeight)->get(0) * scaledWidthAndHeight->get(1) + 2;
}

$ints* IconInfo::getScaledWidthAndHeight(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, tx, $nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getDefaultTransform());
	int32_t w = $Region::clipScale(width, $nc(tx)->getScaleX());
	int32_t h = $Region::clipScale(height, $nc(tx)->getScaleY());
	return $new($ints, {
		w,
		h
	});
}

bool IconInfo::isValid() {
	return (this->width > 0 && this->height > 0);
}

int32_t IconInfo::getWidth() {
	return this->width;
}

int32_t IconInfo::getHeight() {
	return this->height;
}

$String* IconInfo::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"IconInfo[w="_s, $$str(this->width), ",h="_s, $$str(this->height), ",sw="_s, $$str(this->scaledWidth), ",sh="_s, $$str(this->scaledHeight), "]"_s});
}

int32_t IconInfo::getRawLength() {
	return this->rawLength;
}

$ints* IconInfo::getIntData() {
	if (this->intIconData == nullptr) {
		if (this->longIconData != nullptr) {
			$set(this, intIconData, longArrayToIntArray(this->longIconData));
		} else if (this->image != nullptr) {
			$set(this, intIconData, imageToIntArray(this->image, this->scaledWidth, this->scaledHeight));
		}
	}
	return this->intIconData;
}

$longs* IconInfo::getLongData() {
	if (this->longIconData == nullptr) {
		if (this->intIconData != nullptr) {
			$set(this, longIconData, intArrayToLongArray(this->intIconData));
		} else if (this->image != nullptr) {
			$var($ints, intIconData, imageToIntArray(this->image, this->scaledWidth, this->scaledHeight));
			$set(this, longIconData, intArrayToLongArray(intIconData));
		}
	}
	return this->longIconData;
}

$Image* IconInfo::getImage() {
	if (this->image == nullptr) {
		if (this->intIconData != nullptr) {
			$set(this, image, intArrayToImage(this->intIconData));
		} else if (this->longIconData != nullptr) {
			$var($ints, intIconData, longArrayToIntArray(this->longIconData));
			$set(this, image, intArrayToImage(intIconData));
		}
	}
	return this->image;
}

$ints* IconInfo::longArrayToIntArray($longs* longData) {
	$var($ints, intData, $new($ints, $nc(longData)->length));
	for (int32_t i = 0; i < longData->length; ++i) {
		intData->set(i, (int32_t)longData->get(i));
	}
	return intData;
}

$longs* IconInfo::intArrayToLongArray($ints* intData) {
	$var($longs, longData, $new($longs, $nc(intData)->length));
	for (int32_t i = 0; i < intData->length; ++i) {
		longData->set(i, intData->get(i));
	}
	return longData;
}

$Image* IconInfo::intArrayToImage($ints* raw) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, cm, $new($DirectColorModel, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), 32, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, false, $DataBuffer::TYPE_INT));
	$var($DataBuffer, buffer, $new($DataBufferInt, raw, $nc(raw)->length - 2, 2));
	$var($WritableRaster, raster, $Raster::createPackedRaster(buffer, $nc(raw)->get(0), raw->get(1), raw->get(0), $$new($ints, {
		0x00FF0000,
		0x0000FF00,
		255,
		(int32_t)0xFF000000
	}), ($Point*)nullptr));
	$var($BufferedImage, im, $new($BufferedImage, cm, raster, false, ($Hashtable*)nullptr));
	return im;
}

$ints* IconInfo::imageToIntArray($Image* image, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (width <= 0 || height <= 0) {
		return nullptr;
	}
	$var($ColorModel, cm, $new($DirectColorModel, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), 32, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, false, $DataBuffer::TYPE_INT));
	$var($ints, scaledWidthAndHeight, getScaledWidthAndHeight(width, height));
	width = $nc(scaledWidthAndHeight)->get(0);
	height = scaledWidthAndHeight->get(1);
	$var($DataBufferInt, buffer, $new($DataBufferInt, width * height));
	$var($WritableRaster, raster, $Raster::createPackedRaster(static_cast<$DataBuffer*>(buffer), width, height, width, $$new($ints, {
		0x00FF0000,
		0x0000FF00,
		255,
		(int32_t)0xFF000000
	}), ($Point*)nullptr));
	$var($BufferedImage, im, $new($BufferedImage, cm, raster, false, ($Hashtable*)nullptr));
	$var($Graphics, g, im->getGraphics());
	$nc(g)->drawImage(image, 0, 0, width, height, nullptr);
	g->dispose();
	$var($ints, data, buffer->getData());
	$var($ints, raw, $new($ints, width * height + 2));
	raw->set(0, width);
	raw->set(1, height);
	$System::arraycopy(data, 0, raw, 2, width * height);
	return raw;
}

IconInfo::IconInfo() {
}

$Class* IconInfo::load$($String* name, bool initialize) {
	$loadClass(IconInfo, name, initialize, &_IconInfo_ClassInfo_, allocate$IconInfo);
	return class$;
}

$Class* IconInfo::class$ = nullptr;

	} // awt
} // sun
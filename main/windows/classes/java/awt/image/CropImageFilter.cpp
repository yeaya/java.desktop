#include <java/awt/image/CropImageFilter.h>

#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _CropImageFilter_FieldInfo_[] = {
	{"cropX", "I", nullptr, 0, $field(CropImageFilter, cropX)},
	{"cropY", "I", nullptr, 0, $field(CropImageFilter, cropY)},
	{"cropW", "I", nullptr, 0, $field(CropImageFilter, cropW)},
	{"cropH", "I", nullptr, 0, $field(CropImageFilter, cropH)},
	{}
};

$MethodInfo _CropImageFilter_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(CropImageFilter::*)(int32_t,int32_t,int32_t,int32_t)>(&CropImageFilter::init$))},
	{"addWithoutOverflow", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CropImageFilter::*)(int32_t,int32_t)>(&CropImageFilter::addWithoutOverflow))},
	{"setDimensions", "(II)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC},
	{"setProperties", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC},
	{}
};

$ClassInfo _CropImageFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.CropImageFilter",
	"java.awt.image.ImageFilter",
	nullptr,
	_CropImageFilter_FieldInfo_,
	_CropImageFilter_MethodInfo_
};

$Object* allocate$CropImageFilter($Class* clazz) {
	return $of($alloc(CropImageFilter));
}

void CropImageFilter::init$(int32_t x, int32_t y, int32_t w, int32_t h) {
	$ImageFilter::init$();
	this->cropX = x;
	this->cropY = y;
	this->cropW = w;
	this->cropH = h;
}

void CropImageFilter::setProperties($Hashtable* props) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, p, $cast($Hashtable, $nc(props)->clone()));
	$nc(p)->put("croprect"_s, $$new($Rectangle, this->cropX, this->cropY, this->cropW, this->cropH));
	$ImageFilter::setProperties(p);
}

void CropImageFilter::setDimensions(int32_t w, int32_t h) {
	$nc(this->consumer)->setDimensions(this->cropW, this->cropH);
}

void CropImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) {
	int32_t x1 = x;
	if (x1 < this->cropX) {
		x1 = this->cropX;
	}
	int32_t x2 = addWithoutOverflow(x, w);
	if (x2 > this->cropX + this->cropW) {
		x2 = this->cropX + this->cropW;
	}
	int32_t y1 = y;
	if (y1 < this->cropY) {
		y1 = this->cropY;
	}
	int32_t y2 = addWithoutOverflow(y, h);
	if (y2 > this->cropY + this->cropH) {
		y2 = this->cropY + this->cropH;
	}
	if (x1 >= x2 || y1 >= y2) {
		return;
	}
	$nc(this->consumer)->setPixels(x1 - this->cropX, y1 - this->cropY, (x2 - x1), (y2 - y1), model, pixels, off + (y1 - y) * scansize + (x1 - x), scansize);
}

void CropImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) {
	int32_t x1 = x;
	if (x1 < this->cropX) {
		x1 = this->cropX;
	}
	int32_t x2 = addWithoutOverflow(x, w);
	if (x2 > this->cropX + this->cropW) {
		x2 = this->cropX + this->cropW;
	}
	int32_t y1 = y;
	if (y1 < this->cropY) {
		y1 = this->cropY;
	}
	int32_t y2 = addWithoutOverflow(y, h);
	if (y2 > this->cropY + this->cropH) {
		y2 = this->cropY + this->cropH;
	}
	if (x1 >= x2 || y1 >= y2) {
		return;
	}
	$nc(this->consumer)->setPixels(x1 - this->cropX, y1 - this->cropY, (x2 - x1), (y2 - y1), model, pixels, off + (y1 - y) * scansize + (x1 - x), scansize);
}

int32_t CropImageFilter::addWithoutOverflow(int32_t x, int32_t w) {
	int32_t x2 = x + w;
	if (x > 0 && w > 0 && x2 < 0) {
		x2 = $Integer::MAX_VALUE;
	} else if (x < 0 && w < 0 && x2 > 0) {
		x2 = $Integer::MIN_VALUE;
	}
	return x2;
}

CropImageFilter::CropImageFilter() {
}

$Class* CropImageFilter::load$($String* name, bool initialize) {
	$loadClass(CropImageFilter, name, initialize, &_CropImageFilter_ClassInfo_, allocate$CropImageFilter);
	return class$;
}

$Class* CropImageFilter::class$ = nullptr;

		} // image
	} // awt
} // java
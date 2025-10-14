#include <java/awt/image/ReplicateScaleFilter.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ReplicateScaleFilter_FieldInfo_[] = {
	{"srcWidth", "I", nullptr, $PROTECTED, $field(ReplicateScaleFilter, srcWidth)},
	{"srcHeight", "I", nullptr, $PROTECTED, $field(ReplicateScaleFilter, srcHeight)},
	{"destWidth", "I", nullptr, $PROTECTED, $field(ReplicateScaleFilter, destWidth)},
	{"destHeight", "I", nullptr, $PROTECTED, $field(ReplicateScaleFilter, destHeight)},
	{"srcrows", "[I", nullptr, $PROTECTED, $field(ReplicateScaleFilter, srcrows)},
	{"srccols", "[I", nullptr, $PROTECTED, $field(ReplicateScaleFilter, srccols)},
	{"outpixbuf", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(ReplicateScaleFilter, outpixbuf)},
	{}
};

$MethodInfo _ReplicateScaleFilter_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ReplicateScaleFilter::*)(int32_t,int32_t)>(&ReplicateScaleFilter::init$))},
	{"calculateMaps", "()V", nullptr, $PRIVATE, $method(static_cast<void(ReplicateScaleFilter::*)()>(&ReplicateScaleFilter::calculateMaps))},
	{"setDimensions", "(II)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC},
	{"setProperties", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC},
	{}
};

$ClassInfo _ReplicateScaleFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ReplicateScaleFilter",
	"java.awt.image.ImageFilter",
	nullptr,
	_ReplicateScaleFilter_FieldInfo_,
	_ReplicateScaleFilter_MethodInfo_
};

$Object* allocate$ReplicateScaleFilter($Class* clazz) {
	return $of($alloc(ReplicateScaleFilter));
}

void ReplicateScaleFilter::init$(int32_t width, int32_t height) {
	$ImageFilter::init$();
	if (width == 0 || height == 0) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(width), ") and height ("_s, $$str(height), ") must be non-zero"_s}));
	}
	this->destWidth = width;
	this->destHeight = height;
}

void ReplicateScaleFilter::setProperties($Hashtable* props) {
	$var($Hashtable, p, $cast($Hashtable, $nc(props)->clone()));
	$var($String, key, "rescale"_s);
	$var($String, val, $str({$$str(this->destWidth), "x"_s, $$str(this->destHeight)}));
	$var($Object, o, $nc(p)->get(key));
	if (o != nullptr && $instanceOf($String, o)) {
		$assign(val, $str({($cast($String, o)), ", "_s, val}));
	}
	p->put(key, val);
	$ImageFilter::setProperties(p);
}

void ReplicateScaleFilter::setDimensions(int32_t w, int32_t h) {
	this->srcWidth = w;
	this->srcHeight = h;
	if (this->destWidth < 0) {
		if (this->destHeight < 0) {
			this->destWidth = this->srcWidth;
			this->destHeight = this->srcHeight;
		} else {
			this->destWidth = $div(this->srcWidth * this->destHeight, this->srcHeight);
		}
	} else if (this->destHeight < 0) {
		this->destHeight = $div(this->srcHeight * this->destWidth, this->srcWidth);
	}
	$nc(this->consumer)->setDimensions(this->destWidth, this->destHeight);
}

void ReplicateScaleFilter::calculateMaps() {
	$set(this, srcrows, $new($ints, this->destHeight + 1));
	for (int32_t y = 0; y <= this->destHeight; ++y) {
		$nc(this->srcrows)->set(y, $div((2 * y * this->srcHeight + this->srcHeight), (2 * this->destHeight)));
	}
	$set(this, srccols, $new($ints, this->destWidth + 1));
	for (int32_t x = 0; x <= this->destWidth; ++x) {
		$nc(this->srccols)->set(x, $div((2 * x * this->srcWidth + this->srcWidth), (2 * this->destWidth)));
	}
}

void ReplicateScaleFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) {
	if (this->srcrows == nullptr || this->srccols == nullptr) {
		calculateMaps();
	}
	int32_t sx = 0;
	int32_t sy = 0;
	int32_t dx1 = $div((2 * x * this->destWidth + this->srcWidth - 1), (2 * this->srcWidth));
	int32_t dy1 = $div((2 * y * this->destHeight + this->srcHeight - 1), (2 * this->srcHeight));
	$var($bytes, outpix, nullptr);
	if (this->outpixbuf != nullptr && $instanceOf($bytes, this->outpixbuf)) {
		$assign(outpix, $cast($bytes, this->outpixbuf));
	} else {
		$assign(outpix, $new($bytes, this->destWidth));
		$set(this, outpixbuf, outpix);
	}
	for (int32_t dy = dy1; (sy = $nc(this->srcrows)->get(dy)) < y + h; ++dy) {
		int32_t srcoff = off + scansize * (sy - y);
		int32_t dx = 0;
		for (dx = dx1; (sx = $nc(this->srccols)->get(dx)) < x + w; ++dx) {
			$nc(outpix)->set(dx, $nc(pixels)->get(srcoff + sx - x));
		}
		if (dx > dx1) {
			$nc(this->consumer)->setPixels(dx1, dy, dx - dx1, 1, model, outpix, dx1, this->destWidth);
		}
	}
}

void ReplicateScaleFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) {
	if (this->srcrows == nullptr || this->srccols == nullptr) {
		calculateMaps();
	}
	int32_t sx = 0;
	int32_t sy = 0;
	int32_t dx1 = $div((2 * x * this->destWidth + this->srcWidth - 1), (2 * this->srcWidth));
	int32_t dy1 = $div((2 * y * this->destHeight + this->srcHeight - 1), (2 * this->srcHeight));
	$var($ints, outpix, nullptr);
	if (this->outpixbuf != nullptr && $instanceOf($ints, this->outpixbuf)) {
		$assign(outpix, $cast($ints, this->outpixbuf));
	} else {
		$assign(outpix, $new($ints, this->destWidth));
		$set(this, outpixbuf, outpix);
	}
	for (int32_t dy = dy1; (sy = $nc(this->srcrows)->get(dy)) < y + h; ++dy) {
		int32_t srcoff = off + scansize * (sy - y);
		int32_t dx = 0;
		for (dx = dx1; (sx = $nc(this->srccols)->get(dx)) < x + w; ++dx) {
			$nc(outpix)->set(dx, $nc(pixels)->get(srcoff + sx - x));
		}
		if (dx > dx1) {
			$nc(this->consumer)->setPixels(dx1, dy, dx - dx1, 1, model, outpix, dx1, this->destWidth);
		}
	}
}

ReplicateScaleFilter::ReplicateScaleFilter() {
}

$Class* ReplicateScaleFilter::load$($String* name, bool initialize) {
	$loadClass(ReplicateScaleFilter, name, initialize, &_ReplicateScaleFilter_ClassInfo_, allocate$ReplicateScaleFilter);
	return class$;
}

$Class* ReplicateScaleFilter::class$ = nullptr;

		} // image
	} // awt
} // java
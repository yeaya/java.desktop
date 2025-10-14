#include <java/awt/image/AreaAveragingScaleFilter.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ReplicateScaleFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ReplicateScaleFilter = ::java::awt::image::ReplicateScaleFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _AreaAveragingScaleFilter_FieldInfo_[] = {
	{"rgbmodel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AreaAveragingScaleFilter, rgbmodel)},
	{"neededHints", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AreaAveragingScaleFilter, neededHints)},
	{"passthrough", "Z", nullptr, $PRIVATE, $field(AreaAveragingScaleFilter, passthrough)},
	{"reds", "[F", nullptr, $PRIVATE, $field(AreaAveragingScaleFilter, reds)},
	{"greens", "[F", nullptr, $PRIVATE, $field(AreaAveragingScaleFilter, greens)},
	{"blues", "[F", nullptr, $PRIVATE, $field(AreaAveragingScaleFilter, blues)},
	{"alphas", "[F", nullptr, $PRIVATE, $field(AreaAveragingScaleFilter, alphas)},
	{"savedy", "I", nullptr, $PRIVATE, $field(AreaAveragingScaleFilter, savedy)},
	{"savedyrem", "I", nullptr, $PRIVATE, $field(AreaAveragingScaleFilter, savedyrem)},
	{}
};

$MethodInfo _AreaAveragingScaleFilter_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(AreaAveragingScaleFilter::*)(int32_t,int32_t)>(&AreaAveragingScaleFilter::init$))},
	{"accumPixels", "(IIIILjava/awt/image/ColorModel;Ljava/lang/Object;II)V", nullptr, $PRIVATE, $method(static_cast<void(AreaAveragingScaleFilter::*)(int32_t,int32_t,int32_t,int32_t,$ColorModel*,Object$*,int32_t,int32_t)>(&AreaAveragingScaleFilter::accumPixels))},
	{"calcRow", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(AreaAveragingScaleFilter::*)()>(&AreaAveragingScaleFilter::calcRow))},
	{"makeAccumBuffers", "()V", nullptr, $PRIVATE, $method(static_cast<void(AreaAveragingScaleFilter::*)()>(&AreaAveragingScaleFilter::makeAccumBuffers))},
	{"setHints", "(I)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AreaAveragingScaleFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.AreaAveragingScaleFilter",
	"java.awt.image.ReplicateScaleFilter",
	nullptr,
	_AreaAveragingScaleFilter_FieldInfo_,
	_AreaAveragingScaleFilter_MethodInfo_
};

$Object* allocate$AreaAveragingScaleFilter($Class* clazz) {
	return $of($alloc(AreaAveragingScaleFilter));
}

$ColorModel* AreaAveragingScaleFilter::rgbmodel = nullptr;

void AreaAveragingScaleFilter::init$(int32_t width, int32_t height) {
	$ReplicateScaleFilter::init$(width, height);
}

void AreaAveragingScaleFilter::setHints(int32_t hints) {
	this->passthrough = (((int32_t)(hints & (uint32_t)AreaAveragingScaleFilter::neededHints)) != AreaAveragingScaleFilter::neededHints);
	$ReplicateScaleFilter::setHints(hints);
}

void AreaAveragingScaleFilter::makeAccumBuffers() {
	$set(this, reds, $new($floats, this->destWidth));
	$set(this, greens, $new($floats, this->destWidth));
	$set(this, blues, $new($floats, this->destWidth));
	$set(this, alphas, $new($floats, this->destWidth));
}

$ints* AreaAveragingScaleFilter::calcRow() {
	float origmult = ((float)this->srcWidth) * this->srcHeight;
	if (this->outpixbuf == nullptr || !($instanceOf($ints, this->outpixbuf))) {
		$set(this, outpixbuf, $new($ints, this->destWidth));
	}
	$var($ints, outpix, $cast($ints, this->outpixbuf));
	for (int32_t x = 0; x < this->destWidth; ++x) {
		float mult = origmult;
		int32_t a = $Math::round($nc(this->alphas)->get(x) / mult);
		if (a <= 0) {
			a = 0;
		} else if (a >= 255) {
			a = 255;
		} else {
			mult = $nc(this->alphas)->get(x) / 255;
		}
		int32_t r = $Math::round($nc(this->reds)->get(x) / mult);
		int32_t g = $Math::round($nc(this->greens)->get(x) / mult);
		int32_t b = $Math::round($nc(this->blues)->get(x) / mult);
		if (r < 0) {
			r = 0;
		} else if (r > 255) {
			r = 255;
		}
		if (g < 0) {
			g = 0;
		} else if (g > 255) {
			g = 255;
		}
		if (b < 0) {
			b = 0;
		} else if (b > 255) {
			b = 255;
		}
		$nc(outpix)->set(x, ((((a << 24) | (r << 16)) | (g << 8)) | b));
	}
	return outpix;
}

void AreaAveragingScaleFilter::accumPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, Object$* pixels, int32_t off, int32_t scansize) {
	if (this->reds == nullptr) {
		makeAccumBuffers();
	}
	int32_t sy = y;
	int32_t syrem = this->destHeight;
	int32_t dy = 0;
	int32_t dyrem = 0;
	if (sy == 0) {
		dy = 0;
		dyrem = 0;
	} else {
		dy = this->savedy;
		dyrem = this->savedyrem;
	}
	while (sy < y + h) {
		int32_t amty = 0;
		if (dyrem == 0) {
			for (int32_t i = 0; i < this->destWidth; ++i) {
				int32_t var$0 = i;
				int32_t var$1 = i;
				int32_t var$2 = i;
				$nc(this->alphas)->set(var$0, $nc(this->reds)->set(var$1, $nc(this->greens)->set(var$2, $nc(this->blues)->set(i, 0.0f))));
			}
			dyrem = this->srcHeight;
		}
		if (syrem < dyrem) {
			amty = syrem;
		} else {
			amty = dyrem;
		}
		int32_t sx = 0;
		int32_t dx = 0;
		int32_t sxrem = 0;
		int32_t dxrem = this->srcWidth;
		float a = 0.0f;
		float r = 0.0f;
		float g = 0.0f;
		float b = 0.0f;
		while (sx < w) {
			if (sxrem == 0) {
				sxrem = this->destWidth;
				int32_t rgb = 0;
				if ($instanceOf($bytes, pixels)) {
					rgb = (int32_t)($nc(($cast($bytes, pixels)))->get(off + sx) & (uint32_t)255);
				} else {
					rgb = $nc(($cast($ints, pixels)))->get(off + sx);
				}
				rgb = $nc(model)->getRGB(rgb);
				a = (float)(int32_t)((uint32_t)rgb >> 24);
				r = (float)((int32_t)((rgb >> 16) & (uint32_t)255));
				g = (float)((int32_t)((rgb >> 8) & (uint32_t)255));
				b = (float)((int32_t)(rgb & (uint32_t)255));
				if (a != 255.0f) {
					float ascale = a / 255.0f;
					r *= ascale;
					g *= ascale;
					b *= ascale;
				}
			}
			int32_t amtx = 0;
			if (sxrem < dxrem) {
				amtx = sxrem;
			} else {
				amtx = dxrem;
			}
			float mult = ((float)amtx) * amty;
			(*$nc(this->alphas))[dx] += mult * a;
			(*$nc(this->reds))[dx] += mult * r;
			(*$nc(this->greens))[dx] += mult * g;
			(*$nc(this->blues))[dx] += mult * b;
			if ((sxrem -= amtx) == 0) {
				++sx;
			}
			if ((dxrem -= amtx) == 0) {
				++dx;
				dxrem = this->srcWidth;
			}
		}
		if ((dyrem -= amty) == 0) {
			$var($ints, outpix, calcRow());
			do {
				$nc(this->consumer)->setPixels(0, dy, this->destWidth, 1, AreaAveragingScaleFilter::rgbmodel, outpix, 0, this->destWidth);
				++dy;
			} while ((syrem -= amty) >= amty && amty == this->srcHeight);
		} else {
			syrem -= amty;
		}
		if (syrem == 0) {
			syrem = this->destHeight;
			++sy;
			off += scansize;
		}
	}
	this->savedyrem = dyrem;
	this->savedy = dy;
}

void AreaAveragingScaleFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) {
	if (this->passthrough) {
		$ReplicateScaleFilter::setPixels(x, y, w, h, model, pixels, off, scansize);
	} else {
		accumPixels(x, y, w, h, model, pixels, off, scansize);
	}
}

void AreaAveragingScaleFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) {
	if (this->passthrough) {
		$ReplicateScaleFilter::setPixels(x, y, w, h, model, pixels, off, scansize);
	} else {
		accumPixels(x, y, w, h, model, pixels, off, scansize);
	}
}

void clinit$AreaAveragingScaleFilter($Class* class$) {
	$assignStatic(AreaAveragingScaleFilter::rgbmodel, $ColorModel::getRGBdefault());
}

AreaAveragingScaleFilter::AreaAveragingScaleFilter() {
}

$Class* AreaAveragingScaleFilter::load$($String* name, bool initialize) {
	$loadClass(AreaAveragingScaleFilter, name, initialize, &_AreaAveragingScaleFilter_ClassInfo_, clinit$AreaAveragingScaleFilter, allocate$AreaAveragingScaleFilter);
	return class$;
}

$Class* AreaAveragingScaleFilter::class$ = nullptr;

		} // image
	} // awt
} // java
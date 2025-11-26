#include <java/awt/image/RGBImageFilter.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/IndexColorModel.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _RGBImageFilter_FieldInfo_[] = {
	{"origmodel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(RGBImageFilter, origmodel)},
	{"newmodel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(RGBImageFilter, newmodel)},
	{"canFilterIndexColorModel", "Z", nullptr, $PROTECTED, $field(RGBImageFilter, canFilterIndexColorModel)},
	{}
};

$MethodInfo _RGBImageFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RGBImageFilter::*)()>(&RGBImageFilter::init$))},
	{"filterIndexColorModel", "(Ljava/awt/image/IndexColorModel;)Ljava/awt/image/IndexColorModel;", nullptr, $PUBLIC},
	{"filterRGB", "(III)I", nullptr, $PUBLIC | $ABSTRACT},
	{"filterRGBPixels", "(IIII[III)V", nullptr, $PUBLIC},
	{"setColorModel", "(Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC},
	{"substituteColorModel", "(Ljava/awt/image/ColorModel;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RGBImageFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.RGBImageFilter",
	"java.awt.image.ImageFilter",
	nullptr,
	_RGBImageFilter_FieldInfo_,
	_RGBImageFilter_MethodInfo_
};

$Object* allocate$RGBImageFilter($Class* clazz) {
	return $of($alloc(RGBImageFilter));
}

void RGBImageFilter::init$() {
	$ImageFilter::init$();
}

void RGBImageFilter::setColorModel($ColorModel* model) {
	$useLocalCurrentObjectStackCache();
	if (this->canFilterIndexColorModel && ($instanceOf($IndexColorModel, model))) {
		$var($ColorModel, newcm, filterIndexColorModel($cast($IndexColorModel, model)));
		substituteColorModel(model, newcm);
		$nc(this->consumer)->setColorModel(newcm);
	} else {
		$nc(this->consumer)->setColorModel($($ColorModel::getRGBdefault()));
	}
}

void RGBImageFilter::substituteColorModel($ColorModel* oldcm, $ColorModel* newcm) {
	$set(this, origmodel, oldcm);
	$set(this, newmodel, newcm);
}

$IndexColorModel* RGBImageFilter::filterIndexColorModel($IndexColorModel* icm) {
	$useLocalCurrentObjectStackCache();
	int32_t mapsize = $nc(icm)->getMapSize();
	$var($bytes, r, $new($bytes, mapsize));
	$var($bytes, g, $new($bytes, mapsize));
	$var($bytes, b, $new($bytes, mapsize));
	$var($bytes, a, $new($bytes, mapsize));
	icm->getReds(r);
	icm->getGreens(g);
	icm->getBlues(b);
	icm->getAlphas(a);
	int32_t trans = icm->getTransparentPixel();
	bool needalpha = false;
	for (int32_t i = 0; i < mapsize; ++i) {
		int32_t rgb = filterRGB(-1, -1, icm->getRGB(i));
		a->set(i, (int8_t)(rgb >> 24));
		if (a->get(i) != ((int8_t)255) && i != trans) {
			needalpha = true;
		}
		r->set(i, (int8_t)(rgb >> 16));
		g->set(i, (int8_t)(rgb >> 8));
		b->set(i, (int8_t)(rgb >> 0));
	}
	if (needalpha) {
		return $new($IndexColorModel, icm->getPixelSize(), mapsize, r, g, b, a);
	} else {
		return $new($IndexColorModel, icm->getPixelSize(), mapsize, r, g, b, trans);
	}
}

void RGBImageFilter::filterRGBPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels, int32_t off, int32_t scansize) {
	int32_t index = off;
	for (int32_t cy = 0; cy < h; ++cy) {
		for (int32_t cx = 0; cx < w; ++cx) {
			$nc(pixels)->set(index, filterRGB(x + cx, y + cy, pixels->get(index)));
			++index;
		}
		index += scansize - w;
	}
	$nc(this->consumer)->setPixels(x, y, w, h, $($ColorModel::getRGBdefault()), pixels, off, scansize);
}

void RGBImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) {
	if (model == this->origmodel) {
		$nc(this->consumer)->setPixels(x, y, w, h, this->newmodel, pixels, off, scansize);
	} else {
		$var($ints, filteredpixels, $new($ints, w));
		int32_t index = off;
		for (int32_t cy = 0; cy < h; ++cy) {
			for (int32_t cx = 0; cx < w; ++cx) {
				filteredpixels->set(cx, $nc(model)->getRGB(((int32_t)($nc(pixels)->get(index) & (uint32_t)255))));
				++index;
			}
			index += scansize - w;
			filterRGBPixels(x, y + cy, w, 1, filteredpixels, 0, w);
		}
	}
}

void RGBImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) {
	if (model == this->origmodel) {
		$nc(this->consumer)->setPixels(x, y, w, h, this->newmodel, pixels, off, scansize);
	} else {
		$var($ints, filteredpixels, $new($ints, w));
		int32_t index = off;
		for (int32_t cy = 0; cy < h; ++cy) {
			for (int32_t cx = 0; cx < w; ++cx) {
				filteredpixels->set(cx, $nc(model)->getRGB($nc(pixels)->get(index)));
				++index;
			}
			index += scansize - w;
			filterRGBPixels(x, y + cy, w, 1, filteredpixels, 0, w);
		}
	}
}

RGBImageFilter::RGBImageFilter() {
}

$Class* RGBImageFilter::load$($String* name, bool initialize) {
	$loadClass(RGBImageFilter, name, initialize, &_RGBImageFilter_ClassInfo_, allocate$RGBImageFilter);
	return class$;
}

$Class* RGBImageFilter::class$ = nullptr;

		} // image
	} // awt
} // java
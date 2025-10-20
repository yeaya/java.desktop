#include <java/awt/image/BufferedImageFilter.h>

#include <java/awt/Point.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef IMAGEABORTED
#undef IMAGEERROR
#undef SINGLEFRAMEDONE
#undef STATICIMAGEDONE

using $Point = ::java::awt::Point;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _BufferedImageFilter_FieldInfo_[] = {
	{"bufferedImageOp", "Ljava/awt/image/BufferedImageOp;", nullptr, 0, $field(BufferedImageFilter, bufferedImageOp)},
	{"model", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(BufferedImageFilter, model)},
	{"width", "I", nullptr, 0, $field(BufferedImageFilter, width)},
	{"height", "I", nullptr, 0, $field(BufferedImageFilter, height)},
	{"bytePixels", "[B", nullptr, 0, $field(BufferedImageFilter, bytePixels)},
	{"intPixels", "[I", nullptr, 0, $field(BufferedImageFilter, intPixels)},
	{}
};

$MethodInfo _BufferedImageFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/BufferedImageOp;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedImageFilter::*)($BufferedImageOp*)>(&BufferedImageFilter::init$))},
	{"convertToRGB", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedImageFilter::*)()>(&BufferedImageFilter::convertToRGB))},
	{"createDCMraster", "()Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $method(static_cast<$WritableRaster*(BufferedImageFilter::*)()>(&BufferedImageFilter::createDCMraster))},
	{"getBufferedImageOp", "()Ljava/awt/image/BufferedImageOp;", nullptr, $PUBLIC},
	{"imageComplete", "(I)V", nullptr, $PUBLIC},
	{"setColorModel", "(Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC},
	{"setDimensions", "(II)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BufferedImageFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.BufferedImageFilter",
	"java.awt.image.ImageFilter",
	nullptr,
	_BufferedImageFilter_FieldInfo_,
	_BufferedImageFilter_MethodInfo_
};

$Object* allocate$BufferedImageFilter($Class* clazz) {
	return $of($alloc(BufferedImageFilter));
}

void BufferedImageFilter::init$($BufferedImageOp* op) {
	$ImageFilter::init$();
	if (op == nullptr) {
		$throwNew($NullPointerException, "Operation cannot be null"_s);
	}
	$set(this, bufferedImageOp, op);
}

$BufferedImageOp* BufferedImageFilter::getBufferedImageOp() {
	return this->bufferedImageOp;
}

void BufferedImageFilter::setDimensions(int32_t width, int32_t height) {
	if (width <= 0 || height <= 0) {
		imageComplete($ImageConsumer::STATICIMAGEDONE);
		return;
	}
	this->width = width;
	this->height = height;
}

void BufferedImageFilter::setColorModel($ColorModel* model) {
	$set(this, model, model);
}

void BufferedImageFilter::convertToRGB() {
	int32_t size = this->width * this->height;
	$var($ints, newpixels, $new($ints, size));
	if (this->bytePixels != nullptr) {
		for (int32_t i = 0; i < size; ++i) {
			newpixels->set(i, $nc(this->model)->getRGB((int32_t)($nc(this->bytePixels)->get(i) & (uint32_t)255)));
		}
	} else if (this->intPixels != nullptr) {
		for (int32_t i = 0; i < size; ++i) {
			newpixels->set(i, $nc(this->model)->getRGB($nc(this->intPixels)->get(i)));
		}
	}
	$set(this, bytePixels, nullptr);
	$set(this, intPixels, newpixels);
	$set(this, model, $ColorModel::getRGBdefault());
}

void BufferedImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pixels, int32_t off, int32_t scansize) {
	$useLocalCurrentObjectStackCache();
	if (w < 0 || h < 0) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(w), ") and height ("_s, $$str(h), ") must be > 0"_s}));
	}
	if (w == 0 || h == 0) {
		return;
	}
	if (y < 0) {
		int32_t diff = -y;
		if (diff >= h) {
			return;
		}
		off += scansize * diff;
		y += diff;
		h -= diff;
	}
	if (y + h > this->height) {
		h = this->height - y;
		if (h <= 0) {
			return;
		}
	}
	if (x < 0) {
		int32_t diff = -x;
		if (diff >= w) {
			return;
		}
		off += diff;
		x += diff;
		w -= diff;
	}
	if (x + w > this->width) {
		w = this->width - x;
		if (w <= 0) {
			return;
		}
	}
	int32_t dstPtr = y * this->width + x;
	if (this->intPixels == nullptr) {
		if (this->bytePixels == nullptr) {
			$set(this, bytePixels, $new($bytes, this->width * this->height));
			$set(this, model, model);
		} else if (this->model != model) {
			convertToRGB();
		}
		if (this->bytePixels != nullptr) {
			for (int32_t sh = h; sh > 0; --sh) {
				$System::arraycopy(pixels, off, this->bytePixels, dstPtr, w);
				off += scansize;
				dstPtr += this->width;
			}
		}
	}
	if (this->intPixels != nullptr) {
		int32_t dstRem = this->width - w;
		int32_t srcRem = scansize - w;
		for (int32_t sh = h; sh > 0; --sh) {
			for (int32_t sw = w; sw > 0; --sw) {
				$nc(this->intPixels)->set(dstPtr++, $nc(model)->getRGB((int32_t)($nc(pixels)->get(off++) & (uint32_t)255)));
			}
			off += srcRem;
			dstPtr += dstRem;
		}
	}
}

void BufferedImageFilter::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pixels, int32_t off, int32_t scansize) {
	$useLocalCurrentObjectStackCache();
	if (w < 0 || h < 0) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(w), ") and height ("_s, $$str(h), ") must be > 0"_s}));
	}
	if (w == 0 || h == 0) {
		return;
	}
	if (y < 0) {
		int32_t diff = -y;
		if (diff >= h) {
			return;
		}
		off += scansize * diff;
		y += diff;
		h -= diff;
	}
	if (y + h > this->height) {
		h = this->height - y;
		if (h <= 0) {
			return;
		}
	}
	if (x < 0) {
		int32_t diff = -x;
		if (diff >= w) {
			return;
		}
		off += diff;
		x += diff;
		w -= diff;
	}
	if (x + w > this->width) {
		w = this->width - x;
		if (w <= 0) {
			return;
		}
	}
	if (this->intPixels == nullptr) {
		if (this->bytePixels == nullptr) {
			$set(this, intPixels, $new($ints, this->width * this->height));
			$set(this, model, model);
		} else {
			convertToRGB();
		}
	}
	int32_t dstPtr = y * this->width + x;
	if (this->model == model) {
		for (int32_t sh = h; sh > 0; --sh) {
			$System::arraycopy(pixels, off, this->intPixels, dstPtr, w);
			off += scansize;
			dstPtr += this->width;
		}
	} else {
		if (this->model != $ColorModel::getRGBdefault()) {
			convertToRGB();
		}
		int32_t dstRem = this->width - w;
		int32_t srcRem = scansize - w;
		for (int32_t sh = h; sh > 0; --sh) {
			for (int32_t sw = w; sw > 0; --sw) {
				$nc(this->intPixels)->set(dstPtr++, $nc(model)->getRGB($nc(pixels)->get(off++)));
			}
			off += srcRem;
			dstPtr += dstRem;
		}
	}
}

void BufferedImageFilter::imageComplete(int32_t status) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, wr, nullptr);
	{
		$var($BufferedImage, bi, nullptr)
		$var($WritableRaster, r, nullptr)
		$var($ColorModel, cm, nullptr)
		int32_t w = 0;
		int32_t h = 0;
		switch (status) {
		case $ImageConsumer::IMAGEERROR:
			{}
		case $ImageConsumer::IMAGEABORTED:
			{
				$set(this, model, nullptr);
				this->width = -1;
				this->height = -1;
				$set(this, intPixels, nullptr);
				$set(this, bytePixels, nullptr);
				break;
			}
		case $ImageConsumer::SINGLEFRAMEDONE:
			{}
		case $ImageConsumer::STATICIMAGEDONE:
			{
				if (this->width <= 0 || this->height <= 0) {
					break;
				}
				if ($instanceOf($DirectColorModel, this->model)) {
					if (this->intPixels == nullptr) {
						break;
					}
					$assign(wr, createDCMraster());
				} else if ($instanceOf($IndexColorModel, this->model)) {
					$var($ints, bandOffsets, $new($ints, {0}));
					if (this->bytePixels == nullptr) {
						break;
					}
					$var($DataBufferByte, db, $new($DataBufferByte, this->bytePixels, this->width * this->height));
					$assign(wr, $Raster::createInterleavedRaster(static_cast<$DataBuffer*>(db), this->width, this->height, this->width, 1, bandOffsets, ($Point*)nullptr));
				} else {
					convertToRGB();
					if (this->intPixels == nullptr) {
						break;
					}
					$assign(wr, createDCMraster());
				}
				$assign(bi, $new($BufferedImage, this->model, wr, $nc(this->model)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
				$assign(bi, $nc(this->bufferedImageOp)->filter(bi, nullptr));
				$assign(r, $nc(bi)->getRaster());
				$assign(cm, bi->getColorModel());
				w = $nc(r)->getWidth();
				h = r->getHeight();
				$nc(this->consumer)->setDimensions(w, h);
				$nc(this->consumer)->setColorModel(cm);
				if ($instanceOf($DirectColorModel, cm)) {
					$var($DataBufferInt, db, $cast($DataBufferInt, r->getDataBuffer()));
					$nc(this->consumer)->setPixels(0, 0, w, h, cm, $($nc(db)->getData()), 0, w);
				} else if ($instanceOf($IndexColorModel, cm)) {
					$var($DataBufferByte, db, $cast($DataBufferByte, r->getDataBuffer()));
					$nc(this->consumer)->setPixels(0, 0, w, h, cm, $($nc(db)->getData()), 0, w);
				} else {
					$throwNew($InternalError, $$str({"Unknown color model "_s, cm}));
				}
				break;
			}
		}
	}
	$nc(this->consumer)->imageComplete(status);
}

$WritableRaster* BufferedImageFilter::createDCMraster() {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, wr, nullptr);
	$var($DirectColorModel, dcm, $cast($DirectColorModel, this->model));
	bool hasAlpha = $nc(this->model)->hasAlpha();
	$var($ints, bandMasks, $new($ints, 3 + (hasAlpha ? 1 : 0)));
	bandMasks->set(0, $nc(dcm)->getRedMask());
	bandMasks->set(1, dcm->getGreenMask());
	bandMasks->set(2, dcm->getBlueMask());
	if (hasAlpha) {
		bandMasks->set(3, dcm->getAlphaMask());
	}
	$var($DataBufferInt, db, $new($DataBufferInt, this->intPixels, this->width * this->height));
	$assign(wr, $Raster::createPackedRaster(static_cast<$DataBuffer*>(db), this->width, this->height, this->width, bandMasks, ($Point*)nullptr));
	return wr;
}

BufferedImageFilter::BufferedImageFilter() {
}

$Class* BufferedImageFilter::load$($String* name, bool initialize) {
	$loadClass(BufferedImageFilter, name, initialize, &_BufferedImageFilter_ClassInfo_, allocate$BufferedImageFilter);
	return class$;
}

$Class* BufferedImageFilter::class$ = nullptr;

		} // image
	} // awt
} // java
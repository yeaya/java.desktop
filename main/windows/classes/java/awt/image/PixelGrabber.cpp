#include <java/awt/image/PixelGrabber.h>

#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef DONEBITS
#undef ERROR
#undef FRAMEBITS
#undef GRABBEDBITS
#undef HEIGHT
#undef IMAGEABORTED
#undef IMAGEERROR
#undef SINGLEFRAMEDONE
#undef SOMEBITS
#undef STATICIMAGEDONE
#undef WIDTH

using $Image = ::java::awt::Image;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _PixelGrabber_FieldInfo_[] = {
	{"producer", "Ljava/awt/image/ImageProducer;", nullptr, 0, $field(PixelGrabber, producer)},
	{"dstX", "I", nullptr, 0, $field(PixelGrabber, dstX)},
	{"dstY", "I", nullptr, 0, $field(PixelGrabber, dstY)},
	{"dstW", "I", nullptr, 0, $field(PixelGrabber, dstW)},
	{"dstH", "I", nullptr, 0, $field(PixelGrabber, dstH)},
	{"imageModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(PixelGrabber, imageModel)},
	{"bytePixels", "[B", nullptr, 0, $field(PixelGrabber, bytePixels)},
	{"intPixels", "[I", nullptr, 0, $field(PixelGrabber, intPixels)},
	{"dstOff", "I", nullptr, 0, $field(PixelGrabber, dstOff)},
	{"dstScan", "I", nullptr, 0, $field(PixelGrabber, dstScan)},
	{"grabbing", "Z", nullptr, $PRIVATE, $field(PixelGrabber, grabbing)},
	{"flags", "I", nullptr, $PRIVATE, $field(PixelGrabber, flags)},
	{"GRABBEDBITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PixelGrabber, GRABBEDBITS)},
	{"DONEBITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PixelGrabber, DONEBITS)},
	{}
};

$MethodInfo _PixelGrabber_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;IIII[III)V", nullptr, $PUBLIC, $method(static_cast<void(PixelGrabber::*)($Image*,int32_t,int32_t,int32_t,int32_t,$ints*,int32_t,int32_t)>(&PixelGrabber::init$))},
	{"<init>", "(Ljava/awt/image/ImageProducer;IIII[III)V", nullptr, $PUBLIC, $method(static_cast<void(PixelGrabber::*)($ImageProducer*,int32_t,int32_t,int32_t,int32_t,$ints*,int32_t,int32_t)>(&PixelGrabber::init$))},
	{"<init>", "(Ljava/awt/Image;IIIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(PixelGrabber::*)($Image*,int32_t,int32_t,int32_t,int32_t,bool)>(&PixelGrabber::init$))},
	{"abortGrabbing", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"convertToRGB", "()V", nullptr, $PRIVATE, $method(static_cast<void(PixelGrabber::*)()>(&PixelGrabber::convertToRGB))},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getHeight", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPixels", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getStatus", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getWidth", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"grabPixels", "()Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"grabPixels", "(J)Z", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.InterruptedException"},
	{"imageComplete", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setColorModel", "(Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC},
	{"setDimensions", "(II)V", nullptr, $PUBLIC},
	{"setHints", "(I)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC},
	{"setProperties", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC},
	{"startGrabbing", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"status", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _PixelGrabber_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.PixelGrabber",
	"java.lang.Object",
	"java.awt.image.ImageConsumer",
	_PixelGrabber_FieldInfo_,
	_PixelGrabber_MethodInfo_
};

$Object* allocate$PixelGrabber($Class* clazz) {
	return $of($alloc(PixelGrabber));
}

void PixelGrabber::init$($Image* img, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scansize) {
	PixelGrabber::init$($($nc(img)->getSource()), x, y, w, h, pix, off, scansize);
}

void PixelGrabber::init$($ImageProducer* ip, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scansize) {
	$set(this, producer, ip);
	this->dstX = x;
	this->dstY = y;
	this->dstW = w;
	this->dstH = h;
	this->dstOff = off;
	this->dstScan = scansize;
	$set(this, intPixels, pix);
	$set(this, imageModel, $ColorModel::getRGBdefault());
}

void PixelGrabber::init$($Image* img, int32_t x, int32_t y, int32_t w, int32_t h, bool forceRGB) {
	$set(this, producer, $nc(img)->getSource());
	this->dstX = x;
	this->dstY = y;
	this->dstW = w;
	this->dstH = h;
	if (forceRGB) {
		$set(this, imageModel, $ColorModel::getRGBdefault());
	}
}

void PixelGrabber::startGrabbing() {
	$synchronized(this) {
		if (((int32_t)(this->flags & (uint32_t)PixelGrabber::DONEBITS)) != 0) {
			return;
		}
		if (!this->grabbing) {
			this->grabbing = true;
			this->flags &= (uint32_t)~($ImageObserver::ABORT);
			$nc(this->producer)->startProduction(this);
		}
	}
}

void PixelGrabber::abortGrabbing() {
	$synchronized(this) {
		imageComplete($ImageConsumer::IMAGEABORTED);
	}
}

bool PixelGrabber::grabPixels() {
	return grabPixels(0);
}

bool PixelGrabber::grabPixels(int64_t ms) {
	$synchronized(this) {
		if (((int32_t)(this->flags & (uint32_t)PixelGrabber::DONEBITS)) != 0) {
			return ((int32_t)(this->flags & (uint32_t)PixelGrabber::GRABBEDBITS)) != 0;
		}
		int64_t end = ms + $System::currentTimeMillis();
		if (!this->grabbing) {
			this->grabbing = true;
			this->flags &= (uint32_t)~($ImageObserver::ABORT);
			$nc(this->producer)->startProduction(this);
		}
		while (this->grabbing) {
			int64_t timeout = 0;
			if (ms == 0) {
				timeout = 0;
			} else {
				timeout = end - $System::currentTimeMillis();
				if (timeout <= 0) {
					break;
				}
			}
			$of(this)->wait(timeout);
		}
		return ((int32_t)(this->flags & (uint32_t)PixelGrabber::GRABBEDBITS)) != 0;
	}
}

int32_t PixelGrabber::getStatus() {
	$synchronized(this) {
		return this->flags;
	}
}

int32_t PixelGrabber::getWidth() {
	$synchronized(this) {
		return (this->dstW < 0) ? -1 : this->dstW;
	}
}

int32_t PixelGrabber::getHeight() {
	$synchronized(this) {
		return (this->dstH < 0) ? -1 : this->dstH;
	}
}

$Object* PixelGrabber::getPixels() {
	$synchronized(this) {
		return $of((this->bytePixels == nullptr) ? ($of(this->intPixels)) : ($of(this->bytePixels)));
	}
}

$ColorModel* PixelGrabber::getColorModel() {
	$synchronized(this) {
		return this->imageModel;
	}
}

void PixelGrabber::setDimensions(int32_t width, int32_t height) {
	if (this->dstW < 0) {
		this->dstW = width - this->dstX;
	}
	if (this->dstH < 0) {
		this->dstH = height - this->dstY;
	}
	if (this->dstW <= 0 || this->dstH <= 0) {
		imageComplete($ImageConsumer::STATICIMAGEDONE);
	} else if (this->intPixels == nullptr && this->imageModel == $ColorModel::getRGBdefault()) {
		$set(this, intPixels, $new($ints, this->dstW * this->dstH));
		this->dstScan = this->dstW;
		this->dstOff = 0;
	}
	this->flags |= ($ImageObserver::WIDTH | $ImageObserver::HEIGHT);
}

void PixelGrabber::setHints(int32_t hints) {
	return;
}

void PixelGrabber::setProperties($Hashtable* props) {
	return;
}

void PixelGrabber::setColorModel($ColorModel* model) {
	return;
}

void PixelGrabber::convertToRGB() {
	int32_t size = this->dstW * this->dstH;
	$var($ints, newpixels, $new($ints, size));
	if (this->bytePixels != nullptr) {
		for (int32_t i = 0; i < size; ++i) {
			newpixels->set(i, $nc(this->imageModel)->getRGB((int32_t)($nc(this->bytePixels)->get(i) & (uint32_t)255)));
		}
	} else if (this->intPixels != nullptr) {
		for (int32_t i = 0; i < size; ++i) {
			newpixels->set(i, $nc(this->imageModel)->getRGB($nc(this->intPixels)->get(i)));
		}
	}
	$set(this, bytePixels, nullptr);
	$set(this, intPixels, newpixels);
	this->dstScan = this->dstW;
	this->dstOff = 0;
	$set(this, imageModel, $ColorModel::getRGBdefault());
}

void PixelGrabber::setPixels(int32_t srcX, int32_t srcY, int32_t srcW, int32_t srcH, $ColorModel* model, $bytes* pixels, int32_t srcOff, int32_t srcScan) {
	if (srcY < this->dstY) {
		int32_t diff = this->dstY - srcY;
		if (diff >= srcH) {
			return;
		}
		srcOff += srcScan * diff;
		srcY += diff;
		srcH -= diff;
	}
	if (srcY + srcH > this->dstY + this->dstH) {
		srcH = (this->dstY + this->dstH) - srcY;
		if (srcH <= 0) {
			return;
		}
	}
	if (srcX < this->dstX) {
		int32_t diff = this->dstX - srcX;
		if (diff >= srcW) {
			return;
		}
		srcOff += diff;
		srcX += diff;
		srcW -= diff;
	}
	if (srcX + srcW > this->dstX + this->dstW) {
		srcW = (this->dstX + this->dstW) - srcX;
		if (srcW <= 0) {
			return;
		}
	}
	int32_t dstPtr = this->dstOff + (srcY - this->dstY) * this->dstScan + (srcX - this->dstX);
	if (this->intPixels == nullptr) {
		if (this->bytePixels == nullptr) {
			$set(this, bytePixels, $new($bytes, this->dstW * this->dstH));
			this->dstScan = this->dstW;
			this->dstOff = 0;
			$set(this, imageModel, model);
		} else if (this->imageModel != model) {
			convertToRGB();
		}
		if (this->bytePixels != nullptr) {
			for (int32_t h = srcH; h > 0; --h) {
				$System::arraycopy(pixels, srcOff, this->bytePixels, dstPtr, srcW);
				srcOff += srcScan;
				dstPtr += this->dstScan;
			}
		}
	}
	if (this->intPixels != nullptr) {
		int32_t dstRem = this->dstScan - srcW;
		int32_t srcRem = srcScan - srcW;
		for (int32_t h = srcH; h > 0; --h) {
			for (int32_t w = srcW; w > 0; --w) {
				$nc(this->intPixels)->set(dstPtr++, $nc(model)->getRGB((int32_t)($nc(pixels)->get(srcOff++) & (uint32_t)255)));
			}
			srcOff += srcRem;
			dstPtr += dstRem;
		}
	}
	this->flags |= $ImageObserver::SOMEBITS;
}

void PixelGrabber::setPixels(int32_t srcX, int32_t srcY, int32_t srcW, int32_t srcH, $ColorModel* model, $ints* pixels, int32_t srcOff, int32_t srcScan) {
	if (srcY < this->dstY) {
		int32_t diff = this->dstY - srcY;
		if (diff >= srcH) {
			return;
		}
		srcOff += srcScan * diff;
		srcY += diff;
		srcH -= diff;
	}
	if (srcY + srcH > this->dstY + this->dstH) {
		srcH = (this->dstY + this->dstH) - srcY;
		if (srcH <= 0) {
			return;
		}
	}
	if (srcX < this->dstX) {
		int32_t diff = this->dstX - srcX;
		if (diff >= srcW) {
			return;
		}
		srcOff += diff;
		srcX += diff;
		srcW -= diff;
	}
	if (srcX + srcW > this->dstX + this->dstW) {
		srcW = (this->dstX + this->dstW) - srcX;
		if (srcW <= 0) {
			return;
		}
	}
	if (this->intPixels == nullptr) {
		if (this->bytePixels == nullptr) {
			$set(this, intPixels, $new($ints, this->dstW * this->dstH));
			this->dstScan = this->dstW;
			this->dstOff = 0;
			$set(this, imageModel, model);
		} else {
			convertToRGB();
		}
	}
	int32_t dstPtr = this->dstOff + (srcY - this->dstY) * this->dstScan + (srcX - this->dstX);
	if (this->imageModel == model) {
		for (int32_t h = srcH; h > 0; --h) {
			$System::arraycopy(pixels, srcOff, this->intPixels, dstPtr, srcW);
			srcOff += srcScan;
			dstPtr += this->dstScan;
		}
	} else {
		if (this->imageModel != $ColorModel::getRGBdefault()) {
			convertToRGB();
		}
		int32_t dstRem = this->dstScan - srcW;
		int32_t srcRem = srcScan - srcW;
		for (int32_t h = srcH; h > 0; --h) {
			for (int32_t w = srcW; w > 0; --w) {
				$nc(this->intPixels)->set(dstPtr++, $nc(model)->getRGB($nc(pixels)->get(srcOff++)));
			}
			srcOff += srcRem;
			dstPtr += dstRem;
		}
	}
	this->flags |= $ImageObserver::SOMEBITS;
}

void PixelGrabber::imageComplete(int32_t status) {
	$synchronized(this) {
		this->grabbing = false;
		switch (status) {
		default:
			{}
		case $ImageConsumer::IMAGEERROR:
			{
				this->flags |= $ImageObserver::ERROR | $ImageObserver::ABORT;
				break;
			}
		case $ImageConsumer::IMAGEABORTED:
			{
				this->flags |= $ImageObserver::ABORT;
				break;
			}
		case $ImageConsumer::STATICIMAGEDONE:
			{
				this->flags |= $ImageObserver::ALLBITS;
				break;
			}
		case $ImageConsumer::SINGLEFRAMEDONE:
			{
				this->flags |= $ImageObserver::FRAMEBITS;
				break;
			}
		}
		$nc(this->producer)->removeConsumer(this);
		$of(this)->notifyAll();
	}
}

int32_t PixelGrabber::status() {
	$synchronized(this) {
		return this->flags;
	}
}

PixelGrabber::PixelGrabber() {
}

$Class* PixelGrabber::load$($String* name, bool initialize) {
	$loadClass(PixelGrabber, name, initialize, &_PixelGrabber_ClassInfo_, allocate$PixelGrabber);
	return class$;
}

$Class* PixelGrabber::class$ = nullptr;

		} // image
	} // awt
} // java
#include <java/awt/image/MemoryImageSource.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef COMPLETESCANLINES
#undef IMAGEERROR
#undef RANDOMPIXELORDER
#undef SINGLEFRAME
#undef SINGLEFRAMEDONE
#undef SINGLEPASS
#undef STATICIMAGEDONE
#undef TOPDOWNLEFTRIGHT

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _MemoryImageSource_FieldInfo_[] = {
	{"width", "I", nullptr, 0, $field(MemoryImageSource, width)},
	{"height", "I", nullptr, 0, $field(MemoryImageSource, height)},
	{"model", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(MemoryImageSource, model)},
	{"pixels", "Ljava/lang/Object;", nullptr, 0, $field(MemoryImageSource, pixels)},
	{"pixeloffset", "I", nullptr, 0, $field(MemoryImageSource, pixeloffset)},
	{"pixelscan", "I", nullptr, 0, $field(MemoryImageSource, pixelscan)},
	{"properties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<**>;", 0, $field(MemoryImageSource, properties)},
	{"theConsumers", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/image/ImageConsumer;>;", 0, $field(MemoryImageSource, theConsumers)},
	{"animating", "Z", nullptr, 0, $field(MemoryImageSource, animating)},
	{"fullbuffers", "Z", nullptr, 0, $field(MemoryImageSource, fullbuffers)},
	{}
};

$MethodInfo _MemoryImageSource_MethodInfo_[] = {
	{"<init>", "(IILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC, $method(static_cast<void(MemoryImageSource::*)(int32_t,int32_t,$ColorModel*,$bytes*,int32_t,int32_t)>(&MemoryImageSource::init$))},
	{"<init>", "(IILjava/awt/image/ColorModel;[BIILjava/util/Hashtable;)V", "(IILjava/awt/image/ColorModel;[BIILjava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(MemoryImageSource::*)(int32_t,int32_t,$ColorModel*,$bytes*,int32_t,int32_t,$Hashtable*)>(&MemoryImageSource::init$))},
	{"<init>", "(IILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC, $method(static_cast<void(MemoryImageSource::*)(int32_t,int32_t,$ColorModel*,$ints*,int32_t,int32_t)>(&MemoryImageSource::init$))},
	{"<init>", "(IILjava/awt/image/ColorModel;[IIILjava/util/Hashtable;)V", "(IILjava/awt/image/ColorModel;[IIILjava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(MemoryImageSource::*)(int32_t,int32_t,$ColorModel*,$ints*,int32_t,int32_t,$Hashtable*)>(&MemoryImageSource::init$))},
	{"<init>", "(II[III)V", nullptr, $PUBLIC, $method(static_cast<void(MemoryImageSource::*)(int32_t,int32_t,$ints*,int32_t,int32_t)>(&MemoryImageSource::init$))},
	{"<init>", "(II[IIILjava/util/Hashtable;)V", "(II[IIILjava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(MemoryImageSource::*)(int32_t,int32_t,$ints*,int32_t,int32_t,$Hashtable*)>(&MemoryImageSource::init$))},
	{"addConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PRIVATE, $method(static_cast<void(MemoryImageSource::*)($ImageConsumer*)>(&MemoryImageSource::initConsumer))},
	{"initialize", "(IILjava/awt/image/ColorModel;Ljava/lang/Object;IILjava/util/Hashtable;)V", "(IILjava/awt/image/ColorModel;Ljava/lang/Object;IILjava/util/Hashtable<**>;)V", $PRIVATE, $method(static_cast<void(MemoryImageSource::*)(int32_t,int32_t,$ColorModel*,Object$*,int32_t,int32_t,$Hashtable*)>(&MemoryImageSource::initialize))},
	{"isConsumer", "(Ljava/awt/image/ImageConsumer;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"newPixels", "()V", nullptr, $PUBLIC},
	{"newPixels", "(IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"newPixels", "(IIIIZ)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"newPixels", "([BLjava/awt/image/ColorModel;II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"newPixels", "([ILjava/awt/image/ColorModel;II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"requestTopDownLeftRightResend", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC},
	{"sendPixels", "(Ljava/awt/image/ImageConsumer;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(MemoryImageSource::*)($ImageConsumer*,int32_t,int32_t,int32_t,int32_t)>(&MemoryImageSource::sendPixels))},
	{"setAnimated", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setFullBufferUpdates", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"startProduction", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryImageSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.MemoryImageSource",
	"java.lang.Object",
	"java.awt.image.ImageProducer",
	_MemoryImageSource_FieldInfo_,
	_MemoryImageSource_MethodInfo_
};

$Object* allocate$MemoryImageSource($Class* clazz) {
	return $of($alloc(MemoryImageSource));
}

void MemoryImageSource::init$(int32_t w, int32_t h, $ColorModel* cm, $bytes* pix, int32_t off, int32_t scan) {
	$set(this, theConsumers, $new($Vector));
	initialize(w, h, cm, $of(pix), off, scan, nullptr);
}

void MemoryImageSource::init$(int32_t w, int32_t h, $ColorModel* cm, $bytes* pix, int32_t off, int32_t scan, $Hashtable* props) {
	$set(this, theConsumers, $new($Vector));
	initialize(w, h, cm, $of(pix), off, scan, props);
}

void MemoryImageSource::init$(int32_t w, int32_t h, $ColorModel* cm, $ints* pix, int32_t off, int32_t scan) {
	$set(this, theConsumers, $new($Vector));
	initialize(w, h, cm, $of(pix), off, scan, nullptr);
}

void MemoryImageSource::init$(int32_t w, int32_t h, $ColorModel* cm, $ints* pix, int32_t off, int32_t scan, $Hashtable* props) {
	$set(this, theConsumers, $new($Vector));
	initialize(w, h, cm, $of(pix), off, scan, props);
}

void MemoryImageSource::initialize(int32_t w, int32_t h, $ColorModel* cm, Object$* pix, int32_t off, int32_t scan, $Hashtable* props$renamed) {
	$var($Hashtable, props, props$renamed);
	this->width = w;
	this->height = h;
	$set(this, model, cm);
	$set(this, pixels, pix);
	this->pixeloffset = off;
	this->pixelscan = scan;
	if (props == nullptr) {
		$assign(props, $new($Hashtable));
	}
	$set(this, properties, props);
}

void MemoryImageSource::init$(int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scan) {
	$set(this, theConsumers, $new($Vector));
	initialize(w, h, $($ColorModel::getRGBdefault()), $of(pix), off, scan, nullptr);
}

void MemoryImageSource::init$(int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scan, $Hashtable* props) {
	$set(this, theConsumers, $new($Vector));
	initialize(w, h, $($ColorModel::getRGBdefault()), $of(pix), off, scan, props);
}

void MemoryImageSource::addConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		if ($nc(this->theConsumers)->contains(ic)) {
			return;
		}
		$nc(this->theConsumers)->addElement(ic);
		try {
			initConsumer(ic);
			sendPixels(ic, 0, 0, this->width, this->height);
			if (isConsumer(ic)) {
				$nc(ic)->imageComplete(this->animating ? $ImageConsumer::SINGLEFRAMEDONE : $ImageConsumer::STATICIMAGEDONE);
				if (!this->animating && isConsumer(ic)) {
					ic->imageComplete($ImageConsumer::IMAGEERROR);
					removeConsumer(ic);
				}
			}
		} catch ($Exception& e) {
			if (isConsumer(ic)) {
				$nc(ic)->imageComplete($ImageConsumer::IMAGEERROR);
			}
		}
	}
}

bool MemoryImageSource::isConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		return $nc(this->theConsumers)->contains(ic);
	}
}

void MemoryImageSource::removeConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		$nc(this->theConsumers)->removeElement(ic);
	}
}

void MemoryImageSource::startProduction($ImageConsumer* ic) {
	addConsumer(ic);
}

void MemoryImageSource::requestTopDownLeftRightResend($ImageConsumer* ic) {
}

void MemoryImageSource::setAnimated(bool animated) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->animating = animated;
		if (!this->animating) {
			$var($Enumeration, enum_, $nc(this->theConsumers)->elements());
			while ($nc(enum_)->hasMoreElements()) {
				$var($ImageConsumer, ic, $cast($ImageConsumer, enum_->nextElement()));
				$nc(ic)->imageComplete($ImageConsumer::STATICIMAGEDONE);
				if (isConsumer(ic)) {
					ic->imageComplete($ImageConsumer::IMAGEERROR);
				}
			}
			$nc(this->theConsumers)->removeAllElements();
		}
	}
}

void MemoryImageSource::setFullBufferUpdates(bool fullbuffers) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fullbuffers == fullbuffers) {
			return;
		}
		this->fullbuffers = fullbuffers;
		if (this->animating) {
			$var($Enumeration, enum_, $nc(this->theConsumers)->elements());
			while ($nc(enum_)->hasMoreElements()) {
				$var($ImageConsumer, ic, $cast($ImageConsumer, enum_->nextElement()));
				$nc(ic)->setHints(fullbuffers ? ($ImageConsumer::TOPDOWNLEFTRIGHT | $ImageConsumer::COMPLETESCANLINES) : $ImageConsumer::RANDOMPIXELORDER);
			}
		}
	}
}

void MemoryImageSource::newPixels() {
	newPixels(0, 0, this->width, this->height, true);
}

void MemoryImageSource::newPixels(int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		newPixels(x, y, w, h, true);
	}
}

void MemoryImageSource::newPixels(int32_t x, int32_t y, int32_t w, int32_t h, bool framenotify) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->animating) {
			if (this->fullbuffers) {
				x = (y = 0);
				w = this->width;
				h = this->height;
			} else {
				if (x < 0) {
					w += x;
					x = 0;
				}
				if (x + w > this->width) {
					w = this->width - x;
				}
				if (y < 0) {
					h += y;
					y = 0;
				}
				if (y + h > this->height) {
					h = this->height - y;
				}
			}
			if ((w <= 0 || h <= 0) && !framenotify) {
				return;
			}
			$var($Enumeration, enum_, $nc(this->theConsumers)->elements());
			while ($nc(enum_)->hasMoreElements()) {
				$var($ImageConsumer, ic, $cast($ImageConsumer, enum_->nextElement()));
				if (w > 0 && h > 0) {
					sendPixels(ic, x, y, w, h);
				}
				if (framenotify && isConsumer(ic)) {
					$nc(ic)->imageComplete($ImageConsumer::SINGLEFRAMEDONE);
				}
			}
		}
	}
}

void MemoryImageSource::newPixels($bytes* newpix, $ColorModel* newmodel, int32_t offset, int32_t scansize) {
	$synchronized(this) {
		$set(this, pixels, newpix);
		$set(this, model, newmodel);
		this->pixeloffset = offset;
		this->pixelscan = scansize;
		newPixels();
	}
}

void MemoryImageSource::newPixels($ints* newpix, $ColorModel* newmodel, int32_t offset, int32_t scansize) {
	$synchronized(this) {
		$set(this, pixels, newpix);
		$set(this, model, newmodel);
		this->pixeloffset = offset;
		this->pixelscan = scansize;
		newPixels();
	}
}

void MemoryImageSource::initConsumer($ImageConsumer* ic) {
	if (isConsumer(ic)) {
		$nc(ic)->setDimensions(this->width, this->height);
	}
	if (isConsumer(ic)) {
		$nc(ic)->setProperties(this->properties);
	}
	if (isConsumer(ic)) {
		$nc(ic)->setColorModel(this->model);
	}
	if (isConsumer(ic)) {
		$nc(ic)->setHints(this->animating ? (this->fullbuffers ? ($ImageConsumer::TOPDOWNLEFTRIGHT | $ImageConsumer::COMPLETESCANLINES) : $ImageConsumer::RANDOMPIXELORDER) : ((($ImageConsumer::TOPDOWNLEFTRIGHT | $ImageConsumer::COMPLETESCANLINES) | $ImageConsumer::SINGLEPASS) | $ImageConsumer::SINGLEFRAME));
	}
}

void MemoryImageSource::sendPixels($ImageConsumer* ic, int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t off = this->pixeloffset + this->pixelscan * y + x;
	if (isConsumer(ic)) {
		if ($instanceOf($bytes, this->pixels)) {
			$nc(ic)->setPixels(x, y, w, h, this->model, ($cast($bytes, this->pixels)), off, this->pixelscan);
		} else {
			$nc(ic)->setPixels(x, y, w, h, this->model, ($cast($ints, this->pixels)), off, this->pixelscan);
		}
	}
}

MemoryImageSource::MemoryImageSource() {
}

$Class* MemoryImageSource::load$($String* name, bool initialize) {
	$loadClass(MemoryImageSource, name, initialize, &_MemoryImageSource_ClassInfo_, allocate$MemoryImageSource);
	return class$;
}

$Class* MemoryImageSource::class$ = nullptr;

		} // image
	} // awt
} // java
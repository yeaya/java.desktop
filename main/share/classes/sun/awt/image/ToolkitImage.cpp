#include <sun/awt/image/ToolkitImage.h>

#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/NativeLibLoader.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR
#undef HEIGHT
#undef IMAGEERROR
#undef PROPERTIES
#undef WIDTH

using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Hashtable = ::java::util::Hashtable;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $ImageWatched = ::sun::awt::image::ImageWatched;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $NativeLibLoader = ::sun::awt::image::NativeLibLoader;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ToolkitImage_FieldInfo_[] = {
	{"source", "Ljava/awt/image/ImageProducer;", nullptr, 0, $field(ToolkitImage, source)},
	{"src", "Lsun/awt/image/InputStreamImageSource;", nullptr, 0, $field(ToolkitImage, src)},
	{"imagerep", "Lsun/awt/image/ImageRepresentation;", nullptr, 0, $field(ToolkitImage, imagerep)},
	{"width", "I", nullptr, $PRIVATE, $field(ToolkitImage, width)},
	{"height", "I", nullptr, $PRIVATE, $field(ToolkitImage, height)},
	{"properties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<**>;", $PRIVATE, $field(ToolkitImage, properties)},
	{"availinfo", "I", nullptr, $PRIVATE, $field(ToolkitImage, availinfo)},
	{}
};

$MethodInfo _ToolkitImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ToolkitImage::*)()>(&ToolkitImage::init$))},
	{"<init>", "(Ljava/awt/image/ImageProducer;)V", nullptr, $PUBLIC, $method(static_cast<void(ToolkitImage::*)($ImageProducer*)>(&ToolkitImage::init$))},
	{"addInfo", "(I)V", nullptr, $SYNCHRONIZED},
	{"addWatcher", "(Ljava/awt/image/ImageObserver;Z)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ToolkitImage::*)($ImageObserver*,bool)>(&ToolkitImage::addWatcher))},
	{"check", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBufferedImage", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getImageRep", "()Lsun/awt/image/ImageRepresentation;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getProperty", "(Ljava/lang/String;Ljava/awt/image/ImageObserver;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSource", "()Ljava/awt/image/ImageProducer;", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"hasError", "()Z", nullptr, $PUBLIC},
	{"infoDone", "(I)V", nullptr, $SYNCHRONIZED},
	{"makeImageRep", "()Lsun/awt/image/ImageRepresentation;", nullptr, $PROTECTED},
	{"preload", "(Ljava/awt/image/ImageObserver;)V", nullptr, $PUBLIC},
	{"reconstruct", "(I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ToolkitImage::*)(int32_t)>(&ToolkitImage::reconstruct))},
	{"setAccelerationPriority", "(F)V", nullptr, $PUBLIC},
	{"setDimensions", "(II)V", nullptr, 0},
	{"setProperties", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", 0},
	{}
};

$ClassInfo _ToolkitImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ToolkitImage",
	"java.awt.Image",
	nullptr,
	_ToolkitImage_FieldInfo_,
	_ToolkitImage_MethodInfo_
};

$Object* allocate$ToolkitImage($Class* clazz) {
	return $of($alloc(ToolkitImage));
}

void ToolkitImage::init$() {
	$Image::init$();
	this->width = -1;
	this->height = -1;
}

void ToolkitImage::init$($ImageProducer* is) {
	$Image::init$();
	this->width = -1;
	this->height = -1;
	$set(this, source, is);
	if ($instanceOf($InputStreamImageSource, is)) {
		$set(this, src, $cast($InputStreamImageSource, is));
	}
}

$ImageProducer* ToolkitImage::getSource() {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	return this->source;
}

int32_t ToolkitImage::getWidth() {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::WIDTH)) == 0) {
		reconstruct($ImageObserver::WIDTH);
	}
	return this->width;
}

int32_t ToolkitImage::getWidth($ImageObserver* iw) {
	$synchronized(this) {
		if (this->src != nullptr) {
			$nc(this->src)->checkSecurity(nullptr, false);
		}
		if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::WIDTH)) == 0) {
			addWatcher(iw, true);
			if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::WIDTH)) == 0) {
				return -1;
			}
		}
		return this->width;
	}
}

int32_t ToolkitImage::getHeight() {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::HEIGHT)) == 0) {
		reconstruct($ImageObserver::HEIGHT);
	}
	return this->height;
}

int32_t ToolkitImage::getHeight($ImageObserver* iw) {
	$synchronized(this) {
		if (this->src != nullptr) {
			$nc(this->src)->checkSecurity(nullptr, false);
		}
		if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::HEIGHT)) == 0) {
			addWatcher(iw, true);
			if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::HEIGHT)) == 0) {
				return -1;
			}
		}
		return this->height;
	}
}

$Object* ToolkitImage::getProperty($String* name, $ImageObserver* observer) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "null property name is not allowed"_s);
	}
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (this->properties == nullptr) {
		addWatcher(observer, true);
		if (this->properties == nullptr) {
			return $of(nullptr);
		}
	}
	$var($Object, o, $nc(this->properties)->get(name));
	if (o == nullptr) {
		$init($Image);
		$assign(o, $Image::UndefinedProperty);
	}
	return $of(o);
}

bool ToolkitImage::hasError() {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	return ((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0;
}

int32_t ToolkitImage::check($ImageObserver* iw) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) == 0 && ((int32_t)((~this->availinfo) & (uint32_t)(($ImageObserver::WIDTH | $ImageObserver::HEIGHT) | $ImageObserver::PROPERTIES))) != 0) {
		addWatcher(iw, false);
	}
	return this->availinfo;
}

void ToolkitImage::preload($ImageObserver* iw) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) == 0) {
		addWatcher(iw, true);
	}
}

void ToolkitImage::addWatcher($ImageObserver* iw, bool load) {
	$synchronized(this) {
		if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
			if (iw != nullptr) {
				iw->imageUpdate(this, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
			}
			return;
		}
		$var($ImageRepresentation, ir, getImageRep());
		$nc(ir)->addWatcher(iw);
		if (load) {
			ir->startProduction();
		}
	}
}

void ToolkitImage::reconstruct(int32_t flags) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (((int32_t)(flags & (uint32_t)~this->availinfo)) != 0) {
			if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
				return;
			}
			$var($ImageRepresentation, ir, getImageRep());
			$nc(ir)->startProduction();
			while (((int32_t)(flags & (uint32_t)~this->availinfo)) != 0) {
				try {
					$of(this)->wait();
				} catch ($InterruptedException& e) {
					$($Thread::currentThread())->interrupt();
					return;
				}
				if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
					return;
				}
			}
		}
	}
}

void ToolkitImage::addInfo(int32_t newinfo) {
	$synchronized(this) {
		this->availinfo |= newinfo;
		$of(this)->notifyAll();
	}
}

void ToolkitImage::setDimensions(int32_t w, int32_t h) {
	this->width = w;
	this->height = h;
	addInfo($ImageObserver::WIDTH | $ImageObserver::HEIGHT);
}

void ToolkitImage::setProperties($Hashtable* props$renamed) {
	$var($Hashtable, props, props$renamed);
	if (props == nullptr) {
		$assign(props, $new($Hashtable));
	}
	$set(this, properties, props);
	addInfo($ImageObserver::PROPERTIES);
}

void ToolkitImage::infoDone(int32_t status) {
	$synchronized(this) {
		if (status == $ImageConsumer::IMAGEERROR || ((int32_t)((~this->availinfo) & (uint32_t)($ImageObserver::WIDTH | $ImageObserver::HEIGHT))) != 0) {
			addInfo($ImageObserver::ERROR);
		} else if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::PROPERTIES)) == 0) {
			setProperties(nullptr);
		}
	}
}

void ToolkitImage::flush() {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	$var($ImageRepresentation, ir, nullptr);
	$synchronized(this) {
		this->availinfo &= (uint32_t)~$ImageObserver::ERROR;
		$assign(ir, this->imagerep);
		$set(this, imagerep, nullptr);
	}
	if (ir != nullptr) {
		ir->abort();
	}
	if (this->src != nullptr) {
		$nc(this->src)->flush();
	}
}

$ImageRepresentation* ToolkitImage::makeImageRep() {
	return $new($ImageRepresentation, this, $($ColorModel::getRGBdefault()), false);
}

$ImageRepresentation* ToolkitImage::getImageRep() {
	$synchronized(this) {
		if (this->src != nullptr) {
			$nc(this->src)->checkSecurity(nullptr, false);
		}
		if (this->imagerep == nullptr) {
			$set(this, imagerep, makeImageRep());
		}
		return this->imagerep;
	}
}

$Graphics* ToolkitImage::getGraphics() {
	$throwNew($UnsupportedOperationException, "getGraphics() not valid for images created with createImage(producer)"_s);
	$shouldNotReachHere();
}

$ColorModel* ToolkitImage::getColorModel() {
	$var($ImageRepresentation, imageRep, getImageRep());
	return $nc(imageRep)->getColorModel();
}

$BufferedImage* ToolkitImage::getBufferedImage() {
	$var($ImageRepresentation, imageRep, getImageRep());
	return $nc(imageRep)->getBufferedImage();
}

void ToolkitImage::setAccelerationPriority(float priority) {
	$Image::setAccelerationPriority(priority);
	$var($ImageRepresentation, imageRep, getImageRep());
	$nc(imageRep)->setAccelerationPriority(this->accelerationPriority);
}

void clinit$ToolkitImage($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
	}
}

ToolkitImage::ToolkitImage() {
}

$Class* ToolkitImage::load$($String* name, bool initialize) {
	$loadClass(ToolkitImage, name, initialize, &_ToolkitImage_ClassInfo_, clinit$ToolkitImage, allocate$ToolkitImage);
	return class$;
}

$Class* ToolkitImage::class$ = nullptr;

		} // image
	} // awt
} // sun
#include <java/awt/ImageMediaEntry.h>

#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/MediaEntry.h>
#include <java/awt/MediaTracker.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

#undef ABORT
#undef ABORTED
#undef ALLBITS
#undef COMPLETE
#undef ERROR
#undef ERRORED
#undef FRAMEBITS
#undef LOADING

using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $MediaEntry = ::java::awt::MediaEntry;
using $MediaTracker = ::java::awt::MediaTracker;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _ImageMediaEntry_FieldInfo_[] = {
	{"image", "Ljava/awt/Image;", nullptr, 0, $field(ImageMediaEntry, image)},
	{"width", "I", nullptr, 0, $field(ImageMediaEntry, width)},
	{"height", "I", nullptr, 0, $field(ImageMediaEntry, height)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageMediaEntry, serialVersionUID)},
	{}
};

$MethodInfo _ImageMediaEntry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MediaTracker;Ljava/awt/Image;III)V", nullptr, 0, $method(static_cast<void(ImageMediaEntry::*)($MediaTracker*,$Image*,int32_t,int32_t,int32_t)>(&ImageMediaEntry::init$))},
	{"getMedia", "()Ljava/lang/Object;", nullptr, 0},
	{"getStatus", "(ZZ)I", nullptr, $SYNCHRONIZED},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{"matches", "(Ljava/awt/Image;II)Z", nullptr, 0},
	{"parseflags", "(I)I", nullptr, 0},
	{"startLoad", "()V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageMediaEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.ImageMediaEntry",
	"java.awt.MediaEntry",
	"java.awt.image.ImageObserver,java.io.Serializable",
	_ImageMediaEntry_FieldInfo_,
	_ImageMediaEntry_MethodInfo_
};

$Object* allocate$ImageMediaEntry($Class* clazz) {
	return $of($alloc(ImageMediaEntry));
}

int32_t ImageMediaEntry::hashCode() {
	 return this->$MediaEntry::hashCode();
}

bool ImageMediaEntry::equals(Object$* arg0) {
	 return this->$MediaEntry::equals(arg0);
}

$Object* ImageMediaEntry::clone() {
	 return this->$MediaEntry::clone();
}

$String* ImageMediaEntry::toString() {
	 return this->$MediaEntry::toString();
}

void ImageMediaEntry::finalize() {
	this->$MediaEntry::finalize();
}

void ImageMediaEntry::init$($MediaTracker* mt, $Image* img, int32_t c, int32_t w, int32_t h) {
	$MediaEntry::init$(mt, c);
	$set(this, image, img);
	this->width = w;
	this->height = h;
}

bool ImageMediaEntry::matches($Image* img, int32_t w, int32_t h) {
	return (this->image == img && this->width == w && this->height == h);
}

$Object* ImageMediaEntry::getMedia() {
	return $of(this->image);
}

int32_t ImageMediaEntry::getStatus(bool doLoad, bool doVerify) {
	$synchronized(this) {
		if (doVerify) {
			int32_t flags = $nc($nc(this->tracker)->target)->checkImage(this->image, this->width, this->height, nullptr);
			int32_t s = parseflags(flags);
			if (s == 0) {
				if (((int32_t)(this->status & (uint32_t)($MediaEntry::ERRORED | $MediaEntry::COMPLETE))) != 0) {
					setStatus($MediaEntry::ABORTED);
				}
			} else if (s != this->status) {
				setStatus(s);
			}
		}
		return $MediaEntry::getStatus(doLoad, doVerify);
	}
}

void ImageMediaEntry::startLoad() {
	if ($nc($nc(this->tracker)->target)->prepareImage(this->image, this->width, this->height, this)) {
		setStatus($MediaEntry::COMPLETE);
	}
}

int32_t ImageMediaEntry::parseflags(int32_t infoflags) {
	if (((int32_t)(infoflags & (uint32_t)$ImageObserver::ERROR)) != 0) {
		return $MediaEntry::ERRORED;
	} else if (((int32_t)(infoflags & (uint32_t)$ImageObserver::ABORT)) != 0) {
		return $MediaEntry::ABORTED;
	} else if (((int32_t)(infoflags & (uint32_t)($ImageObserver::ALLBITS | $ImageObserver::FRAMEBITS))) != 0) {
		return $MediaEntry::COMPLETE;
	}
	return 0;
}

bool ImageMediaEntry::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (this->cancelled) {
		return false;
	}
	int32_t s = parseflags(infoflags);
	if (s != 0 && s != this->status) {
		setStatus(s);
	}
	return (((int32_t)(this->status & (uint32_t)$MediaEntry::LOADING)) != 0);
}

ImageMediaEntry::ImageMediaEntry() {
}

$Class* ImageMediaEntry::load$($String* name, bool initialize) {
	$loadClass(ImageMediaEntry, name, initialize, &_ImageMediaEntry_ClassInfo_, allocate$ImageMediaEntry);
	return class$;
}

$Class* ImageMediaEntry::class$ = nullptr;

	} // awt
} // java
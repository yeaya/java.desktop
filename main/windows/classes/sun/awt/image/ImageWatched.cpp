#include <sun/awt/image/ImageWatched.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ImageWatched$Link.h>
#include <sun/awt/image/ImageWatched$WeakLink.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWatched$Link = ::sun::awt::image::ImageWatched$Link;
using $ImageWatched$WeakLink = ::sun::awt::image::ImageWatched$WeakLink;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageWatched_FieldInfo_[] = {
	{"endlink", "Lsun/awt/image/ImageWatched$Link;", nullptr, $PUBLIC | $STATIC, $staticField(ImageWatched, endlink)},
	{"watcherList", "Lsun/awt/image/ImageWatched$Link;", nullptr, $PUBLIC, $field(ImageWatched, watcherList)},
	{}
};

$MethodInfo _ImageWatched_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageWatched::*)()>(&ImageWatched::init$))},
	{"addWatcher", "(Ljava/awt/image/ImageObserver;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isWatcher", "(Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isWatcherListEmpty", "()Z", nullptr, $PUBLIC},
	{"newInfo", "(Ljava/awt/Image;IIIII)V", nullptr, $PUBLIC},
	{"notifyWatcherListEmpty", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"removeWatcher", "(Ljava/awt/image/ImageObserver;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageWatched_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageWatched$WeakLink", "sun.awt.image.ImageWatched", "WeakLink", $PUBLIC | $STATIC},
	{"sun.awt.image.ImageWatched$AccWeakReference", "sun.awt.image.ImageWatched", "AccWeakReference", $STATIC},
	{"sun.awt.image.ImageWatched$Link", "sun.awt.image.ImageWatched", "Link", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ImageWatched_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.image.ImageWatched",
	"java.lang.Object",
	nullptr,
	_ImageWatched_FieldInfo_,
	_ImageWatched_MethodInfo_,
	nullptr,
	nullptr,
	_ImageWatched_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.ImageWatched$WeakLink,sun.awt.image.ImageWatched$AccWeakReference,sun.awt.image.ImageWatched$Link"
};

$Object* allocate$ImageWatched($Class* clazz) {
	return $of($alloc(ImageWatched));
}

$ImageWatched$Link* ImageWatched::endlink = nullptr;

void ImageWatched::init$() {
	$set(this, watcherList, ImageWatched::endlink);
}

void ImageWatched::addWatcher($ImageObserver* iw) {
	$synchronized(this) {
		if (iw != nullptr && !isWatcher(iw)) {
			$set(this, watcherList, $new($ImageWatched$WeakLink, iw, this->watcherList));
		}
		$set(this, watcherList, $nc(this->watcherList)->removeWatcher(nullptr));
	}
}

bool ImageWatched::isWatcher($ImageObserver* iw) {
	$synchronized(this) {
		return $nc(this->watcherList)->isWatcher(iw);
	}
}

void ImageWatched::removeWatcher($ImageObserver* iw) {
	$synchronized(this) {
		$set(this, watcherList, $nc(this->watcherList)->removeWatcher(iw));
	}
	if (this->watcherList == ImageWatched::endlink) {
		notifyWatcherListEmpty();
	}
}

bool ImageWatched::isWatcherListEmpty() {
	$synchronized(this) {
		$set(this, watcherList, $nc(this->watcherList)->removeWatcher(nullptr));
	}
	return (this->watcherList == ImageWatched::endlink);
}

void ImageWatched::newInfo($Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc(this->watcherList)->newInfo(img, info, x, y, w, h)) {
		removeWatcher(nullptr);
	}
}

void clinit$ImageWatched($Class* class$) {
	$assignStatic(ImageWatched::endlink, $new($ImageWatched$Link));
}

ImageWatched::ImageWatched() {
}

$Class* ImageWatched::load$($String* name, bool initialize) {
	$loadClass(ImageWatched, name, initialize, &_ImageWatched_ClassInfo_, clinit$ImageWatched, allocate$ImageWatched);
	return class$;
}

$Class* ImageWatched::class$ = nullptr;

		} // image
	} // awt
} // sun
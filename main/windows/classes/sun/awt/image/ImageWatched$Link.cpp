#include <sun/awt/image/ImageWatched$Link.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ImageWatched.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWatched = ::sun::awt::image::ImageWatched;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _ImageWatched$Link_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageWatched$Link::*)()>(&ImageWatched$Link::init$))},
	{"isWatcher", "(Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"newInfo", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{"removeWatcher", "(Ljava/awt/image/ImageObserver;)Lsun/awt/image/ImageWatched$Link;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageWatched$Link_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageWatched$Link", "sun.awt.image.ImageWatched", "Link", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ImageWatched$Link_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ImageWatched$Link",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ImageWatched$Link_MethodInfo_,
	nullptr,
	nullptr,
	_ImageWatched$Link_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImageWatched"
};

$Object* allocate$ImageWatched$Link($Class* clazz) {
	return $of($alloc(ImageWatched$Link));
}

void ImageWatched$Link::init$() {
}

bool ImageWatched$Link::isWatcher($ImageObserver* iw) {
	return false;
}

ImageWatched$Link* ImageWatched$Link::removeWatcher($ImageObserver* iw) {
	return this;
}

bool ImageWatched$Link::newInfo($Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
	return false;
}

ImageWatched$Link::ImageWatched$Link() {
}

$Class* ImageWatched$Link::load$($String* name, bool initialize) {
	$loadClass(ImageWatched$Link, name, initialize, &_ImageWatched$Link_ClassInfo_, allocate$ImageWatched$Link);
	return class$;
}

$Class* ImageWatched$Link::class$ = nullptr;

		} // image
	} // awt
} // sun
#include <java/awt/image/ImageObserver.h>

#include <java/awt/Image.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR
#undef FRAMEBITS
#undef HEIGHT
#undef PROPERTIES
#undef SOMEBITS
#undef WIDTH

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ImageObserver_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, WIDTH)},
	{"HEIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, HEIGHT)},
	{"PROPERTIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, PROPERTIES)},
	{"SOMEBITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, SOMEBITS)},
	{"FRAMEBITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, FRAMEBITS)},
	{"ALLBITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, ALLBITS)},
	{"ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, ERROR)},
	{"ABORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageObserver, ABORT)},
	{}
};

$MethodInfo _ImageObserver_MethodInfo_[] = {
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageObserver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.ImageObserver",
	nullptr,
	nullptr,
	_ImageObserver_FieldInfo_,
	_ImageObserver_MethodInfo_
};

$Object* allocate$ImageObserver($Class* clazz) {
	return $of($alloc(ImageObserver));
}

$Class* ImageObserver::load$($String* name, bool initialize) {
	$loadClass(ImageObserver, name, initialize, &_ImageObserver_ClassInfo_, allocate$ImageObserver);
	return class$;
}

$Class* ImageObserver::class$ = nullptr;

		} // image
	} // awt
} // java
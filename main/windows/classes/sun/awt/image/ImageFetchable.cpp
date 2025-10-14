#include <sun/awt/image/ImageFetchable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _ImageFetchable_MethodInfo_[] = {
	{"doFetch", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageFetchable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.image.ImageFetchable",
	nullptr,
	nullptr,
	nullptr,
	_ImageFetchable_MethodInfo_
};

$Object* allocate$ImageFetchable($Class* clazz) {
	return $of($alloc(ImageFetchable));
}

$Class* ImageFetchable::load$($String* name, bool initialize) {
	$loadClass(ImageFetchable, name, initialize, &_ImageFetchable_ClassInfo_, allocate$ImageFetchable);
	return class$;
}

$Class* ImageFetchable::class$ = nullptr;

		} // image
	} // awt
} // sun
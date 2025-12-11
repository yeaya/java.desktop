#include <java/awt/image/ImageConsumer.h>

#include <java/awt/image/ColorModel.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef COMPLETESCANLINES
#undef IMAGEABORTED
#undef IMAGEERROR
#undef RANDOMPIXELORDER
#undef SINGLEFRAME
#undef SINGLEFRAMEDONE
#undef SINGLEPASS
#undef STATICIMAGEDONE
#undef TOPDOWNLEFTRIGHT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ImageConsumer_FieldInfo_[] = {
	{"RANDOMPIXELORDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, RANDOMPIXELORDER)},
	{"TOPDOWNLEFTRIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, TOPDOWNLEFTRIGHT)},
	{"COMPLETESCANLINES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, COMPLETESCANLINES)},
	{"SINGLEPASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, SINGLEPASS)},
	{"SINGLEFRAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, SINGLEFRAME)},
	{"IMAGEERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, IMAGEERROR)},
	{"SINGLEFRAMEDONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, SINGLEFRAMEDONE)},
	{"STATICIMAGEDONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, STATICIMAGEDONE)},
	{"IMAGEABORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageConsumer, IMAGEABORTED)},
	{}
};

$MethodInfo _ImageConsumer_MethodInfo_[] = {
	{"imageComplete", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setColorModel", "(Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDimensions", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setHints", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setProperties", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.ImageConsumer",
	nullptr,
	nullptr,
	_ImageConsumer_FieldInfo_,
	_ImageConsumer_MethodInfo_
};

$Object* allocate$ImageConsumer($Class* clazz) {
	return $of($alloc(ImageConsumer));
}

$Class* ImageConsumer::load$($String* name, bool initialize) {
	$loadClass(ImageConsumer, name, initialize, &_ImageConsumer_ClassInfo_, allocate$ImageConsumer);
	return class$;
}

$Class* ImageConsumer::class$ = nullptr;

		} // image
	} // awt
} // java
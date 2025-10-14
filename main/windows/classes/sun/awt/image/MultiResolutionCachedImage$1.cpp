#include <sun/awt/image/MultiResolutionCachedImage$1.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <jcpp.h>

#undef ABORT
#undef ERROR

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MultiResolutionCachedImage = ::sun::awt::image::MultiResolutionCachedImage;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _MultiResolutionCachedImage$1_FieldInfo_[] = {
	{"val$availableInfo", "I", nullptr, $FINAL | $SYNTHETIC, $field(MultiResolutionCachedImage$1, val$availableInfo)},
	{"flags", "I", nullptr, 0, $field(MultiResolutionCachedImage$1, flags)},
	{}
};

$MethodInfo _MultiResolutionCachedImage$1_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(MultiResolutionCachedImage$1::*)(int32_t)>(&MultiResolutionCachedImage$1::init$))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MultiResolutionCachedImage$1_EnclosingMethodInfo_ = {
	"sun.awt.image.MultiResolutionCachedImage",
	"preload",
	"(Ljava/awt/Image;I)V"
};

$InnerClassInfo _MultiResolutionCachedImage$1_InnerClassesInfo_[] = {
	{"sun.awt.image.MultiResolutionCachedImage$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MultiResolutionCachedImage$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.MultiResolutionCachedImage$1",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_MultiResolutionCachedImage$1_FieldInfo_,
	_MultiResolutionCachedImage$1_MethodInfo_,
	nullptr,
	&_MultiResolutionCachedImage$1_EnclosingMethodInfo_,
	_MultiResolutionCachedImage$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.MultiResolutionCachedImage"
};

$Object* allocate$MultiResolutionCachedImage$1($Class* clazz) {
	return $of($alloc(MultiResolutionCachedImage$1));
}

void MultiResolutionCachedImage$1::init$(int32_t val$availableInfo) {
	this->val$availableInfo = val$availableInfo;
	this->flags = this->val$availableInfo;
}

bool MultiResolutionCachedImage$1::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) {
	this->flags &= (uint32_t)~infoflags;
	return (this->flags != 0) && (((int32_t)(infoflags & (uint32_t)($ImageObserver::ERROR | $ImageObserver::ABORT))) == 0);
}

MultiResolutionCachedImage$1::MultiResolutionCachedImage$1() {
}

$Class* MultiResolutionCachedImage$1::load$($String* name, bool initialize) {
	$loadClass(MultiResolutionCachedImage$1, name, initialize, &_MultiResolutionCachedImage$1_ClassInfo_, allocate$MultiResolutionCachedImage$1);
	return class$;
}

$Class* MultiResolutionCachedImage$1::class$ = nullptr;

		} // image
	} // awt
} // sun
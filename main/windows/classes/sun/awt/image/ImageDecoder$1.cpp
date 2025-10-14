#include <sun/awt/image/ImageDecoder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ImageDecoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageDecoder$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/image/ImageDecoder;", nullptr, $FINAL | $SYNTHETIC, $field(ImageDecoder$1, this$0)},
	{}
};

$MethodInfo _ImageDecoder$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/ImageDecoder;)V", nullptr, 0, $method(static_cast<void(ImageDecoder$1::*)($ImageDecoder*)>(&ImageDecoder$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImageDecoder$1_EnclosingMethodInfo_ = {
	"sun.awt.image.ImageDecoder",
	"abort",
	"()V"
};

$InnerClassInfo _ImageDecoder$1_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageDecoder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageDecoder$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.ImageDecoder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ImageDecoder$1_FieldInfo_,
	_ImageDecoder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_ImageDecoder$1_EnclosingMethodInfo_,
	_ImageDecoder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImageDecoder"
};

$Object* allocate$ImageDecoder$1($Class* clazz) {
	return $of($alloc(ImageDecoder$1));
}

void ImageDecoder$1::init$($ImageDecoder* this$0) {
	$set(this, this$0, this$0);
}

$Object* ImageDecoder$1::run() {
	$nc(this->this$0->feeder)->interrupt();
	return $of(nullptr);
}

ImageDecoder$1::ImageDecoder$1() {
}

$Class* ImageDecoder$1::load$($String* name, bool initialize) {
	$loadClass(ImageDecoder$1, name, initialize, &_ImageDecoder$1_ClassInfo_, allocate$ImageDecoder$1);
	return class$;
}

$Class* ImageDecoder$1::class$ = nullptr;

		} // image
	} // awt
} // sun
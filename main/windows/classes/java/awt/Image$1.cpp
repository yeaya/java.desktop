#include <java/awt/Image$1.h>

#include <java/awt/Image.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/SurfaceManager$ImageAccessor.h>
#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceManager$ImageAccessor = ::sun::awt::image::SurfaceManager$ImageAccessor;

namespace java {
	namespace awt {

$MethodInfo _Image$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Image$1::*)()>(&Image$1::init$))},
	{"getSurfaceManager", "(Ljava/awt/Image;)Lsun/awt/image/SurfaceManager;", nullptr, $PUBLIC},
	{"setSurfaceManager", "(Ljava/awt/Image;Lsun/awt/image/SurfaceManager;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Image$1_EnclosingMethodInfo_ = {
	"java.awt.Image",
	nullptr,
	nullptr
};

$InnerClassInfo _Image$1_InnerClassesInfo_[] = {
	{"java.awt.Image$1", nullptr, nullptr, 0},
	{"sun.awt.image.SurfaceManager$ImageAccessor", "sun.awt.image.SurfaceManager", "ImageAccessor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Image$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Image$1",
	"sun.awt.image.SurfaceManager$ImageAccessor",
	nullptr,
	nullptr,
	_Image$1_MethodInfo_,
	nullptr,
	&_Image$1_EnclosingMethodInfo_,
	_Image$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Image"
};

$Object* allocate$Image$1($Class* clazz) {
	return $of($alloc(Image$1));
}

void Image$1::init$() {
	$SurfaceManager$ImageAccessor::init$();
}

$SurfaceManager* Image$1::getSurfaceManager($Image* img) {
	return $nc(img)->surfaceManager;
}

void Image$1::setSurfaceManager($Image* img, $SurfaceManager* mgr) {
	$set($nc(img), surfaceManager, mgr);
}

Image$1::Image$1() {
}

$Class* Image$1::load$($String* name, bool initialize) {
	$loadClass(Image$1, name, initialize, &_Image$1_ClassInfo_, allocate$Image$1);
	return class$;
}

$Class* Image$1::class$ = nullptr;

	} // awt
} // java
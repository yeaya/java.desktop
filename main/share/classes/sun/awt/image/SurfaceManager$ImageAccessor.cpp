#include <sun/awt/image/SurfaceManager$ImageAccessor.h>

#include <java/awt/Image.h>
#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _SurfaceManager$ImageAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceManager$ImageAccessor::*)()>(&SurfaceManager$ImageAccessor::init$))},
	{"getSurfaceManager", "(Ljava/awt/Image;)Lsun/awt/image/SurfaceManager;", nullptr, $PUBLIC | $ABSTRACT},
	{"setSurfaceManager", "(Ljava/awt/Image;Lsun/awt/image/SurfaceManager;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SurfaceManager$ImageAccessor_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$ImageAccessor", "sun.awt.image.SurfaceManager", "ImageAccessor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SurfaceManager$ImageAccessor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.image.SurfaceManager$ImageAccessor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SurfaceManager$ImageAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceManager$ImageAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.SurfaceManager"
};

$Object* allocate$SurfaceManager$ImageAccessor($Class* clazz) {
	return $of($alloc(SurfaceManager$ImageAccessor));
}

void SurfaceManager$ImageAccessor::init$() {
}

SurfaceManager$ImageAccessor::SurfaceManager$ImageAccessor() {
}

$Class* SurfaceManager$ImageAccessor::load$($String* name, bool initialize) {
	$loadClass(SurfaceManager$ImageAccessor, name, initialize, &_SurfaceManager$ImageAccessor_ClassInfo_, allocate$SurfaceManager$ImageAccessor);
	return class$;
}

$Class* SurfaceManager$ImageAccessor::class$ = nullptr;

		} // image
	} // awt
} // sun
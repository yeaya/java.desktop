#include <sun/awt/image/BufImgSurfaceManager.h>

#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _BufImgSurfaceManager_FieldInfo_[] = {
	{"bImg", "Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED, $field(BufImgSurfaceManager, bImg)},
	{"sdDefault", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(BufImgSurfaceManager, sdDefault)},
	{}
};

$MethodInfo _BufImgSurfaceManager_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC, $method(static_cast<void(BufImgSurfaceManager::*)($BufferedImage*)>(&BufImgSurfaceManager::init$))},
	{"getPrimarySurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"restoreContents", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BufImgSurfaceManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.BufImgSurfaceManager",
	"sun.awt.image.SurfaceManager",
	nullptr,
	_BufImgSurfaceManager_FieldInfo_,
	_BufImgSurfaceManager_MethodInfo_
};

$Object* allocate$BufImgSurfaceManager($Class* clazz) {
	return $of($alloc(BufImgSurfaceManager));
}

void BufImgSurfaceManager::init$($BufferedImage* bImg) {
	$SurfaceManager::init$();
	$set(this, bImg, bImg);
	$set(this, sdDefault, $BufImgSurfaceData::createData(bImg));
}

$SurfaceData* BufImgSurfaceManager::getPrimarySurfaceData() {
	return this->sdDefault;
}

$SurfaceData* BufImgSurfaceManager::restoreContents() {
	return this->sdDefault;
}

BufImgSurfaceManager::BufImgSurfaceManager() {
}

$Class* BufImgSurfaceManager::load$($String* name, bool initialize) {
	$loadClass(BufImgSurfaceManager, name, initialize, &_BufImgSurfaceManager_ClassInfo_, allocate$BufImgSurfaceManager);
	return class$;
}

$Class* BufImgSurfaceManager::class$ = nullptr;

		} // image
	} // awt
} // sun
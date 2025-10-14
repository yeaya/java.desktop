#include <sun/awt/image/BufImgSurfaceData$ICMColorData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _BufImgSurfaceData$ICMColorData_FieldInfo_[] = {
	{"pData", "J", nullptr, $PRIVATE, $field(BufImgSurfaceData$ICMColorData, pData)},
	{}
};

$MethodInfo _BufImgSurfaceData$ICMColorData_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(BufImgSurfaceData$ICMColorData::*)(int64_t)>(&BufImgSurfaceData$ICMColorData::init$))},
	{}
};

$InnerClassInfo _BufImgSurfaceData$ICMColorData_InnerClassesInfo_[] = {
	{"sun.awt.image.BufImgSurfaceData$ICMColorData", "sun.awt.image.BufImgSurfaceData", "ICMColorData", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _BufImgSurfaceData$ICMColorData_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.image.BufImgSurfaceData$ICMColorData",
	"java.lang.Object",
	nullptr,
	_BufImgSurfaceData$ICMColorData_FieldInfo_,
	_BufImgSurfaceData$ICMColorData_MethodInfo_,
	nullptr,
	nullptr,
	_BufImgSurfaceData$ICMColorData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.BufImgSurfaceData"
};

$Object* allocate$BufImgSurfaceData$ICMColorData($Class* clazz) {
	return $of($alloc(BufImgSurfaceData$ICMColorData));
}

void BufImgSurfaceData$ICMColorData::init$(int64_t pData) {
	this->pData = 0;
	this->pData = pData;
}

BufImgSurfaceData$ICMColorData::BufImgSurfaceData$ICMColorData() {
}

$Class* BufImgSurfaceData$ICMColorData::load$($String* name, bool initialize) {
	$loadClass(BufImgSurfaceData$ICMColorData, name, initialize, &_BufImgSurfaceData$ICMColorData_ClassInfo_, allocate$BufImgSurfaceData$ICMColorData);
	return class$;
}

$Class* BufImgSurfaceData$ICMColorData::class$ = nullptr;

		} // image
	} // awt
} // sun
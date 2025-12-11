#include <com/apple/laf/AquaImageFactory$RecyclableSlicedImageControl.h>

#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaImageFactory$SlicedImageControl.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$RecyclableObject.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $AquaImageFactory$SlicedImageControl = ::com::apple::laf::AquaImageFactory$SlicedImageControl;
using $AquaUtils$RecyclableObject = ::com::apple::laf::AquaUtils$RecyclableObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaImageFactory$RecyclableSlicedImageControl_FieldInfo_[] = {
	{"metrics", "Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;", nullptr, $FINAL, $field(AquaImageFactory$RecyclableSlicedImageControl, metrics)},
	{}
};

$MethodInfo _AquaImageFactory$RecyclableSlicedImageControl_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$RecyclableSlicedImageControl::*)($AquaImageFactory$NineSliceMetrics*)>(&AquaImageFactory$RecyclableSlicedImageControl::init$))},
	{"create", "()Lcom/apple/laf/AquaImageFactory$SlicedImageControl;", nullptr, $PROTECTED},
	{"createTemplateImage", "(II)Ljava/awt/Image;", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaImageFactory$RecyclableSlicedImageControl_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl", "com.apple.laf.AquaImageFactory", "RecyclableSlicedImageControl", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaUtils$RecyclableObject", "com.apple.laf.AquaUtils", "RecyclableObject", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaImageFactory$SlicedImageControl", "com.apple.laf.AquaImageFactory", "SlicedImageControl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaImageFactory$RecyclableSlicedImageControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl",
	"com.apple.laf.AquaUtils$RecyclableObject",
	nullptr,
	_AquaImageFactory$RecyclableSlicedImageControl_FieldInfo_,
	_AquaImageFactory$RecyclableSlicedImageControl_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableObject<Lcom/apple/laf/AquaImageFactory$SlicedImageControl;>;",
	nullptr,
	_AquaImageFactory$RecyclableSlicedImageControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$RecyclableSlicedImageControl($Class* clazz) {
	return $of($alloc(AquaImageFactory$RecyclableSlicedImageControl));
}

void AquaImageFactory$RecyclableSlicedImageControl::init$($AquaImageFactory$NineSliceMetrics* metrics) {
	$AquaUtils$RecyclableObject::init$();
	$set(this, metrics, metrics);
}

$Object* AquaImageFactory$RecyclableSlicedImageControl::create() {
	return $of($new($AquaImageFactory$SlicedImageControl, $(createTemplateImage($nc(this->metrics)->minW, $nc(this->metrics)->minH)), this->metrics));
}

AquaImageFactory$RecyclableSlicedImageControl::AquaImageFactory$RecyclableSlicedImageControl() {
}

$Class* AquaImageFactory$RecyclableSlicedImageControl::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$RecyclableSlicedImageControl, name, initialize, &_AquaImageFactory$RecyclableSlicedImageControl_ClassInfo_, allocate$AquaImageFactory$RecyclableSlicedImageControl);
	return class$;
}

$Class* AquaImageFactory$RecyclableSlicedImageControl::class$ = nullptr;

		} // laf
	} // apple
} // com
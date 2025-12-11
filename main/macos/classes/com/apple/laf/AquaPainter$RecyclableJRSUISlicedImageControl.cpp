#include <com/apple/laf/AquaPainter$RecyclableJRSUISlicedImageControl.h>

#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaImageFactory$RecyclableSlicedImageControl.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $AquaImageFactory$RecyclableSlicedImageControl = ::com::apple::laf::AquaImageFactory$RecyclableSlicedImageControl;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaPainter$RecyclableJRSUISlicedImageControl_FieldInfo_[] = {
	{"control", "Lapple/laf/JRSUIControl;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$RecyclableJRSUISlicedImageControl, control)},
	{"state", "Lapple/laf/JRSUIState;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$RecyclableJRSUISlicedImageControl, state)},
	{}
};

$MethodInfo _AquaPainter$RecyclableJRSUISlicedImageControl_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIControl;Lapple/laf/JRSUIState;Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;)V", nullptr, 0, $method(static_cast<void(AquaPainter$RecyclableJRSUISlicedImageControl::*)($JRSUIControl*,$JRSUIState*,$AquaImageFactory$NineSliceMetrics*)>(&AquaPainter$RecyclableJRSUISlicedImageControl::init$))},
	{"createTemplateImage", "(II)Ljava/awt/Image;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaPainter$RecyclableJRSUISlicedImageControl_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaPainter$RecyclableJRSUISlicedImageControl", "com.apple.laf.AquaPainter", "RecyclableJRSUISlicedImageControl", $PRIVATE | $STATIC},
	{"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl", "com.apple.laf.AquaImageFactory", "RecyclableSlicedImageControl", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaPainter$RecyclableJRSUISlicedImageControl_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaPainter$RecyclableJRSUISlicedImageControl",
	"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl",
	nullptr,
	_AquaPainter$RecyclableJRSUISlicedImageControl_FieldInfo_,
	_AquaPainter$RecyclableJRSUISlicedImageControl_MethodInfo_,
	nullptr,
	nullptr,
	_AquaPainter$RecyclableJRSUISlicedImageControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaPainter"
};

$Object* allocate$AquaPainter$RecyclableJRSUISlicedImageControl($Class* clazz) {
	return $of($alloc(AquaPainter$RecyclableJRSUISlicedImageControl));
}

void AquaPainter$RecyclableJRSUISlicedImageControl::init$($JRSUIControl* control, $JRSUIState* state, $AquaImageFactory$NineSliceMetrics* metrics) {
	$AquaImageFactory$RecyclableSlicedImageControl::init$(metrics);
	$set(this, control, control);
	$set(this, state, state);
}

$Image* AquaPainter$RecyclableJRSUISlicedImageControl::createTemplateImage(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, image, $new($BufferedImage, $nc(this->metrics)->minW, $nc(this->metrics)->minH, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($WritableRaster, raster, image->getRaster());
	$var($DataBufferInt, buffer, $cast($DataBufferInt, $nc(raster)->getDataBuffer()));
	$nc(this->control)->set(this->state);
	$nc(this->control)->paint($($SunWritableRaster::stealData(buffer, 0)), $nc(this->metrics)->minW, $nc(this->metrics)->minH, (double)0, (double)0, (double)$nc(this->metrics)->minW, (double)$nc(this->metrics)->minH);
	$SunWritableRaster::markDirty(static_cast<$DataBuffer*>(buffer));
	return image;
}

AquaPainter$RecyclableJRSUISlicedImageControl::AquaPainter$RecyclableJRSUISlicedImageControl() {
}

$Class* AquaPainter$RecyclableJRSUISlicedImageControl::load$($String* name, bool initialize) {
	$loadClass(AquaPainter$RecyclableJRSUISlicedImageControl, name, initialize, &_AquaPainter$RecyclableJRSUISlicedImageControl_ClassInfo_, allocate$AquaPainter$RecyclableJRSUISlicedImageControl);
	return class$;
}

$Class* AquaPainter$RecyclableJRSUISlicedImageControl::class$ = nullptr;

		} // laf
	} // apple
} // com
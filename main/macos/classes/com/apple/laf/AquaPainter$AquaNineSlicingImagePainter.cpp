#include <com/apple/laf/AquaPainter$AquaNineSlicingImagePainter.h>

#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIUtils$NineSliceMetricsProvider.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaImageFactory$SlicedImageControl.h>
#include <com/apple/laf/AquaPainter$AquaSingleImagePainter.h>
#include <com/apple/laf/AquaPainter$RecyclableJRSUISlicedImageControl.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableObject.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIUtils$NineSliceMetricsProvider = ::apple::laf::JRSUIUtils$NineSliceMetricsProvider;
using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $AquaImageFactory$SlicedImageControl = ::com::apple::laf::AquaImageFactory$SlicedImageControl;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaPainter$AquaSingleImagePainter = ::com::apple::laf::AquaPainter$AquaSingleImagePainter;
using $AquaPainter$RecyclableJRSUISlicedImageControl = ::com::apple::laf::AquaPainter$RecyclableJRSUISlicedImageControl;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaPainter$AquaNineSlicingImagePainter_FieldInfo_[] = {
	{"slicedControlImages", "Ljava/util/HashMap;", "Ljava/util/HashMap<TT;Lcom/apple/laf/AquaPainter$RecyclableJRSUISlicedImageControl;>;", $PRIVATE | $FINAL, $field(AquaPainter$AquaNineSlicingImagePainter, slicedControlImages)},
	{"metricsProvider", "Lapple/laf/JRSUIUtils$NineSliceMetricsProvider;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaNineSlicingImagePainter, metricsProvider)},
	{}
};

$MethodInfo _AquaPainter$AquaNineSlicingImagePainter_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIState;)V", "(TT;)V", 0, $method(static_cast<void(AquaPainter$AquaNineSlicingImagePainter::*)($JRSUIState*)>(&AquaPainter$AquaNineSlicingImagePainter::init$))},
	{"<init>", "(Lapple/laf/JRSUIState;Lapple/laf/JRSUIUtils$NineSliceMetricsProvider;)V", "(TT;Lapple/laf/JRSUIUtils$NineSliceMetricsProvider;)V", 0, $method(static_cast<void(AquaPainter$AquaNineSlicingImagePainter::*)($JRSUIState*,$JRSUIUtils$NineSliceMetricsProvider*)>(&AquaPainter$AquaNineSlicingImagePainter::init$))},
	{"paint", "(Ljava/awt/Graphics2D;Lapple/laf/JRSUIState;)V", "(Ljava/awt/Graphics2D;TT;)V", 0},
	{}
};

$InnerClassInfo _AquaPainter$AquaNineSlicingImagePainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaPainter$AquaNineSlicingImagePainter", "com.apple.laf.AquaPainter", "AquaNineSlicingImagePainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AquaPainter$AquaNineSlicingImagePainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaPainter$AquaNineSlicingImagePainter",
	"com.apple.laf.AquaPainter",
	nullptr,
	_AquaPainter$AquaNineSlicingImagePainter_FieldInfo_,
	_AquaPainter$AquaNineSlicingImagePainter_MethodInfo_,
	"<T:Lapple/laf/JRSUIState;>Lcom/apple/laf/AquaPainter<TT;>;",
	nullptr,
	_AquaPainter$AquaNineSlicingImagePainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaPainter"
};

$Object* allocate$AquaPainter$AquaNineSlicingImagePainter($Class* clazz) {
	return $of($alloc(AquaPainter$AquaNineSlicingImagePainter));
}

void AquaPainter$AquaNineSlicingImagePainter::init$($JRSUIState* state) {
	AquaPainter$AquaNineSlicingImagePainter::init$(state, nullptr);
}

void AquaPainter$AquaNineSlicingImagePainter::init$($JRSUIState* state, $JRSUIUtils$NineSliceMetricsProvider* metricsProvider) {
	$AquaPainter::init$($$new($JRSUIControl, false), state);
	$set(this, metricsProvider, metricsProvider);
	$set(this, slicedControlImages, $new($HashMap));
}

void AquaPainter$AquaNineSlicingImagePainter::paint($Graphics2D* g, $JRSUIState* stateToPaint) {
	$useLocalCurrentObjectStackCache();
	if (this->metricsProvider == nullptr) {
		$AquaPainter$AquaSingleImagePainter::paintFromSingleCachedImage(g, this->control, stateToPaint, this->boundsRect);
		return;
	}
	$var($AquaPainter$RecyclableJRSUISlicedImageControl, slicesRef, $cast($AquaPainter$RecyclableJRSUISlicedImageControl, $nc(this->slicedControlImages)->get(stateToPaint)));
	if (slicesRef == nullptr) {
		$var($AquaImageFactory$NineSliceMetrics, metrics, $nc(this->metricsProvider)->getNineSliceMetricsForState(stateToPaint));
		if (metrics == nullptr) {
			$AquaPainter$AquaSingleImagePainter::paintFromSingleCachedImage(g, this->control, stateToPaint, this->boundsRect);
			return;
		}
		$assign(slicesRef, $new($AquaPainter$RecyclableJRSUISlicedImageControl, this->control, stateToPaint, metrics));
		$nc(this->slicedControlImages)->put(stateToPaint, slicesRef);
	}
	$var($AquaImageFactory$SlicedImageControl, slices, $cast($AquaImageFactory$SlicedImageControl, $nc(slicesRef)->get()));
	$nc(slices)->paint(g, $nc(this->boundsRect)->x, $nc(this->boundsRect)->y, $nc(this->boundsRect)->width, $nc(this->boundsRect)->height);
}

AquaPainter$AquaNineSlicingImagePainter::AquaPainter$AquaNineSlicingImagePainter() {
}

$Class* AquaPainter$AquaNineSlicingImagePainter::load$($String* name, bool initialize) {
	$loadClass(AquaPainter$AquaNineSlicingImagePainter, name, initialize, &_AquaPainter$AquaNineSlicingImagePainter_ClassInfo_, allocate$AquaPainter$AquaNineSlicingImagePainter);
	return class$;
}

$Class* AquaPainter$AquaNineSlicingImagePainter::class$ = nullptr;

		} // laf
	} // apple
} // com
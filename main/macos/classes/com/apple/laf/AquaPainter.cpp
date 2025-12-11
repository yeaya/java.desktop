#include <com/apple/laf/AquaPainter.h>

#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIUtils$NineSliceMetricsProvider.h>
#include <com/apple/laf/AquaPainter$1.h>
#include <com/apple/laf/AquaPainter$AquaNineSlicingImagePainter.h>
#include <com/apple/laf/AquaPainter$AquaSingleImagePainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/print/PeekGraphics.h>
#include <sun/print/ProxyGraphics2D.h>
#include <jcpp.h>

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIUtils$NineSliceMetricsProvider = ::apple::laf::JRSUIUtils$NineSliceMetricsProvider;
using $AquaPainter$1 = ::com::apple::laf::AquaPainter$1;
using $AquaPainter$AquaNineSlicingImagePainter = ::com::apple::laf::AquaPainter$AquaNineSlicingImagePainter;
using $AquaPainter$AquaSingleImagePainter = ::com::apple::laf::AquaPainter$AquaSingleImagePainter;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $PeekGraphics = ::sun::print::PeekGraphics;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaPainter_FieldInfo_[] = {
	{"boundsRect", "Ljava/awt/Rectangle;", nullptr, $FINAL, $field(AquaPainter, boundsRect)},
	{"control", "Lapple/laf/JRSUIControl;", nullptr, $FINAL, $field(AquaPainter, control)},
	{"state", "Lapple/laf/JRSUIState;", "TT;", 0, $field(AquaPainter, state)},
	{}
};

$MethodInfo _AquaPainter_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIControl;Lapple/laf/JRSUIState;)V", "(Lapple/laf/JRSUIControl;TT;)V", 0, $method(static_cast<void(AquaPainter::*)($JRSUIControl*,$JRSUIState*)>(&AquaPainter::init$))},
	{"create", "(Lapple/laf/JRSUIState;)Lcom/apple/laf/AquaPainter;", "<T:Lapple/laf/JRSUIState;>(TT;)Lcom/apple/laf/AquaPainter<TT;>;", $STATIC, $method(static_cast<AquaPainter*(*)($JRSUIState*)>(&AquaPainter::create))},
	{"create", "(Lapple/laf/JRSUIState;IIIIII)Lcom/apple/laf/AquaPainter;", "<T:Lapple/laf/JRSUIState;>(TT;IIIIII)Lcom/apple/laf/AquaPainter<TT;>;", $STATIC, $method(static_cast<AquaPainter*(*)($JRSUIState*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&AquaPainter::create))},
	{"create", "(Lapple/laf/JRSUIState;IIIIIIZ)Lcom/apple/laf/AquaPainter;", "<T:Lapple/laf/JRSUIState;>(TT;IIIIIIZ)Lcom/apple/laf/AquaPainter<TT;>;", $STATIC, $method(static_cast<AquaPainter*(*)($JRSUIState*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&AquaPainter::create))},
	{"create", "(Lapple/laf/JRSUIState;IIIIIIZZZ)Lcom/apple/laf/AquaPainter;", "<T:Lapple/laf/JRSUIState;>(TT;IIIIIIZZZ)Lcom/apple/laf/AquaPainter<TT;>;", $STATIC, $method(static_cast<AquaPainter*(*)($JRSUIState*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,bool,bool)>(&AquaPainter::create))},
	{"create", "(Lapple/laf/JRSUIState;Lapple/laf/JRSUIUtils$NineSliceMetricsProvider;)Lcom/apple/laf/AquaPainter;", "<T:Lapple/laf/JRSUIState;>(TT;Lapple/laf/JRSUIUtils$NineSliceMetricsProvider;)Lcom/apple/laf/AquaPainter<TT;>;", $STATIC, $method(static_cast<AquaPainter*(*)($JRSUIState*,$JRSUIUtils$NineSliceMetricsProvider*)>(&AquaPainter::create))},
	{"getControl", "()Lapple/laf/JRSUIControl;", nullptr, $FINAL, $method(static_cast<$JRSUIControl*(AquaPainter::*)()>(&AquaPainter::getControl))},
	{"getGraphics2D", "(Ljava/awt/Graphics;)Ljava/awt/Graphics2D;", nullptr, $PRIVATE, $method(static_cast<$Graphics2D*(AquaPainter::*)($Graphics*)>(&AquaPainter::getGraphics2D))},
	{"paint", "(Ljava/awt/Graphics2D;Lapple/laf/JRSUIState;)V", "(Ljava/awt/Graphics2D;TT;)V", $ABSTRACT},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Component;IIII)V", nullptr, $FINAL, $method(static_cast<void(AquaPainter::*)($Graphics*,$Component*,int32_t,int32_t,int32_t,int32_t)>(&AquaPainter::paint))},
	{}
};

$InnerClassInfo _AquaPainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaPainter$RecyclableJRSUISlicedImageControl", "com.apple.laf.AquaPainter", "RecyclableJRSUISlicedImageControl", $PRIVATE | $STATIC},
	{"com.apple.laf.AquaPainter$AquaPixelsKey", "com.apple.laf.AquaPainter", "AquaPixelsKey", $PRIVATE | $STATIC},
	{"com.apple.laf.AquaPainter$AquaSingleImagePainter", "com.apple.laf.AquaPainter", "AquaSingleImagePainter", $PRIVATE | $STATIC | $FINAL},
	{"com.apple.laf.AquaPainter$AquaNineSlicingImagePainter", "com.apple.laf.AquaPainter", "AquaNineSlicingImagePainter", $PRIVATE | $STATIC},
	{"com.apple.laf.AquaPainter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaPainter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaPainter",
	"java.lang.Object",
	nullptr,
	_AquaPainter_FieldInfo_,
	_AquaPainter_MethodInfo_,
	"<T:Lapple/laf/JRSUIState;>Ljava/lang/Object;",
	nullptr,
	_AquaPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaPainter$RecyclableJRSUISlicedImageControl,com.apple.laf.AquaPainter$AquaPixelsKey,com.apple.laf.AquaPainter$AquaSingleImagePainter,com.apple.laf.AquaPainter$AquaNineSlicingImagePainter,com.apple.laf.AquaPainter$1"
};

$Object* allocate$AquaPainter($Class* clazz) {
	return $of($alloc(AquaPainter));
}

AquaPainter* AquaPainter::create($JRSUIState* state) {
	return $new($AquaPainter$AquaSingleImagePainter, state);
}

AquaPainter* AquaPainter::create($JRSUIState* state, int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut) {
	return create(state, minWidth, minHeight, westCut, eastCut, northCut, southCut, true);
}

AquaPainter* AquaPainter::create($JRSUIState* state, int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle) {
	return create(state, minWidth, minHeight, westCut, eastCut, northCut, southCut, useMiddle, true, true);
}

AquaPainter* AquaPainter::create($JRSUIState* state, int32_t minWidth, int32_t minHeight, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle, bool stretchHorizontally, bool stretchVertically) {
	return create(state, $$new($AquaPainter$1, minWidth, minHeight, westCut, eastCut, northCut, southCut, useMiddle, stretchHorizontally, stretchVertically));
}

AquaPainter* AquaPainter::create($JRSUIState* state, $JRSUIUtils$NineSliceMetricsProvider* metricsProvider) {
	return $new($AquaPainter$AquaNineSlicingImagePainter, state, metricsProvider);
}

void AquaPainter::init$($JRSUIControl* control, $JRSUIState* state) {
	$set(this, boundsRect, $new($Rectangle));
	$set(this, control, control);
	$set(this, state, state);
}

$JRSUIControl* AquaPainter::getControl() {
	$nc(this->control)->set($set(this, state, $nc(this->state)->derive()));
	return this->control;
}

void AquaPainter::paint($Graphics* g, $Component* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$nc(this->boundsRect)->setBounds(x, y, w, h);
	$var($JRSUIState, nextState, $nc(this->state)->derive());
	$var($Graphics2D, g2d, getGraphics2D(g));
	if (g2d != nullptr) {
		paint(g2d, nextState);
	}
	$set(this, state, nextState);
}

$Graphics2D* AquaPainter::getGraphics2D($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	try {
		return $cast($SunGraphics2D, g);
	} catch ($Exception& ignored) {
		if ($instanceOf($PeekGraphics, g)) {
			$nc(g)->fillRect($nc(this->boundsRect)->x, $nc(this->boundsRect)->y, $nc(this->boundsRect)->width, $nc(this->boundsRect)->height);
		} else if ($instanceOf($ProxyGraphics2D, g)) {
			$var($ProxyGraphics2D, pg, $cast($ProxyGraphics2D, g));
			$var($Graphics2D, g2d, $nc(pg)->getDelegate());
			if ($instanceOf($SunGraphics2D, g2d)) {
				return g2d;
			}
		} else if ($instanceOf($Graphics2D, g)) {
			return $cast($Graphics2D, g);
		}
	}
	return nullptr;
}

AquaPainter::AquaPainter() {
}

$Class* AquaPainter::load$($String* name, bool initialize) {
	$loadClass(AquaPainter, name, initialize, &_AquaPainter_ClassInfo_, allocate$AquaPainter);
	return class$;
}

$Class* AquaPainter::class$ = nullptr;

		} // laf
	} // apple
} // com
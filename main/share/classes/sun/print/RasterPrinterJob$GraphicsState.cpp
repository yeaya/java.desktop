#include <sun/print/RasterPrinterJob$GraphicsState.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _RasterPrinterJob$GraphicsState_FieldInfo_[] = {
	{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$GraphicsState, this$0)},
	{"region", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(RasterPrinterJob$GraphicsState, region)},
	{"theClip", "Ljava/awt/Shape;", nullptr, 0, $field(RasterPrinterJob$GraphicsState, theClip)},
	{"theTransform", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(RasterPrinterJob$GraphicsState, theTransform)},
	{"sx", "D", nullptr, 0, $field(RasterPrinterJob$GraphicsState, sx)},
	{"sy", "D", nullptr, 0, $field(RasterPrinterJob$GraphicsState, sy)},
	{}
};

$MethodInfo _RasterPrinterJob$GraphicsState_MethodInfo_[] = {
	{"<init>", "(Lsun/print/RasterPrinterJob;)V", nullptr, $PRIVATE, $method(static_cast<void(RasterPrinterJob$GraphicsState::*)($RasterPrinterJob*)>(&RasterPrinterJob$GraphicsState::init$))},
	{}
};

$InnerClassInfo _RasterPrinterJob$GraphicsState_InnerClassesInfo_[] = {
	{"sun.print.RasterPrinterJob$GraphicsState", "sun.print.RasterPrinterJob", "GraphicsState", $PRIVATE},
	{}
};

$ClassInfo _RasterPrinterJob$GraphicsState_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.RasterPrinterJob$GraphicsState",
	"java.lang.Object",
	nullptr,
	_RasterPrinterJob$GraphicsState_FieldInfo_,
	_RasterPrinterJob$GraphicsState_MethodInfo_,
	nullptr,
	nullptr,
	_RasterPrinterJob$GraphicsState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.RasterPrinterJob"
};

$Object* allocate$RasterPrinterJob$GraphicsState($Class* clazz) {
	return $of($alloc(RasterPrinterJob$GraphicsState));
}

void RasterPrinterJob$GraphicsState::init$($RasterPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

RasterPrinterJob$GraphicsState::RasterPrinterJob$GraphicsState() {
}

$Class* RasterPrinterJob$GraphicsState::load$($String* name, bool initialize) {
	$loadClass(RasterPrinterJob$GraphicsState, name, initialize, &_RasterPrinterJob$GraphicsState_ClassInfo_, allocate$RasterPrinterJob$GraphicsState);
	return class$;
}

$Class* RasterPrinterJob$GraphicsState::class$ = nullptr;

	} // print
} // sun
#include <sun/java2d/pipe/AlphaPaintPipe$TileContext.h>

#include <java/awt/PaintContext.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/pipe/AlphaPaintPipe.h>
#include <jcpp.h>

using $PaintContext = ::java::awt::PaintContext;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $AlphaPaintPipe = ::sun::java2d::pipe::AlphaPaintPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _AlphaPaintPipe$TileContext_FieldInfo_[] = {
	{"sunG2D", "Lsun/java2d/SunGraphics2D;", nullptr, 0, $field(AlphaPaintPipe$TileContext, sunG2D)},
	{"paintCtxt", "Ljava/awt/PaintContext;", nullptr, 0, $field(AlphaPaintPipe$TileContext, paintCtxt)},
	{"paintModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(AlphaPaintPipe$TileContext, paintModel)},
	{"lastRaster", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/Raster;>;", 0, $field(AlphaPaintPipe$TileContext, lastRaster)},
	{"lastData", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", 0, $field(AlphaPaintPipe$TileContext, lastData)},
	{"lastMask", "Lsun/java2d/loops/MaskBlit;", nullptr, 0, $field(AlphaPaintPipe$TileContext, lastMask)},
	{"lastBlit", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(AlphaPaintPipe$TileContext, lastBlit)},
	{"dstData", "Lsun/java2d/SurfaceData;", nullptr, 0, $field(AlphaPaintPipe$TileContext, dstData)},
	{}
};

$MethodInfo _AlphaPaintPipe$TileContext_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/SunGraphics2D;Ljava/awt/PaintContext;)V", nullptr, $PUBLIC, $method(static_cast<void(AlphaPaintPipe$TileContext::*)($SunGraphics2D*,$PaintContext*)>(&AlphaPaintPipe$TileContext::init$))},
	{}
};

$InnerClassInfo _AlphaPaintPipe$TileContext_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.AlphaPaintPipe$TileContext", "sun.java2d.pipe.AlphaPaintPipe", "TileContext", $STATIC},
	{}
};

$ClassInfo _AlphaPaintPipe$TileContext_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.AlphaPaintPipe$TileContext",
	"java.lang.Object",
	nullptr,
	_AlphaPaintPipe$TileContext_FieldInfo_,
	_AlphaPaintPipe$TileContext_MethodInfo_,
	nullptr,
	nullptr,
	_AlphaPaintPipe$TileContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.AlphaPaintPipe"
};

$Object* allocate$AlphaPaintPipe$TileContext($Class* clazz) {
	return $of($alloc(AlphaPaintPipe$TileContext));
}

void AlphaPaintPipe$TileContext::init$($SunGraphics2D* sg, $PaintContext* pc) {
	$set(this, sunG2D, sg);
	$set(this, paintCtxt, pc);
	$set(this, paintModel, $nc(pc)->getColorModel());
	$set(this, dstData, $nc(sg)->getSurfaceData());
	$load($AlphaPaintPipe);
	$synchronized($AlphaPaintPipe::class$) {
		$init($AlphaPaintPipe);
		if ($AlphaPaintPipe::cachedLastColorModel != nullptr && $equals($nc($AlphaPaintPipe::cachedLastColorModel)->get(), this->paintModel)) {
			$set(this, lastRaster, $AlphaPaintPipe::cachedLastRaster);
			$set(this, lastData, $AlphaPaintPipe::cachedLastData);
		}
	}
}

AlphaPaintPipe$TileContext::AlphaPaintPipe$TileContext() {
}

$Class* AlphaPaintPipe$TileContext::load$($String* name, bool initialize) {
	$loadClass(AlphaPaintPipe$TileContext, name, initialize, &_AlphaPaintPipe$TileContext_ClassInfo_, allocate$AlphaPaintPipe$TileContext);
	return class$;
}

$Class* AlphaPaintPipe$TileContext::class$ = nullptr;

		} // pipe
	} // java2d
} // sun
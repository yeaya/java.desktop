#include <sun/java2d/pipe/GeneralCompositePipe.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/CompositeContext.h>
#include <java/awt/Paint.h>
#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/GeneralCompositePipe$TileContext.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $CompositeContext = ::java::awt::CompositeContext;
using $Paint = ::java::awt::Paint;
using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $GeneralCompositePipe$TileContext = ::sun::java2d::pipe::GeneralCompositePipe$TileContext;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _GeneralCompositePipe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeneralCompositePipe::*)()>(&GeneralCompositePipe::init$))},
	{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"needTile", "(Ljava/lang/Object;IIII)Z", nullptr, $PUBLIC},
	{"renderPathTile", "(Ljava/lang/Object;[BIIIIII)V", nullptr, $PUBLIC},
	{"skipTile", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GeneralCompositePipe_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.GeneralCompositePipe$TileContext", "sun.java2d.pipe.GeneralCompositePipe", "TileContext", 0},
	{}
};

$ClassInfo _GeneralCompositePipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.GeneralCompositePipe",
	"java.lang.Object",
	"sun.java2d.pipe.CompositePipe",
	nullptr,
	_GeneralCompositePipe_MethodInfo_,
	nullptr,
	nullptr,
	_GeneralCompositePipe_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.GeneralCompositePipe$TileContext"
};

$Object* allocate$GeneralCompositePipe($Class* clazz) {
	return $of($alloc(GeneralCompositePipe));
}

void GeneralCompositePipe::init$() {
}

$Object* GeneralCompositePipe::startSequence($SunGraphics2D* sg, $Shape* s, $Rectangle* devR, $ints* abox) {
	$useLocalCurrentObjectStackCache();
	$var($RenderingHints, hints, $nc(sg)->getRenderingHints());
	$var($ColorModel, model, sg->getDeviceColorModel());
	$var($ColorModel, var$0, model);
	$var($Rectangle, var$1, devR);
	$var($Rectangle2D, var$2, $nc(s)->getBounds2D());
	$var($PaintContext, paintContext, $nc(sg->paint)->createContext(var$0, var$1, var$2, $(sg->cloneTransform()), hints));
	$var($CompositeContext, compositeContext, $nc(sg->composite)->createContext($($nc(paintContext)->getColorModel()), model, hints));
	return $of($new($GeneralCompositePipe$TileContext, this, sg, paintContext, compositeContext, model));
}

bool GeneralCompositePipe::needTile(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) {
	return true;
}

void GeneralCompositePipe::renderPathTile(Object$* ctx, $bytes* atile, int32_t offset, int32_t tilesize, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($GeneralCompositePipe$TileContext, context, $cast($GeneralCompositePipe$TileContext, ctx));
	$var($PaintContext, paintCtxt, $nc(context)->paintCtxt);
	$var($CompositeContext, compCtxt, context->compCtxt);
	$var($SunGraphics2D, sg, context->sunG2D);
	$var($Raster, srcRaster, $nc(paintCtxt)->getRaster(x, y, w, h));
	$var($ColorModel, paintModel, paintCtxt->getColorModel());
	$var($Raster, dstRaster, nullptr);
	$var($Raster, dstIn, nullptr);
	$var($WritableRaster, dstOut, nullptr);
	$var($SurfaceData, sd, $nc(sg)->getSurfaceData());
	$assign(dstRaster, $nc(sd)->getRaster(x, y, w, h));
	if ($instanceOf($WritableRaster, dstRaster) && atile == nullptr) {
		$assign(dstOut, $cast($WritableRaster, dstRaster));
		$assign(dstOut, $nc(dstOut)->createWritableChild(x, y, w, h, 0, 0, nullptr));
		$assign(dstIn, dstOut);
	} else {
		$assign(dstIn, $nc(dstRaster)->createChild(x, y, w, h, 0, 0, nullptr));
		$assign(dstOut, $nc(dstIn)->createCompatibleWritableRaster());
	}
	$nc(compCtxt)->compose(srcRaster, dstIn, dstOut);
	if (!$equals(dstRaster, dstOut) && $nc(dstOut)->getParent() != dstRaster) {
		if ($instanceOf($WritableRaster, dstRaster) && atile == nullptr) {
			$nc(($cast($WritableRaster, dstRaster)))->setDataElements(x, y, static_cast<$Raster*>(dstOut));
		} else {
			$var($ColorModel, cm, sg->getDeviceColorModel());
			$var($BufferedImage, resImg, $new($BufferedImage, cm, dstOut, $nc(cm)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
			$var($SurfaceData, resData, $BufImgSurfaceData::createData(resImg));
			if (atile == nullptr) {
				$var($SurfaceType, var$0, $nc(resData)->getSurfaceType());
				$init($CompositeType);
				$var($CompositeType, var$1, $CompositeType::SrcNoEa);
				$var($Blit, blit, $Blit::getFromCache(var$0, var$1, $(sd->getSurfaceType())));
				$init($AlphaComposite);
				$nc(blit)->Blit$(resData, sd, $AlphaComposite::Src, nullptr, 0, 0, x, y, w, h);
			} else {
				$var($SurfaceType, var$2, $nc(resData)->getSurfaceType());
				$init($CompositeType);
				$var($CompositeType, var$3, $CompositeType::SrcNoEa);
				$var($MaskBlit, blit, $MaskBlit::getFromCache(var$2, var$3, $(sd->getSurfaceType())));
				$init($AlphaComposite);
				$nc(blit)->MaskBlit$(resData, sd, $AlphaComposite::Src, nullptr, 0, 0, x, y, w, h, atile, offset, tilesize);
			}
		}
	}
}

void GeneralCompositePipe::skipTile(Object$* ctx, int32_t x, int32_t y) {
	return;
}

void GeneralCompositePipe::endSequence(Object$* ctx) {
	$var($GeneralCompositePipe$TileContext, context, $cast($GeneralCompositePipe$TileContext, ctx));
	if ($nc(context)->paintCtxt != nullptr) {
		$nc(context->paintCtxt)->dispose();
	}
	if ($nc(context)->compCtxt != nullptr) {
		$nc(context->compCtxt)->dispose();
	}
}

GeneralCompositePipe::GeneralCompositePipe() {
}

$Class* GeneralCompositePipe::load$($String* name, bool initialize) {
	$loadClass(GeneralCompositePipe, name, initialize, &_GeneralCompositePipe_ClassInfo_, allocate$GeneralCompositePipe);
	return class$;
}

$Class* GeneralCompositePipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun
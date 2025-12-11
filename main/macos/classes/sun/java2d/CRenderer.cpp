#include <sun/java2d/CRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Arc2D$Float.h>
#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/java2d/CRenderer$Tracer.h>
#include <sun/java2d/OSXOffScreenSurfaceData.h>
#include <sun/java2d/OSXSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/lwawt/macosx/CPrinterSurfaceData.h>
#include <jcpp.h>

#undef ABORT
#undef ERROR
#undef OPEN
#undef PIE
#undef STROKE_CUSTOM
#undef TYPE_CUSTOM
#undef TYPE_INT_ARGB_PRE

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Arc2D = ::java::awt::geom::Arc2D;
using $Arc2D$Float = ::java::awt::geom::Arc2D$Float;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $CRenderer$Tracer = ::sun::java2d::CRenderer$Tracer;
using $OSXOffScreenSurfaceData = ::sun::java2d::OSXOffScreenSurfaceData;
using $OSXSurfaceData = ::sun::java2d::OSXSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $CPrinterSurfaceData = ::sun::lwawt::macosx::CPrinterSurfaceData;

namespace sun {
	namespace java2d {

$FieldInfo _CRenderer_FieldInfo_[] = {
	{"lineToShape", "Ljava/awt/geom/Line2D;", nullptr, 0, $field(CRenderer, lineToShape)},
	{"rectToShape", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(CRenderer, rectToShape)},
	{"roundrectToShape", "Ljava/awt/geom/RoundRectangle2D;", nullptr, 0, $field(CRenderer, roundrectToShape)},
	{"ovalToShape", "Ljava/awt/geom/Ellipse2D;", nullptr, 0, $field(CRenderer, ovalToShape)},
	{"arcToShape", "Ljava/awt/geom/Arc2D;", nullptr, 0, $field(CRenderer, arcToShape)},
	{}
};

$MethodInfo _CRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CRenderer::*)()>(&CRenderer::init$))},
	{"blitImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;ZZIIIIIIIILjava/awt/Color;)Z", nullptr, $PROTECTED},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/Color;)Z", nullptr, $PROTECTED},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIILjava/awt/Color;)Z", nullptr, $PROTECTED},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"doArc", "(Lsun/java2d/SurfaceData;FFFFFFIZ)V", nullptr, $NATIVE},
	{"doImage", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;ZZIIIIIIIIII)V", nullptr, $NATIVE},
	{"doLine", "(Lsun/java2d/SurfaceData;FFFF)V", nullptr, $NATIVE},
	{"doOval", "(Lsun/java2d/SurfaceData;FFFFZ)V", nullptr, $NATIVE},
	{"doPoly", "(Lsun/java2d/SurfaceData;[I[IIZZ)V", nullptr, $NATIVE},
	{"doRect", "(Lsun/java2d/SurfaceData;FFFFZ)V", nullptr, $NATIVE},
	{"doRoundRect", "(Lsun/java2d/SurfaceData;FFFFFFZ)V", nullptr, $NATIVE},
	{"doShape", "(Lsun/java2d/SurfaceData;ILjava/nio/FloatBuffer;Ljava/nio/IntBuffer;IZZ)V", nullptr, $NATIVE},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;FFFFFFI)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;FFFF)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;FFFF)V", nullptr, $PUBLIC},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;FFFF)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;FFFFFF)V", nullptr, $PUBLIC},
	{"drawfillShape", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;ZZ)V", nullptr, 0},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;FFFFFFI)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;FFFF)V", nullptr, $PUBLIC},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;FFFF)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;FFFFFF)V", nullptr, $PUBLIC},
	{"imageReady", "(Lsun/awt/image/ToolkitImage;Ljava/awt/image/ImageObserver;)Z", nullptr, $PROTECTED},
	{"init", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&CRenderer::init))},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;)Z", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIIIILjava/awt/Color;)Z", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/CRenderer;", nullptr, $PUBLIC},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/image/BufferedImageOp;Ljava/awt/geom/AffineTransform;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_doArc 10
#define _METHOD_INDEX_doImage 11
#define _METHOD_INDEX_doLine 12
#define _METHOD_INDEX_doOval 13
#define _METHOD_INDEX_doPoly 14
#define _METHOD_INDEX_doRect 15
#define _METHOD_INDEX_doRoundRect 16
#define _METHOD_INDEX_doShape 17
#define _METHOD_INDEX_init 43

$InnerClassInfo _CRenderer_InnerClassesInfo_[] = {
	{"sun.java2d.CRenderer$Tracer", "sun.java2d.CRenderer", "Tracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.CRenderer",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.DrawImagePipe",
	_CRenderer_FieldInfo_,
	_CRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_CRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.CRenderer$Tracer"
};

$Object* allocate$CRenderer($Class* clazz) {
	return $of($alloc(CRenderer));
}

int32_t CRenderer::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool CRenderer::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* CRenderer::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* CRenderer::toString() {
	 return this->$PixelDrawPipe::toString();
}

void CRenderer::finalize() {
	this->$PixelDrawPipe::finalize();
}

void CRenderer::init$() {
}

void CRenderer::init() {
	$init(CRenderer);
	$prepareNativeStatic(CRenderer, init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void CRenderer::doLine($SurfaceData* sData, float x1, float y1, float x2, float y2) {
	$prepareNative(CRenderer, doLine, void, $SurfaceData* sData, float x1, float y1, float x2, float y2);
	$invokeNative(sData, x1, y1, x2, y2);
	$finishNative();
}

void CRenderer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	drawLine(sg2d, (float)x1, (float)y1, (float)x2, (float)y2);
}

void CRenderer::drawLine($SunGraphics2D* sg2d, float x1, float y1, float x2, float y2) {
	$useLocalCurrentObjectStackCache();
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		$nc(surfaceData)->doLine(this, sg2d, x1, y1, x2, y2);
	} else {
		if (this->lineToShape == nullptr) {
			$synchronized(this) {
				if (this->lineToShape == nullptr) {
					$set(this, lineToShape, $new($Line2D$Float));
				}
			}
		}
		$synchronized(this->lineToShape) {
			$nc(this->lineToShape)->setLine(x1, y1, x2, y2);
			drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(this->lineToShape)), true, true);
		}
	}
}

void CRenderer::doRect($SurfaceData* sData, float x, float y, float width, float height, bool isfill) {
	$prepareNative(CRenderer, doRect, void, $SurfaceData* sData, float x, float y, float width, float height, bool isfill);
	$invokeNative(sData, x, y, width, height, isfill);
	$finishNative();
}

void CRenderer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	drawRect(sg2d, (float)x, (float)y, (float)width, (float)height);
}

void CRenderer::drawRect($SunGraphics2D* sg2d, float x, float y, float width, float height) {
	$useLocalCurrentObjectStackCache();
	if ((width < 0) || (height < 0)) {
		return;
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		$nc(surfaceData)->doRect(this, sg2d, x, y, width, height, false);
	} else {
		if (this->rectToShape == nullptr) {
			$synchronized(this) {
				if (this->rectToShape == nullptr) {
					$set(this, rectToShape, $new($Rectangle2D$Float));
				}
			}
		}
		$synchronized(this->rectToShape) {
			$nc(this->rectToShape)->setRect(x, y, width, height);
			drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(this->rectToShape)), true, true);
		}
	}
}

void CRenderer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	fillRect(sg2d, (float)x, (float)y, (float)width, (float)height);
}

void CRenderer::fillRect($SunGraphics2D* sg2d, float x, float y, float width, float height) {
	if ((width >= 0) && (height >= 0)) {
		$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
		$nc(surfaceData)->doRect(this, sg2d, x, y, width, height, true);
	}
}

void CRenderer::doRoundRect($SurfaceData* sData, float x, float y, float width, float height, float arcW, float arcH, bool isfill) {
	$prepareNative(CRenderer, doRoundRect, void, $SurfaceData* sData, float x, float y, float width, float height, float arcW, float arcH, bool isfill);
	$invokeNative(sData, x, y, width, height, arcW, arcH, isfill);
	$finishNative();
}

void CRenderer::drawRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	drawRoundRect(sg2d, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight);
}

void CRenderer::drawRoundRect($SunGraphics2D* sg2d, float x, float y, float width, float height, float arcWidth, float arcHeight) {
	$useLocalCurrentObjectStackCache();
	if ((width < 0) || (height < 0)) {
		return;
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		$nc(surfaceData)->doRoundRect(this, sg2d, x, y, width, height, arcWidth, arcHeight, false);
	} else {
		if (this->roundrectToShape == nullptr) {
			$synchronized(this) {
				if (this->roundrectToShape == nullptr) {
					$set(this, roundrectToShape, $new($RoundRectangle2D$Float));
				}
			}
		}
		$synchronized(this->roundrectToShape) {
			$nc(this->roundrectToShape)->setRoundRect(x, y, width, height, arcWidth, arcHeight);
			drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(this->roundrectToShape)), true, true);
		}
	}
}

void CRenderer::fillRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	fillRoundRect(sg2d, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight);
}

void CRenderer::fillRoundRect($SunGraphics2D* sg2d, float x, float y, float width, float height, float arcWidth, float arcHeight) {
	if ((width < 0) || (height < 0)) {
		return;
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	$nc(surfaceData)->doRoundRect(this, sg2d, x, y, width, height, arcWidth, arcHeight, true);
}

void CRenderer::doOval($SurfaceData* sData, float x, float y, float width, float height, bool isfill) {
	$prepareNative(CRenderer, doOval, void, $SurfaceData* sData, float x, float y, float width, float height, bool isfill);
	$invokeNative(sData, x, y, width, height, isfill);
	$finishNative();
}

void CRenderer::drawOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	drawOval(sg2d, (float)x, (float)y, (float)width, (float)height);
}

void CRenderer::drawOval($SunGraphics2D* sg2d, float x, float y, float width, float height) {
	$useLocalCurrentObjectStackCache();
	if ((width < 0) || (height < 0)) {
		return;
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		$nc(surfaceData)->doOval(this, sg2d, x, y, width, height, false);
	} else {
		if (this->ovalToShape == nullptr) {
			$synchronized(this) {
				if (this->ovalToShape == nullptr) {
					$set(this, ovalToShape, $new($Ellipse2D$Float));
				}
			}
		}
		$synchronized(this->ovalToShape) {
			$nc(this->ovalToShape)->setFrame(x, y, width, height);
			drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(this->ovalToShape)), true, true);
		}
	}
}

void CRenderer::fillOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	fillOval(sg2d, (float)x, (float)y, (float)width, (float)height);
}

void CRenderer::fillOval($SunGraphics2D* sg2d, float x, float y, float width, float height) {
	if ((width < 0) || (height < 0)) {
		return;
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	$nc(surfaceData)->doOval(this, sg2d, x, y, width, height, true);
}

void CRenderer::doArc($SurfaceData* sData, float x, float y, float width, float height, float angleStart, float angleExtent, int32_t type, bool isfill) {
	$prepareNative(CRenderer, doArc, void, $SurfaceData* sData, float x, float y, float width, float height, float angleStart, float angleExtent, int32_t type, bool isfill);
	$invokeNative(sData, x, y, width, height, angleStart, angleExtent, type, isfill);
	$finishNative();
}

void CRenderer::drawArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	drawArc(sg2d, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::OPEN);
}

void CRenderer::drawArc($SunGraphics2D* sg2d, float x, float y, float width, float height, float startAngle, float arcAngle, int32_t type) {
	$useLocalCurrentObjectStackCache();
	if ((width < 0) || (height < 0)) {
		return;
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		$nc(surfaceData)->doArc(this, sg2d, x, y, width, height, startAngle, arcAngle, type, false);
	} else {
		if (this->arcToShape == nullptr) {
			$synchronized(this) {
				if (this->arcToShape == nullptr) {
					$set(this, arcToShape, $new($Arc2D$Float));
				}
			}
		}
		$synchronized(this->arcToShape) {
			$nc(this->arcToShape)->setArc(x, y, width, height, startAngle, arcAngle, type);
			drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(this->arcToShape)), true, true);
		}
	}
}

void CRenderer::fillArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	fillArc(sg2d, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::PIE);
}

void CRenderer::fillArc($SunGraphics2D* sg2d, float x, float y, float width, float height, float startAngle, float arcAngle, int32_t type) {
	if ((width < 0) || (height < 0)) {
		return;
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	$nc(surfaceData)->doArc(this, sg2d, x, y, width, height, startAngle, arcAngle, type, true);
}

void CRenderer::doPoly($SurfaceData* sData, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill) {
	$prepareNative(CRenderer, doPoly, void, $SurfaceData* sData, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill);
	$invokeNative(sData, xpoints, ypoints, npoints, ispolygon, isfill);
	$finishNative();
}

void CRenderer::drawPolyline($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$useLocalCurrentObjectStackCache();
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		$nc(surfaceData)->doPolygon(this, sg2d, xpoints, ypoints, npoints, false, false);
	} else {
		$var($GeneralPath, polyToShape, $new($GeneralPath));
		polyToShape->moveTo((float)$nc(xpoints)->get(0), (float)$nc(ypoints)->get(0));
		for (int32_t i = 1; i < npoints; ++i) {
			polyToShape->lineTo((float)$nc(xpoints)->get(i), (float)$nc(ypoints)->get(i));
		}
		drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(polyToShape)), true, true);
	}
}

void CRenderer::drawPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$useLocalCurrentObjectStackCache();
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		$nc(surfaceData)->doPolygon(this, sg2d, xpoints, ypoints, npoints, true, false);
	} else {
		$var($GeneralPath, polyToShape, $new($GeneralPath));
		polyToShape->moveTo((float)$nc(xpoints)->get(0), (float)$nc(ypoints)->get(0));
		for (int32_t i = 1; i < npoints; ++i) {
			polyToShape->lineTo((float)$nc(xpoints)->get(i), (float)$nc(ypoints)->get(i));
		}
		polyToShape->lineTo((float)$nc(xpoints)->get(0), (float)$nc(ypoints)->get(0));
		drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(polyToShape)), true, true);
	}
}

void CRenderer::fillPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	$nc(surfaceData)->doPolygon(this, sg2d, xpoints, ypoints, npoints, true, true);
}

void CRenderer::doShape($SurfaceData* sData, int32_t length, $FloatBuffer* coordinates, $IntBuffer* types, int32_t windingRule, bool isfill, bool shouldApplyOffset) {
	$prepareNative(CRenderer, doShape, void, $SurfaceData* sData, int32_t length, $FloatBuffer* coordinates, $IntBuffer* types, int32_t windingRule, bool isfill, bool shouldApplyOffset);
	$invokeNative(sData, length, coordinates, types, windingRule, isfill, shouldApplyOffset);
	$finishNative();
}

void CRenderer::drawfillShape($SunGraphics2D* sg2d, $Shape* s, bool isfill, bool shouldApplyOffset) {
	$useLocalCurrentObjectStackCache();
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	bool sOptimizeShapes = true;
	if (sOptimizeShapes && $OSXSurfaceData::IsSimpleColor(sg2d->paint)) {
		if ($instanceOf($Rectangle2D, s)) {
			$var($Rectangle2D, rectangle, $cast($Rectangle2D, s));
			float x = (float)$nc(rectangle)->getX();
			float y = (float)rectangle->getY();
			float w = (float)rectangle->getWidth();
			float h = (float)rectangle->getHeight();
			if (isfill) {
				fillRect(sg2d, x, y, w, h);
			} else {
				drawRect(sg2d, x, y, w, h);
			}
		} else if ($instanceOf($Ellipse2D, s)) {
			$var($Ellipse2D, ellipse, $cast($Ellipse2D, s));
			float x = (float)$nc(ellipse)->getX();
			float y = (float)ellipse->getY();
			float w = (float)ellipse->getWidth();
			float h = (float)ellipse->getHeight();
			if (isfill) {
				fillOval(sg2d, x, y, w, h);
			} else {
				drawOval(sg2d, x, y, w, h);
			}
		} else if ($instanceOf($Arc2D, s)) {
			$var($Arc2D, arc, $cast($Arc2D, s));
			float x = (float)$nc(arc)->getX();
			float y = (float)arc->getY();
			float w = (float)arc->getWidth();
			float h = (float)arc->getHeight();
			float as = (float)arc->getAngleStart();
			float ae = (float)arc->getAngleExtent();
			if (isfill) {
				fillArc(sg2d, x, y, w, h, as, ae, arc->getArcType());
			} else {
				drawArc(sg2d, x, y, w, h, as, ae, arc->getArcType());
			}
		} else if ($instanceOf($RoundRectangle2D, s)) {
			$var($RoundRectangle2D, roundrect, $cast($RoundRectangle2D, s));
			float x = (float)$nc(roundrect)->getX();
			float y = (float)roundrect->getY();
			float w = (float)roundrect->getWidth();
			float h = (float)roundrect->getHeight();
			float aw = (float)roundrect->getArcWidth();
			float ah = (float)roundrect->getArcHeight();
			if (isfill) {
				fillRoundRect(sg2d, x, y, w, h, aw, ah);
			} else {
				drawRoundRect(sg2d, x, y, w, h, aw, ah);
			}
		} else if ($instanceOf($Line2D, s)) {
			$var($Line2D, line, $cast($Line2D, s));
			float x1 = (float)$nc(line)->getX1();
			float y1 = (float)line->getY1();
			float x2 = (float)line->getX2();
			float y2 = (float)line->getY2();
			drawLine(sg2d, x1, y1, x2, y2);
		} else if ($instanceOf($Point2D, s)) {
			$var($Point2D, point, $cast($Point2D, s));
			float x = (float)$nc(point)->getX();
			float y = (float)point->getY();
			drawLine(sg2d, x, y, x, y);
		} else {
			$var($GeneralPath, gp, nullptr);
			if ($instanceOf($GeneralPath, s)) {
				$assign(gp, $cast($GeneralPath, s));
			} else {
				$assign(gp, $new($GeneralPath, s));
			}
			$var($PathIterator, pi, $nc(gp)->getPathIterator(nullptr));
			if ($nc(pi)->isDone() == false) {
				$nc(surfaceData)->drawfillShape(this, sg2d, gp, isfill, shouldApplyOffset);
			}
		}
	} else {
		$var($GeneralPath, gp, nullptr);
		if ($instanceOf($GeneralPath, s)) {
			$assign(gp, $cast($GeneralPath, s));
		} else {
			$assign(gp, $new($GeneralPath, s));
		}
		$var($PathIterator, pi, $nc(gp)->getPathIterator(nullptr));
		if ($nc(pi)->isDone() == false) {
			$nc(surfaceData)->drawfillShape(this, sg2d, gp, isfill, shouldApplyOffset);
		}
	}
}

void CRenderer::draw($SunGraphics2D* sg2d, $Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	if ((sg2d->strokeState != $SunGraphics2D::STROKE_CUSTOM) && ($OSXSurfaceData::IsSimpleColor(sg2d->paint))) {
		drawfillShape(sg2d, s, false, true);
	} else {
		drawfillShape(sg2d, $($nc(sg2d->stroke)->createStrokedShape(s)), true, true);
	}
}

void CRenderer::fill($SunGraphics2D* sg2d, $Shape* s) {
	drawfillShape(sg2d, s, true, false);
}

void CRenderer::doImage($SurfaceData* sData, $SurfaceData* img, bool fliph, bool flipv, int32_t w, int32_t h, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh) {
	$prepareNative(CRenderer, doImage, void, $SurfaceData* sData, $SurfaceData* img, bool fliph, bool flipv, int32_t w, int32_t h, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh);
	$invokeNative(sData, img, fliph, flipv, w, h, sx, sy, sw, sh, dx, dy, dw, dh);
	$finishNative();
}

bool CRenderer::scaleImage($SunGraphics2D* sg2d, $Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgColor) {
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	int32_t sx = 0;
	int32_t sy = 0;
	int32_t iw = $nc(img)->getWidth(nullptr);
	int32_t ih = img->getHeight(nullptr);
	return scaleImage(sg2d, img, x, y, x + width, y + height, sx, sy, sx + iw, sy + ih, bgColor);
}

bool CRenderer::scaleImage($SunGraphics2D* sg2d, $Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor) {
	int32_t srcW = 0;
	int32_t srcH = 0;
	int32_t dstW = 0;
	int32_t dstH = 0;
	int32_t srcX = 0;
	int32_t srcY = 0;
	int32_t dstX = 0;
	int32_t dstY = 0;
	bool srcWidthFlip = false;
	bool srcHeightFlip = false;
	bool dstWidthFlip = false;
	bool dstHeightFlip = false;
	if (sx2 > sx1) {
		srcW = sx2 - sx1;
		srcX = sx1;
	} else {
		srcWidthFlip = true;
		srcW = sx1 - sx2;
		srcX = sx2;
	}
	if (sy2 > sy1) {
		srcH = sy2 - sy1;
		srcY = sy1;
	} else {
		srcHeightFlip = true;
		srcH = sy1 - sy2;
		srcY = sy2;
	}
	if (dx2 > dx1) {
		dstW = dx2 - dx1;
		dstX = dx1;
	} else {
		dstW = dx1 - dx2;
		dstWidthFlip = true;
		dstX = dx2;
	}
	if (dy2 > dy1) {
		dstH = dy2 - dy1;
		dstY = dy1;
	} else {
		dstH = dy1 - dy2;
		dstHeightFlip = true;
		dstY = dy2;
	}
	if (srcW <= 0 || srcH <= 0) {
		return true;
	}
	bool flipv = (srcHeightFlip != dstHeightFlip);
	bool fliph = (srcWidthFlip != dstWidthFlip);
	return blitImage(sg2d, img, fliph, flipv, srcX, srcY, srcW, srcH, dstX, dstY, dstW, dstH, bgColor);
}

bool CRenderer::blitImage($SunGraphics2D* sg2d, $Image* img, bool fliph, bool flipv, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($CPrinterSurfaceData, surfaceData, $cast($CPrinterSurfaceData, $nc(sg2d)->getSurfaceData()));
	$var($OSXOffScreenSurfaceData, imgSurfaceData, $OSXOffScreenSurfaceData::createNewSurface($cast($BufferedImage, img)));
	$nc(surfaceData)->blitImage(this, sg2d, imgSurfaceData, fliph, flipv, sx, sy, sw, sh, dx, dy, dw, dh, bgColor);
	return true;
}

bool CRenderer::copyImage($SunGraphics2D* sg2d, $Image* img, int32_t dx, int32_t dy, $Color* bgColor) {
	if (img == nullptr) {
		return true;
	}
	int32_t sx = 0;
	int32_t sy = 0;
	int32_t width = $nc(img)->getWidth(nullptr);
	int32_t height = img->getHeight(nullptr);
	return blitImage(sg2d, img, false, false, sx, sy, width, height, dx, dy, width, height, bgColor);
}

bool CRenderer::copyImage($SunGraphics2D* sg2d, $Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t width, int32_t height, $Color* bgColor) {
	return blitImage(sg2d, img, false, false, sx, sy, width, height, dx, dy, width, height, bgColor);
}

void CRenderer::transformImage($SunGraphics2D* sg2d, $Image* img$renamed, int32_t x, int32_t y, $BufferedImageOp* op, $AffineTransform* xf, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($Image, img, img$renamed);
	if (img != nullptr) {
		int32_t iw = img->getWidth(nullptr);
		int32_t ih = img->getHeight(nullptr);
		if ((op != nullptr) && ($instanceOf($BufferedImage, img))) {
			if ($nc(($cast($BufferedImage, img)))->getType() == $BufferedImage::TYPE_CUSTOM) {
				$var($BufferedImage, dest, nullptr);
				$assign(dest, $new($BufferedImage, iw, ih, $BufferedImage::TYPE_INT_ARGB_PRE));
				$var($Graphics, g, dest->createGraphics());
				$nc(g)->drawImage(img, 0, 0, nullptr);
				g->dispose();
				$assign(img, op->filter(dest, nullptr));
			} else {
				$assign(img, op->filter($cast($BufferedImage, img), nullptr));
			}
			iw = img->getWidth(nullptr);
			ih = img->getHeight(nullptr);
		}
		if (xf != nullptr) {
			$var($AffineTransform, reset, $nc(sg2d)->getTransform());
			sg2d->transform(xf);
			scaleImage(sg2d, img, x, y, x + iw, y + ih, 0, 0, iw, ih, bgColor);
			sg2d->setTransform(reset);
		} else {
			scaleImage(sg2d, img, x, y, x + iw, y + ih, 0, 0, iw, ih, bgColor);
		}
	} else {
		$throwNew($NullPointerException);
	}
}

bool CRenderer::imageReady($ToolkitImage* sunimg, $ImageObserver* observer) {
	if ($nc(sunimg)->hasError()) {
		if (observer != nullptr) {
			observer->imageUpdate(sunimg, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	return true;
}

bool CRenderer::copyImage($SunGraphics2D* sg2d, $Image* img, int32_t x, int32_t y, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (img == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($ToolkitImage, img))) {
		return copyImage(sg2d, img, x, y, bgColor);
	}
	$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
	if (!imageReady(sunimg, observer)) {
		return false;
	}
	$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
	return $nc(ir)->drawToBufImage(sg2d, sunimg, x, y, bgColor, observer);
}

bool CRenderer::copyImage($SunGraphics2D* sg2d, $Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t width, int32_t height, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (img == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($ToolkitImage, img))) {
		return copyImage(sg2d, img, dx, dy, sx, sy, width, height, bgColor);
	}
	$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
	if (!imageReady(sunimg, observer)) {
		return false;
	}
	$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
	return $nc(ir)->drawToBufImage(sg2d, sunimg, dx, dy, (dx + width), (dy + height), sx, sy, (sx + width), (sy + height), nullptr, observer);
}

bool CRenderer::scaleImage($SunGraphics2D* sg2d, $Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (img == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($ToolkitImage, img))) {
		return scaleImage(sg2d, img, x, y, width, height, bgColor);
	}
	$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
	if (!imageReady(sunimg, observer)) {
		return false;
	}
	$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
	return $nc(ir)->drawToBufImage(sg2d, sunimg, x, y, width, height, bgColor, observer);
}

bool CRenderer::scaleImage($SunGraphics2D* sg2d, $Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (img == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($ToolkitImage, img))) {
		return scaleImage(sg2d, img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgColor);
	}
	$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
	if (!imageReady(sunimg, observer)) {
		return false;
	}
	$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
	return $nc(ir)->drawToBufImage(sg2d, sunimg, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgColor, observer);
}

bool CRenderer::transformImage($SunGraphics2D* sg2d, $Image* img, $AffineTransform* atfm, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (img == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($ToolkitImage, img))) {
		transformImage(sg2d, img, 0, 0, nullptr, atfm, nullptr);
		return true;
	}
	$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
	if (!imageReady(sunimg, observer)) {
		return false;
	}
	$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
	return $nc(ir)->drawToBufImage(sg2d, sunimg, atfm, observer);
}

void CRenderer::transformImage($SunGraphics2D* sg2d, $BufferedImage* img, $BufferedImageOp* op, int32_t x, int32_t y) {
	if (img != nullptr) {
		transformImage(sg2d, img, x, y, op, nullptr, nullptr);
	} else {
		$throwNew($NullPointerException);
	}
}

CRenderer* CRenderer::traceWrap() {
	return $new($CRenderer$Tracer);
}

void clinit$CRenderer($Class* class$) {
	{
		CRenderer::init();
	}
}

CRenderer::CRenderer() {
}

$Class* CRenderer::load$($String* name, bool initialize) {
	$loadClass(CRenderer, name, initialize, &_CRenderer_ClassInfo_, clinit$CRenderer, allocate$CRenderer);
	return class$;
}

$Class* CRenderer::class$ = nullptr;

	} // java2d
} // sun
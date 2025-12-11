#include <sun/java2d/CompositeCRenderer.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/CompositeContext.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
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
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/util/Map.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/CRenderer.h>
#include <sun/java2d/OSXSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef OPEN
#undef PIE
#undef TRANSFORM_TRANSLATESCALE
#undef WIND_NON_ZERO

using $AlphaComposite = ::java::awt::AlphaComposite;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $CompositeContext = ::java::awt::CompositeContext;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $GlyphVector = ::java::awt::font::GlyphVector;
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
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $CRenderer = ::sun::java2d::CRenderer;
using $OSXSurfaceData = ::sun::java2d::OSXSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {

$FieldInfo _CompositeCRenderer_FieldInfo_[] = {
	{"fPadding", "I", nullptr, $STATIC | $FINAL, $constField(CompositeCRenderer, fPadding)},
	{"fPaddingHalf", "I", nullptr, $STATIC | $FINAL, $constField(CompositeCRenderer, fPaddingHalf)},
	{"sIdentityMatrix", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC, $staticField(CompositeCRenderer, sIdentityMatrix)},
	{"ShapeTM", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(CompositeCRenderer, ShapeTM)},
	{"ShapeBounds", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(CompositeCRenderer, ShapeBounds)},
	{"line", "Ljava/awt/geom/Line2D;", nullptr, 0, $field(CompositeCRenderer, line)},
	{"rectangle", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(CompositeCRenderer, rectangle)},
	{"roundrectangle", "Ljava/awt/geom/RoundRectangle2D;", nullptr, 0, $field(CompositeCRenderer, roundrectangle)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, 0, $field(CompositeCRenderer, ellipse)},
	{"arc", "Ljava/awt/geom/Arc2D;", nullptr, 0, $field(CompositeCRenderer, arc)},
	{}
};

$MethodInfo _CompositeCRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompositeCRenderer::*)()>(&CompositeCRenderer::init$))},
	{"blitImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;ZZIIIIIIIILjava/awt/Color;)Z", nullptr, $PROTECTED},
	{"clipBounds", "(Lsun/java2d/SunGraphics2D;Ljava/awt/geom/Rectangle2D;)V", nullptr, 0},
	{"composite", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/OSXSurfaceData;Ljava/awt/image/BufferedImage;Ljava/awt/geom/Rectangle2D;)V", nullptr, 0},
	{"doPolygon", "(Lsun/java2d/SunGraphics2D;[I[IIZZ)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"doShape", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/OSXSurfaceData;Ljava/awt/Shape;Z)V", nullptr, 0},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;DD)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSurfacePixels", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/OSXSurfaceData;IIII)Ljava/awt/image/BufferedImage;", nullptr, 0},
	{"padBounds", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)Ljava/awt/geom/Rectangle2D;", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompositeCRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.CompositeCRenderer",
	"sun.java2d.CRenderer",
	"sun.java2d.pipe.TextPipe",
	_CompositeCRenderer_FieldInfo_,
	_CompositeCRenderer_MethodInfo_
};

$Object* allocate$CompositeCRenderer($Class* clazz) {
	return $of($alloc(CompositeCRenderer));
}

int32_t CompositeCRenderer::hashCode() {
	 return this->$CRenderer::hashCode();
}

bool CompositeCRenderer::equals(Object$* arg0) {
	 return this->$CRenderer::equals(arg0);
}

$Object* CompositeCRenderer::clone() {
	 return this->$CRenderer::clone();
}

$String* CompositeCRenderer::toString() {
	 return this->$CRenderer::toString();
}

void CompositeCRenderer::finalize() {
	this->$CRenderer::finalize();
}

$AffineTransform* CompositeCRenderer::sIdentityMatrix = nullptr;

void CompositeCRenderer::init$() {
	$CRenderer::init$();
	$set(this, ShapeTM, $new($AffineTransform));
	$set(this, ShapeBounds, $new($Rectangle2D$Float));
	$set(this, line, $new($Line2D$Float));
	$set(this, rectangle, $new($Rectangle2D$Float));
	$set(this, roundrectangle, $new($RoundRectangle2D$Float));
	$set(this, ellipse, $new($Ellipse2D$Float));
	$set(this, arc, $new($Arc2D$Float));
}

void CompositeCRenderer::drawLine($SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$synchronized(this) {
		$nc(this->line)->setLine((double)x1, (double)y1, (double)x2, (double)y2);
		draw(sg2d, this->line);
	}
}

void CompositeCRenderer::drawRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(this) {
		$nc(this->rectangle)->setRect((double)x, (double)y, (double)width, (double)height);
		draw(sg2d, this->rectangle);
	}
}

void CompositeCRenderer::drawRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$synchronized(this) {
		$nc(this->roundrectangle)->setRoundRect((double)x, (double)y, (double)width, (double)height, (double)arcWidth, (double)arcHeight);
		draw(sg2d, this->roundrectangle);
	}
}

void CompositeCRenderer::drawOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(this) {
		$nc(this->ellipse)->setFrame((double)x, (double)y, (double)width, (double)height);
		draw(sg2d, this->ellipse);
	}
}

void CompositeCRenderer::drawArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$synchronized(this) {
		$nc(this->arc)->setArc((double)x, (double)y, (double)width, (double)height, (double)startAngle, (double)arcAngle, $Arc2D::OPEN);
		draw(sg2d, this->arc);
	}
}

void CompositeCRenderer::drawPolyline($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$synchronized(this) {
		doPolygon(sg2d, xpoints, ypoints, npoints, false, false);
	}
}

void CompositeCRenderer::drawPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$synchronized(this) {
		doPolygon(sg2d, xpoints, ypoints, npoints, true, false);
	}
}

void CompositeCRenderer::fillRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(this) {
		$nc(this->rectangle)->setRect((double)x, (double)y, (double)width, (double)height);
		fill(sg2d, this->rectangle);
	}
}

void CompositeCRenderer::fillRoundRect($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$synchronized(this) {
		$nc(this->roundrectangle)->setRoundRect((double)x, (double)y, (double)width, (double)height, (double)arcWidth, (double)arcHeight);
		fill(sg2d, this->roundrectangle);
	}
}

void CompositeCRenderer::fillOval($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(this) {
		$nc(this->ellipse)->setFrame((double)x, (double)y, (double)width, (double)height);
		fill(sg2d, this->ellipse);
	}
}

void CompositeCRenderer::fillArc($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$synchronized(this) {
		$nc(this->arc)->setArc((double)x, (double)y, (double)width, (double)height, (double)startAngle, (double)arcAngle, $Arc2D::PIE);
		fill(sg2d, this->arc);
	}
}

void CompositeCRenderer::fillPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) {
	$synchronized(this) {
		doPolygon(sg2d, xpoints, ypoints, npoints, true, true);
	}
}

void CompositeCRenderer::doPolygon($SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($GeneralPath, gp, $new($GeneralPath, $Path2D::WIND_NON_ZERO, npoints));
		gp->moveTo((float)$nc(xpoints)->get(0), (float)$nc(ypoints)->get(0));
		for (int32_t i = 1; i < npoints; ++i) {
			gp->lineTo((float)$nc(xpoints)->get(i), (float)$nc(ypoints)->get(i));
		}
		if (ispolygon) {
			if (($nc(xpoints)->get(0) != xpoints->get(npoints - 1)) || ($nc(ypoints)->get(0) != ypoints->get(npoints - 1))) {
				gp->lineTo((float)$nc(xpoints)->get(0), (float)ypoints->get(0));
			}
		}
		doShape(sg2d, $cast($OSXSurfaceData, $($nc(sg2d)->getSurfaceData())), static_cast<$Shape*>(gp), isfill);
	}
}

void CompositeCRenderer::draw($SunGraphics2D* sg2d, $Shape* shape) {
	$synchronized(this) {
		doShape(sg2d, $cast($OSXSurfaceData, $($nc(sg2d)->getSurfaceData())), shape, false);
	}
}

void CompositeCRenderer::fill($SunGraphics2D* sg2d, $Shape* shape) {
	$synchronized(this) {
		doShape(sg2d, $cast($OSXSurfaceData, $($nc(sg2d)->getSurfaceData())), shape, true);
	}
}

void CompositeCRenderer::doShape($SunGraphics2D* sg2d, $OSXSurfaceData* surfaceData, $Shape* shape, bool isfill) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, shapeBounds, $nc(shape)->getBounds2D());
	bool var$0 = ($nc(shapeBounds)->getWidth() < 0);
	if (var$0 || ($nc(shapeBounds)->getHeight() < 0)) {
		return;
	}
	$var($Rectangle2D, compositingBounds, padBounds(sg2d, shape));
	clipBounds(sg2d, compositingBounds);
	if ($nc(compositingBounds)->isEmpty() == false) {
		$var($BufferedImage, srcPixels, nullptr);
		int32_t var$1 = $cast(int32_t, (compositingBounds->getWidth()));
		$assign(srcPixels, $nc(surfaceData)->getCompositingSrcImage(var$1, $cast(int32_t, (compositingBounds->getHeight()))));
		$var($Graphics2D, g, $nc(srcPixels)->createGraphics());
		double var$2 = -compositingBounds->getX();
		$nc(this->ShapeTM)->setToTranslation(var$2, -compositingBounds->getY());
		$nc(this->ShapeTM)->concatenate($nc(sg2d)->transform$);
		$nc(g)->setTransform(this->ShapeTM);
		g->setRenderingHints($($nc(sg2d)->getRenderingHints()));
		g->setPaint($($nc(sg2d)->getPaint()));
		g->setStroke($($nc(sg2d)->getStroke()));
		if (isfill) {
			g->fill(shape);
		} else {
			g->draw(shape);
		}
		g->dispose();
		composite(sg2d, surfaceData, srcPixels, compositingBounds);
	}
}

void CompositeCRenderer::drawString($SunGraphics2D* sg2d, $String* str, double x, double y) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		drawGlyphVector(sg2d, $($nc($($nc(sg2d)->getFont()))->createGlyphVector($(sg2d->getFontRenderContext()), str)), x, y);
	}
}

void CompositeCRenderer::drawChars($SunGraphics2D* sg2d, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$synchronized(this) {
		drawString(sg2d, $$new($String, data, offset, length), (double)x, (double)y);
	}
}

void CompositeCRenderer::drawGlyphVector($SunGraphics2D* sg2d, $GlyphVector* glyphVector, double x, double y) {
	$synchronized(this) {
		drawGlyphVector(sg2d, glyphVector, (float)x, (float)y);
	}
}

void CompositeCRenderer::drawGlyphVector($SunGraphics2D* sg2d, $GlyphVector* glyphVector, float x, float y) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
		$var($Shape, shape, $nc(glyphVector)->getOutline(x, y));
		$var($Rectangle2D, compositingBounds, padBounds(sg2d, shape));
		clipBounds(sg2d, compositingBounds);
		if ($nc(compositingBounds)->isEmpty() == false) {
			$var($BufferedImage, srcPixels, nullptr);
			{
				int32_t var$0 = $cast(int32_t, compositingBounds->getWidth());
				$assign(srcPixels, $nc(surfaceData)->getCompositingSrcImage(var$0, $cast(int32_t, compositingBounds->getHeight())));
				$var($Graphics2D, g, $nc(srcPixels)->createGraphics());
				double var$1 = -compositingBounds->getX();
				$nc(this->ShapeTM)->setToTranslation(var$1, -compositingBounds->getY());
				$nc(this->ShapeTM)->concatenate(sg2d->transform$);
				$nc(g)->setTransform(this->ShapeTM);
				g->setPaint($(sg2d->getPaint()));
				g->setStroke($(sg2d->getStroke()));
				g->setFont($(sg2d->getFont()));
				g->setRenderingHints($(sg2d->getRenderingHints()));
				g->drawGlyphVector(glyphVector, x, y);
				g->dispose();
			}
			composite(sg2d, surfaceData, srcPixels, compositingBounds);
		}
	}
}

bool CompositeCRenderer::blitImage($SunGraphics2D* sg2d, $Image* img, bool fliph, bool flipv, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($OSXSurfaceData, surfaceData, $cast($OSXSurfaceData, $nc(sg2d)->getSurfaceData()));
	dx = (flipv == false) ? dx : dx - dw;
	dy = (fliph == false) ? dy : dy - dh;
	$nc(this->ShapeBounds)->setFrame((double)dx, (double)dy, (double)dw, (double)dh);
	$var($Rectangle2D, compositingBounds, this->ShapeBounds);
	bool complexTransform = (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE);
	if (complexTransform == false) {
		double newX = $Math::floor($nc(compositingBounds)->getX() + sg2d->transX);
		double newY = $Math::floor($nc(compositingBounds)->getY() + sg2d->transY);
		double var$0 = $Math::ceil($nc(compositingBounds)->getWidth());
		double newW = var$0 + (newX < $nc(compositingBounds)->getX() ? 1 : 0);
		double var$1 = $Math::ceil($nc(compositingBounds)->getHeight());
		double newH = var$1 + (newY < $nc(compositingBounds)->getY() ? 1 : 0);
		$nc(compositingBounds)->setRect(newX, newY, newW, newH);
	} else {
		$var($Shape, transformedShape, $nc(sg2d->transform$)->createTransformedShape(compositingBounds));
		$assign(compositingBounds, $nc(transformedShape)->getBounds2D());
		double newX = $Math::floor($nc(compositingBounds)->getX());
		double newY = $Math::floor($nc(compositingBounds)->getY());
		double var$2 = $Math::ceil($nc(compositingBounds)->getWidth());
		double newW = var$2 + (newX < $nc(compositingBounds)->getX() ? 1 : 0);
		double var$3 = $Math::ceil($nc(compositingBounds)->getHeight());
		double newH = var$3 + (newY < $nc(compositingBounds)->getY() ? 1 : 0);
		$nc(compositingBounds)->setRect(newX, newY, newW, newH);
	}
	clipBounds(sg2d, compositingBounds);
	if ($nc(compositingBounds)->isEmpty() == false) {
		$var($BufferedImage, srcPixels, nullptr);
		{
			int32_t var$4 = $cast(int32_t, compositingBounds->getWidth());
			$assign(srcPixels, $nc(surfaceData)->getCompositingSrcImage(var$4, $cast(int32_t, compositingBounds->getHeight())));
			$var($Graphics2D, g, $nc(srcPixels)->createGraphics());
			double var$5 = -compositingBounds->getX();
			$nc(this->ShapeTM)->setToTranslation(var$5, -compositingBounds->getY());
			$nc(this->ShapeTM)->concatenate(sg2d->transform$);
			$nc(g)->setTransform(this->ShapeTM);
			g->setRenderingHints($(sg2d->getRenderingHints()));
			$init($AlphaComposite);
			g->setComposite($AlphaComposite::Src);
			int32_t sx2 = (flipv == false) ? sx + sw : sx - sw;
			int32_t sy2 = (fliph == false) ? sy + sh : sy - sh;
			g->drawImage(img, dx, dy, dx + dw, dy + dh, sx, sy, sx2, sy2, nullptr);
			g->dispose();
		}
		composite(sg2d, surfaceData, srcPixels, compositingBounds);
	}
	return true;
}

$Rectangle2D* CompositeCRenderer::padBounds($SunGraphics2D* sg2d, $Shape* shape$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, shape, shape$renamed);
	$assign(shape, $nc(sg2d)->transformShape(shape));
	int32_t paddingHalf = CompositeCRenderer::fPaddingHalf;
	int32_t padding = CompositeCRenderer::fPadding;
	if (sg2d->stroke != nullptr) {
		if ($instanceOf($BasicStroke, sg2d->stroke)) {
			int32_t width = $cast(int32_t, ($nc(($cast($BasicStroke, sg2d->stroke)))->getLineWidth() + 0.5f));
			int32_t widthHalf = width / 2 + 1;
			paddingHalf += widthHalf;
			padding += 2 * widthHalf;
		} else {
			$assign(shape, $nc(sg2d->stroke)->createStrokedShape(shape));
		}
	}
	$var($Rectangle2D, bounds, $nc(shape)->getBounds2D());
	double var$0 = bounds->getX() - paddingHalf;
	double var$1 = bounds->getY() - paddingHalf;
	double var$2 = bounds->getWidth() + padding;
	$nc(bounds)->setRect(var$0, var$1, var$2, bounds->getHeight() + padding);
	double newX = $Math::floor(bounds->getX());
	double newY = $Math::floor(bounds->getY());
	double var$3 = $Math::ceil(bounds->getWidth());
	double newW = var$3 + (newX < bounds->getX() ? 1 : 0);
	double var$4 = $Math::ceil(bounds->getHeight());
	double newH = var$4 + (newY < bounds->getY() ? 1 : 0);
	bounds->setRect(newX, newY, newW, newH);
	return bounds;
}

void CompositeCRenderer::clipBounds($SunGraphics2D* sg2d, $Rectangle2D* bounds) {
	int32_t var$0 = $cast(int32_t, $nc(bounds)->getX());
	int32_t var$1 = $cast(int32_t, bounds->getY());
	int32_t var$2 = $cast(int32_t, bounds->getWidth());
	$var($Region, intersection, $nc($nc(sg2d)->clipRegion)->getIntersectionXYWH(var$0, var$1, var$2, $cast(int32_t, bounds->getHeight())));
	double var$3 = (double)$nc(intersection)->getLoX();
	double var$4 = (double)intersection->getLoY();
	double var$5 = (double)intersection->getWidth();
	$nc(bounds)->setRect(var$3, var$4, var$5, (double)intersection->getHeight());
}

$BufferedImage* CompositeCRenderer::getSurfacePixels($SunGraphics2D* sg2d, $OSXSurfaceData* surfaceData, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($BufferedImage, dstInPixels, $nc(surfaceData)->getCompositingDstInImage(w, h));
	return surfaceData->copyArea(sg2d, x, y, w, h, dstInPixels);
}

void CompositeCRenderer::composite($SunGraphics2D* sg2d, $OSXSurfaceData* surfaceData, $BufferedImage* srcPixels, $Rectangle2D* compositingBounds) {
	$useLocalCurrentObjectStackCache();
	int32_t x = $cast(int32_t, $nc(compositingBounds)->getX());
	int32_t y = $cast(int32_t, compositingBounds->getY());
	int32_t w = $cast(int32_t, compositingBounds->getWidth());
	int32_t h = $cast(int32_t, compositingBounds->getHeight());
	bool succeded = false;
	$var($Composite, composite, $nc(sg2d)->getComposite());
	if ($instanceOf($XORComposite, composite)) {
		try {
			succeded = $nc(surfaceData)->xorSurfacePixels(sg2d, srcPixels, x, y, w, h, $nc($($nc(($cast($XORComposite, composite)))->getXorColor()))->getRGB());
		} catch ($Exception& e) {
			succeded = false;
		}
	}
	if (succeded == false) {
		$var($BufferedImage, dstInPixels, getSurfacePixels(sg2d, surfaceData, x, y, w, h));
		$var($BufferedImage, dstOutPixels, nullptr);
		if ($instanceOf($XORComposite, composite)) {
			try {
				$var($OSXSurfaceData, osxsd, ($cast($OSXSurfaceData, $BufImgSurfaceData::createData(dstInPixels))));
				succeded = $nc(osxsd)->xorSurfacePixels(sg2d, srcPixels, 0, 0, w, h, $nc($($nc(($cast($XORComposite, composite)))->getXorColor()))->getRGB());
				$assign(dstOutPixels, dstInPixels);
			} catch ($Exception& e) {
				succeded = false;
			}
		}
		if (succeded == false) {
			$assign(dstOutPixels, $nc(surfaceData)->getCompositingDstOutImage(w, h));
			$var($WritableRaster, srcRaster, $nc(srcPixels)->getRaster());
			$var($WritableRaster, dstInRaster, $nc(dstInPixels)->getRaster());
			$var($WritableRaster, dstOutRaster, $nc(dstOutPixels)->getRaster());
			$var($ColorModel, var$0, srcPixels->getColorModel());
			$var($ColorModel, var$1, dstOutPixels->getColorModel());
			$var($CompositeContext, compositeContext, $nc(composite)->createContext(var$0, var$1, $(sg2d->getRenderingHints())));
			$nc(compositeContext)->compose(srcRaster, dstInRaster, dstOutRaster);
			compositeContext->dispose();
		}
		$var($Composite, savedComposite, sg2d->getComposite());
		$var($AffineTransform, savedTM, sg2d->getTransform());
		int32_t savedCX = sg2d->constrainX;
		int32_t savedCY = sg2d->constrainY;
		{
			$init($AlphaComposite);
			sg2d->setComposite($AlphaComposite::SrcOver);
			sg2d->constrainX = 0;
			sg2d->constrainY = 0;
			sg2d->setTransform(CompositeCRenderer::sIdentityMatrix);
			sg2d->drawImage(dstOutPixels, x, y, x + w, y + h, 0, 0, w, h, nullptr);
		}
		sg2d->constrainX = savedCX;
		sg2d->constrainY = savedCY;
		sg2d->setTransform(savedTM);
		sg2d->setComposite(savedComposite);
	}
}

void clinit$CompositeCRenderer($Class* class$) {
	$assignStatic(CompositeCRenderer::sIdentityMatrix, $new($AffineTransform));
}

CompositeCRenderer::CompositeCRenderer() {
}

$Class* CompositeCRenderer::load$($String* name, bool initialize) {
	$loadClass(CompositeCRenderer, name, initialize, &_CompositeCRenderer_ClassInfo_, clinit$CompositeCRenderer, allocate$CompositeCRenderer);
	return class$;
}

$Class* CompositeCRenderer::class$ = nullptr;

	} // java2d
} // sun
#include <sun/java2d/pipe/TextRenderer.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _TextRenderer_FieldInfo_[] = {
	{"outpipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, 0, $field(TextRenderer, outpipe)},
	{}
};

$MethodInfo _TextRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/CompositePipe;)V", nullptr, $PUBLIC, $method(static_cast<void(TextRenderer::*)($CompositePipe*)>(&TextRenderer::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _TextRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.TextRenderer",
	"sun.java2d.pipe.GlyphListPipe",
	nullptr,
	_TextRenderer_FieldInfo_,
	_TextRenderer_MethodInfo_
};

$Object* allocate$TextRenderer($Class* clazz) {
	return $of($alloc(TextRenderer));
}

void TextRenderer::init$($CompositePipe* pipe) {
	$GlyphListPipe::init$();
	$set(this, outpipe, pipe);
}

void TextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	int32_t num = $nc(gl)->getNumGlyphs();
	$var($Region, clipRegion, $nc(sg2d)->getCompClip());
	int32_t cx1 = $nc(clipRegion)->getLoX();
	int32_t cy1 = clipRegion->getLoY();
	int32_t cx2 = clipRegion->getHiX();
	int32_t cy2 = clipRegion->getHiY();
	$var($Object, ctx, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			gl->startGlyphIteration();
			$var($ints, bounds, gl->getBounds(num));
			$var($Rectangle, r, $new($Rectangle, $nc(bounds)->get(0), bounds->get(1), bounds->get(2) - bounds->get(0), bounds->get(3) - bounds->get(1)));
			$var($Shape, s, sg2d->untransformShape(r));
			$assign(ctx, $nc(this->outpipe)->startSequence(sg2d, s, r, bounds));
			for (int32_t i = 0; i < num; ++i) {
				gl->setGlyphIndex(i);
				$var($ints, metrics, gl->getMetrics());
				int32_t gx1 = $nc(metrics)->get(0);
				int32_t gy1 = metrics->get(1);
				int32_t w = metrics->get(2);
				int32_t gx2 = gx1 + w;
				int32_t gy2 = gy1 + metrics->get(3);
				int32_t off = 0;
				if (gx1 < cx1) {
					off = cx1 - gx1;
					gx1 = cx1;
				}
				if (gy1 < cy1) {
					off += (cy1 - gy1) * w;
					gy1 = cy1;
				}
				if (gx2 > cx2) {
					gx2 = cx2;
				}
				if (gy2 > cy2) {
					gy2 = cy2;
				}
				bool var$1 = gx2 > gx1 && gy2 > gy1 && !gl->isColorGlyph(i);
				if (var$1 && $nc(this->outpipe)->needTile(ctx, gx1, gy1, gx2 - gx1, gy2 - gy1)) {
					$var($bytes, alpha, gl->getGrayBits());
					$nc(this->outpipe)->renderPathTile(ctx, alpha, off, w, gx1, gy1, gx2 - gx1, gy2 - gy1);
				} else {
					$nc(this->outpipe)->skipTile(ctx, gx1, gy1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (ctx != nullptr) {
				$nc(this->outpipe)->endSequence(ctx);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

TextRenderer::TextRenderer() {
}

$Class* TextRenderer::load$($String* name, bool initialize) {
	$loadClass(TextRenderer, name, initialize, &_TextRenderer_ClassInfo_, allocate$TextRenderer);
	return class$;
}

$Class* TextRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun
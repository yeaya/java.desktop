#include <sun/java2d/pipe/GlyphListLoopPipe.h>

#include <sun/awt/SunHints.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/DrawGlyphList.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/DrawGlyphListColor.h>
#include <sun/java2d/loops/DrawGlyphListLCD.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <jcpp.h>

#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB
#undef INTVAL_TEXT_ANTIALIAS_LCD_VRGB
#undef INTVAL_TEXT_ANTIALIAS_OFF
#undef INTVAL_TEXT_ANTIALIAS_ON

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $DrawGlyphList = ::sun::java2d::loops::DrawGlyphList;
using $DrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA;
using $DrawGlyphListColor = ::sun::java2d::loops::DrawGlyphListColor;
using $DrawGlyphListLCD = ::sun::java2d::loops::DrawGlyphListLCD;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $LoopBasedPipe = ::sun::java2d::pipe::LoopBasedPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _GlyphListLoopPipe_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GlyphListLoopPipe::*)()>(&GlyphListLoopPipe::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;I)V", nullptr, $PROTECTED},
	{"drawGlyphListSegment", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;IIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(GlyphListLoopPipe::*)($SunGraphics2D*,$GlyphList*,int32_t,int32_t,int32_t,bool)>(&GlyphListLoopPipe::drawGlyphListSegment))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GlyphListLoopPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.GlyphListLoopPipe",
	"sun.java2d.pipe.GlyphListPipe",
	"sun.java2d.pipe.LoopBasedPipe",
	nullptr,
	_GlyphListLoopPipe_MethodInfo_
};

$Object* allocate$GlyphListLoopPipe($Class* clazz) {
	return $of($alloc(GlyphListLoopPipe));
}

int32_t GlyphListLoopPipe::hashCode() {
	 return this->$GlyphListPipe::hashCode();
}

bool GlyphListLoopPipe::equals(Object$* arg0) {
	 return this->$GlyphListPipe::equals(arg0);
}

$Object* GlyphListLoopPipe::clone() {
	 return this->$GlyphListPipe::clone();
}

$String* GlyphListLoopPipe::toString() {
	 return this->$GlyphListPipe::toString();
}

void GlyphListLoopPipe::finalize() {
	this->$GlyphListPipe::finalize();
}

void GlyphListLoopPipe::init$() {
	$GlyphListPipe::init$();
}

void GlyphListLoopPipe::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl, int32_t aaHint) {
	int32_t prevLimit = 0;
	bool isColor = false;
	int32_t len = $nc(gl)->getNumGlyphs();
	gl->startGlyphIteration();
	if ($GlyphList::canContainColorGlyphs()) {
		for (int32_t i = 0; i < len; ++i) {
			bool newIsColor = gl->isColorGlyph(i);
			if (newIsColor != isColor) {
				drawGlyphListSegment(sg2d, gl, prevLimit, i, aaHint, isColor);
				prevLimit = i;
				isColor = newIsColor;
			}
		}
	}
	drawGlyphListSegment(sg2d, gl, prevLimit, len, aaHint, isColor);
}

void GlyphListLoopPipe::drawGlyphListSegment($SunGraphics2D* sg2d, $GlyphList* gl, int32_t fromglyph, int32_t toGlyph, int32_t aaHint, bool isColor) {
	if (fromglyph >= toGlyph) {
		return;
	}
	if (isColor) {
		$nc($nc($nc(sg2d)->loops)->drawGlyphListColorLoop)->DrawGlyphListColor$(sg2d, sg2d->surfaceData, gl, fromglyph, toGlyph);
	} else {
		switch (aaHint) {
		case $SunHints::INTVAL_TEXT_ANTIALIAS_OFF:
			{
				$nc($nc($nc(sg2d)->loops)->drawGlyphListLoop)->DrawGlyphList$(sg2d, sg2d->surfaceData, gl, fromglyph, toGlyph);
				return;
			}
		case $SunHints::INTVAL_TEXT_ANTIALIAS_ON:
			{
				$nc($nc($nc(sg2d)->loops)->drawGlyphListAALoop)->DrawGlyphListAA$(sg2d, sg2d->surfaceData, gl, fromglyph, toGlyph);
				return;
			}
		case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB:
			{}
		case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VRGB:
			{
				$nc($nc($nc(sg2d)->loops)->drawGlyphListLCDLoop)->DrawGlyphListLCD$(sg2d, sg2d->surfaceData, gl, fromglyph, toGlyph);
				return;
			}
		}
	}
}

GlyphListLoopPipe::GlyphListLoopPipe() {
}

$Class* GlyphListLoopPipe::load$($String* name, bool initialize) {
	$loadClass(GlyphListLoopPipe, name, initialize, &_GlyphListLoopPipe_ClassInfo_, allocate$GlyphListLoopPipe);
	return class$;
}

$Class* GlyphListLoopPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun
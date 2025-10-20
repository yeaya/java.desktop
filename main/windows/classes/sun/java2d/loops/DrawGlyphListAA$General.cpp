#include <sun/java2d/loops/DrawGlyphListAA$General.h>

#include <java/awt/Composite.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListAA$General_FieldInfo_[] = {
	{"maskop", "Lsun/java2d/loops/MaskFill;", nullptr, 0, $field(DrawGlyphListAA$General, maskop)},
	{}
};

$MethodInfo _DrawGlyphListAA$General_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphListAA$General::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListAA$General::init$))},
	{"DrawGlyphListAA", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawGlyphListAA$General_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListAA$General", "sun.java2d.loops.DrawGlyphListAA", "General", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListAA$General_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListAA$General",
	"sun.java2d.loops.DrawGlyphListAA",
	nullptr,
	_DrawGlyphListAA$General_FieldInfo_,
	_DrawGlyphListAA$General_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListAA$General_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListAA"
};

$Object* allocate$DrawGlyphListAA$General($Class* clazz) {
	return $of($alloc(DrawGlyphListAA$General));
}

void DrawGlyphListAA$General::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$DrawGlyphListAA::init$(srctype, comptype, dsttype);
	$set(this, maskop, $MaskFill::locate(srctype, comptype, dsttype));
}

void DrawGlyphListAA$General::DrawGlyphListAA$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) {
	$useLocalCurrentObjectStackCache();
	$var($Region, clip, $nc(sg2d)->getCompClip());
	int32_t cx1 = $nc(clip)->getLoX();
	int32_t cy1 = clip->getLoY();
	int32_t cx2 = clip->getHiX();
	int32_t cy2 = clip->getHiY();
	for (int32_t i = fromGlyph; i < toGlyph; ++i) {
		$nc(gl)->setGlyphIndex(i);
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
		if (gx2 > gx1 && gy2 > gy1) {
			$var($bytes, alpha, gl->getGrayBits());
			$nc(this->maskop)->MaskFill$(sg2d, dest, sg2d->composite, gx1, gy1, gx2 - gx1, gy2 - gy1, alpha, off, w);
		}
	}
}

DrawGlyphListAA$General::DrawGlyphListAA$General() {
}

$Class* DrawGlyphListAA$General::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListAA$General, name, initialize, &_DrawGlyphListAA$General_ClassInfo_, allocate$DrawGlyphListAA$General);
	return class$;
}

$Class* DrawGlyphListAA$General::class$ = nullptr;

		} // loops
	} // java2d
} // sun
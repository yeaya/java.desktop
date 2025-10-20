#include <sun/java2d/loops/DrawGlyphListColor$General.h>

#include <java/awt/AlphaComposite.h>
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
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListColor.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphListColor = ::sun::java2d::loops::DrawGlyphListColor;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _DrawGlyphListColor$General_FieldInfo_[] = {
	{"blit", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(DrawGlyphListColor$General, blit)},
	{}
};

$MethodInfo _DrawGlyphListColor$General_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(DrawGlyphListColor$General::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&DrawGlyphListColor$General::init$))},
	{"DrawGlyphListColor", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DrawGlyphListColor$General_InnerClassesInfo_[] = {
	{"sun.java2d.loops.DrawGlyphListColor$General", "sun.java2d.loops.DrawGlyphListColor", "General", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DrawGlyphListColor$General_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.DrawGlyphListColor$General",
	"sun.java2d.loops.DrawGlyphListColor",
	nullptr,
	_DrawGlyphListColor$General_FieldInfo_,
	_DrawGlyphListColor$General_MethodInfo_,
	nullptr,
	nullptr,
	_DrawGlyphListColor$General_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.DrawGlyphListColor"
};

$Object* allocate$DrawGlyphListColor$General($Class* clazz) {
	return $of($alloc(DrawGlyphListColor$General));
}

void DrawGlyphListColor$General::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$DrawGlyphListColor::init$(srctype, comptype, dsttype);
	$init($SurfaceType);
	$init($CompositeType);
	$set(this, blit, $Blit::locate($SurfaceType::IntArgbPre, $CompositeType::SrcOverNoEa, dsttype));
}

void DrawGlyphListColor$General::DrawGlyphListColor$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) {
	$useLocalCurrentObjectStackCache();
	$var($Region, clip, $nc(sg2d)->getCompClip());
	int32_t cx1 = $nc(clip)->getLoX();
	int32_t cy1 = clip->getLoY();
	int32_t cx2 = clip->getHiX();
	int32_t cy2 = clip->getHiY();
	for (int32_t i = fromGlyph; i < toGlyph; ++i) {
		$nc(gl)->setGlyphIndex(i);
		$var($ints, metrics, gl->getMetrics());
		int32_t x = $nc(metrics)->get(0);
		int32_t y = metrics->get(1);
		int32_t w = metrics->get(2);
		int32_t h = metrics->get(3);
		int32_t gx1 = x;
		int32_t gy1 = y;
		int32_t gx2 = x + w;
		int32_t gy2 = y + h;
		if (gx1 < cx1) {
			gx1 = cx1;
		}
		if (gy1 < cy1) {
			gy1 = cy1;
		}
		if (gx2 > cx2) {
			gx2 = cx2;
		}
		if (gy2 > cy2) {
			gy2 = cy2;
		}
		if (gx2 > gx1 && gy2 > gy1) {
			$init($AlphaComposite);
			$nc(this->blit)->Blit$($(gl->getColorGlyphData()), dest, $AlphaComposite::SrcOver, clip, gx1 - x, gy1 - y, gx1, gy1, gx2 - gx1, gy2 - gy1);
		}
	}
}

DrawGlyphListColor$General::DrawGlyphListColor$General() {
}

$Class* DrawGlyphListColor$General::load$($String* name, bool initialize) {
	$loadClass(DrawGlyphListColor$General, name, initialize, &_DrawGlyphListColor$General_ClassInfo_, allocate$DrawGlyphListColor$General);
	return class$;
}

$Class* DrawGlyphListColor$General::class$ = nullptr;

		} // loops
	} // java2d
} // sun
#include <sun/java2d/loops/BlitBg$General.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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
#include <sun/java2d/loops/BlitBg.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef PLAIN

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $BlitBg = ::sun::java2d::loops::BlitBg;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillRect = ::sun::java2d::loops::FillRect;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _BlitBg$General_FieldInfo_[] = {
	{"compositeType", "Lsun/java2d/loops/CompositeType;", nullptr, 0, $field(BlitBg$General, compositeType)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC, $staticField(BlitBg$General, defaultFont)},
	{}
};

$MethodInfo _BlitBg$General_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(BlitBg$General::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&BlitBg$General::init$))},
	{"BlitBg", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BlitBg$General_InnerClassesInfo_[] = {
	{"sun.java2d.loops.BlitBg$General", "sun.java2d.loops.BlitBg", "General", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BlitBg$General_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.BlitBg$General",
	"sun.java2d.loops.BlitBg",
	nullptr,
	_BlitBg$General_FieldInfo_,
	_BlitBg$General_MethodInfo_,
	nullptr,
	nullptr,
	_BlitBg$General_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.BlitBg"
};

$Object* allocate$BlitBg$General($Class* clazz) {
	return $of($alloc(BlitBg$General));
}

$Font* BlitBg$General::defaultFont = nullptr;

void BlitBg$General::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$BlitBg::init$(srctype, comptype, dsttype);
	$set(this, compositeType, comptype);
}

void BlitBg$General::BlitBg$($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip, int32_t bgArgb, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, dstModel, $nc(dstData)->getColorModel());
	bool bgHasAlpha = ((int32_t)((uint32_t)bgArgb >> 24)) != 255;
	if (!$nc(dstModel)->hasAlpha() && bgHasAlpha) {
		$assign(dstModel, $ColorModel::getRGBdefault());
	}
	$var($WritableRaster, wr, $nc(dstModel)->createCompatibleWritableRaster(width, height));
	bool isPremult = dstModel->isAlphaPremultiplied();
	$var($BufferedImage, bimg, $new($BufferedImage, dstModel, wr, isPremult, ($Hashtable*)nullptr));
	$var($SurfaceData, tmpData, $BufImgSurfaceData::createData(bimg));
	$var($Color, bgColor, $new($Color, bgArgb, bgHasAlpha));
	$var($SunGraphics2D, sg2d, $new($SunGraphics2D, tmpData, bgColor, bgColor, BlitBg$General::defaultFont));
	$init($SurfaceType);
	$init($CompositeType);
	$var($FillRect, fillop, $FillRect::locate($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $($nc(tmpData)->getSurfaceType())));
	$var($SurfaceType, var$0, $nc(srcData)->getSurfaceType());
	$var($CompositeType, var$1, $CompositeType::SrcOverNoEa);
	$var($Blit, combineop, $Blit::getFromCache(var$0, var$1, $($nc(tmpData)->getSurfaceType())));
	$var($SurfaceType, var$2, $nc(tmpData)->getSurfaceType());
	$var($CompositeType, var$3, this->compositeType);
	$var($Blit, blitop, $Blit::getFromCache(var$2, var$3, $(dstData->getSurfaceType())));
	$nc(fillop)->FillRect$(sg2d, tmpData, 0, 0, width, height);
	$init($AlphaComposite);
	$nc(combineop)->Blit$(srcData, tmpData, $AlphaComposite::SrcOver, nullptr, srcx, srcy, 0, 0, width, height);
	$nc(blitop)->Blit$(tmpData, dstData, comp, clip, 0, 0, dstx, dsty, width, height);
}

void clinit$BlitBg$General($Class* class$) {
	$assignStatic(BlitBg$General::defaultFont, $new($Font, "Dialog"_s, $Font::PLAIN, 12));
}

BlitBg$General::BlitBg$General() {
}

$Class* BlitBg$General::load$($String* name, bool initialize) {
	$loadClass(BlitBg$General, name, initialize, &_BlitBg$General_ClassInfo_, clinit$BlitBg$General, allocate$BlitBg$General);
	return class$;
}

$Class* BlitBg$General::class$ = nullptr;

		} // loops
	} // java2d
} // sun
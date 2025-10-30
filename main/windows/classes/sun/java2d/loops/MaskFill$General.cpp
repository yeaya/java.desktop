#include <sun/java2d/loops/MaskFill$General.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/image/BufferedImage.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillRect = ::sun::java2d::loops::FillRect;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _MaskFill$General_FieldInfo_[] = {
	{"fillop", "Lsun/java2d/loops/FillRect;", nullptr, 0, $field(MaskFill$General, fillop)},
	{"maskop", "Lsun/java2d/loops/MaskBlit;", nullptr, 0, $field(MaskFill$General, maskop)},
	{}
};

$MethodInfo _MaskFill$General_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(MaskFill$General::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskFill$General::init$))},
	{"MaskFill", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;IIII[BII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFill$General_InnerClassesInfo_[] = {
	{"sun.java2d.loops.MaskFill$General", "sun.java2d.loops.MaskFill", "General", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MaskFill$General_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.MaskFill$General",
	"sun.java2d.loops.MaskFill",
	nullptr,
	_MaskFill$General_FieldInfo_,
	_MaskFill$General_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFill$General_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.MaskFill"
};

$Object* allocate$MaskFill$General($Class* clazz) {
	return $of($alloc(MaskFill$General));
}

void MaskFill$General::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$MaskFill::init$(srctype, comptype, dsttype);
	$init($CompositeType);
	$init($SurfaceType);
	$set(this, fillop, $FillRect::locate(srctype, $CompositeType::SrcNoEa, $SurfaceType::IntArgb));
	$set(this, maskop, $MaskBlit::locate($SurfaceType::IntArgb, comptype, dsttype));
}

void MaskFill$General::MaskFill$($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t offset, int32_t scan) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dstBI, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
	$var($SurfaceData, tmpData, $BufImgSurfaceData::createData(dstBI));
	$var($Region, clip, $nc(sg2d)->clipRegion);
	$set(sg2d, clipRegion, nullptr);
	int32_t pixel = sg2d->pixel;
	sg2d->pixel = $nc(tmpData)->pixelFor($(sg2d->getColor()));
	$nc(this->fillop)->FillRect$(sg2d, tmpData, 0, 0, w, h);
	sg2d->pixel = pixel;
	$set(sg2d, clipRegion, clip);
	$nc(this->maskop)->MaskBlit$(tmpData, sData, comp, nullptr, 0, 0, x, y, w, h, mask, offset, scan);
}

MaskFill$General::MaskFill$General() {
}

$Class* MaskFill$General::load$($String* name, bool initialize) {
	$loadClass(MaskFill$General, name, initialize, &_MaskFill$General_ClassInfo_, allocate$MaskFill$General);
	return class$;
}

$Class* MaskFill$General::class$ = nullptr;

		} // loops
	} // java2d
} // sun
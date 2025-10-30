#include <sun/java2d/SunCompositeContext.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $CompositeContext = ::java::awt::CompositeContext;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {

$FieldInfo _SunCompositeContext_FieldInfo_[] = {
	{"srcCM", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(SunCompositeContext, srcCM)},
	{"dstCM", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(SunCompositeContext, dstCM)},
	{"composite", "Ljava/awt/Composite;", nullptr, 0, $field(SunCompositeContext, composite)},
	{"comptype", "Lsun/java2d/loops/CompositeType;", nullptr, 0, $field(SunCompositeContext, comptype)},
	{}
};

$MethodInfo _SunCompositeContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/AlphaComposite;Ljava/awt/image/ColorModel;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(static_cast<void(SunCompositeContext::*)($AlphaComposite*,$ColorModel*,$ColorModel*)>(&SunCompositeContext::init$))},
	{"<init>", "(Lsun/java2d/loops/XORComposite;Ljava/awt/image/ColorModel;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(static_cast<void(SunCompositeContext::*)($XORComposite*,$ColorModel*,$ColorModel*)>(&SunCompositeContext::init$))},
	{"compose", "(Ljava/awt/image/Raster;Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunCompositeContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.SunCompositeContext",
	"java.lang.Object",
	"java.awt.CompositeContext",
	_SunCompositeContext_FieldInfo_,
	_SunCompositeContext_MethodInfo_
};

$Object* allocate$SunCompositeContext($Class* clazz) {
	return $of($alloc(SunCompositeContext));
}

void SunCompositeContext::init$($AlphaComposite* ac, $ColorModel* s, $ColorModel* d) {
	if (s == nullptr) {
		$throwNew($NullPointerException, "Source color model cannot be null"_s);
	}
	if (d == nullptr) {
		$throwNew($NullPointerException, "Destination color model cannot be null"_s);
	}
	$set(this, srcCM, s);
	$set(this, dstCM, d);
	$set(this, composite, ac);
	$set(this, comptype, $CompositeType::forAlphaComposite(ac));
}

void SunCompositeContext::init$($XORComposite* xc, $ColorModel* s, $ColorModel* d) {
	if (s == nullptr) {
		$throwNew($NullPointerException, "Source color model cannot be null"_s);
	}
	if (d == nullptr) {
		$throwNew($NullPointerException, "Destination color model cannot be null"_s);
	}
	$set(this, srcCM, s);
	$set(this, dstCM, d);
	$set(this, composite, xc);
	$init($CompositeType);
	$set(this, comptype, $CompositeType::Xor);
}

void SunCompositeContext::dispose() {
}

void SunCompositeContext::compose($Raster* src1, $Raster* src2, $WritableRaster* dst) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, src, nullptr);
	int32_t w = 0;
	int32_t h = 0;
	if (!$equals(src2, dst)) {
		$nc(dst)->setDataElements(0, 0, src2);
	}
	if ($instanceOf($WritableRaster, src1)) {
		$assign(src, $cast($WritableRaster, src1));
	} else {
		$assign(src, $nc(src1)->createCompatibleWritableRaster());
		$nc(src)->setDataElements(0, 0, src1);
	}
	int32_t var$0 = $nc(src)->getWidth();
	w = $Math::min(var$0, $nc(src2)->getWidth());
	int32_t var$1 = $nc(src)->getHeight();
	h = $Math::min(var$1, $nc(src2)->getHeight());
	$var($BufferedImage, srcImg, $new($BufferedImage, this->srcCM, src, $nc(this->srcCM)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	$var($BufferedImage, dstImg, $new($BufferedImage, this->dstCM, dst, $nc(this->dstCM)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	$var($SurfaceData, srcData, $BufImgSurfaceData::createData(srcImg));
	$var($SurfaceData, dstData, $BufImgSurfaceData::createData(dstImg));
	$var($SurfaceType, var$2, $nc(srcData)->getSurfaceType());
	$var($CompositeType, var$3, this->comptype);
	$var($Blit, blit, $Blit::getFromCache(var$2, var$3, $($nc(dstData)->getSurfaceType())));
	$nc(blit)->Blit$(srcData, dstData, this->composite, nullptr, 0, 0, 0, 0, w, h);
}

SunCompositeContext::SunCompositeContext() {
}

$Class* SunCompositeContext::load$($String* name, bool initialize) {
	$loadClass(SunCompositeContext, name, initialize, &_SunCompositeContext_ClassInfo_, allocate$SunCompositeContext);
	return class$;
}

$Class* SunCompositeContext::class$ = nullptr;

	} // java2d
} // sun
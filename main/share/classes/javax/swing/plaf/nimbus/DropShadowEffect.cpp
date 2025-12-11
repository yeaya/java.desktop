#include <javax/swing/plaf/nimbus/DropShadowEffect.h>

#include <java/awt/Color.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <javax/swing/plaf/nimbus/Effect$ArrayCache.h>
#include <javax/swing/plaf/nimbus/Effect$EffectType.h>
#include <javax/swing/plaf/nimbus/Effect.h>
#include <javax/swing/plaf/nimbus/EffectUtils.h>
#include <javax/swing/plaf/nimbus/ShadowEffect.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB
#undef UNDER

using $Color = ::java::awt::Color;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Effect$ArrayCache = ::javax::swing::plaf::nimbus::Effect$ArrayCache;
using $Effect$EffectType = ::javax::swing::plaf::nimbus::Effect$EffectType;
using $EffectUtils = ::javax::swing::plaf::nimbus::EffectUtils;
using $ShadowEffect = ::javax::swing::plaf::nimbus::ShadowEffect;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _DropShadowEffect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DropShadowEffect::*)()>(&DropShadowEffect::init$))},
	{"applyEffect", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;II)Ljava/awt/image/BufferedImage;", nullptr, 0},
	{"getEffectType", "()Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, 0},
	{}
};

$ClassInfo _DropShadowEffect_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.DropShadowEffect",
	"javax.swing.plaf.nimbus.ShadowEffect",
	nullptr,
	nullptr,
	_DropShadowEffect_MethodInfo_
};

$Object* allocate$DropShadowEffect($Class* clazz) {
	return $of($alloc(DropShadowEffect));
}

void DropShadowEffect::init$() {
	$ShadowEffect::init$();
}

$Effect$EffectType* DropShadowEffect::getEffectType() {
	$init($Effect$EffectType);
	return $Effect$EffectType::UNDER;
}

$BufferedImage* DropShadowEffect::applyEffect($BufferedImage* src, $BufferedImage* dst$renamed, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dst, dst$renamed);
	if (src == nullptr || $nc(src)->getType() != $BufferedImage::TYPE_INT_ARGB) {
		$throwNew($IllegalArgumentException, "Effect only works with source images of type BufferedImage.TYPE_INT_ARGB."_s);
	}
	if (dst != nullptr && dst->getType() != $BufferedImage::TYPE_INT_ARGB) {
		$throwNew($IllegalArgumentException, "Effect only works with destination images of type BufferedImage.TYPE_INT_ARGB."_s);
	}
	double trangleAngle = $Math::toRadians((double)(this->angle - 90));
	int32_t offsetX = $cast(int32_t, ($Math::sin(trangleAngle) * this->distance));
	int32_t offsetY = $cast(int32_t, ($Math::cos(trangleAngle) * this->distance));
	int32_t tmpOffX = offsetX + this->size;
	int32_t tmpOffY = offsetX + this->size;
	int32_t tmpW = w + offsetX + this->size + this->size;
	int32_t tmpH = h + offsetX + this->size;
	$var($ints, lineBuf, $nc($(getArrayCache()))->getTmpIntArray(w));
	$var($bytes, tmpBuf1, $nc($(getArrayCache()))->getTmpByteArray1(tmpW * tmpH));
	$Arrays::fill(tmpBuf1, (int8_t)0);
	$var($bytes, tmpBuf2, $nc($(getArrayCache()))->getTmpByteArray2(tmpW * tmpH));
	$var($Raster, srcRaster, $nc(src)->getRaster());
	for (int32_t y = 0; y < h; ++y) {
		int32_t dy = (y + tmpOffY);
		int32_t offset = dy * tmpW;
		$nc(srcRaster)->getDataElements(0, y, w, 1, lineBuf);
		for (int32_t x = 0; x < w; ++x) {
			int32_t dx = x + tmpOffX;
			$nc(tmpBuf1)->set(offset + dx, (int8_t)((int32_t)((uint32_t)((int32_t)($nc(lineBuf)->get(x) & (uint32_t)(int32_t)0xFF000000)) >> 24)));
		}
	}
	$var($floats, kernel, $EffectUtils::createGaussianKernel(this->size));
	$EffectUtils::blur(tmpBuf1, tmpBuf2, tmpW, tmpH, kernel, this->size);
	$EffectUtils::blur(tmpBuf2, tmpBuf1, tmpH, tmpW, kernel, this->size);
	float spread = $Math::min(1 / (1 - (0.01f * this->spread)), (float)255);
	for (int32_t i = 0; i < $nc(tmpBuf1)->length; ++i) {
		int32_t val = $cast(int32_t, (((int32_t)((int32_t)tmpBuf1->get(i) & (uint32_t)255)) * spread));
		tmpBuf1->set(i, (val > 255) ? (int8_t)255 : (int8_t)val);
	}
	if (dst == nullptr) {
		$assign(dst, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
	}
	$var($WritableRaster, shadowRaster, $nc(dst)->getRaster());
	int32_t red = $nc(this->color)->getRed();
	int32_t green = $nc(this->color)->getGreen();
	int32_t blue = $nc(this->color)->getBlue();
	for (int32_t y = 0; y < h; ++y) {
		int32_t srcY = y + tmpOffY;
		int32_t shadowOffset = (srcY - offsetY) * tmpW;
		for (int32_t x = 0; x < w; ++x) {
			int32_t srcX = x + tmpOffX;
			$nc(lineBuf)->set(x, ((($nc(tmpBuf1)->get(shadowOffset + (srcX - offsetX)) << 24) | (red << 16)) | (green << 8)) | blue);
		}
		$nc(shadowRaster)->setDataElements(0, y, w, 1, lineBuf);
	}
	return dst;
}

DropShadowEffect::DropShadowEffect() {
}

$Class* DropShadowEffect::load$($String* name, bool initialize) {
	$loadClass(DropShadowEffect, name, initialize, &_DropShadowEffect_ClassInfo_, allocate$DropShadowEffect);
	return class$;
}

$Class* DropShadowEffect::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
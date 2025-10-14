#include <sun/font/GlyphLayout$SDCache.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/GlyphLayout$SDCache$SDKey.h>
#include <sun/font/GlyphLayout.h>
#include <jcpp.h>

#undef ZERO_DELTA

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontUtilities = ::sun::font::FontUtilities;
using $GlyphLayout = ::sun::font::GlyphLayout;
using $GlyphLayout$SDCache$SDKey = ::sun::font::GlyphLayout$SDCache$SDKey;

namespace sun {
	namespace font {

$FieldInfo _GlyphLayout$SDCache_FieldInfo_[] = {
	{"key_font", "Ljava/awt/Font;", nullptr, $PUBLIC, $field(GlyphLayout$SDCache, key_font)},
	{"key_frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC, $field(GlyphLayout$SDCache, key_frc)},
	{"dtx", "Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $field(GlyphLayout$SDCache, dtx)},
	{"gtx", "Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $field(GlyphLayout$SDCache, gtx)},
	{"delta", "Ljava/awt/geom/Point2D$Float;", nullptr, $PUBLIC, $field(GlyphLayout$SDCache, delta)},
	{"sd", "Lsun/font/FontStrikeDesc;", nullptr, $PUBLIC, $field(GlyphLayout$SDCache, sd)},
	{"ZERO_DELTA", "Ljava/awt/geom/Point2D$Float;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GlyphLayout$SDCache, ZERO_DELTA)},
	{"cacheRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/util/concurrent/ConcurrentHashMap<Lsun/font/GlyphLayout$SDCache$SDKey;Lsun/font/GlyphLayout$SDCache;>;>;", $PRIVATE | $STATIC, $staticField(GlyphLayout$SDCache, cacheRef)},
	{}
};

$MethodInfo _GlyphLayout$SDCache_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)V", nullptr, $PRIVATE, $method(static_cast<void(GlyphLayout$SDCache::*)($Font*,$FontRenderContext*)>(&GlyphLayout$SDCache::init$))},
	{"get", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)Lsun/font/GlyphLayout$SDCache;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GlyphLayout$SDCache*(*)($Font*,$FontRenderContext*)>(&GlyphLayout$SDCache::get))},
	{}
};

$InnerClassInfo _GlyphLayout$SDCache_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$SDCache", "sun.font.GlyphLayout", "SDCache", $PRIVATE | $STATIC | $FINAL},
	{"sun.font.GlyphLayout$SDCache$SDKey", "sun.font.GlyphLayout$SDCache", "SDKey", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _GlyphLayout$SDCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.GlyphLayout$SDCache",
	"java.lang.Object",
	nullptr,
	_GlyphLayout$SDCache_FieldInfo_,
	_GlyphLayout$SDCache_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout$SDCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout"
};

$Object* allocate$GlyphLayout$SDCache($Class* clazz) {
	return $of($alloc(GlyphLayout$SDCache));
}

$Point2D$Float* GlyphLayout$SDCache::ZERO_DELTA = nullptr;
$SoftReference* GlyphLayout$SDCache::cacheRef = nullptr;

void GlyphLayout$SDCache::init$($Font* font, $FontRenderContext* frc) {
	$set(this, key_font, font);
	$set(this, key_frc, frc);
	$set(this, dtx, $nc(frc)->getTransform());
	double var$0 = $nc(this->dtx)->getScaleX();
	double var$1 = $nc(this->dtx)->getShearY();
	double var$2 = $nc(this->dtx)->getShearX();
	$nc(this->dtx)->setTransform(var$0, var$1, var$2, $nc(this->dtx)->getScaleY(), (double)0, (double)0);
	float ptSize = $nc(font)->getSize2D();
	if (font->isTransformed()) {
		$set(this, gtx, font->getTransform());
		$nc(this->gtx)->scale(ptSize, ptSize);
		float var$3 = (float)$nc(this->gtx)->getTranslateX();
		$set(this, delta, $new($Point2D$Float, var$3, (float)$nc(this->gtx)->getTranslateY()));
		double var$4 = $nc(this->gtx)->getScaleX();
		double var$5 = $nc(this->gtx)->getShearY();
		double var$6 = $nc(this->gtx)->getShearX();
		$nc(this->gtx)->setTransform(var$4, var$5, var$6, $nc(this->gtx)->getScaleY(), (double)0, (double)0);
		$nc(this->gtx)->preConcatenate(this->dtx);
	} else {
		$set(this, delta, GlyphLayout$SDCache::ZERO_DELTA);
		$set(this, gtx, $new($AffineTransform, this->dtx));
		$nc(this->gtx)->scale(ptSize, ptSize);
	}
	$var($Object, var$7, frc->getAntiAliasingHint());
	$var($Font2D, var$8, $FontUtilities::getFont2D(font));
	int32_t aa = $FontStrikeDesc::getAAHintIntVal(var$7, var$8, $cast(int32_t, $Math::abs(ptSize)));
	int32_t fm = $FontStrikeDesc::getFMHintIntVal($(frc->getFractionalMetricsHint()));
	$set(this, sd, $new($FontStrikeDesc, this->dtx, this->gtx, font->getStyle(), aa, fm));
}

GlyphLayout$SDCache* GlyphLayout$SDCache::get($Font* font, $FontRenderContext* frc$renamed) {
	$init(GlyphLayout$SDCache);
	$var($FontRenderContext, frc, frc$renamed);
	if ($nc(frc)->isTransformed()) {
		$var($AffineTransform, transform, frc->getTransform());
		bool var$0 = $nc(transform)->getTranslateX() != 0;
		if (var$0 || $nc(transform)->getTranslateY() != 0) {
			double var$1 = transform->getScaleX();
			double var$2 = transform->getShearY();
			double var$3 = transform->getShearX();
			$assign(transform, $new($AffineTransform, var$1, var$2, var$3, transform->getScaleY(), (double)0, (double)0));
			$var($AffineTransform, var$4, transform);
			$var($Object, var$5, frc->getAntiAliasingHint());
			$assign(frc, $new($FontRenderContext, var$4, var$5, $(frc->getFractionalMetricsHint())));
		}
	}
	$var($GlyphLayout$SDCache$SDKey, key, $new($GlyphLayout$SDCache$SDKey, font, frc));
	$var($ConcurrentHashMap, cache, nullptr);
	$var(GlyphLayout$SDCache, res, nullptr);
	if (GlyphLayout$SDCache::cacheRef != nullptr) {
		$assign(cache, $cast($ConcurrentHashMap, $nc(GlyphLayout$SDCache::cacheRef)->get()));
		if (cache != nullptr) {
			$assign(res, $cast(GlyphLayout$SDCache, cache->get(key)));
		}
	}
	if (res == nullptr) {
		$assign(res, $new(GlyphLayout$SDCache, font, frc));
		if (cache == nullptr) {
			$assign(cache, $new($ConcurrentHashMap, 10));
			$assignStatic(GlyphLayout$SDCache::cacheRef, $new($SoftReference, cache));
		} else if (cache->size() >= 512) {
			cache->clear();
		}
		cache->put(key, res);
	}
	return res;
}

void clinit$GlyphLayout$SDCache($Class* class$) {
	$assignStatic(GlyphLayout$SDCache::ZERO_DELTA, $new($Point2D$Float));
}

GlyphLayout$SDCache::GlyphLayout$SDCache() {
}

$Class* GlyphLayout$SDCache::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout$SDCache, name, initialize, &_GlyphLayout$SDCache_ClassInfo_, clinit$GlyphLayout$SDCache, allocate$GlyphLayout$SDCache);
	return class$;
}

$Class* GlyphLayout$SDCache::class$ = nullptr;

	} // font
} // sun
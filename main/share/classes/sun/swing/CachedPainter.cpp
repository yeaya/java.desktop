#include <sun/swing/CachedPainter.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/Math.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/swing/CachedPainter$PainterMultiResolutionCachedImage.h>
#include <sun/swing/ImageCache.h>
#include <jcpp.h>

#undef IMAGE_INCOMPATIBLE
#undef IMAGE_RESTORED
#undef TYPE_INT_RGB

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CachedPainter$PainterMultiResolutionCachedImage = ::sun::swing::CachedPainter$PainterMultiResolutionCachedImage;
using $ImageCache = ::sun::swing::ImageCache;

namespace sun {
	namespace swing {

$FieldInfo _CachedPainter_FieldInfo_[] = {
	{"cacheMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Lsun/swing/ImageCache;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CachedPainter, cacheMap)},
	{}
};

$MethodInfo _CachedPainter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CachedPainter::*)(int32_t)>(&CachedPainter::init$))},
	{"createImage", "(Ljava/awt/Component;IILjava/awt/GraphicsConfiguration;[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"flush", "()V", nullptr, $PROTECTED},
	{"getCache", "(Ljava/lang/Object;)Lsun/swing/ImageCache;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ImageCache*(*)(Object$*)>(&CachedPainter::getCache))},
	{"getGraphicsConfiguration", "(Ljava/awt/Component;)Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $method(static_cast<$GraphicsConfiguration*(CachedPainter::*)($Component*)>(&CachedPainter::getGraphicsConfiguration))},
	{"getImage", "(Ljava/lang/Object;Ljava/awt/Component;IIII[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<$Image*(CachedPainter::*)(Object$*,$Component*,int32_t,int32_t,int32_t,int32_t,$ObjectArray*)>(&CachedPainter::getImage))},
	{"paint", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"paint0", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII[Ljava/lang/Object;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(CachedPainter::*)($Component*,$Graphics*,int32_t,int32_t,int32_t,int32_t,$ObjectArray*)>(&CachedPainter::paint0))},
	{"paintImage", "(Ljava/awt/Component;Ljava/awt/Graphics;IIIILjava/awt/Image;[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"paintToImage", "(Ljava/awt/Component;Ljava/awt/Image;Ljava/awt/Graphics;II[Ljava/lang/Object;)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _CachedPainter_InnerClassesInfo_[] = {
	{"sun.swing.CachedPainter$PainterMultiResolutionCachedImage", "sun.swing.CachedPainter", "PainterMultiResolutionCachedImage", 0},
	{}
};

$ClassInfo _CachedPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.swing.CachedPainter",
	"java.lang.Object",
	nullptr,
	_CachedPainter_FieldInfo_,
	_CachedPainter_MethodInfo_,
	nullptr,
	nullptr,
	_CachedPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.CachedPainter$PainterMultiResolutionCachedImage"
};

$Object* allocate$CachedPainter($Class* clazz) {
	return $of($alloc(CachedPainter));
}

$Map* CachedPainter::cacheMap = nullptr;

$ImageCache* CachedPainter::getCache(Object$* key) {
	$init(CachedPainter);
	$synchronized(CachedPainter::class$) {
		$var($ImageCache, cache, $cast($ImageCache, $nc(CachedPainter::cacheMap)->get(key)));
		if (cache == nullptr) {
			$load($CachedPainter$PainterMultiResolutionCachedImage);
			if ($equals(key, $CachedPainter$PainterMultiResolutionCachedImage::class$)) {
				$assign(cache, $new($ImageCache, 32));
			} else {
				$assign(cache, $new($ImageCache, 1));
			}
			$nc(CachedPainter::cacheMap)->put(key, cache);
		}
		return cache;
	}
}

void CachedPainter::init$(int32_t cacheCount) {
	$nc($(getCache($of(this)->getClass())))->setMaxCount(cacheCount);
}

void CachedPainter::paint($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args) {
	if (w <= 0 || h <= 0) {
		return;
	}
	$synchronized(CachedPainter::class$) {
		paint0(c, g, x, y, w, h, args);
	}
}

$Image* CachedPainter::getImage(Object$* key, $Component* c, int32_t baseWidth, int32_t baseHeight, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, config, getGraphicsConfiguration(c));
	$var($ImageCache, cache, getCache(key));
	$var($Image, image, $nc(cache)->getImage(key, config, w, h, args));
	int32_t attempts = 0;
	$var($VolatileImage, volatileImage, ($instanceOf($VolatileImage, image)) ? $cast($VolatileImage, image) : ($VolatileImage*)nullptr);
	do {
		bool draw = false;
		if (volatileImage != nullptr) {
			switch (volatileImage->validate(config)) {
			case $VolatileImage::IMAGE_INCOMPATIBLE:
				{
					volatileImage->flush();
					$assign(image, nullptr);
					break;
				}
			case $VolatileImage::IMAGE_RESTORED:
				{
					draw = true;
					break;
				}
			}
		}
		if (image == nullptr) {
			if (config != nullptr && (w != baseHeight || h != baseWidth)) {
				$var($AffineTransform, tx, $nc(config)->getDefaultTransform());
				double sx = $nc(tx)->getScaleX();
				double sy = tx->getScaleY();
				bool var$0 = $Double::compare(sx, (double)1) != 0;
				if (var$0 || $Double::compare(sy, (double)1) != 0) {
					bool var$1 = $Math::abs(sx * baseWidth - w) < 1;
					if (var$1 && $Math::abs(sy * baseHeight - h) < 1) {
						w = baseWidth;
						h = baseHeight;
					} else {
						w = $cast(int32_t, $Math::ceil(w / sx));
						h = $cast(int32_t, $Math::ceil(w / sy));
					}
				}
			}
			$assign(image, createImage(c, w, h, config, args));
			cache->setImage(key, config, w, h, args, image);
			draw = true;
			$assign(volatileImage, ($instanceOf($VolatileImage, image)) ? $cast($VolatileImage, image) : ($VolatileImage*)nullptr);
		}
		if (draw) {
			$var($Graphics2D, g2, $cast($Graphics2D, $nc(image)->getGraphics()));
			if (volatileImage == nullptr) {
				if (w != baseWidth || h != baseHeight) {
					$nc(g2)->scale((double)w / baseWidth, (double)h / baseHeight);
				}
				paintToImage(c, image, g2, baseWidth, baseHeight, args);
			} else {
				$var($SurfaceData, sd, $nc($($SurfaceManager::getManager(volatileImage)))->getPrimarySurfaceData());
				double sx = $nc(sd)->getDefaultScaleX();
				double sy = sd->getDefaultScaleY();
				bool var$2 = $Double::compare(sx, (double)1) != 0;
				if (var$2 || $Double::compare(sy, (double)1) != 0) {
					$nc(g2)->scale(1 / sx, 1 / sy);
				}
				$var($Component, var$3, c);
				$var($Image, var$4, image);
				$var($Graphics, var$5, static_cast<$Graphics*>(g2));
				int32_t var$6 = $cast(int32_t, $Math::ceil(w * sx));
				paintToImage(var$3, var$4, var$5, var$6, $cast(int32_t, $Math::ceil(h * sy)), args);
			}
			$nc(g2)->dispose();
		}
	} while ((volatileImage != nullptr) && volatileImage->contentsLost() && ++attempts < 3);
	return image;
}

void CachedPainter::paint0($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Object, key, $of(this)->getClass());
	$var($GraphicsConfiguration, config, getGraphicsConfiguration(c));
	$var($ImageCache, cache, getCache(key));
	$var($Image, image, $nc(cache)->getImage(key, config, w, h, args));
	if (image == nullptr) {
		$assign(image, $new($CachedPainter$PainterMultiResolutionCachedImage, this, w, h));
		cache->setImage(key, config, w, h, args, image);
	}
	if ($instanceOf($CachedPainter$PainterMultiResolutionCachedImage, image)) {
		$nc(($cast($CachedPainter$PainterMultiResolutionCachedImage, image)))->setParams(c, args);
	}
	paintImage(c, g, x, y, w, h, image, args);
}

void CachedPainter::paintImage($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Image* image, $ObjectArray* args) {
	$nc(g)->drawImage(image, x, y, nullptr);
}

$Image* CachedPainter::createImage($Component* c, int32_t w, int32_t h, $GraphicsConfiguration* config, $ObjectArray* args) {
	if (config == nullptr) {
		return $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_RGB);
	}
	return $nc(config)->createCompatibleVolatileImage(w, h);
}

void CachedPainter::flush() {
	$synchronized(CachedPainter::class$) {
		$nc($(getCache($of(this)->getClass())))->flush();
	}
}

$GraphicsConfiguration* CachedPainter::getGraphicsConfiguration($Component* c) {
	if (c == nullptr) {
		return nullptr;
	}
	return $nc(c)->getGraphicsConfiguration();
}

void clinit$CachedPainter($Class* class$) {
	$assignStatic(CachedPainter::cacheMap, $new($HashMap));
}

CachedPainter::CachedPainter() {
}

$Class* CachedPainter::load$($String* name, bool initialize) {
	$loadClass(CachedPainter, name, initialize, &_CachedPainter_ClassInfo_, clinit$CachedPainter, allocate$CachedPainter);
	return class$;
}

$Class* CachedPainter::class$ = nullptr;

	} // swing
} // sun
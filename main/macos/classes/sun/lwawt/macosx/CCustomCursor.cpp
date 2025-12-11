#include <sun/lwawt/macosx/CCustomCursor.h>

#include <java/awt/Canvas.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/MediaTracker.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <jcpp.h>

#undef BITMASK

using $Canvas = ::java::awt::Canvas;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $MediaTracker = ::java::awt::MediaTracker;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CCustomCursor_FieldInfo_[] = {
	{"sMaxCursorSize", "Ljava/awt/Dimension;", nullptr, $STATIC, $staticField(CCustomCursor, sMaxCursorSize)},
	{"fImage", "Ljava/awt/Image;", nullptr, 0, $field(CCustomCursor, fImage)},
	{"fHotspot", "Ljava/awt/Point;", nullptr, 0, $field(CCustomCursor, fHotspot)},
	{"fWidth", "I", nullptr, 0, $field(CCustomCursor, fWidth)},
	{"fHeight", "I", nullptr, 0, $field(CCustomCursor, fHeight)},
	{"fCImage", "Lsun/lwawt/macosx/CImage;", nullptr, 0, $field(CCustomCursor, fCImage)},
	{}
};

$MethodInfo _CCustomCursor_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CCustomCursor::*)($Image*,$Point*,$String*)>(&CCustomCursor::init$)), "java.lang.IndexOutOfBoundsException,java.awt.HeadlessException"},
	{"createTransparentImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BufferedImage*(*)(int32_t,int32_t)>(&CCustomCursor::createTransparentImage))},
	{"getBestCursorSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dimension*(*)(int32_t,int32_t)>(&CCustomCursor::getBestCursorSize))},
	{"getHotSpot", "()Ljava/awt/Point;", nullptr, 0},
	{"getImageData", "()J", nullptr, 0},
	{"getMaxCursorSize", "()Ljava/awt/Dimension;", nullptr, $STATIC, $method(static_cast<$Dimension*(*)()>(&CCustomCursor::getMaxCursorSize))},
	{}
};

$ClassInfo _CCustomCursor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CCustomCursor",
	"java.awt.Cursor",
	nullptr,
	_CCustomCursor_FieldInfo_,
	_CCustomCursor_MethodInfo_
};

$Object* allocate$CCustomCursor($Class* clazz) {
	return $of($alloc(CCustomCursor));
}

$Dimension* CCustomCursor::sMaxCursorSize = nullptr;

$Dimension* CCustomCursor::getMaxCursorSize() {
	$init(CCustomCursor);
	$useLocalCurrentObjectStackCache();
	if (CCustomCursor::sMaxCursorSize != nullptr) {
		return CCustomCursor::sMaxCursorSize;
	}
	$var($Rectangle, bounds, $nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getBounds());
	return $assignStatic(CCustomCursor::sMaxCursorSize, $new($Dimension, $nc(bounds)->width / 2, bounds->height / 2));
}

void CCustomCursor::init$($Image* cursor, $Point* hotSpot, $String* name) {
	$useLocalCurrentObjectStackCache();
	$Cursor::init$(name);
	$set(this, fImage, cursor);
	$set(this, fHotspot, hotSpot);
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($Component, c, $new($Canvas));
	$var($MediaTracker, tracker, $new($MediaTracker, c));
	tracker->addImage(this->fImage, 0);
	try {
		tracker->waitForAll();
	} catch ($InterruptedException& e) {
	}
	int32_t width = $nc(this->fImage)->getWidth(c);
	int32_t height = $nc(this->fImage)->getHeight(c);
	if (tracker->isErrorAny() || width < 0 || height < 0) {
		$nc(this->fHotspot)->x = ($nc(this->fHotspot)->y = 0);
		width = (height = 1);
		$set(this, fImage, createTransparentImage(width, height));
	} else {
		$var($Dimension, nativeSize, $nc(toolkit)->getBestCursorSize(width, height));
		width = $nc(nativeSize)->width;
		height = nativeSize->height;
	}
	this->fWidth = width;
	this->fHeight = height;
	if ($nc(this->fHotspot)->x >= width || $nc(this->fHotspot)->y >= height || $nc(this->fHotspot)->x < 0 || $nc(this->fHotspot)->y < 0) {
		$throwNew($IndexOutOfBoundsException, "invalid hotSpot"_s);
	}
	if ($nc(this->fHotspot)->x >= width) {
		$nc(this->fHotspot)->x = width - 1;
	} else if ($nc(this->fHotspot)->x < 0) {
		$nc(this->fHotspot)->x = 0;
	}
	if ($nc(this->fHotspot)->y >= height) {
		$nc(this->fHotspot)->y = height - 1;
	} else if ($nc(this->fHotspot)->y < 0) {
		$nc(this->fHotspot)->y = 0;
	}
}

$BufferedImage* CCustomCursor::createTransparentImage(int32_t w, int32_t h) {
	$init(CCustomCursor);
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDevice, gs, $nc(ge)->getDefaultScreenDevice());
	$var($GraphicsConfiguration, gc, $nc(gs)->getDefaultConfiguration());
	$var($BufferedImage, img, $nc(gc)->createCompatibleImage(w, h, $Transparency::BITMASK));
	$var($Graphics2D, g, $cast($Graphics2D, $nc(img)->getGraphics()));
	$nc(g)->setBackground($$new($Color, 0, 0, 0, 0));
	g->clearRect(0, 0, w, h);
	g->dispose();
	return img;
}

$Dimension* CCustomCursor::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) {
	$init(CCustomCursor);
	$useLocalCurrentObjectStackCache();
	$var($Dimension, maxCursorSize, getMaxCursorSize());
	int32_t var$0 = $Math::max(1, $Math::abs(preferredWidth));
	$var($Dimension, d, $new($Dimension, var$0, $Math::max(1, $Math::abs(preferredHeight))));
	int32_t var$1 = $Math::min(d->width, $nc(maxCursorSize)->width);
	return $new($Dimension, var$1, $Math::min(d->height, $nc(maxCursorSize)->height));
}

int64_t CCustomCursor::getImageData() {
	if (this->fCImage != nullptr) {
		return $nc(this->fCImage)->ptr;
	}
	try {
		$set(this, fCImage, $nc($($CImage::getCreator()))->createFromImage(this->fImage));
		if (this->fCImage == nullptr) {
			return 0;
		} else {
			$nc(this->fCImage)->resizeRepresentations((double)this->fWidth, (double)this->fHeight);
			return $nc(this->fCImage)->ptr;
		}
	} catch ($IllegalArgumentException& iae) {
		return 0;
	}
	$shouldNotReachHere();
}

$Point* CCustomCursor::getHotSpot() {
	return this->fHotspot;
}

CCustomCursor::CCustomCursor() {
}

$Class* CCustomCursor::load$($String* name, bool initialize) {
	$loadClass(CCustomCursor, name, initialize, &_CCustomCursor_ClassInfo_, allocate$CCustomCursor);
	return class$;
}

$Class* CCustomCursor::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
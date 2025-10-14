#include <sun/awt/CustomCursor.h>

#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/MediaTracker.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/PixelGrabber.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SCALE_DEFAULT

using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Image = ::java::awt::Image;
using $MediaTracker = ::java::awt::MediaTracker;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $PixelGrabber = ::java::awt::image::PixelGrabber;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _CustomCursor_FieldInfo_[] = {
	{"image", "Ljava/awt/Image;", nullptr, $PROTECTED, $field(CustomCursor, image)},
	{}
};

$MethodInfo _CustomCursor_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CustomCursor::*)($Image*,$Point*,$String*)>(&CustomCursor::init$)), "java.lang.IndexOutOfBoundsException"},
	{"createNativeCursor", "(Ljava/awt/Image;[IIIII)V", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _CustomCursor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.CustomCursor",
	"java.awt.Cursor",
	nullptr,
	_CustomCursor_FieldInfo_,
	_CustomCursor_MethodInfo_
};

$Object* allocate$CustomCursor($Class* clazz) {
	return $of($alloc(CustomCursor));
}

void CustomCursor::init$($Image* cursor$renamed, $Point* hotSpot, $String* name) {
	$var($Image, cursor, cursor$renamed);
	$Cursor::init$(name);
	$set(this, image, cursor);
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($Component, c, $new($Canvas));
	$var($MediaTracker, tracker, $new($MediaTracker, c));
	tracker->addImage(cursor, 0);
	try {
		tracker->waitForAll();
	} catch ($InterruptedException&) {
		$catch();
	}
	int32_t width = $nc(cursor)->getWidth(c);
	int32_t height = cursor->getHeight(c);
	if (tracker->isErrorAny() || width < 0 || height < 0) {
		$nc(hotSpot)->x = (hotSpot->y = 0);
	}
	$var($Dimension, nativeSize, $nc(toolkit)->getBestCursorSize(width, height));
	if (($nc(nativeSize)->width != width || $nc(nativeSize)->height != height) && (nativeSize->width != 0 && nativeSize->height != 0)) {
		$assign(cursor, cursor->getScaledInstance(nativeSize->width, nativeSize->height, $Image::SCALE_DEFAULT));
		width = nativeSize->width;
		height = nativeSize->height;
	}
	if ($nc(hotSpot)->x >= width || $nc(hotSpot)->y >= height || $nc(hotSpot)->x < 0 || $nc(hotSpot)->y < 0) {
		$throwNew($IndexOutOfBoundsException, "invalid hotSpot"_s);
	}
	$var($ints, pixels, $new($ints, width * height));
	$var($ImageProducer, ip, cursor->getSource());
	$var($PixelGrabber, pg, $new($PixelGrabber, ip, 0, 0, width, height, pixels, 0, width));
	try {
		pg->grabPixels();
	} catch ($InterruptedException&) {
		$catch();
	}
	createNativeCursor(this->image, pixels, width, height, $nc(hotSpot)->x, hotSpot->y);
}

CustomCursor::CustomCursor() {
}

$Class* CustomCursor::load$($String* name, bool initialize) {
	$loadClass(CustomCursor, name, initialize, &_CustomCursor_ClassInfo_, allocate$CustomCursor);
	return class$;
}

$Class* CustomCursor::class$ = nullptr;

	} // awt
} // sun
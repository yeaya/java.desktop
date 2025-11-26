#include <sun/java2d/HeadlessGraphicsEnvironment.h>

#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $FontArray = $Array<::java::awt::Font>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace java2d {

$FieldInfo _HeadlessGraphicsEnvironment_FieldInfo_[] = {
	{"ge", "Ljava/awt/GraphicsEnvironment;", nullptr, $PRIVATE, $field(HeadlessGraphicsEnvironment, ge)},
	{}
};

$MethodInfo _HeadlessGraphicsEnvironment_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/GraphicsEnvironment;)V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessGraphicsEnvironment::*)($GraphicsEnvironment*)>(&HeadlessGraphicsEnvironment::init$))},
	{"createGraphics", "(Ljava/awt/image/BufferedImage;)Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{"getAllFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getAvailableFontFamilyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAvailableFontFamilyNames", "(Ljava/util/Locale;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCenterPoint", "()Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getDefaultScreenDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getMaximumWindowBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getScreenDevices", "()[Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{}
};

$ClassInfo _HeadlessGraphicsEnvironment_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.HeadlessGraphicsEnvironment",
	"java.awt.GraphicsEnvironment",
	nullptr,
	_HeadlessGraphicsEnvironment_FieldInfo_,
	_HeadlessGraphicsEnvironment_MethodInfo_
};

$Object* allocate$HeadlessGraphicsEnvironment($Class* clazz) {
	return $of($alloc(HeadlessGraphicsEnvironment));
}

void HeadlessGraphicsEnvironment::init$($GraphicsEnvironment* ge) {
	$GraphicsEnvironment::init$();
	$set(this, ge, ge);
}

$GraphicsDeviceArray* HeadlessGraphicsEnvironment::getScreenDevices() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$GraphicsDevice* HeadlessGraphicsEnvironment::getDefaultScreenDevice() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$Point* HeadlessGraphicsEnvironment::getCenterPoint() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$Rectangle* HeadlessGraphicsEnvironment::getMaximumWindowBounds() {
	$throwNew($HeadlessException);
	$shouldNotReachHere();
}

$Graphics2D* HeadlessGraphicsEnvironment::createGraphics($BufferedImage* img) {
	return $nc(this->ge)->createGraphics(img);
}

$FontArray* HeadlessGraphicsEnvironment::getAllFonts() {
	return $nc(this->ge)->getAllFonts();
}

$StringArray* HeadlessGraphicsEnvironment::getAvailableFontFamilyNames() {
	return $nc(this->ge)->getAvailableFontFamilyNames();
}

$StringArray* HeadlessGraphicsEnvironment::getAvailableFontFamilyNames($Locale* l) {
	return $nc(this->ge)->getAvailableFontFamilyNames(l);
}

HeadlessGraphicsEnvironment::HeadlessGraphicsEnvironment() {
}

$Class* HeadlessGraphicsEnvironment::load$($String* name, bool initialize) {
	$loadClass(HeadlessGraphicsEnvironment, name, initialize, &_HeadlessGraphicsEnvironment_ClassInfo_, allocate$HeadlessGraphicsEnvironment);
	return class$;
}

$Class* HeadlessGraphicsEnvironment::class$ = nullptr;

	} // java2d
} // sun
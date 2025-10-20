#include <sun/awt/image/OffScreenImage.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/SystemColor.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/OffScreenImageSource.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef PLAIN

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $SystemColor = ::java::awt::SystemColor;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $OffScreenImageSource = ::sun::awt::image::OffScreenImageSource;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _OffScreenImage_FieldInfo_[] = {
	{"c", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(OffScreenImage, c)},
	{"osis", "Lsun/awt/image/OffScreenImageSource;", nullptr, $PRIVATE, $field(OffScreenImage, osis)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(OffScreenImage, defaultFont)},
	{}
};

$MethodInfo _OffScreenImage_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/awt/image/ColorModel;Ljava/awt/image/WritableRaster;Z)V", nullptr, $PUBLIC, $method(static_cast<void(OffScreenImage::*)($Component*,$ColorModel*,$WritableRaster*,bool)>(&OffScreenImage::init$))},
	{"createGraphics", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getSource", "()Ljava/awt/image/ImageProducer;", nullptr, $PUBLIC},
	{"initSurface", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(OffScreenImage::*)(int32_t,int32_t)>(&OffScreenImage::initSurface))},
	{}
};

$ClassInfo _OffScreenImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.OffScreenImage",
	"java.awt.image.BufferedImage",
	nullptr,
	_OffScreenImage_FieldInfo_,
	_OffScreenImage_MethodInfo_
};

$Object* allocate$OffScreenImage($Class* clazz) {
	return $of($alloc(OffScreenImage));
}

void OffScreenImage::init$($Component* c, $ColorModel* cm, $WritableRaster* raster, bool isRasterPremultiplied) {
	$BufferedImage::init$(cm, raster, isRasterPremultiplied, ($Hashtable*)nullptr);
	$set(this, c, c);
	int32_t var$0 = $nc(raster)->getWidth();
	initSurface(var$0, raster->getHeight());
}

$Graphics* OffScreenImage::getGraphics() {
	return createGraphics();
}

$Graphics2D* OffScreenImage::createGraphics() {
	$useLocalCurrentObjectStackCache();
	if (this->c == nullptr) {
		$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		return $nc(env)->createGraphics(this);
	}
	$var($Color, bg, $nc(this->c)->getBackground());
	if (bg == nullptr) {
		$init($SystemColor);
		$assign(bg, $SystemColor::window);
	}
	$var($Color, fg, $nc(this->c)->getForeground());
	if (fg == nullptr) {
		$init($SystemColor);
		$assign(fg, $SystemColor::windowText);
	}
	$var($Font, font, $nc(this->c)->getFont());
	if (font == nullptr) {
		if (this->defaultFont == nullptr) {
			$set(this, defaultFont, $new($Font, "Dialog"_s, $Font::PLAIN, 12));
		}
		$assign(font, this->defaultFont);
	}
	return $new($SunGraphics2D, $($SurfaceData::getPrimarySurfaceData(this)), fg, bg, font);
}

void OffScreenImage::initSurface(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g2, createGraphics());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(g2)->clearRect(0, 0, width, height);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(g2)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ImageProducer* OffScreenImage::getSource() {
	if (this->osis == nullptr) {
		$set(this, osis, $new($OffScreenImageSource, this));
	}
	return this->osis;
}

OffScreenImage::OffScreenImage() {
}

$Class* OffScreenImage::load$($String* name, bool initialize) {
	$loadClass(OffScreenImage, name, initialize, &_OffScreenImage_ClassInfo_, allocate$OffScreenImage);
	return class$;
}

$Class* OffScreenImage::class$ = nullptr;

		} // image
	} // awt
} // sun
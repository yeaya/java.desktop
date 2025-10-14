#include <sun/print/ImagePrinter.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/imageio/ImageIO.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE
#undef PAGE_EXISTS

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ImageIO = ::javax::imageio::ImageIO;

namespace sun {
	namespace print {

$FieldInfo _ImagePrinter_FieldInfo_[] = {
	{"image", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(ImagePrinter, image)},
	{}
};

$MethodInfo _ImagePrinter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(ImagePrinter::*)($InputStream*)>(&ImagePrinter::init$))},
	{"<init>", "(Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(ImagePrinter::*)($URL*)>(&ImagePrinter::init$))},
	{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImagePrinter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ImagePrinter",
	"java.lang.Object",
	"java.awt.print.Printable",
	_ImagePrinter_FieldInfo_,
	_ImagePrinter_MethodInfo_
};

$Object* allocate$ImagePrinter($Class* clazz) {
	return $of($alloc(ImagePrinter));
}

void ImagePrinter::init$($InputStream* stream) {
	try {
		$set(this, image, $ImageIO::read(stream));
	} catch ($Exception&) {
		$catch();
	}
}

void ImagePrinter::init$($URL* url) {
	try {
		$set(this, image, $ImageIO::read(url));
	} catch ($Exception&) {
		$catch();
	}
}

int32_t ImagePrinter::print($Graphics* g, $PageFormat* pf, int32_t index) {
	if (index > 0 || this->image == nullptr) {
		return $Printable::NO_SUCH_PAGE;
	}
	double var$0 = $nc(pf)->getImageableX();
	$nc(($cast($Graphics2D, g)))->translate(var$0, pf->getImageableY());
	int32_t w = $nc(this->image)->getWidth(nullptr);
	int32_t h = $nc(this->image)->getHeight(nullptr);
	int32_t iw = $cast(int32_t, $nc(pf)->getImageableWidth());
	int32_t ih = $cast(int32_t, pf->getImageableHeight());
	int32_t dw = w;
	int32_t dh = h;
	if (dw > iw) {
		dh = $cast(int32_t, (dh * ((float)iw / (float)dw)));
		dw = iw;
	}
	if (dh > ih) {
		dw = $cast(int32_t, (dw * ((float)ih / (float)dh)));
		dh = ih;
	}
	int32_t dx = (iw - dw) / 2;
	int32_t dy = (ih - dh) / 2;
	$nc(g)->drawImage(this->image, dx, dy, dx + dw, dy + dh, 0, 0, w, h, nullptr);
	return $Printable::PAGE_EXISTS;
}

ImagePrinter::ImagePrinter() {
}

$Class* ImagePrinter::load$($String* name, bool initialize) {
	$loadClass(ImagePrinter, name, initialize, &_ImagePrinter_ClassInfo_, allocate$ImagePrinter);
	return class$;
}

$Class* ImagePrinter::class$ = nullptr;

	} // print
} // sun
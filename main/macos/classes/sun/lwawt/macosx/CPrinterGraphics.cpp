#include <sun/lwawt/macosx/CPrinterGraphics.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/print/PrinterJob.h>
#include <sun/print/ProxyGraphics2D.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPrinterGraphics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;)V", nullptr, $PUBLIC, $method(static_cast<void(CPrinterGraphics::*)($Graphics2D*,$PrinterJob*)>(&CPrinterGraphics::init$))},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPrinterGraphics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterGraphics",
	"sun.print.ProxyGraphics2D",
	nullptr,
	nullptr,
	_CPrinterGraphics_MethodInfo_
};

$Object* allocate$CPrinterGraphics($Class* clazz) {
	return $of($alloc(CPrinterGraphics));
}

void CPrinterGraphics::init$($Graphics2D* graphics, $PrinterJob* printerJob) {
	$ProxyGraphics2D::init$(graphics, printerJob);
}

bool CPrinterGraphics::drawImage($Image* img, int32_t x, int32_t y, $Color* bgcolor, $ImageObserver* observer) {
	return $nc($(getDelegate()))->drawImage(img, x, y, bgcolor, observer);
}

bool CPrinterGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgcolor, $ImageObserver* observer) {
	return $nc($(getDelegate()))->drawImage(img, x, y, width, height, bgcolor, observer);
}

bool CPrinterGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	return $nc($(getDelegate()))->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
}

CPrinterGraphics::CPrinterGraphics() {
}

$Class* CPrinterGraphics::load$($String* name, bool initialize) {
	$loadClass(CPrinterGraphics, name, initialize, &_CPrinterGraphics_ClassInfo_, allocate$CPrinterGraphics);
	return class$;
}

$Class* CPrinterGraphics::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
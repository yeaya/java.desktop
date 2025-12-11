#include <sun/lwawt/macosx/CPrinterJob$5.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/Math.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <sun/print/PeekGraphics.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Printable = ::java::awt::print::Printable;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;
using $PeekGraphics = ::sun::print::PeekGraphics;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterJob$5_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$5, this$0)},
	{"val$printerJob", "Ljava/awt/print/PrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$5, val$printerJob)},
	{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$5, val$pageIndex)},
	{"val$ret", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$5, val$ret)},
	{}
};

$MethodInfo _CPrinterJob$5_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;[Ljava/lang/Object;ILjava/awt/print/PrinterJob;)V", "()V", 0, $method(static_cast<void(CPrinterJob$5::*)($CPrinterJob*,$ObjectArray*,int32_t,$PrinterJob*)>(&CPrinterJob$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPrinterJob$5_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPrinterJob",
	"getPageformatPrintablePeekgraphics",
	"(I)[Ljava/lang/Object;"
};

$InnerClassInfo _CPrinterJob$5_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPrinterJob$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPrinterJob$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJob$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_CPrinterJob$5_FieldInfo_,
	_CPrinterJob$5_MethodInfo_,
	nullptr,
	&_CPrinterJob$5_EnclosingMethodInfo_,
	_CPrinterJob$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPrinterJob"
};

$Object* allocate$CPrinterJob$5($Class* clazz) {
	return $of($alloc(CPrinterJob$5));
}

void CPrinterJob$5::init$($CPrinterJob* this$0, $ObjectArray* val$ret, int32_t val$pageIndex, $PrinterJob* val$printerJob) {
	$set(this, this$0, this$0);
	$set(this, val$ret, val$ret);
	this->val$pageIndex = val$pageIndex;
	$set(this, val$printerJob, val$printerJob);
}

void CPrinterJob$5::run() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->val$ret) {
		try {
			$var($Pageable, pageable, $CPrinterJob::access$200(this->this$0));
			$var($PageFormat, pageFormat, $nc(pageable)->getPageFormat(this->val$pageIndex));
			if (pageFormat != nullptr) {
				$var($Printable, printable, pageable->getPrintable(this->val$pageIndex));
				if (printable != nullptr) {
					int32_t var$0 = (int32_t)$Math::round(pageFormat->getWidth());
					$var($BufferedImage, bimg, $new($BufferedImage, var$0, (int32_t)$Math::round(pageFormat->getHeight()), $BufferedImage::TYPE_INT_ARGB_PRE));
					$var($PeekGraphics, peekGraphics, $CPrinterJob::access$300(this->this$0, $(bimg->createGraphics()), this->val$printerJob));
					$var($Rectangle2D, pageFormatArea, this->this$0->getPageFormatArea(pageFormat));
					$CPrinterJob::access$400(this->this$0, peekGraphics, pageFormatArea);
					$nc(this->val$ret)->set(0, pageFormat);
					$nc(this->val$ret)->set(1, printable);
					$nc(this->val$ret)->set(2, peekGraphics);
				}
			}
		} catch ($Exception& e) {
		}
	}
}

CPrinterJob$5::CPrinterJob$5() {
}

$Class* CPrinterJob$5::load$($String* name, bool initialize) {
	$loadClass(CPrinterJob$5, name, initialize, &_CPrinterJob$5_ClassInfo_, allocate$CPrinterJob$5);
	return class$;
}

$Class* CPrinterJob$5::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
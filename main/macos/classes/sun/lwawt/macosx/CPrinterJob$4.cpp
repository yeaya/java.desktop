#include <sun/lwawt/macosx/CPrinterJob$4.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/macosx/CPrinterGraphics.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <sun/lwawt/macosx/CPrinterSurfaceData.h>
#include <sun/print/ProxyGraphics2D.h>
#include <jcpp.h>

#undef PLAIN

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CPrinterGraphics = ::sun::lwawt::macosx::CPrinterGraphics;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;
using $CPrinterSurfaceData = ::sun::lwawt::macosx::CPrinterSurfaceData;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterJob$4_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, this$0)},
	{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$pageIndex)},
	{"val$painter", "Ljava/awt/print/Printable;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$painter)},
	{"val$printerJob", "Ljava/awt/print/PrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$printerJob)},
	{"val$context", "J", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$context)},
	{"val$page", "Ljava/awt/print/PageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$page)},
	{}
};

$MethodInfo _CPrinterJob$4_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/print/PageFormat;JLjava/awt/print/PrinterJob;Ljava/awt/print/Printable;I)V", "()V", 0, $method(static_cast<void(CPrinterJob$4::*)($CPrinterJob*,$PageFormat*,int64_t,$PrinterJob*,$Printable*,int32_t)>(&CPrinterJob$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPrinterJob$4_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPrinterJob",
	"printToPathGraphics",
	"(Lsun/print/PeekGraphics;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;IJ)V"
};

$InnerClassInfo _CPrinterJob$4_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPrinterJob$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPrinterJob$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJob$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_CPrinterJob$4_FieldInfo_,
	_CPrinterJob$4_MethodInfo_,
	nullptr,
	&_CPrinterJob$4_EnclosingMethodInfo_,
	_CPrinterJob$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPrinterJob"
};

$Object* allocate$CPrinterJob$4($Class* clazz) {
	return $of($alloc(CPrinterJob$4));
}

void CPrinterJob$4::init$($CPrinterJob* this$0, $PageFormat* val$page, int64_t val$context, $PrinterJob* val$printerJob, $Printable* val$painter, int32_t val$pageIndex) {
	$set(this, this$0, this$0);
	$set(this, val$page, val$page);
	this->val$context = val$context;
	$set(this, val$printerJob, val$printerJob);
	$set(this, val$painter, val$painter);
	this->val$pageIndex = val$pageIndex;
}

void CPrinterJob$4::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($SurfaceData, sd, $CPrinterSurfaceData::createData(this->val$page, this->val$context));
		$init($CPrinterJob);
		if ($CPrinterJob::defaultFont == nullptr) {
			$assignStatic($CPrinterJob::defaultFont, $new($Font, "Dialog"_s, $Font::PLAIN, 12));
		}
		$init($Color);
		$var($Graphics2D, delegate, $new($SunGraphics2D, sd, $Color::black, $Color::white, $CPrinterJob::defaultFont));
		$var($Graphics2D, pathGraphics, $new($CPrinterGraphics, delegate, this->val$printerJob));
		$var($Rectangle2D, pageFormatArea, this->this$0->getPageFormatArea(this->val$page));
		$CPrinterJob::access$100(this->this$0, pathGraphics, pageFormatArea);
		$nc(this->val$painter)->print(pathGraphics, this->val$page, this->val$pageIndex);
		delegate->dispose();
		$assign(delegate, nullptr);
	} catch ($PrinterException& pe) {
		$throwNew($UndeclaredThrowableException, pe);
	}
}

CPrinterJob$4::CPrinterJob$4() {
}

$Class* CPrinterJob$4::load$($String* name, bool initialize) {
	$loadClass(CPrinterJob$4, name, initialize, &_CPrinterJob$4_ClassInfo_, allocate$CPrinterJob$4);
	return class$;
}

$Class* CPrinterJob$4::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
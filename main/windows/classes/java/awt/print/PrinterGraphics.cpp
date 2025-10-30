#include <java/awt/print/PrinterGraphics.h>

#include <java/awt/print/PrinterJob.h>
#include <jcpp.h>

using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$MethodInfo _PrinterGraphics_MethodInfo_[] = {
	{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrinterGraphics_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.print.PrinterGraphics",
	nullptr,
	nullptr,
	nullptr,
	_PrinterGraphics_MethodInfo_
};

$Object* allocate$PrinterGraphics($Class* clazz) {
	return $of($alloc(PrinterGraphics));
}

$Class* PrinterGraphics::load$($String* name, bool initialize) {
	$loadClass(PrinterGraphics, name, initialize, &_PrinterGraphics_ClassInfo_, allocate$PrinterGraphics);
	return class$;
}

$Class* PrinterGraphics::class$ = nullptr;

		} // print
	} // awt
} // java
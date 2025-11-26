#include <sun/print/PlatformPrinterJobProxy.h>

#include <java/awt/print/PrinterJob.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$MethodInfo _PlatformPrinterJobProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformPrinterJobProxy::*)()>(&PlatformPrinterJobProxy::init$))},
	{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrinterJob*(*)()>(&PlatformPrinterJobProxy::getPrinterJob))},
	{}
};

$ClassInfo _PlatformPrinterJobProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PlatformPrinterJobProxy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PlatformPrinterJobProxy_MethodInfo_
};

$Object* allocate$PlatformPrinterJobProxy($Class* clazz) {
	return $of($alloc(PlatformPrinterJobProxy));
}

void PlatformPrinterJobProxy::init$() {
}

$PrinterJob* PlatformPrinterJobProxy::getPrinterJob() {
	return $new($PSPrinterJob);
}

PlatformPrinterJobProxy::PlatformPrinterJobProxy() {
}

$Class* PlatformPrinterJobProxy::load$($String* name, bool initialize) {
	$loadClass(PlatformPrinterJobProxy, name, initialize, &_PlatformPrinterJobProxy_ClassInfo_, allocate$PlatformPrinterJobProxy);
	return class$;
}

$Class* PlatformPrinterJobProxy::class$ = nullptr;

	} // print
} // sun
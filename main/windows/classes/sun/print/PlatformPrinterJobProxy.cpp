#include <sun/print/PlatformPrinterJobProxy.h>

#include <java/awt/print/PrinterJob.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;
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
	return $new($WPrinterJob);
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
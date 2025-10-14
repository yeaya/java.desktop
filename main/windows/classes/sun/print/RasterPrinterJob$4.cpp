#include <sun/print/RasterPrinterJob$4.h>

#include <java/awt/print/PrinterJob.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/PrintService.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrintService = ::javax::print::PrintService;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _RasterPrinterJob$4_FieldInfo_[] = {
	{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$4, this$0)},
	{}
};

$MethodInfo _RasterPrinterJob$4_MethodInfo_[] = {
	{"<init>", "(Lsun/print/RasterPrinterJob;)V", nullptr, 0, $method(static_cast<void(RasterPrinterJob$4::*)($RasterPrinterJob*)>(&RasterPrinterJob$4::init$))},
	{"run", "()[Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RasterPrinterJob$4_EnclosingMethodInfo_ = {
	"sun.print.RasterPrinterJob",
	"printDialog",
	"(Ljavax/print/attribute/PrintRequestAttributeSet;)Z"
};

$InnerClassInfo _RasterPrinterJob$4_InnerClassesInfo_[] = {
	{"sun.print.RasterPrinterJob$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RasterPrinterJob$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.RasterPrinterJob$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RasterPrinterJob$4_FieldInfo_,
	_RasterPrinterJob$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljavax/print/PrintService;>;",
	&_RasterPrinterJob$4_EnclosingMethodInfo_,
	_RasterPrinterJob$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.RasterPrinterJob"
};

$Object* allocate$RasterPrinterJob$4($Class* clazz) {
	return $of($alloc(RasterPrinterJob$4));
}

void RasterPrinterJob$4::init$($RasterPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* RasterPrinterJob$4::run() {
	$var($PrintServiceArray, services, $PrinterJob::lookupPrintServices());
	return $of(services);
}

RasterPrinterJob$4::RasterPrinterJob$4() {
}

$Class* RasterPrinterJob$4::load$($String* name, bool initialize) {
	$loadClass(RasterPrinterJob$4, name, initialize, &_RasterPrinterJob$4_ClassInfo_, allocate$RasterPrinterJob$4);
	return class$;
}

$Class* RasterPrinterJob$4::class$ = nullptr;

	} // print
} // sun
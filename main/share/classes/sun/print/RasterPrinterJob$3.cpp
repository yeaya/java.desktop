#include <sun/print/RasterPrinterJob$3.h>

#include <java/awt/GraphicsConfiguration.h>
#include <javax/print/PrintService.h>
#include <sun/print/RasterPrinterJob.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintService = ::javax::print::PrintService;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _RasterPrinterJob$3_FieldInfo_[] = {
	{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$3, this$0)},
	{"val$gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$3, val$gc)},
	{}
};

$MethodInfo _RasterPrinterJob$3_MethodInfo_[] = {
	{"<init>", "(Lsun/print/RasterPrinterJob;Ljava/awt/GraphicsConfiguration;)V", "()V", 0, $method(static_cast<void(RasterPrinterJob$3::*)($RasterPrinterJob*,$GraphicsConfiguration*)>(&RasterPrinterJob$3::init$))},
	{"run", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RasterPrinterJob$3_EnclosingMethodInfo_ = {
	"sun.print.RasterPrinterJob",
	"printDialog",
	"(Ljavax/print/attribute/PrintRequestAttributeSet;)Z"
};

$InnerClassInfo _RasterPrinterJob$3_InnerClassesInfo_[] = {
	{"sun.print.RasterPrinterJob$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RasterPrinterJob$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.RasterPrinterJob$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RasterPrinterJob$3_FieldInfo_,
	_RasterPrinterJob$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/print/PrintService;>;",
	&_RasterPrinterJob$3_EnclosingMethodInfo_,
	_RasterPrinterJob$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.RasterPrinterJob"
};

$Object* allocate$RasterPrinterJob$3($Class* clazz) {
	return $of($alloc(RasterPrinterJob$3));
}

void RasterPrinterJob$3::init$($RasterPrinterJob* this$0, $GraphicsConfiguration* val$gc) {
	$set(this, this$0, this$0);
	$set(this, val$gc, val$gc);
}

$Object* RasterPrinterJob$3::run() {
	$var($PrintService, service, this->this$0->getPrintService());
	if (service == nullptr) {
		$ServiceDialog::showNoPrintService(this->val$gc);
		return $of(nullptr);
	}
	return $of(service);
}

RasterPrinterJob$3::RasterPrinterJob$3() {
}

$Class* RasterPrinterJob$3::load$($String* name, bool initialize) {
	$loadClass(RasterPrinterJob$3, name, initialize, &_RasterPrinterJob$3_ClassInfo_, allocate$RasterPrinterJob$3);
	return class$;
}

$Class* RasterPrinterJob$3::class$ = nullptr;

	} // print
} // sun
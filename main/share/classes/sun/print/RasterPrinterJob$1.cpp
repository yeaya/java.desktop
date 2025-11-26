#include <sun/print/RasterPrinterJob$1.h>

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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrintService = ::javax::print::PrintService;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _RasterPrinterJob$1_FieldInfo_[] = {
	{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$1, this$0)},
	{"val$gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$1, val$gc)},
	{}
};

$MethodInfo _RasterPrinterJob$1_MethodInfo_[] = {
	{"<init>", "(Lsun/print/RasterPrinterJob;Ljava/awt/GraphicsConfiguration;)V", "()V", 0, $method(static_cast<void(RasterPrinterJob$1::*)($RasterPrinterJob*,$GraphicsConfiguration*)>(&RasterPrinterJob$1::init$))},
	{"run", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RasterPrinterJob$1_EnclosingMethodInfo_ = {
	"sun.print.RasterPrinterJob",
	"pageDialog",
	"(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;"
};

$InnerClassInfo _RasterPrinterJob$1_InnerClassesInfo_[] = {
	{"sun.print.RasterPrinterJob$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RasterPrinterJob$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.RasterPrinterJob$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RasterPrinterJob$1_FieldInfo_,
	_RasterPrinterJob$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/print/PrintService;>;",
	&_RasterPrinterJob$1_EnclosingMethodInfo_,
	_RasterPrinterJob$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.RasterPrinterJob"
};

$Object* allocate$RasterPrinterJob$1($Class* clazz) {
	return $of($alloc(RasterPrinterJob$1));
}

void RasterPrinterJob$1::init$($RasterPrinterJob* this$0, $GraphicsConfiguration* val$gc) {
	$set(this, this$0, this$0);
	$set(this, val$gc, val$gc);
}

$Object* RasterPrinterJob$1::run() {
	$var($PrintService, service, this->this$0->getPrintService());
	if (service == nullptr) {
		$ServiceDialog::showNoPrintService(this->val$gc);
		return $of(nullptr);
	}
	return $of(service);
}

RasterPrinterJob$1::RasterPrinterJob$1() {
}

$Class* RasterPrinterJob$1::load$($String* name, bool initialize) {
	$loadClass(RasterPrinterJob$1, name, initialize, &_RasterPrinterJob$1_ClassInfo_, allocate$RasterPrinterJob$1);
	return class$;
}

$Class* RasterPrinterJob$1::class$ = nullptr;

	} // print
} // sun
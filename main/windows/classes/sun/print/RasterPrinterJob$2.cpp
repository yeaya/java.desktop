#include <sun/print/RasterPrinterJob$2.h>

#include <java/awt/GraphicsConfiguration.h>
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

$FieldInfo _RasterPrinterJob$2_FieldInfo_[] = {
	{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$2, this$0)},
	{"val$gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$2, val$gc)},
	{}
};

$MethodInfo _RasterPrinterJob$2_MethodInfo_[] = {
	{"<init>", "(Lsun/print/RasterPrinterJob;Ljava/awt/GraphicsConfiguration;)V", "()V", 0, $method(static_cast<void(RasterPrinterJob$2::*)($RasterPrinterJob*,$GraphicsConfiguration*)>(&RasterPrinterJob$2::init$))},
	{"run", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RasterPrinterJob$2_EnclosingMethodInfo_ = {
	"sun.print.RasterPrinterJob",
	"pageDialog",
	"(Ljavax/print/attribute/PrintRequestAttributeSet;)Ljava/awt/print/PageFormat;"
};

$InnerClassInfo _RasterPrinterJob$2_InnerClassesInfo_[] = {
	{"sun.print.RasterPrinterJob$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RasterPrinterJob$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.RasterPrinterJob$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RasterPrinterJob$2_FieldInfo_,
	_RasterPrinterJob$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/print/PrintService;>;",
	&_RasterPrinterJob$2_EnclosingMethodInfo_,
	_RasterPrinterJob$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.RasterPrinterJob"
};

$Object* allocate$RasterPrinterJob$2($Class* clazz) {
	return $of($alloc(RasterPrinterJob$2));
}

void RasterPrinterJob$2::init$($RasterPrinterJob* this$0, $GraphicsConfiguration* val$gc) {
	$set(this, this$0, this$0);
	$set(this, val$gc, val$gc);
}

$Object* RasterPrinterJob$2::run() {
	$var($PrintService, service, this->this$0->getPrintService());
	if (service == nullptr) {
		$ServiceDialog::showNoPrintService(this->val$gc);
		return $of(nullptr);
	}
	return $of(service);
}

RasterPrinterJob$2::RasterPrinterJob$2() {
}

$Class* RasterPrinterJob$2::load$($String* name, bool initialize) {
	$loadClass(RasterPrinterJob$2, name, initialize, &_RasterPrinterJob$2_ClassInfo_, allocate$RasterPrinterJob$2);
	return class$;
}

$Class* RasterPrinterJob$2::class$ = nullptr;

	} // print
} // sun
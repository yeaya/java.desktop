#include <sun/print/PSPrinterJob$2.h>

#include <java/lang/reflect/Method.h>
#include <javax/print/PrintService.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $PrintService = ::javax::print::PrintService;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob$2_FieldInfo_[] = {
	{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$2, this$0)},
	{"val$pservice", "Ljavax/print/PrintService;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$2, val$pservice)},
	{}
};

$MethodInfo _PSPrinterJob$2_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PSPrinterJob;Ljavax/print/PrintService;)V", "()V", 0, $method(static_cast<void(PSPrinterJob$2::*)($PSPrinterJob*,$PrintService*)>(&PSPrinterJob$2::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PSPrinterJob$2_EnclosingMethodInfo_ = {
	"sun.print.PSPrinterJob",
	"startDoc",
	"()V"
};

$InnerClassInfo _PSPrinterJob$2_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PSPrinterJob$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PSPrinterJob$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PSPrinterJob$2_FieldInfo_,
	_PSPrinterJob$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_PSPrinterJob$2_EnclosingMethodInfo_,
	_PSPrinterJob$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$2($Class* clazz) {
	return $of($alloc(PSPrinterJob$2));
}

void PSPrinterJob$2::init$($PSPrinterJob* this$0, $PrintService* val$pservice) {
	$set(this, this$0, this$0);
	$set(this, val$pservice, val$pservice);
}

$Object* PSPrinterJob$2::run() {
	$beforeCallerSensitive();
	try {
		$Class* psClass = $Class::forName("sun.print.IPPPrintService"_s);
		if ($nc(psClass)->isInstance(this->val$pservice)) {
			$var($Method, isPSMethod, psClass->getMethod("isPostscript"_s, ($ClassArray*)nullptr));
			return $of($cast($Boolean, $nc(isPSMethod)->invoke(this->val$pservice, ($ObjectArray*)nullptr)));
		}
	} catch ($Throwable& t) {
	}
	$init($Boolean);
	return $of($Boolean::TRUE);
}

PSPrinterJob$2::PSPrinterJob$2() {
}

$Class* PSPrinterJob$2::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$2, name, initialize, &_PSPrinterJob$2_ClassInfo_, allocate$PSPrinterJob$2);
	return class$;
}

$Class* PSPrinterJob$2::class$ = nullptr;

	} // print
} // sun
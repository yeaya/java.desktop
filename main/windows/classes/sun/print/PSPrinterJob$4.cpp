#include <sun/print/PSPrinterJob$4.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrintService = ::javax::print::PrintService;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob$4_FieldInfo_[] = {
	{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$4, this$0)},
	{"val$pservice", "Ljavax/print/PrintService;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$4, val$pservice)},
	{}
};

$MethodInfo _PSPrinterJob$4_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PSPrinterJob;Ljavax/print/PrintService;)V", "()V", 0, $method(static_cast<void(PSPrinterJob$4::*)($PSPrinterJob*,$PrintService*)>(&PSPrinterJob$4::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PSPrinterJob$4_EnclosingMethodInfo_ = {
	"sun.print.PSPrinterJob",
	"startPage",
	"(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;IZ)V"
};

$InnerClassInfo _PSPrinterJob$4_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PSPrinterJob$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PSPrinterJob$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PSPrinterJob$4_FieldInfo_,
	_PSPrinterJob$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_PSPrinterJob$4_EnclosingMethodInfo_,
	_PSPrinterJob$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$4($Class* clazz) {
	return $of($alloc(PSPrinterJob$4));
}

void PSPrinterJob$4::init$($PSPrinterJob* this$0, $PrintService* val$pservice) {
	$set(this, this$0, this$0);
	$set(this, val$pservice, val$pservice);
}

$Object* PSPrinterJob$4::run() {
	$beforeCallerSensitive();
	try {
		$Class* psClass = $Class::forName("sun.print.IPPPrintService"_s);
		if ($nc(psClass)->isInstance(this->val$pservice)) {
			$var($Method, isPSMethod, psClass->getMethod("isPostscript"_s, ($ClassArray*)nullptr));
			return $of($cast($Boolean, $nc(isPSMethod)->invoke(this->val$pservice, ($ObjectArray*)nullptr)));
		}
	} catch ($Throwable&) {
		$catch();
	}
	$init($Boolean);
	return $of($Boolean::TRUE);
}

PSPrinterJob$4::PSPrinterJob$4() {
}

$Class* PSPrinterJob$4::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$4, name, initialize, &_PSPrinterJob$4_ClassInfo_, allocate$PSPrinterJob$4);
	return class$;
}

$Class* PSPrinterJob$4::class$ = nullptr;

	} // print
} // sun
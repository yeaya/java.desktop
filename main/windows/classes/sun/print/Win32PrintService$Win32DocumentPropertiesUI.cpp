#include <sun/print/Win32PrintService$Win32DocumentPropertiesUI.h>

#include <java/awt/Window.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <sun/print/DocumentPropertiesUI.h>
#include <sun/print/Win32PrintService.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintService = ::javax::print::PrintService;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;
using $DocumentPropertiesUI = ::sun::print::DocumentPropertiesUI;
using $Win32PrintService = ::sun::print::Win32PrintService;

namespace sun {
	namespace print {

$FieldInfo _Win32PrintService$Win32DocumentPropertiesUI_FieldInfo_[] = {
	{"service", "Lsun/print/Win32PrintService;", nullptr, 0, $field(Win32PrintService$Win32DocumentPropertiesUI, service)},
	{}
};

$MethodInfo _Win32PrintService$Win32DocumentPropertiesUI_MethodInfo_[] = {
	{"<init>", "(Lsun/print/Win32PrintService;)V", nullptr, $PRIVATE, $method(static_cast<void(Win32PrintService$Win32DocumentPropertiesUI::*)($Win32PrintService*)>(&Win32PrintService$Win32DocumentPropertiesUI::init$))},
	{"showDocumentProperties", "(Ljava/awt/print/PrinterJob;Ljava/awt/Window;Ljavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;)Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Win32PrintService$Win32DocumentPropertiesUI_InnerClassesInfo_[] = {
	{"sun.print.Win32PrintService$Win32DocumentPropertiesUI", "sun.print.Win32PrintService", "Win32DocumentPropertiesUI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Win32PrintService$Win32DocumentPropertiesUI_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.Win32PrintService$Win32DocumentPropertiesUI",
	"sun.print.DocumentPropertiesUI",
	nullptr,
	_Win32PrintService$Win32DocumentPropertiesUI_FieldInfo_,
	_Win32PrintService$Win32DocumentPropertiesUI_MethodInfo_,
	nullptr,
	nullptr,
	_Win32PrintService$Win32DocumentPropertiesUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.Win32PrintService"
};

$Object* allocate$Win32PrintService$Win32DocumentPropertiesUI($Class* clazz) {
	return $of($alloc(Win32PrintService$Win32DocumentPropertiesUI));
}

void Win32PrintService$Win32DocumentPropertiesUI::init$($Win32PrintService* s) {
	$DocumentPropertiesUI::init$();
	$set(this, service, s);
}

$PrintRequestAttributeSet* Win32PrintService$Win32DocumentPropertiesUI::showDocumentProperties($PrinterJob* job, $Window* owner, $PrintService* service, $PrintRequestAttributeSet* aset) {
	if (!($instanceOf($WPrinterJob, job))) {
		return nullptr;
	}
	$var($WPrinterJob, wJob, $cast($WPrinterJob, job));
	return $nc(wJob)->showDocumentProperties(owner, service, aset);
}

Win32PrintService$Win32DocumentPropertiesUI::Win32PrintService$Win32DocumentPropertiesUI() {
}

$Class* Win32PrintService$Win32DocumentPropertiesUI::load$($String* name, bool initialize) {
	$loadClass(Win32PrintService$Win32DocumentPropertiesUI, name, initialize, &_Win32PrintService$Win32DocumentPropertiesUI_ClassInfo_, allocate$Win32PrintService$Win32DocumentPropertiesUI);
	return class$;
}

$Class* Win32PrintService$Win32DocumentPropertiesUI::class$ = nullptr;

	} // print
} // sun
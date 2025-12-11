#include <sun/lwawt/macosx/CPrinterJobDialog.h>

#include <java/awt/Frame.h>
#include <java/awt/print/Pageable.h>
#include <sun/lwawt/macosx/CPrinterDialog.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $Pageable = ::java::awt::print::Pageable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterDialog = ::sun::lwawt::macosx::CPrinterDialog;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterJobDialog_FieldInfo_[] = {
	{"fPageable", "Ljava/awt/print/Pageable;", nullptr, $PRIVATE, $field(CPrinterJobDialog, fPageable)},
	{"fAllowPrintToFile", "Z", nullptr, $PRIVATE, $field(CPrinterJobDialog, fAllowPrintToFile)},
	{}
};

$MethodInfo _CPrinterJobDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/print/Pageable;Z)V", nullptr, 0, $method(static_cast<void(CPrinterJobDialog::*)($Frame*,$CPrinterJob*,$Pageable*,bool)>(&CPrinterJobDialog::init$))},
	{"showDialog", "()Z", nullptr, $PROTECTED | $NATIVE},
	{}
};

#define _METHOD_INDEX_showDialog 1

$ClassInfo _CPrinterJobDialog_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJobDialog",
	"sun.lwawt.macosx.CPrinterDialog",
	nullptr,
	_CPrinterJobDialog_FieldInfo_,
	_CPrinterJobDialog_MethodInfo_
};

$Object* allocate$CPrinterJobDialog($Class* clazz) {
	return $of($alloc(CPrinterJobDialog));
}

void CPrinterJobDialog::init$($Frame* parent, $CPrinterJob* printerJob, $Pageable* doc, bool allowPrintToFile) {
	$CPrinterDialog::init$(parent, printerJob);
	$set(this, fPageable, doc);
	this->fAllowPrintToFile = allowPrintToFile;
}

bool CPrinterJobDialog::showDialog() {
	bool $ret = false;
	$prepareNative(CPrinterJobDialog, showDialog, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

CPrinterJobDialog::CPrinterJobDialog() {
}

$Class* CPrinterJobDialog::load$($String* name, bool initialize) {
	$loadClass(CPrinterJobDialog, name, initialize, &_CPrinterJobDialog_ClassInfo_, allocate$CPrinterJobDialog);
	return class$;
}

$Class* CPrinterJobDialog::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
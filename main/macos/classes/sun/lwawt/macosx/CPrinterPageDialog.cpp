#include <sun/lwawt/macosx/CPrinterPageDialog.h>

#include <java/awt/Frame.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <sun/lwawt/macosx/CPrinterDialog.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterDialog = ::sun::lwawt::macosx::CPrinterDialog;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterPageDialog_FieldInfo_[] = {
	{"fPage", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(CPrinterPageDialog, fPage)},
	{"fPainter", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(CPrinterPageDialog, fPainter)},
	{}
};

$MethodInfo _CPrinterPageDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)V", nullptr, 0, $method(static_cast<void(CPrinterPageDialog::*)($Frame*,$CPrinterJob*,$PageFormat*,$Printable*)>(&CPrinterPageDialog::init$))},
	{"showDialog", "()Z", nullptr, $PROTECTED | $NATIVE},
	{}
};

#define _METHOD_INDEX_showDialog 1

$ClassInfo _CPrinterPageDialog_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterPageDialog",
	"sun.lwawt.macosx.CPrinterDialog",
	nullptr,
	_CPrinterPageDialog_FieldInfo_,
	_CPrinterPageDialog_MethodInfo_
};

$Object* allocate$CPrinterPageDialog($Class* clazz) {
	return $of($alloc(CPrinterPageDialog));
}

void CPrinterPageDialog::init$($Frame* parent, $CPrinterJob* printerJob, $PageFormat* page, $Printable* painter) {
	$CPrinterDialog::init$(parent, printerJob);
	$set(this, fPage, page);
	$set(this, fPainter, painter);
}

bool CPrinterPageDialog::showDialog() {
	bool $ret = false;
	$prepareNative(CPrinterPageDialog, showDialog, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

CPrinterPageDialog::CPrinterPageDialog() {
}

$Class* CPrinterPageDialog::load$($String* name, bool initialize) {
	$loadClass(CPrinterPageDialog, name, initialize, &_CPrinterPageDialog_ClassInfo_, allocate$CPrinterPageDialog);
	return class$;
}

$Class* CPrinterPageDialog::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
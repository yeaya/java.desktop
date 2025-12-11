#include <sun/lwawt/macosx/CPrinterDialog.h>

#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterDialog_FieldInfo_[] = {
	{"fPrinterJob", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $PRIVATE | $FINAL, $field(CPrinterDialog, fPrinterJob)},
	{"retval", "Z", nullptr, $PRIVATE, $field(CPrinterDialog, retval)},
	{}
};

$MethodInfo _CPrinterDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(static_cast<void(CPrinterDialog::*)($Frame*,$CPrinterJob*)>(&CPrinterDialog::init$))},
	{"getRetVal", "()Z", nullptr, $PUBLIC},
	{"setRetVal", "(Z)V", nullptr, $PUBLIC},
	{"showDialog", "()Z", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _CPrinterDialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.lwawt.macosx.CPrinterDialog",
	"java.awt.Dialog",
	nullptr,
	_CPrinterDialog_FieldInfo_,
	_CPrinterDialog_MethodInfo_
};

$Object* allocate$CPrinterDialog($Class* clazz) {
	return $of($alloc(CPrinterDialog));
}

void CPrinterDialog::init$($Frame* parent, $CPrinterJob* printerJob) {
	$Dialog::init$(parent, true);
	this->retval = false;
	$set(this, fPrinterJob, printerJob);
	setLayout(nullptr);
}

void CPrinterDialog::setRetVal(bool ret) {
	this->retval = ret;
}

bool CPrinterDialog::getRetVal() {
	return this->retval;
}

CPrinterDialog::CPrinterDialog() {
}

$Class* CPrinterDialog::load$($String* name, bool initialize) {
	$loadClass(CPrinterDialog, name, initialize, &_CPrinterDialog_ClassInfo_, allocate$CPrinterDialog);
	return class$;
}

$Class* CPrinterDialog::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
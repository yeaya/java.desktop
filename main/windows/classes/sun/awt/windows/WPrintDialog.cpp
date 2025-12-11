#include <sun/awt/windows/WPrintDialog.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/PrintJob.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/print/PrinterJob.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $WCanvasPeer = ::sun::awt::windows::WCanvasPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPrintDialog_FieldInfo_[] = {
	{"job", "Ljava/awt/PrintJob;", nullptr, $PROTECTED, $field(WPrintDialog, job)},
	{"pjob", "Ljava/awt/print/PrinterJob;", nullptr, $PROTECTED, $field(WPrintDialog, pjob)},
	{"retval", "Z", nullptr, $PRIVATE, $field(WPrintDialog, retval)},
	{}
};

$MethodInfo _WPrintDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Ljava/awt/print/PrinterJob;)V", nullptr, 0, $method(static_cast<void(WPrintDialog::*)($Frame*,$PrinterJob*)>(&WPrintDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/awt/print/PrinterJob;)V", nullptr, 0, $method(static_cast<void(WPrintDialog::*)($Dialog*,$PrinterJob*)>(&WPrintDialog::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"getRetVal", "()Z", nullptr, $FINAL, $method(static_cast<bool(WPrintDialog::*)()>(&WPrintDialog::getRetVal))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WPrintDialog::initIDs))},
	{"setPeer", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $FINAL, $method(static_cast<void(WPrintDialog::*)($ComponentPeer*)>(&WPrintDialog::setPeer))},
	{"setRetVal", "(Z)V", nullptr, $FINAL, $method(static_cast<void(WPrintDialog::*)(bool)>(&WPrintDialog::setRetVal))},
	{}
};

#define _METHOD_INDEX_initIDs 4

$ClassInfo _WPrintDialog_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WPrintDialog",
	"java.awt.Dialog",
	nullptr,
	_WPrintDialog_FieldInfo_,
	_WPrintDialog_MethodInfo_
};

$Object* allocate$WPrintDialog($Class* clazz) {
	return $of($alloc(WPrintDialog));
}

void WPrintDialog::init$($Frame* parent, $PrinterJob* control) {
	$Dialog::init$(parent, true);
	this->retval = false;
	$set(this, pjob, control);
	setLayout(nullptr);
}

void WPrintDialog::init$($Dialog* parent, $PrinterJob* control) {
	$Dialog::init$(parent, ""_s, true);
	this->retval = false;
	$set(this, pjob, control);
	setLayout(nullptr);
}

void WPrintDialog::setPeer($ComponentPeer* p) {
	$nc($($AWTAccessor::getComponentAccessor()))->setPeer(this, p);
}

void WPrintDialog::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($Container, parent, getParent());
		if (parent != nullptr && !parent->isDisplayable()) {
			parent->addNotify();
		}
		if (!isDisplayable()) {
			$var($ComponentPeer, peer, static_cast<$ComponentPeer*>(static_cast<$WComponentPeer*>(static_cast<$WCanvasPeer*>(static_cast<$WPanelPeer*>(static_cast<$WWindowPeer*>($nc(($cast($WToolkit, $($Toolkit::getDefaultToolkit()))))->createWPrintDialog(this)))))));
			setPeer(peer);
		}
		$Dialog::addNotify();
	}
}

void WPrintDialog::setRetVal(bool ret) {
	this->retval = ret;
}

bool WPrintDialog::getRetVal() {
	return this->retval;
}

void WPrintDialog::initIDs() {
	$init(WPrintDialog);
	$prepareNativeStatic(WPrintDialog, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$WPrintDialog($Class* class$) {
	{
		WPrintDialog::initIDs();
	}
}

WPrintDialog::WPrintDialog() {
}

$Class* WPrintDialog::load$($String* name, bool initialize) {
	$loadClass(WPrintDialog, name, initialize, &_WPrintDialog_ClassInfo_, clinit$WPrintDialog, allocate$WPrintDialog);
	return class$;
}

$Class* WPrintDialog::class$ = nullptr;

		} // windows
	} // awt
} // sun
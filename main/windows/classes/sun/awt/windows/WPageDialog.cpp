#include <sun/awt/windows/WPageDialog.h>

#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPageDialogPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WPrintDialog.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WCanvasPeer = ::sun::awt::windows::WCanvasPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WPageDialogPeer = ::sun::awt::windows::WPageDialogPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WPrintDialog = ::sun::awt::windows::WPrintDialog;
using $WPrintDialogPeer = ::sun::awt::windows::WPrintDialogPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPageDialog_FieldInfo_[] = {
	{"page", "Ljava/awt/print/PageFormat;", nullptr, 0, $field(WPageDialog, page)},
	{"painter", "Ljava/awt/print/Printable;", nullptr, 0, $field(WPageDialog, painter)},
	{}
};

$MethodInfo _WPageDialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Ljava/awt/print/PrinterJob;Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)V", nullptr, 0, $method(static_cast<void(WPageDialog::*)($Frame*,$PrinterJob*,$PageFormat*,$Printable*)>(&WPageDialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/awt/print/PrinterJob;Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)V", nullptr, 0, $method(static_cast<void(WPageDialog::*)($Dialog*,$PrinterJob*,$PageFormat*,$Printable*)>(&WPageDialog::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WPageDialog::initIDs))},
	{}
};

#define _METHOD_INDEX_initIDs 3

$ClassInfo _WPageDialog_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WPageDialog",
	"sun.awt.windows.WPrintDialog",
	nullptr,
	_WPageDialog_FieldInfo_,
	_WPageDialog_MethodInfo_
};

$Object* allocate$WPageDialog($Class* clazz) {
	return $of($alloc(WPageDialog));
}

void WPageDialog::init$($Frame* parent, $PrinterJob* control, $PageFormat* page, $Printable* painter) {
	$WPrintDialog::init$(parent, control);
	$set(this, page, page);
	$set(this, painter, painter);
}

void WPageDialog::init$($Dialog* parent, $PrinterJob* control, $PageFormat* page, $Printable* painter) {
	$WPrintDialog::init$(parent, control);
	$set(this, page, page);
	$set(this, painter, painter);
}

void WPageDialog::addNotify() {
	$synchronized(getTreeLock()) {
		$var($Container, parent, getParent());
		if (parent != nullptr && !parent->isDisplayable()) {
			parent->addNotify();
		}
		if (!isDisplayable()) {
			$var($ComponentPeer, peer, static_cast<$ComponentPeer*>(static_cast<$WComponentPeer*>(static_cast<$WCanvasPeer*>(static_cast<$WPanelPeer*>(static_cast<$WWindowPeer*>(static_cast<$WPrintDialogPeer*>($nc(($cast($WToolkit, $($Toolkit::getDefaultToolkit()))))->createWPageDialog(this))))))));
			setPeer(peer);
		}
		$WPrintDialog::addNotify();
	}
}

void WPageDialog::initIDs() {
	$init(WPageDialog);
	$prepareNativeStatic(WPageDialog, initIDs, void);
	$invokeNativeStatic(WPageDialog, initIDs);
	$finishNativeStatic();
}

void clinit$WPageDialog($Class* class$) {
	{
		WPageDialog::initIDs();
	}
}

WPageDialog::WPageDialog() {
}

$Class* WPageDialog::load$($String* name, bool initialize) {
	$loadClass(WPageDialog, name, initialize, &_WPageDialog_ClassInfo_, clinit$WPageDialog, allocate$WPageDialog);
	return class$;
}

$Class* WPageDialog::class$ = nullptr;

		} // windows
	} // awt
} // sun
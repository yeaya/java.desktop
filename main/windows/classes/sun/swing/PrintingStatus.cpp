#include <sun/swing/PrintingStatus.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/text/MessageFormat.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/PrintingStatus$1.h>
#include <sun/swing/PrintingStatus$2.h>
#include <sun/swing/PrintingStatus$3.h>
#include <sun/swing/PrintingStatus$4.h>
#include <sun/swing/PrintingStatus$NotificationPrintable.h>
#include <jcpp.h>

#undef DEFAULT_OPTION
#undef DO_NOTHING_ON_CLOSE
#undef INFORMATION_MESSAGE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Printable = ::java::awt::print::Printable;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $MessageFormat = ::java::text::MessageFormat;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JLabel = ::javax::swing::JLabel;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JViewport = ::javax::swing::JViewport;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $PrintingStatus$1 = ::sun::swing::PrintingStatus$1;
using $PrintingStatus$2 = ::sun::swing::PrintingStatus$2;
using $PrintingStatus$3 = ::sun::swing::PrintingStatus$3;
using $PrintingStatus$4 = ::sun::swing::PrintingStatus$4;
using $PrintingStatus$NotificationPrintable = ::sun::swing::PrintingStatus$NotificationPrintable;

namespace sun {
	namespace swing {

$FieldInfo _PrintingStatus_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PrintingStatus, $assertionsDisabled)},
	{"job", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE | $FINAL, $field(PrintingStatus, job)},
	{"parent", "Ljava/awt/Component;", nullptr, $PRIVATE | $FINAL, $field(PrintingStatus, parent)},
	{"abortDialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(PrintingStatus, abortDialog)},
	{"abortButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(PrintingStatus, abortButton)},
	{"statusLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(PrintingStatus, statusLabel)},
	{"statusFormat", "Ljava/text/MessageFormat;", nullptr, $PRIVATE, $field(PrintingStatus, statusFormat)},
	{"isAborted", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(PrintingStatus, isAborted$)},
	{"abortAction", "Ljavax/swing/Action;", nullptr, $PRIVATE | $FINAL, $field(PrintingStatus, abortAction)},
	{"closeListener", "Ljava/awt/event/WindowAdapter;", nullptr, $PRIVATE | $FINAL, $field(PrintingStatus, closeListener)},
	{}
};

$MethodInfo _PrintingStatus_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/awt/print/PrinterJob;)V", nullptr, $PROTECTED, $method(static_cast<void(PrintingStatus::*)($Component*,$PrinterJob*)>(&PrintingStatus::init$))},
	{"createNotificationPrintable", "(Ljava/awt/print/Printable;)Ljava/awt/print/Printable;", nullptr, $PUBLIC},
	{"createPrintingStatus", "(Ljava/awt/Component;Ljava/awt/print/PrinterJob;)Lsun/swing/PrintingStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PrintingStatus*(*)($Component*,$PrinterJob*)>(&PrintingStatus::createPrintingStatus))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"disposeOnEDT", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintingStatus::*)()>(&PrintingStatus::disposeOnEDT))},
	{"getInt", "(Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(Object$*,int32_t)>(&PrintingStatus::getInt))},
	{"init", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintingStatus::*)()>(&PrintingStatus::init))},
	{"isAborted", "()Z", nullptr, $PUBLIC},
	{"showModal", "(Z)V", nullptr, $PUBLIC},
	{"showModalOnEDT", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingStatus::*)(bool)>(&PrintingStatus::showModalOnEDT))},
	{}
};

$InnerClassInfo _PrintingStatus_InnerClassesInfo_[] = {
	{"sun.swing.PrintingStatus$NotificationPrintable", "sun.swing.PrintingStatus", "NotificationPrintable", $PRIVATE},
	{"sun.swing.PrintingStatus$4", nullptr, nullptr, 0},
	{"sun.swing.PrintingStatus$3", nullptr, nullptr, 0},
	{"sun.swing.PrintingStatus$2", nullptr, nullptr, 0},
	{"sun.swing.PrintingStatus$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingStatus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.PrintingStatus",
	"java.lang.Object",
	nullptr,
	_PrintingStatus_FieldInfo_,
	_PrintingStatus_MethodInfo_,
	nullptr,
	nullptr,
	_PrintingStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.PrintingStatus$NotificationPrintable,sun.swing.PrintingStatus$NotificationPrintable$1,sun.swing.PrintingStatus$4,sun.swing.PrintingStatus$3,sun.swing.PrintingStatus$2,sun.swing.PrintingStatus$1"
};

$Object* allocate$PrintingStatus($Class* clazz) {
	return $of($alloc(PrintingStatus));
}

bool PrintingStatus::$assertionsDisabled = false;

PrintingStatus* PrintingStatus::createPrintingStatus($Component* parent, $PrinterJob* job) {
	$init(PrintingStatus);
	return $new(PrintingStatus, parent, job);
}

void PrintingStatus::init$($Component* parent, $PrinterJob* job) {
	$set(this, isAborted$, $new($AtomicBoolean, false));
	$set(this, abortAction, $new($PrintingStatus$1, this));
	$set(this, closeListener, $new($PrintingStatus$2, this));
	$set(this, job, job);
	$set(this, parent, parent);
}

void PrintingStatus::init() {
	$var($String, progressTitle, $UIManager::getString("PrintingDialog.titleProgressText"_s));
	$var($String, dialogInitialContent, $UIManager::getString("PrintingDialog.contentInitialText"_s));
	$set(this, statusFormat, $new($MessageFormat, $($UIManager::getString("PrintingDialog.contentProgressText"_s))));
	$var($String, abortText, $UIManager::getString("PrintingDialog.abortButtonText"_s));
	$var($String, abortTooltip, $UIManager::getString("PrintingDialog.abortButtonToolTipText"_s));
	int32_t abortMnemonic = getInt("PrintingDialog.abortButtonMnemonic"_s, -1);
	int32_t abortMnemonicIndex = getInt("PrintingDialog.abortButtonDisplayedMnemonicIndex"_s, -1);
	$set(this, abortButton, $new($JButton, abortText));
	$nc(this->abortButton)->addActionListener(this->abortAction);
	$nc(this->abortButton)->setToolTipText(abortTooltip);
	if (abortMnemonic != -1) {
		$nc(this->abortButton)->setMnemonic(abortMnemonic);
	}
	if (abortMnemonicIndex != -1) {
		$nc(this->abortButton)->setDisplayedMnemonicIndex(abortMnemonicIndex);
	}
	$set(this, statusLabel, $new($JLabel, dialogInitialContent));
	$var($JOptionPane, abortPane, $new($JOptionPane, this->statusLabel, $JOptionPane::INFORMATION_MESSAGE, $JOptionPane::DEFAULT_OPTION, nullptr, $$new($ObjectArray, {$of(this->abortButton)}), this->abortButton));
	$nc($(abortPane->getActionMap()))->put("close"_s, this->abortAction);
	if (this->parent != nullptr && $instanceOf($JViewport, $($nc(this->parent)->getParent()))) {
		$set(this, abortDialog, abortPane->createDialog($($nc(this->parent)->getParent()), progressTitle));
	} else {
		$set(this, abortDialog, abortPane->createDialog(this->parent, progressTitle));
	}
	$nc(this->abortDialog)->setDefaultCloseOperation($JDialog::DO_NOTHING_ON_CLOSE);
	$nc(this->abortDialog)->addWindowListener(this->closeListener);
}

void PrintingStatus::showModal(bool isModal) {
	if ($SwingUtilities::isEventDispatchThread()) {
		showModalOnEDT(isModal);
	} else {
		try {
			$SwingUtilities::invokeAndWait($$new($PrintingStatus$3, this, isModal));
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		} catch ($InvocationTargetException&) {
			$var($InvocationTargetException, e, $catch());
			$var($Throwable, cause, e->getCause());
			if ($instanceOf($RuntimeException, cause)) {
				$throw($cast($RuntimeException, cause));
			} else if ($instanceOf($Error, cause)) {
				$throw($cast($Error, cause));
			} else {
				$throwNew($RuntimeException, cause);
			}
		}
	}
}

void PrintingStatus::showModalOnEDT(bool isModal) {
	if (!PrintingStatus::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	init();
	$nc(this->abortDialog)->setModal(isModal);
	$nc(this->abortDialog)->setVisible(true);
}

void PrintingStatus::dispose() {
	if ($SwingUtilities::isEventDispatchThread()) {
		disposeOnEDT();
	} else {
		$SwingUtilities::invokeLater($$new($PrintingStatus$4, this));
	}
}

void PrintingStatus::disposeOnEDT() {
	if (!PrintingStatus::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	if (this->abortDialog != nullptr) {
		$nc(this->abortDialog)->removeWindowListener(this->closeListener);
		$nc(this->abortDialog)->dispose();
		$set(this, abortDialog, nullptr);
	}
}

bool PrintingStatus::isAborted() {
	return $nc(this->isAborted$)->get();
}

$Printable* PrintingStatus::createNotificationPrintable($Printable* printable) {
	return $new($PrintingStatus$NotificationPrintable, this, printable);
}

int32_t PrintingStatus::getInt(Object$* key, int32_t defaultValue) {
	$init(PrintingStatus);
	$var($Object, value, $UIManager::get(key));
	if ($instanceOf($Integer, value)) {
		return $nc(($cast($Integer, value)))->intValue();
	}
	if ($instanceOf($String, value)) {
		try {
			return $Integer::parseInt($cast($String, value));
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	return defaultValue;
}

void clinit$PrintingStatus($Class* class$) {
	PrintingStatus::$assertionsDisabled = !PrintingStatus::class$->desiredAssertionStatus();
}

PrintingStatus::PrintingStatus() {
}

$Class* PrintingStatus::load$($String* name, bool initialize) {
	$loadClass(PrintingStatus, name, initialize, &_PrintingStatus_ClassInfo_, clinit$PrintingStatus, allocate$PrintingStatus);
	return class$;
}

$Class* PrintingStatus::class$ = nullptr;

	} // swing
} // sun
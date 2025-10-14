#include <javax/swing/TransferHandler$TransferAction.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/TransferHandler$TransferAction$1.h>
#include <javax/swing/TransferHandler$TransferAction$2.h>
#include <javax/swing/TransferHandler$TransferSupport.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIManager.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef NAME

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Toolkit = ::java::awt::Toolkit;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $EventObject = ::java::util::EventObject;
using $Action = ::javax::swing::Action;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$TransferAction$1 = ::javax::swing::TransferHandler$TransferAction$1;
using $TransferHandler$TransferAction$2 = ::javax::swing::TransferHandler$TransferAction$2;
using $TransferHandler$TransferSupport = ::javax::swing::TransferHandler$TransferSupport;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$TransferAction_FieldInfo_[] = {
	{"javaSecurityAccess", "Ljdk/internal/access/JavaSecurityAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransferHandler$TransferAction, javaSecurityAccess)},
	{"SandboxClipboardKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(TransferHandler$TransferAction, SandboxClipboardKey)},
	{}
};

$MethodInfo _TransferHandler$TransferAction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TransferHandler$TransferAction::*)($String*)>(&TransferHandler$TransferAction::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"actionPerformedImpl", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$TransferAction::*)($ActionEvent*)>(&TransferHandler$TransferAction::actionPerformedImpl))},
	{"getClipboard", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Clipboard;", nullptr, $PRIVATE, $method(static_cast<$Clipboard*(TransferHandler$TransferAction::*)($JComponent*)>(&TransferHandler$TransferAction::getClipboard))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransferHandler$TransferAction_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$TransferAction", "javax.swing.TransferHandler", "TransferAction", $STATIC},
	{"javax.swing.TransferHandler$TransferAction$2", nullptr, nullptr, 0},
	{"javax.swing.TransferHandler$TransferAction$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransferHandler$TransferAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$TransferAction",
	"sun.swing.UIAction",
	"javax.swing.plaf.UIResource",
	_TransferHandler$TransferAction_FieldInfo_,
	_TransferHandler$TransferAction_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$TransferAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$TransferAction($Class* clazz) {
	return $of($alloc(TransferHandler$TransferAction));
}

int32_t TransferHandler$TransferAction::hashCode() {
	 return this->$UIAction::hashCode();
}

bool TransferHandler$TransferAction::equals(Object$* arg0) {
	 return this->$UIAction::equals(arg0);
}

$Object* TransferHandler$TransferAction::clone() {
	 return this->$UIAction::clone();
}

$String* TransferHandler$TransferAction::toString() {
	 return this->$UIAction::toString();
}

void TransferHandler$TransferAction::finalize() {
	this->$UIAction::finalize();
}

$JavaSecurityAccess* TransferHandler$TransferAction::javaSecurityAccess = nullptr;

$Object* TransferHandler$TransferAction::SandboxClipboardKey = nullptr;

void TransferHandler$TransferAction::init$($String* name) {
	$UIAction::init$(name);
}

bool TransferHandler$TransferAction::accept(Object$* sender) {
	return !($instanceOf($JComponent, sender) && $nc(($cast($JComponent, sender)))->getTransferHandler() == nullptr);
}

void TransferHandler$TransferAction::actionPerformed($ActionEvent* e) {
	$var($Object, src, $nc(e)->getSource());
	$var($PrivilegedAction, action, $new($TransferHandler$TransferAction$1, this, e));
	$var($AccessControlContext, stack, $AccessController::getContext());
	$var($AccessControlContext, srcAcc, $nc($($AWTAccessor::getComponentAccessor()))->getAccessControlContext($cast($Component, src)));
	$var($AccessControlContext, eventAcc, $nc($($AWTAccessor::getAWTEventAccessor()))->getAccessControlContext(e));
	if (srcAcc == nullptr) {
		$nc(TransferHandler$TransferAction::javaSecurityAccess)->doIntersectionPrivilege(action, stack, eventAcc);
	} else {
		$nc(TransferHandler$TransferAction::javaSecurityAccess)->doIntersectionPrivilege($$new($TransferHandler$TransferAction$2, this, action, eventAcc), stack, srcAcc);
	}
}

void TransferHandler$TransferAction::actionPerformedImpl($ActionEvent* e) {
	$var($Object, src, $nc(e)->getSource());
	if ($instanceOf($JComponent, src)) {
		$var($JComponent, c, $cast($JComponent, src));
		$var($TransferHandler, th, $nc(c)->getTransferHandler());
		$var($Clipboard, clipboard, getClipboard(c));
		$init($Action);
		$var($String, name, $cast($String, getValue($Action::NAME)));
		$var($Transferable, trans, nullptr);
		try {
			if ((clipboard != nullptr) && (th != nullptr) && (name != nullptr)) {
				if ("cut"_s->equals(name)) {
					th->exportToClipboard(c, clipboard, 2);
				} else if ("copy"_s->equals(name)) {
					th->exportToClipboard(c, clipboard, 1);
				} else if ("paste"_s->equals(name)) {
					$assign(trans, clipboard->getContents(nullptr));
				}
			}
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, ise, $catch());
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(c);
			return;
		}
		if (trans != nullptr) {
			$nc(th)->importData($$new($TransferHandler$TransferSupport, static_cast<$Component*>(c), trans));
		}
	}
}

$Clipboard* TransferHandler$TransferAction::getClipboard($JComponent* c) {
	if ($SwingUtilities2::canAccessSystemClipboard()) {
		return $nc($($nc(c)->getToolkit()))->getSystemClipboard();
	}
	$var($Clipboard, clipboard, $cast($Clipboard, $nc($($AppContext::getAppContext()))->get(TransferHandler$TransferAction::SandboxClipboardKey)));
	if (clipboard == nullptr) {
		$assign(clipboard, $new($Clipboard, "Sandboxed Component Clipboard"_s));
		$nc($($AppContext::getAppContext()))->put(TransferHandler$TransferAction::SandboxClipboardKey, clipboard);
	}
	return clipboard;
}

void clinit$TransferHandler$TransferAction($Class* class$) {
	$assignStatic(TransferHandler$TransferAction::javaSecurityAccess, $SharedSecrets::getJavaSecurityAccess());
	$assignStatic(TransferHandler$TransferAction::SandboxClipboardKey, $new($Object));
}

TransferHandler$TransferAction::TransferHandler$TransferAction() {
}

$Class* TransferHandler$TransferAction::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$TransferAction, name, initialize, &_TransferHandler$TransferAction_ClassInfo_, clinit$TransferHandler$TransferAction, allocate$TransferHandler$TransferAction);
	return class$;
}

$Class* TransferHandler$TransferAction::class$ = nullptr;

	} // swing
} // javax
#include <sun/lwawt/macosx/CPrinterDialogPeer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CPrinterDialog.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

#undef DIALOG

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CPrinterDialog = ::sun::lwawt::macosx::CPrinterDialog;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterDialogPeer$$Lambda$lambda$setVisible$0 : public $Runnable {
	$class(CPrinterDialogPeer$$Lambda$lambda$setVisible$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(CPrinterDialogPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$setVisible$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPrinterDialogPeer$$Lambda$lambda$setVisible$0>());
	}
	CPrinterDialogPeer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPrinterDialogPeer$$Lambda$lambda$setVisible$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPrinterDialogPeer$$Lambda$lambda$setVisible$0, inst$)},
	{}
};
$MethodInfo CPrinterDialogPeer$$Lambda$lambda$setVisible$0::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterDialogPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(CPrinterDialogPeer$$Lambda$lambda$setVisible$0::*)(CPrinterDialogPeer*)>(&CPrinterDialogPeer$$Lambda$lambda$setVisible$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPrinterDialogPeer$$Lambda$lambda$setVisible$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPrinterDialogPeer$$Lambda$lambda$setVisible$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CPrinterDialogPeer$$Lambda$lambda$setVisible$0::load$($String* name, bool initialize) {
	$loadClass(CPrinterDialogPeer$$Lambda$lambda$setVisible$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPrinterDialogPeer$$Lambda$lambda$setVisible$0::class$ = nullptr;

$FieldInfo _CPrinterDialogPeer_FieldInfo_[] = {
	{"fTarget", "Ljava/awt/Component;", nullptr, 0, $field(CPrinterDialogPeer, fTarget)},
	{}
};

$MethodInfo _CPrinterDialogPeer_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterDialog;Lsun/lwawt/PlatformComponent;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPrinterDialogPeer::*)($CPrinterDialog*,$PlatformComponent*,$PlatformWindow*)>(&CPrinterDialogPeer::init$))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"handleEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC},
	{"invalidate", "(IIII)V", nullptr, 0},
	{"isRestackSupported", "()Z", nullptr, $PUBLIC},
	{"lambda$setVisible$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPrinterDialogPeer::*)()>(&CPrinterDialogPeer::lambda$setVisible$0))},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"requestFocus", "(ZZ)Z", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, 0},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPrinterDialogPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterDialogPeer",
	"sun.lwawt.LWWindowPeer",
	nullptr,
	_CPrinterDialogPeer_FieldInfo_,
	_CPrinterDialogPeer_MethodInfo_
};

$Object* allocate$CPrinterDialogPeer($Class* clazz) {
	return $of($alloc(CPrinterDialogPeer));
}

void CPrinterDialogPeer::init$($CPrinterDialog* target, $PlatformComponent* platformComponent, $PlatformWindow* platformWindow) {
	$init($LWWindowPeer$PeerType);
	$LWWindowPeer::init$(target, platformComponent, platformWindow, $LWWindowPeer$PeerType::DIALOG);
	$set(this, fTarget, target);
	$LWWindowPeer::initialize();
}

void CPrinterDialogPeer::disposeImpl() {
	$LWCToolkit::targetDisposedPeer(this->fTarget, this);
}

void CPrinterDialogPeer::setVisible(bool visible) {
	$useLocalCurrentObjectStackCache();
	if (visible) {
		$var($Runnable, task, static_cast<$Runnable*>($new(CPrinterDialogPeer$$Lambda$lambda$setVisible$0, this)));
		$$new($Thread, nullptr, task, "PrintDialog"_s, 0, false)->start();
	}
}

void CPrinterDialogPeer::toFront() {
}

void CPrinterDialogPeer::toBack() {
}

void CPrinterDialogPeer::setResizable(bool resizable) {
}

void CPrinterDialogPeer::setEnabled(bool enable) {
}

void CPrinterDialogPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
}

bool CPrinterDialogPeer::handleEvent($Event* e) {
	return false;
}

void CPrinterDialogPeer::setForeground($Color* c) {
}

void CPrinterDialogPeer::setBackground($Color* c) {
}

void CPrinterDialogPeer::setFont($Font* f) {
}

bool CPrinterDialogPeer::requestFocus(bool temporary, bool focusedWindowChangeAllowed) {
	return false;
}

void CPrinterDialogPeer::start() {
}

void CPrinterDialogPeer::invalidate(int32_t x, int32_t y, int32_t width, int32_t height) {
}

void CPrinterDialogPeer::addDropTarget($DropTarget* dt) {
}

void CPrinterDialogPeer::removeDropTarget($DropTarget* dt) {
}

bool CPrinterDialogPeer::isRestackSupported() {
	return false;
}

void CPrinterDialogPeer::updateAlwaysOnTopState() {
}

void CPrinterDialogPeer::updateMinimumSize() {
}

void CPrinterDialogPeer::setModalBlocked($Dialog* blocker, bool blocked) {
}

void CPrinterDialogPeer::updateFocusableWindowState() {
}

void CPrinterDialogPeer::lambda$setVisible$0() {
	$var($CPrinterDialog, printerDialog, $cast($CPrinterDialog, this->fTarget));
	$nc(printerDialog)->setRetVal(printerDialog->showDialog());
	printerDialog->setVisible(false);
}

void clinit$CPrinterDialogPeer($Class* class$) {
	{
		$Toolkit::getDefaultToolkit();
	}
}

CPrinterDialogPeer::CPrinterDialogPeer() {
}

$Class* CPrinterDialogPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CPrinterDialogPeer$$Lambda$lambda$setVisible$0::classInfo$.name)) {
			return CPrinterDialogPeer$$Lambda$lambda$setVisible$0::load$(name, initialize);
		}
	}
	$loadClass(CPrinterDialogPeer, name, initialize, &_CPrinterDialogPeer_ClassInfo_, clinit$CPrinterDialogPeer, allocate$CPrinterDialogPeer);
	return class$;
}

$Class* CPrinterDialogPeer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
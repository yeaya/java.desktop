#include <com/apple/laf/AquaMenuBarUI.h>

#include <com/apple/laf/AquaLookAndFeel.h>
#include <com/apple/laf/AquaMenuPainter.h>
#include <com/apple/laf/ScreenMenuBar.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/MenuBar.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $AquaMenuPainter = ::com::apple::laf::AquaMenuPainter;
using $ScreenMenuBar = ::com::apple::laf::ScreenMenuBar;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $MenuBar = ::java::awt::MenuBar;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuBarUI$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(AquaMenuBarUI$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(AquaMenuBarUI::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaMenuBarUI$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaMenuBarUI$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaMenuBarUI$$Lambda$lambda$static$0::*)()>(&AquaMenuBarUI$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaMenuBarUI$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaMenuBarUI$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* AquaMenuBarUI$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(AquaMenuBarUI$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaMenuBarUI$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _AquaMenuBarUI_FieldInfo_[] = {
	{"fScreenMenuBar", "Lcom/apple/laf/ScreenMenuBar;", nullptr, 0, $field(AquaMenuBarUI, fScreenMenuBar)},
	{"useScreenMenuBar", "Z", nullptr, 0, $field(AquaMenuBarUI, useScreenMenuBar)},
	{}
};

$MethodInfo _AquaMenuBarUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaMenuBarUI::*)()>(&AquaMenuBarUI::init$))},
	{"clearScreenMenuBar", "(Ljavax/swing/JFrame;)V", nullptr, 0},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaMenuBarUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getScreenMenuBar", "()Lcom/apple/laf/ScreenMenuBar;", nullptr, $PUBLIC},
	{"getScreenMenuBarProperty", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&AquaMenuBarUI::getScreenMenuBarProperty))},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"isScreenMenuBar", "(Ljavax/swing/JMenuBar;)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)($JMenuBar*)>(&AquaMenuBarUI::isScreenMenuBar))},
	{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&AquaMenuBarUI::lambda$static$0))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setScreenMenuBar", "(Ljavax/swing/JFrame;)Z", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaMenuBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMenuBarUI",
	"javax.swing.plaf.basic.BasicMenuBarUI",
	"com.apple.laf.ScreenMenuBarProvider",
	_AquaMenuBarUI_FieldInfo_,
	_AquaMenuBarUI_MethodInfo_
};

$Object* allocate$AquaMenuBarUI($Class* clazz) {
	return $of($alloc(AquaMenuBarUI));
}

int32_t AquaMenuBarUI::hashCode() {
	 return this->$BasicMenuBarUI::hashCode();
}

bool AquaMenuBarUI::equals(Object$* arg0) {
	 return this->$BasicMenuBarUI::equals(arg0);
}

$Object* AquaMenuBarUI::clone() {
	 return this->$BasicMenuBarUI::clone();
}

$String* AquaMenuBarUI::toString() {
	 return this->$BasicMenuBarUI::toString();
}

void AquaMenuBarUI::finalize() {
	this->$BasicMenuBarUI::finalize();
}

void AquaMenuBarUI::init$() {
	$BasicMenuBarUI::init$();
	this->useScreenMenuBar = getScreenMenuBarProperty();
}

void AquaMenuBarUI::uninstallUI($JComponent* c) {
	if (this->fScreenMenuBar != nullptr) {
		$var($JFrame, frame, ($cast($JFrame, $nc(c)->getTopLevelAncestor())));
		if (frame != nullptr && $equals(frame->getMenuBar(), this->fScreenMenuBar)) {
			frame->setMenuBar(($MenuBar*)nullptr);
		}
		$set(this, fScreenMenuBar, nullptr);
	}
	$BasicMenuBarUI::uninstallUI(c);
}

$ComponentUI* AquaMenuBarUI::createUI($JComponent* c) {
	$init(AquaMenuBarUI);
	return $new(AquaMenuBarUI);
}

void AquaMenuBarUI::installKeyboardActions() {
	if (!this->useScreenMenuBar) {
		$BasicMenuBarUI::installKeyboardActions();
	}
}

void AquaMenuBarUI::uninstallKeyboardActions() {
	if (!this->useScreenMenuBar) {
		$BasicMenuBarUI::uninstallKeyboardActions();
	}
}

void AquaMenuBarUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, var$0, g);
	int32_t var$1 = $nc(c)->getWidth();
	$nc($($AquaMenuPainter::instance()))->paintMenuBarBackground(var$0, var$1, c->getHeight(), c);
}

$Dimension* AquaMenuBarUI::getPreferredSize($JComponent* c) {
	if (isScreenMenuBar($cast($JMenuBar, c))) {
		if (setScreenMenuBar(($cast($JFrame, $($nc(c)->getTopLevelAncestor()))))) {
			return $new($Dimension, 0, 0);
		}
	}
	return nullptr;
}

void AquaMenuBarUI::clearScreenMenuBar($JFrame* frame) {
	if (this->useScreenMenuBar) {
		$nc(frame)->setMenuBar(nullptr);
	}
}

bool AquaMenuBarUI::setScreenMenuBar($JFrame* frame) {
	if (this->useScreenMenuBar) {
		try {
			getScreenMenuBar();
		} catch ($Throwable& t) {
			return false;
		}
		$nc(frame)->setMenuBar(this->fScreenMenuBar);
	}
	return true;
}

$ScreenMenuBar* AquaMenuBarUI::getScreenMenuBar() {
	$synchronized(this) {
		if (this->fScreenMenuBar == nullptr) {
			$set(this, fScreenMenuBar, $new($ScreenMenuBar, this->menuBar));
		}
	}
	return this->fScreenMenuBar;
}

bool AquaMenuBarUI::isScreenMenuBar($JMenuBar* c) {
	$init(AquaMenuBarUI);
	$useLocalCurrentObjectStackCache();
	$var($ComponentUI, ui, $nc(c)->getUI());
	if ($instanceOf(AquaMenuBarUI, ui)) {
		if (!$nc(($cast(AquaMenuBarUI, ui)))->useScreenMenuBar) {
			return false;
		}
		$var($Component, parent, c->getTopLevelAncestor());
		if ($instanceOf($JFrame, parent)) {
			$var($MenuBar, mb, $nc(($cast($JFrame, parent)))->getMenuBar());
			bool thisIsTheJMenuBar = ($nc(($cast($JFrame, parent)))->getJMenuBar() == c);
			if (mb == nullptr) {
				return thisIsTheJMenuBar;
			}
			return ($instanceOf($ScreenMenuBar, mb) && thisIsTheJMenuBar);
		}
	}
	return false;
}

bool AquaMenuBarUI::getScreenMenuBarProperty() {
	$init(AquaMenuBarUI);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($LWCToolkit::isEmbedded()) {
		return false;
	}
	$init($AquaLookAndFeel);
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, $$str({$AquaLookAndFeel::sPropertyPrefix, "useScreenMenuBar"_s}))))))))->booleanValue();
}

$Void* AquaMenuBarUI::lambda$static$0() {
	$init(AquaMenuBarUI);
	$beforeCallerSensitive();
	$System::loadLibrary("osxui"_s);
	return nullptr;
}

void clinit$AquaMenuBarUI($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(AquaMenuBarUI$$Lambda$lambda$static$0)));
	}
}

AquaMenuBarUI::AquaMenuBarUI() {
}

$Class* AquaMenuBarUI::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AquaMenuBarUI$$Lambda$lambda$static$0::classInfo$.name)) {
			return AquaMenuBarUI$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(AquaMenuBarUI, name, initialize, &_AquaMenuBarUI_ClassInfo_, clinit$AquaMenuBarUI, allocate$AquaMenuBarUI);
	return class$;
}

$Class* AquaMenuBarUI::class$ = nullptr;

		} // laf
	} // apple
} // com
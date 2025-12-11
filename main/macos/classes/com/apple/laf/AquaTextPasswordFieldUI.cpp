#include <com/apple/laf/AquaTextPasswordFieldUI.h>

#include <com/apple/laf/AquaTextFieldUI.h>
#include <com/apple/laf/AquaTextPasswordFieldUI$AquaPasswordView.h>
#include <com/apple/laf/AquaTextPasswordFieldUI$CapsLockSymbolPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef VK_CAPS_LOCK

using $AquaTextFieldUI = ::com::apple::laf::AquaTextFieldUI;
using $AquaTextPasswordFieldUI$AquaPasswordView = ::com::apple::laf::AquaTextPasswordFieldUI$AquaPasswordView;
using $AquaTextPasswordFieldUI$CapsLockSymbolPainter = ::com::apple::laf::AquaTextPasswordFieldUI$CapsLockSymbolPainter;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Element = ::javax::swing::text::Element;
using $FieldView = ::javax::swing::text::FieldView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PasswordView = ::javax::swing::text::PasswordView;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextPasswordFieldUI_FieldInfo_[] = {
	{"capsLockPainter", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaTextPasswordFieldUI$CapsLockSymbolPainter;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextPasswordFieldUI, capsLockPainter)},
	{}
};

$MethodInfo _AquaTextPasswordFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextPasswordFieldUI::*)()>(&AquaTextPasswordFieldUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaTextPasswordFieldUI;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTextComponent*(*)(AquaTextPasswordFieldUI*)>(&AquaTextPasswordFieldUI::access$000))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTextPasswordFieldUI::createUI))},
	{"getCapsLockPainter", "()Lcom/apple/laf/AquaTextPasswordFieldUI$CapsLockSymbolPainter;", nullptr, $STATIC, $method(static_cast<$AquaTextPasswordFieldUI$CapsLockSymbolPainter*(*)()>(&AquaTextPasswordFieldUI::getCapsLockPainter))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paintBackgroundSafely", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTextPasswordFieldUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextPasswordFieldUI$CapsLockSymbolPainter", "com.apple.laf.AquaTextPasswordFieldUI", "CapsLockSymbolPainter", $STATIC},
	{"com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView", "com.apple.laf.AquaTextPasswordFieldUI", "AquaPasswordView", $PROTECTED},
	{}
};

$ClassInfo _AquaTextPasswordFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextPasswordFieldUI",
	"com.apple.laf.AquaTextFieldUI",
	nullptr,
	_AquaTextPasswordFieldUI_FieldInfo_,
	_AquaTextPasswordFieldUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTextPasswordFieldUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextPasswordFieldUI$CapsLockSymbolPainter,com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView"
};

$Object* allocate$AquaTextPasswordFieldUI($Class* clazz) {
	return $of($alloc(AquaTextPasswordFieldUI));
}

$AquaUtils$RecyclableSingleton* AquaTextPasswordFieldUI::capsLockPainter = nullptr;

$JTextComponent* AquaTextPasswordFieldUI::access$000(AquaTextPasswordFieldUI* x0) {
	$init(AquaTextPasswordFieldUI);
	return $nc(x0)->getComponent();
}

void AquaTextPasswordFieldUI::init$() {
	$AquaTextFieldUI::init$();
}

$AquaTextPasswordFieldUI$CapsLockSymbolPainter* AquaTextPasswordFieldUI::getCapsLockPainter() {
	$init(AquaTextPasswordFieldUI);
	return $cast($AquaTextPasswordFieldUI$CapsLockSymbolPainter, $nc(AquaTextPasswordFieldUI::capsLockPainter)->get());
}

$ComponentUI* AquaTextPasswordFieldUI::createUI($JComponent* c) {
	$init(AquaTextPasswordFieldUI);
	return $new(AquaTextPasswordFieldUI);
}

$String* AquaTextPasswordFieldUI::getPropertyPrefix() {
	return "PasswordField"_s;
}

$View* AquaTextPasswordFieldUI::create($Element* elem) {
	return $new($AquaTextPasswordFieldUI$AquaPasswordView, this, elem);
}

void AquaTextPasswordFieldUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$AquaTextFieldUI::installListeners();
	$nc($(getComponent()))->addKeyListener($(getCapsLockPainter()));
}

void AquaTextPasswordFieldUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$nc($(getComponent()))->removeKeyListener($(getCapsLockPainter()));
	$AquaTextFieldUI::uninstallListeners();
}

void AquaTextPasswordFieldUI::paintBackgroundSafely($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$AquaTextFieldUI::paintBackgroundSafely(g);
	$var($JTextComponent, component, getComponent());
	if (component == nullptr) {
		return;
	}
	if (!$nc(component)->isFocusOwner()) {
		return;
	}
	bool capsLockDown = $nc($($Toolkit::getDefaultToolkit()))->getLockingKeyState($KeyEvent::VK_CAPS_LOCK);
	if (!capsLockDown) {
		return;
	}
	$var($Rectangle, bounds, $nc(component)->getBounds());
	$nc($(getCapsLockPainter()))->paintBorder(component, g, $nc(bounds)->x, bounds->y, bounds->width, bounds->height);
}

void clinit$AquaTextPasswordFieldUI($Class* class$) {
	$load($AquaTextPasswordFieldUI$CapsLockSymbolPainter);
	$assignStatic(AquaTextPasswordFieldUI::capsLockPainter, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaTextPasswordFieldUI$CapsLockSymbolPainter::class$));
}

AquaTextPasswordFieldUI::AquaTextPasswordFieldUI() {
}

$Class* AquaTextPasswordFieldUI::load$($String* name, bool initialize) {
	$loadClass(AquaTextPasswordFieldUI, name, initialize, &_AquaTextPasswordFieldUI_ClassInfo_, clinit$AquaTextPasswordFieldUI, allocate$AquaTextPasswordFieldUI);
	return class$;
}

$Class* AquaTextPasswordFieldUI::class$ = nullptr;

		} // laf
	} // apple
} // com
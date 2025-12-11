#include <com/apple/laf/AquaTextFieldFormattedUI.h>

#include <com/apple/laf/AquaTextFieldUI.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldUI = ::com::apple::laf::AquaTextFieldUI;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaTextFieldFormattedUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldFormattedUI::*)()>(&AquaTextFieldFormattedUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTextFieldFormattedUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaTextFieldFormattedUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextFieldFormattedUI",
	"com.apple.laf.AquaTextFieldUI",
	"java.awt.event.MouseListener",
	nullptr,
	_AquaTextFieldFormattedUI_MethodInfo_
};

$Object* allocate$AquaTextFieldFormattedUI($Class* clazz) {
	return $of($alloc(AquaTextFieldFormattedUI));
}

int32_t AquaTextFieldFormattedUI::hashCode() {
	 return this->$AquaTextFieldUI::hashCode();
}

bool AquaTextFieldFormattedUI::equals(Object$* arg0) {
	 return this->$AquaTextFieldUI::equals(arg0);
}

$Object* AquaTextFieldFormattedUI::clone() {
	 return this->$AquaTextFieldUI::clone();
}

$String* AquaTextFieldFormattedUI::toString() {
	 return this->$AquaTextFieldUI::toString();
}

void AquaTextFieldFormattedUI::finalize() {
	this->$AquaTextFieldUI::finalize();
}

void AquaTextFieldFormattedUI::init$() {
	$AquaTextFieldUI::init$();
}

$ComponentUI* AquaTextFieldFormattedUI::createUI($JComponent* c) {
	$init(AquaTextFieldFormattedUI);
	return $new(AquaTextFieldFormattedUI);
}

$String* AquaTextFieldFormattedUI::getPropertyPrefix() {
	return "FormattedTextField"_s;
}

void AquaTextFieldFormattedUI::installListeners() {
	$AquaTextFieldUI::installListeners();
	$nc($(getComponent()))->addMouseListener(this);
}

void AquaTextFieldFormattedUI::uninstallListeners() {
	$nc($(getComponent()))->removeMouseListener(this);
	$AquaTextFieldUI::uninstallListeners();
}

void AquaTextFieldFormattedUI::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getClickCount() != 1) {
		return;
	}
	$var($JTextComponent, c, getComponent());
	$nc(c)->setCaretPosition(viewToModel(c, $($nc(e)->getPoint())));
}

void AquaTextFieldFormattedUI::mouseEntered($MouseEvent* e) {
}

void AquaTextFieldFormattedUI::mouseExited($MouseEvent* e) {
}

void AquaTextFieldFormattedUI::mousePressed($MouseEvent* e) {
}

void AquaTextFieldFormattedUI::mouseReleased($MouseEvent* e) {
}

AquaTextFieldFormattedUI::AquaTextFieldFormattedUI() {
}

$Class* AquaTextFieldFormattedUI::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldFormattedUI, name, initialize, &_AquaTextFieldFormattedUI_ClassInfo_, allocate$AquaTextFieldFormattedUI);
	return class$;
}

$Class* AquaTextFieldFormattedUI::class$ = nullptr;

		} // laf
	} // apple
} // com
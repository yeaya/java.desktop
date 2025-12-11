#include <com/apple/laf/AquaButtonUI$AquaButtonListener.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaButtonUI.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaRootPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/AncestorEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonExtendedTypes = ::com::apple::laf::AquaButtonExtendedTypes;
using $AquaButtonUI = ::com::apple::laf::AquaButtonUI;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaRootPaneUI = ::com::apple::laf::AquaRootPaneUI;
using $Component = ::java::awt::Component;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JRootPane = ::javax::swing::JRootPane;
using $Border = ::javax::swing::border::Border;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonUI$AquaButtonListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaButtonUI$AquaButtonListener, this$0)},
	{"b", "Ljavax/swing/AbstractButton;", nullptr, $PROTECTED | $FINAL, $field(AquaButtonUI$AquaButtonListener, b)},
	{}
};

$MethodInfo _AquaButtonUI$AquaButtonListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaButtonUI;Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonUI$AquaButtonListener::*)($AquaButtonUI*,$AbstractButton*)>(&AquaButtonUI$AquaButtonListener::init$))},
	{"ancestorAdded", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorMoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"ancestorRemoved", "(Ljavax/swing/event/AncestorEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateDefaultButton", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaButtonUI$AquaButtonListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonUI$AquaButtonListener", "com.apple.laf.AquaButtonUI", "AquaButtonListener", 0},
	{}
};

$ClassInfo _AquaButtonUI$AquaButtonListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonUI$AquaButtonListener",
	"javax.swing.plaf.basic.BasicButtonListener",
	"javax.swing.event.AncestorListener",
	_AquaButtonUI$AquaButtonListener_FieldInfo_,
	_AquaButtonUI$AquaButtonListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonUI$AquaButtonListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonUI"
};

$Object* allocate$AquaButtonUI$AquaButtonListener($Class* clazz) {
	return $of($alloc(AquaButtonUI$AquaButtonListener));
}

int32_t AquaButtonUI$AquaButtonListener::hashCode() {
	 return this->$BasicButtonListener::hashCode();
}

bool AquaButtonUI$AquaButtonListener::equals(Object$* arg0) {
	 return this->$BasicButtonListener::equals(arg0);
}

$Object* AquaButtonUI$AquaButtonListener::clone() {
	 return this->$BasicButtonListener::clone();
}

$String* AquaButtonUI$AquaButtonListener::toString() {
	 return this->$BasicButtonListener::toString();
}

void AquaButtonUI$AquaButtonListener::finalize() {
	this->$BasicButtonListener::finalize();
}

void AquaButtonUI$AquaButtonListener::init$($AquaButtonUI* this$0, $AbstractButton* b) {
	$set(this, this$0, this$0);
	$BasicButtonListener::init$(b);
	$set(this, b, b);
}

void AquaButtonUI$AquaButtonListener::focusGained($FocusEvent* e) {
	$nc(($cast($Component, $($nc(e)->getSource()))))->repaint();
}

void AquaButtonUI$AquaButtonListener::focusLost($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->b)->getModel()))->setPressed(false);
	$nc(($cast($Component, $($nc(e)->getSource()))))->repaint();
}

void AquaButtonUI$AquaButtonListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$BasicButtonListener::propertyChange(e);
	$var($String, propertyName, $nc(e)->getPropertyName());
	$init($AquaFocusHandler);
	if ($nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(propertyName)) {
		$nc(this->b)->repaint();
		return;
	}
	bool var$0 = "icon"_s->equals(propertyName);
	if (var$0 || "text"_s->equals(propertyName)) {
		this->this$0->setThemeBorder(this->b);
		return;
	}
	if ("JButton.buttonType"_s->equals(propertyName)) {
		$var($String, value, $cast($String, e->getNewValue()));
		$var($Border, border, $AquaButtonExtendedTypes::getBorderForPosition(this->b, value, $($nc(this->b)->getClientProperty("JButton.segmentPosition"_s))));
		if (border != nullptr) {
			$nc(this->b)->setBorder(border);
		}
		return;
	}
	if ("JButton.segmentPosition"_s->equals(propertyName)) {
		$var($Border, border, $nc(this->b)->getBorder());
		if (!($instanceOf($AquaBorder, border))) {
			return;
		}
		$var($AbstractButton, var$1, this->b);
		$var($Object, var$2, $nc(this->b)->getClientProperty("JButton.buttonType"_s));
		$nc(this->b)->setBorder($($AquaButtonExtendedTypes::getBorderForPosition(var$1, var$2, $(e->getNewValue()))));
	}
	if ("componentOrientation"_s->equals(propertyName)) {
		$var($Border, border, $nc(this->b)->getBorder());
		if (!($instanceOf($AquaBorder, border))) {
			return;
		}
		$var($Object, buttonType, $nc(this->b)->getClientProperty("JButton.buttonType"_s));
		$var($Object, buttonPosition, $nc(this->b)->getClientProperty("JButton.segmentPosition"_s));
		if (buttonType != nullptr && buttonPosition != nullptr) {
			$nc(this->b)->setBorder($($AquaButtonExtendedTypes::getBorderForPosition(this->b, buttonType, buttonPosition)));
		}
	}
}

void AquaButtonUI$AquaButtonListener::ancestorMoved($AncestorEvent* e) {
}

void AquaButtonUI$AquaButtonListener::ancestorAdded($AncestorEvent* e) {
	updateDefaultButton();
}

void AquaButtonUI$AquaButtonListener::ancestorRemoved($AncestorEvent* e) {
	updateDefaultButton();
}

void AquaButtonUI$AquaButtonListener::updateDefaultButton() {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JButton, this->b))) {
		return;
	}
	if (!$nc(($cast($JButton, this->b)))->isDefaultButton()) {
		return;
	}
	$var($JRootPane, rootPane, $nc(this->b)->getRootPane());
	if (rootPane == nullptr) {
		return;
	}
	$var($RootPaneUI, ui, $cast($RootPaneUI, $nc(rootPane)->getUI()));
	if (!($instanceOf($AquaRootPaneUI, ui))) {
		return;
	}
	$nc(($cast($AquaRootPaneUI, ui)))->updateDefaultButton(rootPane);
}

AquaButtonUI$AquaButtonListener::AquaButtonUI$AquaButtonListener() {
}

$Class* AquaButtonUI$AquaButtonListener::load$($String* name, bool initialize) {
	$loadClass(AquaButtonUI$AquaButtonListener, name, initialize, &_AquaButtonUI$AquaButtonListener_ClassInfo_, allocate$AquaButtonUI$AquaButtonListener);
	return class$;
}

$Class* AquaButtonUI$AquaButtonListener::class$ = nullptr;

		} // laf
	} // apple
} // com
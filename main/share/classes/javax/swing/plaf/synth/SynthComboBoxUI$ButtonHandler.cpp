#include <javax/swing/plaf/synth/SynthComboBoxUI$ButtonHandler.h>

#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JComboBox = ::javax::swing::JComboBox;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $SynthComboBoxUI = ::javax::swing::plaf::synth::SynthComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthComboBoxUI$ButtonHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthComboBoxUI$ButtonHandler, this$0)},
	{"over", "Z", nullptr, $PRIVATE, $field(SynthComboBoxUI$ButtonHandler, over)},
	{"pressed", "Z", nullptr, $PRIVATE, $field(SynthComboBoxUI$ButtonHandler, pressed)},
	{}
};

$MethodInfo _SynthComboBoxUI$ButtonHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthComboBoxUI$ButtonHandler::*)($SynthComboBoxUI*)>(&SynthComboBoxUI$ButtonHandler::init$))},
	{"isArmed", "()Z", nullptr, $PUBLIC},
	{"isPressed", "()Z", nullptr, $PUBLIC},
	{"isRollover", "()Z", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"setPressed", "(Z)V", nullptr, $PUBLIC},
	{"setRollover", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateOver", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthComboBoxUI$ButtonHandler::*)(bool)>(&SynthComboBoxUI$ButtonHandler::updateOver))},
	{"updatePressed", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthComboBoxUI$ButtonHandler::*)(bool)>(&SynthComboBoxUI$ButtonHandler::updatePressed))},
	{}
};

$InnerClassInfo _SynthComboBoxUI$ButtonHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthComboBoxUI$ButtonHandler", "javax.swing.plaf.synth.SynthComboBoxUI", "ButtonHandler", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SynthComboBoxUI$ButtonHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthComboBoxUI$ButtonHandler",
	"javax.swing.DefaultButtonModel",
	"java.awt.event.MouseListener,javax.swing.event.PopupMenuListener",
	_SynthComboBoxUI$ButtonHandler_FieldInfo_,
	_SynthComboBoxUI$ButtonHandler_MethodInfo_,
	nullptr,
	nullptr,
	_SynthComboBoxUI$ButtonHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthComboBoxUI"
};

$Object* allocate$SynthComboBoxUI$ButtonHandler($Class* clazz) {
	return $of($alloc(SynthComboBoxUI$ButtonHandler));
}

int32_t SynthComboBoxUI$ButtonHandler::hashCode() {
	 return this->$DefaultButtonModel::hashCode();
}

bool SynthComboBoxUI$ButtonHandler::equals(Object$* arg0) {
	 return this->$DefaultButtonModel::equals(arg0);
}

$Object* SynthComboBoxUI$ButtonHandler::clone() {
	 return this->$DefaultButtonModel::clone();
}

$String* SynthComboBoxUI$ButtonHandler::toString() {
	 return this->$DefaultButtonModel::toString();
}

void SynthComboBoxUI$ButtonHandler::finalize() {
	this->$DefaultButtonModel::finalize();
}

void SynthComboBoxUI$ButtonHandler::init$($SynthComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultButtonModel::init$();
}

void SynthComboBoxUI$ButtonHandler::updatePressed(bool p) {
	this->pressed = p && isEnabled();
	if (this->this$0->shouldActLikeButton()) {
		$nc($($SynthComboBoxUI::access$300(this->this$0)))->repaint();
	}
}

void SynthComboBoxUI$ButtonHandler::updateOver(bool o) {
	bool old = isRollover();
	this->over = o && isEnabled();
	bool newo = isRollover();
	if (this->this$0->shouldActLikeButton() && old != newo) {
		$nc($($SynthComboBoxUI::access$400(this->this$0)))->repaint();
	}
}

bool SynthComboBoxUI$ButtonHandler::isPressed() {
	bool b = this->this$0->shouldActLikeButton() ? this->pressed : $DefaultButtonModel::isPressed();
	return b || (this->this$0->pressedWhenPopupVisible && $nc($($SynthComboBoxUI::access$500(this->this$0)))->isPopupVisible());
}

bool SynthComboBoxUI$ButtonHandler::isArmed() {
	bool var$0 = this->this$0->shouldActLikeButton();
	bool b = var$0 || (this->this$0->pressedWhenPopupVisible && $nc($($SynthComboBoxUI::access$600(this->this$0)))->isPopupVisible());
	return b ? isPressed() : $DefaultButtonModel::isArmed();
}

bool SynthComboBoxUI$ButtonHandler::isRollover() {
	return this->this$0->shouldActLikeButton() ? this->over : $DefaultButtonModel::isRollover();
}

void SynthComboBoxUI$ButtonHandler::setPressed(bool b) {
	$DefaultButtonModel::setPressed(b);
	updatePressed(b);
}

void SynthComboBoxUI$ButtonHandler::setRollover(bool b) {
	$DefaultButtonModel::setRollover(b);
	updateOver(b);
}

void SynthComboBoxUI$ButtonHandler::mouseEntered($MouseEvent* mouseEvent) {
	updateOver(true);
}

void SynthComboBoxUI$ButtonHandler::mouseExited($MouseEvent* mouseEvent) {
	updateOver(false);
}

void SynthComboBoxUI$ButtonHandler::mousePressed($MouseEvent* mouseEvent) {
	updatePressed(true);
}

void SynthComboBoxUI$ButtonHandler::mouseReleased($MouseEvent* mouseEvent) {
	updatePressed(false);
}

void SynthComboBoxUI$ButtonHandler::mouseClicked($MouseEvent* e) {
}

void SynthComboBoxUI$ButtonHandler::popupMenuCanceled($PopupMenuEvent* e) {
	if (this->this$0->shouldActLikeButton() || this->this$0->pressedWhenPopupVisible) {
		$nc($($SynthComboBoxUI::access$700(this->this$0)))->repaint();
	}
}

void SynthComboBoxUI$ButtonHandler::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void SynthComboBoxUI$ButtonHandler::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
}

SynthComboBoxUI$ButtonHandler::SynthComboBoxUI$ButtonHandler() {
}

$Class* SynthComboBoxUI$ButtonHandler::load$($String* name, bool initialize) {
	$loadClass(SynthComboBoxUI$ButtonHandler, name, initialize, &_SynthComboBoxUI$ButtonHandler_ClassInfo_, allocate$SynthComboBoxUI$ButtonHandler);
	return class$;
}

$Class* SynthComboBoxUI$ButtonHandler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
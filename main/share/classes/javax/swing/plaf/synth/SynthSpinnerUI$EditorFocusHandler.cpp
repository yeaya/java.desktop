#include <javax/swing/plaf/synth/SynthSpinnerUI$EditorFocusHandler.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/plaf/synth/SynthSpinnerUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSpinner = ::javax::swing::JSpinner;
using $SynthSpinnerUI = ::javax::swing::plaf::synth::SynthSpinnerUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSpinnerUI$EditorFocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthSpinnerUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthSpinnerUI$EditorFocusHandler, this$0)},
	{}
};

$MethodInfo _SynthSpinnerUI$EditorFocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthSpinnerUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSpinnerUI$EditorFocusHandler::*)($SynthSpinnerUI*)>(&SynthSpinnerUI$EditorFocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthSpinnerUI$EditorFocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthSpinnerUI$EditorFocusHandler", "javax.swing.plaf.synth.SynthSpinnerUI", "EditorFocusHandler", $PRIVATE},
	{}
};

$ClassInfo _SynthSpinnerUI$EditorFocusHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthSpinnerUI$EditorFocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_SynthSpinnerUI$EditorFocusHandler_FieldInfo_,
	_SynthSpinnerUI$EditorFocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_SynthSpinnerUI$EditorFocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthSpinnerUI"
};

$Object* allocate$SynthSpinnerUI$EditorFocusHandler($Class* clazz) {
	return $of($alloc(SynthSpinnerUI$EditorFocusHandler));
}

void SynthSpinnerUI$EditorFocusHandler::init$($SynthSpinnerUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthSpinnerUI$EditorFocusHandler::focusGained($FocusEvent* e) {
	$nc($($SynthSpinnerUI::access$000(this->this$0)))->repaint();
}

void SynthSpinnerUI$EditorFocusHandler::focusLost($FocusEvent* e) {
	$nc($($SynthSpinnerUI::access$100(this->this$0)))->repaint();
}

SynthSpinnerUI$EditorFocusHandler::SynthSpinnerUI$EditorFocusHandler() {
}

$Class* SynthSpinnerUI$EditorFocusHandler::load$($String* name, bool initialize) {
	$loadClass(SynthSpinnerUI$EditorFocusHandler, name, initialize, &_SynthSpinnerUI$EditorFocusHandler_ClassInfo_, allocate$SynthSpinnerUI$EditorFocusHandler);
	return class$;
}

$Class* SynthSpinnerUI$EditorFocusHandler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
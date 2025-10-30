#include <javax/swing/plaf/synth/SynthTextFieldUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTextFieldUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTextFieldUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTextFieldUI$Handler, this$0)},
	{}
};

$MethodInfo _SynthTextFieldUI$Handler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTextFieldUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTextFieldUI$Handler::*)($SynthTextFieldUI*)>(&SynthTextFieldUI$Handler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthTextFieldUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTextFieldUI$Handler", "javax.swing.plaf.synth.SynthTextFieldUI", "Handler", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SynthTextFieldUI$Handler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTextFieldUI$Handler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_SynthTextFieldUI$Handler_FieldInfo_,
	_SynthTextFieldUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTextFieldUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTextFieldUI"
};

$Object* allocate$SynthTextFieldUI$Handler($Class* clazz) {
	return $of($alloc(SynthTextFieldUI$Handler));
}

void SynthTextFieldUI$Handler::init$($SynthTextFieldUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthTextFieldUI$Handler::focusGained($FocusEvent* e) {
	$nc($($SynthTextFieldUI::access$000(this->this$0)))->repaint();
}

void SynthTextFieldUI$Handler::focusLost($FocusEvent* e) {
	$nc($($SynthTextFieldUI::access$100(this->this$0)))->repaint();
}

SynthTextFieldUI$Handler::SynthTextFieldUI$Handler() {
}

$Class* SynthTextFieldUI$Handler::load$($String* name, bool initialize) {
	$loadClass(SynthTextFieldUI$Handler, name, initialize, &_SynthTextFieldUI$Handler_ClassInfo_, allocate$SynthTextFieldUI$Handler);
	return class$;
}

$Class* SynthTextFieldUI$Handler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
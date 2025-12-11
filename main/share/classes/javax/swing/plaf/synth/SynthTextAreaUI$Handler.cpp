#include <javax/swing/plaf/synth/SynthTextAreaUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/synth/SynthTextAreaUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthTextAreaUI = ::javax::swing::plaf::synth::SynthTextAreaUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTextAreaUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTextAreaUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTextAreaUI$Handler, this$0)},
	{}
};

$MethodInfo _SynthTextAreaUI$Handler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTextAreaUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTextAreaUI$Handler::*)($SynthTextAreaUI*)>(&SynthTextAreaUI$Handler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthTextAreaUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTextAreaUI$Handler", "javax.swing.plaf.synth.SynthTextAreaUI", "Handler", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SynthTextAreaUI$Handler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTextAreaUI$Handler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_SynthTextAreaUI$Handler_FieldInfo_,
	_SynthTextAreaUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTextAreaUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTextAreaUI"
};

$Object* allocate$SynthTextAreaUI$Handler($Class* clazz) {
	return $of($alloc(SynthTextAreaUI$Handler));
}

void SynthTextAreaUI$Handler::init$($SynthTextAreaUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthTextAreaUI$Handler::focusGained($FocusEvent* e) {
	$nc($($SynthTextAreaUI::access$000(this->this$0)))->repaint();
}

void SynthTextAreaUI$Handler::focusLost($FocusEvent* e) {
	$nc($($SynthTextAreaUI::access$100(this->this$0)))->repaint();
}

SynthTextAreaUI$Handler::SynthTextAreaUI$Handler() {
}

$Class* SynthTextAreaUI$Handler::load$($String* name, bool initialize) {
	$loadClass(SynthTextAreaUI$Handler, name, initialize, &_SynthTextAreaUI$Handler_ClassInfo_, allocate$SynthTextAreaUI$Handler);
	return class$;
}

$Class* SynthTextAreaUI$Handler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
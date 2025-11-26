#include <javax/swing/plaf/synth/SynthTabbedPaneUI$SynthScrollableTabButton.h>

#include <java/awt/Component.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthTabbedPaneUI = ::javax::swing::plaf::synth::SynthTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTabbedPaneUI$SynthScrollableTabButton_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTabbedPaneUI$SynthScrollableTabButton, this$0)},
	{}
};

$MethodInfo _SynthTabbedPaneUI$SynthScrollableTabButton_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;I)V", nullptr, $PUBLIC, $method(static_cast<void(SynthTabbedPaneUI$SynthScrollableTabButton::*)($SynthTabbedPaneUI*,int32_t)>(&SynthTabbedPaneUI$SynthScrollableTabButton::init$))},
	{}
};

$InnerClassInfo _SynthTabbedPaneUI$SynthScrollableTabButton_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTabbedPaneUI$SynthScrollableTabButton", "javax.swing.plaf.synth.SynthTabbedPaneUI", "SynthScrollableTabButton", $PRIVATE},
	{}
};

$ClassInfo _SynthTabbedPaneUI$SynthScrollableTabButton_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTabbedPaneUI$SynthScrollableTabButton",
	"javax.swing.plaf.synth.SynthArrowButton",
	nullptr,
	_SynthTabbedPaneUI$SynthScrollableTabButton_FieldInfo_,
	_SynthTabbedPaneUI$SynthScrollableTabButton_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTabbedPaneUI$SynthScrollableTabButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTabbedPaneUI"
};

$Object* allocate$SynthTabbedPaneUI$SynthScrollableTabButton($Class* clazz) {
	return $of($alloc(SynthTabbedPaneUI$SynthScrollableTabButton));
}

void SynthTabbedPaneUI$SynthScrollableTabButton::init$($SynthTabbedPaneUI* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	$SynthArrowButton::init$(direction);
	setName("TabbedPane.button"_s);
}

SynthTabbedPaneUI$SynthScrollableTabButton::SynthTabbedPaneUI$SynthScrollableTabButton() {
}

$Class* SynthTabbedPaneUI$SynthScrollableTabButton::load$($String* name, bool initialize) {
	$loadClass(SynthTabbedPaneUI$SynthScrollableTabButton, name, initialize, &_SynthTabbedPaneUI$SynthScrollableTabButton_ClassInfo_, allocate$SynthTabbedPaneUI$SynthScrollableTabButton);
	return class$;
}

$Class* SynthTabbedPaneUI$SynthScrollableTabButton::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/synth/SynthScrollBarUI$2.h>

#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI.h>
#include <jcpp.h>

#undef VERTICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthScrollBarUI = ::javax::swing::plaf::synth::SynthScrollBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthScrollBarUI$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthScrollBarUI$2, this$0)},
	{}
};

$MethodInfo _SynthScrollBarUI$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;I)V", nullptr, 0, $method(static_cast<void(SynthScrollBarUI$2::*)($SynthScrollBarUI*,int32_t)>(&SynthScrollBarUI$2::init$))},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthScrollBarUI$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthScrollBarUI",
	"createIncreaseButton",
	"(I)Ljavax/swing/JButton;"
};

$InnerClassInfo _SynthScrollBarUI$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthScrollBarUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthScrollBarUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthScrollBarUI$2",
	"javax.swing.plaf.synth.SynthArrowButton",
	nullptr,
	_SynthScrollBarUI$2_FieldInfo_,
	_SynthScrollBarUI$2_MethodInfo_,
	nullptr,
	&_SynthScrollBarUI$2_EnclosingMethodInfo_,
	_SynthScrollBarUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthScrollBarUI"
};

$Object* allocate$SynthScrollBarUI$2($Class* clazz) {
	return $of($alloc(SynthScrollBarUI$2));
}

void SynthScrollBarUI$2::init$($SynthScrollBarUI* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	$SynthArrowButton::init$(direction);
}

bool SynthScrollBarUI$2::contains(int32_t x, int32_t y) {
	if ($SynthScrollBarUI::access$400(this->this$0) < 0) {
		int32_t width = getWidth();
		int32_t height = getHeight();
		if ($nc($($SynthScrollBarUI::access$500(this->this$0)))->getOrientation() == $JScrollBar::VERTICAL) {
			height += $SynthScrollBarUI::access$600(this->this$0);
			y += $SynthScrollBarUI::access$700(this->this$0);
		} else {
			width += $SynthScrollBarUI::access$800(this->this$0);
			x += $SynthScrollBarUI::access$900(this->this$0);
		}
		return (x >= 0) && (x < width) && (y >= 0) && (y < height);
	}
	return $SynthArrowButton::contains(x, y);
}

SynthScrollBarUI$2::SynthScrollBarUI$2() {
}

$Class* SynthScrollBarUI$2::load$($String* name, bool initialize) {
	$loadClass(SynthScrollBarUI$2, name, initialize, &_SynthScrollBarUI$2_ClassInfo_, allocate$SynthScrollBarUI$2);
	return class$;
}

$Class* SynthScrollBarUI$2::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
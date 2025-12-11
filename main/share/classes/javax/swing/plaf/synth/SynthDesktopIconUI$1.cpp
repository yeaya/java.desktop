#include <javax/swing/plaf/synth/SynthDesktopIconUI$1.h>

#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/synth/SynthDesktopIconUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SynthDesktopIconUI = ::javax::swing::plaf::synth::SynthDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthDesktopIconUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthDesktopIconUI$1, this$0)},
	{}
};

$MethodInfo _SynthDesktopIconUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthDesktopIconUI;Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, 0, $method(static_cast<void(SynthDesktopIconUI$1::*)($SynthDesktopIconUI*,$String*,$Icon*)>(&SynthDesktopIconUI$1::init$))},
	{"getComponentPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, $PUBLIC},
	{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthDesktopIconUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthDesktopIconUI",
	"installComponents",
	"()V"
};

$InnerClassInfo _SynthDesktopIconUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthDesktopIconUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthDesktopIconUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthDesktopIconUI$1",
	"javax.swing.JToggleButton",
	nullptr,
	_SynthDesktopIconUI$1_FieldInfo_,
	_SynthDesktopIconUI$1_MethodInfo_,
	nullptr,
	&_SynthDesktopIconUI$1_EnclosingMethodInfo_,
	_SynthDesktopIconUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthDesktopIconUI"
};

$Object* allocate$SynthDesktopIconUI$1($Class* clazz) {
	return $of($alloc(SynthDesktopIconUI$1));
}

void SynthDesktopIconUI$1::init$($SynthDesktopIconUI* this$0, $String* text, $Icon* icon) {
	$set(this, this$0, this$0);
	$JToggleButton::init$(text, icon);
}

$String* SynthDesktopIconUI$1::getToolTipText() {
	return getText();
}

$JPopupMenu* SynthDesktopIconUI$1::getComponentPopupMenu() {
	return $nc($($SynthDesktopIconUI::access$000(this->this$0)))->getComponentPopupMenu();
}

SynthDesktopIconUI$1::SynthDesktopIconUI$1() {
}

$Class* SynthDesktopIconUI$1::load$($String* name, bool initialize) {
	$loadClass(SynthDesktopIconUI$1, name, initialize, &_SynthDesktopIconUI$1_ClassInfo_, allocate$SynthDesktopIconUI$1);
	return class$;
}

$Class* SynthDesktopIconUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
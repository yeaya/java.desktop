#include <com/apple/laf/AquaRootPaneUI$DefaultButtonPainter.h>

#include <com/apple/laf/AquaRootPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $AquaRootPaneUI = ::com::apple::laf::AquaRootPaneUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JRootPane = ::javax::swing::JRootPane;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaRootPaneUI$DefaultButtonPainter_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaRootPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaRootPaneUI$DefaultButtonPainter, this$0)},
	{"root", "Ljavax/swing/JRootPane;", nullptr, 0, $field(AquaRootPaneUI$DefaultButtonPainter, root)},
	{}
};

$MethodInfo _AquaRootPaneUI$DefaultButtonPainter_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaRootPaneUI;Ljavax/swing/JRootPane;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaRootPaneUI$DefaultButtonPainter::*)($AquaRootPaneUI*,$JRootPane*)>(&AquaRootPaneUI$DefaultButtonPainter::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaRootPaneUI$DefaultButtonPainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaRootPaneUI$DefaultButtonPainter", "com.apple.laf.AquaRootPaneUI", "DefaultButtonPainter", 0},
	{}
};

$ClassInfo _AquaRootPaneUI$DefaultButtonPainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaRootPaneUI$DefaultButtonPainter",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_AquaRootPaneUI$DefaultButtonPainter_FieldInfo_,
	_AquaRootPaneUI$DefaultButtonPainter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaRootPaneUI$DefaultButtonPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaRootPaneUI"
};

$Object* allocate$AquaRootPaneUI$DefaultButtonPainter($Class* clazz) {
	return $of($alloc(AquaRootPaneUI$DefaultButtonPainter));
}

void AquaRootPaneUI$DefaultButtonPainter::init$($AquaRootPaneUI* this$0, $JRootPane* root) {
	$set(this, this$0, this$0);
	$set(this, root, root);
}

void AquaRootPaneUI$DefaultButtonPainter::actionPerformed($ActionEvent* e) {
	$var($JButton, defaultButton, $nc(this->root)->getDefaultButton());
	if ((defaultButton != nullptr) && defaultButton->isShowing()) {
		if (defaultButton->isEnabled()) {
			defaultButton->repaint();
		}
	} else {
		this->this$0->stopTimer();
	}
}

AquaRootPaneUI$DefaultButtonPainter::AquaRootPaneUI$DefaultButtonPainter() {
}

$Class* AquaRootPaneUI$DefaultButtonPainter::load$($String* name, bool initialize) {
	$loadClass(AquaRootPaneUI$DefaultButtonPainter, name, initialize, &_AquaRootPaneUI$DefaultButtonPainter_ClassInfo_, allocate$AquaRootPaneUI$DefaultButtonPainter);
	return class$;
}

$Class* AquaRootPaneUI$DefaultButtonPainter::class$ = nullptr;

		} // laf
	} // apple
} // com
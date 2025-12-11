#include <com/apple/laf/AquaTabbedPaneUI$2.h>

#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$2, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneUI$2::*)($AquaTabbedPaneUI*)>(&AquaTabbedPaneUI$2::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTabbedPaneUI$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTabbedPaneUI",
	"createChangeListener",
	"()Ljavax/swing/event/ChangeListener;"
};

$InnerClassInfo _AquaTabbedPaneUI$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTabbedPaneUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$2",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_AquaTabbedPaneUI$2_FieldInfo_,
	_AquaTabbedPaneUI$2_MethodInfo_,
	nullptr,
	&_AquaTabbedPaneUI$2_EnclosingMethodInfo_,
	_AquaTabbedPaneUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$2($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$2));
}

void AquaTabbedPaneUI$2::init$($AquaTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTabbedPaneUI$2::stateChanged($ChangeEvent* e) {
	if (!this->this$0->isTabVisible($nc(this->this$0->tabPane)->getSelectedIndex())) {
		this->this$0->popupSelectionChanged = true;
	}
	$nc(this->this$0->tabPane)->revalidate();
	$nc(this->this$0->tabPane)->repaint();
}

AquaTabbedPaneUI$2::AquaTabbedPaneUI$2() {
}

$Class* AquaTabbedPaneUI$2::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$2, name, initialize, &_AquaTabbedPaneUI$2_ClassInfo_, allocate$AquaTabbedPaneUI$2);
	return class$;
}

$Class* AquaTabbedPaneUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com
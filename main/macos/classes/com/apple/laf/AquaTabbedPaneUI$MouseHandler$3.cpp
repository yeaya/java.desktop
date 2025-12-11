#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler$3.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $AquaTabbedPaneUI$MouseHandler = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$MouseHandler$3_FieldInfo_[] = {
	{"this$1", "Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$MouseHandler$3, this$1)},
	{"val$fOffset", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$MouseHandler$3, val$fOffset)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$MouseHandler$3_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;I)V", "()V", 0, $method(static_cast<void(AquaTabbedPaneUI$MouseHandler$3::*)($AquaTabbedPaneUI$MouseHandler*,int32_t)>(&AquaTabbedPaneUI$MouseHandler$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTabbedPaneUI$MouseHandler$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTabbedPaneUI$MouseHandler",
	"createMenuItem",
	"(I)Ljavax/swing/JMenuItem;"
};

$InnerClassInfo _AquaTabbedPaneUI$MouseHandler$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler", "com.apple.laf.AquaTabbedPaneUI", "MouseHandler", 0},
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTabbedPaneUI$MouseHandler$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$MouseHandler$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_AquaTabbedPaneUI$MouseHandler$3_FieldInfo_,
	_AquaTabbedPaneUI$MouseHandler$3_MethodInfo_,
	nullptr,
	&_AquaTabbedPaneUI$MouseHandler$3_EnclosingMethodInfo_,
	_AquaTabbedPaneUI$MouseHandler$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$MouseHandler$3($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$MouseHandler$3));
}

void AquaTabbedPaneUI$MouseHandler$3::init$($AquaTabbedPaneUI$MouseHandler* this$1, int32_t val$fOffset) {
	$set(this, this$1, this$1);
	this->val$fOffset = val$fOffset;
}

void AquaTabbedPaneUI$MouseHandler$3::actionPerformed($ActionEvent* ae) {
	bool visible = $nc(this->this$1->this$0)->isTabVisible(this->val$fOffset);
	$nc($nc(this->this$1->this$0)->tabPane)->setSelectedIndex(this->val$fOffset);
	if (!visible) {
		$nc(this->this$1->this$0)->popupSelectionChanged = true;
		$nc($nc(this->this$1->this$0)->tabPane)->invalidate();
		$nc($nc(this->this$1->this$0)->tabPane)->repaint();
	}
}

AquaTabbedPaneUI$MouseHandler$3::AquaTabbedPaneUI$MouseHandler$3() {
}

$Class* AquaTabbedPaneUI$MouseHandler$3::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$MouseHandler$3, name, initialize, &_AquaTabbedPaneUI$MouseHandler$3_ClassInfo_, allocate$AquaTabbedPaneUI$MouseHandler$3);
	return class$;
}

$Class* AquaTabbedPaneUI$MouseHandler$3::class$ = nullptr;

		} // laf
	} // apple
} // com
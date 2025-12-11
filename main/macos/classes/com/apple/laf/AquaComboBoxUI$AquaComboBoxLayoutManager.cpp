#include <com/apple/laf/AquaComboBoxUI$AquaComboBoxLayoutManager.h>

#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$AquaComboBoxLayoutManager_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$AquaComboBoxLayoutManager, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$AquaComboBoxLayoutManager_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$AquaComboBoxLayoutManager::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$AquaComboBoxLayoutManager::init$))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaComboBoxUI$AquaComboBoxLayoutManager_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$AquaComboBoxLayoutManager", "com.apple.laf.AquaComboBoxUI", "AquaComboBoxLayoutManager", 0},
	{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{}
};

$ClassInfo _AquaComboBoxUI$AquaComboBoxLayoutManager_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$AquaComboBoxLayoutManager",
	"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
	nullptr,
	_AquaComboBoxUI$AquaComboBoxLayoutManager_FieldInfo_,
	_AquaComboBoxUI$AquaComboBoxLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_AquaComboBoxUI$AquaComboBoxLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$AquaComboBoxLayoutManager($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$AquaComboBoxLayoutManager));
}

void AquaComboBoxUI$AquaComboBoxLayoutManager::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$ComboBoxLayoutManager::init$(this$0);
}

void AquaComboBoxUI$AquaComboBoxLayoutManager::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $AquaComboBoxUI::access$5300(this->this$0) != nullptr;
	if (var$0 && !$nc($($AquaComboBoxUI::access$5400(this->this$0)))->isEditable()) {
		$var($Insets, insets, $nc($($AquaComboBoxUI::access$5500(this->this$0)))->getInsets());
		int32_t width = $nc($($AquaComboBoxUI::access$5600(this->this$0)))->getWidth();
		int32_t height = $nc($($AquaComboBoxUI::access$5700(this->this$0)))->getHeight();
		$nc($($AquaComboBoxUI::access$5800(this->this$0)))->setBounds($nc(insets)->left, insets->top, width - (insets->left + insets->right), height - (insets->top + insets->bottom));
		return;
	}
	$var($JComboBox, cb, $cast($JComboBox, parent));
	int32_t width = $nc(cb)->getWidth();
	int32_t height = cb->getHeight();
	$var($Insets, insets, $AquaComboBoxUI::access$5900(this->this$0));
	int32_t buttonHeight = height - ($nc(insets)->top + insets->bottom);
	int32_t buttonWidth = 20;
	if ($AquaComboBoxUI::access$6000(this->this$0) != nullptr) {
		$nc($($AquaComboBoxUI::access$6100(this->this$0)))->setBounds(width - (insets->right + buttonWidth), insets->top, buttonWidth, buttonHeight);
	}
	if ($AquaComboBoxUI::access$6200(this->this$0) != nullptr) {
		$var($Rectangle, editorRect, $AquaComboBoxUI::access$6300(this->this$0));
		$nc(editorRect)->width += 4;
		editorRect->height += 1;
		$nc($($AquaComboBoxUI::access$6400(this->this$0)))->setBounds(editorRect);
	}
}

AquaComboBoxUI$AquaComboBoxLayoutManager::AquaComboBoxUI$AquaComboBoxLayoutManager() {
}

$Class* AquaComboBoxUI$AquaComboBoxLayoutManager::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$AquaComboBoxLayoutManager, name, initialize, &_AquaComboBoxUI$AquaComboBoxLayoutManager_ClassInfo_, allocate$AquaComboBoxUI$AquaComboBoxLayoutManager);
	return class$;
}

$Class* AquaComboBoxUI$AquaComboBoxLayoutManager::class$ = nullptr;

		} // laf
	} // apple
} // com
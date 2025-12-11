#include <com/apple/laf/AquaComboBoxUI$1.h>

#include <com/apple/laf/AquaComboBoxUI$1$1.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/AquaListUI.h>
#include <com/apple/laf/AquaUtils$Selectable.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ListUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

#undef SELECTED

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$1$1 = ::com::apple::laf::AquaComboBoxUI$1$1;
using $AquaListUI = ::com::apple::laf::AquaListUI;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$Selectable = ::com::apple::laf::AquaUtils$Selectable;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $ListUI = ::javax::swing::plaf::ListUI;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$1, this$0)},
	{"lastBlink", "J", nullptr, 0, $field(AquaComboBoxUI$1, lastBlink)},
	{}
};

$MethodInfo _AquaComboBoxUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$1::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$1::init$))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaComboBoxUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaComboBoxUI",
	"createItemListener",
	"()Ljava/awt/event/ItemListener;"
};

$InnerClassInfo _AquaComboBoxUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$1",
	"java.lang.Object",
	"java.awt.event.ItemListener",
	_AquaComboBoxUI$1_FieldInfo_,
	_AquaComboBoxUI$1_MethodInfo_,
	nullptr,
	&_AquaComboBoxUI$1_EnclosingMethodInfo_,
	_AquaComboBoxUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$1($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$1));
}

void AquaComboBoxUI$1::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	this->lastBlink = 0;
}

void AquaComboBoxUI$1::itemStateChanged($ItemEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getStateChange() != $ItemEvent::SELECTED) {
		return;
	}
	if (!$nc($($AquaComboBoxUI::access$000(this->this$0)))->isVisible()) {
		return;
	}
	int64_t now = $System::currentTimeMillis();
	if (now - 1000 < this->lastBlink) {
		return;
	}
	this->lastBlink = now;
	$var($JList, itemList, $nc($($AquaComboBoxUI::access$100(this->this$0)))->getList());
	$var($ListUI, listUI, $cast($ListUI, $nc(itemList)->getUI()));
	if (!($instanceOf($AquaListUI, listUI))) {
		return;
	}
	$var($AquaListUI, aquaListUI, $cast($AquaListUI, listUI));
	int32_t selectedIndex = $nc($($AquaComboBoxUI::access$200(this->this$0)))->getSelectedIndex();
	$var($ListModel, dataModel, itemList->getModel());
	if (dataModel == nullptr) {
		return;
	}
	$var($Object, value, $nc(dataModel)->getElementAt(selectedIndex));
	$AquaUtils::blinkMenu($$new($AquaComboBoxUI$1$1, this, aquaListUI, value, selectedIndex));
}

AquaComboBoxUI$1::AquaComboBoxUI$1() {
}

$Class* AquaComboBoxUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$1, name, initialize, &_AquaComboBoxUI$1_ClassInfo_, allocate$AquaComboBoxUI$1);
	return class$;
}

$Class* AquaComboBoxUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com
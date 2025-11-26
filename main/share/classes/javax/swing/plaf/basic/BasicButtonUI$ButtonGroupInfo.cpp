#include <javax/swing/plaf/basic/BasicButtonUI$ButtonGroupInfo.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/util/Enumeration.h>
#include <java/util/HashSet.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $HashSet = ::java::util::HashSet;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicButtonUI$ButtonGroupInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicButtonUI$ButtonGroupInfo, this$0)},
	{"activeBtn", "Ljavax/swing/JToggleButton;", nullptr, 0, $field(BasicButtonUI$ButtonGroupInfo, activeBtn)},
	{"firstBtn", "Ljavax/swing/JToggleButton;", nullptr, 0, $field(BasicButtonUI$ButtonGroupInfo, firstBtn)},
	{"lastBtn", "Ljavax/swing/JToggleButton;", nullptr, 0, $field(BasicButtonUI$ButtonGroupInfo, lastBtn)},
	{"previousBtn", "Ljavax/swing/JToggleButton;", nullptr, 0, $field(BasicButtonUI$ButtonGroupInfo, previousBtn)},
	{"nextBtn", "Ljavax/swing/JToggleButton;", nullptr, 0, $field(BasicButtonUI$ButtonGroupInfo, nextBtn)},
	{"btnsInGroup", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljavax/swing/JToggleButton;>;", 0, $field(BasicButtonUI$ButtonGroupInfo, btnsInGroup)},
	{"srcFound", "Z", nullptr, 0, $field(BasicButtonUI$ButtonGroupInfo, srcFound)},
	{}
};

$MethodInfo _BasicButtonUI$ButtonGroupInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicButtonUI;Ljavax/swing/JToggleButton;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicButtonUI$ButtonGroupInfo::*)($BasicButtonUI*,$JToggleButton*)>(&BasicButtonUI$ButtonGroupInfo::init$))},
	{"containsInGroup", "(Ljava/lang/Object;)Z", nullptr, 0},
	{"getButtonGroupInfo", "()Z", nullptr, 0},
	{"getFocusTransferBaseComponent", "(Z)Ljava/awt/Component;", nullptr, 0},
	{"jumpToNextComponent", "(Z)V", nullptr, 0},
	{"selectNewButton", "(Z)V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicButtonUI$ButtonGroupInfo_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicButtonUI$ButtonGroupInfo", "javax.swing.plaf.basic.BasicButtonUI", "ButtonGroupInfo", $PRIVATE},
	{}
};

$ClassInfo _BasicButtonUI$ButtonGroupInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicButtonUI$ButtonGroupInfo",
	"java.lang.Object",
	nullptr,
	_BasicButtonUI$ButtonGroupInfo_FieldInfo_,
	_BasicButtonUI$ButtonGroupInfo_MethodInfo_,
	nullptr,
	nullptr,
	_BasicButtonUI$ButtonGroupInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicButtonUI"
};

$Object* allocate$BasicButtonUI$ButtonGroupInfo($Class* clazz) {
	return $of($alloc(BasicButtonUI$ButtonGroupInfo));
}

void BasicButtonUI$ButtonGroupInfo::init$($BasicButtonUI* this$0, $JToggleButton* btn) {
	$set(this, this$0, this$0);
	$set(this, activeBtn, nullptr);
	$set(this, firstBtn, nullptr);
	$set(this, lastBtn, nullptr);
	$set(this, previousBtn, nullptr);
	$set(this, nextBtn, nullptr);
	$set(this, btnsInGroup, nullptr);
	this->srcFound = false;
	$set(this, activeBtn, btn);
	$set(this, btnsInGroup, $new($HashSet));
}

bool BasicButtonUI$ButtonGroupInfo::containsInGroup(Object$* obj) {
	return $nc(this->btnsInGroup)->contains(obj);
}

$Component* BasicButtonUI$ButtonGroupInfo::getFocusTransferBaseComponent(bool next) {
	return this->firstBtn;
}

bool BasicButtonUI$ButtonGroupInfo::getButtonGroupInfo() {
	$useLocalCurrentObjectStackCache();
	if (this->activeBtn == nullptr) {
		return false;
	}
	$nc(this->btnsInGroup)->clear();
	$var($ButtonModel, model, $nc(this->activeBtn)->getModel());
	if (!($instanceOf($DefaultButtonModel, model))) {
		return false;
	}
	$var($DefaultButtonModel, bm, $cast($DefaultButtonModel, model));
	$var($ButtonGroup, group, $nc(bm)->getGroup());
	if (group == nullptr) {
		return false;
	}
	$var($Enumeration, e, $nc(group)->getElements());
	if (e == nullptr) {
		return false;
	}
	while ($nc(e)->hasMoreElements()) {
		$var($AbstractButton, curElement, $cast($AbstractButton, e->nextElement()));
		if (!this->this$0->isValidToggleButtonObj(curElement)) {
			continue;
		}
		$nc(this->btnsInGroup)->add($cast($JToggleButton, curElement));
		if (nullptr == this->firstBtn) {
			$set(this, firstBtn, $cast($JToggleButton, curElement));
		}
		if ($equals(this->activeBtn, curElement)) {
			this->srcFound = true;
		} else if (!this->srcFound) {
			$set(this, previousBtn, $cast($JToggleButton, curElement));
		} else if (this->nextBtn == nullptr) {
			$set(this, nextBtn, $cast($JToggleButton, curElement));
		}
		$set(this, lastBtn, $cast($JToggleButton, curElement));
	}
	return true;
}

void BasicButtonUI$ButtonGroupInfo::selectNewButton(bool next) {
	$useLocalCurrentObjectStackCache();
	if (!getButtonGroupInfo()) {
		return;
	}
	if (this->srcFound) {
		$var($JToggleButton, newSelectedBtn, nullptr);
		if (next) {
			$assign(newSelectedBtn, (nullptr == this->nextBtn) ? this->firstBtn : this->nextBtn);
		} else {
			$assign(newSelectedBtn, (nullptr == this->previousBtn) ? this->lastBtn : this->previousBtn);
		}
		if (newSelectedBtn != nullptr && (newSelectedBtn != this->activeBtn)) {
			$var($ButtonModel, btnModel, newSelectedBtn->getModel());
			if ($instanceOf($JRadioButton, newSelectedBtn)) {
				$nc(btnModel)->setPressed(true);
				btnModel->setArmed(true);
			}
			newSelectedBtn->requestFocusInWindow();
			newSelectedBtn->setSelected(true);
			if ($instanceOf($JRadioButton, newSelectedBtn)) {
				$nc(btnModel)->setPressed(false);
				btnModel->setArmed(false);
			}
		}
	}
}

void BasicButtonUI$ButtonGroupInfo::jumpToNextComponent(bool next) {
	$useLocalCurrentObjectStackCache();
	if (!getButtonGroupInfo()) {
		if (this->activeBtn != nullptr) {
			$set(this, lastBtn, this->activeBtn);
			$set(this, firstBtn, this->activeBtn);
		} else {
			return;
		}
	}
	$var($JComponent, compTransferFocusFrom, this->activeBtn);
	$var($Component, focusBase, getFocusTransferBaseComponent(next));
	if (focusBase != nullptr) {
		if (next) {
			$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusNextComponent(focusBase);
		} else {
			$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusPreviousComponent(focusBase);
		}
	}
}

BasicButtonUI$ButtonGroupInfo::BasicButtonUI$ButtonGroupInfo() {
}

$Class* BasicButtonUI$ButtonGroupInfo::load$($String* name, bool initialize) {
	$loadClass(BasicButtonUI$ButtonGroupInfo, name, initialize, &_BasicButtonUI$ButtonGroupInfo_ClassInfo_, allocate$BasicButtonUI$ButtonGroupInfo);
	return class$;
}

$Class* BasicButtonUI$ButtonGroupInfo::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
#include <com/apple/laf/AquaListUI$AquaHomeEndAction.h>

#include <com/apple/laf/AquaListUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaListUI$AquaHomeEndAction_FieldInfo_[] = {
	{"fHomeAction", "Z", nullptr, $PRIVATE, $field(AquaListUI$AquaHomeEndAction, fHomeAction)},
	{}
};

$MethodInfo _AquaListUI$AquaHomeEndAction_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(AquaListUI$AquaHomeEndAction::*)(bool)>(&AquaListUI$AquaHomeEndAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaListUI$AquaHomeEndAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaListUI$AquaHomeEndAction", "com.apple.laf.AquaListUI", "AquaHomeEndAction", $STATIC},
	{}
};

$ClassInfo _AquaListUI$AquaHomeEndAction_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaListUI$AquaHomeEndAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaListUI$AquaHomeEndAction_FieldInfo_,
	_AquaListUI$AquaHomeEndAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaListUI$AquaHomeEndAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaListUI"
};

$Object* allocate$AquaListUI$AquaHomeEndAction($Class* clazz) {
	return $of($alloc(AquaListUI$AquaHomeEndAction));
}

void AquaListUI$AquaHomeEndAction::init$(bool isHomeAction) {
	$AbstractAction::init$();
	this->fHomeAction = false;
	this->fHomeAction = isHomeAction;
}

void AquaListUI$AquaHomeEndAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JList, list, $cast($JList, $nc(e)->getSource()));
	if (this->fHomeAction) {
		$nc(list)->ensureIndexIsVisible(0);
	} else {
		int32_t size = $nc($($nc(list)->getModel()))->getSize();
		list->ensureIndexIsVisible(size - 1);
	}
}

AquaListUI$AquaHomeEndAction::AquaListUI$AquaHomeEndAction() {
}

$Class* AquaListUI$AquaHomeEndAction::load$($String* name, bool initialize) {
	$loadClass(AquaListUI$AquaHomeEndAction, name, initialize, &_AquaListUI$AquaHomeEndAction_ClassInfo_, allocate$AquaListUI$AquaHomeEndAction);
	return class$;
}

$Class* AquaListUI$AquaHomeEndAction::class$ = nullptr;

		} // laf
	} // apple
} // com
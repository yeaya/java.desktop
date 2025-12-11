#include <com/apple/laf/AquaTreeUI$KeyboardExpandCollapseAction.h>

#include <com/apple/laf/AquaTreeUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $AquaTreeUI = ::com::apple::laf::AquaTreeUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTree = ::javax::swing::JTree;
using $TreePath = ::javax::swing::tree::TreePath;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTreeUI$KeyboardExpandCollapseAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTreeUI$KeyboardExpandCollapseAction, this$0)},
	{"expand", "Z", nullptr, $FINAL, $field(AquaTreeUI$KeyboardExpandCollapseAction, expand)},
	{"recursive", "Z", nullptr, $FINAL, $field(AquaTreeUI$KeyboardExpandCollapseAction, recursive)},
	{}
};

$MethodInfo _AquaTreeUI$KeyboardExpandCollapseAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTreeUI;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTreeUI$KeyboardExpandCollapseAction::*)($AquaTreeUI*,bool,bool)>(&AquaTreeUI$KeyboardExpandCollapseAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTreeUI$KeyboardExpandCollapseAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTreeUI$KeyboardExpandCollapseAction", "com.apple.laf.AquaTreeUI", "KeyboardExpandCollapseAction", 0},
	{}
};

$ClassInfo _AquaTreeUI$KeyboardExpandCollapseAction_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTreeUI$KeyboardExpandCollapseAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaTreeUI$KeyboardExpandCollapseAction_FieldInfo_,
	_AquaTreeUI$KeyboardExpandCollapseAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTreeUI$KeyboardExpandCollapseAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTreeUI"
};

$Object* allocate$AquaTreeUI$KeyboardExpandCollapseAction($Class* clazz) {
	return $of($alloc(AquaTreeUI$KeyboardExpandCollapseAction));
}

void AquaTreeUI$KeyboardExpandCollapseAction::init$($AquaTreeUI* this$0, bool expand, bool recursive) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->expand = expand;
	this->recursive = recursive;
}

void AquaTreeUI$KeyboardExpandCollapseAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $AquaTreeUI::access$2200(this->this$0) == nullptr;
	if (var$0 || 0 > this->this$0->getRowCount($($AquaTreeUI::access$2300(this->this$0)))) {
		return;
	}
	$var($TreePathArray, selectionPaths, $nc($($AquaTreeUI::access$2400(this->this$0)))->getSelectionPaths());
	if (selectionPaths == nullptr) {
		return;
	}
	for (int32_t i = $nc(selectionPaths)->length - 1; i >= 0; --i) {
		$var($TreePath, path, selectionPaths->get(i));
		if (this->expand) {
			this->this$0->expandNode($nc($($AquaTreeUI::access$2500(this->this$0)))->getRowForPath(path), this->recursive);
			continue;
		}
		if (selectionPaths->length == 1 && $nc($($AquaTreeUI::access$2600(this->this$0)))->isCollapsed(path)) {
			$var($TreePath, parentPath, $nc(path)->getParentPath());
			bool var$1 = parentPath != nullptr;
			if (var$1) {
				bool var$2 = !(parentPath->getParentPath() == nullptr);
				var$1 = (var$2 || $nc($($AquaTreeUI::access$2700(this->this$0)))->isRootVisible());
			}
			if (var$1) {
				$nc($($AquaTreeUI::access$2800(this->this$0)))->scrollPathToVisible(parentPath);
				$nc($($AquaTreeUI::access$2900(this->this$0)))->setSelectionPath(parentPath);
			}
			continue;
		}
		this->this$0->collapseNode($nc($($AquaTreeUI::access$3000(this->this$0)))->getRowForPath(path), this->recursive);
	}
}

bool AquaTreeUI$KeyboardExpandCollapseAction::isEnabled() {
	bool var$0 = $AquaTreeUI::access$3100(this->this$0) != nullptr;
	return (var$0 && $nc($($AquaTreeUI::access$3200(this->this$0)))->isEnabled());
}

AquaTreeUI$KeyboardExpandCollapseAction::AquaTreeUI$KeyboardExpandCollapseAction() {
}

$Class* AquaTreeUI$KeyboardExpandCollapseAction::load$($String* name, bool initialize) {
	$loadClass(AquaTreeUI$KeyboardExpandCollapseAction, name, initialize, &_AquaTreeUI$KeyboardExpandCollapseAction_ClassInfo_, allocate$AquaTreeUI$KeyboardExpandCollapseAction);
	return class$;
}

$Class* AquaTreeUI$KeyboardExpandCollapseAction::class$ = nullptr;

		} // laf
	} // apple
} // com
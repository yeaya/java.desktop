#include <javax/swing/plaf/TreeUI.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _TreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TreeUI::*)()>(&TreeUI::init$))},
	{"cancelEditing", "(Ljavax/swing/JTree;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getClosestPathForLocation", "(Ljavax/swing/JTree;II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEditingPath", "(Ljavax/swing/JTree;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathBounds", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathForRow", "(Ljavax/swing/JTree;I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRowCount", "(Ljavax/swing/JTree;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRowForPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"startEditingAtPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"stopEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.TreeUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_TreeUI_MethodInfo_
};

$Object* allocate$TreeUI($Class* clazz) {
	return $of($alloc(TreeUI));
}

void TreeUI::init$() {
	$ComponentUI::init$();
}

TreeUI::TreeUI() {
}

$Class* TreeUI::load$($String* name, bool initialize) {
	$loadClass(TreeUI, name, initialize, &_TreeUI_ClassInfo_, allocate$TreeUI);
	return class$;
}

$Class* TreeUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax
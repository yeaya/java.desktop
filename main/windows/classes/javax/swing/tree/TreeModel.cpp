#include <javax/swing/tree/TreeModel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _TreeModel_MethodInfo_[] = {
	{"addTreeModelListener", "(Ljavax/swing/event/TreeModelListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getChild", "(Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildCount", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndexOfChild", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRoot", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isLeaf", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeTreeModelListener", "(Ljavax/swing/event/TreeModelListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"valueForPathChanged", "(Ljavax/swing/tree/TreePath;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.TreeModel",
	nullptr,
	nullptr,
	nullptr,
	_TreeModel_MethodInfo_
};

$Object* allocate$TreeModel($Class* clazz) {
	return $of($alloc(TreeModel));
}

$Class* TreeModel::load$($String* name, bool initialize) {
	$loadClass(TreeModel, name, initialize, &_TreeModel_ClassInfo_, allocate$TreeModel);
	return class$;
}

$Class* TreeModel::class$ = nullptr;

		} // tree
	} // swing
} // javax
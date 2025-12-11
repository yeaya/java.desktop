#include <javax/swing/tree/TreeSelectionModel.h>

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/tree/RowMapper.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef CONTIGUOUS_TREE_SELECTION
#undef DISCONTIGUOUS_TREE_SELECTION
#undef SINGLE_TREE_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _TreeSelectionModel_FieldInfo_[] = {
	{"SINGLE_TREE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeSelectionModel, SINGLE_TREE_SELECTION)},
	{"CONTIGUOUS_TREE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeSelectionModel, CONTIGUOUS_TREE_SELECTION)},
	{"DISCONTIGUOUS_TREE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeSelectionModel, DISCONTIGUOUS_TREE_SELECTION)},
	{}
};

$MethodInfo _TreeSelectionModel_MethodInfo_[] = {
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clearSelection", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getLeadSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLeadSelectionRow", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxSelectionRow", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinSelectionRow", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRowMapper", "()Ljavax/swing/tree/RowMapper;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionMode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionPaths", "()[Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionRows", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"isPathSelected", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRowSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"resetRowSelection", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRowMapper", "(Ljavax/swing/tree/RowMapper;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeSelectionModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.TreeSelectionModel",
	nullptr,
	nullptr,
	_TreeSelectionModel_FieldInfo_,
	_TreeSelectionModel_MethodInfo_
};

$Object* allocate$TreeSelectionModel($Class* clazz) {
	return $of($alloc(TreeSelectionModel));
}

$Class* TreeSelectionModel::load$($String* name, bool initialize) {
	$loadClass(TreeSelectionModel, name, initialize, &_TreeSelectionModel_ClassInfo_, allocate$TreeSelectionModel);
	return class$;
}

$Class* TreeSelectionModel::class$ = nullptr;

		} // tree
	} // swing
} // javax
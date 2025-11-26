#include <javax/swing/JTree$AccessibleJTree.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree$AccessibleJTree$AccessibleJTreeNode.h>
#include <javax/swing/JTree.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY
#undef ACCESSIBLE_SELECTION_PROPERTY
#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef COLLAPSED
#undef EXPANDED
#undef TREE

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Point = ::java::awt::Point;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTree = ::javax::swing::JTree;
using $JTree$AccessibleJTree$AccessibleJTreeNode = ::javax::swing::JTree$AccessibleJTree$AccessibleJTreeNode;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {

$FieldInfo _JTree$AccessibleJTree_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTree;", nullptr, $FINAL | $SYNTHETIC, $field(JTree$AccessibleJTree, this$0)},
	{"leadSelectionPath", "Ljavax/swing/tree/TreePath;", nullptr, 0, $field(JTree$AccessibleJTree, leadSelectionPath)},
	{"leadSelectionAccessible", "Ljavax/accessibility/Accessible;", nullptr, 0, $field(JTree$AccessibleJTree, leadSelectionAccessible)},
	{}
};

$MethodInfo _JTree$AccessibleJTree_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTree;)V", nullptr, $PUBLIC, $method(static_cast<void(JTree$AccessibleJTree::*)($JTree*)>(&JTree$AccessibleJTree::init$))},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"fireActiveDescendantPropertyChange", "(Ljavax/swing/tree/TreePath;Ljavax/swing/tree/TreePath;)V", nullptr, 0},
	{"fireVisibleDataPropertyChange", "()V", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"getCurrentAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(JTree$AccessibleJTree::*)()>(&JTree$AccessibleJTree::getCurrentAccessibleContext))},
	{"getCurrentComponent", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(JTree$AccessibleJTree::*)()>(&JTree$AccessibleJTree::getCurrentComponent))},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTree$AccessibleJTree_InnerClassesInfo_[] = {
	{"javax.swing.JTree$AccessibleJTree", "javax.swing.JTree", "AccessibleJTree", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JTree$AccessibleJTree$AccessibleJTreeNode", "javax.swing.JTree$AccessibleJTree", "AccessibleJTreeNode", $PROTECTED},
	{}
};

$ClassInfo _JTree$AccessibleJTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTree$AccessibleJTree",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleSelection,javax.swing.event.TreeSelectionListener,javax.swing.event.TreeModelListener,javax.swing.event.TreeExpansionListener",
	_JTree$AccessibleJTree_FieldInfo_,
	_JTree$AccessibleJTree_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$AccessibleJTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$AccessibleJTree($Class* clazz) {
	return $of($alloc(JTree$AccessibleJTree));
}

int32_t JTree$AccessibleJTree::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JTree$AccessibleJTree::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JTree$AccessibleJTree::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JTree$AccessibleJTree::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JTree$AccessibleJTree::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JTree$AccessibleJTree::init$($JTree* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	$var($TreeModel, model, this$0->getModel());
	if (model != nullptr) {
		model->addTreeModelListener(this);
	}
	this$0->addTreeExpansionListener(this);
	this$0->addTreeSelectionListener(this);
	$set(this, leadSelectionPath, this$0->getLeadSelectionPath());
	$set(this, leadSelectionAccessible, (this->leadSelectionPath != nullptr) ? static_cast<$Accessible*>($new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this$0, this->leadSelectionPath, this$0)) : ($Accessible*)nullptr);
}

void JTree$AccessibleJTree::valueChanged($TreeSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
}

void JTree$AccessibleJTree::fireVisibleDataPropertyChange() {
	$useLocalCurrentObjectStackCache();
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
}

void JTree$AccessibleJTree::treeNodesChanged($TreeModelEvent* e) {
	fireVisibleDataPropertyChange();
}

void JTree$AccessibleJTree::treeNodesInserted($TreeModelEvent* e) {
	fireVisibleDataPropertyChange();
}

void JTree$AccessibleJTree::treeNodesRemoved($TreeModelEvent* e) {
	fireVisibleDataPropertyChange();
}

void JTree$AccessibleJTree::treeStructureChanged($TreeModelEvent* e) {
	fireVisibleDataPropertyChange();
}

void JTree$AccessibleJTree::treeCollapsed($TreeExpansionEvent* e) {
	$useLocalCurrentObjectStackCache();
	fireVisibleDataPropertyChange();
	$var($TreePath, path, $nc(e)->getPath());
	if (path != nullptr) {
		$var($JTree$AccessibleJTree$AccessibleJTreeNode, node, $new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, path, nullptr));
		$init($AccessibleContext);
		$init($AccessibleState);
		$var($PropertyChangeEvent, pce, $new($PropertyChangeEvent, node, $AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::EXPANDED, $AccessibleState::COLLAPSED));
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, pce);
	}
}

void JTree$AccessibleJTree::treeExpanded($TreeExpansionEvent* e) {
	$useLocalCurrentObjectStackCache();
	fireVisibleDataPropertyChange();
	$var($TreePath, path, $nc(e)->getPath());
	if (path != nullptr) {
		$var($JTree$AccessibleJTree$AccessibleJTreeNode, node, $new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, path, nullptr));
		$init($AccessibleContext);
		$init($AccessibleState);
		$var($PropertyChangeEvent, pce, $new($PropertyChangeEvent, node, $AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::COLLAPSED, $AccessibleState::EXPANDED));
		firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, pce);
	}
}

void JTree$AccessibleJTree::fireActiveDescendantPropertyChange($TreePath* oldPath, $TreePath* newPath) {
	$useLocalCurrentObjectStackCache();
	if (oldPath != newPath) {
		$var($Accessible, oldLSA, (oldPath != nullptr) ? static_cast<$Accessible*>($new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, oldPath, nullptr)) : ($Accessible*)nullptr);
		$var($Accessible, newLSA, (newPath != nullptr) ? static_cast<$Accessible*>($new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, newPath, nullptr)) : ($Accessible*)nullptr);
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY, oldLSA, newLSA);
	}
}

$AccessibleContext* JTree$AccessibleJTree::getCurrentAccessibleContext() {
	$var($Component, c, getCurrentComponent());
	if ($instanceOf($Accessible, c)) {
		return $nc(c)->getAccessibleContext();
	} else {
		return nullptr;
	}
}

$Component* JTree$AccessibleJTree::getCurrentComponent() {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, this->this$0->getModel());
	if (model == nullptr) {
		return nullptr;
	}
	$var($Object, treeRoot, $nc(model)->getRoot());
	if (treeRoot == nullptr) {
		return nullptr;
	}
	$var($TreePath, path, $new($TreePath, treeRoot));
	if (this->this$0->isVisible(path)) {
		$var($TreeCellRenderer, r, this->this$0->getCellRenderer());
		$var($TreeUI, ui, $cast($TreeUI, this->this$0->getUI()));
		if (ui != nullptr) {
			int32_t row = ui->getRowForPath(this->this$0, path);
			int32_t lsr = this->this$0->getLeadSelectionRow();
			bool hasFocus = this->this$0->isFocusOwner() && (lsr == row);
			bool selected = this->this$0->isPathSelected(path);
			bool expanded = this->this$0->isExpanded(path);
			return $nc(r)->getTreeCellRendererComponent(this->this$0, treeRoot, selected, expanded, model->isLeaf(treeRoot), row, hasFocus);
		}
	}
	return nullptr;
}

$AccessibleRole* JTree$AccessibleJTree::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TREE;
}

$Accessible* JTree$AccessibleJTree::getAccessibleAt($Point* p) {
	$var($TreePath, path, this->this$0->getClosestPathForLocation($nc(p)->x, p->y));
	if (path != nullptr) {
		return $new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, path, nullptr);
	} else {
		return nullptr;
	}
}

int32_t JTree$AccessibleJTree::getAccessibleChildrenCount() {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, this->this$0->getModel());
	if (model == nullptr) {
		return 0;
	}
	if (this->this$0->isRootVisible()) {
		return 1;
	}
	$var($Object, treeRoot, $nc(model)->getRoot());
	if (treeRoot == nullptr) {
		return 0;
	}
	return model->getChildCount(treeRoot);
}

$Accessible* JTree$AccessibleJTree::getAccessibleChild(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, this->this$0->getModel());
	if (model == nullptr) {
		return nullptr;
	}
	$var($Object, treeRoot, $nc(model)->getRoot());
	if (treeRoot == nullptr) {
		return nullptr;
	}
	if (this->this$0->isRootVisible()) {
		if (i == 0) {
			$var($ObjectArray, objPath, $new($ObjectArray, {treeRoot}));
			$var($TreePath, path, $new($TreePath, objPath));
			return $new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, path, this->this$0);
		} else {
			return nullptr;
		}
	}
	int32_t count = model->getChildCount(treeRoot);
	if (i < 0 || i >= count) {
		return nullptr;
	}
	$var($Object, obj, model->getChild(treeRoot, i));
	if (obj == nullptr) {
		return nullptr;
	}
	$var($ObjectArray, objPath, $new($ObjectArray, {
		treeRoot,
		obj
	}));
	$var($TreePath, path, $new($TreePath, objPath));
	return $new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, path, this->this$0);
}

int32_t JTree$AccessibleJTree::getAccessibleIndexInParent() {
	return $JComponent$AccessibleJComponent::getAccessibleIndexInParent();
}

$AccessibleSelection* JTree$AccessibleJTree::getAccessibleSelection() {
	return this;
}

int32_t JTree$AccessibleJTree::getAccessibleSelectionCount() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, rootPath, $new($ObjectArray, 1));
	rootPath->set(0, $($nc(this->this$0->treeModel)->getRoot()));
	if (rootPath->get(0) == nullptr) {
		return 0;
	}
	$var($TreePath, childPath, $new($TreePath, rootPath));
	if (this->this$0->isPathSelected(childPath)) {
		return 1;
	} else {
		return 0;
	}
}

$Accessible* JTree$AccessibleJTree::getAccessibleSelection(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (i == 0) {
		$var($ObjectArray, rootPath, $new($ObjectArray, 1));
		rootPath->set(0, $($nc(this->this$0->treeModel)->getRoot()));
		if (rootPath->get(0) == nullptr) {
			return nullptr;
		}
		$var($TreePath, childPath, $new($TreePath, rootPath));
		if (this->this$0->isPathSelected(childPath)) {
			return $new($JTree$AccessibleJTree$AccessibleJTreeNode, this, this->this$0, childPath, this->this$0);
		}
	}
	return nullptr;
}

bool JTree$AccessibleJTree::isAccessibleChildSelected(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (i == 0) {
		$var($ObjectArray, rootPath, $new($ObjectArray, 1));
		rootPath->set(0, $($nc(this->this$0->treeModel)->getRoot()));
		if (rootPath->get(0) == nullptr) {
			return false;
		}
		$var($TreePath, childPath, $new($TreePath, rootPath));
		return this->this$0->isPathSelected(childPath);
	} else {
		return false;
	}
}

void JTree$AccessibleJTree::addAccessibleSelection(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, this->this$0->getModel());
	if (model != nullptr) {
		if (i == 0) {
			$var($ObjectArray, objPath, $new($ObjectArray, {$(model->getRoot())}));
			if (objPath->get(0) == nullptr) {
				return;
			}
			$var($TreePath, path, $new($TreePath, objPath));
			this->this$0->addSelectionPath(path);
		}
	}
}

void JTree$AccessibleJTree::removeAccessibleSelection(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, this->this$0->getModel());
	if (model != nullptr) {
		if (i == 0) {
			$var($ObjectArray, objPath, $new($ObjectArray, {$(model->getRoot())}));
			if (objPath->get(0) == nullptr) {
				return;
			}
			$var($TreePath, path, $new($TreePath, objPath));
			this->this$0->removeSelectionPath(path);
		}
	}
}

void JTree$AccessibleJTree::clearAccessibleSelection() {
	int32_t childCount = getAccessibleChildrenCount();
	for (int32_t i = 0; i < childCount; ++i) {
		removeAccessibleSelection(i);
	}
}

void JTree$AccessibleJTree::selectAllAccessibleSelection() {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, this->this$0->getModel());
	if (model != nullptr) {
		$var($ObjectArray, objPath, $new($ObjectArray, {$(model->getRoot())}));
		if (objPath->get(0) == nullptr) {
			return;
		}
		$var($TreePath, path, $new($TreePath, objPath));
		this->this$0->addSelectionPath(path);
	}
}

JTree$AccessibleJTree::JTree$AccessibleJTree() {
}

$Class* JTree$AccessibleJTree::load$($String* name, bool initialize) {
	$loadClass(JTree$AccessibleJTree, name, initialize, &_JTree$AccessibleJTree_ClassInfo_, allocate$JTree$AccessibleJTree);
	return class$;
}

$Class* JTree$AccessibleJTree::class$ = nullptr;

	} // swing
} // javax
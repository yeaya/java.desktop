#include <javax/swing/JTree$AccessibleJTree$AccessibleJTreeNode.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JTree$AccessibleJTree.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef ACTIVE
#undef COLLAPSED
#undef EDITABLE
#undef EXPANDABLE
#undef EXPANDED
#undef SELECTED
#undef SHOWING
#undef TOGGLE_EXPAND
#undef UNKNOWN
#undef VISIBLE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $JTree$AccessibleJTree = ::javax::swing::JTree$AccessibleJTree;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {

$FieldInfo _JTree$AccessibleJTree$AccessibleJTreeNode_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JTree$AccessibleJTree;", nullptr, $FINAL | $SYNTHETIC, $field(JTree$AccessibleJTree$AccessibleJTreeNode, this$1)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE, $field(JTree$AccessibleJTree$AccessibleJTreeNode, tree)},
	{"treeModel", "Ljavax/swing/tree/TreeModel;", nullptr, $PRIVATE, $field(JTree$AccessibleJTree$AccessibleJTreeNode, treeModel)},
	{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JTree$AccessibleJTree$AccessibleJTreeNode, obj)},
	{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $field(JTree$AccessibleJTree$AccessibleJTreeNode, path)},
	{"accessibleParent", "Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(JTree$AccessibleJTree$AccessibleJTreeNode, accessibleParent)},
	{"index", "I", nullptr, $PRIVATE, $field(JTree$AccessibleJTree$AccessibleJTreeNode, index)},
	{"isLeaf", "Z", nullptr, $PRIVATE, $field(JTree$AccessibleJTree$AccessibleJTreeNode, isLeaf)},
	{}
};

$MethodInfo _JTree$AccessibleJTree$AccessibleJTreeNode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTree$AccessibleJTree;Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $method(static_cast<void(JTree$AccessibleJTree$AccessibleJTreeNode::*)($JTree$AccessibleJTree*,$JTree*,$TreePath*,$Accessible*)>(&JTree$AccessibleJTree$AccessibleJTreeNode::init$))},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getChildTreePath", "(I)Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $method(static_cast<$TreePath*(JTree$AccessibleJTree$AccessibleJTreeNode::*)(int32_t)>(&JTree$AccessibleJTree$AccessibleJTreeNode::getChildTreePath))},
	{"getCurrentAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(JTree$AccessibleJTree$AccessibleJTreeNode::*)()>(&JTree$AccessibleJTree$AccessibleJTreeNode::getCurrentAccessibleContext))},
	{"getCurrentComponent", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(JTree$AccessibleJTree$AccessibleJTreeNode::*)()>(&JTree$AccessibleJTree$AccessibleJTreeNode::getCurrentComponent))},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLocationInJTree", "()Ljava/awt/Point;", nullptr, $PROTECTED},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"isShowing", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"setAccessibleDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setAccessibleName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTree$AccessibleJTree$AccessibleJTreeNode_InnerClassesInfo_[] = {
	{"javax.swing.JTree$AccessibleJTree", "javax.swing.JTree", "AccessibleJTree", $PROTECTED},
	{"javax.swing.JTree$AccessibleJTree$AccessibleJTreeNode", "javax.swing.JTree$AccessibleJTree", "AccessibleJTreeNode", $PROTECTED},
	{}
};

$ClassInfo _JTree$AccessibleJTree$AccessibleJTreeNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTree$AccessibleJTree$AccessibleJTreeNode",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.Accessible,javax.accessibility.AccessibleComponent,javax.accessibility.AccessibleSelection,javax.accessibility.AccessibleAction",
	_JTree$AccessibleJTree$AccessibleJTreeNode_FieldInfo_,
	_JTree$AccessibleJTree$AccessibleJTreeNode_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$AccessibleJTree$AccessibleJTreeNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$AccessibleJTree$AccessibleJTreeNode($Class* clazz) {
	return $of($alloc(JTree$AccessibleJTree$AccessibleJTreeNode));
}

int32_t JTree$AccessibleJTree$AccessibleJTreeNode::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* JTree$AccessibleJTree$AccessibleJTreeNode::clone() {
	 return this->$AccessibleContext::clone();
}

$String* JTree$AccessibleJTree$AccessibleJTreeNode::toString() {
	 return this->$AccessibleContext::toString();
}

void JTree$AccessibleJTree$AccessibleJTreeNode::finalize() {
	this->$AccessibleContext::finalize();
}

void JTree$AccessibleJTree$AccessibleJTreeNode::init$($JTree$AccessibleJTree* this$1, $JTree* t, $TreePath* p, $Accessible* ap) {
	$set(this, this$1, this$1);
	$AccessibleContext::init$();
	$set(this, tree, nullptr);
	$set(this, treeModel, nullptr);
	$set(this, obj, nullptr);
	$set(this, path, nullptr);
	$set(this, accessibleParent, nullptr);
	this->index = 0;
	this->isLeaf = false;
	$set(this, tree, t);
	$set(this, path, p);
	$set(this, accessibleParent, ap);
	$set(this, treeModel, $nc(t)->getModel());
	$set(this, obj, $nc(p)->getLastPathComponent());
	if (this->treeModel != nullptr) {
		this->isLeaf = $nc(this->treeModel)->isLeaf(this->obj);
	}
}

$TreePath* JTree$AccessibleJTree$AccessibleJTreeNode::getChildTreePath(int32_t i) {
	if (i < 0 || i >= getAccessibleChildrenCount()) {
		return nullptr;
	} else {
		$var($Object, childObj, $nc(this->treeModel)->getChild(this->obj, i));
		$var($ObjectArray, objPath, $nc(this->path)->getPath());
		$var($ObjectArray, objChildPath, $new($ObjectArray, $nc(objPath)->length + 1));
		$System::arraycopy(objPath, 0, objChildPath, 0, objPath->length);
		objChildPath->set(objChildPath->length - 1, childObj);
		return $new($TreePath, objChildPath);
	}
}

$AccessibleContext* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleContext() {
	return this;
}

$AccessibleContext* JTree$AccessibleJTree$AccessibleJTreeNode::getCurrentAccessibleContext() {
	$var($Component, c, getCurrentComponent());
	if ($instanceOf($Accessible, c)) {
		return $nc(c)->getAccessibleContext();
	} else {
		return nullptr;
	}
}

$Component* JTree$AccessibleJTree$AccessibleJTreeNode::getCurrentComponent() {
	if ($nc(this->tree)->isVisible(this->path)) {
		$var($TreeCellRenderer, r, $nc(this->tree)->getCellRenderer());
		if (r == nullptr) {
			return nullptr;
		}
		$var($TreeUI, ui, $cast($TreeUI, $nc(this->tree)->getUI()));
		if (ui != nullptr) {
			int32_t row = ui->getRowForPath(this->this$1->this$0, this->path);
			bool selected = $nc(this->tree)->isPathSelected(this->path);
			bool expanded = $nc(this->tree)->isExpanded(this->path);
			bool hasFocus = false;
			return $nc(r)->getTreeCellRendererComponent(this->tree, this->obj, selected, expanded, this->isLeaf, row, hasFocus);
		}
	}
	return nullptr;
}

$String* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleName() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		$var($String, name, ac->getAccessibleName());
		if ((name != nullptr) && (name != ""_s)) {
			return ac->getAccessibleName();
		} else {
			return nullptr;
		}
	}
	if ((this->accessibleName != nullptr) && (this->accessibleName != ""_s)) {
		return this->accessibleName;
	} else {
		$init($AccessibleContext);
		return $cast($String, $nc(this->this$1->this$0)->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY));
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setAccessibleName($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleName(s);
	} else {
		$AccessibleContext::setAccessibleName(s);
	}
}

$String* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleDescription() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleDescription();
	} else {
		return $AccessibleContext::getAccessibleDescription();
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setAccessibleDescription($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleDescription(s);
	} else {
		$AccessibleContext::setAccessibleDescription(s);
	}
}

$AccessibleRole* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleRole() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleRole();
	} else {
		$init($AccessibleRole);
		return $AccessibleRole::UNKNOWN;
	}
}

$AccessibleStateSet* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleStateSet() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	$var($AccessibleStateSet, states, nullptr);
	if (ac != nullptr) {
		$assign(states, ac->getAccessibleStateSet());
	} else {
		$assign(states, $new($AccessibleStateSet));
	}
	if (isShowing()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::SHOWING);
	} else {
		$init($AccessibleState);
		if ($nc(states)->contains($AccessibleState::SHOWING)) {
			states->remove($AccessibleState::SHOWING);
		}
	}
	if (isVisible()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::VISIBLE);
	} else {
		$init($AccessibleState);
		if ($nc(states)->contains($AccessibleState::VISIBLE)) {
			states->remove($AccessibleState::VISIBLE);
		}
	}
	if ($nc(this->tree)->isPathSelected(this->path)) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::SELECTED);
	}
	if (this->path == $nc(this->this$1->this$0)->getLeadSelectionPath()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	if (!this->isLeaf) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::EXPANDABLE);
	}
	if ($nc(this->tree)->isExpanded(this->path)) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::EXPANDED);
	} else {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::COLLAPSED);
	}
	if ($nc(this->tree)->isEditable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::EDITABLE);
	}
	return states;
}

$Accessible* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleParent() {
	if (this->accessibleParent == nullptr) {
		$var($ObjectArray, objPath, $nc(this->path)->getPath());
		if ($nc(objPath)->length > 1) {
			$var($Object0, objParent, objPath->get(objPath->length - 2));
			if (this->treeModel != nullptr) {
				this->index = $nc(this->treeModel)->getIndexOfChild(objParent, this->obj);
			}
			$var($ObjectArray, objParentPath, $new($ObjectArray, objPath->length - 1));
			$System::arraycopy(objPath, 0, objParentPath, 0, objPath->length - 1);
			$var($TreePath, parentPath, $new($TreePath, objParentPath));
			$set(this, accessibleParent, $new(JTree$AccessibleJTree$AccessibleJTreeNode, this->this$1, this->tree, parentPath, nullptr));
			this->setAccessibleParent(this->accessibleParent);
		} else if (this->treeModel != nullptr) {
			$set(this, accessibleParent, this->tree);
			this->index = 0;
			this->setAccessibleParent(this->accessibleParent);
		}
	}
	return this->accessibleParent;
}

int32_t JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleIndexInParent() {
	if (this->accessibleParent == nullptr) {
		getAccessibleParent();
	}
	$var($ObjectArray, objPath, $nc(this->path)->getPath());
	if ($nc(objPath)->length > 1) {
		$var($Object0, objParent, objPath->get(objPath->length - 2));
		if (this->treeModel != nullptr) {
			this->index = $nc(this->treeModel)->getIndexOfChild(objParent, this->obj);
		}
	}
	return this->index;
}

int32_t JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleChildrenCount() {
	return $nc(this->treeModel)->getChildCount(this->obj);
}

$Accessible* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleChild(int32_t i) {
	if (i < 0 || i >= getAccessibleChildrenCount()) {
		return nullptr;
	} else {
		$var($Object, childObj, $nc(this->treeModel)->getChild(this->obj, i));
		$var($ObjectArray, objPath, $nc(this->path)->getPath());
		$var($ObjectArray, objChildPath, $new($ObjectArray, $nc(objPath)->length + 1));
		$System::arraycopy(objPath, 0, objChildPath, 0, objPath->length);
		objChildPath->set(objChildPath->length - 1, childObj);
		$var($TreePath, childPath, $new($TreePath, objChildPath));
		return $new(JTree$AccessibleJTree$AccessibleJTreeNode, this->this$1, this->this$1->this$0, childPath, this);
	}
}

$Locale* JTree$AccessibleJTree$AccessibleJTreeNode::getLocale() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getLocale();
	} else {
		return $nc(this->tree)->getLocale();
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::addPropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->addPropertyChangeListener(l);
	} else {
		$AccessibleContext::addPropertyChangeListener(l);
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::removePropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->removePropertyChangeListener(l);
	} else {
		$AccessibleContext::removePropertyChangeListener(l);
	}
}

$AccessibleAction* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleAction() {
	return this;
}

$AccessibleComponent* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleComponent() {
	return this;
}

$AccessibleSelection* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleSelection() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr && this->isLeaf) {
		return $nc($(getCurrentAccessibleContext()))->getAccessibleSelection();
	} else {
		return this;
	}
}

$AccessibleText* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleText() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return $nc($(getCurrentAccessibleContext()))->getAccessibleText();
	} else {
		return nullptr;
	}
}

$AccessibleValue* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleValue() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return $nc($(getCurrentAccessibleContext()))->getAccessibleValue();
	} else {
		return nullptr;
	}
}

$Color* JTree$AccessibleJTree$AccessibleJTreeNode::getBackground() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getBackground();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->getBackground();
		} else {
			return nullptr;
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setBackground($Color* c) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setBackground(c);
	} else {
		$var($Component, cp, getCurrentComponent());
		if (cp != nullptr) {
			cp->setBackground(c);
		}
	}
}

$Color* JTree$AccessibleJTree$AccessibleJTreeNode::getForeground() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getForeground();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->getForeground();
		} else {
			return nullptr;
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setForeground($Color* c) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setForeground(c);
	} else {
		$var($Component, cp, getCurrentComponent());
		if (cp != nullptr) {
			cp->setForeground(c);
		}
	}
}

$Cursor* JTree$AccessibleJTree$AccessibleJTreeNode::getCursor() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getCursor();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->getCursor();
		} else {
			$var($Accessible, ap, getAccessibleParent());
			if ($instanceOf($AccessibleComponent, ap)) {
				return $nc(($cast($AccessibleComponent, ap)))->getCursor();
			} else {
				return nullptr;
			}
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setCursor($Cursor* c) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setCursor(c);
	} else {
		$var($Component, cp, getCurrentComponent());
		if (cp != nullptr) {
			cp->setCursor(c);
		}
	}
}

$Font* JTree$AccessibleJTree$AccessibleJTreeNode::getFont() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getFont();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->getFont();
		} else {
			return nullptr;
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setFont($Font* f) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setFont(f);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->setFont(f);
		}
	}
}

$FontMetrics* JTree$AccessibleJTree$AccessibleJTreeNode::getFontMetrics($Font* f) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getFontMetrics(f);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->getFontMetrics(f);
		} else {
			return nullptr;
		}
	}
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::isEnabled() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->isEnabled();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->isEnabled();
		} else {
			return false;
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setEnabled(bool b) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setEnabled(b);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->setEnabled(b);
		}
	}
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::isVisible() {
	$var($Rectangle, pathBounds, $nc(this->tree)->getPathBounds(this->path));
	$var($Rectangle, parentBounds, $nc(this->tree)->getVisibleRect());
	return pathBounds != nullptr && parentBounds != nullptr && parentBounds->intersects(pathBounds);
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setVisible(bool b) {
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::isShowing() {
	bool var$0 = $nc(this->tree)->isShowing();
	return (var$0 && isVisible());
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::contains($Point* p) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$var($Rectangle, r, $nc(($cast($AccessibleComponent, ac)))->getBounds());
		return $nc(r)->contains(p);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			$var($Rectangle, r, c->getBounds());
			return $nc(r)->contains(p);
		} else {
			return $nc($(getBounds()))->contains(p);
		}
	}
}

$Point* JTree$AccessibleJTree$AccessibleJTreeNode::getLocationOnScreen() {
	if (this->tree != nullptr) {
		$var($Point, treeLocation, $nc(this->tree)->getLocationOnScreen());
		$var($Rectangle, pathBounds, $nc(this->tree)->getPathBounds(this->path));
		if (treeLocation != nullptr && pathBounds != nullptr) {
			$var($Point, nodeLocation, $new($Point, pathBounds->x, pathBounds->y));
			nodeLocation->translate(treeLocation->x, treeLocation->y);
			return nodeLocation;
		} else {
			return nullptr;
		}
	} else {
		return nullptr;
	}
}

$Point* JTree$AccessibleJTree$AccessibleJTreeNode::getLocationInJTree() {
	$var($Rectangle, r, $nc(this->tree)->getPathBounds(this->path));
	if (r != nullptr) {
		return r->getLocation();
	} else {
		return nullptr;
	}
}

$Point* JTree$AccessibleJTree$AccessibleJTreeNode::getLocation() {
	$var($Rectangle, r, getBounds());
	if (r != nullptr) {
		return r->getLocation();
	} else {
		return nullptr;
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setLocation($Point* p) {
}

$Rectangle* JTree$AccessibleJTree$AccessibleJTreeNode::getBounds() {
	$var($Rectangle, r, $nc(this->tree)->getPathBounds(this->path));
	$var($Accessible, parent, getAccessibleParent());
	if (parent != nullptr) {
		if ($instanceOf(JTree$AccessibleJTree$AccessibleJTreeNode, parent)) {
			$var($Point, parentLoc, $nc(($cast(JTree$AccessibleJTree$AccessibleJTreeNode, parent)))->getLocationInJTree());
			if (parentLoc != nullptr && r != nullptr) {
				r->translate(-parentLoc->x, -parentLoc->y);
			} else {
				return nullptr;
			}
		}
	}
	return r;
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setBounds($Rectangle* r) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setBounds(r);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->setBounds(r);
		}
	}
}

$Dimension* JTree$AccessibleJTree$AccessibleJTreeNode::getSize() {
	return $nc($(getBounds()))->getSize();
}

void JTree$AccessibleJTree$AccessibleJTreeNode::setSize($Dimension* d) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setSize(d);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->setSize(d);
		}
	}
}

$Accessible* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleAt($Point* p) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getAccessibleAt(p);
	} else {
		return nullptr;
	}
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::isFocusTraversable() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->isFocusTraversable();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->isFocusTraversable();
		} else {
			return false;
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::requestFocus() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->requestFocus();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->requestFocus();
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::addFocusListener($FocusListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->addFocusListener(l);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->addFocusListener(l);
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::removeFocusListener($FocusListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->removeFocusListener(l);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->removeFocusListener(l);
		}
	}
}

int32_t JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleSelectionCount() {
	int32_t count = 0;
	int32_t childCount = getAccessibleChildrenCount();
	for (int32_t i = 0; i < childCount; ++i) {
		$var($TreePath, childPath, getChildTreePath(i));
		if ($nc(this->tree)->isPathSelected(childPath)) {
			++count;
		}
	}
	return count;
}

$Accessible* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleSelection(int32_t i) {
	int32_t childCount = getAccessibleChildrenCount();
	if (i < 0 || i >= childCount) {
		return nullptr;
	}
	int32_t count = 0;
	for (int32_t j = 0; j < childCount && i >= count; ++j) {
		$var($TreePath, childPath, getChildTreePath(j));
		if ($nc(this->tree)->isPathSelected(childPath)) {
			if (count == i) {
				return $new(JTree$AccessibleJTree$AccessibleJTreeNode, this->this$1, this->tree, childPath, this);
			} else {
				++count;
			}
		}
	}
	return nullptr;
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::isAccessibleChildSelected(int32_t i) {
	int32_t childCount = getAccessibleChildrenCount();
	if (i < 0 || i >= childCount) {
		return false;
	} else {
		$var($TreePath, childPath, getChildTreePath(i));
		return $nc(this->tree)->isPathSelected(childPath);
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::addAccessibleSelection(int32_t i) {
	$var($TreeModel, model, $nc(this->this$1->this$0)->getModel());
	if (model != nullptr) {
		if (i >= 0 && i < getAccessibleChildrenCount()) {
			$var($TreePath, path, getChildTreePath(i));
			$nc(this->this$1->this$0)->addSelectionPath(path);
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::removeAccessibleSelection(int32_t i) {
	$var($TreeModel, model, $nc(this->this$1->this$0)->getModel());
	if (model != nullptr) {
		if (i >= 0 && i < getAccessibleChildrenCount()) {
			$var($TreePath, path, getChildTreePath(i));
			$nc(this->this$1->this$0)->removeSelectionPath(path);
		}
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::clearAccessibleSelection() {
	int32_t childCount = getAccessibleChildrenCount();
	for (int32_t i = 0; i < childCount; ++i) {
		removeAccessibleSelection(i);
	}
}

void JTree$AccessibleJTree$AccessibleJTreeNode::selectAllAccessibleSelection() {
	$var($TreeModel, model, $nc(this->this$1->this$0)->getModel());
	if (model != nullptr) {
		int32_t childCount = getAccessibleChildrenCount();
		$var($TreePath, path, nullptr);
		for (int32_t i = 0; i < childCount; ++i) {
			$assign(path, getChildTreePath(i));
			$nc(this->this$1->this$0)->addSelectionPath(path);
		}
	}
}

int32_t JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleActionCount() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		$var($AccessibleAction, aa, ac->getAccessibleAction());
		if (aa != nullptr) {
			return (aa->getAccessibleActionCount() + (this->isLeaf ? 0 : 1));
		}
	}
	return this->isLeaf ? 0 : 1;
}

$String* JTree$AccessibleJTree$AccessibleJTreeNode::getAccessibleActionDescription(int32_t i) {
	if (i < 0 || i >= getAccessibleActionCount()) {
		return nullptr;
	}
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (i == 0) {
		$init($AccessibleAction);
		return $AccessibleAction::TOGGLE_EXPAND;
	} else if (ac != nullptr) {
		$var($AccessibleAction, aa, ac->getAccessibleAction());
		if (aa != nullptr) {
			return aa->getAccessibleActionDescription(i - 1);
		}
	}
	return nullptr;
}

bool JTree$AccessibleJTree$AccessibleJTreeNode::doAccessibleAction(int32_t i) {
	if (i < 0 || i >= getAccessibleActionCount()) {
		return false;
	}
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (i == 0) {
		if ($nc(this->this$1->this$0)->isExpanded(this->path)) {
			$nc(this->this$1->this$0)->collapsePath(this->path);
		} else {
			$nc(this->this$1->this$0)->expandPath(this->path);
		}
		return true;
	} else if (ac != nullptr) {
		$var($AccessibleAction, aa, ac->getAccessibleAction());
		if (aa != nullptr) {
			return aa->doAccessibleAction(i - 1);
		}
	}
	return false;
}

JTree$AccessibleJTree$AccessibleJTreeNode::JTree$AccessibleJTree$AccessibleJTreeNode() {
}

$Class* JTree$AccessibleJTree$AccessibleJTreeNode::load$($String* name, bool initialize) {
	$loadClass(JTree$AccessibleJTree$AccessibleJTreeNode, name, initialize, &_JTree$AccessibleJTree$AccessibleJTreeNode_ClassInfo_, allocate$JTree$AccessibleJTree$AccessibleJTreeNode);
	return class$;
}

$Class* JTree$AccessibleJTree$AccessibleJTreeNode::class$ = nullptr;

	} // swing
} // javax
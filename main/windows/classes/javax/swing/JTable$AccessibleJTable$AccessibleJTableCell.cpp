#include <javax/swing/JTable$AccessibleJTable$AccessibleJTableCell.h>

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
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
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
#include <javax/swing/JTable$AccessibleJTable.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef ACTIVE
#undef SELECTED
#undef SHOWING
#undef TRANSIENT
#undef UNKNOWN

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
using $JTable = ::javax::swing::JTable;
using $JTable$AccessibleJTable = ::javax::swing::JTable$AccessibleJTable;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {

$FieldInfo _JTable$AccessibleJTable$AccessibleJTableCell_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JTable$AccessibleJTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$AccessibleJTable$AccessibleJTableCell, this$1)},
	{"parent", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableCell, parent)},
	{"row", "I", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableCell, row)},
	{"column", "I", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableCell, column)},
	{"index", "I", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableCell, index)},
	{}
};

$MethodInfo _JTable$AccessibleJTable$AccessibleJTableCell_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTable$AccessibleJTable;Ljavax/swing/JTable;III)V", nullptr, $PUBLIC, $method(static_cast<void(JTable$AccessibleJTable$AccessibleJTableCell::*)($JTable$AccessibleJTable*,$JTable*,int32_t,int32_t,int32_t)>(&JTable$AccessibleJTable$AccessibleJTableCell::init$))},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
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
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCurrentAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED},
	{"getCurrentComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"isShowing", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"requestFocus", "()V", nullptr, $PUBLIC},
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

$InnerClassInfo _JTable$AccessibleJTable$AccessibleJTableCell_InnerClassesInfo_[] = {
	{"javax.swing.JTable$AccessibleJTable", "javax.swing.JTable", "AccessibleJTable", $PROTECTED},
	{"javax.swing.JTable$AccessibleJTable$AccessibleJTableCell", "javax.swing.JTable$AccessibleJTable", "AccessibleJTableCell", $PROTECTED},
	{}
};

$ClassInfo _JTable$AccessibleJTable$AccessibleJTableCell_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTable$AccessibleJTable$AccessibleJTableCell",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.Accessible,javax.accessibility.AccessibleComponent",
	_JTable$AccessibleJTable$AccessibleJTableCell_FieldInfo_,
	_JTable$AccessibleJTable$AccessibleJTableCell_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$AccessibleJTable$AccessibleJTableCell_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$AccessibleJTable$AccessibleJTableCell($Class* clazz) {
	return $of($alloc(JTable$AccessibleJTable$AccessibleJTableCell));
}

int32_t JTable$AccessibleJTable$AccessibleJTableCell::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool JTable$AccessibleJTable$AccessibleJTableCell::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* JTable$AccessibleJTable$AccessibleJTableCell::clone() {
	 return this->$AccessibleContext::clone();
}

$String* JTable$AccessibleJTable$AccessibleJTableCell::toString() {
	 return this->$AccessibleContext::toString();
}

void JTable$AccessibleJTable$AccessibleJTableCell::finalize() {
	this->$AccessibleContext::finalize();
}

void JTable$AccessibleJTable$AccessibleJTableCell::init$($JTable$AccessibleJTable* this$1, $JTable* t, int32_t r, int32_t c, int32_t i) {
	$set(this, this$1, this$1);
	$AccessibleContext::init$();
	$set(this, parent, t);
	this->row = r;
	this->column = c;
	this->index = i;
	this->setAccessibleParent(this->parent);
}

$AccessibleContext* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleContext() {
	return this;
}

$AccessibleContext* JTable$AccessibleJTable$AccessibleJTableCell::getCurrentAccessibleContext() {
	$useLocalCurrentObjectStackCache();
	$var($TableColumn, aColumn, $nc($($nc(this->this$1->this$0)->getColumnModel()))->getColumn(this->column));
	$var($TableCellRenderer, renderer, $nc(aColumn)->getCellRenderer());
	if (renderer == nullptr) {
		$Class* columnClass = $nc(this->this$1->this$0)->getColumnClass(this->column);
		$assign(renderer, $nc(this->this$1->this$0)->getDefaultRenderer(columnClass));
	}
	$var($Component, component, $nc(renderer)->getTableCellRendererComponent(this->this$1->this$0, $($nc(this->this$1->this$0)->getValueAt(this->row, this->column)), false, false, this->row, this->column));
	if ($instanceOf($Accessible, component)) {
		return $nc(component)->getAccessibleContext();
	} else {
		return nullptr;
	}
}

$Component* JTable$AccessibleJTable$AccessibleJTableCell::getCurrentComponent() {
	$useLocalCurrentObjectStackCache();
	$var($TableColumn, aColumn, $nc($($nc(this->this$1->this$0)->getColumnModel()))->getColumn(this->column));
	$var($TableCellRenderer, renderer, $nc(aColumn)->getCellRenderer());
	if (renderer == nullptr) {
		$Class* columnClass = $nc(this->this$1->this$0)->getColumnClass(this->column);
		$assign(renderer, $nc(this->this$1->this$0)->getDefaultRenderer(columnClass));
	}
	return $nc(renderer)->getTableCellRendererComponent(this->this$1->this$0, nullptr, false, false, this->row, this->column);
}

$String* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleName() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		$var($String, name, ac->getAccessibleName());
		if ((name != nullptr) && (name != ""_s)) {
			return name;
		}
	}
	if ((this->accessibleName != nullptr) && (this->accessibleName != ""_s)) {
		return this->accessibleName;
	} else {
		$init($AccessibleContext);
		return $cast($String, $nc(this->this$1->this$0)->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY));
	}
}

void JTable$AccessibleJTable$AccessibleJTableCell::setAccessibleName($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleName(s);
	} else {
		$AccessibleContext::setAccessibleName(s);
	}
}

$String* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleDescription() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleDescription();
	} else {
		return $AccessibleContext::getAccessibleDescription();
	}
}

void JTable$AccessibleJTable$AccessibleJTableCell::setAccessibleDescription($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleDescription(s);
	} else {
		$AccessibleContext::setAccessibleDescription(s);
	}
}

$AccessibleRole* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleRole() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleRole();
	} else {
		$init($AccessibleRole);
		return $AccessibleRole::UNKNOWN;
	}
}

$AccessibleStateSet* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleStateSet() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	$var($AccessibleStateSet, as, nullptr);
	if (ac != nullptr) {
		$assign(as, ac->getAccessibleStateSet());
	}
	if (as == nullptr) {
		$assign(as, $new($AccessibleStateSet));
	}
	$var($Rectangle, rjt, $nc(this->this$1->this$0)->getVisibleRect());
	$var($Rectangle, rcell, $nc(this->this$1->this$0)->getCellRect(this->row, this->column, false));
	if ($nc(rjt)->intersects(rcell)) {
		$init($AccessibleState);
		$nc(as)->add($AccessibleState::SHOWING);
	} else {
		$init($AccessibleState);
		if ($nc(as)->contains($AccessibleState::SHOWING)) {
			as->remove($AccessibleState::SHOWING);
		}
	}
	if ($nc(this->parent)->isCellSelected(this->row, this->column)) {
		$init($AccessibleState);
		$nc(as)->add($AccessibleState::SELECTED);
	} else {
		$init($AccessibleState);
		if ($nc(as)->contains($AccessibleState::SELECTED)) {
			as->remove($AccessibleState::SELECTED);
		}
	}
	bool var$0 = (this->row == $nc(this->this$1->this$0)->getSelectedRow());
	if (var$0 && (this->column == $nc(this->this$1->this$0)->getSelectedColumn())) {
		$init($AccessibleState);
		$nc(as)->add($AccessibleState::ACTIVE);
	}
	$init($AccessibleState);
	$nc(as)->add($AccessibleState::TRANSIENT);
	return as;
}

$Accessible* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleParent() {
	return this->parent;
}

int32_t JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleIndexInParent() {
	return this->index;
}

int32_t JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleChildrenCount() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleChildrenCount();
	} else {
		return 0;
	}
}

$Accessible* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleChild(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		$var($Accessible, accessibleChild, ac->getAccessibleChild(i));
		ac->setAccessibleParent(this);
		return accessibleChild;
	} else {
		return nullptr;
	}
}

$Locale* JTable$AccessibleJTable$AccessibleJTableCell::getLocale() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getLocale();
	} else {
		return nullptr;
	}
}

void JTable$AccessibleJTable$AccessibleJTableCell::addPropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->addPropertyChangeListener(l);
	} else {
		$AccessibleContext::addPropertyChangeListener(l);
	}
}

void JTable$AccessibleJTable$AccessibleJTableCell::removePropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->removePropertyChangeListener(l);
	} else {
		$AccessibleContext::removePropertyChangeListener(l);
	}
}

$AccessibleAction* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleAction() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleAction();
}

$AccessibleComponent* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleComponent() {
	return this;
}

$AccessibleSelection* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleSelection() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleSelection();
}

$AccessibleText* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleText() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleText();
}

$AccessibleValue* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleValue() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleValue();
}

$Color* JTable$AccessibleJTable$AccessibleJTableCell::getBackground() {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::setBackground($Color* c) {
	$useLocalCurrentObjectStackCache();
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

$Color* JTable$AccessibleJTable$AccessibleJTableCell::getForeground() {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::setForeground($Color* c) {
	$useLocalCurrentObjectStackCache();
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

$Cursor* JTable$AccessibleJTable$AccessibleJTableCell::getCursor() {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::setCursor($Cursor* c) {
	$useLocalCurrentObjectStackCache();
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

$Font* JTable$AccessibleJTable$AccessibleJTableCell::getFont() {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::setFont($Font* f) {
	$useLocalCurrentObjectStackCache();
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

$FontMetrics* JTable$AccessibleJTable$AccessibleJTableCell::getFontMetrics($Font* f) {
	$useLocalCurrentObjectStackCache();
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

bool JTable$AccessibleJTable$AccessibleJTableCell::isEnabled() {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::setEnabled(bool b) {
	$useLocalCurrentObjectStackCache();
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

bool JTable$AccessibleJTable$AccessibleJTableCell::isVisible() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->isVisible();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->isVisible();
		} else {
			return false;
		}
	}
}

void JTable$AccessibleJTable$AccessibleJTableCell::setVisible(bool b) {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setVisible(b);
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			c->setVisible(b);
		}
	}
}

bool JTable$AccessibleJTable$AccessibleJTableCell::isShowing() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		if ($nc(ac)->getAccessibleParent() != nullptr) {
			return $nc(($cast($AccessibleComponent, ac)))->isShowing();
		} else {
			return isVisible();
		}
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			return c->isShowing();
		} else {
			return false;
		}
	}
}

bool JTable$AccessibleJTable$AccessibleJTableCell::contains($Point* p) {
	$useLocalCurrentObjectStackCache();
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

$Point* JTable$AccessibleJTable$AccessibleJTableCell::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	if (this->parent != nullptr && $nc(this->parent)->isShowing()) {
		$var($Point, parentLocation, $nc(this->parent)->getLocationOnScreen());
		$var($Point, componentLocation, getLocation());
		$nc(componentLocation)->translate($nc(parentLocation)->x, parentLocation->y);
		return componentLocation;
	} else {
		return nullptr;
	}
}

$Point* JTable$AccessibleJTable$AccessibleJTableCell::getLocation() {
	if (this->parent != nullptr) {
		$var($Rectangle, r, $nc(this->parent)->getCellRect(this->row, this->column, false));
		if (r != nullptr) {
			return r->getLocation();
		}
	}
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleJTableCell::setLocation($Point* p) {
}

$Rectangle* JTable$AccessibleJTable$AccessibleJTableCell::getBounds() {
	if (this->parent != nullptr) {
		return $nc(this->parent)->getCellRect(this->row, this->column, false);
	} else {
		return nullptr;
	}
}

void JTable$AccessibleJTable$AccessibleJTableCell::setBounds($Rectangle* r) {
	$useLocalCurrentObjectStackCache();
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

$Dimension* JTable$AccessibleJTable$AccessibleJTableCell::getSize() {
	if (this->parent != nullptr) {
		$var($Rectangle, r, $nc(this->parent)->getCellRect(this->row, this->column, false));
		if (r != nullptr) {
			return r->getSize();
		}
	}
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleJTableCell::setSize($Dimension* d) {
	$useLocalCurrentObjectStackCache();
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

$Accessible* JTable$AccessibleJTable$AccessibleJTableCell::getAccessibleAt($Point* p) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getAccessibleAt(p);
	} else {
		return nullptr;
	}
}

bool JTable$AccessibleJTable$AccessibleJTableCell::isFocusTraversable() {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::requestFocus() {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::addFocusListener($FocusListener* l) {
	$useLocalCurrentObjectStackCache();
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

void JTable$AccessibleJTable$AccessibleJTableCell::removeFocusListener($FocusListener* l) {
	$useLocalCurrentObjectStackCache();
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

JTable$AccessibleJTable$AccessibleJTableCell::JTable$AccessibleJTable$AccessibleJTableCell() {
}

$Class* JTable$AccessibleJTable$AccessibleJTableCell::load$($String* name, bool initialize) {
	$loadClass(JTable$AccessibleJTable$AccessibleJTableCell, name, initialize, &_JTable$AccessibleJTable$AccessibleJTableCell_ClassInfo_, allocate$JTable$AccessibleJTable$AccessibleJTableCell);
	return class$;
}

$Class* JTable$AccessibleJTable$AccessibleJTableCell::class$ = nullptr;

	} // swing
} // javax
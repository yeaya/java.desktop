#include <javax/swing/table/JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry.h>

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
#include <javax/swing/JTable.h>
#include <javax/swing/table/JTableHeader$AccessibleJTableHeader.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef COLUMN_HEADER
#undef SHOWING

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
using $JTable = ::javax::swing::JTable;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $JTableHeader$AccessibleJTableHeader = ::javax::swing::table::JTableHeader$AccessibleJTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/table/JTableHeader$AccessibleJTableHeader;", nullptr, $FINAL | $SYNTHETIC, $field(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry, this$1)},
	{"parent", "Ljavax/swing/table/JTableHeader;", nullptr, $PRIVATE, $field(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry, parent)},
	{"column", "I", nullptr, $PRIVATE, $field(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry, column)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry, table)},
	{}
};

$MethodInfo _JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/table/JTableHeader$AccessibleJTableHeader;ILjavax/swing/table/JTableHeader;Ljavax/swing/JTable;)V", nullptr, $PUBLIC, $method(static_cast<void(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::*)($JTableHeader$AccessibleJTableHeader*,int32_t,$JTableHeader*,$JTable*)>(&JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::init$))},
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
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCurrentAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::*)()>(&JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getCurrentAccessibleContext))},
	{"getCurrentComponent", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::*)()>(&JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getCurrentComponent))},
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

$InnerClassInfo _JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_InnerClassesInfo_[] = {
	{"javax.swing.table.JTableHeader$AccessibleJTableHeader", "javax.swing.table.JTableHeader", "AccessibleJTableHeader", $PROTECTED},
	{"javax.swing.table.JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry", "javax.swing.table.JTableHeader$AccessibleJTableHeader", "AccessibleJTableHeaderEntry", $PROTECTED},
	{}
};

$ClassInfo _JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.Accessible,javax.accessibility.AccessibleComponent",
	_JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_FieldInfo_,
	_JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_MethodInfo_,
	nullptr,
	nullptr,
	_JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.table.JTableHeader"
};

$Object* allocate$JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry($Class* clazz) {
	return $of($alloc(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry));
}

int32_t JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::clone() {
	 return this->$AccessibleContext::clone();
}

$String* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::toString() {
	 return this->$AccessibleContext::toString();
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::finalize() {
	this->$AccessibleContext::finalize();
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::init$($JTableHeader$AccessibleJTableHeader* this$1, int32_t c, $JTableHeader* p, $JTable* t) {
	$set(this, this$1, this$1);
	$AccessibleContext::init$();
	$set(this, parent, p);
	this->column = c;
	$set(this, table, t);
	this->setAccessibleParent(this->parent);
}

$AccessibleContext* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleContext() {
	return this;
}

$AccessibleContext* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getCurrentAccessibleContext() {
	$useLocalCurrentObjectStackCache();
	$var($TableColumnModel, tcm, $nc(this->table)->getColumnModel());
	if (tcm != nullptr) {
		if (this->column < 0 || this->column >= tcm->getColumnCount()) {
			return nullptr;
		}
		$var($TableColumn, aColumn, tcm->getColumn(this->column));
		$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
		if (renderer == nullptr) {
			if ($nc(this->this$1->this$0)->defaultRenderer != nullptr) {
				$assign(renderer, $nc(this->this$1->this$0)->defaultRenderer);
			} else {
				return nullptr;
			}
		}
		$var($JTable, var$0, $nc(this->this$1->this$0)->getTable());
		$var($Component, c, $nc(renderer)->getTableCellRendererComponent(var$0, $(aColumn->getHeaderValue()), false, false, -1, this->column));
		if ($instanceOf($Accessible, c)) {
			return $nc(($cast($Accessible, c)))->getAccessibleContext();
		}
	}
	return nullptr;
}

$Component* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getCurrentComponent() {
	$useLocalCurrentObjectStackCache();
	$var($TableColumnModel, tcm, $nc(this->table)->getColumnModel());
	if (tcm != nullptr) {
		if (this->column < 0 || this->column >= tcm->getColumnCount()) {
			return nullptr;
		}
		$var($TableColumn, aColumn, tcm->getColumn(this->column));
		$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
		if (renderer == nullptr) {
			if ($nc(this->this$1->this$0)->defaultRenderer != nullptr) {
				$assign(renderer, $nc(this->this$1->this$0)->defaultRenderer);
			} else {
				return nullptr;
			}
		}
		$var($JTable, var$0, $nc(this->this$1->this$0)->getTable());
		return $nc(renderer)->getTableCellRendererComponent(var$0, $(aColumn->getHeaderValue()), false, false, -1, this->column);
	} else {
		return nullptr;
	}
}

$String* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleName() {
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
		$var($String, name, $cast($String, $nc(this->this$1->this$0)->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY)));
		if (name != nullptr) {
			return name;
		} else {
			return $nc(this->table)->getColumnName(this->column);
		}
	}
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setAccessibleName($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleName(s);
	} else {
		$AccessibleContext::setAccessibleName(s);
	}
}

$String* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleDescription() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleDescription();
	} else {
		return $AccessibleContext::getAccessibleDescription();
	}
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setAccessibleDescription($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleDescription(s);
	} else {
		$AccessibleContext::setAccessibleDescription(s);
	}
}

$AccessibleRole* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleRole() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleRole();
	} else {
		$init($AccessibleRole);
		return $AccessibleRole::COLUMN_HEADER;
	}
}

$AccessibleStateSet* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleStateSet() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		$var($AccessibleStateSet, states, ac->getAccessibleStateSet());
		if (isShowing()) {
			$init($AccessibleState);
			$nc(states)->add($AccessibleState::SHOWING);
		}
		return states;
	} else {
		return $new($AccessibleStateSet);
	}
}

int32_t JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleIndexInParent() {
	return this->column;
}

int32_t JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleChildrenCount() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleChildrenCount();
	} else {
		return 0;
	}
}

$Accessible* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleChild(int32_t i) {
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

$Locale* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getLocale() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getLocale();
	} else {
		return nullptr;
	}
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::addPropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->addPropertyChangeListener(l);
	} else {
		$AccessibleContext::addPropertyChangeListener(l);
	}
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::removePropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->removePropertyChangeListener(l);
	} else {
		$AccessibleContext::removePropertyChangeListener(l);
	}
}

$AccessibleAction* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleAction() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleAction();
}

$AccessibleComponent* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleComponent() {
	return this;
}

$AccessibleSelection* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleSelection() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleSelection();
}

$AccessibleText* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleText() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleText();
}

$AccessibleValue* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleValue() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleValue();
}

$Color* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getBackground() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setBackground($Color* c) {
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

$Color* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getForeground() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setForeground($Color* c) {
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

$Cursor* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getCursor() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setCursor($Cursor* c) {
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

$Font* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getFont() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setFont($Font* f) {
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

$FontMetrics* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getFontMetrics($Font* f) {
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

bool JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::isEnabled() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setEnabled(bool b) {
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

bool JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::isVisible() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setVisible(bool b) {
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

bool JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::isShowing() {
	bool var$0 = isVisible();
	if (var$0 && $nc(this->this$1->this$0)->isShowing()) {
		return true;
	} else {
		return false;
	}
}

bool JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::contains($Point* p) {
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

$Point* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	if (this->parent != nullptr) {
		$var($Point, parentLocation, $nc(this->parent)->getLocationOnScreen());
		$var($Point, componentLocation, getLocation());
		$nc(componentLocation)->translate($nc(parentLocation)->x, parentLocation->y);
		return componentLocation;
	} else {
		return nullptr;
	}
}

$Point* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getLocation() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$var($Rectangle, r, $nc(($cast($AccessibleComponent, ac)))->getBounds());
		return $nc(r)->getLocation();
	} else {
		$var($Component, c, getCurrentComponent());
		if (c != nullptr) {
			$var($Rectangle, r, c->getBounds());
			return $nc(r)->getLocation();
		} else {
			return $nc($(getBounds()))->getLocation();
		}
	}
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setLocation($Point* p) {
}

$Rectangle* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getBounds() {
	$var($Rectangle, r, $nc(this->table)->getCellRect(-1, this->column, false));
	$nc(r)->y = 0;
	return r;
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setBounds($Rectangle* r) {
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

$Dimension* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getSize() {
	return $nc($(getBounds()))->getSize();
}

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::setSize($Dimension* d) {
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

$Accessible* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::getAccessibleAt($Point* p) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getAccessibleAt(p);
	} else {
		return nullptr;
	}
}

bool JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::isFocusTraversable() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::requestFocus() {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::addFocusListener($FocusListener* l) {
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

void JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::removeFocusListener($FocusListener* l) {
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

JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry() {
}

$Class* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::load$($String* name, bool initialize) {
	$loadClass(JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry, name, initialize, &_JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry_ClassInfo_, allocate$JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry);
	return class$;
}

$Class* JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry::class$ = nullptr;

		} // table
	} // swing
} // javax
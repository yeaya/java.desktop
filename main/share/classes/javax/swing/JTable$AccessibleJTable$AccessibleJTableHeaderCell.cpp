#include <javax/swing/JTable$AccessibleJTable$AccessibleJTableHeaderCell.h>

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
#include <javax/swing/JTable$AccessibleJTable.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

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
using $JTable = ::javax::swing::JTable;
using $JTable$AccessibleJTable = ::javax::swing::JTable$AccessibleJTable;
using $JTableHeader = ::javax::swing::table::JTableHeader;

namespace javax {
	namespace swing {

$FieldInfo _JTable$AccessibleJTable$AccessibleJTableHeaderCell_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JTable$AccessibleJTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$AccessibleJTable$AccessibleJTableHeaderCell, this$1)},
	{"row", "I", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableHeaderCell, row)},
	{"column", "I", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableHeaderCell, column)},
	{"parent", "Ljavax/swing/table/JTableHeader;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableHeaderCell, parent)},
	{"rendererComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleJTableHeaderCell, rendererComponent)},
	{}
};

$MethodInfo _JTable$AccessibleJTable$AccessibleJTableHeaderCell_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTable$AccessibleJTable;IILjavax/swing/table/JTableHeader;Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(JTable$AccessibleJTable$AccessibleJTableHeaderCell::*)($JTable$AccessibleJTable*,int32_t,int32_t,$JTableHeader*,$Component*)>(&JTable$AccessibleJTable$AccessibleJTableHeaderCell::init$))},
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
	{"getCurrentAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(JTable$AccessibleJTable$AccessibleJTableHeaderCell::*)()>(&JTable$AccessibleJTable$AccessibleJTableHeaderCell::getCurrentAccessibleContext))},
	{"getCurrentComponent", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(JTable$AccessibleJTable$AccessibleJTableHeaderCell::*)()>(&JTable$AccessibleJTable$AccessibleJTableHeaderCell::getCurrentComponent))},
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

$InnerClassInfo _JTable$AccessibleJTable$AccessibleJTableHeaderCell_InnerClassesInfo_[] = {
	{"javax.swing.JTable$AccessibleJTable", "javax.swing.JTable", "AccessibleJTable", $PROTECTED},
	{"javax.swing.JTable$AccessibleJTable$AccessibleJTableHeaderCell", "javax.swing.JTable$AccessibleJTable", "AccessibleJTableHeaderCell", $PRIVATE},
	{}
};

$ClassInfo _JTable$AccessibleJTable$AccessibleJTableHeaderCell_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$AccessibleJTable$AccessibleJTableHeaderCell",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.Accessible,javax.accessibility.AccessibleComponent",
	_JTable$AccessibleJTable$AccessibleJTableHeaderCell_FieldInfo_,
	_JTable$AccessibleJTable$AccessibleJTableHeaderCell_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$AccessibleJTable$AccessibleJTableHeaderCell_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$AccessibleJTable$AccessibleJTableHeaderCell($Class* clazz) {
	return $of($alloc(JTable$AccessibleJTable$AccessibleJTableHeaderCell));
}

int32_t JTable$AccessibleJTable$AccessibleJTableHeaderCell::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool JTable$AccessibleJTable$AccessibleJTableHeaderCell::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* JTable$AccessibleJTable$AccessibleJTableHeaderCell::clone() {
	 return this->$AccessibleContext::clone();
}

$String* JTable$AccessibleJTable$AccessibleJTableHeaderCell::toString() {
	 return this->$AccessibleContext::toString();
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::finalize() {
	this->$AccessibleContext::finalize();
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::init$($JTable$AccessibleJTable* this$1, int32_t row, int32_t column, $JTableHeader* parent, $Component* rendererComponent) {
	$set(this, this$1, this$1);
	$AccessibleContext::init$();
	this->row = row;
	this->column = column;
	$set(this, parent, parent);
	$set(this, rendererComponent, rendererComponent);
	this->setAccessibleParent(parent);
}

$AccessibleContext* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleContext() {
	return this;
}

$AccessibleContext* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getCurrentAccessibleContext() {
	return $nc(this->rendererComponent)->getAccessibleContext();
}

$Component* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getCurrentComponent() {
	return this->rendererComponent;
}

$String* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleName() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		$var($String, name, ac->getAccessibleName());
		if ((name != nullptr) && (name != ""_s)) {
			return ac->getAccessibleName();
		}
	}
	if ((this->accessibleName != nullptr) && (this->accessibleName != ""_s)) {
		return this->accessibleName;
	} else {
		return nullptr;
	}
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setAccessibleName($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleName(s);
	} else {
		$AccessibleContext::setAccessibleName(s);
	}
}

$String* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleDescription() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleDescription();
	} else {
		return $AccessibleContext::getAccessibleDescription();
	}
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setAccessibleDescription($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleDescription(s);
	} else {
		$AccessibleContext::setAccessibleDescription(s);
	}
}

$AccessibleRole* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleRole() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleRole();
	} else {
		$init($AccessibleRole);
		return $AccessibleRole::UNKNOWN;
	}
}

$AccessibleStateSet* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleStateSet() {
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
	if ($nc(this->this$1->this$0)->isCellSelected(this->row, this->column)) {
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

$Accessible* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleParent() {
	return this->parent;
}

int32_t JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleIndexInParent() {
	return this->column;
}

int32_t JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleChildrenCount() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleChildrenCount();
	} else {
		return 0;
	}
}

$Accessible* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleChild(int32_t i) {
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

$Locale* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getLocale() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getLocale();
	} else {
		return nullptr;
	}
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::addPropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->addPropertyChangeListener(l);
	} else {
		$AccessibleContext::addPropertyChangeListener(l);
	}
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::removePropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->removePropertyChangeListener(l);
	} else {
		$AccessibleContext::removePropertyChangeListener(l);
	}
}

$AccessibleAction* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleAction() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleAction();
}

$AccessibleComponent* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleComponent() {
	return this;
}

$AccessibleSelection* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleSelection() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleSelection();
}

$AccessibleText* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleText() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleText();
}

$AccessibleValue* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleValue() {
	return $nc($(getCurrentAccessibleContext()))->getAccessibleValue();
}

$Color* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getBackground() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setBackground($Color* c) {
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

$Color* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getForeground() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setForeground($Color* c) {
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

$Cursor* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getCursor() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setCursor($Cursor* c) {
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

$Font* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getFont() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setFont($Font* f) {
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

$FontMetrics* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getFontMetrics($Font* f) {
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

bool JTable$AccessibleJTable$AccessibleJTableHeaderCell::isEnabled() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setEnabled(bool b) {
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

bool JTable$AccessibleJTable$AccessibleJTableHeaderCell::isVisible() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setVisible(bool b) {
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

bool JTable$AccessibleJTable$AccessibleJTableHeaderCell::isShowing() {
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

bool JTable$AccessibleJTable$AccessibleJTableHeaderCell::contains($Point* p) {
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

$Point* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getLocationOnScreen() {
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

$Point* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getLocation() {
	if (this->parent != nullptr) {
		$var($Rectangle, r, $nc(this->parent)->getHeaderRect(this->column));
		if (r != nullptr) {
			return r->getLocation();
		}
	}
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setLocation($Point* p) {
}

$Rectangle* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getBounds() {
	if (this->parent != nullptr) {
		return $nc(this->parent)->getHeaderRect(this->column);
	} else {
		return nullptr;
	}
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setBounds($Rectangle* r) {
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

$Dimension* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getSize() {
	if (this->parent != nullptr) {
		$var($Rectangle, r, $nc(this->parent)->getHeaderRect(this->column));
		if (r != nullptr) {
			return r->getSize();
		}
	}
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::setSize($Dimension* d) {
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

$Accessible* JTable$AccessibleJTable$AccessibleJTableHeaderCell::getAccessibleAt($Point* p) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getAccessibleAt(p);
	} else {
		return nullptr;
	}
}

bool JTable$AccessibleJTable$AccessibleJTableHeaderCell::isFocusTraversable() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::requestFocus() {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::addFocusListener($FocusListener* l) {
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

void JTable$AccessibleJTable$AccessibleJTableHeaderCell::removeFocusListener($FocusListener* l) {
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

JTable$AccessibleJTable$AccessibleJTableHeaderCell::JTable$AccessibleJTable$AccessibleJTableHeaderCell() {
}

$Class* JTable$AccessibleJTable$AccessibleJTableHeaderCell::load$($String* name, bool initialize) {
	$loadClass(JTable$AccessibleJTable$AccessibleJTableHeaderCell, name, initialize, &_JTable$AccessibleJTable$AccessibleJTableHeaderCell_ClassInfo_, allocate$JTable$AccessibleJTable$AccessibleJTableHeaderCell);
	return class$;
}

$Class* JTable$AccessibleJTable$AccessibleJTableHeaderCell::class$ = nullptr;

	} // swing
} // javax
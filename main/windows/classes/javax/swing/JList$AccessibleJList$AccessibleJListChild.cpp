#include <javax/swing/JList$AccessibleJList$AccessibleJListChild.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/IllegalComponentStateException.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleIcon.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JList$AccessibleJList.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef ACTIVE
#undef SELECTABLE
#undef SELECTED
#undef SHOWING
#undef TRANSIENT
#undef VISIBLE

using $AccessibleIconArray = $Array<::javax::accessibility::AccessibleIcon>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
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
using $JList = ::javax::swing::JList;
using $JList$AccessibleJList = ::javax::swing::JList$AccessibleJList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $UIManager = ::javax::swing::UIManager;

namespace javax {
	namespace swing {

$FieldInfo _JList$AccessibleJList$AccessibleJListChild_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JList$AccessibleJList;", nullptr, $FINAL | $SYNTHETIC, $field(JList$AccessibleJList$AccessibleJListChild, this$1)},
	{"parent", "Ljavax/swing/JList;", "Ljavax/swing/JList<TE;>;", $PRIVATE, $field(JList$AccessibleJList$AccessibleJListChild, parent)},
	{"indexInParent", "I", nullptr, 0, $field(JList$AccessibleJList$AccessibleJListChild, indexInParent)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(JList$AccessibleJList$AccessibleJListChild, component)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(JList$AccessibleJList$AccessibleJListChild, accessibleContext)},
	{"listModel", "Ljavax/swing/ListModel;", "Ljavax/swing/ListModel<TE;>;", $PRIVATE, $field(JList$AccessibleJList$AccessibleJListChild, listModel)},
	{"cellRenderer", "Ljavax/swing/ListCellRenderer;", "Ljavax/swing/ListCellRenderer<-TE;>;", $PRIVATE, $field(JList$AccessibleJList$AccessibleJListChild, cellRenderer)},
	{}
};

$MethodInfo _JList$AccessibleJList$AccessibleJListChild_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JList$AccessibleJList;Ljavax/swing/JList;I)V", "(Ljavax/swing/JList<TE;>;I)V", $PUBLIC, $method(static_cast<void(JList$AccessibleJList$AccessibleJListChild::*)($JList$AccessibleJList*,$JList*,int32_t)>(&JList$AccessibleJList$AccessibleJListChild::init$))},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
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
	{"getAccessibleIcon", "()[Ljavax/accessibility/AccessibleIcon;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getComponentAtIndex", "(I)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(JList$AccessibleJList$AccessibleJListChild::*)(int32_t)>(&JList$AccessibleJList$AccessibleJListChild::getComponentAtIndex))},
	{"getCurrentAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, 0},
	{"getCurrentComponent", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(JList$AccessibleJList$AccessibleJListChild::*)()>(&JList$AccessibleJList$AccessibleJListChild::getCurrentComponent))},
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

$InnerClassInfo _JList$AccessibleJList$AccessibleJListChild_InnerClassesInfo_[] = {
	{"javax.swing.JList$AccessibleJList", "javax.swing.JList", "AccessibleJList", $PROTECTED},
	{"javax.swing.JList$AccessibleJList$AccessibleJListChild", "javax.swing.JList$AccessibleJList", "AccessibleJListChild", $PROTECTED},
	{}
};

$ClassInfo _JList$AccessibleJList$AccessibleJListChild_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JList$AccessibleJList$AccessibleJListChild",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.Accessible,javax.accessibility.AccessibleComponent,javax.accessibility.AccessibleAction",
	_JList$AccessibleJList$AccessibleJListChild_FieldInfo_,
	_JList$AccessibleJList$AccessibleJListChild_MethodInfo_,
	nullptr,
	nullptr,
	_JList$AccessibleJList$AccessibleJListChild_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$AccessibleJList$AccessibleJListChild($Class* clazz) {
	return $of($alloc(JList$AccessibleJList$AccessibleJListChild));
}

int32_t JList$AccessibleJList$AccessibleJListChild::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool JList$AccessibleJList$AccessibleJListChild::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* JList$AccessibleJList$AccessibleJListChild::clone() {
	 return this->$AccessibleContext::clone();
}

$String* JList$AccessibleJList$AccessibleJListChild::toString() {
	 return this->$AccessibleContext::toString();
}

void JList$AccessibleJList$AccessibleJListChild::finalize() {
	this->$AccessibleContext::finalize();
}

void JList$AccessibleJList$AccessibleJListChild::init$($JList$AccessibleJList* this$1, $JList* parent, int32_t indexInParent) {
	$set(this, this$1, this$1);
	$AccessibleContext::init$();
	$set(this, parent, nullptr);
	$set(this, component, nullptr);
	$set(this, accessibleContext, nullptr);
	$set(this, cellRenderer, nullptr);
	$set(this, parent, parent);
	this->setAccessibleParent(parent);
	this->indexInParent = indexInParent;
	if (parent != nullptr) {
		$set(this, listModel, parent->getModel());
		$set(this, cellRenderer, parent->getCellRenderer());
	}
}

$Component* JList$AccessibleJList$AccessibleJListChild::getCurrentComponent() {
	return getComponentAtIndex(this->indexInParent);
}

$AccessibleContext* JList$AccessibleJList$AccessibleJListChild::getCurrentAccessibleContext() {
	$var($Component, c, getComponentAtIndex(this->indexInParent));
	if ($instanceOf($Accessible, c)) {
		return $nc(c)->getAccessibleContext();
	} else {
		return nullptr;
	}
}

$Component* JList$AccessibleJList$AccessibleJListChild::getComponentAtIndex(int32_t index) {
	if (index < 0 || index >= $nc(this->listModel)->getSize()) {
		return nullptr;
	}
	if ((this->parent != nullptr) && (this->listModel != nullptr) && this->cellRenderer != nullptr) {
		$var($Object, value, $nc(this->listModel)->getElementAt(index));
		bool isSelected = $nc(this->parent)->isSelectedIndex(index);
		bool var$0 = $nc(this->parent)->isFocusOwner();
		bool isFocussed = var$0 && (index == $nc(this->parent)->getLeadSelectionIndex());
		return $nc(this->cellRenderer)->getListCellRendererComponent(this->parent, value, index, isSelected, isFocussed);
	} else {
		return nullptr;
	}
}

$AccessibleContext* JList$AccessibleJList$AccessibleJListChild::getAccessibleContext() {
	return this;
}

$String* JList$AccessibleJList$AccessibleJListChild::getAccessibleName() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleName();
	} else {
		return nullptr;
	}
}

void JList$AccessibleJList$AccessibleJListChild::setAccessibleName($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleName(s);
	}
}

$String* JList$AccessibleJList$AccessibleJListChild::getAccessibleDescription() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleDescription();
	} else {
		return nullptr;
	}
}

void JList$AccessibleJList$AccessibleJListChild::setAccessibleDescription($String* s) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleDescription(s);
	}
}

$AccessibleRole* JList$AccessibleJList$AccessibleJListChild::getAccessibleRole() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleRole();
	} else {
		return nullptr;
	}
}

$AccessibleStateSet* JList$AccessibleJList$AccessibleJListChild::getAccessibleStateSet() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	$var($AccessibleStateSet, s, nullptr);
	if (ac != nullptr) {
		$assign(s, ac->getAccessibleStateSet());
	} else {
		$assign(s, $new($AccessibleStateSet));
	}
	$init($AccessibleState);
	$nc(s)->add($AccessibleState::SELECTABLE);
	bool var$0 = $nc(this->parent)->isFocusOwner();
	if (var$0 && (this->indexInParent == $nc(this->parent)->getLeadSelectionIndex())) {
		s->add($AccessibleState::ACTIVE);
	}
	if ($nc(this->parent)->isSelectedIndex(this->indexInParent)) {
		s->add($AccessibleState::SELECTED);
	}
	if (this->isShowing()) {
		s->add($AccessibleState::SHOWING);
	} else {
		if (s->contains($AccessibleState::SHOWING)) {
			s->remove($AccessibleState::SHOWING);
		}
	}
	if (this->isVisible()) {
		s->add($AccessibleState::VISIBLE);
	} else {
		if (s->contains($AccessibleState::VISIBLE)) {
			s->remove($AccessibleState::VISIBLE);
		}
	}
	s->add($AccessibleState::TRANSIENT);
	return s;
}

int32_t JList$AccessibleJList$AccessibleJListChild::getAccessibleIndexInParent() {
	return this->indexInParent;
}

int32_t JList$AccessibleJList$AccessibleJListChild::getAccessibleChildrenCount() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleChildrenCount();
	} else {
		return 0;
	}
}

$Accessible* JList$AccessibleJList$AccessibleJListChild::getAccessibleChild(int32_t i) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		$var($Accessible, accessibleChild, ac->getAccessibleChild(i));
		ac->setAccessibleParent(this);
		return accessibleChild;
	} else {
		return nullptr;
	}
}

$Locale* JList$AccessibleJList$AccessibleJListChild::getLocale() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getLocale();
	} else {
		return nullptr;
	}
}

void JList$AccessibleJList$AccessibleJListChild::addPropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->addPropertyChangeListener(l);
	}
}

void JList$AccessibleJList$AccessibleJListChild::removePropertyChangeListener($PropertyChangeListener* l) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		ac->removePropertyChangeListener(l);
	}
}

$AccessibleComponent* JList$AccessibleJList$AccessibleJListChild::getAccessibleComponent() {
	return this;
}

$AccessibleSelection* JList$AccessibleJList$AccessibleJListChild::getAccessibleSelection() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	return ac != nullptr ? $nc(ac)->getAccessibleSelection() : ($AccessibleSelection*)nullptr;
}

$AccessibleText* JList$AccessibleJList$AccessibleJListChild::getAccessibleText() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	return ac != nullptr ? $nc(ac)->getAccessibleText() : ($AccessibleText*)nullptr;
}

$AccessibleValue* JList$AccessibleJList$AccessibleJListChild::getAccessibleValue() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	return ac != nullptr ? $nc(ac)->getAccessibleValue() : ($AccessibleValue*)nullptr;
}

$Color* JList$AccessibleJList$AccessibleJListChild::getBackground() {
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

void JList$AccessibleJList$AccessibleJListChild::setBackground($Color* c) {
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

$Color* JList$AccessibleJList$AccessibleJListChild::getForeground() {
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

void JList$AccessibleJList$AccessibleJListChild::setForeground($Color* c) {
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

$Cursor* JList$AccessibleJList$AccessibleJListChild::getCursor() {
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

void JList$AccessibleJList$AccessibleJListChild::setCursor($Cursor* c) {
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

$Font* JList$AccessibleJList$AccessibleJListChild::getFont() {
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

void JList$AccessibleJList$AccessibleJListChild::setFont($Font* f) {
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

$FontMetrics* JList$AccessibleJList$AccessibleJListChild::getFontMetrics($Font* f) {
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

bool JList$AccessibleJList$AccessibleJListChild::isEnabled() {
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

void JList$AccessibleJList$AccessibleJListChild::setEnabled(bool b) {
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

bool JList$AccessibleJList$AccessibleJListChild::isVisible() {
	int32_t fi = $nc(this->parent)->getFirstVisibleIndex();
	int32_t li = $nc(this->parent)->getLastVisibleIndex();
	if (li == -1) {
		li = $nc($($nc(this->parent)->getModel()))->getSize() - 1;
	}
	return ((this->indexInParent >= fi) && (this->indexInParent <= li));
}

void JList$AccessibleJList$AccessibleJListChild::setVisible(bool b) {
}

bool JList$AccessibleJList$AccessibleJListChild::isShowing() {
	bool var$0 = $nc(this->parent)->isShowing();
	return (var$0 && isVisible());
}

bool JList$AccessibleJList$AccessibleJListChild::contains($Point* p) {
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

$Point* JList$AccessibleJList$AccessibleJListChild::getLocationOnScreen() {
	if (this->parent != nullptr) {
		$var($Point, listLocation, nullptr);
		try {
			$assign(listLocation, $nc(this->parent)->getLocationOnScreen());
		} catch ($IllegalComponentStateException&) {
			$var($IllegalComponentStateException, e, $catch());
			return nullptr;
		}
		$var($Point, componentLocation, $nc(this->parent)->indexToLocation(this->indexInParent));
		if (componentLocation != nullptr) {
			componentLocation->translate($nc(listLocation)->x, listLocation->y);
			return componentLocation;
		} else {
			return nullptr;
		}
	} else {
		return nullptr;
	}
}

$Point* JList$AccessibleJList$AccessibleJListChild::getLocation() {
	if (this->parent != nullptr) {
		return $nc(this->parent)->indexToLocation(this->indexInParent);
	} else {
		return nullptr;
	}
}

void JList$AccessibleJList$AccessibleJListChild::setLocation($Point* p) {
	if ((this->parent != nullptr) && ($nc(this->parent)->contains(p))) {
		$nc(this->this$1->this$0)->ensureIndexIsVisible(this->indexInParent);
	}
}

$Rectangle* JList$AccessibleJList$AccessibleJListChild::getBounds() {
	if (this->parent != nullptr) {
		return $nc(this->parent)->getCellBounds(this->indexInParent, this->indexInParent);
	} else {
		return nullptr;
	}
}

void JList$AccessibleJList$AccessibleJListChild::setBounds($Rectangle* r) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		$nc(($cast($AccessibleComponent, ac)))->setBounds(r);
	}
}

$Dimension* JList$AccessibleJList$AccessibleJListChild::getSize() {
	$var($Rectangle, cellBounds, this->getBounds());
	if (cellBounds != nullptr) {
		return cellBounds->getSize();
	} else {
		return nullptr;
	}
}

void JList$AccessibleJList$AccessibleJListChild::setSize($Dimension* d) {
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

$Accessible* JList$AccessibleJList$AccessibleJListChild::getAccessibleAt($Point* p) {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if ($instanceOf($AccessibleComponent, ac)) {
		return $nc(($cast($AccessibleComponent, ac)))->getAccessibleAt(p);
	} else {
		return nullptr;
	}
}

bool JList$AccessibleJList$AccessibleJListChild::isFocusTraversable() {
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

void JList$AccessibleJList$AccessibleJListChild::requestFocus() {
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

void JList$AccessibleJList$AccessibleJListChild::addFocusListener($FocusListener* l) {
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

void JList$AccessibleJList$AccessibleJListChild::removeFocusListener($FocusListener* l) {
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

$AccessibleIconArray* JList$AccessibleJList$AccessibleJListChild::getAccessibleIcon() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleIcon();
	} else {
		return nullptr;
	}
}

$AccessibleAction* JList$AccessibleJList$AccessibleJListChild::getAccessibleAction() {
	$var($AccessibleContext, ac, getCurrentAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	} else {
		$var($AccessibleAction, aa, $nc(ac)->getAccessibleAction());
		if (aa != nullptr) {
			return aa;
		} else {
			return this;
		}
	}
}

bool JList$AccessibleJList$AccessibleJListChild::doAccessibleAction(int32_t i) {
	if (i == 0) {
		$nc(this->this$1->this$0)->setSelectedIndex(this->indexInParent);
		return true;
	} else {
		return false;
	}
}

$String* JList$AccessibleJList$AccessibleJListChild::getAccessibleActionDescription(int32_t i) {
	if (i == 0) {
		return $UIManager::getString("AbstractButton.clickText"_s);
	} else {
		return nullptr;
	}
}

int32_t JList$AccessibleJList$AccessibleJListChild::getAccessibleActionCount() {
	return 1;
}

JList$AccessibleJList$AccessibleJListChild::JList$AccessibleJList$AccessibleJListChild() {
}

$Class* JList$AccessibleJList$AccessibleJListChild::load$($String* name, bool initialize) {
	$loadClass(JList$AccessibleJList$AccessibleJListChild, name, initialize, &_JList$AccessibleJList$AccessibleJListChild_ClassInfo_, allocate$JList$AccessibleJList$AccessibleJListChild);
	return class$;
}

$Class* JList$AccessibleJList$AccessibleJListChild::class$ = nullptr;

	} // swing
} // javax
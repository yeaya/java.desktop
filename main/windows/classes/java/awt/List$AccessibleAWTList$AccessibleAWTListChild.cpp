#include <java/awt/List$AccessibleAWTList$AccessibleAWTListChild.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/List$AccessibleAWTList.h>
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
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
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef LIST_ITEM
#undef SELECTED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $List = ::java::awt::List;
using $List$AccessibleAWTList = ::java::awt::List$AccessibleAWTList;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _List$AccessibleAWTList$AccessibleAWTListChild_FieldInfo_[] = {
	{"this$1", "Ljava/awt/List$AccessibleAWTList;", nullptr, $FINAL | $SYNTHETIC, $field(List$AccessibleAWTList$AccessibleAWTListChild, this$1)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(List$AccessibleAWTList$AccessibleAWTListChild, serialVersionUID)},
	{"parent", "Ljava/awt/List;", nullptr, $PRIVATE, $field(List$AccessibleAWTList$AccessibleAWTListChild, parent)},
	{"indexInParent", "I", nullptr, $PRIVATE, $field(List$AccessibleAWTList$AccessibleAWTListChild, indexInParent)},
	{}
};

$MethodInfo _List$AccessibleAWTList$AccessibleAWTListChild_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/List$AccessibleAWTList;Ljava/awt/List;I)V", nullptr, $PUBLIC, $method(static_cast<void(List$AccessibleAWTList$AccessibleAWTListChild::*)($List$AccessibleAWTList*,$List*,int32_t)>(&List$AccessibleAWTList$AccessibleAWTListChild::init$))},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
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
	{"requestFocus", "()V", nullptr, $PUBLIC},
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

$InnerClassInfo _List$AccessibleAWTList$AccessibleAWTListChild_InnerClassesInfo_[] = {
	{"java.awt.List$AccessibleAWTList", "java.awt.List", "AccessibleAWTList", $PROTECTED},
	{"java.awt.List$AccessibleAWTList$AccessibleAWTListChild", "java.awt.List$AccessibleAWTList", "AccessibleAWTListChild", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _List$AccessibleAWTList$AccessibleAWTListChild_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.List$AccessibleAWTList$AccessibleAWTListChild",
	"java.awt.Component$AccessibleAWTComponent",
	"javax.accessibility.Accessible",
	_List$AccessibleAWTList$AccessibleAWTListChild_FieldInfo_,
	_List$AccessibleAWTList$AccessibleAWTListChild_MethodInfo_,
	nullptr,
	nullptr,
	_List$AccessibleAWTList$AccessibleAWTListChild_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.List"
};

$Object* allocate$List$AccessibleAWTList$AccessibleAWTListChild($Class* clazz) {
	return $of($alloc(List$AccessibleAWTList$AccessibleAWTListChild));
}

int32_t List$AccessibleAWTList$AccessibleAWTListChild::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool List$AccessibleAWTList$AccessibleAWTListChild::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* List$AccessibleAWTList$AccessibleAWTListChild::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* List$AccessibleAWTList$AccessibleAWTListChild::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void List$AccessibleAWTList$AccessibleAWTListChild::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void List$AccessibleAWTList$AccessibleAWTListChild::init$($List$AccessibleAWTList* this$1, $List* parent, int32_t indexInParent) {
	$set(this, this$1, this$1);
	$Component$AccessibleAWTComponent::init$(this$1->this$0);
	$set(this, parent, parent);
	this->setAccessibleParent(parent);
	this->indexInParent = indexInParent;
}

$AccessibleContext* List$AccessibleAWTList$AccessibleAWTListChild::getAccessibleContext() {
	return this;
}

$AccessibleRole* List$AccessibleAWTList$AccessibleAWTListChild::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LIST_ITEM;
}

$AccessibleStateSet* List$AccessibleAWTList$AccessibleAWTListChild::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Component$AccessibleAWTComponent::getAccessibleStateSet());
	if ($nc(this->parent)->isIndexSelected(this->indexInParent)) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::SELECTED);
	}
	return states;
}

$Locale* List$AccessibleAWTList$AccessibleAWTListChild::getLocale() {
	return $nc(this->parent)->getLocale();
}

int32_t List$AccessibleAWTList$AccessibleAWTListChild::getAccessibleIndexInParent() {
	return this->indexInParent;
}

int32_t List$AccessibleAWTList$AccessibleAWTListChild::getAccessibleChildrenCount() {
	return 0;
}

$Accessible* List$AccessibleAWTList$AccessibleAWTListChild::getAccessibleChild(int32_t i) {
	return nullptr;
}

$Color* List$AccessibleAWTList$AccessibleAWTListChild::getBackground() {
	return $nc(this->parent)->getBackground();
}

void List$AccessibleAWTList$AccessibleAWTListChild::setBackground($Color* c) {
	$nc(this->parent)->setBackground(c);
}

$Color* List$AccessibleAWTList$AccessibleAWTListChild::getForeground() {
	return $nc(this->parent)->getForeground();
}

void List$AccessibleAWTList$AccessibleAWTListChild::setForeground($Color* c) {
	$nc(this->parent)->setForeground(c);
}

$Cursor* List$AccessibleAWTList$AccessibleAWTListChild::getCursor() {
	return $nc(this->parent)->getCursor();
}

void List$AccessibleAWTList$AccessibleAWTListChild::setCursor($Cursor* cursor) {
	$nc(this->parent)->setCursor(cursor);
}

$Font* List$AccessibleAWTList$AccessibleAWTListChild::getFont() {
	return $nc(this->parent)->getFont();
}

void List$AccessibleAWTList$AccessibleAWTListChild::setFont($Font* f) {
	$nc(this->parent)->setFont(f);
}

$FontMetrics* List$AccessibleAWTList$AccessibleAWTListChild::getFontMetrics($Font* f) {
	return $nc(this->parent)->getFontMetrics(f);
}

bool List$AccessibleAWTList$AccessibleAWTListChild::isEnabled() {
	return $nc(this->parent)->isEnabled();
}

void List$AccessibleAWTList$AccessibleAWTListChild::setEnabled(bool b) {
	$nc(this->parent)->setEnabled(b);
}

bool List$AccessibleAWTList$AccessibleAWTListChild::isVisible() {
	return false;
}

void List$AccessibleAWTList$AccessibleAWTListChild::setVisible(bool b) {
	$nc(this->parent)->setVisible(b);
}

bool List$AccessibleAWTList$AccessibleAWTListChild::isShowing() {
	return false;
}

bool List$AccessibleAWTList$AccessibleAWTListChild::contains($Point* p) {
	return false;
}

$Point* List$AccessibleAWTList$AccessibleAWTListChild::getLocationOnScreen() {
	return nullptr;
}

$Point* List$AccessibleAWTList$AccessibleAWTListChild::getLocation() {
	return nullptr;
}

void List$AccessibleAWTList$AccessibleAWTListChild::setLocation($Point* p) {
}

$Rectangle* List$AccessibleAWTList$AccessibleAWTListChild::getBounds() {
	return nullptr;
}

void List$AccessibleAWTList$AccessibleAWTListChild::setBounds($Rectangle* r) {
}

$Dimension* List$AccessibleAWTList$AccessibleAWTListChild::getSize() {
	return nullptr;
}

void List$AccessibleAWTList$AccessibleAWTListChild::setSize($Dimension* d) {
}

$Accessible* List$AccessibleAWTList$AccessibleAWTListChild::getAccessibleAt($Point* p) {
	return nullptr;
}

bool List$AccessibleAWTList$AccessibleAWTListChild::isFocusTraversable() {
	return false;
}

void List$AccessibleAWTList$AccessibleAWTListChild::requestFocus() {
}

void List$AccessibleAWTList$AccessibleAWTListChild::addFocusListener($FocusListener* l) {
}

void List$AccessibleAWTList$AccessibleAWTListChild::removeFocusListener($FocusListener* l) {
}

List$AccessibleAWTList$AccessibleAWTListChild::List$AccessibleAWTList$AccessibleAWTListChild() {
}

$Class* List$AccessibleAWTList$AccessibleAWTListChild::load$($String* name, bool initialize) {
	$loadClass(List$AccessibleAWTList$AccessibleAWTListChild, name, initialize, &_List$AccessibleAWTList$AccessibleAWTListChild_ClassInfo_, allocate$List$AccessibleAWTList$AccessibleAWTListChild);
	return class$;
}

$Class* List$AccessibleAWTList$AccessibleAWTListChild::class$ = nullptr;

	} // awt
} // java
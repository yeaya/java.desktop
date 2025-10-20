#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef EDITABLE
#undef ENABLED
#undef FOCUSABLE
#undef FOCUSED
#undef SHOWING
#undef VISIBLE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$TableElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$HTMLAccessibleContext_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$HTMLAccessibleContext, this$0)},
	{"elementInfo", "Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PROTECTED, $field(AccessibleHTML$HTMLAccessibleContext, elementInfo)},
	{}
};

$MethodInfo _AccessibleHTML$HTMLAccessibleContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleHTML$HTMLAccessibleContext::*)($AccessibleHTML*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$HTMLAccessibleContext::init$))},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getElementInfoAt", "(Ljavax/swing/text/html/AccessibleHTML$ElementInfo;Ljava/awt/Point;)Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PRIVATE, $method(static_cast<$AccessibleHTML$ElementInfo*(AccessibleHTML$HTMLAccessibleContext::*)($AccessibleHTML$ElementInfo*,$Point*)>(&AccessibleHTML$HTMLAccessibleContext::getElementInfoAt))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, nullptr, "java.awt.IllegalComponentStateException"},
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

$InnerClassInfo _AccessibleHTML$HTMLAccessibleContext_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "HTMLAccessibleContext", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleHTML$HTMLAccessibleContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.Accessible,javax.accessibility.AccessibleComponent",
	_AccessibleHTML$HTMLAccessibleContext_FieldInfo_,
	_AccessibleHTML$HTMLAccessibleContext_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$HTMLAccessibleContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$HTMLAccessibleContext($Class* clazz) {
	return $of($alloc(AccessibleHTML$HTMLAccessibleContext));
}

int32_t AccessibleHTML$HTMLAccessibleContext::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool AccessibleHTML$HTMLAccessibleContext::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* AccessibleHTML$HTMLAccessibleContext::clone() {
	 return this->$AccessibleContext::clone();
}

$String* AccessibleHTML$HTMLAccessibleContext::toString() {
	 return this->$AccessibleContext::toString();
}

void AccessibleHTML$HTMLAccessibleContext::finalize() {
	this->$AccessibleContext::finalize();
}

void AccessibleHTML$HTMLAccessibleContext::init$($AccessibleHTML* this$0, $AccessibleHTML$ElementInfo* elementInfo) {
	$set(this, this$0, this$0);
	$AccessibleContext::init$();
	$set(this, elementInfo, elementInfo);
}

$AccessibleContext* AccessibleHTML$HTMLAccessibleContext::getAccessibleContext() {
	return this;
}

$AccessibleStateSet* AccessibleHTML$HTMLAccessibleContext::getAccessibleStateSet() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleStateSet, states, $new($AccessibleStateSet));
	$var($Component, comp, this->this$0->getTextComponent());
	if ($nc(comp)->isEnabled()) {
		$init($AccessibleState);
		states->add($AccessibleState::ENABLED);
	}
	if ($instanceOf($JTextComponent, comp) && $nc(($cast($JTextComponent, comp)))->isEditable()) {
		$init($AccessibleState);
		states->add($AccessibleState::EDITABLE);
		states->add($AccessibleState::FOCUSABLE);
	}
	if ($nc(comp)->isVisible()) {
		$init($AccessibleState);
		states->add($AccessibleState::VISIBLE);
	}
	if ($nc(comp)->isShowing()) {
		$init($AccessibleState);
		states->add($AccessibleState::SHOWING);
	}
	return states;
}

int32_t AccessibleHTML$HTMLAccessibleContext::getAccessibleIndexInParent() {
	return $nc(this->elementInfo)->getIndexInParent();
}

int32_t AccessibleHTML$HTMLAccessibleContext::getAccessibleChildrenCount() {
	return $nc(this->elementInfo)->getChildCount();
}

$Accessible* AccessibleHTML$HTMLAccessibleContext::getAccessibleChild(int32_t i) {
	$var($AccessibleHTML$ElementInfo, childInfo, $nc(this->elementInfo)->getChild(i));
	if (childInfo != nullptr && $instanceOf($Accessible, childInfo)) {
		return $cast($Accessible, childInfo);
	} else {
		return nullptr;
	}
}

$Locale* AccessibleHTML$HTMLAccessibleContext::getLocale() {
	return $nc(this->this$0->editor)->getLocale();
}

$AccessibleComponent* AccessibleHTML$HTMLAccessibleContext::getAccessibleComponent() {
	return this;
}

$Color* AccessibleHTML$HTMLAccessibleContext::getBackground() {
	return $nc($(this->this$0->getTextComponent()))->getBackground();
}

void AccessibleHTML$HTMLAccessibleContext::setBackground($Color* c) {
	$nc($(this->this$0->getTextComponent()))->setBackground(c);
}

$Color* AccessibleHTML$HTMLAccessibleContext::getForeground() {
	return $nc($(this->this$0->getTextComponent()))->getForeground();
}

void AccessibleHTML$HTMLAccessibleContext::setForeground($Color* c) {
	$nc($(this->this$0->getTextComponent()))->setForeground(c);
}

$Cursor* AccessibleHTML$HTMLAccessibleContext::getCursor() {
	return $nc($(this->this$0->getTextComponent()))->getCursor();
}

void AccessibleHTML$HTMLAccessibleContext::setCursor($Cursor* cursor) {
	$nc($(this->this$0->getTextComponent()))->setCursor(cursor);
}

$Font* AccessibleHTML$HTMLAccessibleContext::getFont() {
	return $nc($(this->this$0->getTextComponent()))->getFont();
}

void AccessibleHTML$HTMLAccessibleContext::setFont($Font* f) {
	$nc($(this->this$0->getTextComponent()))->setFont(f);
}

$FontMetrics* AccessibleHTML$HTMLAccessibleContext::getFontMetrics($Font* f) {
	return $nc($(this->this$0->getTextComponent()))->getFontMetrics(f);
}

bool AccessibleHTML$HTMLAccessibleContext::isEnabled() {
	return $nc($(this->this$0->getTextComponent()))->isEnabled();
}

void AccessibleHTML$HTMLAccessibleContext::setEnabled(bool b) {
	$nc($(this->this$0->getTextComponent()))->setEnabled(b);
}

bool AccessibleHTML$HTMLAccessibleContext::isVisible() {
	return $nc($(this->this$0->getTextComponent()))->isVisible();
}

void AccessibleHTML$HTMLAccessibleContext::setVisible(bool b) {
	$nc($(this->this$0->getTextComponent()))->setVisible(b);
}

bool AccessibleHTML$HTMLAccessibleContext::isShowing() {
	return $nc($(this->this$0->getTextComponent()))->isShowing();
}

bool AccessibleHTML$HTMLAccessibleContext::contains($Point* p) {
	$var($Rectangle, r, getBounds());
	if (r != nullptr) {
		return r->contains($nc(p)->x, p->y);
	} else {
		return false;
	}
}

$Point* AccessibleHTML$HTMLAccessibleContext::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	$var($Point, editorLocation, $nc($(this->this$0->getTextComponent()))->getLocationOnScreen());
	$var($Rectangle, r, getBounds());
	if (r != nullptr) {
		return $new($Point, $nc(editorLocation)->x + r->x, editorLocation->y + r->y);
	} else {
		return nullptr;
	}
}

$Point* AccessibleHTML$HTMLAccessibleContext::getLocation() {
	$var($Rectangle, r, getBounds());
	if (r != nullptr) {
		return $new($Point, r->x, r->y);
	} else {
		return nullptr;
	}
}

void AccessibleHTML$HTMLAccessibleContext::setLocation($Point* p) {
}

$Rectangle* AccessibleHTML$HTMLAccessibleContext::getBounds() {
	return $nc(this->elementInfo)->getBounds();
}

void AccessibleHTML$HTMLAccessibleContext::setBounds($Rectangle* r) {
}

$Dimension* AccessibleHTML$HTMLAccessibleContext::getSize() {
	$var($Rectangle, r, getBounds());
	if (r != nullptr) {
		return $new($Dimension, r->width, r->height);
	} else {
		return nullptr;
	}
}

void AccessibleHTML$HTMLAccessibleContext::setSize($Dimension* d) {
	$var($Component, comp, this->this$0->getTextComponent());
	$nc(comp)->setSize(d);
}

$Accessible* AccessibleHTML$HTMLAccessibleContext::getAccessibleAt($Point* p) {
	$var($AccessibleHTML$ElementInfo, innerMostElement, getElementInfoAt(this->this$0->rootElementInfo, p));
	if ($instanceOf($Accessible, innerMostElement)) {
		return $cast($Accessible, innerMostElement);
	} else {
		return nullptr;
	}
}

$AccessibleHTML$ElementInfo* AccessibleHTML$HTMLAccessibleContext::getElementInfoAt($AccessibleHTML$ElementInfo* elementInfo, $Point* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc(elementInfo)->getBounds() == nullptr) {
		return nullptr;
	}
	bool var$0 = $nc(elementInfo)->getChildCount() == 0;
	if (var$0 && $nc($(elementInfo->getBounds()))->contains(p)) {
		return elementInfo;
	} else {
		if ($instanceOf($AccessibleHTML$TableElementInfo, elementInfo)) {
			$var($AccessibleHTML$ElementInfo, captionInfo, $nc(($cast($AccessibleHTML$TableElementInfo, elementInfo)))->getCaptionInfo());
			if (captionInfo != nullptr) {
				$var($Rectangle, bounds, captionInfo->getBounds());
				if (bounds != nullptr && bounds->contains(p)) {
					return captionInfo;
				}
			}
		}
		for (int32_t i = 0; i < elementInfo->getChildCount(); ++i) {
			$var($AccessibleHTML$ElementInfo, childInfo, elementInfo->getChild(i));
			$var($AccessibleHTML$ElementInfo, retValue, getElementInfoAt(childInfo, p));
			if (retValue != nullptr) {
				return retValue;
			}
		}
	}
	return nullptr;
}

bool AccessibleHTML$HTMLAccessibleContext::isFocusTraversable() {
	$var($Component, comp, this->this$0->getTextComponent());
	if ($instanceOf($JTextComponent, comp)) {
		if ($nc(($cast($JTextComponent, comp)))->isEditable()) {
			return true;
		}
	}
	return false;
}

void AccessibleHTML$HTMLAccessibleContext::requestFocus() {
	$useLocalCurrentObjectStackCache();
	if (!isFocusTraversable()) {
		return;
	}
	$var($Component, comp, this->this$0->getTextComponent());
	if ($instanceOf($JTextComponent, comp)) {
		$nc(comp)->requestFocusInWindow();
		try {
			if ($nc(this->elementInfo)->validateIfNecessary()) {
				$var($Element, elem, $nc(this->elementInfo)->getElement());
				$nc(($cast($JTextComponent, comp)))->setCaretPosition($nc(elem)->getStartOffset());
				$var($AccessibleContext, ac, $nc(this->this$0->editor)->getAccessibleContext());
				$init($AccessibleContext);
				$init($AccessibleState);
				$var($PropertyChangeEvent, pce, $new($PropertyChangeEvent, this, $AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::FOCUSED));
				$nc(ac)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, pce);
			}
		} catch ($IllegalArgumentException&) {
			$catch();
		}
	}
}

void AccessibleHTML$HTMLAccessibleContext::addFocusListener($FocusListener* l) {
	$nc($(this->this$0->getTextComponent()))->addFocusListener(l);
}

void AccessibleHTML$HTMLAccessibleContext::removeFocusListener($FocusListener* l) {
	$nc($(this->this$0->getTextComponent()))->removeFocusListener(l);
}

AccessibleHTML$HTMLAccessibleContext::AccessibleHTML$HTMLAccessibleContext() {
}

$Class* AccessibleHTML$HTMLAccessibleContext::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$HTMLAccessibleContext, name, initialize, &_AccessibleHTML$HTMLAccessibleContext_ClassInfo_, allocate$AccessibleHTML$HTMLAccessibleContext);
	return class$;
}

$Class* AccessibleHTML$HTMLAccessibleContext::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
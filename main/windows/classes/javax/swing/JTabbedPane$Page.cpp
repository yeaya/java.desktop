#include <javax/swing/JTabbedPane$Page.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/lang/Array.h>
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
#include <javax/accessibility/AccessibleIcon.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <jcpp.h>

#undef PAGE_TAB
#undef SELECTABLE
#undef SELECTED

using $AccessibleIconArray = $Array<::javax::accessibility::AccessibleIcon>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleIcon = ::javax::accessibility::AccessibleIcon;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;

namespace javax {
	namespace swing {

$FieldInfo _JTabbedPane$Page_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTabbedPane;", nullptr, $FINAL | $SYNTHETIC, $field(JTabbedPane$Page, this$0)},
	{"title", "Ljava/lang/String;", nullptr, 0, $field(JTabbedPane$Page, title)},
	{"background", "Ljava/awt/Color;", nullptr, 0, $field(JTabbedPane$Page, background)},
	{"foreground", "Ljava/awt/Color;", nullptr, 0, $field(JTabbedPane$Page, foreground)},
	{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(JTabbedPane$Page, icon)},
	{"disabledIcon", "Ljavax/swing/Icon;", nullptr, 0, $field(JTabbedPane$Page, disabledIcon)},
	{"parent", "Ljavax/swing/JTabbedPane;", nullptr, 0, $field(JTabbedPane$Page, parent)},
	{"component", "Ljava/awt/Component;", nullptr, 0, $field(JTabbedPane$Page, component)},
	{"tip", "Ljava/lang/String;", nullptr, 0, $field(JTabbedPane$Page, tip)},
	{"enabled", "Z", nullptr, 0, $field(JTabbedPane$Page, enabled)},
	{"needsUIUpdate", "Z", nullptr, 0, $field(JTabbedPane$Page, needsUIUpdate)},
	{"mnemonic", "I", nullptr, 0, $field(JTabbedPane$Page, mnemonic)},
	{"mnemonicIndex", "I", nullptr, 0, $field(JTabbedPane$Page, mnemonicIndex)},
	{"tabComponent", "Ljava/awt/Component;", nullptr, 0, $field(JTabbedPane$Page, tabComponent)},
	{}
};

$MethodInfo _JTabbedPane$Page_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTabbedPane;Ljavax/swing/JTabbedPane;Ljava/lang/String;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Component;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JTabbedPane$Page::*)($JTabbedPane*,$JTabbedPane*,$String*,$Icon*,$Icon*,$Component*,$String*)>(&JTabbedPane$Page::init$))},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
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
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getDisplayedMnemonicIndex", "()I", nullptr, 0},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMnemonic", "()I", nullptr, 0},
	{"getPageIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(JTabbedPane$Page::*)()>(&JTabbedPane$Page::getPageIndex))},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTitle", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JTabbedPane$Page::*)()>(&JTabbedPane$Page::getTitle))},
	{"initAccessibleContext", "()V", nullptr, 0},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"isShowing", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setDisplayedMnemonicIndex", "(I)V", nullptr, 0},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setMnemonic", "(I)V", nullptr, 0},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateDisplayedMnemonicIndex", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _JTabbedPane$Page_InnerClassesInfo_[] = {
	{"javax.swing.JTabbedPane$Page", "javax.swing.JTabbedPane", "Page", $PRIVATE},
	{}
};

$ClassInfo _JTabbedPane$Page_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTabbedPane$Page",
	"javax.accessibility.AccessibleContext",
	"java.io.Serializable,javax.accessibility.Accessible,javax.accessibility.AccessibleComponent",
	_JTabbedPane$Page_FieldInfo_,
	_JTabbedPane$Page_MethodInfo_,
	nullptr,
	nullptr,
	_JTabbedPane$Page_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTabbedPane"
};

$Object* allocate$JTabbedPane$Page($Class* clazz) {
	return $of($alloc(JTabbedPane$Page));
}

int32_t JTabbedPane$Page::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool JTabbedPane$Page::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* JTabbedPane$Page::clone() {
	 return this->$AccessibleContext::clone();
}

$String* JTabbedPane$Page::toString() {
	 return this->$AccessibleContext::toString();
}

void JTabbedPane$Page::finalize() {
	this->$AccessibleContext::finalize();
}

void JTabbedPane$Page::init$($JTabbedPane* this$0, $JTabbedPane* parent, $String* title, $Icon* icon, $Icon* disabledIcon, $Component* component, $String* tip) {
	$set(this, this$0, this$0);
	$AccessibleContext::init$();
	this->enabled = true;
	this->mnemonic = -1;
	this->mnemonicIndex = -1;
	$set(this, title, title);
	$set(this, icon, icon);
	$set(this, disabledIcon, disabledIcon);
	$set(this, parent, parent);
	this->setAccessibleParent(parent);
	$set(this, component, component);
	$set(this, tip, tip);
	initAccessibleContext();
}

void JTabbedPane$Page::initAccessibleContext() {
	if ($JTabbedPane::access$000(this->this$0) != nullptr && $instanceOf($Accessible, this->component)) {
		$var($AccessibleContext, ac, nullptr);
		$assign(ac, $nc(this->component)->getAccessibleContext());
		if (ac != nullptr) {
			ac->setAccessibleParent(this);
		}
	}
}

void JTabbedPane$Page::setMnemonic(int32_t mnemonic) {
	this->mnemonic = mnemonic;
	updateDisplayedMnemonicIndex();
}

int32_t JTabbedPane$Page::getMnemonic() {
	return this->mnemonic;
}

void JTabbedPane$Page::setDisplayedMnemonicIndex(int32_t mnemonicIndex) {
	if (this->mnemonicIndex != mnemonicIndex) {
		$var($String, t, getTitle());
		if (mnemonicIndex != -1 && (t == nullptr || mnemonicIndex < 0 || mnemonicIndex >= $nc(t)->length())) {
			$throwNew($IllegalArgumentException, $$str({"Invalid mnemonic index: "_s, $$str(mnemonicIndex)}));
		}
		this->mnemonicIndex = mnemonicIndex;
		$JTabbedPane::access$100(this->this$0, "displayedMnemonicIndexAt"_s, nullptr, nullptr);
	}
}

int32_t JTabbedPane$Page::getDisplayedMnemonicIndex() {
	return this->mnemonicIndex;
}

void JTabbedPane$Page::updateDisplayedMnemonicIndex() {
	setDisplayedMnemonicIndex($SwingUtilities::findDisplayedMnemonicIndex($(getTitle()), this->mnemonic));
}

$AccessibleContext* JTabbedPane$Page::getAccessibleContext() {
	return this;
}

$String* JTabbedPane$Page::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else {
		return getTitle();
	}
}

$String* JTabbedPane$Page::getAccessibleDescription() {
	if (this->accessibleDescription != nullptr) {
		return this->accessibleDescription;
	} else if (this->tip != nullptr) {
		return this->tip;
	}
	return nullptr;
}

$AccessibleRole* JTabbedPane$Page::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PAGE_TAB;
}

$AccessibleStateSet* JTabbedPane$Page::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, nullptr);
	$assign(states, $nc($($nc(this->parent)->getAccessibleContext()))->getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::SELECTABLE);
	int32_t var$0 = getPageIndex();
	if (var$0 == $nc(this->parent)->getSelectedIndex()) {
		states->add($AccessibleState::SELECTED);
	}
	return states;
}

int32_t JTabbedPane$Page::getAccessibleIndexInParent() {
	return getPageIndex();
}

int32_t JTabbedPane$Page::getAccessibleChildrenCount() {
	if ($instanceOf($Accessible, this->component)) {
		return 1;
	} else {
		return 0;
	}
}

$Accessible* JTabbedPane$Page::getAccessibleChild(int32_t i) {
	if ($instanceOf($Accessible, this->component)) {
		return $cast($Accessible, this->component);
	} else {
		return nullptr;
	}
}

$Locale* JTabbedPane$Page::getLocale() {
	return $nc(this->parent)->getLocale();
}

$AccessibleComponent* JTabbedPane$Page::getAccessibleComponent() {
	return this;
}

$Color* JTabbedPane$Page::getBackground() {
	return this->background != nullptr ? this->background : $nc(this->parent)->getBackground();
}

void JTabbedPane$Page::setBackground($Color* c) {
	$set(this, background, c);
}

$Color* JTabbedPane$Page::getForeground() {
	return this->foreground != nullptr ? this->foreground : $nc(this->parent)->getForeground();
}

void JTabbedPane$Page::setForeground($Color* c) {
	$set(this, foreground, c);
}

$Cursor* JTabbedPane$Page::getCursor() {
	return $nc(this->parent)->getCursor();
}

void JTabbedPane$Page::setCursor($Cursor* c) {
	$nc(this->parent)->setCursor(c);
}

$Font* JTabbedPane$Page::getFont() {
	return $nc(this->parent)->getFont();
}

void JTabbedPane$Page::setFont($Font* f) {
	$nc(this->parent)->setFont(f);
}

$FontMetrics* JTabbedPane$Page::getFontMetrics($Font* f) {
	return $nc(this->parent)->getFontMetrics(f);
}

bool JTabbedPane$Page::isEnabled() {
	return this->enabled;
}

void JTabbedPane$Page::setEnabled(bool b) {
	this->enabled = b;
}

bool JTabbedPane$Page::isVisible() {
	return $nc(this->parent)->isVisible();
}

void JTabbedPane$Page::setVisible(bool b) {
	$nc(this->parent)->setVisible(b);
}

bool JTabbedPane$Page::isShowing() {
	return $nc(this->parent)->isShowing();
}

bool JTabbedPane$Page::contains($Point* p) {
	$var($Rectangle, r, getBounds());
	return $nc(r)->contains(p);
}

$Point* JTabbedPane$Page::getLocationOnScreen() {
	$var($Point, parentLocation, $nc(this->parent)->getLocationOnScreen());
	$var($Point, componentLocation, getLocation());
	$nc(componentLocation)->translate($nc(parentLocation)->x, parentLocation->y);
	return componentLocation;
}

$Point* JTabbedPane$Page::getLocation() {
	$var($Rectangle, r, getBounds());
	return $new($Point, $nc(r)->x, r->y);
}

void JTabbedPane$Page::setLocation($Point* p) {
}

$Rectangle* JTabbedPane$Page::getBounds() {
	return $nc($($cast($TabbedPaneUI, $nc(this->parent)->getUI())))->getTabBounds(this->parent, getPageIndex());
}

void JTabbedPane$Page::setBounds($Rectangle* r) {
}

$Dimension* JTabbedPane$Page::getSize() {
	$var($Rectangle, r, getBounds());
	return $new($Dimension, $nc(r)->width, r->height);
}

void JTabbedPane$Page::setSize($Dimension* d) {
}

$Accessible* JTabbedPane$Page::getAccessibleAt($Point* p) {
	if ($instanceOf($Accessible, this->component)) {
		return $cast($Accessible, this->component);
	} else {
		return nullptr;
	}
}

bool JTabbedPane$Page::isFocusTraversable() {
	return false;
}

void JTabbedPane$Page::requestFocus() {
}

void JTabbedPane$Page::addFocusListener($FocusListener* l) {
}

void JTabbedPane$Page::removeFocusListener($FocusListener* l) {
}

$AccessibleIconArray* JTabbedPane$Page::getAccessibleIcon() {
	$var($AccessibleIcon, accessibleIcon, nullptr);
	if (this->enabled && $instanceOf($ImageIcon, this->icon)) {
		$var($AccessibleContext, ac, $nc(($cast($ImageIcon, this->icon)))->getAccessibleContext());
		$assign(accessibleIcon, $cast($AccessibleIcon, ac));
	} else if (!this->enabled && $instanceOf($ImageIcon, this->disabledIcon)) {
		$var($AccessibleContext, ac, $nc(($cast($ImageIcon, this->disabledIcon)))->getAccessibleContext());
		$assign(accessibleIcon, $cast($AccessibleIcon, ac));
	}
	if (accessibleIcon != nullptr) {
		$var($AccessibleIconArray, returnIcons, $new($AccessibleIconArray, 1));
		returnIcons->set(0, accessibleIcon);
		return returnIcons;
	} else {
		return nullptr;
	}
}

$String* JTabbedPane$Page::getTitle() {
	return this->this$0->getTitleAt(getPageIndex());
}

int32_t JTabbedPane$Page::getPageIndex() {
	int32_t index = 0;
	if (this->component != nullptr || (this->component == nullptr && this->tabComponent == nullptr)) {
		index = $nc(this->parent)->indexOfComponent(this->component);
	} else {
		index = $nc(this->parent)->indexOfTabComponent(this->tabComponent);
	}
	return index;
}

JTabbedPane$Page::JTabbedPane$Page() {
}

$Class* JTabbedPane$Page::load$($String* name, bool initialize) {
	$loadClass(JTabbedPane$Page, name, initialize, &_JTabbedPane$Page_ClassInfo_, allocate$JTabbedPane$Page);
	return class$;
}

$Class* JTabbedPane$Page::class$ = nullptr;

	} // swing
} // javax
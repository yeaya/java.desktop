#include <com/apple/laf/ScreenMenuItemCheckbox.h>

#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaMenuItemUI$IndeterminateListener.h>
#include <com/apple/laf/ScreenMenuItem.h>
#include <com/apple/laf/ScreenMenuItemUI.h>
#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <com/apple/laf/ScreenMenuPropertyListener.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Image.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CCheckboxMenuItem.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <jcpp.h>

#undef DESELECTED
#undef SELECTED

using $AquaIcon = ::com::apple::laf::AquaIcon;
using $AquaMenuItemUI$IndeterminateListener = ::com::apple::laf::AquaMenuItemUI$IndeterminateListener;
using $ScreenMenuItem = ::com::apple::laf::ScreenMenuItem;
using $ScreenMenuItemUI = ::com::apple::laf::ScreenMenuItemUI;
using $ScreenMenuPropertyHandler = ::com::apple::laf::ScreenMenuPropertyHandler;
using $ScreenMenuPropertyListener = ::com::apple::laf::ScreenMenuPropertyListener;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Font = ::java::awt::Font;
using $Image = ::java::awt::Image;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $CCheckboxMenuItem = ::sun::lwawt::macosx::CCheckboxMenuItem;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenMenuItemCheckbox_FieldInfo_[] = {
	{"fMenuItem", "Ljavax/swing/JMenuItem;", nullptr, 0, $field(ScreenMenuItemCheckbox, fMenuItem)},
	{"fParent", "Ljava/awt/MenuContainer;", nullptr, 0, $field(ScreenMenuItemCheckbox, fParent)},
	{"fPropertyListener", "Lcom/apple/laf/ScreenMenuPropertyListener;", nullptr, 0, $field(ScreenMenuItemCheckbox, fPropertyListener)},
	{}
};

$MethodInfo _ScreenMenuItemCheckbox_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JCheckBoxMenuItem;)V", nullptr, 0, $method(static_cast<void(ScreenMenuItemCheckbox::*)($JCheckBoxMenuItem*)>(&ScreenMenuItemCheckbox::init$))},
	{"<init>", "(Ljavax/swing/JRadioButtonMenuItem;)V", nullptr, 0, $method(static_cast<void(ScreenMenuItemCheckbox::*)($JRadioButtonMenuItem*)>(&ScreenMenuItemCheckbox::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"forceSetState", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ScreenMenuItemCheckbox::*)(bool)>(&ScreenMenuItemCheckbox::forceSetState))},
	{"init", "(Ljavax/swing/JMenuItem;)V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenuItemCheckbox::*)($JMenuItem*)>(&ScreenMenuItemCheckbox::init))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"setChildVisible", "(Ljavax/swing/JMenuItem;Z)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setIndeterminate", "(Z)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setState", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenuItemCheckbox::*)(bool)>(&ScreenMenuItemCheckbox::setVisible))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ScreenMenuItemCheckbox_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.ScreenMenuItemCheckbox",
	"java.awt.CheckboxMenuItem",
	"java.awt.event.ActionListener,java.awt.event.ComponentListener,com.apple.laf.ScreenMenuPropertyHandler,java.awt.event.ItemListener",
	_ScreenMenuItemCheckbox_FieldInfo_,
	_ScreenMenuItemCheckbox_MethodInfo_
};

$Object* allocate$ScreenMenuItemCheckbox($Class* clazz) {
	return $of($alloc(ScreenMenuItemCheckbox));
}

void ScreenMenuItemCheckbox::setEnabled(bool b) {
	this->$CheckboxMenuItem::setEnabled(b);
}

void ScreenMenuItemCheckbox::setFont($Font* f) {
	this->$CheckboxMenuItem::setFont(f);
}

$String* ScreenMenuItemCheckbox::toString() {
	 return this->$CheckboxMenuItem::toString();
}

int32_t ScreenMenuItemCheckbox::hashCode() {
	 return this->$CheckboxMenuItem::hashCode();
}

bool ScreenMenuItemCheckbox::equals(Object$* arg0) {
	 return this->$CheckboxMenuItem::equals(arg0);
}

$Object* ScreenMenuItemCheckbox::clone() {
	 return this->$CheckboxMenuItem::clone();
}

void ScreenMenuItemCheckbox::finalize() {
	this->$CheckboxMenuItem::finalize();
}

void ScreenMenuItemCheckbox::init$($JCheckBoxMenuItem* mi) {
	$var($String, var$0, $nc(mi)->getText());
	$CheckboxMenuItem::init$(var$0, mi->getState());
	init(mi);
}

void ScreenMenuItemCheckbox::init$($JRadioButtonMenuItem* mi) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(mi)->getText());
	$CheckboxMenuItem::init$(var$0, $nc($(mi->getModel()))->isSelected());
	init(mi);
}

void ScreenMenuItemCheckbox::init($JMenuItem* mi) {
	$set(this, fMenuItem, mi);
	setEnabled($nc(this->fMenuItem)->isEnabled());
}

void ScreenMenuItemCheckbox::addNotify() {
	$useLocalCurrentObjectStackCache();
	$CheckboxMenuItem::addNotify();
	$var($CCheckboxMenuItem, ccb, $cast($CCheckboxMenuItem, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this)));
	$nc(ccb)->setAutoToggle(false);
	$nc(this->fMenuItem)->addComponentListener(this);
	$set(this, fPropertyListener, $new($ScreenMenuPropertyListener, this));
	$nc(this->fMenuItem)->addPropertyChangeListener(this->fPropertyListener);
	addActionListener(this);
	addItemListener(this);
	$nc(this->fMenuItem)->addItemListener(this);
	setIndeterminate($AquaMenuItemUI$IndeterminateListener::isIndeterminate(this->fMenuItem));
	setAccelerator($($nc(this->fMenuItem)->getAccelerator()));
	$var($Icon, icon, $nc(this->fMenuItem)->getIcon());
	if (icon != nullptr) {
		this->setIcon(icon);
	}
	$var($String, tooltipText, $nc(this->fMenuItem)->getToolTipText());
	if (tooltipText != nullptr) {
		this->setToolTipText(tooltipText);
	}
	$nc(this->fMenuItem)->addItemListener(this);
	$var($ButtonUI, ui, $cast($ButtonUI, $nc(this->fMenuItem)->getUI()));
	if ($instanceOf($ScreenMenuItemUI, ui)) {
		$nc(($cast($ScreenMenuItemUI, ui)))->updateListenersForScreenMenuItem();
	}
	if ($instanceOf($JCheckBoxMenuItem, this->fMenuItem)) {
		forceSetState($nc(this->fMenuItem)->isSelected());
	} else {
		forceSetState($nc($($nc(this->fMenuItem)->getModel()))->isSelected());
	}
}

void ScreenMenuItemCheckbox::removeNotify() {
	$nc(this->fMenuItem)->removeComponentListener(this);
	$nc(this->fMenuItem)->removePropertyChangeListener(this->fPropertyListener);
	$set(this, fPropertyListener, nullptr);
	removeActionListener(this);
	removeItemListener(this);
	$nc(this->fMenuItem)->removeItemListener(this);
	$CheckboxMenuItem::removeNotify();
}

void ScreenMenuItemCheckbox::setLabel($String* label) {
	$synchronized(this) {
		$ScreenMenuItem::syncLabelAndKS(this, label, $($nc(this->fMenuItem)->getAccelerator()));
	}
}

void ScreenMenuItemCheckbox::setAccelerator($KeyStroke* ks) {
	$ScreenMenuItem::syncLabelAndKS(this, $($nc(this->fMenuItem)->getText()), ks);
}

void ScreenMenuItemCheckbox::actionPerformed($ActionEvent* e) {
	$nc(this->fMenuItem)->doClick(0);
}

void ScreenMenuItemCheckbox::componentResized($ComponentEvent* e) {
}

void ScreenMenuItemCheckbox::componentMoved($ComponentEvent* e) {
}

void ScreenMenuItemCheckbox::componentShown($ComponentEvent* e) {
	setVisible(true);
}

void ScreenMenuItemCheckbox::componentHidden($ComponentEvent* e) {
	setVisible(false);
}

void ScreenMenuItemCheckbox::setToolTipText($String* text) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this));
	if (!($instanceOf($CMenuItem, peer))) {
		return;
	}
	$nc(($cast($CMenuItem, peer)))->setToolTipText(text);
}

void ScreenMenuItemCheckbox::setIcon($Icon* i) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this));
	if (!($instanceOf($CMenuItem, peer))) {
		return;
	}
	$var($CMenuItem, cmi, $cast($CMenuItem, peer));
	$var($Image, img, nullptr);
	if (i != nullptr) {
		bool var$0 = i->getIconWidth() > 0;
		if (var$0 && i->getIconHeight() > 0) {
			$assign(img, $AquaIcon::getImageForIcon(i));
		}
	}
	$nc(cmi)->setImage(img);
}

void ScreenMenuItemCheckbox::setVisible(bool b) {
	if (this->fParent == nullptr) {
		$set(this, fParent, getParent());
	}
	$nc(($cast($ScreenMenuPropertyHandler, this->fParent)))->setChildVisible(this->fMenuItem, b);
}

void ScreenMenuItemCheckbox::setChildVisible($JMenuItem* child, bool b) {
}

void ScreenMenuItemCheckbox::itemStateChanged($ItemEvent* e) {
	if ($equals($nc(e)->getSource(), this)) {
		$nc(this->fMenuItem)->doClick(0);
		return;
	}
	switch ($nc(e)->getStateChange()) {
	case $ItemEvent::SELECTED:
		{
			forceSetState(true);
			break;
		}
	case $ItemEvent::DESELECTED:
		{
			forceSetState(false);
			break;
		}
	}
}

void ScreenMenuItemCheckbox::setIndeterminate(bool indeterminate) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this));
	if ($instanceOf($CCheckboxMenuItem, peer)) {
		$nc(($cast($CCheckboxMenuItem, peer)))->setIsIndeterminate(indeterminate);
	}
}

void ScreenMenuItemCheckbox::setState(bool b) {
	$synchronized(this) {
	}
}

void ScreenMenuItemCheckbox::forceSetState(bool b) {
	$CheckboxMenuItem::setState(b);
}

ScreenMenuItemCheckbox::ScreenMenuItemCheckbox() {
}

$Class* ScreenMenuItemCheckbox::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuItemCheckbox, name, initialize, &_ScreenMenuItemCheckbox_ClassInfo_, allocate$ScreenMenuItemCheckbox);
	return class$;
}

$Class* ScreenMenuItemCheckbox::class$ = nullptr;

		} // laf
	} // apple
} // com
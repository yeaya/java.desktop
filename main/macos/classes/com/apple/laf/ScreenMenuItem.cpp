#include <com/apple/laf/ScreenMenuItem.h>

#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/ScreenMenuItemUI.h>
#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <com/apple/laf/ScreenMenuPropertyListener.h>
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
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <jcpp.h>

using $AquaIcon = ::com::apple::laf::AquaIcon;
using $ScreenMenuItemUI = ::com::apple::laf::ScreenMenuItemUI;
using $ScreenMenuPropertyHandler = ::com::apple::laf::ScreenMenuPropertyHandler;
using $ScreenMenuPropertyListener = ::com::apple::laf::ScreenMenuPropertyListener;
using $Font = ::java::awt::Font;
using $Image = ::java::awt::Image;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenMenuItem_FieldInfo_[] = {
	{"fListener", "Lcom/apple/laf/ScreenMenuPropertyListener;", nullptr, 0, $field(ScreenMenuItem, fListener)},
	{"fMenuItem", "Ljavax/swing/JMenuItem;", nullptr, 0, $field(ScreenMenuItem, fMenuItem)},
	{}
};

$MethodInfo _ScreenMenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenuItem;)V", nullptr, 0, $method(static_cast<void(ScreenMenuItem::*)($JMenuItem*)>(&ScreenMenuItem::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"setChildVisible", "(Ljavax/swing/JMenuItem;Z)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setIndeterminate", "(Z)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ScreenMenuItem::*)(bool)>(&ScreenMenuItem::setVisible))},
	{"syncLabelAndKS", "(Ljava/awt/MenuItem;Ljava/lang/String;Ljavax/swing/KeyStroke;)V", nullptr, $STATIC, $method(static_cast<void(*)($MenuItem*,$String*,$KeyStroke*)>(&ScreenMenuItem::syncLabelAndKS))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ScreenMenuItem_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.ScreenMenuItem",
	"java.awt.MenuItem",
	"java.awt.event.ActionListener,java.awt.event.ComponentListener,com.apple.laf.ScreenMenuPropertyHandler",
	_ScreenMenuItem_FieldInfo_,
	_ScreenMenuItem_MethodInfo_
};

$Object* allocate$ScreenMenuItem($Class* clazz) {
	return $of($alloc(ScreenMenuItem));
}

void ScreenMenuItem::setEnabled(bool b) {
	this->$MenuItem::setEnabled(b);
}

void ScreenMenuItem::setFont($Font* f) {
	this->$MenuItem::setFont(f);
}

$String* ScreenMenuItem::toString() {
	 return this->$MenuItem::toString();
}

int32_t ScreenMenuItem::hashCode() {
	 return this->$MenuItem::hashCode();
}

bool ScreenMenuItem::equals(Object$* arg0) {
	 return this->$MenuItem::equals(arg0);
}

$Object* ScreenMenuItem::clone() {
	 return this->$MenuItem::clone();
}

void ScreenMenuItem::finalize() {
	this->$MenuItem::finalize();
}

void ScreenMenuItem::init$($JMenuItem* mi) {
	$useLocalCurrentObjectStackCache();
	$MenuItem::init$($($nc(mi)->getText()));
	$set(this, fMenuItem, mi);
	setEnabled($nc(this->fMenuItem)->isEnabled());
	$var($ComponentUI, ui, $nc(this->fMenuItem)->getUI());
	if ($instanceOf($ScreenMenuItemUI, ui)) {
		$nc(($cast($ScreenMenuItemUI, ui)))->updateListenersForScreenMenuItem();
	}
}

void ScreenMenuItem::addNotify() {
	$useLocalCurrentObjectStackCache();
	$MenuItem::addNotify();
	$nc(this->fMenuItem)->addComponentListener(this);
	$set(this, fListener, $new($ScreenMenuPropertyListener, this));
	$nc(this->fMenuItem)->addPropertyChangeListener(this->fListener);
	addActionListener(this);
	setEnabled($nc(this->fMenuItem)->isEnabled());
	setAccelerator($($nc(this->fMenuItem)->getAccelerator()));
	$var($String, label, $nc(this->fMenuItem)->getText());
	if (label != nullptr) {
		setLabel(label);
	}
	$var($Icon, icon, $nc(this->fMenuItem)->getIcon());
	if (icon != nullptr) {
		this->setIcon(icon);
	}
	$var($String, tooltipText, $nc(this->fMenuItem)->getToolTipText());
	if (tooltipText != nullptr) {
		this->setToolTipText(tooltipText);
	}
	if ($instanceOf($JRadioButtonMenuItem, this->fMenuItem)) {
		$var($ComponentUI, ui, $nc(this->fMenuItem)->getUI());
		if ($instanceOf($ScreenMenuItemUI, ui)) {
			$nc(($cast($ScreenMenuItemUI, ui)))->updateListenersForScreenMenuItem();
		}
	}
}

void ScreenMenuItem::removeNotify() {
	$MenuItem::removeNotify();
	removeActionListener(this);
	$nc(this->fMenuItem)->removePropertyChangeListener(this->fListener);
	$set(this, fListener, nullptr);
	$nc(this->fMenuItem)->removeComponentListener(this);
}

void ScreenMenuItem::syncLabelAndKS($MenuItem* menuItem, $String* label, $KeyStroke* ks) {
	$init(ScreenMenuItem);
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(menuItem));
	if (!($instanceOf($CMenuItem, peer))) {
		return;
	}
	$var($CMenuItem, cmi, $cast($CMenuItem, peer));
	if (ks == nullptr) {
		$nc(cmi)->setLabel(label);
	} else {
		$var($String, var$0, label);
		char16_t var$1 = $nc(ks)->getKeyChar();
		int32_t var$2 = ks->getKeyCode();
		$nc(cmi)->setLabel(var$0, var$1, var$2, ks->getModifiers());
	}
}

void ScreenMenuItem::setLabel($String* label) {
	$synchronized(this) {
		syncLabelAndKS(this, label, $($nc(this->fMenuItem)->getAccelerator()));
	}
}

void ScreenMenuItem::setAccelerator($KeyStroke* ks) {
	syncLabelAndKS(this, $($nc(this->fMenuItem)->getText()), ks);
}

void ScreenMenuItem::actionPerformed($ActionEvent* e) {
	$nc(this->fMenuItem)->doClick(0);
}

void ScreenMenuItem::componentResized($ComponentEvent* e) {
}

void ScreenMenuItem::componentMoved($ComponentEvent* e) {
}

void ScreenMenuItem::componentShown($ComponentEvent* e) {
	setVisible(true);
}

void ScreenMenuItem::componentHidden($ComponentEvent* e) {
	setVisible(false);
}

void ScreenMenuItem::setVisible(bool b) {
	$var($MenuContainer, parent, getParent());
	if (parent != nullptr) {
		$nc(($cast($ScreenMenuPropertyHandler, parent)))->setChildVisible(this->fMenuItem, b);
	}
}

void ScreenMenuItem::setToolTipText($String* text) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this));
	if (!($instanceOf($CMenuItem, peer))) {
		return;
	}
	$var($CMenuItem, cmi, $cast($CMenuItem, peer));
	$nc(cmi)->setToolTipText(text);
}

void ScreenMenuItem::setIcon($Icon* i) {
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

void ScreenMenuItem::setChildVisible($JMenuItem* child, bool b) {
}

void ScreenMenuItem::setIndeterminate(bool indeterminate) {
}

ScreenMenuItem::ScreenMenuItem() {
}

$Class* ScreenMenuItem::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuItem, name, initialize, &_ScreenMenuItem_ClassInfo_, allocate$ScreenMenuItem);
	return class$;
}

$Class* ScreenMenuItem::class$ = nullptr;

		} // laf
	} // apple
} // com
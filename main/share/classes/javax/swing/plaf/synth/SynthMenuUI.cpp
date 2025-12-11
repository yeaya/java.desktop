#include <javax/swing/plaf/synth/SynthMenuUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthMenuItemLayoutHelper.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

#undef DISABLED
#undef EMPTY_UIRESOURCE_INSETS
#undef ENABLED
#undef MAX_ACC_OR_ARROW_WIDTH
#undef MENU_ITEM_ACCELERATOR
#undef MOUSE_OVER
#undef SELECTED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthMenuItemLayoutHelper = ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthMenuUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthMenuUI, style)},
	{"accStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthMenuUI, accStyle)},
	{}
};

$MethodInfo _SynthMenuUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthMenuUI::*)()>(&SynthMenuUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthMenuUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthMenuUI::*)($JComponent*)>(&SynthMenuUI::getComponentState))},
	{"getComponentState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthMenuUI::*)($JComponent*,$Region*)>(&SynthMenuUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, 0},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, 0},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthMenuUI::*)($JComponent*,$Region*,int32_t)>(&SynthMenuUI::getContext))},
	{"getPreferredMenuItemSize", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JMenuItem;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthMenuUI::*)($JMenuItem*)>(&SynthMenuUI::updateStyle))},
	{}
};

$ClassInfo _SynthMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthMenuUI",
	"javax.swing.plaf.basic.BasicMenuUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthMenuUI_FieldInfo_,
	_SynthMenuUI_MethodInfo_
};

$Object* allocate$SynthMenuUI($Class* clazz) {
	return $of($alloc(SynthMenuUI));
}

int32_t SynthMenuUI::hashCode() {
	 return this->$BasicMenuUI::hashCode();
}

bool SynthMenuUI::equals(Object$* arg0) {
	 return this->$BasicMenuUI::equals(arg0);
}

$Object* SynthMenuUI::clone() {
	 return this->$BasicMenuUI::clone();
}

$String* SynthMenuUI::toString() {
	 return this->$BasicMenuUI::toString();
}

void SynthMenuUI::finalize() {
	this->$BasicMenuUI::finalize();
}

void SynthMenuUI::init$() {
	$BasicMenuUI::init$();
}

$ComponentUI* SynthMenuUI::createUI($JComponent* x) {
	$init(SynthMenuUI);
	return $new(SynthMenuUI);
}

void SynthMenuUI::installDefaults() {
	updateStyle(this->menuItem);
}

void SynthMenuUI::installListeners() {
	$BasicMenuUI::installListeners();
	$nc(this->menuItem)->addPropertyChangeListener(this);
}

void SynthMenuUI::updateStyle($JMenuItem* mi) {
	$useLocalCurrentObjectStackCache();
	$var($SynthStyle, oldStyle, this->style);
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(mi), $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (oldStyle != this->style) {
		$var($String, prefix, getPropertyPrefix());
		this->defaultTextIconGap = $nc(this->style)->getInt(context, $$str({prefix, ".textIconGap"_s}), 4);
		bool var$0 = $nc(this->menuItem)->getMargin() == nullptr;
		if (var$0 || ($instanceOf($UIResource, $($nc(this->menuItem)->getMargin())))) {
			$var($Insets, insets, $cast($Insets, $nc(this->style)->get(context, $$str({prefix, ".margin"_s}))));
			if (insets == nullptr) {
				$assign(insets, $SynthLookAndFeel::EMPTY_UIRESOURCE_INSETS);
			}
			$nc(this->menuItem)->setMargin(insets);
		}
		$set(this, acceleratorDelimiter, $nc(this->style)->getString(context, $$str({prefix, ".acceleratorDelimiter"_s}), "+"_s));
		if ($MenuItemLayoutHelper::useCheckAndArrow(this->menuItem)) {
			$set(this, checkIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".checkIcon"_s})));
			$set(this, arrowIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".arrowIcon"_s})));
		} else {
			$set(this, checkIcon, nullptr);
			$set(this, arrowIcon, nullptr);
		}
		$nc(($cast($JMenu, this->menuItem)))->setDelay($nc(this->style)->getInt(context, $$str({prefix, ".delay"_s}), 200));
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
	$init($Region);
	$var($SynthContext, accContext, getContext(mi, $Region::MENU_ITEM_ACCELERATOR, $SynthConstants::ENABLED));
	$set(this, accStyle, $SynthLookAndFeel::updateStyle(accContext, this));
}

void SynthMenuUI::uninstallUI($JComponent* c) {
	$BasicMenuUI::uninstallUI(c);
	$var($JComponent, p, $MenuItemLayoutHelper::getMenuItemParent($cast($JMenuItem, c)));
	if (p != nullptr) {
		$init($SynthMenuItemLayoutHelper);
		p->putClientProperty($SynthMenuItemLayoutHelper::MAX_ACC_OR_ARROW_WIDTH, nullptr);
	}
}

void SynthMenuUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(this->menuItem), $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$init($Region);
	$var($SynthContext, accContext, getContext(this->menuItem, $Region::MENU_ITEM_ACCELERATOR, $SynthConstants::ENABLED));
	$nc(this->accStyle)->uninstallDefaults(accContext);
	$set(this, accStyle, nullptr);
	$BasicMenuUI::uninstallDefaults();
}

void SynthMenuUI::uninstallListeners() {
	$BasicMenuUI::uninstallListeners();
	$nc(this->menuItem)->removePropertyChangeListener(this);
}

$SynthContext* SynthMenuUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthMenuUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthMenuUI::getContext($JComponent* c, $Region* region) {
	return getContext(c, region, getComponentState(c, region));
}

$SynthContext* SynthMenuUI::getContext($JComponent* c, $Region* region, int32_t state) {
	return $SynthContext::getContext(c, region, this->accStyle, state);
}

int32_t SynthMenuUI::getComponentState($JComponent* c) {
	int32_t state = 0;
	if (!$nc(c)->isEnabled()) {
		return $SynthConstants::DISABLED;
	}
	if ($nc(this->menuItem)->isArmed()) {
		state = $SynthConstants::MOUSE_OVER;
	} else {
		state = $SynthLookAndFeel::getComponentState(c);
	}
	if ($nc(this->menuItem)->isSelected()) {
		state |= $SynthConstants::SELECTED;
	}
	return state;
}

int32_t SynthMenuUI::getComponentState($JComponent* c, $Region* region) {
	return getComponentState(c);
}

$Dimension* SynthMenuUI::getPreferredMenuItemSize($JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, int32_t defaultTextIconGap) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$init($Region);
	$var($SynthContext, accContext, getContext(c, $Region::MENU_ITEM_ACCELERATOR));
	$var($SynthContext, var$0, context);
	$var($SynthContext, var$1, accContext);
	$var($JComponent, var$2, c);
	$var($Icon, var$3, checkIcon);
	$var($Icon, var$4, arrowIcon);
	int32_t var$5 = defaultTextIconGap;
	$var($String, var$6, this->acceleratorDelimiter);
	bool var$7 = $MenuItemLayoutHelper::useCheckAndArrow(this->menuItem);
	$var($Dimension, value, $SynthGraphicsUtils::getPreferredMenuItemSize(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $(getPropertyPrefix())));
	return value;
}

void SynthMenuUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintMenuBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthMenuUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthMenuUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$init($Region);
	$var($SynthContext, accContext, getContext(static_cast<$JComponent*>(this->menuItem), $Region::MENU_ITEM_ACCELERATOR));
	$var($String, prefix, getPropertyPrefix());
	$var($Icon, checkIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".checkIcon"_s})));
	$var($Icon, arrowIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".arrowIcon"_s})));
	$SynthGraphicsUtils::paint(context, accContext, g, checkIcon, arrowIcon, this->acceleratorDelimiter, this->defaultTextIconGap, $(getPropertyPrefix()));
}

void SynthMenuUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintMenuBorder(context, g, x, y, w, h);
}

void SynthMenuUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $SynthLookAndFeel::shouldUpdateStyle(e);
	if (!var$0) {
		bool var$1 = $nc($($nc(e)->getPropertyName()))->equals("ancestor"_s);
		var$0 = (var$1 && $UIManager::getBoolean("Menu.useMenuBarForTopLevelMenus"_s));
	}
	if (var$0) {
		updateStyle($cast($JMenu, $(e->getSource())));
	}
}

SynthMenuUI::SynthMenuUI() {
}

$Class* SynthMenuUI::load$($String* name, bool initialize) {
	$loadClass(SynthMenuUI, name, initialize, &_SynthMenuUI_ClassInfo_, allocate$SynthMenuUI);
	return class$;
}

$Class* SynthMenuUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
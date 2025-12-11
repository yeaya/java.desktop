#include <javax/swing/plaf/synth/SynthMenuItemUI.h>

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
#include <javax/swing/JMenuItem.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
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
using $JMenuItem = ::javax::swing::JMenuItem;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
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

$FieldInfo _SynthMenuItemUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthMenuItemUI, style)},
	{"accStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthMenuItemUI, accStyle)},
	{}
};

$MethodInfo _SynthMenuItemUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthMenuItemUI::*)()>(&SynthMenuItemUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthMenuItemUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthMenuItemUI::*)($JComponent*)>(&SynthMenuItemUI::getComponentState))},
	{"getComponentState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthMenuItemUI::*)($JComponent*,$Region*)>(&SynthMenuItemUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, 0},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, 0},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthMenuItemUI::*)($JComponent*,$Region*,int32_t)>(&SynthMenuItemUI::getContext))},
	{"getPreferredMenuItemSize", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JMenuItem;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthMenuItemUI::*)($JMenuItem*)>(&SynthMenuItemUI::updateStyle))},
	{}
};

$ClassInfo _SynthMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthMenuItemUI",
	"javax.swing.plaf.basic.BasicMenuItemUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthMenuItemUI_FieldInfo_,
	_SynthMenuItemUI_MethodInfo_
};

$Object* allocate$SynthMenuItemUI($Class* clazz) {
	return $of($alloc(SynthMenuItemUI));
}

int32_t SynthMenuItemUI::hashCode() {
	 return this->$BasicMenuItemUI::hashCode();
}

bool SynthMenuItemUI::equals(Object$* arg0) {
	 return this->$BasicMenuItemUI::equals(arg0);
}

$Object* SynthMenuItemUI::clone() {
	 return this->$BasicMenuItemUI::clone();
}

$String* SynthMenuItemUI::toString() {
	 return this->$BasicMenuItemUI::toString();
}

void SynthMenuItemUI::finalize() {
	this->$BasicMenuItemUI::finalize();
}

void SynthMenuItemUI::init$() {
	$BasicMenuItemUI::init$();
}

$ComponentUI* SynthMenuItemUI::createUI($JComponent* c) {
	$init(SynthMenuItemUI);
	return $new(SynthMenuItemUI);
}

void SynthMenuItemUI::uninstallUI($JComponent* c) {
	$BasicMenuItemUI::uninstallUI(c);
	$var($JComponent, p, $MenuItemLayoutHelper::getMenuItemParent($cast($JMenuItem, c)));
	if (p != nullptr) {
		$init($SynthMenuItemLayoutHelper);
		p->putClientProperty($SynthMenuItemLayoutHelper::MAX_ACC_OR_ARROW_WIDTH, nullptr);
	}
}

void SynthMenuItemUI::installDefaults() {
	updateStyle(this->menuItem);
}

void SynthMenuItemUI::installListeners() {
	$BasicMenuItemUI::installListeners();
	$nc(this->menuItem)->addPropertyChangeListener(this);
}

void SynthMenuItemUI::updateStyle($JMenuItem* mi) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(mi), $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (oldStyle != this->style) {
		$var($String, prefix, getPropertyPrefix());
		$var($Object, value, $nc(this->style)->get(context, $$str({prefix, ".textIconGap"_s})));
		if (value != nullptr) {
			$LookAndFeel::installProperty(mi, "iconTextGap"_s, value);
		}
		this->defaultTextIconGap = $nc(mi)->getIconTextGap();
		bool var$0 = $nc(this->menuItem)->getMargin() == nullptr;
		if (var$0 || ($instanceOf($UIResource, $($nc(this->menuItem)->getMargin())))) {
			$var($Insets, insets, $cast($Insets, $nc(this->style)->get(context, $$str({prefix, ".margin"_s}))));
			if (insets == nullptr) {
				$assign(insets, $SynthLookAndFeel::EMPTY_UIRESOURCE_INSETS);
			}
			$nc(this->menuItem)->setMargin(insets);
		}
		$set(this, acceleratorDelimiter, $nc(this->style)->getString(context, $$str({prefix, ".acceleratorDelimiter"_s}), "+"_s));
		$set(this, arrowIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".arrowIcon"_s})));
		$set(this, checkIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".checkIcon"_s})));
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
	$init($Region);
	$var($SynthContext, accContext, getContext(mi, $Region::MENU_ITEM_ACCELERATOR, $SynthConstants::ENABLED));
	$set(this, accStyle, $SynthLookAndFeel::updateStyle(accContext, this));
}

void SynthMenuItemUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(this->menuItem), $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$init($Region);
	$var($SynthContext, accContext, getContext(this->menuItem, $Region::MENU_ITEM_ACCELERATOR, $SynthConstants::ENABLED));
	$nc(this->accStyle)->uninstallDefaults(accContext);
	$set(this, accStyle, nullptr);
	$BasicMenuItemUI::uninstallDefaults();
}

void SynthMenuItemUI::uninstallListeners() {
	$BasicMenuItemUI::uninstallListeners();
	$nc(this->menuItem)->removePropertyChangeListener(this);
}

$SynthContext* SynthMenuItemUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthMenuItemUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthMenuItemUI::getContext($JComponent* c, $Region* region) {
	return getContext(c, region, getComponentState(c, region));
}

$SynthContext* SynthMenuItemUI::getContext($JComponent* c, $Region* region, int32_t state) {
	return $SynthContext::getContext(c, region, this->accStyle, state);
}

int32_t SynthMenuItemUI::getComponentState($JComponent* c) {
	int32_t state = 0;
	if (!$nc(c)->isEnabled()) {
		state = $SynthConstants::DISABLED;
	} else if ($nc(this->menuItem)->isArmed()) {
		state = $SynthConstants::MOUSE_OVER;
	} else {
		state = $SynthLookAndFeel::getComponentState(c);
	}
	if ($nc(this->menuItem)->isSelected()) {
		state |= $SynthConstants::SELECTED;
	}
	return state;
}

int32_t SynthMenuItemUI::getComponentState($JComponent* c, $Region* region) {
	return getComponentState(c);
}

$Dimension* SynthMenuItemUI::getPreferredMenuItemSize($JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, int32_t defaultTextIconGap) {
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

void SynthMenuItemUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	paintBackground(context, g, c);
	paint(context, g);
}

void SynthMenuItemUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthMenuItemUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$init($Region);
	$var($SynthContext, accContext, getContext(static_cast<$JComponent*>(this->menuItem), $Region::MENU_ITEM_ACCELERATOR));
	$var($String, prefix, getPropertyPrefix());
	$var($Icon, checkIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".checkIcon"_s})));
	$var($Icon, arrowIcon, $nc(this->style)->getIcon(context, $$str({prefix, ".arrowIcon"_s})));
	$SynthGraphicsUtils::paint(context, accContext, g, checkIcon, arrowIcon, this->acceleratorDelimiter, this->defaultTextIconGap, $(getPropertyPrefix()));
}

void SynthMenuItemUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$SynthGraphicsUtils::paintBackground(context, g, c);
}

void SynthMenuItemUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintMenuItemBorder(context, g, x, y, w, h);
}

void SynthMenuItemUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JMenuItem, $($nc(e)->getSource())));
	}
}

SynthMenuItemUI::SynthMenuItemUI() {
}

$Class* SynthMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(SynthMenuItemUI, name, initialize, &_SynthMenuItemUI_ClassInfo_, allocate$SynthMenuItemUI);
	return class$;
}

$Class* SynthMenuItemUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
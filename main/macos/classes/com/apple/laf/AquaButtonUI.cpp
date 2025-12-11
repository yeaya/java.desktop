#include <com/apple/laf/AquaButtonUI.h>

#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder$Toolbar.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaButtonUI$AquaButtonListener.h>
#include <com/apple/laf/AquaButtonUI$AquaHierarchyButtonListener.h>
#include <com/apple/laf/AquaComboBoxButton.h>
#include <com/apple/laf/AquaFocus.h>
#include <com/apple/laf/AquaMnemonicHandler.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BUTTON_TYPE
#undef SEGMENTED_BUTTON_POSITION
#undef X_AXIS

using $MouseMotionListenerArray = $Array<::java::awt::event::MouseMotionListener>;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonBorder$Toolbar = ::com::apple::laf::AquaButtonBorder$Toolbar;
using $AquaButtonExtendedTypes = ::com::apple::laf::AquaButtonExtendedTypes;
using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $AquaButtonUI$AquaButtonListener = ::com::apple::laf::AquaButtonUI$AquaButtonListener;
using $AquaButtonUI$AquaHierarchyButtonListener = ::com::apple::laf::AquaButtonUI$AquaHierarchyButtonListener;
using $AquaComboBoxButton = ::com::apple::laf::AquaComboBoxButton;
using $AquaFocus = ::com::apple::laf::AquaFocus;
using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonUI_FieldInfo_[] = {
	{"BUTTON_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, BUTTON_TYPE)},
	{"SEGMENTED_BUTTON_POSITION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, SEGMENTED_BUTTON_POSITION)},
	{"buttonUI", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, buttonUI)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(AquaButtonUI, defaults_initialized)},
	{"defaultDisabledTextColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(AquaButtonUI, defaultDisabledTextColor)},
	{"fHierListener", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonUI$AquaHierarchyButtonListener;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaButtonUI, fHierListener)},
	{}
};

$MethodInfo _AquaButtonUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonUI::*)()>(&AquaButtonUI::init$))},
	{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC},
	{"createButtonListener", "(Ljavax/swing/AbstractButton;)Lcom/apple/laf/AquaButtonUI$AquaButtonListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaButtonUI::createUI))},
	{"getAquaButtonListener", "(Ljavax/swing/AbstractButton;)Lcom/apple/laf/AquaButtonUI$AquaButtonListener;", nullptr, $PRIVATE, $method(static_cast<$AquaButtonUI$AquaButtonListener*(AquaButtonUI::*)($AbstractButton*)>(&AquaButtonUI::getAquaButtonListener))},
	{"getAquaHierarchyButtonListener", "()Lcom/apple/laf/AquaButtonUI$AquaHierarchyButtonListener;", nullptr, $STATIC, $method(static_cast<$AquaButtonUI$AquaHierarchyButtonListener*(*)()>(&AquaButtonUI::getAquaHierarchyButtonListener))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"installHierListener", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"isBorderFromProperty", "(Ljavax/swing/AbstractButton;)Z", nullptr, $PUBLIC},
	{"isOnToolbar", "(Ljavax/swing/AbstractButton;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($AbstractButton*)>(&AquaButtonUI::isOnToolbar))},
	{"layoutAndGetText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Lcom/apple/laf/AquaButtonBorder;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setButtonMarginIfNeeded", "(Ljavax/swing/AbstractButton;Ljava/awt/Insets;)V", nullptr, $PROTECTED},
	{"setButtonType", "(Ljavax/swing/AbstractButton;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{"setThemeBorder", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"shouldInstallHierListener", "(Ljavax/swing/AbstractButton;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AquaButtonUI::*)($AbstractButton*)>(&AquaButtonUI::shouldInstallHierListener))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallHierListener", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateBorder", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($AbstractButton*)>(&AquaButtonUI::updateBorder))},
	{}
};

$InnerClassInfo _AquaButtonUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaButtonUI$AquaButtonListener", "com.apple.laf.AquaButtonUI", "AquaButtonListener", 0},
	{"com.apple.laf.AquaButtonUI$AquaHierarchyButtonListener", "com.apple.laf.AquaButtonUI", "AquaHierarchyButtonListener", $STATIC},
	{}
};

$ClassInfo _AquaButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaButtonUI",
	"javax.swing.plaf.basic.BasicButtonUI",
	"com.apple.laf.AquaUtilControlSize$Sizeable",
	_AquaButtonUI_FieldInfo_,
	_AquaButtonUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonUI$AquaButtonListener,com.apple.laf.AquaButtonUI$AquaHierarchyButtonListener"
};

$Object* allocate$AquaButtonUI($Class* clazz) {
	return $of($alloc(AquaButtonUI));
}

int32_t AquaButtonUI::hashCode() {
	 return this->$BasicButtonUI::hashCode();
}

bool AquaButtonUI::equals(Object$* arg0) {
	 return this->$BasicButtonUI::equals(arg0);
}

$Object* AquaButtonUI::clone() {
	 return this->$BasicButtonUI::clone();
}

$String* AquaButtonUI::toString() {
	 return this->$BasicButtonUI::toString();
}

void AquaButtonUI::finalize() {
	this->$BasicButtonUI::finalize();
}

$String* AquaButtonUI::BUTTON_TYPE = nullptr;
$String* AquaButtonUI::SEGMENTED_BUTTON_POSITION = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonUI::buttonUI = nullptr;
$AquaUtils$RecyclableSingleton* AquaButtonUI::fHierListener = nullptr;

void AquaButtonUI::init$() {
	$BasicButtonUI::init$();
	this->defaults_initialized = false;
	$set(this, defaultDisabledTextColor, nullptr);
}

$ComponentUI* AquaButtonUI::createUI($JComponent* c) {
	$init(AquaButtonUI);
	return $cast($ComponentUI, $nc(AquaButtonUI::buttonUI)->get());
}

void AquaButtonUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$var($String, pp, getPropertyPrefix());
	if (!this->defaults_initialized) {
		$set(this, defaultDisabledTextColor, $UIManager::getColor($$str({pp, "disabledText"_s})));
		this->defaults_initialized = true;
	}
	setButtonMarginIfNeeded(b, $($UIManager::getInsets($$str({pp, "margin"_s}))));
	$LookAndFeel::installColorsAndFont(b, $$str({pp, "background"_s}), $$str({pp, "foreground"_s}), $$str({pp, "font"_s}));
	$LookAndFeel::installProperty(b, "opaque"_s, $($Boolean::valueOf($UIManager::getBoolean($$str({pp, "opaque"_s})))));
	$var($Object, borderProp, $nc(b)->getClientProperty(AquaButtonUI::BUTTON_TYPE));
	bool hasBorder = false;
	if (borderProp != nullptr) {
		hasBorder = setButtonType(b, borderProp);
	}
	if (!hasBorder) {
		setThemeBorder(b);
	}
	$var($Object, segmentProp, b->getClientProperty(AquaButtonUI::SEGMENTED_BUTTON_POSITION));
	if (segmentProp != nullptr) {
		$var($Border, border, b->getBorder());
		if (!($instanceOf($AquaBorder, border))) {
			return;
		}
		b->setBorder($($AquaButtonExtendedTypes::getBorderForPosition(b, $(b->getClientProperty(AquaButtonUI::BUTTON_TYPE)), segmentProp)));
	}
}

void AquaButtonUI::applySizeFor($JComponent* c, $JRSUIConstants$Size* size) {
}

void AquaButtonUI::setThemeBorder($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonUI, genericUI, $cast($ButtonUI, $nc(b)->getUI()));
	if (!($instanceOf(AquaButtonUI, genericUI))) {
		return;
	}
	$var(AquaButtonUI, ui, $cast(AquaButtonUI, genericUI));
	$var($Border, border, b->getBorder());
	if (!$nc(ui)->isBorderFromProperty(b) && (border == nullptr || $instanceOf($UIResource, border) || $instanceOf($AquaButtonBorder, border))) {
		bool iconFont = true;
		if (isOnToolbar(b)) {
			if ($instanceOf($JToggleButton, b)) {
				$assign(border, $AquaButtonBorder::getToolBarButtonBorder());
			} else {
				$assign(border, $AquaButtonBorder::getBevelButtonBorder());
			}
		} else {
			bool var$1 = b->getIcon() != nullptr;
			if (var$1 || b->getComponentCount() > 0) {
				$assign(border, $AquaButtonBorder::getToggleButtonBorder());
			} else {
				$assign(border, $UIManager::getBorder($$str({$(getPropertyPrefix()), "border"_s})));
				iconFont = false;
			}
		}
		b->setBorder(border);
		$var($Font, currentFont, b->getFont());
		if (iconFont && (currentFont == nullptr || $instanceOf($UIResource, currentFont))) {
			b->setFont($($UIManager::getFont("IconButton.font"_s)));
		}
	}
}

bool AquaButtonUI::isOnToolbar($AbstractButton* b) {
	$init(AquaButtonUI);
	$var($Component, parent, $nc(b)->getParent());
	while (parent != nullptr) {
		if ($instanceOf($JToolBar, parent)) {
			return true;
		}
		$assign(parent, parent->getParent());
	}
	return false;
}

void AquaButtonUI::updateBorder($AbstractButton* b) {
	$init(AquaButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($Object, prop, $nc(b)->getClientProperty(AquaButtonUI::BUTTON_TYPE));
	if (prop != nullptr) {
		return;
	}
	$var($ButtonUI, ui, $cast($ButtonUI, b->getUI()));
	if (!($instanceOf(AquaButtonUI, ui))) {
		return;
	}
	if (b->getBorder() != nullptr) {
		$nc(($cast(AquaButtonUI, ui)))->setThemeBorder(b);
	}
}

void AquaButtonUI::setButtonMarginIfNeeded($AbstractButton* b, $Insets* insets) {
	$var($Insets, margin, $nc(b)->getMargin());
	if (margin == nullptr || ($instanceOf($UIResource, margin))) {
		b->setMargin(insets);
	}
}

bool AquaButtonUI::isBorderFromProperty($AbstractButton* button) {
	return $nc(button)->getClientProperty(AquaButtonUI::BUTTON_TYPE) != nullptr;
}

bool AquaButtonUI::setButtonType($AbstractButton* b, Object$* prop) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($String, prop))) {
		$nc(b)->putClientProperty(AquaButtonUI::BUTTON_TYPE, nullptr);
		return false;
	}
	$var($String, buttonType, $cast($String, prop));
	bool iconFont = true;
	$var($AquaButtonExtendedTypes$TypeSpecifier, specifier, $AquaButtonExtendedTypes::getSpecifierByName(buttonType));
	if (specifier != nullptr) {
		$nc(b)->setBorder($(specifier->getBorder()));
		iconFont = specifier->setIconFont;
	}
	$var($Font, currentFont, $nc(b)->getFont());
	if (currentFont == nullptr || $instanceOf($UIResource, currentFont)) {
		b->setFont($($UIManager::getFont(iconFont ? $of("IconButton.font"_s) : $of("Button.font"_s))));
	}
	return true;
}

void AquaButtonUI::installListeners($AbstractButton* b) {
	$BasicButtonUI::installListeners(b);
	$var($AquaButtonUI$AquaButtonListener, listener, getAquaButtonListener(b));
	if (listener != nullptr) {
		$nc(b)->putClientProperty(this, listener);
		b->addAncestorListener(listener);
	}
	installHierListener(b);
	$AquaUtilControlSize::addSizePropertyListener(b);
}

void AquaButtonUI::installKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, $cast($BasicButtonListener, $nc(b)->getClientProperty(this)));
	if (listener != nullptr) {
		listener->installKeyboardActions(b);
	}
}

void AquaButtonUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions($cast($AbstractButton, c));
	uninstallListeners($cast($AbstractButton, c));
	uninstallDefaults($cast($AbstractButton, c));
}

void AquaButtonUI::uninstallKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, $cast($BasicButtonListener, $nc(b)->getClientProperty(this)));
	if (listener != nullptr) {
		listener->uninstallKeyboardActions(b);
	}
}

void AquaButtonUI::uninstallListeners($AbstractButton* b) {
	$BasicButtonUI::uninstallListeners(b);
	$var($AquaButtonUI$AquaButtonListener, listener, $cast($AquaButtonUI$AquaButtonListener, $nc(b)->getClientProperty(this)));
	b->putClientProperty(this, nullptr);
	if (listener != nullptr) {
		b->removeAncestorListener(listener);
	}
	uninstallHierListener(b);
	$AquaUtilControlSize::removeSizePropertyListener(b);
}

void AquaButtonUI::uninstallDefaults($AbstractButton* b) {
	$LookAndFeel::uninstallBorder(b);
	this->defaults_initialized = false;
}

$BasicButtonListener* AquaButtonUI::createButtonListener($AbstractButton* b) {
	return $new($AquaButtonUI$AquaButtonListener, this, b);
}

$AquaButtonUI$AquaButtonListener* AquaButtonUI::getAquaButtonListener($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$var($MouseMotionListenerArray, listeners, $nc(b)->getMouseMotionListeners());
	if (listeners != nullptr) {
		{
			$var($MouseMotionListenerArray, arr$, listeners);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($MouseMotionListener, listener, arr$->get(i$));
				{
					if ($instanceOf($AquaButtonUI$AquaButtonListener, listener)) {
						return $cast($AquaButtonUI$AquaButtonListener, listener);
					}
				}
			}
		}
	}
	return nullptr;
}

void AquaButtonUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Insets, i, $nc(c)->getInsets());
	int32_t var$0 = b->getWidth();
	$var($Rectangle, viewRect, $new($Rectangle, var$0, b->getHeight()));
	$var($Rectangle, iconRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	if (b->isOpaque()) {
		$nc(g)->setColor($(c->getBackground()));
		g->fillRect(viewRect->x, viewRect->y, viewRect->width, viewRect->height);
	}
	$var($AquaButtonBorder, aquaBorder, nullptr);
	if ($nc(($cast($AbstractButton, c)))->isBorderPainted()) {
		$var($Border, border, c->getBorder());
		if ($instanceOf($AquaButtonBorder, border)) {
			$assign(aquaBorder, $cast($AquaButtonBorder, border));
			$nc(aquaBorder)->paintButton(c, g, viewRect->x, viewRect->y, viewRect->width, viewRect->height);
		}
	} else {
		if (b->isOpaque()) {
			viewRect->x = $nc(i)->left - 2;
			viewRect->y = i->top - 2;
			viewRect->width = b->getWidth() - (i->right + viewRect->x) + 4;
			viewRect->height = b->getHeight() - (i->bottom + viewRect->y) + 4;
			bool var$1 = b->isContentAreaFilled();
			if (var$1 || $nc(model)->isSelected()) {
				if (model->isSelected()) {
					$nc(g)->setColor($($nc($(c->getBackground()))->darker()));
				} else {
					$nc(g)->setColor($(c->getBackground()));
				}
				$nc(g)->fillRect(viewRect->x, viewRect->y, viewRect->width, viewRect->height);
			}
		}
		bool var$2 = b->isFocusPainted();
		if (var$2 && b->hasFocus()) {
			paintFocus(g, b, viewRect, textRect, iconRect);
		}
	}
	$var($String, text, layoutAndGetText(g, b, aquaBorder, i, viewRect, iconRect, textRect));
	if (b->getIcon() != nullptr) {
		paintIcon(g, b, iconRect);
	}
	if (textRect->width == 0) {
		textRect->width = 50;
	}
	if (text != nullptr && !text->isEmpty()) {
		$init($BasicHTML);
		$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, textRect);
		} else {
			paintText(g, b, textRect, text);
		}
	}
}

$String* AquaButtonUI::layoutAndGetText($Graphics* g, $AbstractButton* b, $AquaButtonBorder* aquaBorder, $Insets* i, $Rectangle* viewRect, $Rectangle* iconRect, $Rectangle* textRect) {
	$useLocalCurrentObjectStackCache();
	$nc(viewRect)->x = $nc(i)->left;
	viewRect->y = i->top;
	viewRect->width = $nc(b)->getWidth() - (i->right + viewRect->x);
	viewRect->height = b->getHeight() - (i->bottom + viewRect->y);
	$nc(textRect)->x = (textRect->y = (textRect->width = (textRect->height = 0)));
	$nc(iconRect)->x = (iconRect->y = (iconRect->width = (iconRect->height = 0)));
	$nc(g)->setFont($(b->getFont()));
	$var($FontMetrics, fm, g->getFontMetrics());
	$var($String, originalText, b->getText());
	$var($JComponent, var$0, static_cast<$JComponent*>(b));
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, originalText);
	$var($Icon, var$3, b->getIcon());
	int32_t var$4 = b->getVerticalAlignment();
	int32_t var$5 = b->getHorizontalAlignment();
	int32_t var$6 = b->getVerticalTextPosition();
	int32_t var$7 = b->getHorizontalTextPosition();
	$var($Rectangle, var$8, viewRect);
	$var($Rectangle, var$9, iconRect);
	$var($Rectangle, var$10, textRect);
	$var($String, text, $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, originalText == nullptr ? 0 : b->getIconTextGap()));
	if (text == originalText || aquaBorder == nullptr) {
		return text;
	}
	$var($AbstractButton, var$11, b);
	int32_t var$12 = b->getWidth();
	$var($Insets, alternateContentInsets, $nc(aquaBorder)->getContentInsets(var$11, var$12, b->getHeight()));
	if (alternateContentInsets != nullptr) {
		return layoutAndGetText(g, b, nullptr, alternateContentInsets, viewRect, iconRect, textRect);
	}
	return text;
}

void AquaButtonUI::paintIcon($Graphics* g, $AbstractButton* b, $Rectangle* localIconRect) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Icon, icon, b->getIcon());
	$var($Icon, tmpIcon, nullptr);
	if (icon == nullptr) {
		return;
	}
	if (!$nc(model)->isEnabled()) {
		if (model->isSelected()) {
			$assign(tmpIcon, b->getDisabledSelectedIcon());
		} else {
			$assign(tmpIcon, b->getDisabledIcon());
		}
	} else {
		bool var$1 = model->isPressed();
		if (var$1 && model->isArmed()) {
			$assign(tmpIcon, b->getPressedIcon());
			if (tmpIcon == nullptr) {
				if ($instanceOf($ImageIcon, icon)) {
					$assign(tmpIcon, $new($ImageIcon, $($AquaUtils::generateSelectedDarkImage($($nc(($cast($ImageIcon, icon)))->getImage())))));
				}
			}
		} else {
			bool var$3 = b->isRolloverEnabled();
			if (var$3 && model->isRollover()) {
				if (model->isSelected()) {
					$assign(tmpIcon, b->getRolloverSelectedIcon());
				} else {
					$assign(tmpIcon, b->getRolloverIcon());
				}
			} else if (model->isSelected()) {
				$assign(tmpIcon, b->getSelectedIcon());
			}
		}
	}
	bool var$5 = $nc(model)->isEnabled();
	bool var$4 = var$5 && b->isFocusOwner();
	if (var$4 && $instanceOf($AquaButtonBorder$Toolbar, $(b->getBorder()))) {
		if (tmpIcon == nullptr) {
			$assign(tmpIcon, icon);
		}
		if ($instanceOf($ImageIcon, tmpIcon)) {
			$assign(tmpIcon, $AquaFocus::createFocusedIcon(tmpIcon, b, 3));
			$nc(tmpIcon)->paintIcon(b, g, $nc(localIconRect)->x - 3, localIconRect->y - 3);
			return;
		}
	}
	if (tmpIcon != nullptr) {
		$assign(icon, tmpIcon);
	}
	$nc(icon)->paintIcon(b, g, $nc(localIconRect)->x, localIconRect->y);
}

void AquaButtonUI::paintText($Graphics* g, $JComponent* c, $Rectangle* localTextRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g2d, $instanceOf($Graphics2D, g) ? $cast($Graphics2D, g) : ($Graphics2D*)nullptr);
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, fm, $nc(g)->getFontMetrics());
	int32_t mnemonicIndex = $AquaMnemonicHandler::isMnemonicHidden() ? -1 : b->getDisplayedMnemonicIndex();
	if ($nc(model)->isEnabled()) {
		g->setColor($(b->getForeground()));
	} else {
		g->setColor(this->defaultDisabledTextColor);
	}
	$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, $nc(localTextRect)->x, localTextRect->y + $nc(fm)->getAscent());
}

void AquaButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* localTextRect, $String* text) {
	paintText(g, static_cast<$JComponent*>(b), localTextRect, text);
}

void AquaButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	paint(g, b);
}

$Dimension* AquaButtonUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getPreferredSpan($View::X_AXIS);
		$nc(d)->width -= var$0 - v->getMinimumSpan($View::X_AXIS);
	}
	return d;
}

$Dimension* AquaButtonUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($Dimension, d, $BasicGraphicsUtils::getPreferredButtonSize(b, $nc(b)->getIconTextGap()));
	if (d == nullptr) {
		return nullptr;
	}
	$var($Border, border, $nc(b)->getBorder());
	if ($instanceOf($AquaButtonBorder, border)) {
		$nc(($cast($AquaButtonBorder, border)))->alterPreferredSize(d);
	}
	return d;
}

$Dimension* AquaButtonUI::getMaximumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getMaximumSpan($View::X_AXIS);
		$nc(d)->width += var$0 - v->getPreferredSpan($View::X_AXIS);
	}
	return d;
}

$AquaButtonUI$AquaHierarchyButtonListener* AquaButtonUI::getAquaHierarchyButtonListener() {
	$init(AquaButtonUI);
	return $cast($AquaButtonUI$AquaHierarchyButtonListener, $nc(AquaButtonUI::fHierListener)->get());
}

bool AquaButtonUI::shouldInstallHierListener($AbstractButton* b) {
	return ($instanceOf($JButton, b) || $instanceOf($JToggleButton, b) && !($instanceOf($AquaComboBoxButton, b)) && !($instanceOf($JCheckBox, b)) && !($instanceOf($JRadioButton, b)));
}

void AquaButtonUI::installHierListener($AbstractButton* b) {
	if (shouldInstallHierListener(b)) {
		$nc(b)->addHierarchyListener($(getAquaHierarchyButtonListener()));
	}
}

void AquaButtonUI::uninstallHierListener($AbstractButton* b) {
	if (shouldInstallHierListener(b)) {
		$nc(b)->removeHierarchyListener($(getAquaHierarchyButtonListener()));
	}
}

void clinit$AquaButtonUI($Class* class$) {
	$assignStatic(AquaButtonUI::BUTTON_TYPE, "JButton.buttonType"_s);
	$assignStatic(AquaButtonUI::SEGMENTED_BUTTON_POSITION, "JButton.segmentPosition"_s);
	$assignStatic(AquaButtonUI::buttonUI, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaButtonUI::class$));
	$load($AquaButtonUI$AquaHierarchyButtonListener);
	$assignStatic(AquaButtonUI::fHierListener, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaButtonUI$AquaHierarchyButtonListener::class$));
}

AquaButtonUI::AquaButtonUI() {
}

$Class* AquaButtonUI::load$($String* name, bool initialize) {
	$loadClass(AquaButtonUI, name, initialize, &_AquaButtonUI_ClassInfo_, clinit$AquaButtonUI, allocate$AquaButtonUI);
	return class$;
}

$Class* AquaButtonUI::class$ = nullptr;

		} // laf
	} // apple
} // com
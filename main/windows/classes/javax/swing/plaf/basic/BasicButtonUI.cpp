#include <javax/swing/plaf/basic/BasicButtonUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <javax/swing/plaf/basic/BasicButtonUI$ButtonGroupInfo.h>
#include <javax/swing/plaf/basic/BasicButtonUI$KeyHandler.h>
#include <javax/swing/plaf/basic/BasicButtonUI$SelectNextBtn.h>
#include <javax/swing/plaf/basic/BasicButtonUI$SelectPreviousBtn.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BASIC_BUTTON_UI_KEY
#undef BOTTOM
#undef CENTER
#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef FALSE
#undef OTHER
#undef TOP
#undef TRUE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef X_AXIS

using $MouseMotionListenerArray = $Array<::java::awt::event::MouseMotionListener>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;
using $BasicButtonUI$ButtonGroupInfo = ::javax::swing::plaf::basic::BasicButtonUI$ButtonGroupInfo;
using $BasicButtonUI$KeyHandler = ::javax::swing::plaf::basic::BasicButtonUI$KeyHandler;
using $BasicButtonUI$SelectNextBtn = ::javax::swing::plaf::basic::BasicButtonUI$SelectNextBtn;
using $BasicButtonUI$SelectPreviousBtn = ::javax::swing::plaf::basic::BasicButtonUI$SelectPreviousBtn;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicButtonUI_FieldInfo_[] = {
	{"defaultTextIconGap", "I", nullptr, $PROTECTED, $field(BasicButtonUI, defaultTextIconGap)},
	{"shiftOffset", "I", nullptr, $PRIVATE, $field(BasicButtonUI, shiftOffset)},
	{"defaultTextShiftOffset", "I", nullptr, $PROTECTED, $field(BasicButtonUI, defaultTextShiftOffset)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicButtonUI, propertyPrefix)},
	{"BASIC_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicButtonUI, BASIC_BUTTON_UI_KEY)},
	{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $field(BasicButtonUI, keyListener)},
	{"viewRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicButtonUI, viewRect)},
	{"textRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicButtonUI, textRect)},
	{"iconRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicButtonUI, iconRect)},
	{}
};

$MethodInfo _BasicButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicButtonUI::*)()>(&BasicButtonUI::init$))},
	{"clearTextShiftOffset", "()V", nullptr, $PROTECTED},
	{"createButtonListener", "(Ljavax/swing/AbstractButton;)Ljavax/swing/plaf/basic/BasicButtonListener;", nullptr, $PROTECTED},
	{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $method(static_cast<$KeyListener*(BasicButtonUI::*)()>(&BasicButtonUI::createKeyListener))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicButtonUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getButtonListener", "(Ljavax/swing/AbstractButton;)Ljavax/swing/plaf/basic/BasicButtonListener;", nullptr, $PRIVATE, $method(static_cast<$BasicButtonListener*(BasicButtonUI::*)($AbstractButton*)>(&BasicButtonUI::getButtonListener))},
	{"getDefaultTextIconGap", "(Ljavax/swing/AbstractButton;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getTextShiftOffset", "()I", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isValidToggleButtonObj", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicButtonUI::*)(Object$*)>(&BasicButtonUI::isValidToggleButtonObj))},
	{"layout", "(Ljavax/swing/AbstractButton;Ljava/awt/FontMetrics;II)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BasicButtonUI::*)($AbstractButton*,$FontMetrics*,int32_t,int32_t)>(&BasicButtonUI::layout))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"selectToggleButton", "(Ljava/awt/event/ActionEvent;Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicButtonUI::*)($ActionEvent*,bool)>(&BasicButtonUI::selectToggleButton))},
	{"setTextShiftOffset", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicButtonUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicButtonUI$KeyHandler", "javax.swing.plaf.basic.BasicButtonUI", "KeyHandler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicButtonUI$ButtonGroupInfo", "javax.swing.plaf.basic.BasicButtonUI", "ButtonGroupInfo", $PRIVATE},
	{"javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectNextBtn", $PRIVATE},
	{"javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn", "javax.swing.plaf.basic.BasicButtonUI", "SelectPreviousBtn", $PRIVATE},
	{}
};

$ClassInfo _BasicButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicButtonUI",
	"javax.swing.plaf.ButtonUI",
	nullptr,
	_BasicButtonUI_FieldInfo_,
	_BasicButtonUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicButtonUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicButtonUI$KeyHandler,javax.swing.plaf.basic.BasicButtonUI$ButtonGroupInfo,javax.swing.plaf.basic.BasicButtonUI$SelectNextBtn,javax.swing.plaf.basic.BasicButtonUI$SelectPreviousBtn"
};

$Object* allocate$BasicButtonUI($Class* clazz) {
	return $of($alloc(BasicButtonUI));
}

$String* BasicButtonUI::propertyPrefix = nullptr;
$Object* BasicButtonUI::BASIC_BUTTON_UI_KEY = nullptr;
$Rectangle* BasicButtonUI::viewRect = nullptr;
$Rectangle* BasicButtonUI::textRect = nullptr;
$Rectangle* BasicButtonUI::iconRect = nullptr;

void BasicButtonUI::init$() {
	$ButtonUI::init$();
	this->shiftOffset = 0;
	$set(this, keyListener, nullptr);
}

$ComponentUI* BasicButtonUI::createUI($JComponent* c) {
	$init(BasicButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(BasicButtonUI, buttonUI, $cast(BasicButtonUI, $nc(appContext)->get(BasicButtonUI::BASIC_BUTTON_UI_KEY)));
	if (buttonUI == nullptr) {
		$assign(buttonUI, $new(BasicButtonUI));
		appContext->put(BasicButtonUI::BASIC_BUTTON_UI_KEY, buttonUI);
	}
	return buttonUI;
}

$String* BasicButtonUI::getPropertyPrefix() {
	return BasicButtonUI::propertyPrefix;
}

void BasicButtonUI::installUI($JComponent* c) {
	installDefaults($cast($AbstractButton, c));
	installListeners($cast($AbstractButton, c));
	installKeyboardActions($cast($AbstractButton, c));
	$BasicHTML::updateRenderer(c, $($nc(($cast($AbstractButton, c)))->getText()));
}

void BasicButtonUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$var($String, pp, getPropertyPrefix());
	this->defaultTextShiftOffset = $UIManager::getInt($$str({pp, "textShiftOffset"_s}));
	if ($nc(b)->isContentAreaFilled()) {
		$init($Boolean);
		$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::TRUE);
	} else {
		$init($Boolean);
		$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::FALSE);
	}
	bool var$0 = $nc(b)->getMargin() == nullptr;
	if (var$0 || ($instanceOf($UIResource, $($nc(b)->getMargin())))) {
		b->setMargin($($UIManager::getInsets($$str({pp, "margin"_s}))));
	}
	$LookAndFeel::installColorsAndFont(b, $$str({pp, "background"_s}), $$str({pp, "foreground"_s}), $$str({pp, "font"_s}));
	$LookAndFeel::installBorder(b, $$str({pp, "border"_s}));
	$var($Object, rollover, $UIManager::get($$str({pp, "rollover"_s})));
	if (rollover != nullptr) {
		$LookAndFeel::installProperty(b, "rolloverEnabled"_s, rollover);
	}
	$LookAndFeel::installProperty(b, "iconTextGap"_s, $($Integer::valueOf(4)));
}

void BasicButtonUI::installListeners($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$var($BasicButtonListener, listener, createButtonListener(b));
	if (listener != nullptr) {
		$nc(b)->addMouseListener(listener);
		b->addMouseMotionListener(listener);
		b->addFocusListener(listener);
		b->addPropertyChangeListener(listener);
		b->addChangeListener(listener);
	}
	if ($instanceOf($JToggleButton, b)) {
		$set(this, keyListener, createKeyListener());
		$nc(b)->addKeyListener(this->keyListener);
		b->setFocusTraversalKeysEnabled(false);
		$nc($(b->getActionMap()))->put("Previous"_s, $$new($BasicButtonUI$SelectPreviousBtn, this));
		$nc($(b->getActionMap()))->put("Next"_s, $$new($BasicButtonUI$SelectNextBtn, this));
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->put($($KeyStroke::getKeyStroke("UP"_s)), "Previous"_s);
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->put($($KeyStroke::getKeyStroke("DOWN"_s)), "Next"_s);
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->put($($KeyStroke::getKeyStroke("LEFT"_s)), "Previous"_s);
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->put($($KeyStroke::getKeyStroke("RIGHT"_s)), "Next"_s);
	}
}

void BasicButtonUI::installKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, getButtonListener(b));
	if (listener != nullptr) {
		listener->installKeyboardActions(b);
	}
}

void BasicButtonUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions($cast($AbstractButton, c));
	uninstallListeners($cast($AbstractButton, c));
	uninstallDefaults($cast($AbstractButton, c));
	$BasicHTML::updateRenderer(c, ""_s);
}

void BasicButtonUI::uninstallKeyboardActions($AbstractButton* b) {
	$var($BasicButtonListener, listener, getButtonListener(b));
	if (listener != nullptr) {
		listener->uninstallKeyboardActions(b);
	}
}

void BasicButtonUI::uninstallListeners($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$var($BasicButtonListener, listener, getButtonListener(b));
	if (listener != nullptr) {
		$nc(b)->removeMouseListener(listener);
		b->removeMouseMotionListener(listener);
		b->removeFocusListener(listener);
		b->removeChangeListener(listener);
		b->removePropertyChangeListener(listener);
	}
	if ($instanceOf($JToggleButton, b)) {
		$nc($($nc(b)->getActionMap()))->remove("Previous"_s);
		$nc($(b->getActionMap()))->remove("Next"_s);
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->remove($($KeyStroke::getKeyStroke("UP"_s)));
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->remove($($KeyStroke::getKeyStroke("DOWN"_s)));
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->remove($($KeyStroke::getKeyStroke("LEFT"_s)));
		$nc($(b->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)))->remove($($KeyStroke::getKeyStroke("RIGHT"_s)));
		if (this->keyListener != nullptr) {
			b->removeKeyListener(this->keyListener);
			$set(this, keyListener, nullptr);
		}
	}
}

void BasicButtonUI::uninstallDefaults($AbstractButton* b) {
	$LookAndFeel::uninstallBorder(b);
}

$BasicButtonListener* BasicButtonUI::createButtonListener($AbstractButton* b) {
	return $new($BasicButtonListener, b);
}

int32_t BasicButtonUI::getDefaultTextIconGap($AbstractButton* b) {
	return this->defaultTextIconGap;
}

void BasicButtonUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($AbstractButton, var$0, b);
	$var($FontMetrics, var$1, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(b), g));
	int32_t var$2 = b->getWidth();
	$var($String, text, layout(var$0, var$1, var$2, b->getHeight()));
	clearTextShiftOffset();
	bool var$3 = $nc(model)->isArmed();
	if (var$3 && model->isPressed()) {
		paintButtonPressed(g, b);
	}
	if (b->getIcon() != nullptr) {
		paintIcon(g, c, BasicButtonUI::iconRect);
	}
	if (text != nullptr && !text->isEmpty()) {
		$init($BasicHTML);
		$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, BasicButtonUI::textRect);
		} else {
			paintText(g, b, BasicButtonUI::textRect, text);
		}
	}
	bool var$4 = b->isFocusPainted();
	if (var$4 && b->hasFocus()) {
		paintFocus(g, b, BasicButtonUI::viewRect, BasicButtonUI::textRect, BasicButtonUI::iconRect);
	}
}

void BasicButtonUI::paintIcon($Graphics* g, $JComponent* c, $Rectangle* iconRect) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Icon, icon, b->getIcon());
	$var($Icon, tmpIcon, nullptr);
	if (icon == nullptr) {
		return;
	}
	$var($Icon, selectedIcon, nullptr);
	if ($nc(model)->isSelected()) {
		$assign(selectedIcon, b->getSelectedIcon());
		if (selectedIcon != nullptr) {
			$assign(icon, selectedIcon);
		}
	}
	if (!$nc(model)->isEnabled()) {
		if (model->isSelected()) {
			$assign(tmpIcon, b->getDisabledSelectedIcon());
			if (tmpIcon == nullptr) {
				$assign(tmpIcon, selectedIcon);
			}
		}
		if (tmpIcon == nullptr) {
			$assign(tmpIcon, b->getDisabledIcon());
		}
	} else {
		bool var$1 = model->isPressed();
		if (var$1 && model->isArmed()) {
			$assign(tmpIcon, b->getPressedIcon());
			if (tmpIcon != nullptr) {
				clearTextShiftOffset();
			}
		} else {
			bool var$3 = b->isRolloverEnabled();
			if (var$3 && model->isRollover()) {
				if (model->isSelected()) {
					$assign(tmpIcon, b->getRolloverSelectedIcon());
					if (tmpIcon == nullptr) {
						$assign(tmpIcon, selectedIcon);
					}
				}
				if (tmpIcon == nullptr) {
					$assign(tmpIcon, b->getRolloverIcon());
				}
			}
		}
	}
	if (tmpIcon != nullptr) {
		$assign(icon, tmpIcon);
	}
	bool var$4 = $nc(model)->isPressed();
	if (var$4 && model->isArmed()) {
		$var($Component, var$5, static_cast<$Component*>(c));
		$var($Graphics, var$6, g);
		int32_t var$7 = $nc(iconRect)->x + getTextShiftOffset();
		$nc(icon)->paintIcon(var$5, var$6, var$7, iconRect->y + getTextShiftOffset());
	} else {
		$nc(icon)->paintIcon(c, g, $nc(iconRect)->x, iconRect->y);
	}
}

void BasicButtonUI::paintText($Graphics* g, $JComponent* c, $Rectangle* textRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g));
	int32_t mnemonicIndex = b->getDisplayedMnemonicIndex();
	if ($nc(model)->isEnabled()) {
		$nc(g)->setColor($(b->getForeground()));
		$var($JComponent, var$0, c);
		$var($Graphics, var$1, g);
		$var($String, var$2, text);
		int32_t var$3 = mnemonicIndex;
		int32_t var$4 = $nc(textRect)->x + getTextShiftOffset();
		int32_t var$5 = textRect->y + $nc(fm)->getAscent();
		$SwingUtilities2::drawStringUnderlineCharAt(var$0, var$1, var$2, var$3, var$4, var$5 + getTextShiftOffset());
	} else {
		$nc(g)->setColor($($nc($(b->getBackground()))->brighter()));
		$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
		g->setColor($($nc($(b->getBackground()))->darker()));
		$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, $nc(textRect)->x - 1, textRect->y + $nc(fm)->getAscent() - 1);
	}
}

void BasicButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	paintText(g, static_cast<$JComponent*>(b), textRect, text);
}

void BasicButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
}

void BasicButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
}

void BasicButtonUI::clearTextShiftOffset() {
	this->shiftOffset = 0;
}

void BasicButtonUI::setTextShiftOffset() {
	this->shiftOffset = this->defaultTextShiftOffset;
}

int32_t BasicButtonUI::getTextShiftOffset() {
	return this->shiftOffset;
}

$Dimension* BasicButtonUI::getMinimumSize($JComponent* c) {
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

$Dimension* BasicButtonUI::getPreferredSize($JComponent* c) {
	$var($AbstractButton, b, $cast($AbstractButton, c));
	return $BasicGraphicsUtils::getPreferredButtonSize(b, $nc(b)->getIconTextGap());
}

$Dimension* BasicButtonUI::getMaximumSize($JComponent* c) {
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

int32_t BasicButtonUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$ButtonUI::getBaseline(c, width, height);
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($String, text, $nc(b)->getText());
	if (text == nullptr || $nc(text)->isEmpty()) {
		return -1;
	}
	$var($FontMetrics, fm, b->getFontMetrics($(b->getFont())));
	layout(b, fm, width, height);
	return $BasicHTML::getBaseline(b, $nc(BasicButtonUI::textRect)->y, $nc(fm)->getAscent(), $nc(BasicButtonUI::textRect)->width, $nc(BasicButtonUI::textRect)->height);
}

$Component$BaselineResizeBehavior* BasicButtonUI::getBaselineResizeBehavior($JComponent* c) {
	$ButtonUI::getBaselineResizeBehavior(c);
	$init($BasicHTML);
	if ($nc(c)->getClientProperty($BasicHTML::propertyKey) != nullptr) {
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::OTHER;
	}
	switch ($nc(($cast($AbstractButton, c)))->getVerticalAlignment()) {
	case $AbstractButton::TOP:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
		}
	case $AbstractButton::BOTTOM:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
		}
	case $AbstractButton::CENTER:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CENTER_OFFSET;
		}
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

$String* BasicButtonUI::layout($AbstractButton* b, $FontMetrics* fm, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, i, $nc(b)->getInsets());
	$nc(BasicButtonUI::viewRect)->x = $nc(i)->left;
	$nc(BasicButtonUI::viewRect)->y = i->top;
	$nc(BasicButtonUI::viewRect)->width = width - (i->right + $nc(BasicButtonUI::viewRect)->x);
	$nc(BasicButtonUI::viewRect)->height = height - (i->bottom + $nc(BasicButtonUI::viewRect)->y);
	$nc(BasicButtonUI::textRect)->x = ($nc(BasicButtonUI::textRect)->y = ($nc(BasicButtonUI::textRect)->width = ($nc(BasicButtonUI::textRect)->height = 0)));
	$nc(BasicButtonUI::iconRect)->x = ($nc(BasicButtonUI::iconRect)->y = ($nc(BasicButtonUI::iconRect)->width = ($nc(BasicButtonUI::iconRect)->height = 0)));
	$var($JComponent, var$0, static_cast<$JComponent*>(b));
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, b->getText());
	$var($Icon, var$3, b->getIcon());
	int32_t var$4 = b->getVerticalAlignment();
	int32_t var$5 = b->getHorizontalAlignment();
	int32_t var$6 = b->getVerticalTextPosition();
	int32_t var$7 = b->getHorizontalTextPosition();
	$var($Rectangle, var$8, BasicButtonUI::viewRect);
	$var($Rectangle, var$9, BasicButtonUI::iconRect);
	$var($Rectangle, var$10, BasicButtonUI::textRect);
	return $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, b->getText() == nullptr ? 0 : b->getIconTextGap());
}

$BasicButtonListener* BasicButtonUI::getButtonListener($AbstractButton* b) {
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
					if ($instanceOf($BasicButtonListener, listener)) {
						return $cast($BasicButtonListener, listener);
					}
				}
			}
		}
	}
	return nullptr;
}

$KeyListener* BasicButtonUI::createKeyListener() {
	if (this->keyListener == nullptr) {
		$set(this, keyListener, $new($BasicButtonUI$KeyHandler, this));
	}
	return this->keyListener;
}

bool BasicButtonUI::isValidToggleButtonObj(Object$* obj) {
	bool var$0 = ($instanceOf($JToggleButton, obj)) && $nc(($cast($JToggleButton, obj)))->isVisible();
	return (var$0 && ($cast($JToggleButton, obj))->isEnabled());
}

void BasicButtonUI::selectToggleButton($ActionEvent* event, bool next) {
	$useLocalCurrentObjectStackCache();
	$var($Object, eventSrc, $nc(event)->getSource());
	if (!isValidToggleButtonObj(eventSrc)) {
		return;
	}
	$var($BasicButtonUI$ButtonGroupInfo, btnGroupInfo, $new($BasicButtonUI$ButtonGroupInfo, this, $cast($JToggleButton, eventSrc)));
	btnGroupInfo->selectNewButton(next);
}

void clinit$BasicButtonUI($Class* class$) {
	$assignStatic(BasicButtonUI::propertyPrefix, "Button."_s);
	$assignStatic(BasicButtonUI::BASIC_BUTTON_UI_KEY, $new($Object));
	$assignStatic(BasicButtonUI::viewRect, $new($Rectangle));
	$assignStatic(BasicButtonUI::textRect, $new($Rectangle));
	$assignStatic(BasicButtonUI::iconRect, $new($Rectangle));
}

BasicButtonUI::BasicButtonUI() {
}

$Class* BasicButtonUI::load$($String* name, bool initialize) {
	$loadClass(BasicButtonUI, name, initialize, &_BasicButtonUI_ClassInfo_, clinit$BasicButtonUI, allocate$BasicButtonUI);
	return class$;
}

$Class* BasicButtonUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
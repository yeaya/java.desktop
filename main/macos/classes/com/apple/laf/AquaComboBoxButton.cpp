#include <com/apple/laf/AquaComboBoxButton.h>

#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>
#include <apple/laf/JRSUIConstants$AlignmentVertical.h>
#include <apple/laf/JRSUIConstants$ArrowsOnly.h>
#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$IndicatorOnly.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaComboBoxButton$1.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef ACTIVE
#undef BUTTON_COMBO_BOX
#undef BUTTON_POP_DOWN
#undef BUTTON_POP_DOWN_SQUARE
#undef BUTTON_POP_UP
#undef BUTTON_POP_UP_SQUARE
#undef CENTER
#undef DISABLED
#undef INACTIVE
#undef LEFT
#undef NO
#undef PRESSED
#undef REGULAR
#undef RIGHT
#undef YES

using $JRSUIConstants$AlignmentHorizontal = ::apple::laf::JRSUIConstants$AlignmentHorizontal;
using $JRSUIConstants$AlignmentVertical = ::apple::laf::JRSUIConstants$AlignmentVertical;
using $JRSUIConstants$ArrowsOnly = ::apple::laf::JRSUIConstants$ArrowsOnly;
using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$IndicatorOnly = ::apple::laf::JRSUIConstants$IndicatorOnly;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaComboBoxButton$1 = ::com::apple::laf::AquaComboBoxButton$1;
using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxButton_FieldInfo_[] = {
	{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PROTECTED | $FINAL, $field(AquaComboBoxButton, comboBox)},
	{"list", "Ljavax/swing/JList;", "Ljavax/swing/JList<*>;", $PROTECTED | $FINAL, $field(AquaComboBoxButton, list$)},
	{"rendererPane", "Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED | $FINAL, $field(AquaComboBoxButton, rendererPane)},
	{"ui", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $PROTECTED | $FINAL, $field(AquaComboBoxButton, ui)},
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $PROTECTED | $FINAL, $field(AquaComboBoxButton, painter)},
	{"isPopDown", "Z", nullptr, 0, $field(AquaComboBoxButton, isPopDown)},
	{"isSquare", "Z", nullptr, 0, $field(AquaComboBoxButton, isSquare)},
	{}
};

$MethodInfo _AquaComboBoxButton_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;Ljavax/swing/JComboBox;Ljavax/swing/CellRendererPane;Ljavax/swing/JList;)V", "(Lcom/apple/laf/AquaComboBoxUI;Ljavax/swing/JComboBox<Ljava/lang/Object;>;Ljavax/swing/CellRendererPane;Ljavax/swing/JList<*>;)V", $PROTECTED, $method(static_cast<void(AquaComboBoxButton::*)($AquaComboBoxUI*,$JComboBox*,$CellRendererPane*,$JList*)>(&AquaComboBoxButton::init$))},
	{"doRendererPaint", "(Ljava/awt/Graphics;Ljavax/swing/ButtonModel;ZLjava/awt/Insets;IIII)V", nullptr, $PROTECTED},
	{"getState", "(Ljavax/swing/ButtonModel;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setIsPopDown", "(Z)V", nullptr, $PROTECTED},
	{"setIsSquare", "(Z)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaComboBoxButton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxButton_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxButton",
	"javax.swing.JButton",
	nullptr,
	_AquaComboBoxButton_FieldInfo_,
	_AquaComboBoxButton_MethodInfo_,
	nullptr,
	nullptr,
	_AquaComboBoxButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxButton$1"
};

$Object* allocate$AquaComboBoxButton($Class* clazz) {
	return $of($alloc(AquaComboBoxButton));
}

void AquaComboBoxButton::init$($AquaComboBoxUI* ui, $JComboBox* comboBox, $CellRendererPane* rendererPane, $JList* list) {
	$useLocalCurrentObjectStackCache();
	$JButton::init$(""_s);
	$set(this, painter, $AquaPainter::create($($JRSUIState::getInstance())));
	putClientProperty("JButton.buttonType"_s, "comboboxInternal"_s);
	$set(this, ui, ui);
	$set(this, comboBox, comboBox);
	$set(this, rendererPane, rendererPane);
	$set(this, list$, list);
	setModel($$new($AquaComboBoxButton$1, this));
	setEnabled($nc(comboBox)->isEnabled());
}

bool AquaComboBoxButton::isEnabled() {
	return this->comboBox == nullptr ? true : $nc(this->comboBox)->isEnabled();
}

bool AquaComboBoxButton::isFocusable() {
	return false;
}

void AquaComboBoxButton::setIsPopDown(bool isPopDown) {
	this->isPopDown = isPopDown;
	repaint();
}

void AquaComboBoxButton::setIsSquare(bool isSquare) {
	this->isSquare = isSquare;
	repaint();
}

$JRSUIConstants$State* AquaComboBoxButton::getState($ButtonModel* buttonModel) {
	if (!$nc(this->comboBox)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if (!$AquaFocusHandler::isActive(this->comboBox)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if ($nc(buttonModel)->isArmed()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

void AquaComboBoxButton::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	bool editable = $nc(this->comboBox)->isEditable();
	int32_t top = 0;
	int32_t left = 0;
	int32_t width = getWidth();
	int32_t height = getHeight();
	if ($nc(this->comboBox)->isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		g->fillRect(0, 0, width, height);
	}
	$var($JRSUIConstants$Size, size, $AquaUtilControlSize::getUserSizeFrom(this->comboBox));
	$init($JRSUIConstants$Size);
	$nc($nc(this->painter)->state)->set(size == nullptr ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Size::REGULAR) : static_cast<$JRSUIConstants$Property*>(size));
	$var($ButtonModel, buttonModel, getModel());
	$nc($nc(this->painter)->state)->set($(getState(buttonModel)));
	$init($JRSUIConstants$AlignmentVertical);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentVertical::CENTER);
	if ($AquaComboBoxUI::isTableCellEditor(this->comboBox)) {
		$init($JRSUIConstants$AlignmentHorizontal);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentHorizontal::RIGHT);
		$init($JRSUIConstants$Widget);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_POP_UP);
		$init($JRSUIConstants$ArrowsOnly);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$ArrowsOnly::YES);
		$nc(this->painter)->paint(g, this, left, top, width, height);
		doRendererPaint(g, buttonModel, editable, $(getInsets()), left, top, width, height);
		return;
	}
	$init($JRSUIConstants$AlignmentHorizontal);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentHorizontal::CENTER);
	$var($Insets, insets, getInsets());
	if (!editable) {
		top += $nc(insets)->top;
		left += insets->left;
		width -= insets->left + insets->right;
		height -= insets->top + insets->bottom;
	}
	if (height <= 0 || width <= 0) {
		return;
	}
	bool hasFocus = $nc(this->comboBox)->hasFocus();
	if (editable) {
		$init($JRSUIConstants$Widget);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::BUTTON_COMBO_BOX);
		$init($JRSUIConstants$IndicatorOnly);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$IndicatorOnly::YES);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentHorizontal::LEFT);
		hasFocus |= $nc($($nc($($nc(this->comboBox)->getEditor()))->getEditorComponent()))->hasFocus();
	} else {
		$init($JRSUIConstants$IndicatorOnly);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$IndicatorOnly::NO);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentHorizontal::CENTER);
		if (this->isPopDown) {
			$init($JRSUIConstants$Widget);
			$nc($nc(this->painter)->state)->set(this->isSquare ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Widget::BUTTON_POP_DOWN_SQUARE) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Widget::BUTTON_POP_DOWN));
		} else {
			$init($JRSUIConstants$Widget);
			$nc($nc(this->painter)->state)->set(this->isSquare ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Widget::BUTTON_POP_UP_SQUARE) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Widget::BUTTON_POP_UP));
		}
	}
	$init($JRSUIConstants$Focused);
	$nc($nc(this->painter)->state)->set(hasFocus ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::NO));
	if (this->isSquare) {
		$nc(this->painter)->paint(g, this->comboBox, left + 2, top - 1, width - 4, height);
	} else {
		$nc(this->painter)->paint(g, this->comboBox, left, top, width, height);
	}
	if (!editable && this->comboBox != nullptr) {
		doRendererPaint(g, buttonModel, editable, insets, left, top, width, height);
	}
}

void AquaComboBoxButton::doRendererPaint($Graphics* g, $ButtonModel* buttonModel, bool editable, $Insets* insets, int32_t left, int32_t top, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
	$var($Component, c, $nc(renderer)->getListCellRendererComponent(this->list$, $($nc(this->comboBox)->getSelectedItem()), -1, false, false));
	if (!editable && !$AquaComboBoxUI::isTableCellEditor(this->comboBox)) {
		int32_t indentLeft = 10;
		int32_t buttonWidth = 24;
		top += 1;
		height -= 4;
		left += indentLeft;
		width -= (indentLeft + buttonWidth);
	}
	$nc(c)->setFont($($nc(this->rendererPane)->getFont()));
	bool var$0 = $nc(buttonModel)->isArmed();
	if (var$0 && buttonModel->isPressed()) {
		if (isOpaque()) {
			c->setBackground($($UIManager::getColor("Button.select"_s)));
		}
		c->setForeground($($nc(this->comboBox)->getForeground()));
	} else if (!$nc(this->comboBox)->isEnabled()) {
		if (isOpaque()) {
			c->setBackground($($UIManager::getColor("ComboBox.disabledBackground"_s)));
		}
		c->setForeground($($UIManager::getColor("ComboBox.disabledForeground"_s)));
	} else {
		c->setForeground($($nc(this->comboBox)->getForeground()));
		c->setBackground($($nc(this->comboBox)->getBackground()));
	}
	bool shouldValidate = false;
	if ($instanceOf($JPanel, c)) {
		shouldValidate = true;
	}
	int32_t iconWidth = 0;
	int32_t cWidth = width - ($nc(insets)->right + iconWidth);
	{
		top = height / 2 - 8;
		height = 19;
	}
	$var($Color, bg, c->getBackground());
	bool inhibitBackground = $instanceOf($UIResource, bg);
	if (inhibitBackground) {
		c->setBackground($$new($Color, 0, 0, 0, 0));
	}
	$nc(this->rendererPane)->paintComponent(g, c, this, left, top, cWidth, height, shouldValidate);
	if (inhibitBackground) {
		c->setBackground(bg);
	}
	$nc(this->rendererPane)->remove(c);
}

AquaComboBoxButton::AquaComboBoxButton() {
}

$Class* AquaComboBoxButton::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxButton, name, initialize, &_AquaComboBoxButton_ClassInfo_, allocate$AquaComboBoxButton);
	return class$;
}

$Class* AquaComboBoxButton::class$ = nullptr;

		} // laf
	} // apple
} // com
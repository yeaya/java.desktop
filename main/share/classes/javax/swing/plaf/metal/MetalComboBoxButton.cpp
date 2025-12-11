#include <javax/swing/plaf/metal/MetalComboBoxButton.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalComboBoxButton$1.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $UIManager = ::javax::swing::UIManager;
using $MetalComboBoxButton$1 = ::javax::swing::plaf::metal::MetalComboBoxButton$1;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalComboBoxButton_FieldInfo_[] = {
	{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PROTECTED, $field(MetalComboBoxButton, comboBox)},
	{"listBox", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/lang/Object;>;", $PROTECTED, $field(MetalComboBoxButton, listBox)},
	{"rendererPane", "Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED, $field(MetalComboBoxButton, rendererPane)},
	{"comboIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(MetalComboBoxButton, comboIcon)},
	{"iconOnly", "Z", nullptr, $PROTECTED, $field(MetalComboBoxButton, iconOnly)},
	{}
};

$MethodInfo _MetalComboBoxButton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalComboBoxButton::*)()>(&MetalComboBoxButton::init$))},
	{"<init>", "(Ljavax/swing/JComboBox;Ljavax/swing/Icon;Ljavax/swing/CellRendererPane;Ljavax/swing/JList;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;Ljavax/swing/Icon;Ljavax/swing/CellRendererPane;Ljavax/swing/JList<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(MetalComboBoxButton::*)($JComboBox*,$Icon*,$CellRendererPane*,$JList*)>(&MetalComboBoxButton::init$))},
	{"<init>", "(Ljavax/swing/JComboBox;Ljavax/swing/Icon;ZLjavax/swing/CellRendererPane;Ljavax/swing/JList;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;Ljavax/swing/Icon;ZLjavax/swing/CellRendererPane;Ljavax/swing/JList<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(MetalComboBoxButton::*)($JComboBox*,$Icon*,bool,$CellRendererPane*,$JList*)>(&MetalComboBoxButton::init$))},
	{"getComboBox", "()Ljavax/swing/JComboBox;", "()Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PUBLIC | $FINAL, $method(static_cast<$JComboBox*(MetalComboBoxButton::*)()>(&MetalComboBoxButton::getComboBox))},
	{"getComboIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Icon*(MetalComboBoxButton::*)()>(&MetalComboBoxButton::getComboIcon))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"isIconOnly", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(MetalComboBoxButton::*)()>(&MetalComboBoxButton::isIconOnly))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setComboBox", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC | $FINAL, $method(static_cast<void(MetalComboBoxButton::*)($JComboBox*)>(&MetalComboBoxButton::setComboBox))},
	{"setComboIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(MetalComboBoxButton::*)($Icon*)>(&MetalComboBoxButton::setComboIcon))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setIconOnly", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(MetalComboBoxButton::*)(bool)>(&MetalComboBoxButton::setIconOnly))},
	{}
};

$InnerClassInfo _MetalComboBoxButton_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalComboBoxButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxButton",
	"javax.swing.JButton",
	nullptr,
	_MetalComboBoxButton_FieldInfo_,
	_MetalComboBoxButton_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxButton$1"
};

$Object* allocate$MetalComboBoxButton($Class* clazz) {
	return $of($alloc(MetalComboBoxButton));
}

$JComboBox* MetalComboBoxButton::getComboBox() {
	return this->comboBox;
}

void MetalComboBoxButton::setComboBox($JComboBox* cb) {
	$set(this, comboBox, cb);
}

$Icon* MetalComboBoxButton::getComboIcon() {
	return this->comboIcon;
}

void MetalComboBoxButton::setComboIcon($Icon* i) {
	$set(this, comboIcon, i);
}

bool MetalComboBoxButton::isIconOnly() {
	return this->iconOnly;
}

void MetalComboBoxButton::setIconOnly(bool isIconOnly) {
	this->iconOnly = isIconOnly;
}

void MetalComboBoxButton::init$() {
	$JButton::init$(""_s);
	this->iconOnly = false;
	$var($DefaultButtonModel, model, $new($MetalComboBoxButton$1, this));
	setModel(model);
}

void MetalComboBoxButton::init$($JComboBox* cb, $Icon* i, $CellRendererPane* pane, $JList* list) {
	MetalComboBoxButton::init$();
	$set(this, comboBox, cb);
	$set(this, comboIcon, i);
	$set(this, rendererPane, pane);
	$set(this, listBox, list);
	setEnabled($nc(this->comboBox)->isEnabled());
}

void MetalComboBoxButton::init$($JComboBox* cb, $Icon* i, bool onlyIcon, $CellRendererPane* pane, $JList* list) {
	MetalComboBoxButton::init$(cb, i, pane, list);
	this->iconOnly = onlyIcon;
}

bool MetalComboBoxButton::isFocusTraversable() {
	return false;
}

void MetalComboBoxButton::setEnabled(bool enabled) {
	$useLocalCurrentObjectStackCache();
	$JButton::setEnabled(enabled);
	if (enabled) {
		setBackground($($nc(this->comboBox)->getBackground()));
		setForeground($($nc(this->comboBox)->getForeground()));
	} else {
		setBackground($($UIManager::getColor("ComboBox.disabledBackground"_s)));
		setForeground($($UIManager::getColor("ComboBox.disabledForeground"_s)));
	}
}

void MetalComboBoxButton::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $MetalUtils::isLeftToRight(this->comboBox);
	$JButton::paintComponent(g);
	$var($Insets, insets, getInsets());
	int32_t width = getWidth() - ($nc(insets)->left + insets->right);
	int32_t height = getHeight() - (insets->top + insets->bottom);
	if (height <= 0 || width <= 0) {
		return;
	}
	int32_t left = insets->left;
	int32_t top = insets->top;
	int32_t right = left + (width - 1);
	int32_t bottom = top + (height - 1);
	int32_t iconWidth = 0;
	int32_t iconLeft = (leftToRight) ? right : left;
	if (this->comboIcon != nullptr) {
		iconWidth = $nc(this->comboIcon)->getIconWidth();
		int32_t iconHeight = $nc(this->comboIcon)->getIconHeight();
		int32_t iconTop = 0;
		if (this->iconOnly) {
			iconLeft = (getWidth() / 2) - (iconWidth / 2);
			iconTop = (getHeight() / 2) - (iconHeight / 2);
		} else {
			if (leftToRight) {
				iconLeft = (left + (width - 1)) - iconWidth;
			} else {
				iconLeft = left;
			}
			iconTop = (top + ((bottom - top) / 2)) - (iconHeight / 2);
		}
		$nc(this->comboIcon)->paintIcon(this, g, iconLeft, iconTop);
		bool var$0 = $nc(this->comboBox)->hasFocus();
		if (var$0) {
			bool var$1 = !$MetalLookAndFeel::usingOcean();
			var$0 = (var$1 || $nc(this->comboBox)->isEditable());
		}
		if (var$0) {
			$nc(g)->setColor($($MetalLookAndFeel::getFocusColor()));
			g->drawRect(left - 1, top - 1, width + 3, height + 1);
		}
	}
	if ($MetalLookAndFeel::usingOcean()) {
		return;
	}
	if (!this->iconOnly && this->comboBox != nullptr) {
		$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
		$var($Component, c, nullptr);
		bool renderPressed = $nc($(getModel()))->isPressed();
		$assign(c, $nc(renderer)->getListCellRendererComponent(this->listBox, $($nc(this->comboBox)->getSelectedItem()), -1, renderPressed, false));
		$nc(c)->setFont($($nc(this->rendererPane)->getFont()));
		bool var$2 = $nc(this->model)->isArmed();
		if (var$2 && $nc(this->model)->isPressed()) {
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
		int32_t cWidth = width - (insets->right + iconWidth);
		bool shouldValidate = false;
		if ($instanceOf($JPanel, c)) {
			shouldValidate = true;
		}
		if (leftToRight) {
			$nc(this->rendererPane)->paintComponent(g, c, this, left, top, cWidth, height, shouldValidate);
		} else {
			$nc(this->rendererPane)->paintComponent(g, c, this, left + iconWidth, top, cWidth, height, shouldValidate);
		}
		$nc(this->rendererPane)->remove(c);
	}
}

$Dimension* MetalComboBoxButton::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, ret, $new($Dimension));
	$var($Insets, insets, getInsets());
	ret->width = $nc(insets)->left + $nc($(getComboIcon()))->getIconWidth() + insets->right;
	ret->height = insets->bottom + $nc($(getComboIcon()))->getIconHeight() + insets->top;
	return ret;
}

MetalComboBoxButton::MetalComboBoxButton() {
}

$Class* MetalComboBoxButton::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxButton, name, initialize, &_MetalComboBoxButton_ClassInfo_, allocate$MetalComboBoxButton);
	return class$;
}

$Class* MetalComboBoxButton::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
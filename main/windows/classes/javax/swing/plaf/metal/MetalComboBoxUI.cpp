#include <javax/swing/plaf/metal/MetalComboBoxUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalComboBoxButton.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>
#include <javax/swing/plaf/metal/MetalComboBoxIcon.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI$MetalComboBoxLayoutManager.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI$MetalPropertyChangeListener.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef NO_BUTTON_ROLLOVER
#undef TRUE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;
using $BasicComboBoxUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalComboBoxButton = ::javax::swing::plaf::metal::MetalComboBoxButton;
using $MetalComboBoxEditor = ::javax::swing::plaf::metal::MetalComboBoxEditor;
using $MetalComboBoxEditor$UIResource = ::javax::swing::plaf::metal::MetalComboBoxEditor$UIResource;
using $MetalComboBoxIcon = ::javax::swing::plaf::metal::MetalComboBoxIcon;
using $MetalComboBoxUI$MetalComboBoxLayoutManager = ::javax::swing::plaf::metal::MetalComboBoxUI$MetalComboBoxLayoutManager;
using $MetalComboBoxUI$MetalPropertyChangeListener = ::javax::swing::plaf::metal::MetalComboBoxUI$MetalPropertyChangeListener;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$CompoundAttribute _MetalComboBoxUI_MethodAnnotations_editablePropertyChanged17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MetalComboBoxUI_MethodAnnotations_removeListeners24[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _MetalComboBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalComboBoxUI::*)()>(&MetalComboBoxUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$400))},
	{"access$500", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$500))},
	{"access$600", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$600))},
	{"access$700", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$700))},
	{"access$800", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(MetalComboBoxUI*)>(&MetalComboBoxUI::access$800))},
	{"configureEditor", "()V", nullptr, $PUBLIC},
	{"createArrowButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createEditor", "()Ljavax/swing/ComboBoxEditor;", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalComboBoxUI::createUI))},
	{"editablePropertyChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _MetalComboBoxUI_MethodAnnotations_editablePropertyChanged17},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"layoutComboBox", "(Ljava/awt/Container;Ljavax/swing/plaf/metal/MetalComboBoxUI$MetalComboBoxLayoutManager;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintCurrentValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"paintCurrentValueBackground", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"removeListeners", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _MetalComboBoxUI_MethodAnnotations_removeListeners24},
	{"unconfigureEditor", "()V", nullptr, $PUBLIC},
	{"updateButtonForOcean", "(Ljavax/swing/JButton;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalComboBoxUI::*)($JButton*)>(&MetalComboBoxUI::updateButtonForOcean))},
	{}
};

$InnerClassInfo _MetalComboBoxUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboPopup", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalComboPopup", $PUBLIC},
	{"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboBoxLayoutManager", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalComboBoxLayoutManager", $PUBLIC},
	{"javax.swing.plaf.metal.MetalComboBoxUI$MetalPropertyChangeListener", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalPropertyChangeListener", $PUBLIC},
	{}
};

$ClassInfo _MetalComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxUI",
	"javax.swing.plaf.basic.BasicComboBoxUI",
	nullptr,
	nullptr,
	_MetalComboBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboPopup,javax.swing.plaf.metal.MetalComboBoxUI$MetalComboBoxLayoutManager,javax.swing.plaf.metal.MetalComboBoxUI$MetalPropertyChangeListener"
};

$Object* allocate$MetalComboBoxUI($Class* clazz) {
	return $of($alloc(MetalComboBoxUI));
}

$JList* MetalComboBoxUI::access$800(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->listBox;
}

$JButton* MetalComboBoxUI::access$700(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JList* MetalComboBoxUI::access$600(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->listBox;
}

$JButton* MetalComboBoxUI::access$500(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* MetalComboBoxUI::access$400(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JComboBox* MetalComboBoxUI::access$300(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* MetalComboBoxUI::access$200(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->comboBox;
}

$JButton* MetalComboBoxUI::access$100(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* MetalComboBoxUI::access$000(MetalComboBoxUI* x0) {
	$init(MetalComboBoxUI);
	return $nc(x0)->arrowButton;
}

void MetalComboBoxUI::init$() {
	$BasicComboBoxUI::init$();
}

$ComponentUI* MetalComboBoxUI::createUI($JComponent* c) {
	$init(MetalComboBoxUI);
	return $new(MetalComboBoxUI);
}

void MetalComboBoxUI::paint($Graphics* g, $JComponent* c) {
	if ($MetalLookAndFeel::usingOcean()) {
		$BasicComboBoxUI::paint(g, c);
	}
}

void MetalComboBoxUI::paintCurrentValue($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	if ($MetalLookAndFeel::usingOcean()) {
		$nc(bounds)->x += 2;
		bounds->width -= 3;
		if (this->arrowButton != nullptr) {
			$var($Insets, buttonInsets, $nc(this->arrowButton)->getInsets());
			bounds->y += $nc(buttonInsets)->top;
			bounds->height -= (buttonInsets->top + buttonInsets->bottom);
		} else {
			bounds->y += 2;
			bounds->height -= 4;
		}
		$BasicComboBoxUI::paintCurrentValue(g, bounds, hasFocus);
	} else if (g == nullptr || bounds == nullptr) {
		$throwNew($NullPointerException, "Must supply a non-null Graphics and Rectangle"_s);
	}
}

void MetalComboBoxUI::paintCurrentValueBackground($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	if ($MetalLookAndFeel::usingOcean()) {
		$nc(g)->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		g->drawRect($nc(bounds)->x, bounds->y, bounds->width, bounds->height - 1);
		g->setColor($($MetalLookAndFeel::getControlShadow()));
		g->drawRect($nc(bounds)->x + 1, bounds->y + 1, bounds->width - 2, bounds->height - 3);
		if (hasFocus && !isPopupVisible(this->comboBox) && this->arrowButton != nullptr) {
			g->setColor($($nc(this->listBox)->getSelectionBackground()));
			$var($Insets, buttonInsets, $nc(this->arrowButton)->getInsets());
			if ($nc(buttonInsets)->top > 2) {
				g->fillRect($nc(bounds)->x + 2, bounds->y + 2, bounds->width - 3, buttonInsets->top - 2);
			}
			if ($nc(buttonInsets)->bottom > 2) {
				g->fillRect($nc(bounds)->x + 2, bounds->y + bounds->height - buttonInsets->bottom, bounds->width - 3, buttonInsets->bottom - 2);
			}
		}
	} else if (g == nullptr || bounds == nullptr) {
		$throwNew($NullPointerException, "Must supply a non-null Graphics and Rectangle"_s);
	}
}

int32_t MetalComboBoxUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	int32_t baseline = 0;
	if ($MetalLookAndFeel::usingOcean() && height >= 4) {
		height -= 4;
		baseline = $BasicComboBoxUI::getBaseline(c, width, height);
		if (baseline >= 0) {
			baseline += 2;
		}
	} else {
		baseline = $BasicComboBoxUI::getBaseline(c, width, height);
	}
	return baseline;
}

$ComboBoxEditor* MetalComboBoxUI::createEditor() {
	return $new($MetalComboBoxEditor$UIResource);
}

$ComboPopup* MetalComboBoxUI::createPopup() {
	return $BasicComboBoxUI::createPopup();
}

$JButton* MetalComboBoxUI::createArrowButton() {
	bool var$0 = $nc(this->comboBox)->isEditable();
	bool iconOnly = (var$0 || $MetalLookAndFeel::usingOcean());
	$var($JButton, button, $new($MetalComboBoxButton, this->comboBox, $$new($MetalComboBoxIcon), iconOnly, this->currentValuePane, this->listBox));
	button->setMargin($$new($Insets, 0, 1, 1, 3));
	if ($MetalLookAndFeel::usingOcean()) {
		$init($MetalBorders);
		$init($Boolean);
		button->putClientProperty($MetalBorders::NO_BUTTON_ROLLOVER, $Boolean::TRUE);
	}
	updateButtonForOcean(button);
	return button;
}

void MetalComboBoxUI::updateButtonForOcean($JButton* button) {
	if ($MetalLookAndFeel::usingOcean()) {
		$nc(button)->setFocusPainted($nc(this->comboBox)->isEditable());
	}
}

$PropertyChangeListener* MetalComboBoxUI::createPropertyChangeListener() {
	return $new($MetalComboBoxUI$MetalPropertyChangeListener, this);
}

void MetalComboBoxUI::editablePropertyChanged($PropertyChangeEvent* e) {
}

$LayoutManager* MetalComboBoxUI::createLayoutManager() {
	return $new($MetalComboBoxUI$MetalComboBoxLayoutManager, this);
}

void MetalComboBoxUI::layoutComboBox($Container* parent, $MetalComboBoxUI$MetalComboBoxLayoutManager* manager) {
	bool var$0 = $nc(this->comboBox)->isEditable();
	if (var$0 && !$MetalLookAndFeel::usingOcean()) {
		$nc(manager)->superLayout(parent);
		return;
	}
	if (this->arrowButton != nullptr) {
		if ($MetalLookAndFeel::usingOcean()) {
			$var($Insets, insets, $nc(this->comboBox)->getInsets());
			int32_t buttonWidth = $nc($($nc(this->arrowButton)->getMinimumSize()))->width;
			int32_t var$1 = $MetalUtils::isLeftToRight(this->comboBox) ? ($nc(this->comboBox)->getWidth() - $nc(insets)->right - buttonWidth) : insets->left;
			int32_t var$2 = insets->top;
			int32_t var$3 = buttonWidth;
			$nc(this->arrowButton)->setBounds(var$1, var$2, var$3, $nc(this->comboBox)->getHeight() - insets->top - insets->bottom);
		} else {
			$var($Insets, insets, $nc(this->comboBox)->getInsets());
			int32_t width = $nc(this->comboBox)->getWidth();
			int32_t height = $nc(this->comboBox)->getHeight();
			$nc(this->arrowButton)->setBounds($nc(insets)->left, insets->top, width - (insets->left + insets->right), height - (insets->top + insets->bottom));
		}
	}
	if (this->editor != nullptr && $MetalLookAndFeel::usingOcean()) {
		$var($Rectangle, cvb, rectangleForCurrentValue());
		$nc(this->editor)->setBounds(cvb);
	}
}

void MetalComboBoxUI::removeListeners() {
	if (this->propertyChangeListener != nullptr) {
		$nc(this->comboBox)->removePropertyChangeListener(this->propertyChangeListener);
	}
}

void MetalComboBoxUI::configureEditor() {
	$BasicComboBoxUI::configureEditor();
}

void MetalComboBoxUI::unconfigureEditor() {
	$BasicComboBoxUI::unconfigureEditor();
}

$Dimension* MetalComboBoxUI::getMinimumSize($JComponent* c) {
	if (!this->isMinimumSizeDirty) {
		return $new($Dimension, this->cachedMinimumSize);
	}
	$var($Dimension, size, nullptr);
	if (!$nc(this->comboBox)->isEditable() && this->arrowButton != nullptr) {
		$var($Insets, buttonInsets, $nc(this->arrowButton)->getInsets());
		$var($Insets, insets, $nc(this->comboBox)->getInsets());
		$assign(size, getDisplaySize());
		$nc(size)->width += $nc(insets)->left + insets->right;
		size->width += $nc(buttonInsets)->right;
		size->width += $nc($($nc(this->arrowButton)->getMinimumSize()))->width;
		size->height += insets->top + insets->bottom;
		size->height += buttonInsets->top + buttonInsets->bottom;
	} else if ($nc(this->comboBox)->isEditable() && this->arrowButton != nullptr && this->editor != nullptr) {
		$assign(size, $BasicComboBoxUI::getMinimumSize(c));
		$var($Insets, margin, $nc(this->arrowButton)->getMargin());
		$nc(size)->height += $nc(margin)->top + margin->bottom;
		size->width += margin->left + margin->right;
	} else {
		$assign(size, $BasicComboBoxUI::getMinimumSize(c));
	}
	$nc(this->cachedMinimumSize)->setSize($nc(size)->width, size->height);
	this->isMinimumSizeDirty = false;
	return $new($Dimension, this->cachedMinimumSize);
}

MetalComboBoxUI::MetalComboBoxUI() {
}

$Class* MetalComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxUI, name, initialize, &_MetalComboBoxUI_ClassInfo_, allocate$MetalComboBoxUI);
	return class$;
}

$Class* MetalComboBoxUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
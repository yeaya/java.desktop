#include <javax/swing/colorchooser/ColorChooserPanel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorModel.h>
#include <javax/swing/colorchooser/ColorPanel.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/colorchooser/DiagramComponent.h>
#include <javax/swing/colorchooser/ValueFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef HORIZONTAL
#undef MASK
#undef NORTH
#undef RIGHT
#undef TRANSPARENCY_ENABLED_PROPERTY

using $ComponentArray = $Array<::java::awt::Component>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Border = ::javax::swing::border::Border;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorModel = ::javax::swing::colorchooser::ColorModel;
using $ColorPanel = ::javax::swing::colorchooser::ColorPanel;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $DiagramComponent = ::javax::swing::colorchooser::DiagramComponent;
using $ValueFormatter = ::javax::swing::colorchooser::ValueFormatter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _ColorChooserPanel_FieldInfo_[] = {
	{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ColorChooserPanel, MASK)},
	{"model", "Ljavax/swing/colorchooser/ColorModel;", nullptr, $PRIVATE | $FINAL, $field(ColorChooserPanel, model)},
	{"panel", "Ljavax/swing/colorchooser/ColorPanel;", nullptr, $PRIVATE | $FINAL, $field(ColorChooserPanel, panel)},
	{"slider", "Ljavax/swing/colorchooser/DiagramComponent;", nullptr, $PRIVATE | $FINAL, $field(ColorChooserPanel, slider)},
	{"diagram", "Ljavax/swing/colorchooser/DiagramComponent;", nullptr, $PRIVATE | $FINAL, $field(ColorChooserPanel, diagram)},
	{"text", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE | $FINAL, $field(ColorChooserPanel, text)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $FINAL, $field(ColorChooserPanel, label)},
	{}
};

$MethodInfo _ColorChooserPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/colorchooser/ColorModel;)V", nullptr, 0, $method(static_cast<void(ColorChooserPanel::*)($ColorModel*)>(&ColorChooserPanel::init$))},
	{"buildChooser", "()V", nullptr, $PROTECTED},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayedMnemonicIndex", "()I", nullptr, $PUBLIC},
	{"getLargeDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getMnemonic", "()I", nullptr, $PUBLIC},
	{"getSmallDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"isColorTransparencySelectionEnabled", "()Z", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setColorTransparencySelectionEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setEnabled", "(Ljava/awt/Container;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Container*,bool)>(&ColorChooserPanel::setEnabled))},
	{"setInheritsPopupMenu", "(Ljavax/swing/JComponent;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,bool)>(&ColorChooserPanel::setInheritsPopupMenu))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateChooser", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ColorChooserPanel_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.ColorChooserPanel",
	"javax.swing.colorchooser.AbstractColorChooserPanel",
	"java.beans.PropertyChangeListener",
	_ColorChooserPanel_FieldInfo_,
	_ColorChooserPanel_MethodInfo_
};

$Object* allocate$ColorChooserPanel($Class* clazz) {
	return $of($alloc(ColorChooserPanel));
}

$String* ColorChooserPanel::toString() {
	 return this->$AbstractColorChooserPanel::toString();
}

int32_t ColorChooserPanel::hashCode() {
	 return this->$AbstractColorChooserPanel::hashCode();
}

bool ColorChooserPanel::equals(Object$* arg0) {
	 return this->$AbstractColorChooserPanel::equals(arg0);
}

$Object* ColorChooserPanel::clone() {
	 return this->$AbstractColorChooserPanel::clone();
}

void ColorChooserPanel::finalize() {
	this->$AbstractColorChooserPanel::finalize();
}

void ColorChooserPanel::init$($ColorModel* model) {
	$AbstractColorChooserPanel::init$();
	$set(this, model, model);
	$set(this, panel, $new($ColorPanel, this->model));
	$set(this, slider, $new($DiagramComponent, this->panel, false));
	$set(this, diagram, $new($DiagramComponent, this->panel, true));
	$set(this, text, $new($JFormattedTextField));
	$set(this, label, $new($JLabel, nullptr, nullptr, $SwingConstants::RIGHT));
	$ValueFormatter::init(6, true, this->text);
}

void ColorChooserPanel::setEnabled(bool enabled) {
	$AbstractColorChooserPanel::setEnabled(enabled);
	setEnabled(this, enabled);
}

void ColorChooserPanel::setEnabled($Container* container, bool enabled) {
	$init(ColorChooserPanel);
	$useLocalCurrentObjectStackCache();
	{
		$var($ComponentArray, arr$, $nc(container)->getComponents());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			{
				$nc(component)->setEnabled(enabled);
				if ($instanceOf($Container, component)) {
					setEnabled($cast($Container, component), enabled);
				}
			}
		}
	}
}

void ColorChooserPanel::updateChooser() {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, getColorFromModel());
	if (color != nullptr) {
		$nc(this->panel)->setColor(color);
		$nc(this->text)->setValue($($Integer::valueOf(color->getRGB())));
		$nc(this->slider)->repaint();
		$nc(this->diagram)->repaint();
	}
}

void ColorChooserPanel::buildChooser() {
	$useLocalCurrentObjectStackCache();
	if (0 == getComponentCount()) {
		setLayout($$new($GridBagLayout));
		$var($GridBagConstraints, gbc, $new($GridBagConstraints));
		gbc->gridx = 3;
		gbc->gridwidth = 2;
		gbc->weighty = 1.0;
		gbc->anchor = $GridBagConstraints::NORTH;
		gbc->fill = $GridBagConstraints::HORIZONTAL;
		$nc(gbc->insets)->top = 10;
		$nc(gbc->insets)->right = 10;
		add(static_cast<$Component*>(this->panel), $of(gbc));
		gbc->gridwidth = 1;
		gbc->weightx = 1.0;
		gbc->weighty = 0.0;
		gbc->anchor = $GridBagConstraints::CENTER;
		$nc(gbc->insets)->right = 5;
		$nc(gbc->insets)->bottom = 10;
		add(static_cast<$Component*>(this->label), $of(gbc));
		gbc->gridx = 4;
		gbc->weightx = 0.0;
		$nc(gbc->insets)->right = 10;
		add(static_cast<$Component*>(this->text), $of(gbc));
		gbc->gridx = 2;
		gbc->gridheight = 2;
		gbc->anchor = $GridBagConstraints::NORTH;
		gbc->ipadx = $nc($($nc(this->text)->getPreferredSize()))->height;
		gbc->ipady = $nc($(getPreferredSize()))->height;
		add(static_cast<$Component*>(this->slider), $of(gbc));
		gbc->gridx = 1;
		$nc(gbc->insets)->left = 10;
		gbc->ipadx = gbc->ipady;
		add(static_cast<$Component*>(this->diagram), $of(gbc));
		$nc(this->label)->setLabelFor(this->text);
		$nc(this->text)->addPropertyChangeListener("value"_s, this);
		$nc(this->slider)->setBorder($($nc(this->text)->getBorder()));
		$nc(this->diagram)->setBorder($($nc(this->text)->getBorder()));
		setInheritsPopupMenu(this, true);
	}
	$var($String, label, $nc(this->model)->getText(this, "HexCode"_s));
	bool visible = label != nullptr;
	$nc(this->text)->setVisible(visible);
	$nc($($nc(this->text)->getAccessibleContext()))->setAccessibleDescription(label);
	$nc(this->label)->setVisible(visible);
	if (visible) {
		$nc(this->label)->setText(label);
		int32_t mnemonic = $nc(this->model)->getInteger(this, "HexCodeMnemonic"_s);
		if (mnemonic > 0) {
			$nc(this->label)->setDisplayedMnemonic(mnemonic);
			mnemonic = $nc(this->model)->getInteger(this, "HexCodeMnemonicIndex"_s);
			if (mnemonic >= 0) {
				$nc(this->label)->setDisplayedMnemonicIndex(mnemonic);
			}
		}
	}
	$nc(this->panel)->buildPanel();
}

$String* ColorChooserPanel::getDisplayName() {
	return $nc(this->model)->getText(this, "Name"_s);
}

int32_t ColorChooserPanel::getMnemonic() {
	return $nc(this->model)->getInteger(this, "Mnemonic"_s);
}

int32_t ColorChooserPanel::getDisplayedMnemonicIndex() {
	return $nc(this->model)->getInteger(this, "DisplayedMnemonicIndex"_s);
}

$Icon* ColorChooserPanel::getSmallDisplayIcon() {
	return nullptr;
}

$Icon* ColorChooserPanel::getLargeDisplayIcon() {
	return nullptr;
}

void ColorChooserPanel::setColorTransparencySelectionEnabled(bool b) {
	bool oldValue = isColorTransparencySelectionEnabled();
	if (b != oldValue) {
		$nc(this->panel)->setColorTransparencySelectionEnabled(b);
		$init($AbstractColorChooserPanel);
		firePropertyChange($AbstractColorChooserPanel::TRANSPARENCY_ENABLED_PROPERTY, oldValue, b);
	}
}

bool ColorChooserPanel::isColorTransparencySelectionEnabled() {
	return $nc(this->panel)->isColorTransparencySelectionEnabled();
}

void ColorChooserPanel::propertyChange($PropertyChangeEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($ColorSelectionModel, model, getColorSelectionModel());
	if (model != nullptr) {
		$var($Object, object, $nc(event)->getNewValue());
		if ($instanceOf($Integer, object)) {
			int32_t var$0 = (int32_t)(ColorChooserPanel::MASK & (uint32_t)$nc($(model->getSelectedColor()))->getRGB());
			int32_t value = var$0 | $nc(($cast($Integer, object)))->intValue();
			model->setSelectedColor($$new($Color, value, true));
		}
	}
	$nc(this->text)->selectAll();
}

void ColorChooserPanel::setInheritsPopupMenu($JComponent* component, bool value) {
	$init(ColorChooserPanel);
	$useLocalCurrentObjectStackCache();
	$nc(component)->setInheritsPopupMenu(value);
	{
		$var($ComponentArray, arr$, component->getComponents());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, object, arr$->get(i$));
			{
				if ($instanceOf($JComponent, object)) {
					setInheritsPopupMenu($cast($JComponent, object), value);
				}
			}
		}
	}
}

ColorChooserPanel::ColorChooserPanel() {
}

$Class* ColorChooserPanel::load$($String* name, bool initialize) {
	$loadClass(ColorChooserPanel, name, initialize, &_ColorChooserPanel_ClassInfo_, allocate$ColorChooserPanel);
	return class$;
}

$Class* ColorChooserPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
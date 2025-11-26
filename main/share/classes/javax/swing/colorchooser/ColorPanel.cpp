#include <javax/swing/colorchooser/ColorPanel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/NumberFormatException.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/colorchooser/ColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorModel.h>
#include <javax/swing/colorchooser/SlidingSpinner.h>
#include <jcpp.h>

#undef HORIZONTAL

using $SlidingSpinnerArray = $Array<::javax::swing::colorchooser::SlidingSpinner>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JSlider = ::javax::swing::JSlider;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorChooserPanel = ::javax::swing::colorchooser::ColorChooserPanel;
using $ColorModel = ::javax::swing::colorchooser::ColorModel;
using $SlidingSpinner = ::javax::swing::colorchooser::SlidingSpinner;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _ColorPanel_FieldInfo_[] = {
	{"spinners", "[Ljavax/swing/colorchooser/SlidingSpinner;", nullptr, $PRIVATE | $FINAL, $field(ColorPanel, spinners)},
	{"values", "[F", nullptr, $PRIVATE | $FINAL, $field(ColorPanel, values)},
	{"model", "Ljavax/swing/colorchooser/ColorModel;", nullptr, $PRIVATE | $FINAL, $field(ColorPanel, model)},
	{"color", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ColorPanel, color)},
	{"x", "I", nullptr, $PRIVATE, $field(ColorPanel, x)},
	{"y", "I", nullptr, $PRIVATE, $field(ColorPanel, y)},
	{"z", "I", nullptr, $PRIVATE, $field(ColorPanel, z)},
	{}
};

$MethodInfo _ColorPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/colorchooser/ColorModel;)V", nullptr, 0, $method(static_cast<void(ColorPanel::*)($ColorModel*)>(&ColorPanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"buildPanel", "()V", nullptr, 0, $method(static_cast<void(ColorPanel::*)()>(&ColorPanel::buildPanel))},
	{"colorChanged", "()V", nullptr, 0, $method(static_cast<void(ColorPanel::*)()>(&ColorPanel::colorChanged))},
	{"getColor", "(F)I", nullptr, 0, $method(static_cast<int32_t(ColorPanel::*)(float)>(&ColorPanel::getColor))},
	{"getColor", "(FF)I", nullptr, 0, $method(static_cast<int32_t(ColorPanel::*)(float,float)>(&ColorPanel::getColor))},
	{"getColor", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ColorPanel::*)(int32_t)>(&ColorPanel::getColor))},
	{"getValueX", "()F", nullptr, 0, $method(static_cast<float(ColorPanel::*)()>(&ColorPanel::getValueX))},
	{"getValueY", "()F", nullptr, 0, $method(static_cast<float(ColorPanel::*)()>(&ColorPanel::getValueY))},
	{"getValueZ", "()F", nullptr, 0, $method(static_cast<float(ColorPanel::*)()>(&ColorPanel::getValueZ))},
	{"isColorTransparencySelectionEnabled", "()Z", nullptr, 0, $method(static_cast<bool(ColorPanel::*)()>(&ColorPanel::isColorTransparencySelectionEnabled))},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(ColorPanel::*)($Color*)>(&ColorPanel::setColor))},
	{"setColorTransparencySelectionEnabled", "(Z)V", nullptr, 0, $method(static_cast<void(ColorPanel::*)(bool)>(&ColorPanel::setColorTransparencySelectionEnabled))},
	{"setDefaultValue", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ColorPanel::*)(int32_t)>(&ColorPanel::setDefaultValue))},
	{"setValue", "(F)V", nullptr, 0, $method(static_cast<void(ColorPanel::*)(float)>(&ColorPanel::setValue))},
	{"setValue", "(FF)V", nullptr, 0, $method(static_cast<void(ColorPanel::*)(float,float)>(&ColorPanel::setValue))},
	{"setValue", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ColorPanel::*)(int32_t)>(&ColorPanel::setValue))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ColorPanel_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.ColorPanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener",
	_ColorPanel_FieldInfo_,
	_ColorPanel_MethodInfo_
};

$Object* allocate$ColorPanel($Class* clazz) {
	return $of($alloc(ColorPanel));
}

$String* ColorPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ColorPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ColorPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ColorPanel::clone() {
	 return this->$JPanel::clone();
}

void ColorPanel::finalize() {
	this->$JPanel::finalize();
}

void ColorPanel::init$($ColorModel* model) {
	$useLocalCurrentObjectStackCache();
	$JPanel::init$(static_cast<$LayoutManager*>($$new($GridBagLayout)));
	$set(this, spinners, $new($SlidingSpinnerArray, 5));
	$set(this, values, $new($floats, $nc(this->spinners)->length));
	this->x = 1;
	this->y = 2;
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	gbc->gridx = 1;
	$var($ButtonGroup, group, $new($ButtonGroup));
	$var($EmptyBorder, border, nullptr);
	for (int32_t i = 0; i < $nc(this->spinners)->length; ++i) {
		if (i < 3) {
			$var($JRadioButton, button, $new($JRadioButton));
			if (i == 0) {
				$var($Insets, insets, button->getInsets());
				$nc(insets)->left = $nc($(button->getPreferredSize()))->width;
				$assign(border, $new($EmptyBorder, insets));
				button->setSelected(true);
				$nc(gbc->insets)->top = 5;
			}
			add(static_cast<$Component*>(button), $of(gbc));
			group->add(button);
			button->setActionCommand($($Integer::toString(i)));
			button->addActionListener(this);
			$nc(this->spinners)->set(i, $$new($SlidingSpinner, this, button));
		} else {
			$var($JLabel, label, $new($JLabel));
			add(static_cast<$Component*>(label), $of(gbc));
			label->setBorder(border);
			label->setFocusable(false);
			$nc(this->spinners)->set(i, $$new($SlidingSpinner, this, label));
		}
	}
	gbc->gridx = 2;
	gbc->weightx = 1.0;
	$nc(gbc->insets)->top = 0;
	$nc(gbc->insets)->left = 5;
	{
		$var($SlidingSpinnerArray, arr$, this->spinners);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($SlidingSpinner, spinner, arr$->get(i$));
			{
				add($(static_cast<$Component*>($nc(spinner)->getSlider())), $of(gbc));
				$nc(gbc->insets)->top = 5;
			}
		}
	}
	gbc->gridx = 3;
	gbc->weightx = 0.0;
	$nc(gbc->insets)->top = 0;
	{
		$var($SlidingSpinnerArray, arr$, this->spinners);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($SlidingSpinner, spinner, arr$->get(i$));
			{
				add($(static_cast<$Component*>($nc(spinner)->getSpinner())), $of(gbc));
				$nc(gbc->insets)->top = 5;
			}
		}
	}
	setFocusable(false);
	$set(this, model, model);
}

void ColorPanel::actionPerformed($ActionEvent* event) {
	$useLocalCurrentObjectStackCache();
	try {
		this->z = $Integer::parseInt($($nc(event)->getActionCommand()));
		this->y = (this->z != 2) ? 2 : 1;
		this->x = (this->z != 0) ? 0 : 1;
		$nc($(getParent()))->repaint();
	} catch ($NumberFormatException& exception) {
	}
}

void ColorPanel::buildPanel() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->model)->getCount();
	$nc($nc(this->spinners)->get(4))->setVisible(count > 4);
	for (int32_t i = 0; i < count; ++i) {
		$var($String, text, $nc(this->model)->getLabel(this, i));
		$var($Object, object, $nc($nc(this->spinners)->get(i))->getLabel());
		if ($instanceOf($JRadioButton, object)) {
			$var($JRadioButton, button, $cast($JRadioButton, object));
			$nc(button)->setText(text);
			$nc($(button->getAccessibleContext()))->setAccessibleDescription(text);
		} else if ($instanceOf($JLabel, object)) {
			$var($JLabel, label, $cast($JLabel, object));
			$nc(label)->setText(text);
		}
		int32_t var$0 = $nc(this->model)->getMinimum(i);
		$nc($nc(this->spinners)->get(i))->setRange(var$0, $nc(this->model)->getMaximum(i));
		$nc($nc(this->spinners)->get(i))->setValue($nc(this->values)->get(i));
		$nc($($nc($($nc($nc(this->spinners)->get(i))->getSlider()))->getAccessibleContext()))->setAccessibleName(text);
		$nc($($nc($($nc($nc(this->spinners)->get(i))->getSpinner()))->getAccessibleContext()))->setAccessibleName(text);
		$var($JSpinner$DefaultEditor, editor, $cast($JSpinner$DefaultEditor, $nc($($nc($nc(this->spinners)->get(i))->getSpinner()))->getEditor()));
		$nc($($nc($($nc(editor)->getTextField()))->getAccessibleContext()))->setAccessibleName(text);
		$nc($($nc($($nc($nc(this->spinners)->get(i))->getSlider()))->getAccessibleContext()))->setAccessibleDescription(text);
		$nc($($nc($($nc($nc(this->spinners)->get(i))->getSpinner()))->getAccessibleContext()))->setAccessibleDescription(text);
		$nc($($nc($(editor->getTextField()))->getAccessibleContext()))->setAccessibleDescription(text);
	}
}

void ColorPanel::colorChanged() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = getColor(0);
	$set(this, color, $new($Color, var$0, isColorTransparencySelectionEnabled()));
	$var($Object, parent, getParent());
	if ($instanceOf($ColorChooserPanel, parent)) {
		$var($ColorChooserPanel, chooser, $cast($ColorChooserPanel, parent));
		$nc(chooser)->setSelectedColor(this->color);
		chooser->repaint();
	}
}

float ColorPanel::getValueX() {
	return $nc($nc(this->spinners)->get(this->x))->getValue();
}

float ColorPanel::getValueY() {
	return 1.0f - $nc($nc(this->spinners)->get(this->y))->getValue();
}

float ColorPanel::getValueZ() {
	return 1.0f - $nc($nc(this->spinners)->get(this->z))->getValue();
}

void ColorPanel::setValue(float z) {
	$nc($nc(this->spinners)->get(this->z))->setValue(1.0f - z);
	colorChanged();
}

void ColorPanel::setValue(float x, float y) {
	$nc($nc(this->spinners)->get(this->x))->setValue(x);
	$nc($nc(this->spinners)->get(this->y))->setValue(1.0f - y);
	colorChanged();
}

int32_t ColorPanel::getColor(float z) {
	setDefaultValue(this->x);
	setDefaultValue(this->y);
	$nc(this->values)->set(this->z, 1.0f - z);
	return getColor(3);
}

int32_t ColorPanel::getColor(float x, float y) {
	$nc(this->values)->set(this->x, x);
	$nc(this->values)->set(this->y, 1.0f - y);
	setValue(this->z);
	return getColor(3);
}

void ColorPanel::setColor($Color* color) {
	if (!$nc(color)->equals(this->color)) {
		$set(this, color, color);
		$nc(this->model)->setColor(color->getRGB(), this->values);
		for (int32_t i = 0; i < $nc(this->model)->getCount(); ++i) {
			$nc($nc(this->spinners)->get(i))->setValue($nc(this->values)->get(i));
		}
	}
}

int32_t ColorPanel::getColor(int32_t index) {
	while (index < $nc(this->model)->getCount()) {
		setValue(index++);
	}
	return $nc(this->model)->getColor(this->values);
}

void ColorPanel::setColorTransparencySelectionEnabled(bool b) {
	if ($nc($nc(this->spinners)->get($nc(this->model)->getCount() - 1))->isVisible() != b) {
		$nc($nc(this->spinners)->get($nc(this->model)->getCount() - 1))->setVisible(b);
		colorChanged();
	}
}

bool ColorPanel::isColorTransparencySelectionEnabled() {
	return $nc($nc(this->spinners)->get($nc(this->model)->getCount() - 1))->isVisible();
}

void ColorPanel::setValue(int32_t index) {
	$nc(this->values)->set(index, $nc($nc(this->spinners)->get(index))->getValue());
}

void ColorPanel::setDefaultValue(int32_t index) {
	float value = $nc(this->model)->getDefault(index);
	$nc(this->values)->set(index, (value < 0.0f) ? $nc($nc(this->spinners)->get(index))->getValue() : value);
}

ColorPanel::ColorPanel() {
}

$Class* ColorPanel::load$($String* name, bool initialize) {
	$loadClass(ColorPanel, name, initialize, &_ColorPanel_ClassInfo_, allocate$ColorPanel);
	return class$;
}

$Class* ColorPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
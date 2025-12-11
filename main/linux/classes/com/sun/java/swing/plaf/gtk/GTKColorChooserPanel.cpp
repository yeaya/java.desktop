#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$ColorTriangle.h>
#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$OpaqueLabel.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Locale.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/Box.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BLACK
#undef CENTER
#undef COMMIT_OR_REVERT
#undef FIRST_LINE_END
#undef FLAGS_CHANGED_ANGLE
#undef FLAGS_DRAGGING
#undef FLAGS_DRAGGING_TRIANGLE
#undef FLAGS_FOCUSED_TRIANGLE
#undef FLAGS_FOCUSED_WHEEL
#undef FLAGS_SETTING_COLOR
#undef HORIZONTAL
#undef LINE_START
#undef NONE
#undef PI
#undef PI_3

using $GTKColorChooserPanel$ColorTriangle = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel$ColorTriangle;
using $GTKColorChooserPanel$OpaqueLabel = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel$OpaqueLabel;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $Box = ::javax::swing::Box;
using $Icon = ::javax::swing::Icon;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JSeparator = ::javax::swing::JSeparator;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKColorChooserPanel_FieldInfo_[] = {
	{"PI_3", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKColorChooserPanel, PI_3)},
	{"triangle", "Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel$ColorTriangle;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, triangle)},
	{"lastLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, lastLabel)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, label)},
	{"hueSpinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, hueSpinner)},
	{"saturationSpinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, saturationSpinner)},
	{"valueSpinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, valueSpinner)},
	{"redSpinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, redSpinner)},
	{"greenSpinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, greenSpinner)},
	{"blueSpinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, blueSpinner)},
	{"colorNameTF", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(GTKColorChooserPanel, colorNameTF)},
	{"settingColor", "Z", nullptr, $PRIVATE, $field(GTKColorChooserPanel, settingColor)},
	{"hue", "F", nullptr, $PRIVATE, $field(GTKColorChooserPanel, hue)},
	{"saturation", "F", nullptr, $PRIVATE, $field(GTKColorChooserPanel, saturation)},
	{"brightness", "F", nullptr, $PRIVATE, $field(GTKColorChooserPanel, brightness)},
	{"FLAGS_CHANGED_ANGLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKColorChooserPanel, FLAGS_CHANGED_ANGLE)},
	{"FLAGS_DRAGGING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKColorChooserPanel, FLAGS_DRAGGING)},
	{"FLAGS_DRAGGING_TRIANGLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKColorChooserPanel, FLAGS_DRAGGING_TRIANGLE)},
	{"FLAGS_SETTING_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKColorChooserPanel, FLAGS_SETTING_COLOR)},
	{"FLAGS_FOCUSED_WHEEL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKColorChooserPanel, FLAGS_FOCUSED_WHEEL)},
	{"FLAGS_FOCUSED_TRIANGLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKColorChooserPanel, FLAGS_FOCUSED_TRIANGLE)},
	{}
};

$MethodInfo _GTKColorChooserPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GTKColorChooserPanel::*)()>(&GTKColorChooserPanel::init$))},
	{"add", "(Ljava/awt/Container;Ljava/lang/String;Ljavax/swing/JComponent;II)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)($Container*,$String*,$JComponent*,int32_t,int32_t)>(&GTKColorChooserPanel::add))},
	{"buildChooser", "()V", nullptr, $PROTECTED},
	{"compositeRequestFocus", "(Ljava/awt/Component;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*,bool)>(&GTKColorChooserPanel::compositeRequestFocus))},
	{"configureSpinner", "(Ljavax/swing/JSpinner;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)($JSpinner*,$String*)>(&GTKColorChooserPanel::configureSpinner))},
	{"getBrightness", "()F", nullptr, $PRIVATE, $method(static_cast<float(GTKColorChooserPanel::*)()>(&GTKColorChooserPanel::getBrightness))},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayedMnemonicIndex", "()I", nullptr, $PUBLIC},
	{"getHue", "()F", nullptr, $PRIVATE, $method(static_cast<float(GTKColorChooserPanel::*)()>(&GTKColorChooserPanel::getHue))},
	{"getLargeDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getMnemonic", "()I", nullptr, $PUBLIC},
	{"getSaturation", "()F", nullptr, $PRIVATE, $method(static_cast<float(GTKColorChooserPanel::*)()>(&GTKColorChooserPanel::getSaturation))},
	{"getSmallDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"setBlue", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(int32_t)>(&GTKColorChooserPanel::setBlue))},
	{"setBrightness", "(F)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(float)>(&GTKColorChooserPanel::setBrightness))},
	{"setColor", "(Ljava/awt/Color;ZZZ)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)($Color*,bool,bool,bool)>(&GTKColorChooserPanel::setColor))},
	{"setGreen", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(int32_t)>(&GTKColorChooserPanel::setGreen))},
	{"setHSB", "(FFF)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(float,float,float)>(&GTKColorChooserPanel::setHSB))},
	{"setHue", "(FZ)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(float,bool)>(&GTKColorChooserPanel::setHue))},
	{"setRGB", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(int32_t)>(&GTKColorChooserPanel::setRGB))},
	{"setRed", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(int32_t)>(&GTKColorChooserPanel::setRed))},
	{"setSaturation", "(F)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(float)>(&GTKColorChooserPanel::setSaturation))},
	{"setSaturationAndBrightness", "(FFZ)V", nullptr, $PRIVATE, $method(static_cast<void(GTKColorChooserPanel::*)(float,float,bool)>(&GTKColorChooserPanel::setSaturationAndBrightness))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallChooserPanel", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC},
	{"updateChooser", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKColorChooserPanel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$OpaqueLabel", "com.sun.java.swing.plaf.gtk.GTKColorChooserPanel", "OpaqueLabel", $PRIVATE},
	{"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorAction", "com.sun.java.swing.plaf.gtk.GTKColorChooserPanel", "ColorAction", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorTriangle", "com.sun.java.swing.plaf.gtk.GTKColorChooserPanel", "ColorTriangle", $PRIVATE},
	{}
};

$ClassInfo _GTKColorChooserPanel_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel",
	"javax.swing.colorchooser.AbstractColorChooserPanel",
	"javax.swing.event.ChangeListener",
	_GTKColorChooserPanel_FieldInfo_,
	_GTKColorChooserPanel_MethodInfo_,
	nullptr,
	nullptr,
	_GTKColorChooserPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$OpaqueLabel,com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorAction,com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorTriangle"
};

$Object* allocate$GTKColorChooserPanel($Class* clazz) {
	return $of($alloc(GTKColorChooserPanel));
}

$String* GTKColorChooserPanel::toString() {
	 return this->$AbstractColorChooserPanel::toString();
}

int32_t GTKColorChooserPanel::hashCode() {
	 return this->$AbstractColorChooserPanel::hashCode();
}

bool GTKColorChooserPanel::equals(Object$* arg0) {
	 return this->$AbstractColorChooserPanel::equals(arg0);
}

$Object* GTKColorChooserPanel::clone() {
	 return this->$AbstractColorChooserPanel::clone();
}

void GTKColorChooserPanel::finalize() {
	this->$AbstractColorChooserPanel::finalize();
}

float GTKColorChooserPanel::PI_3 = 0.0;

void GTKColorChooserPanel::init$() {
	$AbstractColorChooserPanel::init$();
}

void GTKColorChooserPanel::compositeRequestFocus($Component* component, bool direction) {
	$init(GTKColorChooserPanel);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Container, component)) {
		$var($Container, container, $cast($Container, component));
		if ($nc(container)->isFocusCycleRoot()) {
			$var($FocusTraversalPolicy, policy, container->getFocusTraversalPolicy());
			$var($Component, comp, $nc(policy)->getDefaultComponent(container));
			if (comp != nullptr) {
				comp->requestFocus();
				return;
			}
		}
		$var($Container, rootAncestor, $nc(container)->getFocusCycleRootAncestor());
		if (rootAncestor != nullptr) {
			$var($FocusTraversalPolicy, policy, rootAncestor->getFocusTraversalPolicy());
			$var($Component, comp, nullptr);
			if (direction) {
				$assign(comp, $nc(policy)->getComponentAfter(rootAncestor, container));
			} else {
				$assign(comp, $nc(policy)->getComponentBefore(rootAncestor, container));
			}
			if (comp != nullptr) {
				comp->requestFocus();
				return;
			}
		}
	}
	$nc(component)->requestFocus();
}

$String* GTKColorChooserPanel::getDisplayName() {
	return $cast($String, $UIManager::get("GTKColorChooserPanel.nameText"_s));
}

int32_t GTKColorChooserPanel::getMnemonic() {
	$var($String, m, $cast($String, $UIManager::get("GTKColorChooserPanel.mnemonic"_s)));
	if (m != nullptr) {
		try {
			int32_t value = $Integer::parseInt(m);
			return value;
		} catch ($NumberFormatException& nfe) {
		}
	}
	return -1;
}

int32_t GTKColorChooserPanel::getDisplayedMnemonicIndex() {
	$var($String, m, $cast($String, $UIManager::get("GTKColorChooserPanel.displayedMnemonicIndex"_s)));
	if (m != nullptr) {
		try {
			int32_t value = $Integer::parseInt(m);
			return value;
		} catch ($NumberFormatException& nfe) {
		}
	}
	return -1;
}

$Icon* GTKColorChooserPanel::getSmallDisplayIcon() {
	return nullptr;
}

$Icon* GTKColorChooserPanel::getLargeDisplayIcon() {
	return nullptr;
}

void GTKColorChooserPanel::uninstallChooserPanel($JColorChooser* enclosingChooser) {
	$AbstractColorChooserPanel::uninstallChooserPanel(enclosingChooser);
	removeAll();
}

void GTKColorChooserPanel::buildChooser() {
	$useLocalCurrentObjectStackCache();
	$set(this, triangle, $new($GTKColorChooserPanel$ColorTriangle, this));
	$nc(this->triangle)->setName("GTKColorChooserPanel.triangle"_s);
	$set(this, label, $new($GTKColorChooserPanel$OpaqueLabel, this));
	$nc(this->label)->setName("GTKColorChooserPanel.colorWell"_s);
	$nc(this->label)->setOpaque(true);
	$nc(this->label)->setMinimumSize($$new($Dimension, 67, 32));
	$nc(this->label)->setPreferredSize($$new($Dimension, 67, 32));
	$nc(this->label)->setMaximumSize($$new($Dimension, 67, 32));
	$set(this, lastLabel, $new($GTKColorChooserPanel$OpaqueLabel, this));
	$nc(this->lastLabel)->setName("GTKColorChooserPanel.lastColorWell"_s);
	$nc(this->lastLabel)->setOpaque(true);
	$nc(this->lastLabel)->setMinimumSize($$new($Dimension, 67, 32));
	$nc(this->lastLabel)->setPreferredSize($$new($Dimension, 67, 32));
	$nc(this->lastLabel)->setMaximumSize($$new($Dimension, 67, 32));
	$set(this, hueSpinner, $new($JSpinner, $$new($SpinnerNumberModel, 0, 0, 360, 1)));
	configureSpinner(this->hueSpinner, "GTKColorChooserPanel.hueSpinner"_s);
	$set(this, saturationSpinner, $new($JSpinner, $$new($SpinnerNumberModel, 0, 0, 255, 1)));
	configureSpinner(this->saturationSpinner, "GTKColorChooserPanel.saturationSpinner"_s);
	$set(this, valueSpinner, $new($JSpinner, $$new($SpinnerNumberModel, 0, 0, 255, 1)));
	configureSpinner(this->valueSpinner, "GTKColorChooserPanel.valueSpinner"_s);
	$set(this, redSpinner, $new($JSpinner, $$new($SpinnerNumberModel, 0, 0, 255, 1)));
	configureSpinner(this->redSpinner, "GTKColorChooserPanel.redSpinner"_s);
	$set(this, greenSpinner, $new($JSpinner, $$new($SpinnerNumberModel, 0, 0, 255, 1)));
	configureSpinner(this->greenSpinner, "GTKColorChooserPanel.greenSpinner"_s);
	$set(this, blueSpinner, $new($JSpinner, $$new($SpinnerNumberModel, 0, 0, 255, 1)));
	configureSpinner(this->blueSpinner, "GTKColorChooserPanel.blueSpinner"_s);
	$set(this, colorNameTF, $new($JTextField, 8));
	setLayout($$new($GridBagLayout));
	add(this, "GTKColorChooserPanel.hue"_s, this->hueSpinner, -1, -1);
	add(this, "GTKColorChooserPanel.red"_s, this->redSpinner, -1, -1);
	add(this, "GTKColorChooserPanel.saturation"_s, this->saturationSpinner, -1, -1);
	add(this, "GTKColorChooserPanel.green"_s, this->greenSpinner, -1, -1);
	add(this, "GTKColorChooserPanel.value"_s, this->valueSpinner, -1, -1);
	add(this, "GTKColorChooserPanel.blue"_s, this->blueSpinner, -1, -1);
	$var($Component, var$0, static_cast<$Component*>($new($JSeparator, $SwingConstants::HORIZONTAL)));
	add(var$0, $of($$new($GridBagConstraints, 1, 3, 4, 1, (double)1, (double)0, $GridBagConstraints::LINE_START, $GridBagConstraints::HORIZONTAL, $$new($Insets, 14, 0, 0, 0), 0, 0)));
	add(this, "GTKColorChooserPanel.colorName"_s, this->colorNameTF, 0, 4);
	add(static_cast<$Component*>(this->triangle), $of($$new($GridBagConstraints, 0, 0, 1, 5, (double)0, (double)0, $GridBagConstraints::LINE_START, $GridBagConstraints::NONE, $$new($Insets, 14, 20, 2, 9), 0, 0)));
	$var($Box, hBox, $Box::createHorizontalBox());
	$nc(hBox)->add(static_cast<$Component*>(this->lastLabel));
	hBox->add(static_cast<$Component*>(this->label));
	add(static_cast<$Component*>(hBox), $of($$new($GridBagConstraints, 0, 5, 1, 1, (double)0, (double)0, $GridBagConstraints::CENTER, $GridBagConstraints::NONE, $$new($Insets, 0, 0, 0, 0), 0, 0)));
	$var($Component, var$1, static_cast<$Component*>($new($JSeparator, $SwingConstants::HORIZONTAL)));
	add(var$1, $of($$new($GridBagConstraints, 0, 6, 5, 1, (double)1, (double)0, $GridBagConstraints::LINE_START, $GridBagConstraints::HORIZONTAL, $$new($Insets, 12, 0, 0, 0), 0, 0)));
}

void GTKColorChooserPanel::configureSpinner($JSpinner* spinner, $String* name) {
	$useLocalCurrentObjectStackCache();
	$nc(spinner)->addChangeListener(this);
	spinner->setName(name);
	$var($JComponent, editor, spinner->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JFormattedTextField, ftf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		$nc(ftf)->setFocusLostBehavior($JFormattedTextField::COMMIT_OR_REVERT);
	}
}

void GTKColorChooserPanel::add($Container* parent, $String* key, $JComponent* widget, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel, $($UIManager::getString($of($$str({key, "Text"_s})), $(getLocale())))));
	$var($String, mnemonic, $cast($String, $UIManager::get($$str({key, "Mnemonic"_s}), $(getLocale()))));
	if (mnemonic != nullptr) {
		try {
			label->setDisplayedMnemonic($Integer::parseInt(mnemonic));
		} catch ($NumberFormatException& nfe) {
		}
		$var($String, mnemonicIndex, $cast($String, $UIManager::get($$str({key, "MnemonicIndex"_s}), $(getLocale()))));
		if (mnemonicIndex != nullptr) {
			try {
				label->setDisplayedMnemonicIndex($Integer::parseInt(mnemonicIndex));
			} catch ($NumberFormatException& nfe) {
			}
		}
	}
	label->setLabelFor(widget);
	if (x < 0) {
		x = $nc(parent)->getComponentCount() % 4;
	}
	if (y < 0) {
		y = $nc(parent)->getComponentCount() / 4;
	}
	$var($GridBagConstraints, con, $new($GridBagConstraints, x + 1, y, 1, 1, (double)0, (double)0, $GridBagConstraints::FIRST_LINE_END, $GridBagConstraints::NONE, $$new($Insets, 4, 0, 0, 4), 0, 0));
	if (y == 0) {
		$nc(con->insets)->top = 14;
	}
	$nc(parent)->add(static_cast<$Component*>(label), $of(con));
	++con->gridx;
	parent->add(static_cast<$Component*>(widget), $of(con));
}

void GTKColorChooserPanel::updateChooser() {
	$useLocalCurrentObjectStackCache();
	if (!this->settingColor) {
		$nc(this->lastLabel)->setBackground($(getColorFromModel()));
		setColor($(getColorFromModel()), true, true, false);
	}
}

void GTKColorChooserPanel::setRed(int32_t red) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = (red << 16) | ($nc($(getColor()))->getGreen() << 8);
	setRGB(var$0 | $nc($(getColor()))->getBlue());
}

void GTKColorChooserPanel::setGreen(int32_t green) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = ($nc($(getColor()))->getRed() << 16) | (green << 8);
	setRGB(var$0 | $nc($(getColor()))->getBlue());
}

void GTKColorChooserPanel::setBlue(int32_t blue) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($(getColor()))->getRed() << 16;
	setRGB((var$0 | ($nc($(getColor()))->getGreen() << 8)) | blue);
}

void GTKColorChooserPanel::setHue(float hue, bool update) {
	setHSB(hue, this->saturation, this->brightness);
	if (update) {
		this->settingColor = true;
		$nc(this->hueSpinner)->setValue($($Integer::valueOf($cast(int32_t, (hue * 360)))));
		this->settingColor = false;
	}
}

float GTKColorChooserPanel::getHue() {
	return this->hue;
}

void GTKColorChooserPanel::setSaturation(float saturation) {
	setHSB(this->hue, saturation, this->brightness);
}

float GTKColorChooserPanel::getSaturation() {
	return this->saturation;
}

void GTKColorChooserPanel::setBrightness(float brightness) {
	setHSB(this->hue, this->saturation, brightness);
}

float GTKColorChooserPanel::getBrightness() {
	return this->brightness;
}

void GTKColorChooserPanel::setSaturationAndBrightness(float s, float b, bool update) {
	$useLocalCurrentObjectStackCache();
	setHSB(this->hue, s, b);
	if (update) {
		this->settingColor = true;
		$nc(this->saturationSpinner)->setValue($($Integer::valueOf($cast(int32_t, (s * 255)))));
		$nc(this->valueSpinner)->setValue($($Integer::valueOf($cast(int32_t, (b * 255)))));
		this->settingColor = false;
	}
}

void GTKColorChooserPanel::setRGB(int32_t rgb) {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, $new($Color, rgb));
	setColor(color, false, true, true);
	this->settingColor = true;
	$nc(this->hueSpinner)->setValue($($Integer::valueOf($cast(int32_t, (this->hue * 360)))));
	$nc(this->saturationSpinner)->setValue($($Integer::valueOf($cast(int32_t, (this->saturation * 255)))));
	$nc(this->valueSpinner)->setValue($($Integer::valueOf($cast(int32_t, (this->brightness * 255)))));
	this->settingColor = false;
}

void GTKColorChooserPanel::setHSB(float h, float s, float b) {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, $Color::getHSBColor(h, s, b));
	this->hue = h;
	this->saturation = s;
	this->brightness = b;
	setColor(color, false, false, true);
	this->settingColor = true;
	$nc(this->redSpinner)->setValue($($Integer::valueOf($nc(color)->getRed())));
	$nc(this->greenSpinner)->setValue($($Integer::valueOf($nc(color)->getGreen())));
	$nc(this->blueSpinner)->setValue($($Integer::valueOf($nc(color)->getBlue())));
	this->settingColor = false;
}

void GTKColorChooserPanel::setColor($Color* color$renamed, bool updateSpinners, bool updateHSB, bool updateModel) {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, color$renamed);
	if (color == nullptr) {
		$init($Color);
		$assign(color, $Color::BLACK);
	}
	this->settingColor = true;
	if (updateHSB) {
		int32_t var$0 = $nc(color)->getRed();
		int32_t var$1 = color->getGreen();
		$var($floats, hsb, $Color::RGBtoHSB(var$0, var$1, color->getBlue(), nullptr));
		this->hue = $nc(hsb)->get(0);
		this->saturation = hsb->get(1);
		this->brightness = hsb->get(2);
	}
	if (updateModel) {
		$var($ColorSelectionModel, model, getColorSelectionModel());
		if (model != nullptr) {
			model->setSelectedColor(color);
		}
	}
	$nc(this->triangle)->setColor(this->hue, this->saturation, this->brightness);
	$nc(this->label)->setBackground(color);
	$var($String, hexString, $Integer::toHexString(((int32_t)($nc(color)->getRGB() & (uint32_t)0x00FFFFFF)) | 0x01000000));
	$nc(this->colorNameTF)->setText($$str({"#"_s, $($nc(hexString)->substring(1))}));
	if (updateSpinners) {
		$nc(this->redSpinner)->setValue($($Integer::valueOf($nc(color)->getRed())));
		$nc(this->greenSpinner)->setValue($($Integer::valueOf($nc(color)->getGreen())));
		$nc(this->blueSpinner)->setValue($($Integer::valueOf($nc(color)->getBlue())));
		$nc(this->hueSpinner)->setValue($($Integer::valueOf($cast(int32_t, (this->hue * 360)))));
		$nc(this->saturationSpinner)->setValue($($Integer::valueOf($cast(int32_t, (this->saturation * 255)))));
		$nc(this->valueSpinner)->setValue($($Integer::valueOf($cast(int32_t, (this->brightness * 255)))));
	}
	this->settingColor = false;
}

$Color* GTKColorChooserPanel::getColor() {
	return $nc(this->label)->getBackground();
}

void GTKColorChooserPanel::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->settingColor) {
		return;
	}
	$var($Color, color, getColor());
	if ($equals($nc(e)->getSource(), this->hueSpinner)) {
		setHue($nc(($cast($Number, $($nc(this->hueSpinner)->getValue()))))->floatValue() / 360, false);
	} else if ($equals(e->getSource(), this->saturationSpinner)) {
		setSaturation($nc(($cast($Number, $($nc(this->saturationSpinner)->getValue()))))->floatValue() / 255);
	} else if ($equals(e->getSource(), this->valueSpinner)) {
		setBrightness($nc(($cast($Number, $($nc(this->valueSpinner)->getValue()))))->floatValue() / 255);
	} else if ($equals(e->getSource(), this->redSpinner)) {
		setRed($nc(($cast($Number, $($nc(this->redSpinner)->getValue()))))->intValue());
	} else if ($equals(e->getSource(), this->greenSpinner)) {
		setGreen($nc(($cast($Number, $($nc(this->greenSpinner)->getValue()))))->intValue());
	} else if ($equals(e->getSource(), this->blueSpinner)) {
		setBlue($nc(($cast($Number, $($nc(this->blueSpinner)->getValue()))))->intValue());
	}
}

GTKColorChooserPanel::GTKColorChooserPanel() {
}

void clinit$GTKColorChooserPanel($Class* class$) {
	$init($Math);
	GTKColorChooserPanel::PI_3 = (float)($Math::PI / 3);
}

$Class* GTKColorChooserPanel::load$($String* name, bool initialize) {
	$loadClass(GTKColorChooserPanel, name, initialize, &_GTKColorChooserPanel_ClassInfo_, clinit$GTKColorChooserPanel, allocate$GTKColorChooserPanel);
	return class$;
}

$Class* GTKColorChooserPanel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
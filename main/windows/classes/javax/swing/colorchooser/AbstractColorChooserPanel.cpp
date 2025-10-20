#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel$1.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <jcpp.h>

#undef TRANSPARENCY_ENABLED_PROPERTY

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $Icon = ::javax::swing::Icon;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractColorChooserPanel$1 = ::javax::swing::colorchooser::AbstractColorChooserPanel$1;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$NamedAttribute AbstractColorChooserPanel_Attribute_var$0[] = {
	{"description", 's', "Sets the transparency of a color selection on or off."},
	{}
};

$CompoundAttribute _AbstractColorChooserPanel_MethodAnnotations_setColorTransparencySelectionEnabled13[] = {
	{"Ljava/beans/BeanProperty;", AbstractColorChooserPanel_Attribute_var$0},
	{}
};

$FieldInfo _AbstractColorChooserPanel_FieldInfo_[] = {
	{"TRANSPARENCY_ENABLED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractColorChooserPanel, TRANSPARENCY_ENABLED_PROPERTY)},
	{"enabledListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $FINAL, $field(AbstractColorChooserPanel, enabledListener)},
	{"chooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $field(AbstractColorChooserPanel, chooser)},
	{}
};

$MethodInfo _AbstractColorChooserPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractColorChooserPanel::*)()>(&AbstractColorChooserPanel::init$))},
	{"buildChooser", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"getColorFromModel", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getColorSelectionModel", "()Ljavax/swing/colorchooser/ColorSelectionModel;", nullptr, $PUBLIC},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDisplayedMnemonicIndex", "()I", nullptr, $PUBLIC},
	{"getInt", "(Ljava/lang/Object;I)I", nullptr, 0},
	{"getLargeDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMnemonic", "()I", nullptr, $PUBLIC},
	{"getSmallDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT},
	{"installChooserPanel", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC},
	{"isColorTransparencySelectionEnabled", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setColorTransparencySelectionEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractColorChooserPanel_MethodAnnotations_setColorTransparencySelectionEnabled13},
	{"setSelectedColor", "(Ljava/awt/Color;)V", nullptr, 0},
	{"uninstallChooserPanel", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC},
	{"updateChooser", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AbstractColorChooserPanel_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.AbstractColorChooserPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractColorChooserPanel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.colorchooser.AbstractColorChooserPanel",
	"javax.swing.JPanel",
	nullptr,
	_AbstractColorChooserPanel_FieldInfo_,
	_AbstractColorChooserPanel_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractColorChooserPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.AbstractColorChooserPanel$1"
};

$Object* allocate$AbstractColorChooserPanel($Class* clazz) {
	return $of($alloc(AbstractColorChooserPanel));
}


$String* AbstractColorChooserPanel::TRANSPARENCY_ENABLED_PROPERTY = nullptr;

void AbstractColorChooserPanel::init$() {
	$JPanel::init$();
	$set(this, enabledListener, $new($AbstractColorChooserPanel$1, this));
}

int32_t AbstractColorChooserPanel::getMnemonic() {
	return 0;
}

int32_t AbstractColorChooserPanel::getDisplayedMnemonicIndex() {
	return -1;
}

void AbstractColorChooserPanel::installChooserPanel($JColorChooser* enclosingChooser) {
	if (this->chooser != nullptr) {
		$throwNew($RuntimeException, "This chooser panel is already installed"_s);
	}
	$set(this, chooser, enclosingChooser);
	$nc(this->chooser)->addPropertyChangeListener("enabled"_s, this->enabledListener);
	setEnabled($nc(this->chooser)->isEnabled());
	buildChooser();
	updateChooser();
}

void AbstractColorChooserPanel::uninstallChooserPanel($JColorChooser* enclosingChooser) {
	$nc(this->chooser)->removePropertyChangeListener("enabled"_s, this->enabledListener);
	$set(this, chooser, nullptr);
}

$ColorSelectionModel* AbstractColorChooserPanel::getColorSelectionModel() {
	return (this->chooser != nullptr) ? $nc(this->chooser)->getSelectionModel() : ($ColorSelectionModel*)nullptr;
}

$Color* AbstractColorChooserPanel::getColorFromModel() {
	$var($ColorSelectionModel, model, getColorSelectionModel());
	return (model != nullptr) ? $nc(model)->getSelectedColor() : ($Color*)nullptr;
}

void AbstractColorChooserPanel::setSelectedColor($Color* color) {
	$var($ColorSelectionModel, model, getColorSelectionModel());
	if (model != nullptr) {
		model->setSelectedColor(color);
	}
}

void AbstractColorChooserPanel::setColorTransparencySelectionEnabled(bool b) {
}

bool AbstractColorChooserPanel::isColorTransparencySelectionEnabled() {
	return true;
}

void AbstractColorChooserPanel::paint($Graphics* g) {
	$JPanel::paint(g);
}

int32_t AbstractColorChooserPanel::getInt(Object$* key, int32_t defaultValue) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $UIManager::get(key, $(getLocale())));
	if ($instanceOf($Integer, value)) {
		return $nc(($cast($Integer, value)))->intValue();
	}
	if ($instanceOf($String, value)) {
		try {
			return $Integer::parseInt($cast($String, value));
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	return defaultValue;
}

AbstractColorChooserPanel::AbstractColorChooserPanel() {
}

void clinit$AbstractColorChooserPanel($Class* class$) {
	$assignStatic(AbstractColorChooserPanel::TRANSPARENCY_ENABLED_PROPERTY, "TransparencyEnabled"_s);
}

$Class* AbstractColorChooserPanel::load$($String* name, bool initialize) {
	$loadClass(AbstractColorChooserPanel, name, initialize, &_AbstractColorChooserPanel_ClassInfo_, clinit$AbstractColorChooserPanel, allocate$AbstractColorChooserPanel);
	return class$;
}

$Class* AbstractColorChooserPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
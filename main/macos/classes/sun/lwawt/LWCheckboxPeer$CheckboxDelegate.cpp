#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate$1.h>
#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate$2.h>
#include <sun/lwawt/LWCheckboxPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LWCheckboxPeer = ::sun::lwawt::LWCheckboxPeer;
using $LWCheckboxPeer$CheckboxDelegate$1 = ::sun::lwawt::LWCheckboxPeer$CheckboxDelegate$1;
using $LWCheckboxPeer$CheckboxDelegate$2 = ::sun::lwawt::LWCheckboxPeer$CheckboxDelegate$2;

namespace sun {
	namespace lwawt {

$CompoundAttribute _LWCheckboxPeer$CheckboxDelegate_MethodAnnotations_getCurrentButton1[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _LWCheckboxPeer$CheckboxDelegate_MethodAnnotations_getMinimumSize2[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _LWCheckboxPeer$CheckboxDelegate_MethodAnnotations_reshape4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _LWCheckboxPeer$CheckboxDelegate_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$CheckboxDelegate, this$0)},
	{"cb", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $FINAL, $field(LWCheckboxPeer$CheckboxDelegate, cb)},
	{"rb", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $FINAL, $field(LWCheckboxPeer$CheckboxDelegate, rb)},
	{}
};

$MethodInfo _LWCheckboxPeer$CheckboxDelegate_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWCheckboxPeer;)V", nullptr, 0, $method(static_cast<void(LWCheckboxPeer$CheckboxDelegate::*)($LWCheckboxPeer*)>(&LWCheckboxPeer$CheckboxDelegate::init$))},
	{"getCurrentButton", "()Ljavax/swing/JToggleButton;", nullptr, 0, $method(static_cast<$JToggleButton*(LWCheckboxPeer$CheckboxDelegate::*)()>(&LWCheckboxPeer$CheckboxDelegate::getCurrentButton)), nullptr, nullptr, _LWCheckboxPeer$CheckboxDelegate_MethodAnnotations_getCurrentButton1},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _LWCheckboxPeer$CheckboxDelegate_MethodAnnotations_getMinimumSize2},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _LWCheckboxPeer$CheckboxDelegate_MethodAnnotations_reshape4},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setRadioButton", "(Z)V", nullptr, 0, $method(static_cast<void(LWCheckboxPeer$CheckboxDelegate::*)(bool)>(&LWCheckboxPeer$CheckboxDelegate::setRadioButton))},
	{"setSelected", "(Z)V", nullptr, 0, $method(static_cast<void(LWCheckboxPeer$CheckboxDelegate::*)(bool)>(&LWCheckboxPeer$CheckboxDelegate::setSelected))},
	{"setText", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LWCheckboxPeer$CheckboxDelegate::*)($String*)>(&LWCheckboxPeer$CheckboxDelegate::setText))},
	{}
};

$InnerClassInfo _LWCheckboxPeer$CheckboxDelegate_InnerClassesInfo_[] = {
	{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate", "sun.lwawt.LWCheckboxPeer", "CheckboxDelegate", $FINAL},
	{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$2", nullptr, nullptr, 0},
	{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCheckboxPeer$CheckboxDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWCheckboxPeer$CheckboxDelegate",
	"javax.swing.JComponent",
	nullptr,
	_LWCheckboxPeer$CheckboxDelegate_FieldInfo_,
	_LWCheckboxPeer$CheckboxDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_LWCheckboxPeer$CheckboxDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWCheckboxPeer"
};

$Object* allocate$LWCheckboxPeer$CheckboxDelegate($Class* clazz) {
	return $of($alloc(LWCheckboxPeer$CheckboxDelegate));
}

void LWCheckboxPeer$CheckboxDelegate::init$($LWCheckboxPeer* this$0) {
	$set(this, this$0, this$0);
	$JComponent::init$();
	$set(this, cb, $new($LWCheckboxPeer$CheckboxDelegate$1, this, this$0));
	$set(this, rb, $new($LWCheckboxPeer$CheckboxDelegate$2, this, this$0));
	setLayout(nullptr);
	setRadioButton(false);
	add(static_cast<$Component*>(this->rb));
	add(static_cast<$Component*>(this->cb));
}

void LWCheckboxPeer$CheckboxDelegate::setEnabled(bool enabled) {
	$JComponent::setEnabled(enabled);
	$nc(this->rb)->setEnabled(enabled);
	$nc(this->cb)->setEnabled(enabled);
}

void LWCheckboxPeer$CheckboxDelegate::setOpaque(bool isOpaque) {
	$JComponent::setOpaque(isOpaque);
	$nc(this->rb)->setOpaque(isOpaque);
	$nc(this->cb)->setOpaque(isOpaque);
}

void LWCheckboxPeer$CheckboxDelegate::reshape(int32_t x, int32_t y, int32_t w, int32_t h) {
	$JComponent::reshape(x, y, w, h);
	$nc(this->cb)->setBounds(0, 0, w, h);
	$nc(this->rb)->setBounds(0, 0, w, h);
}

$Dimension* LWCheckboxPeer$CheckboxDelegate::getPreferredSize() {
	return $nc($(getCurrentButton()))->getPreferredSize();
}

$Dimension* LWCheckboxPeer$CheckboxDelegate::getMinimumSize() {
	return $nc($(getCurrentButton()))->getMinimumSize();
}

void LWCheckboxPeer$CheckboxDelegate::setRadioButton(bool showRadioButton) {
	$nc(this->rb)->setVisible(showRadioButton);
	$nc(this->cb)->setVisible(!showRadioButton);
}

$JToggleButton* LWCheckboxPeer$CheckboxDelegate::getCurrentButton() {
	return $nc(this->cb)->isVisible() ? static_cast<$JToggleButton*>(this->cb) : static_cast<$JToggleButton*>(this->rb);
}

void LWCheckboxPeer$CheckboxDelegate::setText($String* label) {
	$nc(this->cb)->setText(label);
	$nc(this->rb)->setText(label);
}

void LWCheckboxPeer$CheckboxDelegate::setSelected(bool state) {
	$nc(this->cb)->setSelected(state);
	$nc(this->rb)->setSelected(state);
}

LWCheckboxPeer$CheckboxDelegate::LWCheckboxPeer$CheckboxDelegate() {
}

$Class* LWCheckboxPeer$CheckboxDelegate::load$($String* name, bool initialize) {
	$loadClass(LWCheckboxPeer$CheckboxDelegate, name, initialize, &_LWCheckboxPeer$CheckboxDelegate_ClassInfo_, allocate$LWCheckboxPeer$CheckboxDelegate);
	return class$;
}

$Class* LWCheckboxPeer$CheckboxDelegate::class$ = nullptr;

	} // lwawt
} // sun
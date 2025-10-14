#include <sun/print/ServiceDialog$IconRadioButton.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <sun/print/ServiceDialog$IconRadioButton$1.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef LEADING

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$IconRadioButton$1 = ::sun::print::ServiceDialog$IconRadioButton$1;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$IconRadioButton_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$IconRadioButton, this$0)},
	{"rb", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$IconRadioButton, rb)},
	{"lbl", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$IconRadioButton, lbl)},
	{}
};

$MethodInfo _ServiceDialog$IconRadioButton_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;Ljava/lang/String;Ljava/lang/String;ZLjavax/swing/ButtonGroup;Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$IconRadioButton::*)($ServiceDialog*,$String*,$String*,bool,$ButtonGroup*,$ActionListener*)>(&ServiceDialog$IconRadioButton::init$))},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"isSameAs", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setSelected", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$IconRadioButton_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$IconRadioButton", "sun.print.ServiceDialog", "IconRadioButton", $PRIVATE},
	{"sun.print.ServiceDialog$IconRadioButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog$IconRadioButton_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$IconRadioButton",
	"javax.swing.JPanel",
	nullptr,
	_ServiceDialog$IconRadioButton_FieldInfo_,
	_ServiceDialog$IconRadioButton_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$IconRadioButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$IconRadioButton($Class* clazz) {
	return $of($alloc(ServiceDialog$IconRadioButton));
}

void ServiceDialog$IconRadioButton::init$($ServiceDialog* this$0, $String* key, $String* img, bool selected, $ButtonGroup* bg, $ActionListener* al) {
	$beforeCallerSensitive();
	$set(this, this$0, this$0);
	$JPanel::init$(static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::LEADING)));
	$var($URL, imgURL, $ServiceDialog::getImageResource(img));
	$var($Icon, icon, $cast($Icon, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ServiceDialog$IconRadioButton$1, this, this$0, imgURL)))));
	$set(this, lbl, $new($JLabel, icon));
	add(static_cast<$Component*>(this->lbl));
	$set(this, rb, $ServiceDialog::createRadioButton(key, al));
	$nc(this->rb)->setSelected(selected);
	$ServiceDialog::addToBG(this->rb, this, bg);
}

void ServiceDialog$IconRadioButton::addActionListener($ActionListener* al) {
	$nc(this->rb)->addActionListener(al);
}

bool ServiceDialog$IconRadioButton::isSameAs(Object$* source) {
	return ($equals(this->rb, source));
}

void ServiceDialog$IconRadioButton::setEnabled(bool enabled) {
	$nc(this->rb)->setEnabled(enabled);
	$nc(this->lbl)->setEnabled(enabled);
}

bool ServiceDialog$IconRadioButton::isSelected() {
	return $nc(this->rb)->isSelected();
}

void ServiceDialog$IconRadioButton::setSelected(bool selected) {
	$nc(this->rb)->setSelected(selected);
}

ServiceDialog$IconRadioButton::ServiceDialog$IconRadioButton() {
}

$Class* ServiceDialog$IconRadioButton::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$IconRadioButton, name, initialize, &_ServiceDialog$IconRadioButton_ClassInfo_, allocate$ServiceDialog$IconRadioButton);
	return class$;
}

$Class* ServiceDialog$IconRadioButton::class$ = nullptr;

	} // print
} // sun
#include <sun/awt/windows/WPrinterJob$PrintToFileErrorDialog.h>

#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Label.h>
#include <java/awt/Panel.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <jcpp.h>

using $Button = ::java::awt::Button;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Label = ::java::awt::Label;
using $Panel = ::java::awt::Panel;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPrinterJob$PrintToFileErrorDialog_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(WPrinterJob$PrintToFileErrorDialog, this$0)},
	{}
};

$MethodInfo _WPrinterJob$PrintToFileErrorDialog_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/windows/WPrinterJob;Ljava/awt/Frame;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(WPrinterJob$PrintToFileErrorDialog::*)($WPrinterJob*,$Frame*,$String*,$String*,$String*)>(&WPrinterJob$PrintToFileErrorDialog::init$))},
	{"<init>", "(Lsun/awt/windows/WPrinterJob;Ljava/awt/Dialog;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(WPrinterJob$PrintToFileErrorDialog::*)($WPrinterJob*,$Dialog*,$String*,$String*,$String*)>(&WPrinterJob$PrintToFileErrorDialog::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"init", "(Ljava/awt/Component;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob$PrintToFileErrorDialog::*)($Component*,$String*,$String*,$String*)>(&WPrinterJob$PrintToFileErrorDialog::init))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WPrinterJob$PrintToFileErrorDialog_InnerClassesInfo_[] = {
	{"sun.awt.windows.WPrinterJob$PrintToFileErrorDialog", "sun.awt.windows.WPrinterJob", "PrintToFileErrorDialog", 0},
	{}
};

$ClassInfo _WPrinterJob$PrintToFileErrorDialog_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WPrinterJob$PrintToFileErrorDialog",
	"java.awt.Dialog",
	"java.awt.event.ActionListener",
	_WPrinterJob$PrintToFileErrorDialog_FieldInfo_,
	_WPrinterJob$PrintToFileErrorDialog_MethodInfo_,
	nullptr,
	nullptr,
	_WPrinterJob$PrintToFileErrorDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WPrinterJob"
};

$Object* allocate$WPrinterJob$PrintToFileErrorDialog($Class* clazz) {
	return $of($alloc(WPrinterJob$PrintToFileErrorDialog));
}

$String* WPrinterJob$PrintToFileErrorDialog::toString() {
	 return this->$Dialog::toString();
}

int32_t WPrinterJob$PrintToFileErrorDialog::hashCode() {
	 return this->$Dialog::hashCode();
}

bool WPrinterJob$PrintToFileErrorDialog::equals(Object$* arg0) {
	 return this->$Dialog::equals(arg0);
}

$Object* WPrinterJob$PrintToFileErrorDialog::clone() {
	 return this->$Dialog::clone();
}

void WPrinterJob$PrintToFileErrorDialog::finalize() {
	this->$Dialog::finalize();
}

void WPrinterJob$PrintToFileErrorDialog::init$($WPrinterJob* this$0, $Frame* parent, $String* title, $String* message, $String* buttonText) {
	$set(this, this$0, this$0);
	$Dialog::init$(parent, title, true);
	init(parent, title, message, buttonText);
}

void WPrinterJob$PrintToFileErrorDialog::init$($WPrinterJob* this$0, $Dialog* parent, $String* title, $String* message, $String* buttonText) {
	$set(this, this$0, this$0);
	$Dialog::init$(parent, title, true);
	init(parent, title, message, buttonText);
}

void WPrinterJob$PrintToFileErrorDialog::init($Component* parent, $String* title, $String* message, $String* buttonText) {
	$useLocalCurrentObjectStackCache();
	$var($Panel, p, $new($Panel));
	add("Center"_s, static_cast<$Component*>($$new($Label, message)));
	$var($Button, btn, $new($Button, buttonText));
	btn->addActionListener(this);
	p->add(static_cast<$Component*>(btn));
	add("South"_s, static_cast<$Component*>(p));
	pack();
	$var($Dimension, dDim, getSize());
	if (parent != nullptr) {
		$var($Rectangle, fRect, parent->getBounds());
		setLocation($nc(fRect)->x + ((fRect->width - $nc(dDim)->width) / 2), fRect->y + ((fRect->height - dDim->height) / 2));
	}
}

void WPrinterJob$PrintToFileErrorDialog::actionPerformed($ActionEvent* event) {
	setVisible(false);
	dispose();
	return;
}

WPrinterJob$PrintToFileErrorDialog::WPrinterJob$PrintToFileErrorDialog() {
}

$Class* WPrinterJob$PrintToFileErrorDialog::load$($String* name, bool initialize) {
	$loadClass(WPrinterJob$PrintToFileErrorDialog, name, initialize, &_WPrinterJob$PrintToFileErrorDialog_ClassInfo_, allocate$WPrinterJob$PrintToFileErrorDialog);
	return class$;
}

$Class* WPrinterJob$PrintToFileErrorDialog::class$ = nullptr;

		} // windows
	} // awt
} // sun
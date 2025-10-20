#include <Test4759934.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef BLUE
#undef CMD_CHOOSER
#undef CMD_DIALOG

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _Test4759934_FieldInfo_[] = {
	{"CMD_DIALOG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4759934, CMD_DIALOG)},
	{"CMD_CHOOSER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test4759934, CMD_CHOOSER)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $FINAL, $field(Test4759934, frame)},
	{}
};

$MethodInfo _Test4759934_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4759934::*)()>(&Test4759934::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"show", "(Ljava/awt/Window;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Test4759934::*)($Window*,$String*)>(&Test4759934::show))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4759934_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4759934",
	"javax.swing.JApplet",
	"java.awt.event.ActionListener",
	_Test4759934_FieldInfo_,
	_Test4759934_MethodInfo_
};

$Object* allocate$Test4759934($Class* clazz) {
	return $of($alloc(Test4759934));
}

$String* Test4759934::toString() {
	 return this->$JApplet::toString();
}

int32_t Test4759934::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test4759934::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test4759934::clone() {
	 return this->$JApplet::clone();
}

void Test4759934::finalize() {
	this->$JApplet::finalize();
}

$String* Test4759934::CMD_DIALOG = nullptr;
$String* Test4759934::CMD_CHOOSER = nullptr;

void Test4759934::init$() {
	$JApplet::init$();
	$set(this, frame, $new($JFrame, "Test"_s));
}

void Test4759934::init() {
	show(this->frame, Test4759934::CMD_DIALOG);
}

void Test4759934::actionPerformed($ActionEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($String, command, $nc(event)->getActionCommand());
	if ($nc(Test4759934::CMD_DIALOG)->equals(command)) {
		$var($JDialog, dialog, $new($JDialog, static_cast<$Frame*>(this->frame), "Dialog"_s));
		dialog->setLocation(200, 0);
		show(dialog, Test4759934::CMD_CHOOSER);
	} else if ($nc(Test4759934::CMD_CHOOSER)->equals(command)) {
		$var($Object, source, event->getSource());
		$var($Component, component, ($instanceOf($Component, source)) ? $cast($Component, source) : ($Component*)nullptr);
		$init($Color);
		$JColorChooser::showDialog(component, "ColorChooser"_s, $Color::BLUE);
	}
}

void Test4759934::show($Window* window, $String* command) {
	$useLocalCurrentObjectStackCache();
	$var($JButton, button, $new($JButton, command));
	button->setActionCommand(command);
	button->addActionListener(this);
	button->setFont($($nc($(button->getFont()))->deriveFont(64.0f)));
	$nc(window)->add(static_cast<$Component*>(button));
	window->pack();
	window->setVisible(true);
}

Test4759934::Test4759934() {
}

void clinit$Test4759934($Class* class$) {
	$assignStatic(Test4759934::CMD_DIALOG, "Show Dialog"_s);
	$assignStatic(Test4759934::CMD_CHOOSER, "Show ColorChooser"_s);
}

$Class* Test4759934::load$($String* name, bool initialize) {
	$loadClass(Test4759934, name, initialize, &_Test4759934_ClassInfo_, clinit$Test4759934, allocate$Test4759934);
	return class$;
}

$Class* Test4759934::class$ = nullptr;
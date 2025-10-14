#include <Test6348456.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/colorchooser/DefaultColorSelectionModel.h>
#include <jcpp.h>

#undef BLACK
#undef CENTER
#undef NORTH
#undef RED
#undef WHITE

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $DefaultColorSelectionModel = ::javax::swing::colorchooser::DefaultColorSelectionModel;

$FieldInfo _Test6348456_FieldInfo_[] = {
	{"WHITE", "Ljavax/swing/colorchooser/DefaultColorSelectionModel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6348456, WHITE)},
	{"BLACK", "Ljavax/swing/colorchooser/DefaultColorSelectionModel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6348456, BLACK)},
	{"chooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $field(Test6348456, chooser)},
	{}
};

$MethodInfo _Test6348456_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6348456::*)()>(&Test6348456::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6348456_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"Test6348456",
	"javax.swing.JApplet",
	"java.awt.event.ActionListener",
	_Test6348456_FieldInfo_,
	_Test6348456_MethodInfo_
};

$Object* allocate$Test6348456($Class* clazz) {
	return $of($alloc(Test6348456));
}

$String* Test6348456::toString() {
	 return this->$JApplet::toString();
}

int32_t Test6348456::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test6348456::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test6348456::clone() {
	 return this->$JApplet::clone();
}

void Test6348456::finalize() {
	this->$JApplet::finalize();
}

$DefaultColorSelectionModel* Test6348456::WHITE = nullptr;
$DefaultColorSelectionModel* Test6348456::BLACK = nullptr;

void Test6348456::init$() {
	$JApplet::init$();
}

void Test6348456::init() {
	$var($JButton, button, $new($JButton, "Swap models"_s));
	button->addActionListener(this);
	$init($Color);
	$set(this, chooser, $new($JColorChooser, $Color::RED));
	$nc(this->chooser)->setSelectionModel(Test6348456::WHITE);
	$init($BorderLayout);
	add($BorderLayout::NORTH, static_cast<$Component*>(button));
	add($BorderLayout::CENTER, static_cast<$Component*>(this->chooser));
}

void Test6348456::actionPerformed($ActionEvent* event) {
	$nc(this->chooser)->setSelectionModel($equals($nc(this->chooser)->getSelectionModel(), Test6348456::BLACK) ? static_cast<$ColorSelectionModel*>(Test6348456::WHITE) : static_cast<$ColorSelectionModel*>(Test6348456::BLACK));
}

void clinit$Test6348456($Class* class$) {
	$init($Color);
	$assignStatic(Test6348456::WHITE, $new($DefaultColorSelectionModel, $Color::WHITE));
	$assignStatic(Test6348456::BLACK, $new($DefaultColorSelectionModel, $Color::BLACK));
}

Test6348456::Test6348456() {
}

$Class* Test6348456::load$($String* name, bool initialize) {
	$loadClass(Test6348456, name, initialize, &_Test6348456_ClassInfo_, clinit$Test6348456, allocate$Test6348456);
	return class$;
}

$Class* Test6348456::class$ = nullptr;
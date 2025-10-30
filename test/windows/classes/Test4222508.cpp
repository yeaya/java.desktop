#include <Test4222508.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef CENTER
#undef NORTH

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JApplet = ::javax::swing::JApplet;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;

$FieldInfo _Test4222508_FieldInfo_[] = {
	{"checkbox", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE, $field(Test4222508, checkbox)},
	{"chooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $field(Test4222508, chooser)},
	{}
};

$MethodInfo _Test4222508_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4222508::*)()>(&Test4222508::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4222508_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"Test4222508",
	"javax.swing.JApplet",
	"java.awt.event.ItemListener",
	_Test4222508_FieldInfo_,
	_Test4222508_MethodInfo_
};

$Object* allocate$Test4222508($Class* clazz) {
	return $of($alloc(Test4222508));
}

$String* Test4222508::toString() {
	 return this->$JApplet::toString();
}

int32_t Test4222508::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test4222508::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test4222508::clone() {
	 return this->$JApplet::clone();
}

void Test4222508::finalize() {
	this->$JApplet::finalize();
}

void Test4222508::init$() {
	$JApplet::init$();
}

void Test4222508::init() {
	$set(this, chooser, $new($JColorChooser));
	$set(this, checkbox, $new($JCheckBox, "Enable the color chooser below"_s, true));
	$nc(this->checkbox)->addItemListener(this);
	$init($BorderLayout);
	add($BorderLayout::NORTH, static_cast<$Component*>(this->checkbox));
	add($BorderLayout::CENTER, static_cast<$Component*>(this->chooser));
}

void Test4222508::itemStateChanged($ItemEvent* event) {
	$nc(this->chooser)->setEnabled($nc(this->checkbox)->isSelected());
}

Test4222508::Test4222508() {
}

$Class* Test4222508::load$($String* name, bool initialize) {
	$loadClass(Test4222508, name, initialize, &_Test4222508_ClassInfo_, allocate$Test4222508);
	return class$;
}

$Class* Test4222508::class$ = nullptr;
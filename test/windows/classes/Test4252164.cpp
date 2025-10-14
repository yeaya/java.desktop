#include <Test4252164.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/LineBorder.h>
#include <jcpp.h>

#undef RED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $LineBorder = ::javax::swing::border::LineBorder;

$FieldInfo _Test4252164_FieldInfo_[] = {
	{"thickness", "I", nullptr, $PRIVATE, $field(Test4252164, thickness)},
	{"rounded", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(Test4252164, rounded)},
	{"straight", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(Test4252164, straight)},
	{}
};

$MethodInfo _Test4252164_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4252164::*)()>(&Test4252164::init$))},
	{"createUI", "()Ljavax/swing/JPanel;", nullptr, $PRIVATE, $method(static_cast<$JPanel*(Test4252164::*)()>(&Test4252164::createUI))},
	{"init", "()V", nullptr, $PUBLIC},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Test4252164::*)(int32_t)>(&Test4252164::update))},
	{}
};

$ClassInfo _Test4252164_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4252164",
	"javax.swing.JApplet",
	"java.awt.event.MouseWheelListener",
	_Test4252164_FieldInfo_,
	_Test4252164_MethodInfo_
};

$Object* allocate$Test4252164($Class* clazz) {
	return $of($alloc(Test4252164));
}

$String* Test4252164::toString() {
	 return this->$JApplet::toString();
}

int32_t Test4252164::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test4252164::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test4252164::clone() {
	 return this->$JApplet::clone();
}

void Test4252164::finalize() {
	this->$JApplet::finalize();
}

void Test4252164::init$() {
	$JApplet::init$();
}

void Test4252164::mouseWheelMoved($MouseWheelEvent* event) {
	update($nc(event)->getWheelRotation());
}

void Test4252164::init() {
	add($(static_cast<$Component*>(createUI())));
	addMouseWheelListener(this);
}

$JPanel* Test4252164::createUI() {
	$set(this, rounded, $new($JLabel, "ROUNDED"_s));
	$set(this, straight, $new($JLabel, "STRAIGHT"_s));
	$var($JPanel, panel, $new($JPanel));
	panel->add(static_cast<$Component*>(this->rounded));
	panel->add(static_cast<$Component*>(this->straight));
	update(10);
	return panel;
}

void Test4252164::update(int32_t thickness) {
	this->thickness += thickness;
	$init($Color);
	$nc(this->rounded)->setBorder($$new($LineBorder, $Color::RED, this->thickness, true));
	$nc(this->straight)->setBorder($$new($LineBorder, $Color::RED, this->thickness, false));
}

Test4252164::Test4252164() {
}

$Class* Test4252164::load$($String* name, bool initialize) {
	$loadClass(Test4252164, name, initialize, &_Test4252164_ClassInfo_, allocate$Test4252164);
	return class$;
}

$Class* Test4252164::class$ = nullptr;
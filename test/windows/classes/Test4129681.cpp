#include <Test4129681.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef CENTER
#undef DESELECTED
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
using $BorderFactory = ::javax::swing::BorderFactory;
using $JApplet = ::javax::swing::JApplet;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JToggleButton = ::javax::swing::JToggleButton;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$FieldInfo _Test4129681_FieldInfo_[] = {
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(Test4129681, label)},
	{}
};

$MethodInfo _Test4129681_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4129681::*)()>(&Test4129681::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4129681_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4129681",
	"javax.swing.JApplet",
	"java.awt.event.ItemListener",
	_Test4129681_FieldInfo_,
	_Test4129681_MethodInfo_
};

$Object* allocate$Test4129681($Class* clazz) {
	return $of($alloc(Test4129681));
}

$String* Test4129681::toString() {
	 return this->$JApplet::toString();
}

int32_t Test4129681::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test4129681::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test4129681::clone() {
	 return this->$JApplet::clone();
}

void Test4129681::finalize() {
	this->$JApplet::finalize();
}

void Test4129681::init$() {
	$JApplet::init$();
}

void Test4129681::init() {
	$var($JCheckBox, check, $new($JCheckBox, "disable"_s));
	check->addItemListener(this);
	$set(this, label, $new($JLabel, "message"_s));
	$nc(this->label)->setBorder($($BorderFactory::createTitledBorder("label"_s)));
	$nc(this->label)->setEnabled(!check->isSelected());
	$init($BorderLayout);
	add($BorderLayout::NORTH, static_cast<$Component*>(check));
	add($BorderLayout::CENTER, static_cast<$Component*>(this->label));
}

void Test4129681::itemStateChanged($ItemEvent* event) {
	$nc(this->label)->setEnabled($ItemEvent::DESELECTED == $nc(event)->getStateChange());
}

Test4129681::Test4129681() {
}

$Class* Test4129681::load$($String* name, bool initialize) {
	$loadClass(Test4129681, name, initialize, &_Test4129681_ClassInfo_, allocate$Test4129681);
	return class$;
}

$Class* Test4129681::class$ = nullptr;
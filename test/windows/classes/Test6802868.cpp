#include <Test6802868.h>

#include <SwingTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

using $SwingTest = ::SwingTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;

$FieldInfo _Test6802868_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $FINAL, $field(Test6802868, frame)},
	{"internal", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $FINAL, $field(Test6802868, internal)},
	{"size", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(Test6802868, size)},
	{"location", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(Test6802868, location)},
	{}
};

$MethodInfo _Test6802868_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(Test6802868::*)($JFrame*)>(&Test6802868::init$))},
	{"firstAction", "()V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"firstTest", "()V", nullptr, $PUBLIC},
	{"firstValidation", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6802868::main)), "java.lang.Throwable"},
	{"resizeFrame", "()V", nullptr, $PRIVATE, $method(static_cast<void(Test6802868::*)()>(&Test6802868::resizeFrame))},
	{"secondAction", "()V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"secondTest", "()V", nullptr, $PUBLIC},
	{"secondValidation", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6802868_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6802868",
	"java.lang.Object",
	nullptr,
	_Test6802868_FieldInfo_,
	_Test6802868_MethodInfo_
};

$Object* allocate$Test6802868($Class* clazz) {
	return $of($alloc(Test6802868));
}

void Test6802868::main($StringArray* args) {
	$load(Test6802868);
	$SwingTest::start(Test6802868::class$);
}

void Test6802868::init$($JFrame* frame) {
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	$set(this, frame, frame);
	$nc(this->frame)->add(static_cast<$Component*>(desktop));
	$set(this, internal, $new($JInternalFrame, $($of(this)->getClass()->getName()), true, true, true, true));
	$nc(this->internal)->setVisible(true);
	desktop->add(static_cast<$Component*>(this->internal));
}

void Test6802868::firstAction() {
	$nc(this->internal)->setMaximum(true);
}

void Test6802868::firstTest() {
	$set(this, size, $nc(this->internal)->getSize());
	resizeFrame();
}

void Test6802868::firstValidation() {
	if ($nc($($nc(this->internal)->getSize()))->equals(this->size)) {
		$throwNew($Error, "InternalFrame hasn\'t changed its size"_s);
	}
}

void Test6802868::secondAction() {
	$nc(this->internal)->setIcon(true);
}

void Test6802868::secondTest() {
	$set(this, location, $nc($($nc(this->internal)->getDesktopIcon()))->getLocation());
	resizeFrame();
}

void Test6802868::secondValidation() {
	if ($nc($($nc($($nc(this->internal)->getDesktopIcon()))->getLocation()))->equals(this->location)) {
		$throwNew($Error, "JDesktopIcon hasn\'t moved"_s);
	}
}

void Test6802868::resizeFrame() {
	$var($Dimension, size, $nc(this->frame)->getSize());
	$nc(size)->width += 10;
	size->height += 10;
	$nc(this->frame)->setSize(size);
}

Test6802868::Test6802868() {
}

$Class* Test6802868::load$($String* name, bool initialize) {
	$loadClass(Test6802868, name, initialize, &_Test6802868_ClassInfo_, allocate$Test6802868);
	return class$;
}

$Class* Test6802868::class$ = nullptr;
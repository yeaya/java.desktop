#include <Test6977726.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _Test6977726_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6977726::*)()>(&Test6977726::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6977726_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6977726",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_Test6977726_MethodInfo_
};

$Object* allocate$Test6977726($Class* clazz) {
	return $of($alloc(Test6977726));
}

void Test6977726::init$() {
	$JApplet::init$();
}

void Test6977726::init() {
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setPreviewPanel($$new($JLabel, "Text Preview Panel"_s));
	$nc($(getContentPane()))->add(static_cast<$Component*>(chooser));
}

Test6977726::Test6977726() {
}

$Class* Test6977726::load$($String* name, bool initialize) {
	$loadClass(Test6977726, name, initialize, &_Test6977726_ClassInfo_, allocate$Test6977726);
	return class$;
}

$Class* Test6977726::class$ = nullptr;
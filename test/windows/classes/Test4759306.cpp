#include <Test4759306.h>

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
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _Test4759306_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4759306::*)()>(&Test4759306::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4759306_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4759306",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_Test4759306_MethodInfo_
};

$Object* allocate$Test4759306($Class* clazz) {
	return $of($alloc(Test4759306));
}

void Test4759306::init$() {
	$JApplet::init$();
}

void Test4759306::init() {
	$useLocalCurrentObjectStackCache();
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setPreviewPanel($$new($JPanel));
	$nc($(getContentPane()))->add(static_cast<$Component*>(chooser));
}

Test4759306::Test4759306() {
}

$Class* Test4759306::load$($String* name, bool initialize) {
	$loadClass(Test4759306, name, initialize, &_Test4759306_ClassInfo_, allocate$Test4759306);
	return class$;
}

$Class* Test4759306::class$ = nullptr;
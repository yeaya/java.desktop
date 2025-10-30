#include <Test6256140$4.h>

#include <Test6256140.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JToolTip.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JLabel = ::javax::swing::JLabel;
using $JToolTip = ::javax::swing::JToolTip;

$MethodInfo _Test6256140$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6256140$4::*)()>(&Test6256140$4::init$))},
	{"createToolTip", "()Ljavax/swing/JToolTip;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6256140$4_EnclosingMethodInfo_ = {
	"Test6256140",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _Test6256140$4_InnerClassesInfo_[] = {
	{"Test6256140$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6256140$4_ClassInfo_ = {
	$ACC_SUPER,
	"Test6256140$4",
	"javax.swing.JFormattedTextField",
	nullptr,
	nullptr,
	_Test6256140$4_MethodInfo_,
	nullptr,
	&_Test6256140$4_EnclosingMethodInfo_,
	_Test6256140$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6256140"
};

$Object* allocate$Test6256140$4($Class* clazz) {
	return $of($alloc(Test6256140$4));
}

void Test6256140$4::init$() {
	$JFormattedTextField::init$();
}

$JToolTip* Test6256140$4::createToolTip() {
	$useLocalCurrentObjectStackCache();
	$var($JToolTip, toolTip, $JFormattedTextField::createToolTip());
	$nc(toolTip)->setLayout($$new($BorderLayout));
	$init($Test6256140);
	toolTip->add(static_cast<$Component*>($Test6256140::toolTipLabel));
	return toolTip;
}

Test6256140$4::Test6256140$4() {
}

$Class* Test6256140$4::load$($String* name, bool initialize) {
	$loadClass(Test6256140$4, name, initialize, &_Test6256140$4_ClassInfo_, allocate$Test6256140$4);
	return class$;
}

$Class* Test6256140$4::class$ = nullptr;
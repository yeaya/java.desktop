#include <Test8039464.h>

#include <Test8039464$1.h>
#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Panel.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BOTH
#undef HORIZONTAL
#undef VERTICAL

using $Test8039464$1 = ::Test8039464$1;
using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Panel = ::java::awt::Panel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _Test8039464_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8039464::*)()>(&Test8039464::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"init", "(Ljava/awt/Container;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Container*)>(&Test8039464::init))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8039464::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test8039464_InnerClassesInfo_[] = {
	{"Test8039464$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8039464_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8039464",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_Test8039464_MethodInfo_,
	nullptr,
	nullptr,
	_Test8039464_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test8039464$1"
};

$Object* allocate$Test8039464($Class* clazz) {
	return $of($alloc(Test8039464));
}

void Test8039464::init$() {
	$JApplet::init$();
}

void Test8039464::init() {
	init(this);
}

void Test8039464::init($Container* container) {
	$init(Test8039464);
	$useLocalCurrentObjectStackCache();
	$nc(container)->setLayout($$new($GridBagLayout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->fill = $GridBagConstraints::BOTH;
	gbc->gridx = 0;
	gbc->gridy = 1;
	$var($JLabel, label, $new($JLabel));
	$var($Dimension, size, $new($Dimension, 111, 0));
	label->setPreferredSize(size);
	label->setMinimumSize(size);
	container->add(static_cast<$Component*>(label), $of(gbc));
	gbc->gridx = 1;
	gbc->weightx = (double)1;
	container->add(static_cast<$Component*>($$new($JScrollBar, $JScrollBar::HORIZONTAL, 1, 111, 1, 1111)), $of(gbc));
	gbc->gridx = 2;
	gbc->gridy = 0;
	gbc->weightx = (double)0;
	gbc->weighty = (double)1;
	container->add(static_cast<$Component*>($$new($JScrollBar, $JScrollBar::VERTICAL, 1, 111, 1, 1111)), $of(gbc));
}

void Test8039464::main($StringArray* args) {
	$init(Test8039464);
	$SwingUtilities::invokeLater($$new($Test8039464$1));
}

void clinit$Test8039464($Class* class$) {
	{
		try {
			$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
		} catch ($Exception& exception) {
			$throwNew($Error, "unexpected"_s, exception);
		}
	}
}

Test8039464::Test8039464() {
}

$Class* Test8039464::load$($String* name, bool initialize) {
	$loadClass(Test8039464, name, initialize, &_Test8039464_ClassInfo_, clinit$Test8039464, allocate$Test8039464);
	return class$;
}

$Class* Test8039464::class$ = nullptr;
#include <Test4247606.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef BELOW_BOTTOM

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$MethodInfo _Test4247606_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4247606::*)()>(&Test4247606::init$))},
	{"create", "(Ljavax/swing/JComponent;Ljavax/swing/border/Border;)Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JPanel*(*)($JComponent*,$Border*)>(&Test4247606::create))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4247606_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4247606",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_Test4247606_MethodInfo_
};

$Object* allocate$Test4247606($Class* clazz) {
	return $of($alloc(Test4247606));
}

void Test4247606::init$() {
	$JApplet::init$();
}

void Test4247606::init() {
	$useLocalCurrentObjectStackCache();
	$var($JButton, button, $new($JButton, "Button"_s));
	$init($Color);
	button->setBorder($($BorderFactory::createLineBorder($Color::red, 1)));
	$var($TitledBorder, border, $new($TitledBorder, "Bordered Pane"_s));
	border->setTitlePosition($TitledBorder::BELOW_BOTTOM);
	$var($JPanel, panel, create(button, border));
	$nc(panel)->setBackground($Color::green);
	$nc($(getContentPane()))->add($(static_cast<$Component*>(create(panel, $($BorderFactory::createEmptyBorder(10, 10, 10, 10))))));
}

$JPanel* Test4247606::create($JComponent* component, $Border* border) {
	$init(Test4247606);
	$useLocalCurrentObjectStackCache();
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	panel->setBorder(border);
	panel->add(static_cast<$Component*>(component));
	return panel;
}

Test4247606::Test4247606() {
}

$Class* Test4247606::load$($String* name, bool initialize) {
	$loadClass(Test4247606, name, initialize, &_Test4247606_ClassInfo_, allocate$Test4247606);
	return class$;
}

$Class* Test4247606::class$ = nullptr;
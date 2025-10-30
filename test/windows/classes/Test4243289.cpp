#include <Test4243289.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef DEFAULT_JUSTIFICATION
#undef DEFAULT_POSITION
#undef PLAIN

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$MethodInfo _Test4243289_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4243289::*)()>(&Test4243289::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4243289_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4243289",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_Test4243289_MethodInfo_
};

$Object* allocate$Test4243289($Class* clazz) {
	return $of($alloc(Test4243289));
}

void Test4243289::init$() {
	$JApplet::init$();
}

void Test4243289::init() {
	$useLocalCurrentObjectStackCache();
	$var($Font, font, $new($Font, "Dialog"_s, $Font::PLAIN, 12));
	$var($TitledBorder, border, $BorderFactory::createTitledBorder($($BorderFactory::createEtchedBorder()), "Panel Title"_s, $TitledBorder::DEFAULT_JUSTIFICATION, $TitledBorder::DEFAULT_POSITION, font));
	$var($JPanel, panel, $new($JPanel));
	panel->setBorder(border);
	$nc($(getContentPane()))->add(static_cast<$Component*>(panel));
}

Test4243289::Test4243289() {
}

$Class* Test4243289::load$($String* name, bool initialize) {
	$loadClass(Test4243289, name, initialize, &_Test4243289_ClassInfo_, allocate$Test4243289);
	return class$;
}

$Class* Test4243289::class$ = nullptr;
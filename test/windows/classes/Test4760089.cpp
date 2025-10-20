#include <Test4760089.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EtchedBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef LEFT
#undef RIGHT
#undef TOP

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$MethodInfo _Test4760089_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4760089::*)()>(&Test4760089::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4760089_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4760089",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_Test4760089_MethodInfo_
};

$Object* allocate$Test4760089($Class* clazz) {
	return $of($alloc(Test4760089));
}

void Test4760089::init$() {
	$JApplet::init$();
}

void Test4760089::init() {
	$useLocalCurrentObjectStackCache();
	$var($Border, border, $new($EtchedBorder));
	$assign(border, $new($TitledBorder, border, "LEFT"_s, $TitledBorder::LEFT, $TitledBorder::TOP));
	$assign(border, $new($TitledBorder, border, "RIGHT"_s, $TitledBorder::RIGHT, $TitledBorder::TOP));
	$var($JPanel, panel, $new($JPanel));
	panel->setBorder(border);
	$nc($(getContentPane()))->add(static_cast<$Component*>(panel));
}

Test4760089::Test4760089() {
}

$Class* Test4760089::load$($String* name, bool initialize) {
	$loadClass(Test4760089, name, initialize, &_Test4760089_ClassInfo_, allocate$Test4760089);
	return class$;
}

$Class* Test4760089::class$ = nullptr;
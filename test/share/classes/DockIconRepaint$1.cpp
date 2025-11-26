#include <DockIconRepaint$1.h>

#include <DockIconRepaint.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $DockIconRepaint = ::DockIconRepaint;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _DockIconRepaint$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DockIconRepaint$1::*)()>(&DockIconRepaint$1::init$))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _DockIconRepaint$1_EnclosingMethodInfo_ = {
	"DockIconRepaint",
	"createUI",
	"()V"
};

$InnerClassInfo _DockIconRepaint$1_InnerClassesInfo_[] = {
	{"DockIconRepaint$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DockIconRepaint$1_ClassInfo_ = {
	$ACC_SUPER,
	"DockIconRepaint$1",
	"javax.swing.JPanel",
	nullptr,
	nullptr,
	_DockIconRepaint$1_MethodInfo_,
	nullptr,
	&_DockIconRepaint$1_EnclosingMethodInfo_,
	_DockIconRepaint$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DockIconRepaint"
};

$Object* allocate$DockIconRepaint$1($Class* clazz) {
	return $of($alloc(DockIconRepaint$1));
}

void DockIconRepaint$1::init$() {
	$JPanel::init$();
}

void DockIconRepaint$1::paintComponent($Graphics* g) {
	$init($DockIconRepaint);
	$nc(g)->setColor($DockIconRepaint::color);
	int32_t var$0 = getWidth();
	g->fillRect(0, 0, var$0, getHeight());
}

DockIconRepaint$1::DockIconRepaint$1() {
}

$Class* DockIconRepaint$1::load$($String* name, bool initialize) {
	$loadClass(DockIconRepaint$1, name, initialize, &_DockIconRepaint$1_ClassInfo_, allocate$DockIconRepaint$1);
	return class$;
}

$Class* DockIconRepaint$1::class$ = nullptr;
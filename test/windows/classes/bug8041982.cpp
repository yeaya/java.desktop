#include <bug8041982.h>

#include <bug8041982$1.h>
#include <bug8041982$BusyLayer.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/LayerUI.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8041982$1 = ::bug8041982$1;
using $bug8041982$BusyLayer = ::bug8041982$BusyLayer;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLayer = ::javax::swing::JLayer;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $LayerUI = ::javax::swing::plaf::LayerUI;

$MethodInfo _bug8041982_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8041982::*)()>(&bug8041982::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug8041982::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8041982_InnerClassesInfo_[] = {
	{"bug8041982$BusyLayer", "bug8041982", "BusyLayer", $PRIVATE},
	{"bug8041982$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041982_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8041982",
	"javax.swing.JFrame",
	nullptr,
	nullptr,
	_bug8041982_MethodInfo_,
	nullptr,
	nullptr,
	_bug8041982_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8041982$BusyLayer,bug8041982$1"
};

$Object* allocate$bug8041982($Class* clazz) {
	return $of($alloc(bug8041982));
}

void bug8041982::init$() {
	$JFrame::init$();
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($Component, var$0, static_cast<$Component*>($new($JPanel)));
	add(static_cast<$Component*>($$new($JLayer, var$0, $$new($bug8041982$BusyLayer, this))));
	setSize(200, 300);
	setVisible(true);
}

void bug8041982::main($StringArray* args) {
	$init(bug8041982);
	$SwingUtilities::invokeLater($$new($bug8041982$1));
	$Thread::sleep(5000);
}

bug8041982::bug8041982() {
}

$Class* bug8041982::load$($String* name, bool initialize) {
	$loadClass(bug8041982, name, initialize, &_bug8041982_ClassInfo_, allocate$bug8041982);
	return class$;
}

$Class* bug8041982::class$ = nullptr;
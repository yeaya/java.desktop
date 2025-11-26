#include <Test8013370.h>

#include <Test8013370$1.h>
#include <Test8013370$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef VK_A
#undef VK_CONTROL

using $Test8013370$1 = ::Test8013370$1;
using $Test8013370$2 = ::Test8013370$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _Test8013370_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(Test8013370, frame)},
	{"error", "Z", nullptr, $PRIVATE, $field(Test8013370, error)},
	{}
};

$MethodInfo _Test8013370_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8013370::*)()>(&Test8013370::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8013370::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"validate", "()V", nullptr, $PRIVATE, $method(static_cast<void(Test8013370::*)()>(&Test8013370::validate))},
	{}
};

$InnerClassInfo _Test8013370_InnerClassesInfo_[] = {
	{"Test8013370$2", nullptr, nullptr, 0},
	{"Test8013370$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8013370_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8013370",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test8013370_FieldInfo_,
	_Test8013370_MethodInfo_,
	nullptr,
	nullptr,
	_Test8013370_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test8013370$2,Test8013370$1"
};

$Object* allocate$Test8013370($Class* clazz) {
	return $of($alloc(Test8013370));
}

void Test8013370::init$() {
}

void Test8013370::main($StringArray* args) {
	$init(Test8013370);
	$useLocalCurrentObjectStackCache();
	$var(Test8013370, task, $new(Test8013370));
	$SwingUtilities::invokeAndWait(task);
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_CONTROL);
	robot->keyRelease($KeyEvent::VK_CONTROL);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(task);
	task->validate();
}

void Test8013370::run() {
	$useLocalCurrentObjectStackCache();
	if (this->frame == nullptr) {
		$var($JMenuBar, menu, $new($Test8013370$1, this));
		menu->add(static_cast<$Component*>($$new($JMenuItem, "Menu"_s)));
		$var($InputMap, map, menu->getInputMap(2));
		for (int32_t i = 0; i < 9; ++i) {
			$var($String, name, $str({" Action #"_s, $$str(i)}));
			$nc(map)->put($($KeyStroke::getKeyStroke($KeyEvent::VK_A + i, 128)), name);
			$nc($(menu->getActionMap()))->put(name, $$new($Test8013370$2, this, name));
		}
		$set(this, frame, $new($JFrame, "8013370"_s));
		$nc(this->frame)->setJMenuBar(menu);
		$nc(this->frame)->setVisible(true);
	} else {
		$nc(this->frame)->dispose();
	}
}

void Test8013370::validate() {
	if (this->error) {
		$throwNew($Error, "KeyStroke is null"_s);
	}
}

Test8013370::Test8013370() {
}

$Class* Test8013370::load$($String* name, bool initialize) {
	$loadClass(Test8013370, name, initialize, &_Test8013370_ClassInfo_, allocate$Test8013370);
	return class$;
}

$Class* Test8013370::class$ = nullptr;
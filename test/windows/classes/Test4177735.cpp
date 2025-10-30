#include <Test4177735.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <jcpp.h>

#undef DELAY

using $ThreadArray = $Array<::java::lang::Thread>;
using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JDialog = ::javax::swing::JDialog;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;

$FieldInfo _Test4177735_FieldInfo_[] = {
	{"DELAY", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test4177735, DELAY)},
	{"count", "I", nullptr, $PRIVATE, $field(Test4177735, count)},
	{}
};

$MethodInfo _Test4177735_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4177735::*)()>(&Test4177735::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4177735::main)), "java.lang.Exception"},
	{"pause", "(J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int64_t)>(&Test4177735::pause))},
	{"run", "()V", nullptr, $PUBLIC},
	{"show", "(Ljavax/swing/JColorChooser;)Ljavax/swing/JDialog;", nullptr, $STATIC, $method(static_cast<$JDialog*(*)($JColorChooser*)>(&Test4177735::show))},
	{}
};

$ClassInfo _Test4177735_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4177735",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test4177735_FieldInfo_,
	_Test4177735_MethodInfo_
};

$Object* allocate$Test4177735($Class* clazz) {
	return $of($alloc(Test4177735));
}

void Test4177735::init$() {
}

void Test4177735::main($StringArray* args) {
	$init(Test4177735);
	$useLocalCurrentObjectStackCache();
	int32_t hsvIndex = 0;
	int32_t panelsLength = 0;
	int32_t finalIndex = 0;
	$var($JColorChooser, chooser, $new($JColorChooser));
	$var($AbstractColorChooserPanelArray, panels, chooser->getChooserPanels());
	panelsLength = $nc(panels)->length;
	for (int32_t i = 0; i < panelsLength; ++i) {
		if ($nc($($nc(panels->get(i))->getDisplayName()))->equals("HSV"_s)) {
			hsvIndex = i;
		}
	}
	finalIndex = $Math::min(hsvIndex, panelsLength - 1);
	chooser->setChooserPanels($$new($AbstractColorChooserPanelArray, {panels->get(finalIndex)}));
	$var($JDialog, dialog, show(chooser));
	pause(Test4177735::DELAY);
	$nc(dialog)->dispose();
	pause(Test4177735::DELAY);
	$var(Test4177735, test, $new(Test4177735));
	$SwingUtilities::invokeAndWait(test);
	if (test->count != 0) {
		$throwNew($Error, $$str({"JColorChooser leaves "_s, $$str(test->count), " threads running"_s}));
	}
}

$JDialog* Test4177735::show($JColorChooser* chooser) {
	$init(Test4177735);
	$useLocalCurrentObjectStackCache();
	$var($JDialog, dialog, $JColorChooser::createDialog(nullptr, nullptr, false, chooser, nullptr, nullptr));
	$nc(dialog)->setVisible(true);
	$var($Point, point, nullptr);
	while (point == nullptr) {
		try {
			$assign(point, dialog->getLocationOnScreen());
		} catch ($IllegalStateException& exception) {
			pause(Test4177735::DELAY);
		}
	}
	return dialog;
}

void Test4177735::pause(int64_t delay) {
	$init(Test4177735);
	try {
		$Thread::sleep(delay);
	} catch ($InterruptedException& exception) {
	}
}

void Test4177735::run() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, group, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadArray, threads, $new($ThreadArray, $nc(group)->activeCount()));
	int32_t count = group->enumerate(threads, false);
	for (int32_t i = 0; i < count; ++i) {
		$var($String, name, $nc(threads->get(i))->getName());
		if ("SyntheticImageGenerator"_s->equals(name)) {
			++this->count;
		}
	}
}

Test4177735::Test4177735() {
}

$Class* Test4177735::load$($String* name, bool initialize) {
	$loadClass(Test4177735, name, initialize, &_Test4177735_ClassInfo_, allocate$Test4177735);
	return class$;
}

$Class* Test4177735::class$ = nullptr;
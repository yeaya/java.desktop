#include <Test8019180.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef ITEMS
#undef LATCH

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _Test8019180_FieldInfo_[] = {
	{"LATCH", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8019180, LATCH)},
	{"ITEMS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8019180, ITEMS)},
	{"test", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE, $field(Test8019180, test)},
	{}
};

$MethodInfo _Test8019180_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8019180::*)()>(&Test8019180::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8019180::main)), "java.lang.InterruptedException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test8019180_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8019180",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test8019180_FieldInfo_,
	_Test8019180_MethodInfo_
};

$Object* allocate$Test8019180($Class* clazz) {
	return $of($alloc(Test8019180));
}

$CountDownLatch* Test8019180::LATCH = nullptr;
$StringArray* Test8019180::ITEMS = nullptr;

void Test8019180::init$() {
}

void Test8019180::main($StringArray* args) {
	$init(Test8019180);
	$SwingUtilities::invokeLater($$new(Test8019180));
	$nc(Test8019180::LATCH)->await();
}

void Test8019180::run() {
	$useLocalCurrentObjectStackCache();
	if (this->test == nullptr) {
		$set(this, test, $new($JComboBox, Test8019180::ITEMS));
		$nc(this->test)->addActionListener(this->test);
		$var($JFrame, frame, $new($JFrame));
		frame->add(static_cast<$Component*>(this->test));
		frame->pack();
		frame->setVisible(true);
		$SwingUtilities::invokeLater(this);
	} else {
		int32_t index = $nc(this->test)->getSelectedIndex();
		$nc(this->test)->setSelectedIndex(1 + index);
		if (0 > $nc(this->test)->getSelectedIndex()) {
			$nc($System::err)->println("ERROR: no selection"_s);
			$System::exit(0x007A5CEC);
		}
		$nc($($SwingUtilities::getWindowAncestor(this->test)))->dispose();
		$nc(Test8019180::LATCH)->countDown();
	}
}

void clinit$Test8019180($Class* class$) {
	$assignStatic(Test8019180::LATCH, $new($CountDownLatch, 1));
	$assignStatic(Test8019180::ITEMS, $new($StringArray, {
		"First"_s,
		"Second"_s,
		"Third"_s,
		"Fourth"_s
	}));
}

Test8019180::Test8019180() {
}

$Class* Test8019180::load$($String* name, bool initialize) {
	$loadClass(Test8019180, name, initialize, &_Test8019180_ClassInfo_, clinit$Test8019180, allocate$Test8019180);
	return class$;
}

$Class* Test8019180::class$ = nullptr;
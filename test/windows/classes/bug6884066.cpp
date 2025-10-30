#include <bug6884066.h>

#include <bug6884066$1.h>
#include <bug6884066$2.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $bug6884066$1 = ::bug6884066$1;
using $bug6884066$2 = ::bug6884066$2;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

$FieldInfo _bug6884066_FieldInfo_[] = {
	{"header", "Ljavax/swing/table/JTableHeader;", nullptr, $PRIVATE | $STATIC, $staticField(bug6884066, header)},
	{}
};

$MethodInfo _bug6884066_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6884066::*)()>(&bug6884066::init$))},
	{"checkColumn", "(ILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$String*)>(&bug6884066::checkColumn))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6884066::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6884066_InnerClassesInfo_[] = {
	{"bug6884066$2", nullptr, nullptr, 0},
	{"bug6884066$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6884066_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6884066",
	"java.lang.Object",
	nullptr,
	_bug6884066_FieldInfo_,
	_bug6884066_MethodInfo_,
	nullptr,
	nullptr,
	_bug6884066_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6884066$2,bug6884066$1"
};

$Object* allocate$bug6884066($Class* clazz) {
	return $of($alloc(bug6884066));
}

$JTableHeader* bug6884066::header = nullptr;

void bug6884066::init$() {
}

void bug6884066::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(20);
	$SwingUtilities::invokeAndWait($$new($bug6884066$1));
	robot->waitForIdle();
	$init(bug6884066);
	$var($Point, point, $nc(bug6884066::header)->getLocationOnScreen());
	robot->mouseMove($nc(point)->x + 3, point->y + 3);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	for (int32_t i = 0; i < $nc(bug6884066::header)->getWidth() - 3; ++i) {
		robot->mouseMove($nc(point)->x + i, point->y + 3);
	}
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	$SwingUtilities::invokeAndWait($$new($bug6884066$2));
}

void bug6884066::checkColumn(int32_t index, $String* str) {
	$useLocalCurrentObjectStackCache();
	$init(bug6884066);
	$var($TableColumnModel, model, $nc(bug6884066::header)->getColumnModel());
	$var($Object, value, $nc($($nc(model)->getColumn(index)))->getHeaderValue());
	if (!$nc(str)->equals(value)) {
		$throwNew($RuntimeException, $$str({"Unexpected header\'s value; index = "_s, $$str(index), " value = "_s, value}));
	}
}

bug6884066::bug6884066() {
}

$Class* bug6884066::load$($String* name, bool initialize) {
	$loadClass(bug6884066, name, initialize, &_bug6884066_ClassInfo_, allocate$bug6884066);
	return class$;
}

$Class* bug6884066::class$ = nullptr;
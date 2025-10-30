#include <bug6848475.h>

#include <bug6848475$1.h>
#include <bug6848475$2.h>
#include <bug6848475$3.h>
#include <bug6848475$4.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/Field.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $bug6848475$1 = ::bug6848475$1;
using $bug6848475$2 = ::bug6848475$2;
using $bug6848475$3 = ::bug6848475$3;
using $bug6848475$4 = ::bug6848475$4;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $JFrame = ::javax::swing::JFrame;
using $JSlider = ::javax::swing::JSlider;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

$FieldInfo _bug6848475_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, frame)},
	{"slider", "Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, slider)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, robot)},
	{"thumbRectX", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, thumbRectX)},
	{}
};

$MethodInfo _bug6848475_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6848475::*)()>(&bug6848475::init$))},
	{"getThumbRectField", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Rectangle*(*)()>(&bug6848475::getThumbRectField))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6848475::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6848475_InnerClassesInfo_[] = {
	{"bug6848475$4", nullptr, nullptr, 0},
	{"bug6848475$3", nullptr, nullptr, 0},
	{"bug6848475$2", nullptr, nullptr, 0},
	{"bug6848475$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6848475_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6848475",
	"java.lang.Object",
	nullptr,
	_bug6848475_FieldInfo_,
	_bug6848475_MethodInfo_,
	nullptr,
	nullptr,
	_bug6848475_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6848475$4,bug6848475$3,bug6848475$2,bug6848475$1,bug6848475$1$1"
};

$Object* allocate$bug6848475($Class* clazz) {
	return $of($alloc(bug6848475));
}

$JFrame* bug6848475::frame = nullptr;
$JSlider* bug6848475::slider = nullptr;
$Robot* bug6848475::robot = nullptr;
int32_t bug6848475::thumbRectX = 0;

void bug6848475::init$() {
}

void bug6848475::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug6848475);
	$assignStatic(bug6848475::robot, $new($Robot));
	$nc(bug6848475::robot)->setAutoDelay(100);
	$SwingUtilities::invokeAndWait($$new($bug6848475$1));
	$nc(bug6848475::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6848475$2));
	$nc(bug6848475::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6848475$3));
	$nc(bug6848475::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6848475$4));
}

$Rectangle* bug6848475::getThumbRectField() {
	$load(bug6848475);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$init(bug6848475);
		$var($SliderUI, ui, $cast($SliderUI, $nc(bug6848475::slider)->getUI()));
		$load($BasicSliderUI);
		$var($Field, field, $BasicSliderUI::class$->getDeclaredField("thumbRect"_s));
		$nc(field)->setAccessible(true);
		return $cast($Rectangle, field->get(ui));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

bug6848475::bug6848475() {
}

$Class* bug6848475::load$($String* name, bool initialize) {
	$loadClass(bug6848475, name, initialize, &_bug6848475_ClassInfo_, allocate$bug6848475);
	return class$;
}

$Class* bug6848475::class$ = nullptr;
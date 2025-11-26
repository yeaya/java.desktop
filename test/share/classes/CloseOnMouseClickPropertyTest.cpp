#include <CloseOnMouseClickPropertyTest.h>

#include <CloseOnMouseClickPropertyTest$TestItem.h>
#include <CloseOnMouseClickPropertyTest$TestType.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CHECK_BOX_MENU_ITEM
#undef CHECK_BOX_PROP
#undef EXIT_ON_CLOSE
#undef MENU_ITEM
#undef RADIO_BUTTON_MENU_ITEM
#undef RADIO_BUTTON_PROP
#undef TEST_ITEMS

using $CloseOnMouseClickPropertyTest$TestItem = ::CloseOnMouseClickPropertyTest$TestItem;
using $CloseOnMouseClickPropertyTest$TestType = ::CloseOnMouseClickPropertyTest$TestType;
using $CloseOnMouseClickPropertyTest$TestItemArray = $Array<CloseOnMouseClickPropertyTest$TestItem>;
using $PointArray = $Array<::java::awt::Point>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0 : public $Runnable {
	$class(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CloseOnMouseClickPropertyTest$TestItem* item) {
		$set(this, item, item);
	}
	virtual void run() override {
		CloseOnMouseClickPropertyTest::lambda$test$0(item);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0>());
	}
	$CloseOnMouseClickPropertyTest$TestItem* item = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::fieldInfos[2] = {
	{"item", "LCloseOnMouseClickPropertyTest$TestItem;", nullptr, $PUBLIC, $field(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0, item)},
	{}
};
$MethodInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(LCloseOnMouseClickPropertyTest$TestItem;)V", nullptr, $PUBLIC, $method(static_cast<void(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::*)($CloseOnMouseClickPropertyTest$TestItem*)>(&CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::class$ = nullptr;

class CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CloseOnMouseClickPropertyTest$TestItem* item) {
		$set(this, item, item);
	}
	virtual void run() override {
		CloseOnMouseClickPropertyTest::lambda$test$1(item);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1>());
	}
	$CloseOnMouseClickPropertyTest$TestItem* item = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::fieldInfos[2] = {
	{"item", "LCloseOnMouseClickPropertyTest$TestItem;", nullptr, $PUBLIC, $field(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1, item)},
	{}
};
$MethodInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::methodInfos[3] = {
	{"<init>", "(LCloseOnMouseClickPropertyTest$TestItem;)V", nullptr, $PUBLIC, $method(static_cast<void(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::*)($CloseOnMouseClickPropertyTest$TestItem*)>(&CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$loadClass(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::class$ = nullptr;

class CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2 : public $Runnable {
	$class(CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool parent, $PointArray* points) {
		this->parent = parent;
		$set(this, points, points);
	}
	virtual void run() override {
		CloseOnMouseClickPropertyTest::lambda$getClickPoint$2(parent, points);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2>());
	}
	bool parent = false;
	$PointArray* points = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::fieldInfos[3] = {
	{"parent", "Z", nullptr, $PUBLIC, $field(CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2, parent)},
	{"points", "[Ljava/awt/Point;", nullptr, $PUBLIC, $field(CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2, points)},
	{}
};
$MethodInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::methodInfos[3] = {
	{"<init>", "(Z[Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::*)(bool,$PointArray*)>(&CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::load$($String* name, bool initialize) {
	$loadClass(CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::class$ = nullptr;

$FieldInfo _CloseOnMouseClickPropertyTest_FieldInfo_[] = {
	{"CHECK_BOX_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseOnMouseClickPropertyTest, CHECK_BOX_PROP)},
	{"RADIO_BUTTON_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CloseOnMouseClickPropertyTest, RADIO_BUTTON_PROP)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(CloseOnMouseClickPropertyTest, frame)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(CloseOnMouseClickPropertyTest, menu)},
	{"TEST_ITEMS", "[LCloseOnMouseClickPropertyTest$TestItem;", nullptr, $PRIVATE | $STATIC, $staticField(CloseOnMouseClickPropertyTest, TEST_ITEMS)},
	{}
};

$MethodInfo _CloseOnMouseClickPropertyTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseOnMouseClickPropertyTest::*)()>(&CloseOnMouseClickPropertyTest::init$))},
	{"createAndShowGUI", "(LCloseOnMouseClickPropertyTest$TestItem;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($CloseOnMouseClickPropertyTest$TestItem*)>(&CloseOnMouseClickPropertyTest::createAndShowGUI))},
	{"getClickPoint", "(Z)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)(bool)>(&CloseOnMouseClickPropertyTest::getClickPoint)), "java.lang.Exception"},
	{"lambda$getClickPoint$2", "(Z[Ljava/awt/Point;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,$PointArray*)>(&CloseOnMouseClickPropertyTest::lambda$getClickPoint$2))},
	{"lambda$test$0", "(LCloseOnMouseClickPropertyTest$TestItem;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CloseOnMouseClickPropertyTest$TestItem*)>(&CloseOnMouseClickPropertyTest::lambda$test$0))},
	{"lambda$test$1", "(LCloseOnMouseClickPropertyTest$TestItem;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CloseOnMouseClickPropertyTest$TestItem*)>(&CloseOnMouseClickPropertyTest::lambda$test$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseOnMouseClickPropertyTest::main)), "java.lang.Exception"},
	{"test", "(LCloseOnMouseClickPropertyTest$TestItem;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($CloseOnMouseClickPropertyTest$TestItem*)>(&CloseOnMouseClickPropertyTest::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CloseOnMouseClickPropertyTest_InnerClassesInfo_[] = {
	{"CloseOnMouseClickPropertyTest$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"CloseOnMouseClickPropertyTest$TestItem", "CloseOnMouseClickPropertyTest", "TestItem", $STATIC},
	{"CloseOnMouseClickPropertyTest$TestType", "CloseOnMouseClickPropertyTest", "TestType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CloseOnMouseClickPropertyTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseOnMouseClickPropertyTest",
	"java.lang.Object",
	nullptr,
	_CloseOnMouseClickPropertyTest_FieldInfo_,
	_CloseOnMouseClickPropertyTest_MethodInfo_,
	nullptr,
	nullptr,
	_CloseOnMouseClickPropertyTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CloseOnMouseClickPropertyTest$1,CloseOnMouseClickPropertyTest$TestItem,CloseOnMouseClickPropertyTest$TestType"
};

$Object* allocate$CloseOnMouseClickPropertyTest($Class* clazz) {
	return $of($alloc(CloseOnMouseClickPropertyTest));
}

$String* CloseOnMouseClickPropertyTest::CHECK_BOX_PROP = nullptr;
$String* CloseOnMouseClickPropertyTest::RADIO_BUTTON_PROP = nullptr;
$JFrame* CloseOnMouseClickPropertyTest::frame = nullptr;
$JMenu* CloseOnMouseClickPropertyTest::menu = nullptr;
$CloseOnMouseClickPropertyTest$TestItemArray* CloseOnMouseClickPropertyTest::TEST_ITEMS = nullptr;

void CloseOnMouseClickPropertyTest::init$() {
}

void CloseOnMouseClickPropertyTest::main($StringArray* args) {
	$init(CloseOnMouseClickPropertyTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(info)->getClassName()));
				{
					$var($CloseOnMouseClickPropertyTest$TestItemArray, arr$, CloseOnMouseClickPropertyTest::TEST_ITEMS);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($CloseOnMouseClickPropertyTest$TestItem, testItem, arr$->get(i$));
						{
							test(testItem);
						}
					}
				}
			}
		}
	}
}

void CloseOnMouseClickPropertyTest::test($CloseOnMouseClickPropertyTest$TestItem* item) {
	$init(CloseOnMouseClickPropertyTest);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0, item)));
	robot->waitForIdle();
	$var($Point, point, getClickPoint(true));
	robot->mouseMove($nc(point)->x, point->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	$assign(point, getClickPoint(false));
	robot->mouseMove($nc(point)->x, point->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1, item)));
}

void CloseOnMouseClickPropertyTest::createAndShowGUI($CloseOnMouseClickPropertyTest$TestItem* testItem) {
	$init(CloseOnMouseClickPropertyTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(CloseOnMouseClickPropertyTest::frame, $new($JFrame));
	$nc(CloseOnMouseClickPropertyTest::frame)->setSize(300, 300);
	$nc(CloseOnMouseClickPropertyTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(CloseOnMouseClickPropertyTest::menu, $new($JMenu, "Menu"_s));
	$var($JMenuItem, menuItem, $nc(testItem)->getMenuItem());
	testItem->setProperties(menuItem);
	$nc(CloseOnMouseClickPropertyTest::menu)->add(menuItem);
	menuBar->add(CloseOnMouseClickPropertyTest::menu);
	$nc(CloseOnMouseClickPropertyTest::frame)->setJMenuBar(menuBar);
	$nc(CloseOnMouseClickPropertyTest::frame)->setVisible(true);
}

$Point* CloseOnMouseClickPropertyTest::getClickPoint(bool parent) {
	$init(CloseOnMouseClickPropertyTest);
	$useLocalCurrentObjectStackCache();
	$var($PointArray, points, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2, parent, points)));
	return points->get(0);
}

void CloseOnMouseClickPropertyTest::lambda$getClickPoint$2(bool parent, $PointArray* points) {
	$init(CloseOnMouseClickPropertyTest);
	$useLocalCurrentObjectStackCache();
	$var($JComponent, comp, parent ? static_cast<$JComponent*>(CloseOnMouseClickPropertyTest::menu) : static_cast<$JComponent*>($nc(CloseOnMouseClickPropertyTest::menu)->getItem(0)));
	$var($Point, point, $nc(comp)->getLocationOnScreen());
	$var($Rectangle, bounds, comp->getBounds());
	$nc(point)->x += $nc(bounds)->getWidth() / 2;
	point->y += bounds->getHeight() / 2;
	$nc(points)->set(0, point);
}

void CloseOnMouseClickPropertyTest::lambda$test$1($CloseOnMouseClickPropertyTest$TestItem* item) {
	$init(CloseOnMouseClickPropertyTest);
	$var($JMenuItem, menuItem, $nc(CloseOnMouseClickPropertyTest::menu)->getItem(0));
	bool isShowing = $nc(menuItem)->isShowing();
	$nc(CloseOnMouseClickPropertyTest::frame)->dispose();
	if (isShowing ^ $nc(item)->doNotCloseOnMouseClick()) {
		$throwNew($RuntimeException, "Property is not taken into account!"_s);
	}
}

void CloseOnMouseClickPropertyTest::lambda$test$0($CloseOnMouseClickPropertyTest$TestItem* item) {
	$init(CloseOnMouseClickPropertyTest);
	createAndShowGUI(item);
}

void clinit$CloseOnMouseClickPropertyTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CloseOnMouseClickPropertyTest::CHECK_BOX_PROP, "CheckBoxMenuItem.doNotCloseOnMouseClick"_s);
	$assignStatic(CloseOnMouseClickPropertyTest::RADIO_BUTTON_PROP, "RadioButtonMenuItem.doNotCloseOnMouseClick"_s);
	$init($CloseOnMouseClickPropertyTest$TestType);
	$var($CloseOnMouseClickPropertyTest$TestType, var$0, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM);
	$var($Boolean, var$1, $Boolean::valueOf(true));
	$var($CloseOnMouseClickPropertyTest$TestType, var$2, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM);
	$var($Boolean, var$3, $Boolean::valueOf(true));
	$var($CloseOnMouseClickPropertyTest$TestType, var$4, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM);
	$var($Boolean, var$5, $Boolean::valueOf(false));
	$var($CloseOnMouseClickPropertyTest$TestType, var$6, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM);
	$var($Boolean, var$7, $Boolean::valueOf(false));
	$var($CloseOnMouseClickPropertyTest$TestType, var$8, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM);
	$var($Boolean, var$9, $Boolean::valueOf(true));
	$var($CloseOnMouseClickPropertyTest$TestType, var$10, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM);
	$var($Boolean, var$11, $Boolean::valueOf(true));
	$var($CloseOnMouseClickPropertyTest$TestType, var$12, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM);
	$var($Boolean, var$13, $Boolean::valueOf(false));
	$var($CloseOnMouseClickPropertyTest$TestType, var$14, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM);
	$var($Boolean, var$15, $Boolean::valueOf(false));
	$var($CloseOnMouseClickPropertyTest$TestType, var$16, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM);
	$var($Boolean, var$17, $Boolean::valueOf(true));
	$var($CloseOnMouseClickPropertyTest$TestType, var$18, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM);
	$var($Boolean, var$19, $Boolean::valueOf(true));
	$var($CloseOnMouseClickPropertyTest$TestType, var$20, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM);
	$var($Boolean, var$21, $Boolean::valueOf(false));
	$var($CloseOnMouseClickPropertyTest$TestType, var$22, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM);
	$var($Boolean, var$23, $Boolean::valueOf(false));
	$assignStatic(CloseOnMouseClickPropertyTest::TEST_ITEMS, $new($CloseOnMouseClickPropertyTest$TestItemArray, {
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$0, var$1, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$2, var$3, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$4, var$5, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$6, var$7, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM, nullptr, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM, nullptr, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM, $($Boolean::valueOf(true)), nullptr),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM, $($Boolean::valueOf(false)), nullptr),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$8, var$9, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$10, var$11, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$12, var$13, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$14, var$15, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM, $($Boolean::valueOf(true)), nullptr),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM, $($Boolean::valueOf(false)), nullptr),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM, nullptr, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM, nullptr, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$16, var$17, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$18, var$19, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$20, var$21, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, var$22, var$23, $($Boolean::valueOf(false))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM, $($Boolean::valueOf(true)), nullptr),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM, $($Boolean::valueOf(false)), nullptr),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM, nullptr, $($Boolean::valueOf(true))),
		$$new($CloseOnMouseClickPropertyTest$TestItem, $CloseOnMouseClickPropertyTest$TestType::MENU_ITEM, nullptr, $($Boolean::valueOf(false)))
	}));
}

CloseOnMouseClickPropertyTest::CloseOnMouseClickPropertyTest() {
}

$Class* CloseOnMouseClickPropertyTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::classInfo$.name)) {
			return CloseOnMouseClickPropertyTest$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals(CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::classInfo$.name)) {
			return CloseOnMouseClickPropertyTest$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals(CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::classInfo$.name)) {
			return CloseOnMouseClickPropertyTest$$Lambda$lambda$getClickPoint$2$2::load$(name, initialize);
		}
	}
	$loadClass(CloseOnMouseClickPropertyTest, name, initialize, &_CloseOnMouseClickPropertyTest_ClassInfo_, clinit$CloseOnMouseClickPropertyTest, allocate$CloseOnMouseClickPropertyTest);
	return class$;
}

$Class* CloseOnMouseClickPropertyTest::class$ = nullptr;
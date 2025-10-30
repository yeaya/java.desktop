#include <bug6263446.h>

#include <bug6263446$1.h>
#include <bug6263446$2.h>
#include <bug6263446$3.h>
#include <bug6263446$4.h>
#include <bug6263446$5.h>
#include <bug6263446$6.h>
#include <bug6263446$7.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef ALL
#undef BUTTON1_DOWN_MASK
#undef EXIT_ON_CLOSE
#undef FIRST
#undef SECOND

using $PointArray = $Array<::java::awt::Point>;
using $bug6263446$1 = ::bug6263446$1;
using $bug6263446$2 = ::bug6263446$2;
using $bug6263446$3 = ::bug6263446$3;
using $bug6263446$4 = ::bug6263446$4;
using $bug6263446$5 = ::bug6263446$5;
using $bug6263446$6 = ::bug6263446$6;
using $bug6263446$7 = ::bug6263446$7;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;

class bug6263446$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6263446::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6263446$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$main$0::*)()>(&bug6263446$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6263446_FieldInfo_[] = {
	{"FIRST", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6263446, FIRST)},
	{"SECOND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6263446, SECOND)},
	{"ALL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6263446, ALL)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(bug6263446, tree)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6263446, robot)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6263446, frame)},
	{}
};

$MethodInfo _bug6263446_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446::*)()>(&bug6263446::init$))},
	{"assertEditing", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6263446::assertEditing)), "java.lang.Exception"},
	{"assertEditingNoTreeLock", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&bug6263446::assertEditingNoTreeLock)), "java.lang.Exception"},
	{"assertNotEditing", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6263446::assertNotEditing)), "java.lang.Exception"},
	{"cancelCellEditing", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6263446::cancelCellEditing)), "java.lang.Exception"},
	{"checkSelectedText", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6263446::checkSelectedText)), "java.lang.Exception"},
	{"checkSelection", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6263446::checkSelection)), "java.lang.Exception"},
	{"click", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&bug6263446::click))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6263446::createAndShowGUI))},
	{"createTreeModel", "()Ljavax/swing/tree/TreeModel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$TreeModel*(*)()>(&bug6263446::createTreeModel))},
	{"getClickPoint", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)()>(&bug6263446::getClickPoint)), "java.lang.Exception"},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6263446::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6263446::main)), "java.lang.Exception"},
	{"setClickCountToStart", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&bug6263446::setClickCountToStart)), "java.lang.Exception"},
	{"startPathEditing", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6263446::startPathEditing)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6263446_InnerClassesInfo_[] = {
	{"bug6263446$7", nullptr, nullptr, 0},
	{"bug6263446$6", nullptr, nullptr, 0},
	{"bug6263446$5", nullptr, nullptr, 0},
	{"bug6263446$4", nullptr, nullptr, 0},
	{"bug6263446$3", nullptr, nullptr, 0},
	{"bug6263446$2", nullptr, nullptr, 0},
	{"bug6263446$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6263446",
	"java.lang.Object",
	nullptr,
	_bug6263446_FieldInfo_,
	_bug6263446_MethodInfo_,
	nullptr,
	nullptr,
	_bug6263446_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6263446$7,bug6263446$6,bug6263446$5,bug6263446$4,bug6263446$3,bug6263446$2,bug6263446$1"
};

$Object* allocate$bug6263446($Class* clazz) {
	return $of($alloc(bug6263446));
}

$String* bug6263446::FIRST = nullptr;
$String* bug6263446::SECOND = nullptr;
$String* bug6263446::ALL = nullptr;
$JTree* bug6263446::tree = nullptr;
$Robot* bug6263446::robot = nullptr;
$JFrame* bug6263446::frame = nullptr;

void bug6263446::init$() {
}

void bug6263446::main($StringArray* args) {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug6263446::robot, $new($Robot));
	$nc(bug6263446::robot)->setAutoDelay(100);
	$SwingUtilities::invokeAndWait($$new($bug6263446$1));
	$nc(bug6263446::robot)->waitForIdle();
	$nc(bug6263446::robot)->delay(1000);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Point, point, getClickPoint());
			$nc(bug6263446::robot)->mouseMove($nc(point)->x, point->y);
			click(1);
			assertNotEditing();
			click(2);
			assertNotEditing();
			click(3);
			assertEditing();
			cancelCellEditing();
			assertNotEditing();
			click(4);
			checkSelectedText(bug6263446::FIRST);
			click(5);
			checkSelectedText(bug6263446::ALL);
			setClickCountToStart(4);
			click(1);
			assertNotEditing();
			click(2);
			assertNotEditing();
			click(3);
			assertNotEditing();
			click(4);
			assertEditing();
			cancelCellEditing();
			assertNotEditing();
			click(5);
			checkSelectedText(bug6263446::FIRST);
			click(6);
			checkSelectedText(bug6263446::ALL);
			startPathEditing();
			assertEditing();
			click(1);
			checkSelection(nullptr);
			click(2);
			checkSelection(bug6263446::FIRST);
			click(3);
			checkSelection(bug6263446::ALL);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (bug6263446::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6263446::click(int32_t times) {
	$init(bug6263446);
	$nc(bug6263446::robot)->delay(500);
	for (int32_t i = 0; i < times; ++i) {
		$nc(bug6263446::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
		$nc(bug6263446::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
		$nc(bug6263446::robot)->waitForIdle();
	}
}

$Point* bug6263446::getClickPoint() {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6263446$2, result));
	return result->get(0);
}

$TreeModel* bug6263446::createTreeModel() {
	$init(bug6263446);
	return $new($DefaultTreeModel, $$new($DefaultMutableTreeNode, bug6263446::ALL));
}

void bug6263446::createAndShowGUI() {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug6263446::frame, $new($JFrame));
	$nc(bug6263446::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug6263446::tree, $new($JTree, $(createTreeModel())));
	$nc(bug6263446::tree)->setRootVisible(true);
	$nc(bug6263446::tree)->setEditable(true);
	$nc($($nc(bug6263446::frame)->getContentPane()))->add(static_cast<$Component*>(bug6263446::tree));
	$nc(bug6263446::frame)->pack();
	$nc(bug6263446::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6263446::frame)->setVisible(true);
}

void bug6263446::setClickCountToStart(int32_t clicks) {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait($$new($bug6263446$3, clicks));
	$nc(bug6263446::robot)->waitForIdle();
}

void bug6263446::startPathEditing() {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait($$new($bug6263446$4));
}

void bug6263446::cancelCellEditing() {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait($$new($bug6263446$5));
}

void bug6263446::checkSelection($String* sel) {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait($$new($bug6263446$6, sel));
}

void bug6263446::checkSelectedText($String* sel) {
	$init(bug6263446);
	assertEditing();
	checkSelection(sel);
	cancelCellEditing();
	assertNotEditing();
}

void bug6263446::assertEditing() {
	$init(bug6263446);
	assertEditingNoTreeLock(true);
}

void bug6263446::assertNotEditing() {
	$init(bug6263446);
	assertEditingNoTreeLock(false);
}

void bug6263446::assertEditingNoTreeLock(bool editing) {
	$init(bug6263446);
	$nc(bug6263446::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6263446$7, editing));
}

void bug6263446::lambda$main$0() {
	$init(bug6263446);
	$nc(bug6263446::frame)->dispose();
}

bug6263446::bug6263446() {
}

void clinit$bug6263446($Class* class$) {
	$assignStatic(bug6263446::FIRST, "AAAAAAAAAAA"_s);
	$assignStatic(bug6263446::SECOND, "BB"_s);
	$init(bug6263446);
	$assignStatic(bug6263446::ALL, $str({bug6263446::FIRST, " "_s, bug6263446::SECOND}));
}

$Class* bug6263446::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6263446$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6263446, name, initialize, &_bug6263446_ClassInfo_, clinit$bug6263446, allocate$bug6263446);
	return class$;
}

$Class* bug6263446::class$ = nullptr;
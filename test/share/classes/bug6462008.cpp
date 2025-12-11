#include <bug6462008.h>

#include <bug6462008$1.h>
#include <bug6462008$2.h>
#include <bug6462008$3.h>
#include <bug6462008$4.h>
#include <bug6462008$5.h>
#include <bug6462008$6.h>
#include <bug6462008$7.h>
#include <bug6462008$8.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef DONT_CARE
#undef EXIT_ON_CLOSE
#undef SINGLE_SELECTION
#undef VK_A
#undef VK_CONTROL
#undef VK_DOWN
#undef VK_L
#undef VK_META
#undef VK_PAGE_DOWN
#undef VK_SHIFT
#undef VK_SPACE

using $PointArray = $Array<::java::awt::Point>;
using $bug6462008$1 = ::bug6462008$1;
using $bug6462008$2 = ::bug6462008$2;
using $bug6462008$3 = ::bug6462008$3;
using $bug6462008$4 = ::bug6462008$4;
using $bug6462008$5 = ::bug6462008$5;
using $bug6462008$6 = ::bug6462008$6;
using $bug6462008$7 = ::bug6462008$7;
using $bug6462008$8 = ::bug6462008$8;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class bug6462008$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6462008$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6462008::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6462008$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6462008$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6462008$$Lambda$lambda$main$0::*)()>(&bug6462008$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6462008$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6462008$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6462008$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6462008$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6462008$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6462008_FieldInfo_[] = {
	{"DONT_CARE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6462008, DONT_CARE)},
	{"anchorLead", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug6462008, anchorLead)},
	{"isAquaLAF", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug6462008, isAquaLAF)},
	{"controlKey", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug6462008, controlKey)},
	{"list", "Ljavax/swing/JList;", nullptr, $PRIVATE | $STATIC, $staticField(bug6462008, list)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6462008, robot)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6462008, frame)},
	{}
};

$MethodInfo _bug6462008_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6462008::*)()>(&bug6462008::init$))},
	{"checkSelection", "([I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($ints*)>(&bug6462008::checkSelection)), "java.lang.Exception"},
	{"checkSelectionAL", "(II[I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)(int32_t,int32_t,$ints*)>(&bug6462008::checkSelectionAL)), "java.lang.Exception"},
	{"checkSelectionNonThreadSafe", "(II[I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)(int32_t,int32_t,$ints*)>(&bug6462008::checkSelectionNonThreadSafe))},
	{"clickItem4", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)()>(&bug6462008::clickItem4)), "java.lang.Exception"},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6462008::createAndShowGUI))},
	{"getModel", "()Ljavax/swing/DefaultListModel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DefaultListModel*(*)()>(&bug6462008::getModel))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6462008::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6462008::main)), "java.lang.Exception"},
	{"resetList", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6462008::resetList)), "java.lang.Exception"},
	{"scrollDownExtendSelection", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6462008::scrollDownExtendSelection)), "java.lang.Exception"},
	{"setAnchorLead", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&bug6462008::setAnchorLead)), "java.lang.Exception"},
	{"setAnchorLeadNonThreadSafe", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6462008::setAnchorLeadNonThreadSafe))},
	{"setSelectionInterval", "(II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&bug6462008::setSelectionInterval)), "java.lang.Exception"},
	{"setSelectionMode", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&bug6462008::setSelectionMode)), "java.lang.Exception"},
	{"testListSelection", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&bug6462008::testListSelection)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6462008_InnerClassesInfo_[] = {
	{"bug6462008$8", nullptr, nullptr, 0},
	{"bug6462008$7", nullptr, nullptr, 0},
	{"bug6462008$6", nullptr, nullptr, 0},
	{"bug6462008$5", nullptr, nullptr, 0},
	{"bug6462008$4", nullptr, nullptr, 0},
	{"bug6462008$3", nullptr, nullptr, 0},
	{"bug6462008$2", nullptr, nullptr, 0},
	{"bug6462008$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6462008",
	"java.lang.Object",
	nullptr,
	_bug6462008_FieldInfo_,
	_bug6462008_MethodInfo_,
	nullptr,
	nullptr,
	_bug6462008_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6462008$8,bug6462008$7,bug6462008$6,bug6462008$5,bug6462008$4,bug6462008$3,bug6462008$2,bug6462008$1"
};

$Object* allocate$bug6462008($Class* clazz) {
	return $of($alloc(bug6462008));
}

int32_t bug6462008::anchorLead = 0;
bool bug6462008::isAquaLAF = false;
int32_t bug6462008::controlKey = 0;
$JList* bug6462008::list = nullptr;
$Robot* bug6462008::robot = nullptr;
$JFrame* bug6462008::frame = nullptr;

void bug6462008::init$() {
}

void bug6462008::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init(bug6462008);
			$assignStatic(bug6462008::robot, $new($Robot));
			$nc(bug6462008::robot)->setAutoDelay(100);
			bug6462008::isAquaLAF = "Aqua"_s->equals($($nc($($UIManager::getLookAndFeel()))->getID()));
			bug6462008::controlKey = bug6462008::isAquaLAF ? $KeyEvent::VK_META : $KeyEvent::VK_CONTROL;
			$SwingUtilities::invokeAndWait($$new($bug6462008$1));
			$nc(bug6462008::robot)->waitForIdle();
			$nc(bug6462008::robot)->delay(1000);
			setAnchorLead(-1);
			$nc(bug6462008::robot)->waitForIdle();
			testListSelection();
			setAnchorLead(100);
			$nc(bug6462008::robot)->waitForIdle();
			testListSelection();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(bug6462008);
			if (bug6462008::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6462008$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6462008::testListSelection() {
	$useLocalCurrentObjectStackCache();
	$init(bug6462008);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelection($$new($ints, 0));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_CONTROL);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_CONTROL);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelection($$new($ints, 0));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SHIFT);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SHIFT);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelection($$new($ints, 0));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_CONTROL);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SHIFT);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SPACE);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SHIFT);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_CONTROL);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelection($$new($ints, 0));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress(bug6462008::controlKey);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_A);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_A);
	$nc(bug6462008::robot)->keyRelease(bug6462008::controlKey);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(-1, -1, $$new($ints, {
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9
	}));
	resetList();
	setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress(bug6462008::controlKey);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_A);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_A);
	$nc(bug6462008::robot)->keyRelease(bug6462008::controlKey);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(0, 0, $$new($ints, {0}));
	resetList();
	setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	setSelectionInterval(5, 5);
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress(bug6462008::controlKey);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_A);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_A);
	$nc(bug6462008::robot)->keyRelease(bug6462008::controlKey);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelection($$new($ints, {5}));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	if (!bug6462008::isAquaLAF) {
		$nc(bug6462008::robot)->keyPress($KeyEvent::VK_PAGE_DOWN);
		$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_PAGE_DOWN);
		$nc(bug6462008::robot)->waitForIdle();
		checkSelection($$new($ints, {
			9,
			9,
			9
		}));
		resetList();
		$nc(bug6462008::robot)->waitForIdle();
	}
	scrollDownExtendSelection();
	$nc(bug6462008::robot)->waitForIdle();
	checkSelection($$new($ints, {
		0,
		9,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9
	}));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(0, 0, $$new($ints, {0}));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_L);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_L);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(0, 0, $$new($ints, {0}));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$var($Point, p, clickItem4());
	$nc(bug6462008::robot)->mouseMove($nc(p)->x, p->y);
	$nc(bug6462008::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(4, 4, $$new($ints, {4}));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress(bug6462008::controlKey);
	$assign(p, clickItem4());
	$nc(bug6462008::robot)->mouseMove($nc(p)->x, p->y);
	$nc(bug6462008::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->keyRelease(bug6462008::controlKey);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(4, 4, $$new($ints, {4}));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SHIFT);
	$assign(p, clickItem4());
	$nc(bug6462008::robot)->mouseMove($nc(p)->x, p->y);
	$nc(bug6462008::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SHIFT);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(0, 4, $$new($ints, {
		0,
		1,
		2,
		3,
		4
	}));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
	$nc(bug6462008::robot)->keyPress(bug6462008::controlKey);
	$nc(bug6462008::robot)->keyPress($KeyEvent::VK_SHIFT);
	$assign(p, clickItem4());
	$nc(bug6462008::robot)->mouseMove($nc(p)->x, p->y);
	$nc(bug6462008::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	$nc(bug6462008::robot)->keyRelease($KeyEvent::VK_SHIFT);
	$nc(bug6462008::robot)->keyRelease(bug6462008::controlKey);
	$nc(bug6462008::robot)->waitForIdle();
	checkSelectionAL(0, 4, $$new($ints, 0));
	resetList();
	$nc(bug6462008::robot)->waitForIdle();
}

$DefaultListModel* bug6462008::getModel() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultListModel, listModel, $new($DefaultListModel));
	for (int32_t i = 0; i < 10; ++i) {
		listModel->addElement($$str({"List Item "_s, $$str(i)}));
	}
	return listModel;
}

$Point* bug6462008::clickItem4() {
	$useLocalCurrentObjectStackCache();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6462008$2, result));
	return result->get(0);
}

void bug6462008::resetList() {
	$SwingUtilities::invokeAndWait($$new($bug6462008$3));
}

void bug6462008::scrollDownExtendSelection() {
	$SwingUtilities::invokeAndWait($$new($bug6462008$4));
}

void bug6462008::setSelectionMode(int32_t selectionMode) {
	$SwingUtilities::invokeAndWait($$new($bug6462008$5, selectionMode));
}

void bug6462008::setSelectionInterval(int32_t index0, int32_t index1) {
	$SwingUtilities::invokeAndWait($$new($bug6462008$6, index0, index1));
}

void bug6462008::setAnchorLead(int32_t anchorLeadValue) {
	$SwingUtilities::invokeAndWait($$new($bug6462008$7, anchorLeadValue));
}

void bug6462008::setAnchorLeadNonThreadSafe() {
	$useLocalCurrentObjectStackCache();
	$init(bug6462008);
	$nc($($nc(bug6462008::list)->getSelectionModel()))->setAnchorSelectionIndex(bug6462008::anchorLead);
	$nc(($cast($DefaultListSelectionModel, $($nc(bug6462008::list)->getSelectionModel()))))->moveLeadSelectionIndex(bug6462008::anchorLead);
}

void bug6462008::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(bug6462008);
	$assignStatic(bug6462008::frame, $new($JFrame, "bug6462008"_s));
	$nc(bug6462008::frame)->setSize(200, 500);
	$nc(bug6462008::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug6462008::list, $new($JList, $(static_cast<$ListModel*>(getModel()))));
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	panel->add(static_cast<$Component*>(bug6462008::list));
	$nc($($nc(bug6462008::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(bug6462008::frame)->setVisible(true);
	$nc(bug6462008::frame)->setLocationRelativeTo(nullptr);
}

void bug6462008::checkSelection($ints* sels) {
	checkSelectionAL(bug6462008::DONT_CARE, bug6462008::DONT_CARE, sels);
}

void bug6462008::checkSelectionAL(int32_t anchor, int32_t lead, $ints* sels) {
	$SwingUtilities::invokeAndWait($$new($bug6462008$8, anchor, lead, sels));
}

void bug6462008::checkSelectionNonThreadSafe(int32_t anchor, int32_t lead, $ints* sels) {
	$useLocalCurrentObjectStackCache();
	$init(bug6462008);
	$var($ListSelectionModel, lsm, $nc(bug6462008::list)->getSelectionModel());
	int32_t actualAnchor = $nc(lsm)->getAnchorSelectionIndex();
	int32_t actualLead = lsm->getLeadSelectionIndex();
	if (anchor != bug6462008::DONT_CARE && actualAnchor != anchor) {
		$throwNew($RuntimeException, $$str({"anchor is "_s, $$str(actualAnchor), ", should be "_s, $$str(anchor)}));
	}
	if (lead != bug6462008::DONT_CARE && actualLead != lead) {
		$throwNew($RuntimeException, $$str({"lead is "_s, $$str(actualLead), ", should be "_s, $$str(lead)}));
	}
	$Arrays::sort(sels);
	$var($booleans, checks, $new($booleans, $nc($($nc(bug6462008::list)->getModel()))->getSize()));
	{
		$var($ints, arr$, sels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				checks->set(i, true);
			}
		}
	}
	int32_t index0 = $Math::min(lsm->getMinSelectionIndex(), 0);
	int32_t var$0 = lsm->getMaxSelectionIndex();
	int32_t index1 = $Math::max(var$0, $nc($($nc(bug6462008::list)->getModel()))->getSize() - 1);
	for (int32_t i = index0; i <= index1; ++i) {
		if (lsm->isSelectedIndex(i)) {
			if (i < 0 || i >= $nc($($nc(bug6462008::list)->getModel()))->getSize() || !checks->get(i)) {
				$throwNew($RuntimeException, $$str({$$str(i), " is selected when it should not be"_s}));
			}
		} else {
			if (i >= 0 && i < $nc($($nc(bug6462008::list)->getModel()))->getSize() && checks->get(i)) {
				$throwNew($RuntimeException, $$str({$$str(i), " is supposed to be selected"_s}));
			}
		}
	}
}

void bug6462008::lambda$main$0() {
	$init(bug6462008);
	$nc(bug6462008::frame)->dispose();
}

bug6462008::bug6462008() {
}

$Class* bug6462008::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6462008$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6462008$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6462008, name, initialize, &_bug6462008_ClassInfo_, allocate$bug6462008);
	return class$;
}

$Class* bug6462008::class$ = nullptr;
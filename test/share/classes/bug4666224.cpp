#include <bug4666224.h>

#include <Sysout4bug4666224.h>
#include <bug4666224$1.h>
#include <bug4666224$ChangeLayoutAction.h>
#include <bug4666224$DumpAction.h>
#include <bug4666224$RotateAction.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef SCROLL_TAB_LAYOUT
#undef TOP
#undef WHEN_IN_FOCUSED_WINDOW

using $Sysout4bug4666224 = ::Sysout4bug4666224;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $bug4666224$1 = ::bug4666224$1;
using $bug4666224$ChangeLayoutAction = ::bug4666224$ChangeLayoutAction;
using $bug4666224$DumpAction = ::bug4666224$DumpAction;
using $bug4666224$RotateAction = ::bug4666224$RotateAction;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JApplet = ::javax::swing::JApplet;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4666224$$Lambda$lambda$new$0 : public $Runnable {
	$class(bug4666224$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4666224* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4666224$$Lambda$lambda$new$0>());
	}
	bug4666224* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4666224$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4666224$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo bug4666224$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lbug4666224;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4666224$$Lambda$lambda$new$0::*)(bug4666224*)>(&bug4666224$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4666224$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4666224$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4666224$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(bug4666224$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4666224$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _bug4666224_FieldInfo_[] = {
	{"placements", "[I", nullptr, $STATIC | $FINAL, $staticField(bug4666224, placements)},
	{"tabPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE, $field(bug4666224, tabPane)},
	{"mainPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(bug4666224, mainPanel)},
	{}
};

$MethodInfo _bug4666224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4666224::*)()>(&bug4666224::init$)), "java.lang.Exception"},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"createInputMap", "()Ljavax/swing/InputMap;", nullptr, $PROTECTED},
	{"destroy", "()V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4666224::*)()>(&bug4666224::lambda$new$0))},
	{"start", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4666224_InnerClassesInfo_[] = {
	{"bug4666224$DumpAction", "bug4666224", "DumpAction", $PRIVATE},
	{"bug4666224$ChangeLayoutAction", "bug4666224", "ChangeLayoutAction", $PRIVATE},
	{"bug4666224$RotateAction", "bug4666224", "RotateAction", $PRIVATE},
	{"bug4666224$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4666224_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4666224",
	"javax.swing.JApplet",
	nullptr,
	_bug4666224_FieldInfo_,
	_bug4666224_MethodInfo_,
	nullptr,
	nullptr,
	_bug4666224_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4666224$DumpAction,bug4666224$ChangeLayoutAction,bug4666224$RotateAction,bug4666224$1"
};

$Object* allocate$bug4666224($Class* clazz) {
	return $of($alloc(bug4666224));
}

$ints* bug4666224::placements = nullptr;

void bug4666224::init$() {
	$JApplet::init$();
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug4666224$$Lambda$lambda$new$0, this)));
}

void bug4666224::init() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray2, instructionsSet, $new($StringArray2, {
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. Click on any of the tabs, focus indicator is visible"_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'C\' to change the tab layout to WRAP_TAB_LAYOUT "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'R\' to align the tabs to the right side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'B\' to align the tabs to the bottom side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'L\' to align the tabs to the left side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'T\' to align the tabs to the top side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'B\' to align the tabs to the bottom side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		}),
		$$new($StringArray, {
			" Note : Incase of Assertion failure,user can enter"_s,
			" remarks by pressing \'Assertion Fail Remarks \' button"_s,
			" "_s,
			" You would see an applet with JTabbedPane. Keep the size of applet variable."_s,
			" "_s,
			" ON ALL PLATFORMS"_s,
			"1. type \'R\' to align the tabs to the right side "_s,
			"2. Lose focus on the window by clicking on some other window "_s,
			"3. Focus indicator should disappear"_s,
			"4. Regain focus on the window the focus indicator should reappear."_s,
			" If focus doesn\'t behave as above, "_s,
			" press \'Assertion Fail\' else press \'Assertion Pass\'"_s
		})
	}));
	$var($StringArray, exceptionsSet, $new($StringArray, {
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the TOP of the window"_s,
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the RIGHT of the window"_s,
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the BOTTOM of the window"_s,
		"Focus painted incorrectly in tabbed pane(SCROLL_TAB_LAYOUT) when tabs aligned to the LEFT of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the LEFT of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the TOP of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the BOTTOM of the window"_s,
		"Focus painted incorrectly in tabbed pane(WRAP_TAB_LAYOUT) when tabs aligned to the RIGHT of the window"_s
	}));
	$Sysout4bug4666224::setInstructionsWithExceptions(instructionsSet, exceptionsSet);
}

void bug4666224::start() {
}

void bug4666224::destroy() {
	if ($Sysout4bug4666224::failStatus()) {
		$var($String, failMsg, $Sysout4bug4666224::getFailureMessages());
		$assign(failMsg, $nc(failMsg)->replace(u'\n', u' '));
		$throwNew($RuntimeException, failMsg);
	}
}

$InputMap* bug4666224::createInputMap() {
	$useLocalCurrentObjectStackCache();
	return $LookAndFeel::makeComponentInputMap($(getRootPane()), $$new($ObjectArray, {
		$of("R"_s),
		$of("right"_s),
		$of("L"_s),
		$of("left"_s),
		$of("T"_s),
		$of("top"_s),
		$of("B"_s),
		$of("bottom"_s),
		$of("C"_s),
		$of("changeLayout"_s),
		$of("D"_s),
		$of("dump"_s)
	}));
}

$ActionMap* bug4666224::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMap));
	map->put("right"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::RIGHT));
	map->put("left"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::LEFT));
	map->put("top"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::TOP));
	map->put("bottom"_s, $$new($bug4666224$RotateAction, this, $JTabbedPane::BOTTOM));
	map->put("changeLayout"_s, $$new($bug4666224$ChangeLayoutAction, this));
	map->put("dump"_s, $$new($bug4666224$DumpAction, this));
	return map;
}

void bug4666224::lambda$new$0() {
	$useLocalCurrentObjectStackCache();
	$set(this, tabPane, $new($JTabbedPane));
	$nc(this->tabPane)->addMouseListener($$new($bug4666224$1, this));
	$var($InputMap, inputMap, createInputMap());
	$SwingUtilities::replaceUIInputMap($(getRootPane()), $JComponent::WHEN_IN_FOCUSED_WINDOW, inputMap);
	$var($ActionMap, actionMap, createActionMap());
	$SwingUtilities::replaceUIActionMap($(getRootPane()), actionMap);
	$nc(this->tabPane)->setTabPlacement($JTabbedPane::TOP);
	$nc(this->tabPane)->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
	$var($JPanel, panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Zero"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number One"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Two"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Three"_s, $$new($JColorChooser));
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Four"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Five"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Six"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Seven"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Eight"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Nine"_s, panel);
	$assign(panel, $new($JPanel));
	panel->setPreferredSize($$new($Dimension, 200, 300));
	$nc(this->tabPane)->addTab("Number Ten"_s, panel);
	$set(this, mainPanel, $new($JPanel));
	$nc(this->mainPanel)->add(static_cast<$Component*>(this->tabPane));
	$nc($(getContentPane()))->add(static_cast<$Component*>(this->mainPanel));
	$nc(this->tabPane)->requestFocus();
}

void clinit$bug4666224($Class* class$) {
	$assignStatic(bug4666224::placements, $new($ints, {
		$JTabbedPane::LEFT,
		$JTabbedPane::RIGHT,
		$JTabbedPane::TOP,
		$JTabbedPane::BOTTOM
	}));
}

bug4666224::bug4666224() {
}

$Class* bug4666224::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4666224$$Lambda$lambda$new$0::classInfo$.name)) {
			return bug4666224$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(bug4666224, name, initialize, &_bug4666224_ClassInfo_, clinit$bug4666224, allocate$bug4666224);
	return class$;
}

$Class* bug4666224::class$ = nullptr;
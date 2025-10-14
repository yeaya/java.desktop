#include <bug8044371.h>

#include <SwingTest.h>
#include <bug8044371$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SPLIT
#undef VERTICAL_SCROLLBAR_ALWAYS

using $SwingTest = ::SwingTest;
using $bug8044371$1 = ::bug8044371$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JViewport = ::javax::swing::JViewport;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$FieldInfo _bug8044371_FieldInfo_[] = {
	{"sptPane", "Ljavax/swing/JSplitPane;", nullptr, 0, $field(bug8044371, sptPane)},
	{"lastAdjust", "I", nullptr, 0, $field(bug8044371, lastAdjust)},
	{"initialAdjust", "I", nullptr, 0, $field(bug8044371, initialAdjust)},
	{}
};

$MethodInfo _bug8044371_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(bug8044371::*)($JFrame*)>(&bug8044371::init$))},
	{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8044371::main)), "java.lang.Throwable"},
	{"step1", "()V", nullptr, $PUBLIC},
	{"step2", "()V", nullptr, $PUBLIC},
	{"step3", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8044371_InnerClassesInfo_[] = {
	{"bug8044371$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8044371_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8044371",
	"java.lang.Object",
	"java.awt.event.AdjustmentListener",
	_bug8044371_FieldInfo_,
	_bug8044371_MethodInfo_,
	nullptr,
	nullptr,
	_bug8044371_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8044371$1"
};

$Object* allocate$bug8044371($Class* clazz) {
	return $of($alloc(bug8044371));
}

void bug8044371::main($StringArray* args) {
	$init(bug8044371);
	$load($MetalLookAndFeel);
	$UIManager::setLookAndFeel($($MetalLookAndFeel::class$->getName()));
	$SwingTest::start(bug8044371::class$);
}

void bug8044371::init$($JFrame* frame) {
	this->lastAdjust = 0;
	this->initialAdjust = 0;
	$var($JPanel, p, $new($JPanel));
	$var($JScrollPane, jScrollPane, $new($JScrollPane, $$new($bug8044371$1, this), $JScrollPane::VERTICAL_SCROLLBAR_ALWAYS, $JScrollPane::HORIZONTAL_SCROLLBAR_ALWAYS));
	$nc($(jScrollPane->getViewport()))->scrollRectToVisible($$new($Rectangle, 1500, 1500, 0, 0));
	$nc($(jScrollPane->getVerticalScrollBar()))->addAdjustmentListener(this);
	$set(this, sptPane, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, jScrollPane, p));
	$nc(this->sptPane)->setDividerLocation(90);
	$nc(this->sptPane)->setOneTouchExpandable(true);
	$nc($($nc(frame)->getContentPane()))->add(static_cast<$Component*>(this->sptPane));
}

void bug8044371::adjustmentValueChanged($AdjustmentEvent* e) {
	$init($System);
	$nc($System::out)->println($$str({"adjustmentValueChanged: "_s, $$str($nc(e)->getValue())}));
	this->lastAdjust = $nc(e)->getValue();
}

void bug8044371::step1() {
	if (this->lastAdjust == 0) {
		$throwNew($RuntimeException, "Adjustment == 0"_s);
	}
	this->initialAdjust = this->lastAdjust;
	$nc(this->sptPane)->setDividerLocation(0);
}

void bug8044371::step2() {
	if (this->lastAdjust < this->initialAdjust) {
		$throwNew($RuntimeException, $$str({"Failed: Adjustment decreased: "_s, $$str(this->lastAdjust)}));
	}
	$nc(this->sptPane)->setDividerLocation(90);
}

void bug8044371::step3() {
	if (this->lastAdjust < this->initialAdjust) {
		$throwNew($RuntimeException, $$str({"Failed: Adjustment decreased: "_s, $$str(this->lastAdjust)}));
	}
}

bug8044371::bug8044371() {
}

$Class* bug8044371::load$($String* name, bool initialize) {
	$loadClass(bug8044371, name, initialize, &_bug8044371_ClassInfo_, allocate$bug8044371);
	return class$;
}

$Class* bug8044371::class$ = nullptr;
#include <Test6526631.h>

#include <SwingTest.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/Error.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef COLS
#undef OFFSET
#undef RIGHT_TO_LEFT
#undef ROWS

using $SwingTest = ::SwingTest;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JViewport = ::javax::swing::JViewport;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _Test6526631_FieldInfo_[] = {
	{"COLS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6526631, COLS)},
	{"ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6526631, ROWS)},
	{"OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6526631, OFFSET)},
	{"pane", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $FINAL, $field(Test6526631, pane)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $FINAL, $field(Test6526631, frame)},
	{}
};

$MethodInfo _Test6526631_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(Test6526631::*)($JFrame*)>(&Test6526631::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6526631::main)), "java.lang.Throwable"},
	{"update", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Test6526631::*)(int32_t)>(&Test6526631::update))},
	{"validateFirst", "()V", nullptr, $PUBLIC},
	{"validateSecond", "()V", nullptr, $PUBLIC},
	{"validateThird", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6526631_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6526631",
	"java.lang.Object",
	nullptr,
	_Test6526631_FieldInfo_,
	_Test6526631_MethodInfo_
};

$Object* allocate$Test6526631($Class* clazz) {
	return $of($alloc(Test6526631));
}

void Test6526631::main($StringArray* args) {
	$load(Test6526631);
	$SwingTest::start(Test6526631::class$);
}

void Test6526631::init$($JFrame* frame) {
	$set(this, pane, $new($JScrollPane, $$new($JTextArea, Test6526631::ROWS, Test6526631::COLS)));
	$init($ComponentOrientation);
	$nc(this->pane)->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	$set(this, frame, frame);
	$nc(this->frame)->add(static_cast<$Component*>(this->pane));
}

void Test6526631::update(int32_t offset) {
	$var($Dimension, size, $nc(this->frame)->getSize());
	$nc(size)->width += offset;
	$nc(this->frame)->setSize(size);
}

void Test6526631::validateFirst() {
	validateThird();
	update(Test6526631::OFFSET);
}

void Test6526631::validateSecond() {
	validateThird();
	update(-Test6526631::OFFSET);
}

void Test6526631::validateThird() {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, viewport, $nc(this->pane)->getViewport());
	$var($JScrollBar, scroller, $nc(this->pane)->getHorizontalScrollBar());
	$init($ComponentOrientation);
	if (!$nc($of($($nc(scroller)->getComponentOrientation())))->equals($ComponentOrientation::RIGHT_TO_LEFT)) {
		$throwNew($Error, "unexpected component orientation"_s);
	}
	int32_t value = $nc(scroller)->getValue();
	if (value != 0) {
		$throwNew($Error, "unexpected scroll value"_s);
	}
	int32_t extent = $nc($($nc(viewport)->getExtentSize()))->width;
	if (extent != scroller->getVisibleAmount()) {
		$throwNew($Error, "unexpected visible amount"_s);
	}
	int32_t size = $nc($(viewport->getViewSize()))->width;
	if (size != scroller->getMaximum()) {
		$throwNew($Error, "unexpected maximum"_s);
	}
	int32_t pos = size - extent - value;
	if (pos != $nc($(viewport->getViewPosition()))->x) {
		$throwNew($Error, "unexpected position"_s);
	}
}

Test6526631::Test6526631() {
}

$Class* Test6526631::load$($String* name, bool initialize) {
	$loadClass(Test6526631, name, initialize, &_Test6526631_ClassInfo_, allocate$Test6526631);
	return class$;
}

$Class* Test6526631::class$ = nullptr;
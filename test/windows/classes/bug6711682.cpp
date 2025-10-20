#include <bug6711682.h>

#include <bug6711682$1.h>
#include <bug6711682$2.h>
#include <bug6711682$3.h>
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
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER
#undef TRUE
#undef VK_F2

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug6711682$1 = ::bug6711682$1;
using $bug6711682$2 = ::bug6711682$2;
using $bug6711682$3 = ::bug6711682$3;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
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
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

class bug6711682$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6711682$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6711682::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6711682$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6711682$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6711682$$Lambda$lambda$main$0::*)()>(&bug6711682$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6711682$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6711682$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6711682$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6711682$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6711682$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6711682_FieldInfo_[] = {
	{"editorCb", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $STATIC, $staticField(bug6711682, editorCb)},
	{"rendererCb", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $STATIC, $staticField(bug6711682, rendererCb)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug6711682, table)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6711682, f)},
	{}
};

$MethodInfo _bug6711682_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6711682::*)()>(&bug6711682::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6711682::createAndShowGUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6711682::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6711682::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6711682_InnerClassesInfo_[] = {
	{"bug6711682$3", nullptr, nullptr, 0},
	{"bug6711682$2", nullptr, nullptr, 0},
	{"bug6711682$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6711682_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6711682",
	"java.lang.Object",
	nullptr,
	_bug6711682_FieldInfo_,
	_bug6711682_MethodInfo_,
	nullptr,
	nullptr,
	_bug6711682_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6711682$3,bug6711682$2,bug6711682$1"
};

$Object* allocate$bug6711682($Class* clazz) {
	return $of($alloc(bug6711682));
}

$JCheckBox* bug6711682::editorCb = nullptr;
$JCheckBox* bug6711682::rendererCb = nullptr;
$JTable* bug6711682::table = nullptr;
$JFrame* bug6711682::f = nullptr;

void bug6711682::init$() {
}

void bug6711682::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(50);
			$SwingUtilities::invokeAndWait($$new($bug6711682$1));
			robot->waitForIdle();
			$init(bug6711682);
			$var($Point, l, $nc(bug6711682::table)->getLocationOnScreen());
			int32_t h = $nc(bug6711682::table)->getRowHeight();
			for (int32_t i = 0; i < 3; ++i) {
				robot->mouseMove($nc(l)->x + 5, l->y + 5 + i * h);
				robot->mousePress($InputEvent::BUTTON1_MASK);
				robot->mouseRelease($InputEvent::BUTTON1_MASK);
			}
			robot->keyPress($KeyEvent::VK_F2);
			robot->keyRelease($KeyEvent::VK_F2);
			for (int32_t i = 0; i < 3; ++i) {
				$init($Boolean);
				if (!$nc($Boolean::TRUE)->equals($($nc(bug6711682::table)->getValueAt(i, 0)))) {
					$throwNew($RuntimeException, $$str({"Row #"_s, $$str(i), " checkbox is not selected"_s}));
				}
			}
			for (int32_t i = 2; i >= 0; --i) {
				robot->mouseMove($nc(l)->x + 5, l->y + 5 + i * h);
				robot->mousePress($InputEvent::BUTTON1_MASK);
				robot->mouseRelease($InputEvent::BUTTON1_MASK);
			}
			robot->keyPress($KeyEvent::VK_F2);
			robot->keyRelease($KeyEvent::VK_F2);
			for (int32_t i = 0; i < 3; ++i) {
				$init($Boolean);
				if ($nc($Boolean::TRUE)->equals($($nc(bug6711682::table)->getValueAt(i, 0)))) {
					$throwNew($RuntimeException, $$str({"Row #"_s, $$str(i), " checkbox is selected"_s}));
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug6711682);
			if (bug6711682::f != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6711682$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6711682::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(bug6711682);
	$assignStatic(bug6711682::editorCb, $new($JCheckBox));
	$assignStatic(bug6711682::rendererCb, $new($JCheckBox));
	$assignStatic(bug6711682::f, $new($JFrame, "Table with CheckBox"_s));
	$var($Container, p, $nc(bug6711682::f)->getContentPane());
	$nc(p)->setLayout($$new($BorderLayout));
	$assignStatic(bug6711682::table, $new($JTable, $$new($ObjectArray2, {
		$$new($ObjectArray, {$($of($Boolean::valueOf(false)))}),
		$$new($ObjectArray, {$($of($Boolean::valueOf(false)))}),
		$$new($ObjectArray, {$($of($Boolean::valueOf(false)))})
	}), $$new($ObjectArray, {$of("CheckBox"_s)})));
	$var($TableCellEditor, editor, $new($bug6711682$2));
	$nc($($nc($($nc(bug6711682::table)->getColumnModel()))->getColumn(0)))->setCellEditor(editor);
	$var($TableCellRenderer, renderer, $new($bug6711682$3));
	$nc($($nc($($nc(bug6711682::table)->getColumnModel()))->getColumn(0)))->setCellRenderer(renderer);
	$init($BorderLayout);
	p->add(static_cast<$Component*>(bug6711682::table), $of($BorderLayout::CENTER));
	$nc(bug6711682::f)->pack();
	$nc(bug6711682::f)->setVisible(true);
}

void bug6711682::lambda$main$0() {
	$init(bug6711682);
	$nc(bug6711682::f)->dispose();
}

bug6711682::bug6711682() {
}

$Class* bug6711682::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6711682$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6711682$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6711682, name, initialize, &_bug6711682_ClassInfo_, allocate$bug6711682);
	return class$;
}

$Class* bug6711682::class$ = nullptr;
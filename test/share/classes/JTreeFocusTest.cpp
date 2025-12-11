#include <JTreeFocusTest.h>

#include <JTreeFocusTest$1.h>
#include <JTreeFocusTest$2.h>
#include <JTreeFocusTest$3.h>
#include <JTreeFocusTest$FormEditor.h>
#include <JTreeFocusTest$FormRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef RAISED
#undef VK_DOWN
#undef VK_F2
#undef VK_RIGHT

using $JTreeFocusTest$1 = ::JTreeFocusTest$1;
using $JTreeFocusTest$2 = ::JTreeFocusTest$2;
using $JTreeFocusTest$3 = ::JTreeFocusTest$3;
using $JTreeFocusTest$FormEditor = ::JTreeFocusTest$FormEditor;
using $JTreeFocusTest$FormRenderer = ::JTreeFocusTest$FormRenderer;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridLayout = ::java::awt::GridLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Robot = ::java::awt::Robot;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;

class JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JTreeFocusTest* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0>());
	}
	JTreeFocusTest* inst$ = nullptr;
	$JComponent* comp = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, inst$)},
	{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, comp)},
	{}
};
$MethodInfo JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::methodInfos[3] = {
	{"<init>", "(LJTreeFocusTest;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::*)(JTreeFocusTest*,$JComponent*)>(&JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class JTreeFocusTest$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JTreeFocusTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTreeFocusTest$$Lambda$lambda$new$1$1>());
	}
	JTreeFocusTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JTreeFocusTest$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JTreeFocusTest$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo JTreeFocusTest$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(LJTreeFocusTest;)V", nullptr, $PUBLIC, $method(static_cast<void(JTreeFocusTest$$Lambda$lambda$new$1$1::*)(JTreeFocusTest*)>(&JTreeFocusTest$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTreeFocusTest$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTreeFocusTest$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JTreeFocusTest$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$new$1$1::class$ = nullptr;

class JTreeFocusTest$$Lambda$lambda$new$2$2 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTreeFocusTest::lambda$new$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTreeFocusTest$$Lambda$lambda$new$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JTreeFocusTest$$Lambda$lambda$new$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTreeFocusTest$$Lambda$lambda$new$2$2::*)()>(&JTreeFocusTest$$Lambda$lambda$new$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTreeFocusTest$$Lambda$lambda$new$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTreeFocusTest$$Lambda$lambda$new$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JTreeFocusTest$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$$Lambda$lambda$new$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$new$2$2::class$ = nullptr;

class JTreeFocusTest$$Lambda$lambda$destroy$3$3 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$destroy$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTreeFocusTest::lambda$destroy$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTreeFocusTest$$Lambda$lambda$destroy$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JTreeFocusTest$$Lambda$lambda$destroy$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTreeFocusTest$$Lambda$lambda$destroy$3$3::*)()>(&JTreeFocusTest$$Lambda$lambda$destroy$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTreeFocusTest$$Lambda$lambda$destroy$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTreeFocusTest$$Lambda$lambda$destroy$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JTreeFocusTest$$Lambda$lambda$destroy$3$3::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$$Lambda$lambda$destroy$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$destroy$3$3::class$ = nullptr;

$FieldInfo _JTreeFocusTest_FieldInfo_[] = {
	{"root", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(JTreeFocusTest, root)},
	{"robot", "Ljava/awt/Robot;", nullptr, 0, $field(JTreeFocusTest, robot)},
	{"passed", "Z", nullptr, $STATIC, $staticField(JTreeFocusTest, passed)},
	{"rootSelected", "Z", nullptr, 0, $field(JTreeFocusTest, rootSelected)},
	{"keysTyped", "Z", nullptr, 0, $field(JTreeFocusTest, keysTyped)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(JTreeFocusTest, p)},
	{"fr", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTreeFocusTest, fr)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JTreeFocusTest, tree)},
	{}
};

$MethodInfo _JTreeFocusTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTreeFocusTest::*)()>(&JTreeFocusTest::init$)), "java.lang.Exception"},
	{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"createTree", "()Ljavax/swing/JTree;", nullptr, $STATIC, $method(static_cast<$JTree*(*)()>(&JTreeFocusTest::createTree))},
	{"destroy", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"isPassed", "()Z", nullptr, $SYNCHRONIZED},
	{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JTreeFocusTest::*)($JComponent*)>(&JTreeFocusTest::lambda$blockTillDisplayed$0))},
	{"lambda$destroy$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JTreeFocusTest::lambda$destroy$3))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JTreeFocusTest::*)()>(&JTreeFocusTest::lambda$new$1))},
	{"lambda$new$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JTreeFocusTest::lambda$new$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTreeFocusTest::main)), "java.lang.Exception"},
	{"setPassed", "(Z)V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _JTreeFocusTest_InnerClassesInfo_[] = {
	{"JTreeFocusTest$FormEditor", "JTreeFocusTest", "FormEditor", 0},
	{"JTreeFocusTest$FormRenderer", "JTreeFocusTest", "FormRenderer", 0},
	{"JTreeFocusTest$3", nullptr, nullptr, 0},
	{"JTreeFocusTest$2", nullptr, nullptr, 0},
	{"JTreeFocusTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTreeFocusTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTreeFocusTest",
	"java.lang.Object",
	nullptr,
	_JTreeFocusTest_FieldInfo_,
	_JTreeFocusTest_MethodInfo_,
	nullptr,
	nullptr,
	_JTreeFocusTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JTreeFocusTest$FormEditor,JTreeFocusTest$FormRenderer,JTreeFocusTest$3,JTreeFocusTest$2,JTreeFocusTest$1"
};

$Object* allocate$JTreeFocusTest($Class* clazz) {
	return $of($alloc(JTreeFocusTest));
}

$DefaultMutableTreeNode* JTreeFocusTest::root = nullptr;
bool JTreeFocusTest::passed = false;
$JFrame* JTreeFocusTest::fr = nullptr;
$volatile($JTree*) JTreeFocusTest::tree = nullptr;

void JTreeFocusTest::main($StringArray* args) {
	$init(JTreeFocusTest);
	$new(JTreeFocusTest);
}

void JTreeFocusTest::blockTillDisplayed($JComponent* comp) {
	$useLocalCurrentObjectStackCache();
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, this, comp)));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void JTreeFocusTest::init$() {
	$useLocalCurrentObjectStackCache();
	this->rootSelected = false;
	this->keysTyped = false;
	$set(this, p, nullptr);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTreeFocusTest$$Lambda$lambda$new$1$1, this)));
	blockTillDisplayed(JTreeFocusTest::tree);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTreeFocusTest$$Lambda$lambda$new$2$2)));
	try {
		$synchronized(this) {
			while (!this->rootSelected) {
				$of(this)->wait();
			}
		}
		$set(this, robot, $new($Robot));
		$nc(this->robot)->setAutoDelay(50);
		$nc(this->robot)->delay(150);
		$nc(this->robot)->keyPress($KeyEvent::VK_DOWN);
		$nc(this->robot)->keyRelease($KeyEvent::VK_DOWN);
		$nc(this->robot)->keyPress($KeyEvent::VK_RIGHT);
		$nc(this->robot)->keyRelease($KeyEvent::VK_RIGHT);
		$nc(this->robot)->keyPress($KeyEvent::VK_F2);
		$nc(this->robot)->keyRelease($KeyEvent::VK_F2);
		$synchronized(this) {
			while (!this->keysTyped) {
				$of(this)->wait();
			}
		}
		$Thread::sleep(3000);
	} catch ($Throwable& t) {
		t->printStackTrace();
	}
	destroy();
}

void JTreeFocusTest::destroy() {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTreeFocusTest$$Lambda$lambda$destroy$3$3)));
	if (!isPassed()) {
		$throwNew($RuntimeException, "Focus wasn\'t transferred to the proper component"_s);
	}
}

void JTreeFocusTest::setPassed(bool passed) {
	$synchronized(this) {
		JTreeFocusTest::passed = passed;
	}
}

bool JTreeFocusTest::isPassed() {
	$synchronized(this) {
		return JTreeFocusTest::passed;
	}
}

$JTree* JTreeFocusTest::createTree() {
	$init(JTreeFocusTest);
	return JTreeFocusTest::tree;
}

void JTreeFocusTest::lambda$destroy$3() {
	$init(JTreeFocusTest);
	$nc(JTreeFocusTest::fr)->dispose();
}

void JTreeFocusTest::lambda$new$2() {
	$init(JTreeFocusTest);
	$nc(JTreeFocusTest::tree)->requestFocus();
	$nc(JTreeFocusTest::tree)->setSelectionRow(0);
}

void JTreeFocusTest::lambda$new$1() {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JTreeFocusTest::fr, $new($JFrame, "Test"_s));
	$assignStatic(JTreeFocusTest::root, $new($DefaultMutableTreeNode, "root"_s));
	$var($JPanel, p, $new($JPanel));
	$var($Border, var$0, static_cast<$Border*>($new($BevelBorder, $BevelBorder::RAISED)));
	p->setBorder($$new($CompoundBorder, var$0, $$new($LineBorder, $($UIManager::getColor("control"_s)), 7)));
	p->setLayout($$new($GridLayout, 2, 2));
	p->add(static_cast<$Component*>($$new($JLabel, "one"_s)));
	$var($JTextField, tf1, $new($JTextField, 10));
	p->add(static_cast<$Component*>(tf1));
	p->add(static_cast<$Component*>($$new($JLabel, "two"_s)));
	p->add(static_cast<$Component*>($$new($JTextField, 10)));
	$nc(JTreeFocusTest::root)->add($$new($DefaultMutableTreeNode, p));
	tf1->addFocusListener($$new($JTreeFocusTest$1, this));
	$var($DefaultTreeModel, model, $new($DefaultTreeModel, JTreeFocusTest::root));
	$assignStatic(JTreeFocusTest::tree, $new($JTreeFocusTest$2, this, model));
	$nc(JTreeFocusTest::tree)->addTreeSelectionListener($$new($JTreeFocusTest$3, this));
	$nc(JTreeFocusTest::tree)->setEditable(true);
	$var($DefaultTreeCellRenderer, renderer, $new($JTreeFocusTest$FormRenderer, this));
	$nc(JTreeFocusTest::tree)->setCellRenderer(renderer);
	$var($DefaultTreeCellEditor, editor, $new($JTreeFocusTest$FormEditor, this, JTreeFocusTest::tree, renderer));
	$nc(JTreeFocusTest::tree)->setCellEditor(editor);
	$nc($($nc(JTreeFocusTest::fr)->getContentPane()))->add(static_cast<$Component*>(JTreeFocusTest::tree));
	$nc(JTreeFocusTest::fr)->setSize(300, 400);
	$nc(JTreeFocusTest::fr)->setVisible(true);
}

void JTreeFocusTest::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
}

void clinit$JTreeFocusTest($Class* class$) {
	JTreeFocusTest::passed = false;
	$assignStatic(JTreeFocusTest::tree, nullptr);
}

JTreeFocusTest::JTreeFocusTest() {
}

$Class* JTreeFocusTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::classInfo$.name)) {
			return JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals(JTreeFocusTest$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return JTreeFocusTest$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals(JTreeFocusTest$$Lambda$lambda$new$2$2::classInfo$.name)) {
			return JTreeFocusTest$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals(JTreeFocusTest$$Lambda$lambda$destroy$3$3::classInfo$.name)) {
			return JTreeFocusTest$$Lambda$lambda$destroy$3$3::load$(name, initialize);
		}
	}
	$loadClass(JTreeFocusTest, name, initialize, &_JTreeFocusTest_ClassInfo_, clinit$JTreeFocusTest, allocate$JTreeFocusTest);
	return class$;
}

$Class* JTreeFocusTest::class$ = nullptr;
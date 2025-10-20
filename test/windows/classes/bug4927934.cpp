#include <bug4927934.h>

#include <bug4927934$1.h>
#include <bug4927934$2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTree.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <jcpp.h>

#undef VK_LEFT
#undef VK_RIGHT

using $bug4927934$1 = ::bug4927934$1;
using $bug4927934$2 = ::bug4927934$2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JFrame = ::javax::swing::JFrame;
using $JTree = ::javax::swing::JTree;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;

class bug4927934$$Lambda$dispose : public $Runnable {
	$class(bug4927934$$Lambda$dispose, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4927934$$Lambda$dispose>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4927934$$Lambda$dispose::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4927934$$Lambda$dispose, inst$)},
	{}
};
$MethodInfo bug4927934$$Lambda$dispose::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4927934$$Lambda$dispose::*)($Window*)>(&bug4927934$$Lambda$dispose::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4927934$$Lambda$dispose::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4927934$$Lambda$dispose",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4927934$$Lambda$dispose::load$($String* name, bool initialize) {
	$loadClass(bug4927934$$Lambda$dispose, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4927934$$Lambda$dispose::class$ = nullptr;

$FieldInfo _bug4927934_FieldInfo_[] = {
	{"listener", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(bug4927934, listener)},
	{"focusGained", "Z", nullptr, $STATIC, $staticField(bug4927934, focusGained$)},
	{"selectionChanged", "Z", nullptr, $PUBLIC | $STATIC, $staticField(bug4927934, selectionChanged)},
	{"treeExpanded", "Z", nullptr, $PUBLIC | $STATIC, $staticField(bug4927934, treeExpanded$)},
	{"treeCollapsed", "Z", nullptr, $PUBLIC | $STATIC, $staticField(bug4927934, treeCollapsed$)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug4927934, frame)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $STATIC, $staticField(bug4927934, tree)},
	{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(bug4927934, robot)},
	{}
};

$MethodInfo _bug4927934_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4927934::*)()>(&bug4927934::init$))},
	{"checkSelectionChanged", "(Ljavax/swing/JTree;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($JTree*,int32_t)>(&bug4927934::checkSelectionChanged))},
	{"createNodes", "(Ljavax/swing/tree/DefaultMutableTreeNode;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DefaultMutableTreeNode*)>(&bug4927934::createNodes))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"hitKey", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&bug4927934::hitKey))},
	{"isTreeCollapsed", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&bug4927934::isTreeCollapsed))},
	{"isTreeExpanded", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&bug4927934::isTreeExpanded))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4927934::main)), "java.lang.Exception"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _bug4927934_InnerClassesInfo_[] = {
	{"bug4927934$2", nullptr, nullptr, 0},
	{"bug4927934$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4927934_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4927934",
	"java.lang.Object",
	"javax.swing.event.TreeSelectionListener,javax.swing.event.TreeExpansionListener,java.awt.event.FocusListener",
	_bug4927934_FieldInfo_,
	_bug4927934_MethodInfo_,
	nullptr,
	nullptr,
	_bug4927934_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4927934$2,bug4927934$1"
};

$Object* allocate$bug4927934($Class* clazz) {
	return $of($alloc(bug4927934));
}

int32_t bug4927934::hashCode() {
	 return this->$TreeSelectionListener::hashCode();
}

bool bug4927934::equals(Object$* arg0) {
	 return this->$TreeSelectionListener::equals(arg0);
}

$Object* bug4927934::clone() {
	 return this->$TreeSelectionListener::clone();
}

$String* bug4927934::toString() {
	 return this->$TreeSelectionListener::toString();
}

void bug4927934::finalize() {
	this->$TreeSelectionListener::finalize();
}

$Object* bug4927934::listener = nullptr;
bool bug4927934::focusGained$ = false;
bool bug4927934::selectionChanged = false;
bool bug4927934::treeExpanded$ = false;
bool bug4927934::treeCollapsed$ = false;
$JFrame* bug4927934::frame = nullptr;
$JTree* bug4927934::tree = nullptr;
$Robot* bug4927934::robot = nullptr;

void bug4927934::init$() {
}

void bug4927934::main($StringArray* args) {
	$init(bug4927934);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	$assignStatic(bug4927934::robot, $new($Robot));
	$nc(bug4927934::robot)->setAutoDelay(50);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug4927934$1));
			$nc(bug4927934::robot)->waitForIdle();
			$Thread::sleep(1000);
			$SwingUtilities::invokeLater($$new($bug4927934$2));
			$synchronized(bug4927934::listener) {
				if (!bug4927934::focusGained$) {
					$init($System);
					$nc($System::out)->println("waiting focusGained..."_s);
					try {
						$nc($of(bug4927934::listener))->wait(10000);
					} catch ($InterruptedException&) {
						$var($InterruptedException, e, $catch());
						e->printStackTrace();
					}
				}
			}
			bug4927934::selectionChanged = false;
			hitKey($KeyEvent::VK_RIGHT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!checkSelectionChanged(bug4927934::tree, 0)) {
				$throwNew($RuntimeException, "Root should be selected"_s);
			}
			bug4927934::selectionChanged = false;
			hitKey($KeyEvent::VK_RIGHT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!checkSelectionChanged(bug4927934::tree, 1)) {
				$throwNew($RuntimeException, "Node should be selected"_s);
			}
			bug4927934::treeExpanded$ = false;
			hitKey($KeyEvent::VK_RIGHT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!isTreeExpanded()) {
				$throwNew($RuntimeException, "Node should be expanded"_s);
			}
			bug4927934::selectionChanged = false;
			hitKey($KeyEvent::VK_RIGHT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!checkSelectionChanged(bug4927934::tree, 2)) {
				$throwNew($RuntimeException, "Leaf1 should be selected"_s);
			}
			bug4927934::selectionChanged = false;
			hitKey($KeyEvent::VK_RIGHT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!checkSelectionChanged(bug4927934::tree, 2)) {
				$throwNew($RuntimeException, "Leaf1 should be selected"_s);
			}
			bug4927934::selectionChanged = false;
			hitKey($KeyEvent::VK_LEFT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!checkSelectionChanged(bug4927934::tree, 1)) {
				$throwNew($RuntimeException, "Node should be selected"_s);
			}
			bug4927934::treeCollapsed$ = false;
			hitKey($KeyEvent::VK_LEFT);
			if (!isTreeCollapsed()) {
				$throwNew($RuntimeException, "Node should be collapsed"_s);
			}
			bug4927934::selectionChanged = false;
			hitKey($KeyEvent::VK_LEFT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!checkSelectionChanged(bug4927934::tree, 0)) {
				$throwNew($RuntimeException, "Root should be selected"_s);
			}
			bug4927934::treeCollapsed$ = false;
			hitKey($KeyEvent::VK_LEFT);
			$nc(bug4927934::robot)->waitForIdle();
			if (!isTreeCollapsed()) {
				$throwNew($RuntimeException, "Root should be collapsed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (bug4927934::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4927934$$Lambda$dispose, static_cast<$JFrame*>($nc(bug4927934::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug4927934::focusLost($FocusEvent* e) {
	$synchronized(this) {
	}
}

void bug4927934::focusGained($FocusEvent* e) {
	$synchronized(this) {
		bug4927934::focusGained$ = true;
		$init($System);
		$nc($System::out)->println("focusGained"_s);
		$nc($of(bug4927934::listener))->notifyAll();
	}
}

void bug4927934::createNodes($DefaultMutableTreeNode* root) {
	$init(bug4927934);
	$useLocalCurrentObjectStackCache();
	$var($DefaultMutableTreeNode, node, $new($DefaultMutableTreeNode, "Node"_s));
	node->add($$new($DefaultMutableTreeNode, "Leaf1"_s));
	node->add($$new($DefaultMutableTreeNode, "Leaf2"_s));
	$nc(root)->add(node);
	root->add($$new($DefaultMutableTreeNode, "Leaf3"_s));
}

void bug4927934::valueChanged($TreeSelectionEvent* e) {
	$synchronized(this) {
		bug4927934::selectionChanged = true;
		$init($System);
		$nc($System::out)->println("selectionChanged"_s);
		$of(this)->notifyAll();
	}
}

void bug4927934::treeCollapsed($TreeExpansionEvent* e) {
	$synchronized(this) {
		$init($System);
		$nc($System::out)->println("treeCollapsed"_s);
		bug4927934::treeCollapsed$ = true;
		$of(this)->notifyAll();
	}
}

void bug4927934::treeExpanded($TreeExpansionEvent* e) {
	$synchronized(this) {
		$init($System);
		$nc($System::out)->println("treeExpanded"_s);
		bug4927934::treeExpanded$ = true;
		$of(this)->notifyAll();
	}
}

void bug4927934::hitKey(int32_t key) {
	$init(bug4927934);
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::out)->println($$str({"key "_s, $$str(key), " pressed"_s}));
	$nc(bug4927934::robot)->keyPress(key);
	$nc(bug4927934::robot)->keyRelease(key);
}

bool bug4927934::checkSelectionChanged($JTree* tree, int32_t shouldBeSel) {
	$init(bug4927934);
	$useLocalCurrentObjectStackCache();
	$synchronized(bug4927934::listener) {
		if (!bug4927934::selectionChanged) {
			$init($System);
			$nc($System::out)->println("waiting for selectionChanged..."_s);
			try {
				$nc($of(bug4927934::listener))->wait(5000);
			} catch ($InterruptedException&) {
				$var($InterruptedException, e, $catch());
				e->printStackTrace();
			}
		}
	}
	int32_t selRow = $nc(tree)->getLeadSelectionRow();
	$init($System);
	$nc($System::out)->println($$str({"Selected row: "_s, $$str(selRow)}));
	return selRow == shouldBeSel;
}

bool bug4927934::isTreeExpanded() {
	$init(bug4927934);
	$synchronized(bug4927934::listener) {
		if (!bug4927934::treeExpanded$) {
			$init($System);
			$nc($System::out)->println("waiting for treeExpanded..."_s);
			try {
				$nc($of(bug4927934::listener))->wait(5000);
			} catch ($InterruptedException&) {
				$var($InterruptedException, e, $catch());
				e->printStackTrace();
			}
		}
	}
	return bug4927934::treeExpanded$;
}

bool bug4927934::isTreeCollapsed() {
	$init(bug4927934);
	$synchronized(bug4927934::listener) {
		if (!bug4927934::treeCollapsed$) {
			$init($System);
			$nc($System::out)->println("waiting for treeCollapsed..."_s);
			try {
				$nc($of(bug4927934::listener))->wait(5000);
			} catch ($InterruptedException&) {
				$var($InterruptedException, e, $catch());
				e->printStackTrace();
			}
		}
	}
	return bug4927934::treeCollapsed$;
}

void clinit$bug4927934($Class* class$) {
	$assignStatic(bug4927934::listener, $new(bug4927934));
	bug4927934::focusGained$ = false;
	bug4927934::selectionChanged = false;
	bug4927934::treeExpanded$ = false;
	bug4927934::treeCollapsed$ = false;
}

bug4927934::bug4927934() {
}

$Class* bug4927934::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4927934$$Lambda$dispose::classInfo$.name)) {
			return bug4927934$$Lambda$dispose::load$(name, initialize);
		}
	}
	$loadClass(bug4927934, name, initialize, &_bug4927934_ClassInfo_, clinit$bug4927934, allocate$bug4927934);
	return class$;
}

$Class* bug4927934::class$ = nullptr;
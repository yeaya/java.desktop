#include <FocusTraversal$1.h>

#include <FocusTraversal.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef FORWARD_TRAVERSAL_KEYS
#undef SOUTH

using $FocusTraversal = ::FocusTraversal;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $KeyStroke = ::javax::swing::KeyStroke;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _FocusTraversal$1_FieldInfo_[] = {
	{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FocusTraversal$1, val$lookAndFeelString)},
	{}
};

$MethodInfo _FocusTraversal$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(FocusTraversal$1::*)($String*)>(&FocusTraversal$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FocusTraversal$1_EnclosingMethodInfo_ = {
	"FocusTraversal",
	"createUI",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _FocusTraversal$1_InnerClassesInfo_[] = {
	{"FocusTraversal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FocusTraversal$1_ClassInfo_ = {
	$ACC_SUPER,
	"FocusTraversal$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_FocusTraversal$1_FieldInfo_,
	_FocusTraversal$1_MethodInfo_,
	nullptr,
	&_FocusTraversal$1_EnclosingMethodInfo_,
	_FocusTraversal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FocusTraversal"
};

$Object* allocate$FocusTraversal$1($Class* clazz) {
	return $of($alloc(FocusTraversal$1));
}

void FocusTraversal$1::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void FocusTraversal$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($Set, keystrokes, $new($HashSet));
	keystrokes->add($($KeyStroke::getKeyStroke("TAB"_s)));
	keystrokes->add($($KeyStroke::getKeyStroke("ENTER"_s)));
	$init($FocusTraversal);
	$assignStatic($FocusTraversal::frame, $new($JFrame, $$str({"FocusTraversalTest "_s, this->val$lookAndFeelString})));
	$nc($FocusTraversal::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc($FocusTraversal::frame)->setUndecorated(true);
	$nc($FocusTraversal::frame)->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, keystrokes);
	$assignStatic($FocusTraversal::a, $new($JRadioButton, "a"_s));
	$assignStatic($FocusTraversal::b, $new($JRadioButton, "b"_s));
	$assignStatic($FocusTraversal::c, $new($JRadioButton, "c"_s));
	$assignStatic($FocusTraversal::d, $new($JRadioButton, "d"_s));
	$var($ButtonGroup, radioButtonGroup, $new($ButtonGroup));
	radioButtonGroup->add($FocusTraversal::a);
	radioButtonGroup->add($FocusTraversal::b);
	radioButtonGroup->add($FocusTraversal::c);
	radioButtonGroup->add($FocusTraversal::d);
	$var($JPanel, panel, $new($JPanel));
	$assignStatic($FocusTraversal::prev, $new($JTextField, "text"_s));
	panel->add(static_cast<$Component*>($FocusTraversal::prev));
	panel->add(static_cast<$Component*>($FocusTraversal::a));
	panel->add(static_cast<$Component*>($FocusTraversal::b));
	panel->add(static_cast<$Component*>($FocusTraversal::c));
	panel->add(static_cast<$Component*>($FocusTraversal::d));
	$assignStatic($FocusTraversal::next, $new($JTextField, "text"_s));
	panel->add(static_cast<$Component*>($FocusTraversal::next));
	$var($JPanel, root, $new($JPanel));
	root->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	root->add(static_cast<$Component*>(panel), $of($BorderLayout::CENTER));
	root->add(static_cast<$Component*>($$new($JButton, "OK"_s)), $of($BorderLayout::SOUTH));
	$nc($FocusTraversal::frame)->add(static_cast<$Component*>(root));
	$nc($FocusTraversal::frame)->pack();
	$nc($FocusTraversal::frame)->setLocationRelativeTo(nullptr);
	$nc($FocusTraversal::frame)->setVisible(true);
	$nc($FocusTraversal::frame)->toFront();
}

FocusTraversal$1::FocusTraversal$1() {
}

$Class* FocusTraversal$1::load$($String* name, bool initialize) {
	$loadClass(FocusTraversal$1, name, initialize, &_FocusTraversal$1_ClassInfo_, allocate$FocusTraversal$1);
	return class$;
}

$Class* FocusTraversal$1::class$ = nullptr;
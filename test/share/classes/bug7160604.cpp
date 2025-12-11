#include <bug7160604.h>

#include <bug7160604$1.h>
#include <bug7160604$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
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
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef NORTH
#undef PERPIXEL_TRANSLUCENT
#undef RED
#undef SOUTH

using $bug7160604$1 = ::bug7160604$1;
using $bug7160604$2 = ::bug7160604$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JApplet = ::javax::swing::JApplet;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JWindow = ::javax::swing::JWindow;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug7160604$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug7160604$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug7160604* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug7160604$$Lambda$lambda$init$0>());
	}
	bug7160604* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug7160604$$Lambda$lambda$init$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug7160604$$Lambda$lambda$init$0, inst$)},
	{}
};
$MethodInfo bug7160604$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "(Lbug7160604;)V", nullptr, $PUBLIC, $method(static_cast<void(bug7160604$$Lambda$lambda$init$0::*)(bug7160604*)>(&bug7160604$$Lambda$lambda$init$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug7160604$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug7160604$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug7160604$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(bug7160604$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug7160604$$Lambda$lambda$init$0::class$ = nullptr;

$MethodInfo _bug7160604_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7160604::*)()>(&bug7160604::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug7160604::*)()>(&bug7160604::lambda$init$0))},
	{}
};

$InnerClassInfo _bug7160604_InnerClassesInfo_[] = {
	{"bug7160604$2", nullptr, nullptr, 0},
	{"bug7160604$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7160604_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7160604",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug7160604_MethodInfo_,
	nullptr,
	nullptr,
	_bug7160604_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7160604$2,bug7160604$1"
};

$Object* allocate$bug7160604($Class* clazz) {
	return $of($alloc(bug7160604));
}

void bug7160604::init$() {
	$JApplet::init$();
}

void bug7160604::init() {
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(bug7160604$$Lambda$lambda$init$0, this)));
}

void bug7160604::lambda$init$0() {
	$useLocalCurrentObjectStackCache();
	$init($GraphicsDevice$WindowTranslucency);
	if (!$nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT)) {
		return;
	}
	$var($JWindow, window, $new($JWindow));
	window->setLocation(200, 200);
	window->setSize(300, 300);
	$var($JLabel, label, $new($JLabel, "...click to invoke JPopupMenu"_s));
	label->setOpaque(true);
	$var($JPanel, contentPane, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($Color);
	contentPane->setBorder($($BorderFactory::createLineBorder($Color::RED)));
	window->setContentPane(contentPane);
	$init($BorderLayout);
	contentPane->add(static_cast<$Component*>(label), $of($BorderLayout::NORTH));
	$var($JComboBox, comboBox, $new($JComboBox, $$new($ObjectArray, {
		$of("1"_s),
		$of("2"_s),
		$of("3"_s),
		$of("4"_s)
	})));
	contentPane->add(static_cast<$Component*>(comboBox), $of($BorderLayout::SOUTH));
	$var($JPopupMenu, jPopupMenu, $new($JPopupMenu));
	jPopupMenu->add("string"_s);
	jPopupMenu->add(static_cast<$Action*>($$new($bug7160604$1, this, "action"_s)));
	jPopupMenu->add(static_cast<$Component*>($$new($JLabel, "label"_s)));
	jPopupMenu->add($$new($JMenuItem, "MenuItem"_s));
	label->addMouseListener($$new($bug7160604$2, this, jPopupMenu, label));
	window->setBackground($$new($Color, 0, 0, 0, 0));
	window->setVisible(true);
}

bug7160604::bug7160604() {
}

$Class* bug7160604::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug7160604$$Lambda$lambda$init$0::classInfo$.name)) {
			return bug7160604$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$loadClass(bug7160604, name, initialize, &_bug7160604_ClassInfo_, allocate$bug7160604);
	return class$;
}

$Class* bug7160604::class$ = nullptr;
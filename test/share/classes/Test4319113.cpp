#include <Test4319113.h>

#include <Test4319113$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/GridLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BLUE

using $Test4319113$1 = ::Test4319113$1;
using $WindowArray = $Array<::java::awt::Window>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $GridLayout = ::java::awt::GridLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemListener = ::java::awt::event::ItemListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class Test4319113$$Lambda$lambda$init$0 : public $Runnable {
	$class(Test4319113$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Test4319113* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test4319113$$Lambda$lambda$init$0>());
	}
	Test4319113* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test4319113$$Lambda$lambda$init$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Test4319113$$Lambda$lambda$init$0, inst$)},
	{}
};
$MethodInfo Test4319113$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "(LTest4319113;)V", nullptr, $PUBLIC, $method(static_cast<void(Test4319113$$Lambda$lambda$init$0::*)(Test4319113*)>(&Test4319113$$Lambda$lambda$init$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test4319113$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test4319113$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Test4319113$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(Test4319113$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test4319113$$Lambda$lambda$init$0::class$ = nullptr;

$FieldInfo _Test4319113_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $FINAL, $field(Test4319113, frame)},
	{"cbPlaf", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE, $field(Test4319113, cbPlaf)},
	{}
};

$MethodInfo _Test4319113_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4319113::*)()>(&Test4319113::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Test4319113::*)()>(&Test4319113::lambda$init$0))},
	{"show", "(Ljava/awt/Window;)V", nullptr, $PRIVATE, $method(static_cast<void(Test4319113::*)($Window*)>(&Test4319113::show))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateWindowTreeUI", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&Test4319113::updateWindowTreeUI))},
	{}
};

$InnerClassInfo _Test4319113_InnerClassesInfo_[] = {
	{"Test4319113$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test4319113_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4319113",
	"javax.swing.JApplet",
	"java.awt.event.ActionListener",
	_Test4319113_FieldInfo_,
	_Test4319113_MethodInfo_,
	nullptr,
	nullptr,
	_Test4319113_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test4319113$1,Test4319113$1$1"
};

$Object* allocate$Test4319113($Class* clazz) {
	return $of($alloc(Test4319113));
}

$String* Test4319113::toString() {
	 return this->$JApplet::toString();
}

int32_t Test4319113::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test4319113::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test4319113::clone() {
	 return this->$JApplet::clone();
}

void Test4319113::finalize() {
	this->$JApplet::finalize();
}

void Test4319113::init$() {
	$JApplet::init$();
	$set(this, frame, $new($JFrame, "frame"_s));
}

void Test4319113::init() {
	try {
		$EventQueue::invokeLater(static_cast<$Runnable*>($$new(Test4319113$$Lambda$lambda$init$0, this)));
	} catch ($Exception& ex) {
		ex->printStackTrace();
	}
}

void Test4319113::actionPerformed($ActionEvent* actionEvent) {
	$useLocalCurrentObjectStackCache();
	$var($Object, object, $nc(actionEvent)->getSource());
	$var($Component, component, $instanceOf($Component, object) ? $cast($Component, object) : ($Component*)nullptr);
	$init($Color);
	$var($JDialog, jDialog, $JColorChooser::createDialog(component, "ColorChooser"_s, false, $$new($JColorChooser, $Color::BLUE), nullptr, nullptr));
	$nc(jDialog)->setVisible(true);
}

void Test4319113::show($Window* window) {
	$useLocalCurrentObjectStackCache();
	$var($JButton, jButton, $new($JButton, "Show ColorChooser"_s));
	jButton->setActionCommand("Show ColorChooser"_s);
	jButton->addActionListener(this);
	$set(this, cbPlaf, $new($JComboBox, $($UIManager::getInstalledLookAndFeels())));
	$nc(this->cbPlaf)->addItemListener($$new($Test4319113$1, this));
	$nc(window)->add(static_cast<$Component*>(this->cbPlaf));
	window->add(static_cast<$Component*>(jButton));
	window->pack();
	window->setVisible(true);
}

void Test4319113::updateWindowTreeUI($Window* window) {
	$init(Test4319113);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::updateComponentTreeUI(window);
	$var($WindowArray, arrwindow, $nc(window)->getOwnedWindows());
	int32_t n = $nc(arrwindow)->length;
	while (--n >= 0) {
		$var($Window, window2, arrwindow->get(n));
		if (!$nc(window2)->isDisplayable()) {
			continue;
		}
		Test4319113::updateWindowTreeUI(window2);
	}
}

void Test4319113::lambda$init$0() {
	$nc(this->frame)->setLayout($$new($GridLayout, 2, 1));
	this->show(static_cast<$Window*>(this->frame));
}

Test4319113::Test4319113() {
}

$Class* Test4319113::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test4319113$$Lambda$lambda$init$0::classInfo$.name)) {
			return Test4319113$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$loadClass(Test4319113, name, initialize, &_Test4319113_ClassInfo_, allocate$Test4319113);
	return class$;
}

$Class* Test4319113::class$ = nullptr;
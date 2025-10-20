#include <ClickMenuTestManual.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef SEVERE
#undef TEST_STRING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $EventObject = ::java::util::EventObject;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $Border = ::javax::swing::border::Border;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0 : public $ActionListener {
	$class(ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		ClickMenuTestManual::lambda$createControlPanelUI$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::*)()>(&ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::load$($String* name, bool initialize) {
	$loadClass(ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::class$ = nullptr;

$FieldInfo _ClickMenuTestManual_FieldInfo_[] = {
	{"TEST_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ClickMenuTestManual, TEST_STRING)},
	{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, layout)},
	{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, mainControlPanel)},
	{"instructionPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, instructionPanel)},
	{"testPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, testPanel)},
	{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, resultButtonPanel)},
	{"controlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, controlPanel)},
	{"instructionTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, instructionTextArea)},
	{"testTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, testTextArea)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, failButton)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, menu)},
	{"menuBar", "Ljavax/swing/JMenuBar;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, menuBar)},
	{"menuItem", "Ljavax/swing/JMenuItem;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, menuItem)},
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ClickMenuTestManual, mainFrame)},
	{}
};

$MethodInfo _ClickMenuTestManual_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClickMenuTestManual::*)()>(&ClickMenuTestManual::init$)), "java.lang.Exception"},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ClickMenuTestManual::cleanUp))},
	{"createControlPanelUI", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ClickMenuTestManual::*)()>(&ClickMenuTestManual::createControlPanelUI)), "java.lang.Exception"},
	{"lambda$createControlPanelUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&ClickMenuTestManual::lambda$createControlPanelUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClickMenuTestManual::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ClickMenuTestManual_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClickMenuTestManual",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_ClickMenuTestManual_FieldInfo_,
	_ClickMenuTestManual_MethodInfo_
};

$Object* allocate$ClickMenuTestManual($Class* clazz) {
	return $of($alloc(ClickMenuTestManual));
}

$String* ClickMenuTestManual::TEST_STRING = nullptr;
$GridBagLayout* ClickMenuTestManual::layout = nullptr;
$JPanel* ClickMenuTestManual::mainControlPanel = nullptr;
$JPanel* ClickMenuTestManual::instructionPanel = nullptr;
$JPanel* ClickMenuTestManual::testPanel = nullptr;
$JPanel* ClickMenuTestManual::resultButtonPanel = nullptr;
$JPanel* ClickMenuTestManual::controlPanel = nullptr;
$JTextArea* ClickMenuTestManual::instructionTextArea = nullptr;
$JTextArea* ClickMenuTestManual::testTextArea = nullptr;
$JButton* ClickMenuTestManual::passButton = nullptr;
$JButton* ClickMenuTestManual::failButton = nullptr;
$JMenu* ClickMenuTestManual::menu = nullptr;
$JMenuBar* ClickMenuTestManual::menuBar = nullptr;
$JMenuItem* ClickMenuTestManual::menuItem = nullptr;
$JFrame* ClickMenuTestManual::mainFrame = nullptr;

void ClickMenuTestManual::main($StringArray* args) {
	$init(ClickMenuTestManual);
	$System::setProperty("apple.laf.useScreenMenuBar"_s, "true"_s);
	$var(ClickMenuTestManual, test, $new(ClickMenuTestManual));
}

void ClickMenuTestManual::init$() {
	createControlPanelUI();
}

void ClickMenuTestManual::createControlPanelUI() {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ClickMenuTestManual::layout, $new($GridBagLayout));
	$assignStatic(ClickMenuTestManual::mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(ClickMenuTestManual::layout)));
	$assignStatic(ClickMenuTestManual::instructionPanel, $new($JPanel, static_cast<$LayoutManager*>(ClickMenuTestManual::layout)));
	$assignStatic(ClickMenuTestManual::testPanel, $new($JPanel, static_cast<$LayoutManager*>(ClickMenuTestManual::layout)));
	$assignStatic(ClickMenuTestManual::resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(ClickMenuTestManual::layout)));
	$assignStatic(ClickMenuTestManual::controlPanel, $new($JPanel, static_cast<$LayoutManager*>(ClickMenuTestManual::layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "1) Click on MENU using mouse \n2) Click on MENU ITEM using mouse \n3) Check output on textArea if equal to STRING \n\n If correct string, press \"Pass\" \n Otherwise, press \"Fail\" "_s);
	$assignStatic(ClickMenuTestManual::instructionTextArea, $new($JTextArea));
	$nc(ClickMenuTestManual::instructionTextArea)->setText(instructions);
	$nc(ClickMenuTestManual::instructionTextArea)->setEnabled(false);
	$init($Color);
	$nc(ClickMenuTestManual::instructionTextArea)->setDisabledTextColor($Color::black);
	$nc(ClickMenuTestManual::instructionTextArea)->setBackground($Color::white);
	$nc(ClickMenuTestManual::instructionTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc(ClickMenuTestManual::instructionPanel)->add(static_cast<$Component*>(ClickMenuTestManual::instructionTextArea), $of(gbc));
	$assignStatic(ClickMenuTestManual::testTextArea, $new($JTextArea));
	$nc(ClickMenuTestManual::testTextArea)->setEnabled(true);
	$nc(ClickMenuTestManual::testTextArea)->setDisabledTextColor($Color::black);
	$nc(ClickMenuTestManual::testTextArea)->setBackground($Color::white);
	$nc(ClickMenuTestManual::testTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc(ClickMenuTestManual::testPanel)->add(static_cast<$Component*>(ClickMenuTestManual::testTextArea), $of(gbc));
	$assignStatic(ClickMenuTestManual::passButton, $new($JButton, "Pass"_s));
	$nc(ClickMenuTestManual::passButton)->setActionCommand("Pass"_s);
	$nc(ClickMenuTestManual::passButton)->addActionListener(this);
	$assignStatic(ClickMenuTestManual::failButton, $new($JButton, "Fail"_s));
	$nc(ClickMenuTestManual::failButton)->setActionCommand("Fail"_s);
	$nc(ClickMenuTestManual::failButton)->addActionListener(this);
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc(ClickMenuTestManual::resultButtonPanel)->add(static_cast<$Component*>(ClickMenuTestManual::passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc(ClickMenuTestManual::resultButtonPanel)->add(static_cast<$Component*>(ClickMenuTestManual::failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc(ClickMenuTestManual::mainControlPanel)->add(static_cast<$Component*>(ClickMenuTestManual::instructionPanel), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc(ClickMenuTestManual::mainControlPanel)->add(static_cast<$Component*>(ClickMenuTestManual::testPanel), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	$nc(ClickMenuTestManual::mainControlPanel)->add(static_cast<$Component*>(ClickMenuTestManual::resultButtonPanel), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 3;
	$nc(ClickMenuTestManual::mainControlPanel)->add(static_cast<$Component*>(ClickMenuTestManual::controlPanel), $of(gbc));
	$assignStatic(ClickMenuTestManual::mainFrame, $new($JFrame, "Control Panel"_s));
	$nc(ClickMenuTestManual::mainFrame)->add(static_cast<$Component*>(ClickMenuTestManual::mainControlPanel));
	$assignStatic(ClickMenuTestManual::menuBar, $new($JMenuBar));
	$assignStatic(ClickMenuTestManual::menu, $new($JMenu, "MENU"_s));
	$assignStatic(ClickMenuTestManual::menuItem, $new($JMenuItem, "MENU ITEM"_s));
	$nc(ClickMenuTestManual::menuItem)->addActionListener(static_cast<$ActionListener*>($$new(ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0)));
	$nc(ClickMenuTestManual::menu)->add(ClickMenuTestManual::menuItem);
	$nc(ClickMenuTestManual::menuBar)->add(ClickMenuTestManual::menu);
	$nc(ClickMenuTestManual::mainFrame)->setJMenuBar(ClickMenuTestManual::menuBar);
	$nc(ClickMenuTestManual::mainFrame)->pack();
	$nc(ClickMenuTestManual::mainFrame)->setDefaultCloseOperation(3);
	$nc(ClickMenuTestManual::mainFrame)->setVisible(true);
}

void ClickMenuTestManual::actionPerformed($ActionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($instanceOf($JButton, $($nc(evt)->getSource()))) {
		$var($JButton, btn, $cast($JButton, evt->getSource()));
		if ($nc($($nc(btn)->getActionCommand()))->equals("Pass"_s)) {
			try {
				cleanUp();
			} catch ($Exception&) {
				$var($Exception, ex, $catch());
				$init($Level);
				$nc($($Logger::getLogger($(ClickMenuTestManual::class$->getName()))))->log($Level::SEVERE, ($String*)nullptr, static_cast<$Throwable*>(ex));
			}
		} else if ($nc($(btn->getActionCommand()))->equals("Fail"_s)) {
			try {
				cleanUp();
			} catch ($Exception&) {
				$var($Exception, ex, $catch());
				$init($Level);
				$nc($($Logger::getLogger($(ClickMenuTestManual::class$->getName()))))->log($Level::SEVERE, ($String*)nullptr, static_cast<$Throwable*>(ex));
			}
			$throwNew($AssertionError, $of("Test case has failed"_s));
		}
	}
}

void ClickMenuTestManual::cleanUp() {
	$init(ClickMenuTestManual);
	$nc(ClickMenuTestManual::mainFrame)->dispose();
}

void ClickMenuTestManual::lambda$createControlPanelUI$0($ActionEvent* e) {
	$init(ClickMenuTestManual);
	$nc(ClickMenuTestManual::testTextArea)->setText(ClickMenuTestManual::TEST_STRING);
}

ClickMenuTestManual::ClickMenuTestManual() {
}

void clinit$ClickMenuTestManual($Class* class$) {
	$assignStatic(ClickMenuTestManual::TEST_STRING, "STRING"_s);
}

$Class* ClickMenuTestManual::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::classInfo$.name)) {
			return ClickMenuTestManual$$Lambda$lambda$createControlPanelUI$0::load$(name, initialize);
		}
	}
	$loadClass(ClickMenuTestManual, name, initialize, &_ClickMenuTestManual_ClassInfo_, clinit$ClickMenuTestManual, allocate$ClickMenuTestManual);
	return class$;
}

$Class* ClickMenuTestManual::class$ = nullptr;
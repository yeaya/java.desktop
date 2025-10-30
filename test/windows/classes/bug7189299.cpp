#include <bug7189299.h>

#include <bug7189299$1.h>
#include <bug7189299$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/lang/Runnable.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$NamedStyle.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $bug7189299$1 = ::bug7189299$1;
using $bug7189299$2 = ::bug7189299$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext$NamedStyle = ::javax::swing::text::StyleContext$NamedStyle;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$FieldInfo _bug7189299_FieldInfo_[] = {
	{"html", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug7189299, html)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug7189299, frame)},
	{}
};

$MethodInfo _bug7189299_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7189299::*)()>(&bug7189299::init$))},
	{"doTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7189299::doTest))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7189299::main)), "java.lang.Exception"},
	{"setup", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7189299::setup))},
	{"verifySingleDefaultButtonModelListener", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7189299::verifySingleDefaultButtonModelListener))},
	{}
};

$InnerClassInfo _bug7189299_InnerClassesInfo_[] = {
	{"bug7189299$2", nullptr, nullptr, 0},
	{"bug7189299$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7189299_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7189299",
	"java.lang.Object",
	nullptr,
	_bug7189299_FieldInfo_,
	_bug7189299_MethodInfo_,
	nullptr,
	nullptr,
	_bug7189299_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7189299$2,bug7189299$1"
};

$Object* allocate$bug7189299($Class* clazz) {
	return $of($alloc(bug7189299));
}

$JEditorPane* bug7189299::html = nullptr;
$JFrame* bug7189299::frame = nullptr;

void bug7189299::init$() {
}

void bug7189299::setup() {
	$init(bug7189299);
	$assignStatic(bug7189299::html, $new($JEditorPane, "text/html"_s, "<html><body><form action=\"http://localhost.cgi\"><input type=submit name=submit value=\"submit\"/></form></body></html>"_s));
	$assignStatic(bug7189299::frame, $new($JFrame));
	$nc(bug7189299::frame)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(bug7189299::frame)->add(static_cast<$Component*>(bug7189299::html), $of($BorderLayout::CENTER));
	$nc(bug7189299::frame)->setSize(200, 100);
	$nc(bug7189299::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug7189299::frame)->setVisible(true);
}

void bug7189299::doTest() {
	$init(bug7189299);
	$SwingUtilities::updateComponentTreeUI(bug7189299::html);
}

void bug7189299::verifySingleDefaultButtonModelListener() {
	$useLocalCurrentObjectStackCache();
	$init(bug7189299);
	$var($HTMLEditorKit, htmlEditorKit, $cast($HTMLEditorKit, $nc(bug7189299::html)->getEditorKit()));
	$var($StyleContext$NamedStyle, style, $cast($StyleContext$NamedStyle, $nc(htmlEditorKit)->getInputAttributes()));
	$init($StyleConstants);
	$var($DefaultButtonModel, model, $cast($DefaultButtonModel, $nc(style)->getAttribute($StyleConstants::ModelAttribute)));
	$var($ActionListenerArray, listeners, $nc(model)->getActionListeners());
	int32_t actionListenerNum = $nc(listeners)->length;
	if (actionListenerNum != 1) {
		$throwNew($RuntimeException, $$str({"Expected single ActionListener object registered with DefaultButtonModel; found "_s, $$str(actionListenerNum), " listeners registered."_s}));
	}
	int32_t changeListenerNum = $nc($(model->getChangeListeners()))->length;
	if (changeListenerNum != 1) {
		$throwNew($RuntimeException, $$str({"Expected at most one ChangeListener object registered with DefaultButtonModel; found "_s, $$str(changeListenerNum), " listeners registered."_s}));
	}
	int32_t itemListenerNum = $nc($(model->getItemListeners()))->length;
	if (itemListenerNum != 1) {
		$throwNew($RuntimeException, $$str({"Expected at most one ItemListener object registered with DefaultButtonModel; found "_s, $$str(itemListenerNum), " listeners registered."_s}));
	}
}

void bug7189299::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug7189299$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7189299$2));
}

bug7189299::bug7189299() {
}

$Class* bug7189299::load$($String* name, bool initialize) {
	$loadClass(bug7189299, name, initialize, &_bug7189299_ClassInfo_, allocate$bug7189299);
	return class$;
}

$Class* bug7189299::class$ = nullptr;
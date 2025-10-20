#include <bug8058305.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

#undef EAST
#undef WEST

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;
using $Position$Bias = ::javax::swing::text::Position$Bias;

class bug8058305$$Lambda$createAndShowGUI : public $Runnable {
	$class(bug8058305$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8058305::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8058305$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8058305$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8058305$$Lambda$createAndShowGUI::*)()>(&bug8058305$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8058305$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8058305$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8058305$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(bug8058305$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8058305$$Lambda$createAndShowGUI::class$ = nullptr;

$MethodInfo _bug8058305_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8058305::*)()>(&bug8058305::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8058305::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8058305::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug8058305_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8058305",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8058305_MethodInfo_
};

$Object* allocate$bug8058305($Class* clazz) {
	return $of($alloc(bug8058305));
}

void bug8058305::init$() {
}

void bug8058305::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8058305$$Lambda$createAndShowGUI)));
}

void bug8058305::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	$var($JFormattedTextField, textField, $new($JFormattedTextField));
	$var($NavigationFilter, navigationFilter, $new($NavigationFilter));
	textField->setText("Test for Tests"_s);
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(textField));
	frame->pack();
	$init($Position$Bias);
	$var($Position$BiasArray, biasRet, $new($Position$BiasArray, {$Position$Bias::Forward}));
	try {
		navigationFilter->getNextVisualPositionFrom(textField, 100, $Position$Bias::Backward, $SwingConstants::EAST, biasRet);
		$throwNew($RuntimeException, "BadLocationException is not thrown!"_s);
	} catch ($BadLocationException&) {
		$catch();
	}
	frame->setVisible(true);
	try {
		navigationFilter->getNextVisualPositionFrom(textField, 200, $Position$Bias::Forward, $SwingConstants::WEST, biasRet);
		$throwNew($RuntimeException, "BadLocationException is not thrown!"_s);
	} catch ($BadLocationException&) {
		$catch();
	}
}

bug8058305::bug8058305() {
}

$Class* bug8058305::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8058305$$Lambda$createAndShowGUI::classInfo$.name)) {
			return bug8058305$$Lambda$createAndShowGUI::load$(name, initialize);
		}
	}
	$loadClass(bug8058305, name, initialize, &_bug8058305_ClassInfo_, allocate$bug8058305);
	return class$;
}

$Class* bug8058305::class$ = nullptr;
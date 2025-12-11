#include <TestJLabelWithHTMLText.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;

class TestJLabelWithHTMLText$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestJLabelWithHTMLText$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJLabelWithHTMLText::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJLabelWithHTMLText$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJLabelWithHTMLText$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJLabelWithHTMLText$$Lambda$lambda$main$0::*)()>(&TestJLabelWithHTMLText$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJLabelWithHTMLText$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJLabelWithHTMLText$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJLabelWithHTMLText$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestJLabelWithHTMLText$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJLabelWithHTMLText$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _TestJLabelWithHTMLText_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJLabelWithHTMLText::*)()>(&TestJLabelWithHTMLText::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestJLabelWithHTMLText::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJLabelWithHTMLText::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestJLabelWithHTMLText_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJLabelWithHTMLText",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestJLabelWithHTMLText_MethodInfo_
};

$Object* allocate$TestJLabelWithHTMLText($Class* clazz) {
	return $of($alloc(TestJLabelWithHTMLText));
}

void TestJLabelWithHTMLText::init$() {
}

void TestJLabelWithHTMLText::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJLabelWithHTMLText$$Lambda$lambda$main$0)));
}

void TestJLabelWithHTMLText::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel));
	try {
		$init($BasicHTML);
		label->putClientProperty($BasicHTML::documentBaseKey, $$new($URL, "http://localhost"_s));
	} catch ($MalformedURLException& e) {
		e->printStackTrace();
	}
	label->setText("<html><img src=\'\'></html>"_s);
}

TestJLabelWithHTMLText::TestJLabelWithHTMLText() {
}

$Class* TestJLabelWithHTMLText::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJLabelWithHTMLText$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestJLabelWithHTMLText$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(TestJLabelWithHTMLText, name, initialize, &_TestJLabelWithHTMLText_ClassInfo_, allocate$TestJLabelWithHTMLText);
	return class$;
}

$Class* TestJLabelWithHTMLText::class$ = nullptr;
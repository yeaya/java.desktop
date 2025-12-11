#include <bug4644444.h>

#include <Sysout4bug4644444.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $Sysout4bug4644444 = ::Sysout4bug4644444;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

class bug4644444$$Lambda$lambda$new$0 : public $Runnable {
	$class(bug4644444$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4644444* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4644444$$Lambda$lambda$new$0>());
	}
	bug4644444* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4644444$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4644444$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo bug4644444$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lbug4644444;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4644444$$Lambda$lambda$new$0::*)(bug4644444*)>(&bug4644444$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4644444$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4644444$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4644444$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(bug4644444$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4644444$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _bug4644444_FieldInfo_[] = {
	{"panel", "Ljavax/swing/JPanel;", nullptr, 0, $field(bug4644444, panel)},
	{"button", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4644444, button)},
	{}
};

$MethodInfo _bug4644444_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4644444::*)()>(&bug4644444::init$)), "java.lang.Exception"},
	{"destroy", "()V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4644444::*)()>(&bug4644444::lambda$new$0))},
	{"start", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _bug4644444_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4644444",
	"javax.swing.JApplet",
	nullptr,
	_bug4644444_FieldInfo_,
	_bug4644444_MethodInfo_
};

$Object* allocate$bug4644444($Class* clazz) {
	return $of($alloc(bug4644444));
}

void bug4644444::init$() {
	$JApplet::init$();
	$EventQueue::invokeLater(static_cast<$Runnable*>($$new(bug4644444$$Lambda$lambda$new$0, this)));
}

void bug4644444::init() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray2, instructionsSet, $new($StringArray2, {$$new($StringArray, {
		" Note : Incase of Assertion failure,user can enter"_s,
		" remarks by pressing \'Assertion Fail Remarks \' button"_s,
		" "_s,
		" You would see a testframe with a Button"_s,
		" "_s,
		" ON ALL PLATFORMS"_s,
		"1. Move the mouse on the button, "_s,
		"   so that the tooltip attached to it comes up "_s,
		"2. Tool tip should get adjusted it-self to show "_s,
		"       its full length of text. "_s,
		"3. If tooltip  text gets cut, "_s,
		"   press \'Assertion Fail\' else press \'Assertion Pass\'"_s,
		"4. Similarly, move the applet to different locations of the screen, "_s,
		"   & see if tooltip works properly everywhere. "_s
	})}));
	$var($StringArray, exceptionsSet, $new($StringArray, {"JToolTip is shown partially when placed very close to screen boundaries"_s}));
	$Sysout4bug4644444::setInstructionsWithExceptions(instructionsSet, exceptionsSet);
}

void bug4644444::start() {
}

void bug4644444::destroy() {
	if ($Sysout4bug4644444::failStatus()) {
		$var($String, failMsg, $Sysout4bug4644444::getFailureMessages());
		$assign(failMsg, $nc(failMsg)->replace(u'\n', u' '));
		$throwNew($RuntimeException, failMsg);
	}
}

void bug4644444::lambda$new$0() {
	$set(this, panel, $new($JPanel));
	$set(this, button, $new($JButton, "whooo"_s));
	$nc(this->button)->setToolTipText("Somthing really long 1234567890 1234567890 1234567890 1234567890 1234567890 1234567890 1234567890 1234567890"_s);
	$nc(this->panel)->add(static_cast<$Component*>(this->button));
	$nc($(getContentPane()))->add(static_cast<$Component*>(this->panel));
}

bug4644444::bug4644444() {
}

$Class* bug4644444::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4644444$$Lambda$lambda$new$0::classInfo$.name)) {
			return bug4644444$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(bug4644444, name, initialize, &_bug4644444_ClassInfo_, allocate$bug4644444);
	return class$;
}

$Class* bug4644444::class$ = nullptr;
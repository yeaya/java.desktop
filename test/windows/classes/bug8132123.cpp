#include <bug8132123.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef GRAY
#undef HORIZONTAL_SPLIT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8132123$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug8132123$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug8132123* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8132123$$Lambda$lambda$init$0>());
	}
	bug8132123* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug8132123$$Lambda$lambda$init$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug8132123$$Lambda$lambda$init$0, inst$)},
	{}
};
$MethodInfo bug8132123$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "(Lbug8132123;)V", nullptr, $PUBLIC, $method(static_cast<void(bug8132123$$Lambda$lambda$init$0::*)(bug8132123*)>(&bug8132123$$Lambda$lambda$init$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8132123$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8132123$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug8132123$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(bug8132123$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8132123$$Lambda$lambda$init$0::class$ = nullptr;

$MethodInfo _bug8132123_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8132123::*)()>(&bug8132123::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug8132123::*)()>(&bug8132123::lambda$init$0))},
	{}
};

$ClassInfo _bug8132123_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8132123",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug8132123_MethodInfo_
};

$Object* allocate$bug8132123($Class* clazz) {
	return $of($alloc(bug8132123));
}

void bug8132123::init$() {
	$JApplet::init$();
}

void bug8132123::init() {
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(bug8132123$$Lambda$lambda$init$0, this)));
}

void bug8132123::lambda$init$0() {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, left, $new($JPanel));
	$init($Color);
	left->setBackground($Color::GRAY);
	$var($JPanel, right, $new($JPanel));
	right->setBackground($Color::GRAY);
	$var($JSplitPane, splitPane, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, left, right));
	splitPane->setOneTouchExpandable(true);
	$nc($(getContentPane()))->add(static_cast<$Component*>(splitPane));
}

bug8132123::bug8132123() {
}

$Class* bug8132123::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8132123$$Lambda$lambda$init$0::classInfo$.name)) {
			return bug8132123$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$loadClass(bug8132123, name, initialize, &_bug8132123_ClassInfo_, allocate$bug8132123);
	return class$;
}

$Class* bug8132123::class$ = nullptr;
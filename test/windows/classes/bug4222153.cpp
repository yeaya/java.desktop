#include <bug4222153.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
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
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class bug4222153$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug4222153$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4222153* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4222153$$Lambda$lambda$init$0>());
	}
	bug4222153* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4222153$$Lambda$lambda$init$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4222153$$Lambda$lambda$init$0, inst$)},
	{}
};
$MethodInfo bug4222153$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "(Lbug4222153;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4222153$$Lambda$lambda$init$0::*)(bug4222153*)>(&bug4222153$$Lambda$lambda$init$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4222153$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4222153$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4222153$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(bug4222153$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4222153$$Lambda$lambda$init$0::class$ = nullptr;

$MethodInfo _bug4222153_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4222153::*)()>(&bug4222153::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4222153::*)()>(&bug4222153::lambda$init$0))},
	{}
};

$ClassInfo _bug4222153_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4222153",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug4222153_MethodInfo_
};

$Object* allocate$bug4222153($Class* clazz) {
	return $of($alloc(bug4222153));
}

void bug4222153::init$() {
	$JApplet::init$();
}

void bug4222153::init() {
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(bug4222153$$Lambda$lambda$init$0, this)));
}

void bug4222153::lambda$init$0() {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$nc($(getContentPane()))->add(static_cast<$Component*>($$new($JTable, 2, 2)));
}

bug4222153::bug4222153() {
}

$Class* bug4222153::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4222153$$Lambda$lambda$init$0::classInfo$.name)) {
			return bug4222153$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$loadClass(bug4222153, name, initialize, &_bug4222153_ClassInfo_, allocate$bug4222153);
	return class$;
}

$Class* bug4222153::class$ = nullptr;
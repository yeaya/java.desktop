#include <InternalFrameIcon.h>

#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
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
#include <javax/swing/Icon.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Icon = ::javax::swing::Icon;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class InternalFrameIcon$$Lambda$lambda$main$0 : public $Runnable {
	$class(InternalFrameIcon$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		InternalFrameIcon::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InternalFrameIcon$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InternalFrameIcon$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(InternalFrameIcon$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo InternalFrameIcon$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameIcon$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&InternalFrameIcon$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InternalFrameIcon$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"InternalFrameIcon$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* InternalFrameIcon$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(InternalFrameIcon$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InternalFrameIcon$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _InternalFrameIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameIcon::*)()>(&InternalFrameIcon::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&InternalFrameIcon::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InternalFrameIcon::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&InternalFrameIcon::setLookAndFeel))},
	{}
};

$ClassInfo _InternalFrameIcon_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"InternalFrameIcon",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_InternalFrameIcon_MethodInfo_
};

$Object* allocate$InternalFrameIcon($Class* clazz) {
	return $of($alloc(InternalFrameIcon));
}

void InternalFrameIcon::init$() {
}

void InternalFrameIcon::main($StringArray* args) {
	$init(InternalFrameIcon);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(InternalFrameIcon$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeAndWait($$new(InternalFrameIcon));
			}
		}
	}
}

void InternalFrameIcon::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(InternalFrameIcon);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$init($System);
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException&) {
		$catch();
	}
}

void InternalFrameIcon::run() {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc($($UIManager::getDefaults()))->get("InternalFrame.icon"_s));
	if (o != nullptr && !($instanceOf($Icon, o))) {
		$throwNew($RuntimeException, $$str({"Wrong object: "_s, o}));
	}
}

void InternalFrameIcon::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(InternalFrameIcon);
	setLookAndFeel(laf);
}

InternalFrameIcon::InternalFrameIcon() {
}

$Class* InternalFrameIcon::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InternalFrameIcon$$Lambda$lambda$main$0::classInfo$.name)) {
			return InternalFrameIcon$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(InternalFrameIcon, name, initialize, &_InternalFrameIcon_ClassInfo_, allocate$InternalFrameIcon);
	return class$;
}

$Class* InternalFrameIcon::class$ = nullptr;
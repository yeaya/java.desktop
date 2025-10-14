#include <TooltipImageTest.h>

#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef PATH

using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $URL = ::java::net::URL;
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TooltipImageTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(TooltipImageTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* PATH) {
		$set(this, PATH, PATH);
	}
	virtual void run() override {
		TooltipImageTest::lambda$main$0(PATH);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TooltipImageTest$$Lambda$lambda$main$0>());
	}
	$String* PATH = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TooltipImageTest$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"PATH", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TooltipImageTest$$Lambda$lambda$main$0, PATH)},
	{}
};
$MethodInfo TooltipImageTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TooltipImageTest$$Lambda$lambda$main$0::*)($String*)>(&TooltipImageTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TooltipImageTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TooltipImageTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TooltipImageTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TooltipImageTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TooltipImageTest$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _TooltipImageTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TooltipImageTest::*)()>(&TooltipImageTest::init$))},
	{"checkSize", "(Ljavax/swing/JToolTip;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JToolTip*,int32_t,int32_t)>(&TooltipImageTest::checkSize))},
	{"lambda$main$0", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*)>(&TooltipImageTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TooltipImageTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TooltipImageTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TooltipImageTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TooltipImageTest_MethodInfo_
};

$Object* allocate$TooltipImageTest($Class* clazz) {
	return $of($alloc(TooltipImageTest));
}

void TooltipImageTest::init$() {
}

void TooltipImageTest::checkSize($JToolTip* tip, int32_t width, int32_t height) {
	$var($Dimension, d, $nc(tip)->getPreferredSize());
	$var($Insets, insets, tip->getInsets());
	if (!(($nc(d)->width - $nc(insets)->right - insets->left - 6) == width) && !((d->height - insets->top - insets->bottom) == height)) {
		$throwNew($RuntimeException, $$str({"Test case fails: Expected width, height is "_s, $$str(width), ", "_s, $$str(height), " whereas actual width, height are "_s, $$str((d->width - insets->right - insets->left - 6)), " "_s, $$str((d->height - insets->top - insets->bottom))}));
	}
}

void TooltipImageTest::main($StringArray* args) {
	$load(TooltipImageTest);
	$beforeCallerSensitive();
	$var($String, PATH, $nc($(TooltipImageTest::class$->getResource("circle.png"_s)))->getPath());
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TooltipImageTest$$Lambda$lambda$main$0, PATH)));
	$init($System);
	$nc($System::out)->println("Test case passed."_s);
}

void TooltipImageTest::lambda$main$0($String* PATH) {
	$var($JToolTip, tip, $new($JToolTip));
	tip->setTipText($$str({"<html><img width=\"100\" src=\"file:///"_s, PATH, "\"></html>"_s}));
	checkSize(tip, 100, 100);
	tip->setTipText($$str({"<html><img height=\"100\" src=\"file:///"_s, PATH, "\"></html>"_s}));
	checkSize(tip, 100, 100);
	tip->setTipText($$str({"<html><img src=\"file:///"_s, PATH, "\"></html>"_s}));
	checkSize(tip, 200, 200);
	tip->setTipText($$str({"<html><img width=\"50\" src=\"file:///"_s, PATH, "\"></html>"_s}));
	checkSize(tip, 50, 50);
	tip->setTipText($$str({"<html><img height=\"50\" src=\"file:///"_s, PATH, "\"></html>"_s}));
	checkSize(tip, 50, 50);
	tip->setTipText($$str({"<html><img width=\"100\" height=\"50\" src=\"file:///"_s, PATH, "\"></html>"_s}));
	checkSize(tip, 100, 50);
}

TooltipImageTest::TooltipImageTest() {
}

$Class* TooltipImageTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TooltipImageTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return TooltipImageTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(TooltipImageTest, name, initialize, &_TooltipImageTest_ClassInfo_, allocate$TooltipImageTest);
	return class$;
}

$Class* TooltipImageTest::class$ = nullptr;
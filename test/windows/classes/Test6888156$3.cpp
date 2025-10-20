#include <Test6888156$3.h>

#include <Test6888156.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef OPAQUE

using $Test6888156 = ::Test6888156;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _Test6888156$3_FieldInfo_[] = {
	{"this$0", "LTest6888156;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$3, this$0)},
	{"val$laf", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$3, val$laf)},
	{}
};

$MethodInfo _Test6888156$3_MethodInfo_[] = {
	{"<init>", "(LTest6888156;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Test6888156$3::*)($Test6888156*,$String*)>(&Test6888156$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6888156$3_EnclosingMethodInfo_ = {
	"Test6888156",
	"test",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _Test6888156$3_InnerClassesInfo_[] = {
	{"Test6888156$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6888156$3_ClassInfo_ = {
	$ACC_SUPER,
	"Test6888156$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test6888156$3_FieldInfo_,
	_Test6888156$3_MethodInfo_,
	nullptr,
	&_Test6888156$3_EnclosingMethodInfo_,
	_Test6888156$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6888156"
};

$Object* allocate$Test6888156$3($Class* clazz) {
	return $of($alloc(Test6888156$3));
}

void Test6888156$3::init$($Test6888156* this$0, $String* val$laf) {
	$set(this, this$0, this$0);
	$set(this, val$laf, val$laf);
}

void Test6888156$3::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($System);
		$nc($System::out)->println(this->val$laf);
		$UIManager::setLookAndFeel(this->val$laf);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($System);
		$nc($System::err)->println($$str({this->val$laf, " is unsupported; continuing"_s}));
		return;
	}
	$SwingUtilities::updateComponentTreeUI(this->this$0->table);
	$nc(this->this$0->table)->setSize(100, 100);
	$nc(this->this$0->table)->paint($($$new($BufferedImage, 100, 100, $BufferedImage::OPAQUE)->getGraphics()));
}

Test6888156$3::Test6888156$3() {
}

$Class* Test6888156$3::load$($String* name, bool initialize) {
	$loadClass(Test6888156$3, name, initialize, &_Test6888156$3_ClassInfo_, allocate$Test6888156$3);
	return class$;
}

$Class* Test6888156$3::class$ = nullptr;
#include <Test6919629.h>

#include <Test6919629$1.h>
#include <Test6919629$2.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Test6919629$1 = ::Test6919629$1;
using $Test6919629$2 = ::Test6919629$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $JFrame = ::javax::swing::JFrame;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _Test6919629_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, 0, $field(Test6919629, f)},
	{"ref", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/swing/JLabel;>;", 0, $field(Test6919629, ref)},
	{}
};

$MethodInfo _Test6919629_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6919629::*)()>(&Test6919629::init$))},
	{"check", "()V", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6919629::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test6919629_InnerClassesInfo_[] = {
	{"Test6919629$2", nullptr, nullptr, 0},
	{"Test6919629$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6919629_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6919629",
	"java.lang.Object",
	nullptr,
	_Test6919629_FieldInfo_,
	_Test6919629_MethodInfo_,
	nullptr,
	nullptr,
	_Test6919629_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6919629$2,Test6919629$1"
};

$Object* allocate$Test6919629($Class* clazz) {
	return $of($alloc(Test6919629));
}

void Test6919629::init$() {
}

void Test6919629::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	$var(Test6919629, t, $new(Test6919629));
	t->test();
	$System::gc();
	t->check();
}

void Test6919629::test() {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($Test6919629$1, this));
	$Thread::sleep(2000);
	$SwingUtilities::invokeAndWait($$new($Test6919629$2, this));
	$Thread::sleep(2000);
}

void Test6919629::check() {
	if ($nc(this->ref)->get() != nullptr) {
		$throwNew($RuntimeException, "Failed: an unused component wasn\'t collected"_s);
	}
}

Test6919629::Test6919629() {
}

$Class* Test6919629::load$($String* name, bool initialize) {
	$loadClass(Test6919629, name, initialize, &_Test6919629_ClassInfo_, allocate$Test6919629);
	return class$;
}

$Class* Test6919629::class$ = nullptr;
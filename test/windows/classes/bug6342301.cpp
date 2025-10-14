#include <bug6342301.h>

#include <bug6342301$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug6342301$1 = ::bug6342301$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$FieldInfo _bug6342301_FieldInfo_[] = {
	{"tempDir", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug6342301, tempDir)},
	{}
};

$MethodInfo _bug6342301_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6342301::*)()>(&bug6342301::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6342301::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6342301_InnerClassesInfo_[] = {
	{"bug6342301$HackedFileChooser", "bug6342301", "HackedFileChooser", $PRIVATE | $STATIC},
	{"bug6342301$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6342301_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6342301",
	"java.lang.Object",
	nullptr,
	_bug6342301_FieldInfo_,
	_bug6342301_MethodInfo_,
	nullptr,
	nullptr,
	_bug6342301_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6342301$HackedFileChooser,bug6342301$1"
};

$Object* allocate$bug6342301($Class* clazz) {
	return $of($alloc(bug6342301));
}

$String* bug6342301::tempDir = nullptr;

void bug6342301::init$() {
}

void bug6342301::main($StringArray* args) {
	$init(bug6342301);
	$assignStatic(bug6342301::tempDir, $System::getProperty("java.io.tmpdir"_s));
	if ($nc(bug6342301::tempDir)->length() == 0) {
		$assignStatic(bug6342301::tempDir, $System::getProperty("user.home"_s));
	}
	$nc($System::out)->println($$str({"Temp directory: "_s, bug6342301::tempDir}));
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug6342301$1));
}

bug6342301::bug6342301() {
}

$Class* bug6342301::load$($String* name, bool initialize) {
	$loadClass(bug6342301, name, initialize, &_bug6342301_ClassInfo_, allocate$bug6342301);
	return class$;
}

$Class* bug6342301::class$ = nullptr;
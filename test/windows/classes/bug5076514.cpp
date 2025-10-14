#include <bug5076514.h>

#include <bug5076514$MySecurityManager.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD

using $bug5076514$MySecurityManager = ::bug5076514$MySecurityManager;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug5076514_FieldInfo_[] = {
	{"ACCESS_CLIPBOARD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug5076514, ACCESS_CLIPBOARD)},
	{"isCheckPermissionCalled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug5076514, isCheckPermissionCalled)},
	{}
};

$MethodInfo _bug5076514_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug5076514::*)()>(&bug5076514::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug5076514::main))},
	{}
};

$InnerClassInfo _bug5076514_InnerClassesInfo_[] = {
	{"bug5076514$MySecurityManager", "bug5076514", "MySecurityManager", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug5076514_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug5076514",
	"java.lang.Object",
	nullptr,
	_bug5076514_FieldInfo_,
	_bug5076514_MethodInfo_,
	nullptr,
	nullptr,
	_bug5076514_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug5076514$MySecurityManager"
};

$Object* allocate$bug5076514($Class* clazz) {
	return $of($alloc(bug5076514));
}

$String* bug5076514::ACCESS_CLIPBOARD = nullptr;
bool bug5076514::isCheckPermissionCalled = false;

void bug5076514::init$() {
}

void bug5076514::main($StringArray* args) {
	$init(bug5076514);
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($bug5076514$MySecurityManager));
	bool expected = !$GraphicsEnvironment::isHeadless();
	$var($JEditorPane, editor, $new($JEditorPane));
	editor->copy();
	if (bug5076514::isCheckPermissionCalled != expected) {
		$throwNew($RuntimeException, "JEditorPane\'s clipboard operations didn\'t call SecurityManager.checkPermission() with permission \'accessClipboard\' when there is a security manager installed"_s);
	}
}

void clinit$bug5076514($Class* class$) {
	$assignStatic(bug5076514::ACCESS_CLIPBOARD, "accessClipboard"_s);
	bug5076514::isCheckPermissionCalled = false;
}

bug5076514::bug5076514() {
}

$Class* bug5076514::load$($String* name, bool initialize) {
	$loadClass(bug5076514, name, initialize, &_bug5076514_ClassInfo_, clinit$bug5076514, allocate$bug5076514);
	return class$;
}

$Class* bug5076514::class$ = nullptr;
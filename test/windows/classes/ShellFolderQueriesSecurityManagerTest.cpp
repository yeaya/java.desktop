#include <ShellFolderQueriesSecurityManagerTest.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
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
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

class ShellFolderQueriesSecurityManagerTest$$Lambda$println : public $Consumer {
	$class(ShellFolderQueriesSecurityManagerTest$$Lambda$println, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ShellFolderQueriesSecurityManagerTest$$Lambda$println>());
	}
	$PrintStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ShellFolderQueriesSecurityManagerTest$$Lambda$println::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ShellFolderQueriesSecurityManagerTest$$Lambda$println, inst$)},
	{}
};
$MethodInfo ShellFolderQueriesSecurityManagerTest$$Lambda$println::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ShellFolderQueriesSecurityManagerTest$$Lambda$println::*)($PrintStream*)>(&ShellFolderQueriesSecurityManagerTest$$Lambda$println::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ShellFolderQueriesSecurityManagerTest$$Lambda$println::classInfo$ = {
	$PUBLIC | $FINAL,
	"ShellFolderQueriesSecurityManagerTest$$Lambda$println",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ShellFolderQueriesSecurityManagerTest$$Lambda$println::load$($String* name, bool initialize) {
	$loadClass(ShellFolderQueriesSecurityManagerTest$$Lambda$println, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ShellFolderQueriesSecurityManagerTest$$Lambda$println::class$ = nullptr;

$FieldInfo _ShellFolderQueriesSecurityManagerTest_FieldInfo_[] = {
	{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $STATIC | $FINAL, $staticField(ShellFolderQueriesSecurityManagerTest, fsv)},
	{}
};

$MethodInfo _ShellFolderQueriesSecurityManagerTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShellFolderQueriesSecurityManagerTest::*)()>(&ShellFolderQueriesSecurityManagerTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ShellFolderQueriesSecurityManagerTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ShellFolderQueriesSecurityManagerTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ShellFolderQueriesSecurityManagerTest",
	"java.lang.Object",
	nullptr,
	_ShellFolderQueriesSecurityManagerTest_FieldInfo_,
	_ShellFolderQueriesSecurityManagerTest_MethodInfo_
};

$Object* allocate$ShellFolderQueriesSecurityManagerTest($Class* clazz) {
	return $of($alloc(ShellFolderQueriesSecurityManagerTest));
}

$FileSystemView* ShellFolderQueriesSecurityManagerTest::fsv = nullptr;

void ShellFolderQueriesSecurityManagerTest::init$() {
}

void ShellFolderQueriesSecurityManagerTest::main($StringArray* args) {
	$init(ShellFolderQueriesSecurityManagerTest);
	$useLocalCurrentObjectStackCache();
	try {
		$var($FileArray, shortcuts, $nc(ShellFolderQueriesSecurityManagerTest::fsv)->getChooserShortcutPanelFiles());
		$init($System);
		$nc($($Arrays::asList(shortcuts)))->forEach(static_cast<$Consumer*>($$new(ShellFolderQueriesSecurityManagerTest$$Lambda$println, static_cast<$PrintStream*>($nc($System::out)))));
		if ($nc(shortcuts)->length != 0) {
			$throwNew($RuntimeException, "Shortcut panel files leaked from SecurityManager."_s);
		}
		$var($FileArray, cbFiles, $nc(ShellFolderQueriesSecurityManagerTest::fsv)->getChooserComboBoxFiles());
		$nc($($Arrays::asList(cbFiles)))->forEach(static_cast<$Consumer*>($$new(ShellFolderQueriesSecurityManagerTest$$Lambda$println, static_cast<$PrintStream*>($nc($System::out)))));
		if ($nc(cbFiles)->length != 0) {
			$throwNew($RuntimeException, "Combobox Files leaked from SecurityManager."_s);
		}
		$nc($System::out)->println("ok"_s);
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void clinit$ShellFolderQueriesSecurityManagerTest($Class* class$) {
	$assignStatic(ShellFolderQueriesSecurityManagerTest::fsv, $FileSystemView::getFileSystemView());
}

ShellFolderQueriesSecurityManagerTest::ShellFolderQueriesSecurityManagerTest() {
}

$Class* ShellFolderQueriesSecurityManagerTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ShellFolderQueriesSecurityManagerTest$$Lambda$println::classInfo$.name)) {
			return ShellFolderQueriesSecurityManagerTest$$Lambda$println::load$(name, initialize);
		}
	}
	$loadClass(ShellFolderQueriesSecurityManagerTest, name, initialize, &_ShellFolderQueriesSecurityManagerTest_ClassInfo_, clinit$ShellFolderQueriesSecurityManagerTest, allocate$ShellFolderQueriesSecurityManagerTest);
	return class$;
}

$Class* ShellFolderQueriesSecurityManagerTest::class$ = nullptr;
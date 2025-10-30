#include <sun/awt/Win32FontManager$3.h>

#include <java/io/File.h>
#include <sun/awt/Win32FontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Win32FontManager = ::sun::awt::Win32FontManager;

namespace sun {
	namespace awt {

$FieldInfo _Win32FontManager$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/Win32FontManager;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$3, this$0)},
	{"val$dirs", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$3, val$dirs)},
	{}
};

$MethodInfo _Win32FontManager$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/Win32FontManager;[Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Win32FontManager$3::*)($Win32FontManager*,$StringArray*)>(&Win32FontManager$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32FontManager$3_EnclosingMethodInfo_ = {
	"sun.awt.Win32FontManager",
	"getDefaultPlatformFont",
	"()[Ljava/lang/String;"
};

$InnerClassInfo _Win32FontManager$3_InnerClassesInfo_[] = {
	{"sun.awt.Win32FontManager$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32FontManager$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.Win32FontManager$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Win32FontManager$3_FieldInfo_,
	_Win32FontManager$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Win32FontManager$3_EnclosingMethodInfo_,
	_Win32FontManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.Win32FontManager"
};

$Object* allocate$Win32FontManager$3($Class* clazz) {
	return $of($alloc(Win32FontManager$3));
}

void Win32FontManager$3::init$($Win32FontManager* this$0, $StringArray* val$dirs) {
	$set(this, this$0, this$0);
	$set(this, val$dirs, val$dirs);
}

$Object* Win32FontManager$3::run() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->val$dirs)->length; ++i) {
		$init($File);
		$var($String, path, $str({$nc(this->val$dirs)->get(i), $File::separator, "arial.ttf"_s}));
		$var($File, file, $new($File, path));
		if (file->exists()) {
			return $of($nc(this->val$dirs)->get(i));
		}
	}
	return $of(nullptr);
}

Win32FontManager$3::Win32FontManager$3() {
}

$Class* Win32FontManager$3::load$($String* name, bool initialize) {
	$loadClass(Win32FontManager$3, name, initialize, &_Win32FontManager$3_ClassInfo_, allocate$Win32FontManager$3);
	return class$;
}

$Class* Win32FontManager$3::class$ = nullptr;

	} // awt
} // sun
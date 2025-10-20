#include <sun/awt/FontConfiguration$1.h>

#include <java/io/File.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

#undef FALSE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontConfiguration = ::sun::awt::FontConfiguration;

namespace sun {
	namespace awt {

$FieldInfo _FontConfiguration$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/FontConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$1, this$0)},
	{"val$fileName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$1, val$fileName)},
	{}
};

$MethodInfo _FontConfiguration$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/FontConfiguration;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(FontConfiguration$1::*)($FontConfiguration*,$String*)>(&FontConfiguration$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FontConfiguration$1_EnclosingMethodInfo_ = {
	"sun.awt.FontConfiguration",
	"fontFilesArePresent",
	"()Z"
};

$InnerClassInfo _FontConfiguration$1_InnerClassesInfo_[] = {
	{"sun.awt.FontConfiguration$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontConfiguration$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.FontConfiguration$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FontConfiguration$1_FieldInfo_,
	_FontConfiguration$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_FontConfiguration$1_EnclosingMethodInfo_,
	_FontConfiguration$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.FontConfiguration"
};

$Object* allocate$FontConfiguration$1($Class* clazz) {
	return $of($alloc(FontConfiguration$1));
}

void FontConfiguration$1::init$($FontConfiguration* this$0, $String* val$fileName) {
	$set(this, this$0, this$0);
	$set(this, val$fileName, val$fileName);
}

$Object* FontConfiguration$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, f, $new($File, this->val$fileName));
		return $of($Boolean::valueOf(f->exists()));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	$shouldNotReachHere();
}

FontConfiguration$1::FontConfiguration$1() {
}

$Class* FontConfiguration$1::load$($String* name, bool initialize) {
	$loadClass(FontConfiguration$1, name, initialize, &_FontConfiguration$1_ClassInfo_, allocate$FontConfiguration$1);
	return class$;
}

$Class* FontConfiguration$1::class$ = nullptr;

	} // awt
} // sun
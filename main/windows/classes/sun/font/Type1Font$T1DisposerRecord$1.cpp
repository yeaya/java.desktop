#include <sun/font/Type1Font$T1DisposerRecord$1.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Type1Font$T1DisposerRecord.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Type1Font$T1DisposerRecord = ::sun::font::Type1Font$T1DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _Type1Font$T1DisposerRecord$1_FieldInfo_[] = {
	{"this$0", "Lsun/font/Type1Font$T1DisposerRecord;", nullptr, $FINAL | $SYNTHETIC, $field(Type1Font$T1DisposerRecord$1, this$0)},
	{}
};

$MethodInfo _Type1Font$T1DisposerRecord$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Type1Font$T1DisposerRecord;)V", nullptr, 0, $method(static_cast<void(Type1Font$T1DisposerRecord$1::*)($Type1Font$T1DisposerRecord*)>(&Type1Font$T1DisposerRecord$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type1Font$T1DisposerRecord$1_EnclosingMethodInfo_ = {
	"sun.font.Type1Font$T1DisposerRecord",
	"dispose",
	"()V"
};

$InnerClassInfo _Type1Font$T1DisposerRecord$1_InnerClassesInfo_[] = {
	{"sun.font.Type1Font$T1DisposerRecord", "sun.font.Type1Font", "T1DisposerRecord", $PRIVATE | $STATIC},
	{"sun.font.Type1Font$T1DisposerRecord$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type1Font$T1DisposerRecord$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.Type1Font$T1DisposerRecord$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Type1Font$T1DisposerRecord$1_FieldInfo_,
	_Type1Font$T1DisposerRecord$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Type1Font$T1DisposerRecord$1_EnclosingMethodInfo_,
	_Type1Font$T1DisposerRecord$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.Type1Font"
};

$Object* allocate$Type1Font$T1DisposerRecord$1($Class* clazz) {
	return $of($alloc(Type1Font$T1DisposerRecord$1));
}

void Type1Font$T1DisposerRecord$1::init$($Type1Font$T1DisposerRecord* this$0) {
	$set(this, this$0, this$0);
}

$Object* Type1Font$T1DisposerRecord$1::run() {
	if (this->this$0->fileName != nullptr) {
		($$new($File, this->this$0->fileName))->delete$();
	}
	return $of(nullptr);
}

Type1Font$T1DisposerRecord$1::Type1Font$T1DisposerRecord$1() {
}

$Class* Type1Font$T1DisposerRecord$1::load$($String* name, bool initialize) {
	$loadClass(Type1Font$T1DisposerRecord$1, name, initialize, &_Type1Font$T1DisposerRecord$1_ClassInfo_, allocate$Type1Font$T1DisposerRecord$1);
	return class$;
}

$Class* Type1Font$T1DisposerRecord$1::class$ = nullptr;

	} // font
} // sun
#include <sun/font/Type1Font$T1DisposerRecord.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/font/Type1Font$T1DisposerRecord$1.h>
#include <sun/font/Type1Font.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Type1Font$T1DisposerRecord$1 = ::sun::font::Type1Font$T1DisposerRecord$1;

namespace sun {
	namespace font {

$FieldInfo _Type1Font$T1DisposerRecord_FieldInfo_[] = {
	{"fileName", "Ljava/lang/String;", nullptr, 0, $field(Type1Font$T1DisposerRecord, fileName)},
	{}
};

$MethodInfo _Type1Font$T1DisposerRecord_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Type1Font$T1DisposerRecord::*)($String*)>(&Type1Font$T1DisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _Type1Font$T1DisposerRecord_InnerClassesInfo_[] = {
	{"sun.font.Type1Font$T1DisposerRecord", "sun.font.Type1Font", "T1DisposerRecord", $PRIVATE | $STATIC},
	{"sun.font.Type1Font$T1DisposerRecord$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type1Font$T1DisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.Type1Font$T1DisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_Type1Font$T1DisposerRecord_FieldInfo_,
	_Type1Font$T1DisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_Type1Font$T1DisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.Type1Font"
};

$Object* allocate$Type1Font$T1DisposerRecord($Class* clazz) {
	return $of($alloc(Type1Font$T1DisposerRecord));
}

void Type1Font$T1DisposerRecord::init$($String* name) {
	$set(this, fileName, nullptr);
	$set(this, fileName, name);
}

void Type1Font$T1DisposerRecord::dispose() {
	$synchronized(this) {
		$beforeCallerSensitive();
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Type1Font$T1DisposerRecord$1, this)));
	}
}

Type1Font$T1DisposerRecord::Type1Font$T1DisposerRecord() {
}

$Class* Type1Font$T1DisposerRecord::load$($String* name, bool initialize) {
	$loadClass(Type1Font$T1DisposerRecord, name, initialize, &_Type1Font$T1DisposerRecord_ClassInfo_, allocate$Type1Font$T1DisposerRecord);
	return class$;
}

$Class* Type1Font$T1DisposerRecord::class$ = nullptr;

	} // font
} // sun
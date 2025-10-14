#include <sun/font/Type1Font$2.h>

#include <java/io/FileNotFoundException.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/Type1Font.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $Type1Font = ::sun::font::Type1Font;

namespace sun {
	namespace font {

$FieldInfo _Type1Font$2_FieldInfo_[] = {
	{"this$0", "Lsun/font/Type1Font;", nullptr, $FINAL | $SYNTHETIC, $field(Type1Font$2, this$0)},
	{}
};

$MethodInfo _Type1Font$2_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Type1Font;)V", nullptr, 0, $method(static_cast<void(Type1Font$2::*)($Type1Font*)>(&Type1Font$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Type1Font$2_EnclosingMethodInfo_ = {
	"sun.font.Type1Font",
	"readFile",
	"(Ljava/nio/ByteBuffer;)V"
};

$InnerClassInfo _Type1Font$2_InnerClassesInfo_[] = {
	{"sun.font.Type1Font$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type1Font$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.Type1Font$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Type1Font$2_FieldInfo_,
	_Type1Font$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Type1Font$2_EnclosingMethodInfo_,
	_Type1Font$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.Type1Font"
};

$Object* allocate$Type1Font$2($Class* clazz) {
	return $of($alloc(Type1Font$2));
}

void Type1Font$2::init$($Type1Font* this$0) {
	$set(this, this$0, this$0);
}

$Object* Type1Font$2::run() {
	try {
		return $of($new($RandomAccessFile, this->this$0->platName, "r"_s));
	} catch ($FileNotFoundException&) {
		$catch();
	}
	return $of(nullptr);
}

Type1Font$2::Type1Font$2() {
}

$Class* Type1Font$2::load$($String* name, bool initialize) {
	$loadClass(Type1Font$2, name, initialize, &_Type1Font$2_ClassInfo_, allocate$Type1Font$2);
	return class$;
}

$Class* Type1Font$2::class$ = nullptr;

	} // font
} // sun